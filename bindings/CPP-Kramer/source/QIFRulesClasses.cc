/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "QIFRulesClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class ApplicabilityBaseType

*/

ApplicabilityBaseType::ApplicabilityBaseType()
{}

ApplicabilityBaseType::~ApplicabilityBaseType() {}

void ApplicabilityBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/* ***************************************************************** */

/* class CirclePointSamplingStrategyType

*/

CirclePointSamplingStrategyType::CirclePointSamplingStrategyType()
{
  CirclePointSamplingStrategyTypePair = 0;
}

CirclePointSamplingStrategyType::CirclePointSamplingStrategyType(
 CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyTypePairIn)
{
  CirclePointSamplingStrategyTypePair = CirclePointSamplingStrategyTypePairIn;
}

CirclePointSamplingStrategyType::~CirclePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete CirclePointSamplingStrategyTypePair;
  #endif
}

void CirclePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  CirclePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyType::getCirclePointSamplingStrategyTypePair()
{return CirclePointSamplingStrategyTypePair;}

void CirclePointSamplingStrategyType::setCirclePointSamplingStrategyTypePair(CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyTypePairIn)
{CirclePointSamplingStrategyTypePair = CirclePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class CirclePointSamplingStrategyTypeChoicePair

*/

CirclePointSamplingStrategyTypeChoicePair::CirclePointSamplingStrategyTypeChoicePair() {}

CirclePointSamplingStrategyTypeChoicePair::CirclePointSamplingStrategyTypeChoicePair(
 whichOne CirclePointSamplingStrategyTypeTypeIn,
 CirclePointSamplingStrategyTypeVal CirclePointSamplingStrategyTypeValueIn)
{
  CirclePointSamplingStrategyTypeType = CirclePointSamplingStrategyTypeTypeIn;
  CirclePointSamplingStrategyTypeValue = CirclePointSamplingStrategyTypeValueIn;
}

CirclePointSamplingStrategyTypeChoicePair::~CirclePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (CirclePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete CirclePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (CirclePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete CirclePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void CirclePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (CirclePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      CirclePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (CirclePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      CirclePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class CircularArcPointSamplingStrategyType

*/

CircularArcPointSamplingStrategyType::CircularArcPointSamplingStrategyType()
{
  CircularArcPointSamplingStrategyTypePair = 0;
}

CircularArcPointSamplingStrategyType::CircularArcPointSamplingStrategyType(
 CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyTypePairIn)
{
  CircularArcPointSamplingStrategyTypePair = CircularArcPointSamplingStrategyTypePairIn;
}

CircularArcPointSamplingStrategyType::~CircularArcPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete CircularArcPointSamplingStrategyTypePair;
  #endif
}

void CircularArcPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  CircularArcPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyType::getCircularArcPointSamplingStrategyTypePair()
{return CircularArcPointSamplingStrategyTypePair;}

void CircularArcPointSamplingStrategyType::setCircularArcPointSamplingStrategyTypePair(CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyTypePairIn)
{CircularArcPointSamplingStrategyTypePair = CircularArcPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class CircularArcPointSamplingStrategyTypeChoicePair

*/

CircularArcPointSamplingStrategyTypeChoicePair::CircularArcPointSamplingStrategyTypeChoicePair() {}

CircularArcPointSamplingStrategyTypeChoicePair::CircularArcPointSamplingStrategyTypeChoicePair(
 whichOne CircularArcPointSamplingStrategyTypeTypeIn,
 CircularArcPointSamplingStrategyTypeVal CircularArcPointSamplingStrategyTypeValueIn)
{
  CircularArcPointSamplingStrategyTypeType = CircularArcPointSamplingStrategyTypeTypeIn;
  CircularArcPointSamplingStrategyTypeValue = CircularArcPointSamplingStrategyTypeValueIn;
}

CircularArcPointSamplingStrategyTypeChoicePair::~CircularArcPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (CircularArcPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete CircularArcPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (CircularArcPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete CircularArcPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void CircularArcPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (CircularArcPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      CircularArcPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (CircularArcPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      CircularArcPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ConePointSamplingStrategyType

*/

ConePointSamplingStrategyType::ConePointSamplingStrategyType()
{
  ConePointSamplingStrategyTypePair = 0;
}

ConePointSamplingStrategyType::ConePointSamplingStrategyType(
 ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyTypePairIn)
{
  ConePointSamplingStrategyTypePair = ConePointSamplingStrategyTypePairIn;
}

ConePointSamplingStrategyType::~ConePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ConePointSamplingStrategyTypePair;
  #endif
}

void ConePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ConePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyType::getConePointSamplingStrategyTypePair()
{return ConePointSamplingStrategyTypePair;}

void ConePointSamplingStrategyType::setConePointSamplingStrategyTypePair(ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyTypePairIn)
{ConePointSamplingStrategyTypePair = ConePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ConePointSamplingStrategyTypeChoicePair

*/

ConePointSamplingStrategyTypeChoicePair::ConePointSamplingStrategyTypeChoicePair() {}

ConePointSamplingStrategyTypeChoicePair::ConePointSamplingStrategyTypeChoicePair(
 whichOne ConePointSamplingStrategyTypeTypeIn,
 ConePointSamplingStrategyTypeVal ConePointSamplingStrategyTypeValueIn)
{
  ConePointSamplingStrategyTypeType = ConePointSamplingStrategyTypeTypeIn;
  ConePointSamplingStrategyTypeValue = ConePointSamplingStrategyTypeValueIn;
}

ConePointSamplingStrategyTypeChoicePair::~ConePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ConePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ConePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ConePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ConePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ConePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ConePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ConePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ConePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ConePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ConicalSegmentPointSamplingStrategyType

*/

ConicalSegmentPointSamplingStrategyType::ConicalSegmentPointSamplingStrategyType()
{
  ConicalSegmentPointSamplingStrategyTypePair = 0;
}

ConicalSegmentPointSamplingStrategyType::ConicalSegmentPointSamplingStrategyType(
 ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyTypePairIn)
{
  ConicalSegmentPointSamplingStrategyTypePair = ConicalSegmentPointSamplingStrategyTypePairIn;
}

ConicalSegmentPointSamplingStrategyType::~ConicalSegmentPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ConicalSegmentPointSamplingStrategyTypePair;
  #endif
}

void ConicalSegmentPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ConicalSegmentPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyType::getConicalSegmentPointSamplingStrategyTypePair()
{return ConicalSegmentPointSamplingStrategyTypePair;}

void ConicalSegmentPointSamplingStrategyType::setConicalSegmentPointSamplingStrategyTypePair(ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyTypePairIn)
{ConicalSegmentPointSamplingStrategyTypePair = ConicalSegmentPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ConicalSegmentPointSamplingStrategyTypeChoicePair

*/

ConicalSegmentPointSamplingStrategyTypeChoicePair::ConicalSegmentPointSamplingStrategyTypeChoicePair() {}

ConicalSegmentPointSamplingStrategyTypeChoicePair::ConicalSegmentPointSamplingStrategyTypeChoicePair(
 whichOne ConicalSegmentPointSamplingStrategyTypeTypeIn,
 ConicalSegmentPointSamplingStrategyTypeVal ConicalSegmentPointSamplingStrategyTypeValueIn)
{
  ConicalSegmentPointSamplingStrategyTypeType = ConicalSegmentPointSamplingStrategyTypeTypeIn;
  ConicalSegmentPointSamplingStrategyTypeValue = ConicalSegmentPointSamplingStrategyTypeValueIn;
}

ConicalSegmentPointSamplingStrategyTypeChoicePair::~ConicalSegmentPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ConicalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ConicalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ConicalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ConicalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ConicalSegmentPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ConicalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ConicalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ConicalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ConicalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class CylinderPointSamplingStrategyType

*/

CylinderPointSamplingStrategyType::CylinderPointSamplingStrategyType()
{
  CylinderPointSamplingStrategyTypePair = 0;
}

CylinderPointSamplingStrategyType::CylinderPointSamplingStrategyType(
 CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyTypePairIn)
{
  CylinderPointSamplingStrategyTypePair = CylinderPointSamplingStrategyTypePairIn;
}

CylinderPointSamplingStrategyType::~CylinderPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete CylinderPointSamplingStrategyTypePair;
  #endif
}

void CylinderPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  CylinderPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyType::getCylinderPointSamplingStrategyTypePair()
{return CylinderPointSamplingStrategyTypePair;}

void CylinderPointSamplingStrategyType::setCylinderPointSamplingStrategyTypePair(CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyTypePairIn)
{CylinderPointSamplingStrategyTypePair = CylinderPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class CylinderPointSamplingStrategyTypeChoicePair

*/

CylinderPointSamplingStrategyTypeChoicePair::CylinderPointSamplingStrategyTypeChoicePair() {}

CylinderPointSamplingStrategyTypeChoicePair::CylinderPointSamplingStrategyTypeChoicePair(
 whichOne CylinderPointSamplingStrategyTypeTypeIn,
 CylinderPointSamplingStrategyTypeVal CylinderPointSamplingStrategyTypeValueIn)
{
  CylinderPointSamplingStrategyTypeType = CylinderPointSamplingStrategyTypeTypeIn;
  CylinderPointSamplingStrategyTypeValue = CylinderPointSamplingStrategyTypeValueIn;
}

CylinderPointSamplingStrategyTypeChoicePair::~CylinderPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (CylinderPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete CylinderPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (CylinderPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete CylinderPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void CylinderPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (CylinderPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      CylinderPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (CylinderPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      CylinderPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class CylindricalSegmentPointSamplingStrategyType

*/

CylindricalSegmentPointSamplingStrategyType::CylindricalSegmentPointSamplingStrategyType()
{
  CylindricalSegmentPointSamplingStrategyTypePair = 0;
}

CylindricalSegmentPointSamplingStrategyType::CylindricalSegmentPointSamplingStrategyType(
 CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyTypePairIn)
{
  CylindricalSegmentPointSamplingStrategyTypePair = CylindricalSegmentPointSamplingStrategyTypePairIn;
}

CylindricalSegmentPointSamplingStrategyType::~CylindricalSegmentPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete CylindricalSegmentPointSamplingStrategyTypePair;
  #endif
}

void CylindricalSegmentPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  CylindricalSegmentPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyType::getCylindricalSegmentPointSamplingStrategyTypePair()
{return CylindricalSegmentPointSamplingStrategyTypePair;}

void CylindricalSegmentPointSamplingStrategyType::setCylindricalSegmentPointSamplingStrategyTypePair(CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyTypePairIn)
{CylindricalSegmentPointSamplingStrategyTypePair = CylindricalSegmentPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class CylindricalSegmentPointSamplingStrategyTypeChoicePair

*/

CylindricalSegmentPointSamplingStrategyTypeChoicePair::CylindricalSegmentPointSamplingStrategyTypeChoicePair() {}

CylindricalSegmentPointSamplingStrategyTypeChoicePair::CylindricalSegmentPointSamplingStrategyTypeChoicePair(
 whichOne CylindricalSegmentPointSamplingStrategyTypeTypeIn,
 CylindricalSegmentPointSamplingStrategyTypeVal CylindricalSegmentPointSamplingStrategyTypeValueIn)
{
  CylindricalSegmentPointSamplingStrategyTypeType = CylindricalSegmentPointSamplingStrategyTypeTypeIn;
  CylindricalSegmentPointSamplingStrategyTypeValue = CylindricalSegmentPointSamplingStrategyTypeValueIn;
}

CylindricalSegmentPointSamplingStrategyTypeChoicePair::~CylindricalSegmentPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (CylindricalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete CylindricalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (CylindricalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete CylindricalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void CylindricalSegmentPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (CylindricalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      CylindricalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (CylindricalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      CylindricalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class DMEDecisionBaseType

*/

DMEDecisionBaseType::DMEDecisionBaseType()
{
  Applicability = 0;
}

DMEDecisionBaseType::DMEDecisionBaseType(
 ApplicabilityBaseType * ApplicabilityIn)
{
  Applicability = ApplicabilityIn;
}

DMEDecisionBaseType::~DMEDecisionBaseType()
{
  #ifndef NODESTRUCT
  delete Applicability;
  #endif
}

void DMEDecisionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Applicability->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Applicability->printElement, "Must") == 0)
      {
        QIFMustType * typ;
        if ((typ = dynamic_cast<QIFMustType *>(Applicability)))
          {
            fprintf(outFile, "<Must");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad Must element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "MustNot") == 0)
      {
        QIFMustNotType * typ;
        if ((typ = dynamic_cast<QIFMustNotType *>(Applicability)))
          {
            fprintf(outFile, "<MustNot");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad MustNot element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "May") == 0)
      {
        QIFMayType * typ;
        if ((typ = dynamic_cast<QIFMayType *>(Applicability)))
          {
            fprintf(outFile, "<May");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad May element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Applicability type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

ApplicabilityBaseType * DMEDecisionBaseType::getApplicability()
{return Applicability;}

void DMEDecisionBaseType::setApplicability(ApplicabilityBaseType * ApplicabilityIn)
{Applicability = ApplicabilityIn;}

/* ***************************************************************** */

/* class DMEDecisionBaseTypeLisd

*/

DMEDecisionBaseTypeLisd::DMEDecisionBaseTypeLisd() {}

DMEDecisionBaseTypeLisd::DMEDecisionBaseTypeLisd(DMEDecisionBaseType * aDMEDecisionBaseType)
{
  push_back(aDMEDecisionBaseType);
}

DMEDecisionBaseTypeLisd::~DMEDecisionBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DMEDecisionBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DMEDecisionBaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class DMEDecisionClassType

*/

DMEDecisionClassType::DMEDecisionClassType() :
  DMEDecisionBaseType()
{
  DMEClassName = 0;
  ParameterConstraints = 0;
}

DMEDecisionClassType::DMEDecisionClassType(
 ApplicabilityBaseType * ApplicabilityIn,
 DMEClassNameEnumType * DMEClassNameIn,
 DMEParameterConstraintSetType * ParameterConstraintsIn) :
  DMEDecisionBaseType(
    ApplicabilityIn)
{
  DMEClassName = DMEClassNameIn;
  ParameterConstraints = ParameterConstraintsIn;
}

DMEDecisionClassType::~DMEDecisionClassType()
{
  #ifndef NODESTRUCT
  delete DMEClassName;
  delete ParameterConstraints;
  #endif
}

void DMEDecisionClassType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Applicability->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Applicability->printElement, "Must") == 0)
      {
        QIFMustType * typ;
        if ((typ = dynamic_cast<QIFMustType *>(Applicability)))
          {
            fprintf(outFile, "<Must");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad Must element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "MustNot") == 0)
      {
        QIFMustNotType * typ;
        if ((typ = dynamic_cast<QIFMustNotType *>(Applicability)))
          {
            fprintf(outFile, "<MustNot");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad MustNot element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "May") == 0)
      {
        QIFMayType * typ;
        if ((typ = dynamic_cast<QIFMayType *>(Applicability)))
          {
            fprintf(outFile, "<May");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad May element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Applicability type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(0, outFile);
  fprintf(outFile, "<DMEClassName");
  DMEClassName->printSelf(outFile);
  fprintf(outFile, "</DMEClassName>\n");
  if (ParameterConstraints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ParameterConstraints");
      ParameterConstraints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ParameterConstraints>\n");
    }
  doSpaces(-INDENT, outFile);
}

DMEClassNameEnumType * DMEDecisionClassType::getDMEClassName()
{return DMEClassName;}

void DMEDecisionClassType::setDMEClassName(DMEClassNameEnumType * DMEClassNameIn)
{DMEClassName = DMEClassNameIn;}

DMEParameterConstraintSetType * DMEDecisionClassType::getParameterConstraints()
{return ParameterConstraints;}

void DMEDecisionClassType::setParameterConstraints(DMEParameterConstraintSetType * ParameterConstraintsIn)
{ParameterConstraints = ParameterConstraintsIn;}

/* ***************************************************************** */

/* class DMEDecisionIdType

*/

DMEDecisionIdType::DMEDecisionIdType() :
  DMEDecisionBaseType()
{
  DMEId = 0;
}

DMEDecisionIdType::DMEDecisionIdType(
 ApplicabilityBaseType * ApplicabilityIn,
 QIFReferenceType * DMEIdIn) :
  DMEDecisionBaseType(
    ApplicabilityIn)
{
  DMEId = DMEIdIn;
}

DMEDecisionIdType::~DMEDecisionIdType()
{
  #ifndef NODESTRUCT
  delete DMEId;
  #endif
}

void DMEDecisionIdType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Applicability->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Applicability->printElement, "Must") == 0)
      {
        QIFMustType * typ;
        if ((typ = dynamic_cast<QIFMustType *>(Applicability)))
          {
            fprintf(outFile, "<Must");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad Must element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "MustNot") == 0)
      {
        QIFMustNotType * typ;
        if ((typ = dynamic_cast<QIFMustNotType *>(Applicability)))
          {
            fprintf(outFile, "<MustNot");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad MustNot element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "May") == 0)
      {
        QIFMayType * typ;
        if ((typ = dynamic_cast<QIFMayType *>(Applicability)))
          {
            fprintf(outFile, "<May");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad May element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Applicability type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(0, outFile);
  fprintf(outFile, "<DMEId");
  DMEId->printSelf(outFile);
  fprintf(outFile, "</DMEId>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * DMEDecisionIdType::getDMEId()
{return DMEId;}

void DMEDecisionIdType::setDMEId(QIFReferenceType * DMEIdIn)
{DMEId = DMEIdIn;}

/* ***************************************************************** */

/* class DMEDecisionMakeModelType

*/

DMEDecisionMakeModelType::DMEDecisionMakeModelType() :
  DMEDecisionBaseType()
{
  Manufacturer = 0;
  ModelNumber = 0;
  SerialNumber = 0;
}

DMEDecisionMakeModelType::DMEDecisionMakeModelType(
 ApplicabilityBaseType * ApplicabilityIn,
 XmlString * ManufacturerIn,
 XmlString * ModelNumberIn,
 XmlString * SerialNumberIn) :
  DMEDecisionBaseType(
    ApplicabilityIn)
{
  Manufacturer = ManufacturerIn;
  ModelNumber = ModelNumberIn;
  SerialNumber = SerialNumberIn;
}

DMEDecisionMakeModelType::~DMEDecisionMakeModelType()
{
  #ifndef NODESTRUCT
  delete Manufacturer;
  delete ModelNumber;
  delete SerialNumber;
  #endif
}

void DMEDecisionMakeModelType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Applicability->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Applicability->printElement, "Must") == 0)
      {
        QIFMustType * typ;
        if ((typ = dynamic_cast<QIFMustType *>(Applicability)))
          {
            fprintf(outFile, "<Must");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad Must element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "MustNot") == 0)
      {
        QIFMustNotType * typ;
        if ((typ = dynamic_cast<QIFMustNotType *>(Applicability)))
          {
            fprintf(outFile, "<MustNot");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad MustNot element\n");
            exit(1);
          }
      }
    else if (strcmp(Applicability->printElement, "May") == 0)
      {
        QIFMayType * typ;
        if ((typ = dynamic_cast<QIFMayType *>(Applicability)))
          {
            fprintf(outFile, "<May");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad May element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Applicability type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(0, outFile);
  fprintf(outFile, "<Manufacturer");
  Manufacturer->printSelf(outFile);
  fprintf(outFile, "</Manufacturer>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ModelNumber");
  ModelNumber->printSelf(outFile);
  fprintf(outFile, "</ModelNumber>\n");
  if (SerialNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SerialNumber");
      SerialNumber->printSelf(outFile);
      fprintf(outFile, "</SerialNumber>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * DMEDecisionMakeModelType::getManufacturer()
{return Manufacturer;}

void DMEDecisionMakeModelType::setManufacturer(XmlString * ManufacturerIn)
{Manufacturer = ManufacturerIn;}

XmlString * DMEDecisionMakeModelType::getModelNumber()
{return ModelNumber;}

void DMEDecisionMakeModelType::setModelNumber(XmlString * ModelNumberIn)
{ModelNumber = ModelNumberIn;}

XmlString * DMEDecisionMakeModelType::getSerialNumber()
{return SerialNumber;}

void DMEDecisionMakeModelType::setSerialNumber(XmlString * SerialNumberIn)
{SerialNumber = SerialNumberIn;}

/* ***************************************************************** */

/* class DMEParameterConstraintSetType

*/

DMEParameterConstraintSetType::DMEParameterConstraintSetType()
{
  n = 0;
  DMEParameterConstraint = 0;
}

DMEParameterConstraintSetType::DMEParameterConstraintSetType(
 DMEParameterConstraintTypeLisd * DMEParameterConstraintIn)
{
  n = 0;
  DMEParameterConstraint = DMEParameterConstraintIn;
}

DMEParameterConstraintSetType::DMEParameterConstraintSetType(
 NaturalType * nIn,
 DMEParameterConstraintTypeLisd * DMEParameterConstraintIn)
{
  n = nIn;
  DMEParameterConstraint = DMEParameterConstraintIn;
}

DMEParameterConstraintSetType::~DMEParameterConstraintSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DMEParameterConstraint;
  #endif
}

void DMEParameterConstraintSetType::printSelf(FILE * outFile)
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
    if (!DMEParameterConstraint)
      {
        fprintf(stderr, "DMEParameterConstraint list is missing\n");
        exit(1);
      }
    if (DMEParameterConstraint->size() == 0)
      {
        fprintf(stderr, "DMEParameterConstraint list is empty\n");
        exit(1);
      }
    std::list<DMEParameterConstraintType *>::iterator iter;
    for (iter = DMEParameterConstraint->begin();
         iter != DMEParameterConstraint->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DMEParameterConstraint");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DMEParameterConstraint>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DMEParameterConstraintSetType::badAttributes(
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
              fprintf(stderr, "two values for n in DMEParameterConstraintSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DMEParameterConstraintSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DMEParameterConstraintSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DMEParameterConstraintSetType\n");
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

NaturalType * DMEParameterConstraintSetType::getn()
{return n;}

void DMEParameterConstraintSetType::setn(NaturalType * nIn)
{n = nIn;}

DMEParameterConstraintTypeLisd * DMEParameterConstraintSetType::getDMEParameterConstraint()
{return DMEParameterConstraint;}

void DMEParameterConstraintSetType::setDMEParameterConstraint(DMEParameterConstraintTypeLisd * DMEParameterConstraintIn)
{DMEParameterConstraint = DMEParameterConstraintIn;}

/* ***************************************************************** */

/* class DMEParameterConstraintType

*/

DMEParameterConstraintType::DMEParameterConstraintType()
{
  ParameterName = 0;
  Comparison = 0;
  ArithmeticExpression = 0;
}

DMEParameterConstraintType::DMEParameterConstraintType(
 XmlToken * ParameterNameIn,
 ArithmeticComparisonEnumType * ComparisonIn,
 ArithmeticExpressionBaseType * ArithmeticExpressionIn)
{
  ParameterName = ParameterNameIn;
  Comparison = ComparisonIn;
  ArithmeticExpression = ArithmeticExpressionIn;
}

DMEParameterConstraintType::~DMEParameterConstraintType()
{
  #ifndef NODESTRUCT
  delete ParameterName;
  delete Comparison;
  delete ArithmeticExpression;
  #endif
}

void DMEParameterConstraintType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ParameterName");
  ParameterName->printSelf(outFile);
  fprintf(outFile, "</ParameterName>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Comparison");
  Comparison->printSelf(outFile);
  fprintf(outFile, "</Comparison>\n");
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

XmlToken * DMEParameterConstraintType::getParameterName()
{return ParameterName;}

void DMEParameterConstraintType::setParameterName(XmlToken * ParameterNameIn)
{ParameterName = ParameterNameIn;}

ArithmeticComparisonEnumType * DMEParameterConstraintType::getComparison()
{return Comparison;}

void DMEParameterConstraintType::setComparison(ArithmeticComparisonEnumType * ComparisonIn)
{Comparison = ComparisonIn;}

ArithmeticExpressionBaseType * DMEParameterConstraintType::getArithmeticExpression()
{return ArithmeticExpression;}

void DMEParameterConstraintType::setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/* ***************************************************************** */

/* class DMEParameterConstraintTypeLisd

*/

DMEParameterConstraintTypeLisd::DMEParameterConstraintTypeLisd() {}

DMEParameterConstraintTypeLisd::DMEParameterConstraintTypeLisd(DMEParameterConstraintType * aDMEParameterConstraintType)
{
  push_back(aDMEParameterConstraintType);
}

DMEParameterConstraintTypeLisd::~DMEParameterConstraintTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DMEParameterConstraintType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DMEParameterConstraintTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class DMESelectionRulesType

*/

DMESelectionRulesType::DMESelectionRulesType()
{
  defaultDesirability = 0;
  n = 0;
  DMEDecisionRule = 0;
}

DMESelectionRulesType::DMESelectionRulesType(
 IfThenDMERuleTypeLisd * DMEDecisionRuleIn)
{
  defaultDesirability = 0;
  n = 0;
  DMEDecisionRule = DMEDecisionRuleIn;
}

DMESelectionRulesType::DMESelectionRulesType(
 ZeroToOneType * defaultDesirabilityIn,
 NaturalType * nIn,
 IfThenDMERuleTypeLisd * DMEDecisionRuleIn)
{
  defaultDesirability = defaultDesirabilityIn;
  n = nIn;
  DMEDecisionRule = DMEDecisionRuleIn;
}

DMESelectionRulesType::~DMESelectionRulesType()
{
  #ifndef NODESTRUCT
  delete defaultDesirability;
  delete n;
  delete DMEDecisionRule;
  #endif
}

void DMESelectionRulesType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (defaultDesirability)
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
      fprintf(outFile, "defaultDesirability=\"");
      defaultDesirability->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
    if (!DMEDecisionRule)
      {
        fprintf(stderr, "DMEDecisionRule list is missing\n");
        exit(1);
      }
    if (DMEDecisionRule->size() == 0)
      {
        fprintf(stderr, "DMEDecisionRule list is empty\n");
        exit(1);
      }
    std::list<IfThenDMERuleType *>::iterator iter;
    for (iter = DMEDecisionRule->begin();
         iter != DMEDecisionRule->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DMEDecisionRule");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DMEDecisionRule>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DMESelectionRulesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "defaultDesirability")
        {
          ZeroToOneType * defaultDesirabilityVal;
          if (defaultDesirability)
            {
              fprintf(stderr, "two values for defaultDesirability in DMESelectionRulesType\n");
              returnValue = true;
              break;
            }
          defaultDesirabilityVal = new ZeroToOneType(decl->val.c_str());
          if (defaultDesirabilityVal->bad)
            {
              delete defaultDesirabilityVal;
              fprintf(stderr, "bad value %s for defaultDesirability in DMESelectionRulesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            defaultDesirability = defaultDesirabilityVal;
        }
      else if (decl->name == "n")
        {
          NaturalType * nVal;
          if (n)
            {
              fprintf(stderr, "two values for n in DMESelectionRulesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DMESelectionRulesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DMESelectionRulesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DMESelectionRulesType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete defaultDesirability;
      defaultDesirability = 0;
      delete n;
      n = 0;
    }
  return returnValue;
}

ZeroToOneType * DMESelectionRulesType::getdefaultDesirability()
{return defaultDesirability;}

void DMESelectionRulesType::setdefaultDesirability(ZeroToOneType * defaultDesirabilityIn)
{defaultDesirability = defaultDesirabilityIn;}

NaturalType * DMESelectionRulesType::getn()
{return n;}

void DMESelectionRulesType::setn(NaturalType * nIn)
{n = nIn;}

IfThenDMERuleTypeLisd * DMESelectionRulesType::getDMEDecisionRule()
{return DMEDecisionRule;}

void DMESelectionRulesType::setDMEDecisionRule(IfThenDMERuleTypeLisd * DMEDecisionRuleIn)
{DMEDecisionRule = DMEDecisionRuleIn;}

/* ***************************************************************** */

/* class DMEThenType

*/

DMEThenType::DMEThenType()
{
  n = 0;
  DMEDecision = 0;
}

DMEThenType::DMEThenType(
 DMEDecisionBaseTypeLisd * DMEDecisionIn)
{
  n = 0;
  DMEDecision = DMEDecisionIn;
}

DMEThenType::DMEThenType(
 NaturalType * nIn,
 DMEDecisionBaseTypeLisd * DMEDecisionIn)
{
  n = nIn;
  DMEDecision = DMEDecisionIn;
}

DMEThenType::~DMEThenType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DMEDecision;
  #endif
}

void DMEThenType::printSelf(FILE * outFile)
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
    if (!DMEDecision)
      {
        fprintf(stderr, "DMEDecision list is missing\n");
        exit(1);
      }
    if (DMEDecision->size() == 0)
      {
        fprintf(stderr, "DMEDecision list is empty\n");
        exit(1);
      }
    std::list<DMEDecisionBaseType *>::iterator iter;
    for (iter = DMEDecision->begin();
         iter != DMEDecision->end(); iter++)
      {
        DMEDecisionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "DMEDecisionClass") == 0)
          {
            DMEDecisionClassType * typ;
            if ((typ = dynamic_cast<DMEDecisionClassType *>(basie)))
              {
                fprintf(outFile, "<DMEDecisionClass");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DMEDecisionClass>\n");
              }
            else
              {
                fprintf(stderr, "bad DMEDecisionClass element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DMEDecisionId") == 0)
          {
            DMEDecisionIdType * typ;
            if ((typ = dynamic_cast<DMEDecisionIdType *>(basie)))
              {
                fprintf(outFile, "<DMEDecisionId");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DMEDecisionId>\n");
              }
            else
              {
                fprintf(stderr, "bad DMEDecisionId element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DMEDecisionMakeModel") == 0)
          {
            DMEDecisionMakeModelType * typ;
            if ((typ = dynamic_cast<DMEDecisionMakeModelType *>(basie)))
              {
                fprintf(outFile, "<DMEDecisionMakeModel");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DMEDecisionMakeModel>\n");
              }
            else
              {
                fprintf(stderr, "bad DMEDecisionMakeModel element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad DMEDecision type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DMEThenType::badAttributes(
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
              fprintf(stderr, "two values for n in DMEThenType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DMEThenType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DMEThenType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DMEThenType\n");
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

NaturalType * DMEThenType::getn()
{return n;}

void DMEThenType::setn(NaturalType * nIn)
{n = nIn;}

DMEDecisionBaseTypeLisd * DMEThenType::getDMEDecision()
{return DMEDecision;}

void DMEThenType::setDMEDecision(DMEDecisionBaseTypeLisd * DMEDecisionIn)
{DMEDecision = DMEDecisionIn;}

/* ***************************************************************** */

/* class EllipsePointSamplingStrategyType

*/

EllipsePointSamplingStrategyType::EllipsePointSamplingStrategyType()
{
  EllipsePointSamplingStrategyTypePair = 0;
}

EllipsePointSamplingStrategyType::EllipsePointSamplingStrategyType(
 EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyTypePairIn)
{
  EllipsePointSamplingStrategyTypePair = EllipsePointSamplingStrategyTypePairIn;
}

EllipsePointSamplingStrategyType::~EllipsePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete EllipsePointSamplingStrategyTypePair;
  #endif
}

void EllipsePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  EllipsePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyType::getEllipsePointSamplingStrategyTypePair()
{return EllipsePointSamplingStrategyTypePair;}

void EllipsePointSamplingStrategyType::setEllipsePointSamplingStrategyTypePair(EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyTypePairIn)
{EllipsePointSamplingStrategyTypePair = EllipsePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class EllipsePointSamplingStrategyTypeChoicePair

*/

EllipsePointSamplingStrategyTypeChoicePair::EllipsePointSamplingStrategyTypeChoicePair() {}

EllipsePointSamplingStrategyTypeChoicePair::EllipsePointSamplingStrategyTypeChoicePair(
 whichOne EllipsePointSamplingStrategyTypeTypeIn,
 EllipsePointSamplingStrategyTypeVal EllipsePointSamplingStrategyTypeValueIn)
{
  EllipsePointSamplingStrategyTypeType = EllipsePointSamplingStrategyTypeTypeIn;
  EllipsePointSamplingStrategyTypeValue = EllipsePointSamplingStrategyTypeValueIn;
}

EllipsePointSamplingStrategyTypeChoicePair::~EllipsePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (EllipsePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete EllipsePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (EllipsePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete EllipsePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void EllipsePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (EllipsePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      EllipsePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (EllipsePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      EllipsePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class EllipticalArcPointSamplingStrategyType

*/

EllipticalArcPointSamplingStrategyType::EllipticalArcPointSamplingStrategyType()
{
  EllipticalArcPointSamplingStrategyTypePair = 0;
}

EllipticalArcPointSamplingStrategyType::EllipticalArcPointSamplingStrategyType(
 EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyTypePairIn)
{
  EllipticalArcPointSamplingStrategyTypePair = EllipticalArcPointSamplingStrategyTypePairIn;
}

EllipticalArcPointSamplingStrategyType::~EllipticalArcPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete EllipticalArcPointSamplingStrategyTypePair;
  #endif
}

void EllipticalArcPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  EllipticalArcPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyType::getEllipticalArcPointSamplingStrategyTypePair()
{return EllipticalArcPointSamplingStrategyTypePair;}

void EllipticalArcPointSamplingStrategyType::setEllipticalArcPointSamplingStrategyTypePair(EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyTypePairIn)
{EllipticalArcPointSamplingStrategyTypePair = EllipticalArcPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class EllipticalArcPointSamplingStrategyTypeChoicePair

*/

EllipticalArcPointSamplingStrategyTypeChoicePair::EllipticalArcPointSamplingStrategyTypeChoicePair() {}

EllipticalArcPointSamplingStrategyTypeChoicePair::EllipticalArcPointSamplingStrategyTypeChoicePair(
 whichOne EllipticalArcPointSamplingStrategyTypeTypeIn,
 EllipticalArcPointSamplingStrategyTypeVal EllipticalArcPointSamplingStrategyTypeValueIn)
{
  EllipticalArcPointSamplingStrategyTypeType = EllipticalArcPointSamplingStrategyTypeTypeIn;
  EllipticalArcPointSamplingStrategyTypeValue = EllipticalArcPointSamplingStrategyTypeValueIn;
}

EllipticalArcPointSamplingStrategyTypeChoicePair::~EllipticalArcPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (EllipticalArcPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete EllipticalArcPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (EllipticalArcPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete EllipticalArcPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void EllipticalArcPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (EllipticalArcPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      EllipticalArcPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (EllipticalArcPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      EllipticalArcPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ElongatedCirclePointSamplingStrategyType

*/

ElongatedCirclePointSamplingStrategyType::ElongatedCirclePointSamplingStrategyType()
{
  ElongatedCirclePointSamplingStrategyTypePair = 0;
}

ElongatedCirclePointSamplingStrategyType::ElongatedCirclePointSamplingStrategyType(
 ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyTypePairIn)
{
  ElongatedCirclePointSamplingStrategyTypePair = ElongatedCirclePointSamplingStrategyTypePairIn;
}

ElongatedCirclePointSamplingStrategyType::~ElongatedCirclePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ElongatedCirclePointSamplingStrategyTypePair;
  #endif
}

void ElongatedCirclePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ElongatedCirclePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyType::getElongatedCirclePointSamplingStrategyTypePair()
{return ElongatedCirclePointSamplingStrategyTypePair;}

void ElongatedCirclePointSamplingStrategyType::setElongatedCirclePointSamplingStrategyTypePair(ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyTypePairIn)
{ElongatedCirclePointSamplingStrategyTypePair = ElongatedCirclePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ElongatedCirclePointSamplingStrategyTypeChoicePair

*/

ElongatedCirclePointSamplingStrategyTypeChoicePair::ElongatedCirclePointSamplingStrategyTypeChoicePair() {}

ElongatedCirclePointSamplingStrategyTypeChoicePair::ElongatedCirclePointSamplingStrategyTypeChoicePair(
 whichOne ElongatedCirclePointSamplingStrategyTypeTypeIn,
 ElongatedCirclePointSamplingStrategyTypeVal ElongatedCirclePointSamplingStrategyTypeValueIn)
{
  ElongatedCirclePointSamplingStrategyTypeType = ElongatedCirclePointSamplingStrategyTypeTypeIn;
  ElongatedCirclePointSamplingStrategyTypeValue = ElongatedCirclePointSamplingStrategyTypeValueIn;
}

ElongatedCirclePointSamplingStrategyTypeChoicePair::~ElongatedCirclePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ElongatedCirclePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ElongatedCirclePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ElongatedCirclePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ElongatedCirclePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ElongatedCirclePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ElongatedCirclePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ElongatedCirclePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ElongatedCirclePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ElongatedCirclePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ElongatedCylinderPointSamplingStrategyType

*/

ElongatedCylinderPointSamplingStrategyType::ElongatedCylinderPointSamplingStrategyType()
{
  ElongatedCylinderPointSamplingStrategyTypePair = 0;
}

ElongatedCylinderPointSamplingStrategyType::ElongatedCylinderPointSamplingStrategyType(
 ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyTypePairIn)
{
  ElongatedCylinderPointSamplingStrategyTypePair = ElongatedCylinderPointSamplingStrategyTypePairIn;
}

ElongatedCylinderPointSamplingStrategyType::~ElongatedCylinderPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ElongatedCylinderPointSamplingStrategyTypePair;
  #endif
}

void ElongatedCylinderPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ElongatedCylinderPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyType::getElongatedCylinderPointSamplingStrategyTypePair()
{return ElongatedCylinderPointSamplingStrategyTypePair;}

void ElongatedCylinderPointSamplingStrategyType::setElongatedCylinderPointSamplingStrategyTypePair(ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyTypePairIn)
{ElongatedCylinderPointSamplingStrategyTypePair = ElongatedCylinderPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ElongatedCylinderPointSamplingStrategyTypeChoicePair

*/

ElongatedCylinderPointSamplingStrategyTypeChoicePair::ElongatedCylinderPointSamplingStrategyTypeChoicePair() {}

ElongatedCylinderPointSamplingStrategyTypeChoicePair::ElongatedCylinderPointSamplingStrategyTypeChoicePair(
 whichOne ElongatedCylinderPointSamplingStrategyTypeTypeIn,
 ElongatedCylinderPointSamplingStrategyTypeVal ElongatedCylinderPointSamplingStrategyTypeValueIn)
{
  ElongatedCylinderPointSamplingStrategyTypeType = ElongatedCylinderPointSamplingStrategyTypeTypeIn;
  ElongatedCylinderPointSamplingStrategyTypeValue = ElongatedCylinderPointSamplingStrategyTypeValueIn;
}

ElongatedCylinderPointSamplingStrategyTypeChoicePair::~ElongatedCylinderPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ElongatedCylinderPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ElongatedCylinderPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ElongatedCylinderPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ElongatedCylinderPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ElongatedCylinderPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ElongatedCylinderPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ElongatedCylinderPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ElongatedCylinderPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ElongatedCylinderPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ElseRuleType

*/

ElseRuleType::ElseRuleType() :
  PointRuleBaseType()
{
  ThenPoints = 0;
}

ElseRuleType::ElseRuleType(
 QPIdType * UUIDIn,
 ThenPointsType * ThenPointsIn) :
  PointRuleBaseType(
    UUIDIn)
{
  ThenPoints = ThenPointsIn;
}

ElseRuleType::ElseRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 ThenPointsType * ThenPointsIn) :
  PointRuleBaseType(
    nameIn,
    UUIDIn)
{
  ThenPoints = ThenPointsIn;
}

ElseRuleType::~ElseRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPoints;
  #endif
}

void ElseRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ThenPoints");
  ThenPoints->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThenPoints>\n");
  doSpaces(-INDENT, outFile);
}

bool ElseRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in ElseRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in ElseRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ElseRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ThenPointsType * ElseRuleType::getThenPoints()
{return ThenPoints;}

void ElseRuleType::setThenPoints(ThenPointsType * ThenPointsIn)
{ThenPoints = ThenPointsIn;}

/* ***************************************************************** */

/* class ExtrudedCrossSectionPointSamplingStrategyType

*/

ExtrudedCrossSectionPointSamplingStrategyType::ExtrudedCrossSectionPointSamplingStrategyType()
{
  ExtrudedCrossSectionPointSamplingStrategyTypePair = 0;
}

ExtrudedCrossSectionPointSamplingStrategyType::ExtrudedCrossSectionPointSamplingStrategyType(
 ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyTypePairIn)
{
  ExtrudedCrossSectionPointSamplingStrategyTypePair = ExtrudedCrossSectionPointSamplingStrategyTypePairIn;
}

ExtrudedCrossSectionPointSamplingStrategyType::~ExtrudedCrossSectionPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ExtrudedCrossSectionPointSamplingStrategyTypePair;
  #endif
}

void ExtrudedCrossSectionPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ExtrudedCrossSectionPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyType::getExtrudedCrossSectionPointSamplingStrategyTypePair()
{return ExtrudedCrossSectionPointSamplingStrategyTypePair;}

void ExtrudedCrossSectionPointSamplingStrategyType::setExtrudedCrossSectionPointSamplingStrategyTypePair(ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyTypePairIn)
{ExtrudedCrossSectionPointSamplingStrategyTypePair = ExtrudedCrossSectionPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair

*/

ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair::ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair() {}

ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair::ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair(
 whichOne ExtrudedCrossSectionPointSamplingStrategyTypeTypeIn,
 ExtrudedCrossSectionPointSamplingStrategyTypeVal ExtrudedCrossSectionPointSamplingStrategyTypeValueIn)
{
  ExtrudedCrossSectionPointSamplingStrategyTypeType = ExtrudedCrossSectionPointSamplingStrategyTypeTypeIn;
  ExtrudedCrossSectionPointSamplingStrategyTypeValue = ExtrudedCrossSectionPointSamplingStrategyTypeValueIn;
}

ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair::~ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ExtrudedCrossSectionPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ExtrudedCrossSectionPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ExtrudedCrossSectionPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ExtrudedCrossSectionPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ExtrudedCrossSectionPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ExtrudedCrossSectionPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ExtrudedCrossSectionPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ExtrudedCrossSectionPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class FeatureRulesType

*/

FeatureRulesType::FeatureRulesType()
{
  IfThenElseFeatureRules = 0;
  MaxFeatureRules = 0;
}

FeatureRulesType::FeatureRulesType(
 IfThenElseFeatureRulesType * IfThenElseFeatureRulesIn,
 MaxFeatureRulesType * MaxFeatureRulesIn)
{
  IfThenElseFeatureRules = IfThenElseFeatureRulesIn;
  MaxFeatureRules = MaxFeatureRulesIn;
}

FeatureRulesType::~FeatureRulesType()
{
  #ifndef NODESTRUCT
  delete IfThenElseFeatureRules;
  delete MaxFeatureRules;
  #endif
}

void FeatureRulesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (IfThenElseFeatureRules)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<IfThenElseFeatureRules");
      IfThenElseFeatureRules->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</IfThenElseFeatureRules>\n");
    }
  if (MaxFeatureRules)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaxFeatureRules");
      MaxFeatureRules->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaxFeatureRules>\n");
    }
  doSpaces(-INDENT, outFile);
}

IfThenElseFeatureRulesType * FeatureRulesType::getIfThenElseFeatureRules()
{return IfThenElseFeatureRules;}

void FeatureRulesType::setIfThenElseFeatureRules(IfThenElseFeatureRulesType * IfThenElseFeatureRulesIn)
{IfThenElseFeatureRules = IfThenElseFeatureRulesIn;}

MaxFeatureRulesType * FeatureRulesType::getMaxFeatureRules()
{return MaxFeatureRules;}

void FeatureRulesType::setMaxFeatureRules(MaxFeatureRulesType * MaxFeatureRulesIn)
{MaxFeatureRules = MaxFeatureRulesIn;}

/* ***************************************************************** */

/* class IfThenCircleRuleType

*/

IfThenCircleRuleType::IfThenCircleRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenCircleRuleType::IfThenCircleRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CirclePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCircleRuleType::IfThenCircleRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CirclePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCircleRuleType::~IfThenCircleRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenCircleRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenCircleRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenCircleRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenCircleRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenCircleRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

CirclePointSamplingStrategyType * IfThenCircleRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenCircleRuleType::setThenPointStrategy(CirclePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenCircleRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenCircleRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenCircularArcRuleType

*/

IfThenCircularArcRuleType::IfThenCircularArcRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenCircularArcRuleType::IfThenCircularArcRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CircularArcPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCircularArcRuleType::IfThenCircularArcRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CircularArcPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCircularArcRuleType::~IfThenCircularArcRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenCircularArcRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenCircularArcRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenCircularArcRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenCircularArcRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenCircularArcRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

CircularArcPointSamplingStrategyType * IfThenCircularArcRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenCircularArcRuleType::setThenPointStrategy(CircularArcPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenCircularArcRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenCircularArcRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenConeRuleType

*/

IfThenConeRuleType::IfThenConeRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenConeRuleType::IfThenConeRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ConePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenConeRuleType::IfThenConeRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ConePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenConeRuleType::~IfThenConeRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenConeRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenConeRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenConeRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenConeRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenConeRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ConePointSamplingStrategyType * IfThenConeRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenConeRuleType::setThenPointStrategy(ConePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenConeRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenConeRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenConicalSegmentRuleType

*/

IfThenConicalSegmentRuleType::IfThenConicalSegmentRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenConicalSegmentRuleType::IfThenConicalSegmentRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenConicalSegmentRuleType::IfThenConicalSegmentRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenConicalSegmentRuleType::~IfThenConicalSegmentRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenConicalSegmentRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenConicalSegmentRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenConicalSegmentRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenConicalSegmentRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenConicalSegmentRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ConicalSegmentPointSamplingStrategyType * IfThenConicalSegmentRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenConicalSegmentRuleType::setThenPointStrategy(ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenConicalSegmentRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenConicalSegmentRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenCurveRuleType

*/

IfThenCurveRuleType::IfThenCurveRuleType() :
  IfThenFeatureRuleType()
{
}

IfThenCurveRuleType::IfThenCurveRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
}

IfThenCurveRuleType::IfThenCurveRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
}

IfThenCurveRuleType::~IfThenCurveRuleType()
{
  #ifndef NODESTRUCT
  #endif
}

void IfThenCurveRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenCurveRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenCurveRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenCurveRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenCurveRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class IfThenCylinderRuleType

*/

IfThenCylinderRuleType::IfThenCylinderRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenCylinderRuleType::IfThenCylinderRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CylinderPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCylinderRuleType::IfThenCylinderRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CylinderPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCylinderRuleType::~IfThenCylinderRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenCylinderRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenCylinderRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenCylinderRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenCylinderRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenCylinderRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

CylinderPointSamplingStrategyType * IfThenCylinderRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenCylinderRuleType::setThenPointStrategy(CylinderPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenCylinderRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenCylinderRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenCylindricalSegmentRuleType

*/

IfThenCylindricalSegmentRuleType::IfThenCylindricalSegmentRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenCylindricalSegmentRuleType::IfThenCylindricalSegmentRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCylindricalSegmentRuleType::IfThenCylindricalSegmentRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenCylindricalSegmentRuleType::~IfThenCylindricalSegmentRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenCylindricalSegmentRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenCylindricalSegmentRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenCylindricalSegmentRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenCylindricalSegmentRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenCylindricalSegmentRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

CylindricalSegmentPointSamplingStrategyType * IfThenCylindricalSegmentRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenCylindricalSegmentRuleType::setThenPointStrategy(CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenCylindricalSegmentRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenCylindricalSegmentRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenDMERuleType

*/

IfThenDMERuleType::IfThenDMERuleType() :
  QIFRuleBaseType()
{
  BooleanExpression = 0;
  DMEThen = 0;
}

IfThenDMERuleType::IfThenDMERuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 DMEThenType * DMEThenIn) :
  QIFRuleBaseType(
    UUIDIn)
{
  BooleanExpression = BooleanExpressionIn;
  DMEThen = DMEThenIn;
}

IfThenDMERuleType::IfThenDMERuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 DMEThenType * DMEThenIn) :
  QIFRuleBaseType(
    nameIn,
    UUIDIn)
{
  BooleanExpression = BooleanExpressionIn;
  DMEThen = DMEThenIn;
}

IfThenDMERuleType::~IfThenDMERuleType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  delete DMEThen;
  #endif
}

void IfThenDMERuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<DMEThen");
  DMEThen->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</DMEThen>\n");
  doSpaces(-INDENT, outFile);
}

bool IfThenDMERuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenDMERuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenDMERuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenDMERuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

BooleanExpressionBaseType * IfThenDMERuleType::getBooleanExpression()
{return BooleanExpression;}

void IfThenDMERuleType::setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

DMEThenType * IfThenDMERuleType::getDMEThen()
{return DMEThen;}

void IfThenDMERuleType::setDMEThen(DMEThenType * DMEThenIn)
{DMEThen = DMEThenIn;}

/* ***************************************************************** */

/* class IfThenDMERuleTypeLisd

*/

IfThenDMERuleTypeLisd::IfThenDMERuleTypeLisd() {}

IfThenDMERuleTypeLisd::IfThenDMERuleTypeLisd(IfThenDMERuleType * aIfThenDMERuleType)
{
  push_back(aIfThenDMERuleType);
}

IfThenDMERuleTypeLisd::~IfThenDMERuleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<IfThenDMERuleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void IfThenDMERuleTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class IfThenEllipseRuleType

*/

IfThenEllipseRuleType::IfThenEllipseRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenEllipseRuleType::IfThenEllipseRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 EllipsePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenEllipseRuleType::IfThenEllipseRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 EllipsePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenEllipseRuleType::~IfThenEllipseRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenEllipseRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenEllipseRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenEllipseRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenEllipseRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenEllipseRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

EllipsePointSamplingStrategyType * IfThenEllipseRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenEllipseRuleType::setThenPointStrategy(EllipsePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenEllipseRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenEllipseRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenEllipticalArcRuleType

*/

IfThenEllipticalArcRuleType::IfThenEllipticalArcRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenEllipticalArcRuleType::IfThenEllipticalArcRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenEllipticalArcRuleType::IfThenEllipticalArcRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenEllipticalArcRuleType::~IfThenEllipticalArcRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenEllipticalArcRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenEllipticalArcRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenEllipticalArcRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenEllipticalArcRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenEllipticalArcRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

EllipticalArcPointSamplingStrategyType * IfThenEllipticalArcRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenEllipticalArcRuleType::setThenPointStrategy(EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenEllipticalArcRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenEllipticalArcRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenElongatedCircleRuleType

*/

IfThenElongatedCircleRuleType::IfThenElongatedCircleRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenElongatedCircleRuleType::IfThenElongatedCircleRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenElongatedCircleRuleType::IfThenElongatedCircleRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenElongatedCircleRuleType::~IfThenElongatedCircleRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenElongatedCircleRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenElongatedCircleRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenElongatedCircleRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenElongatedCircleRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenElongatedCircleRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ElongatedCirclePointSamplingStrategyType * IfThenElongatedCircleRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenElongatedCircleRuleType::setThenPointStrategy(ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenElongatedCircleRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenElongatedCircleRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenElongatedCylinderRuleType

*/

IfThenElongatedCylinderRuleType::IfThenElongatedCylinderRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenElongatedCylinderRuleType::IfThenElongatedCylinderRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenElongatedCylinderRuleType::IfThenElongatedCylinderRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenElongatedCylinderRuleType::~IfThenElongatedCylinderRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenElongatedCylinderRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenElongatedCylinderRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenElongatedCylinderRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenElongatedCylinderRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenElongatedCylinderRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ElongatedCylinderPointSamplingStrategyType * IfThenElongatedCylinderRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenElongatedCylinderRuleType::setThenPointStrategy(ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenElongatedCylinderRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenElongatedCylinderRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenElseFeatureRulesType

*/

IfThenElseFeatureRulesType::IfThenElseFeatureRulesType()
{
  n = 0;
  IfThenFeatureRule = 0;
  Else = 0;
}

IfThenElseFeatureRulesType::IfThenElseFeatureRulesType(
 IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
 ElseRuleType * ElseIn)
{
  n = 0;
  IfThenFeatureRule = IfThenFeatureRuleIn;
  Else = ElseIn;
}

IfThenElseFeatureRulesType::IfThenElseFeatureRulesType(
 NaturalType * nIn,
 IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
 ElseRuleType * ElseIn)
{
  n = nIn;
  IfThenFeatureRule = IfThenFeatureRuleIn;
  Else = ElseIn;
}

IfThenElseFeatureRulesType::~IfThenElseFeatureRulesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete IfThenFeatureRule;
  delete Else;
  #endif
}

void IfThenElseFeatureRulesType::printSelf(FILE * outFile)
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
    if (!IfThenFeatureRule)
      {
        fprintf(stderr, "IfThenFeatureRule list is missing\n");
        exit(1);
      }
    if (IfThenFeatureRule->size() == 0)
      {
        fprintf(stderr, "IfThenFeatureRule list is empty\n");
        exit(1);
      }
    std::list<IfThenFeatureRuleType *>::iterator iter;
    for (iter = IfThenFeatureRule->begin();
         iter != IfThenFeatureRule->end(); iter++)
      {
        IfThenFeatureRuleType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "IfThenCurveRule") == 0)
          {
            IfThenCurveRuleType * typ;
            if ((typ = dynamic_cast<IfThenCurveRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCurveRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCurveRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCurveRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSurfaceRule") == 0)
          {
            IfThenSurfaceRuleType * typ;
            if ((typ = dynamic_cast<IfThenSurfaceRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSurfaceRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSurfaceRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSurfaceRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCircleRule") == 0)
          {
            IfThenCircleRuleType * typ;
            if ((typ = dynamic_cast<IfThenCircleRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCircleRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCircleRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCircleRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCircularArcRule") == 0)
          {
            IfThenCircularArcRuleType * typ;
            if ((typ = dynamic_cast<IfThenCircularArcRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCircularArcRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCircularArcRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCircularArcRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenConeRule") == 0)
          {
            IfThenConeRuleType * typ;
            if ((typ = dynamic_cast<IfThenConeRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenConeRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenConeRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenConeRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenConicalSegmentRule") == 0)
          {
            IfThenConicalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenConicalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenConicalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenConicalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenConicalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCylinderRule") == 0)
          {
            IfThenCylinderRuleType * typ;
            if ((typ = dynamic_cast<IfThenCylinderRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCylinderRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCylinderRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCylinderRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCylindricalSegmentRule") == 0)
          {
            IfThenCylindricalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenCylindricalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCylindricalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCylindricalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCylindricalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenEllipseRule") == 0)
          {
            IfThenEllipseRuleType * typ;
            if ((typ = dynamic_cast<IfThenEllipseRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenEllipseRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenEllipseRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenEllipseRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenEllipticalArcRule") == 0)
          {
            IfThenEllipticalArcRuleType * typ;
            if ((typ = dynamic_cast<IfThenEllipticalArcRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenEllipticalArcRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenEllipticalArcRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenEllipticalArcRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenElongatedCircleRule") == 0)
          {
            IfThenElongatedCircleRuleType * typ;
            if ((typ = dynamic_cast<IfThenElongatedCircleRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenElongatedCircleRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenElongatedCircleRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenElongatedCircleRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenElongatedCylinderRule") == 0)
          {
            IfThenElongatedCylinderRuleType * typ;
            if ((typ = dynamic_cast<IfThenElongatedCylinderRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenElongatedCylinderRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenElongatedCylinderRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenElongatedCylinderRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenExtrudedCrossSectionRule") == 0)
          {
            IfThenExtrudedCrossSectionRuleType * typ;
            if ((typ = dynamic_cast<IfThenExtrudedCrossSectionRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenExtrudedCrossSectionRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenExtrudedCrossSectionRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenExtrudedCrossSectionRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenLineRule") == 0)
          {
            IfThenLineRuleType * typ;
            if ((typ = dynamic_cast<IfThenLineRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenLineRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenLineRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenLineRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeAngledLinesRule") == 0)
          {
            IfThenOppositeAngledLinesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeAngledLinesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeAngledLinesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeAngledLinesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeAngledLinesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeAngledPlanesRule") == 0)
          {
            IfThenOppositeAngledPlanesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeAngledPlanesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeAngledPlanesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeAngledPlanesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeAngledPlanesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeParallelLinesRule") == 0)
          {
            IfThenOppositeParallelLinesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeParallelLinesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeParallelLinesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeParallelLinesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeParallelLinesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeParallelPlanesRule") == 0)
          {
            IfThenOppositeParallelPlanesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeParallelPlanesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeParallelPlanesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeParallelPlanesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeParallelPlanesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPlaneRule") == 0)
          {
            IfThenPlaneRuleType * typ;
            if ((typ = dynamic_cast<IfThenPlaneRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPlaneRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPlaneRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPlaneRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointDefinedCurveRule") == 0)
          {
            IfThenPointDefinedCurveRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointDefinedCurveRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointDefinedCurveRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointDefinedCurveRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointDefinedCurveRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointDefinedSurfaceRule") == 0)
          {
            IfThenPointDefinedSurfaceRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointDefinedSurfaceRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointDefinedSurfaceRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointDefinedSurfaceRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointDefinedSurfaceRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointRule") == 0)
          {
            IfThenPointRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSphereRule") == 0)
          {
            IfThenSphereRuleType * typ;
            if ((typ = dynamic_cast<IfThenSphereRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSphereRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSphereRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSphereRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSphericalSegmentRule") == 0)
          {
            IfThenSphericalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenSphericalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSphericalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSphericalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSphericalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSurfaceOfRevolutionRule") == 0)
          {
            IfThenSurfaceOfRevolutionRuleType * typ;
            if ((typ = dynamic_cast<IfThenSurfaceOfRevolutionRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSurfaceOfRevolutionRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSurfaceOfRevolutionRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSurfaceOfRevolutionRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenToroidalSegmentRule") == 0)
          {
            IfThenToroidalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenToroidalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenToroidalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenToroidalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenToroidalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenTorusRule") == 0)
          {
            IfThenTorusRuleType * typ;
            if ((typ = dynamic_cast<IfThenTorusRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenTorusRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenTorusRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenTorusRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenFeatureRule") == 0)
          {
            IfThenFeatureRuleType * typ;
            if ((typ = dynamic_cast<IfThenFeatureRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenFeatureRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenFeatureRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenFeatureRule element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad IfThenFeatureRule type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  if (Else)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Else");
      Else->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Else>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenElseFeatureRulesType::badAttributes(
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
              fprintf(stderr, "two values for n in IfThenElseFeatureRulesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in IfThenElseFeatureRulesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenElseFeatureRulesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in IfThenElseFeatureRulesType\n");
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

NaturalType * IfThenElseFeatureRulesType::getn()
{return n;}

void IfThenElseFeatureRulesType::setn(NaturalType * nIn)
{n = nIn;}

IfThenFeatureRuleTypeLisd * IfThenElseFeatureRulesType::getIfThenFeatureRule()
{return IfThenFeatureRule;}

void IfThenElseFeatureRulesType::setIfThenFeatureRule(IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn)
{IfThenFeatureRule = IfThenFeatureRuleIn;}

ElseRuleType * IfThenElseFeatureRulesType::getElse()
{return Else;}

void IfThenElseFeatureRulesType::setElse(ElseRuleType * ElseIn)
{Else = ElseIn;}

/* ***************************************************************** */

/* class IfThenExtrudedCrossSectionRuleType

*/

IfThenExtrudedCrossSectionRuleType::IfThenExtrudedCrossSectionRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenExtrudedCrossSectionRuleType::IfThenExtrudedCrossSectionRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenExtrudedCrossSectionRuleType::IfThenExtrudedCrossSectionRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenExtrudedCrossSectionRuleType::~IfThenExtrudedCrossSectionRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenExtrudedCrossSectionRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenExtrudedCrossSectionRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenExtrudedCrossSectionRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenExtrudedCrossSectionRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenExtrudedCrossSectionRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ExtrudedCrossSectionPointSamplingStrategyType * IfThenExtrudedCrossSectionRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenExtrudedCrossSectionRuleType::setThenPointStrategy(ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenExtrudedCrossSectionRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenExtrudedCrossSectionRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenFeatureRuleType

*/

IfThenFeatureRuleType::IfThenFeatureRuleType() :
  PointRuleBaseType()
{
  BooleanExpression = 0;
  ThenPoints = 0;
}

IfThenFeatureRuleType::IfThenFeatureRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  PointRuleBaseType(
    UUIDIn)
{
  BooleanExpression = BooleanExpressionIn;
  ThenPoints = ThenPointsIn;
}

IfThenFeatureRuleType::IfThenFeatureRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  PointRuleBaseType(
    nameIn,
    UUIDIn)
{
  BooleanExpression = BooleanExpressionIn;
  ThenPoints = ThenPointsIn;
}

IfThenFeatureRuleType::~IfThenFeatureRuleType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  delete ThenPoints;
  #endif
}

void IfThenFeatureRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenFeatureRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenFeatureRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenFeatureRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenFeatureRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

BooleanExpressionBaseType * IfThenFeatureRuleType::getBooleanExpression()
{return BooleanExpression;}

void IfThenFeatureRuleType::setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

ThenPointsType * IfThenFeatureRuleType::getThenPoints()
{return ThenPoints;}

void IfThenFeatureRuleType::setThenPoints(ThenPointsType * ThenPointsIn)
{ThenPoints = ThenPointsIn;}

/* ***************************************************************** */

/* class IfThenFeatureRuleTypeLisd

*/

IfThenFeatureRuleTypeLisd::IfThenFeatureRuleTypeLisd() {}

IfThenFeatureRuleTypeLisd::IfThenFeatureRuleTypeLisd(IfThenFeatureRuleType * aIfThenFeatureRuleType)
{
  push_back(aIfThenFeatureRuleType);
}

IfThenFeatureRuleTypeLisd::~IfThenFeatureRuleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<IfThenFeatureRuleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void IfThenFeatureRuleTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class IfThenLineRuleType

*/

IfThenLineRuleType::IfThenLineRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenLineRuleType::IfThenLineRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 LinePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenLineRuleType::IfThenLineRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 LinePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenLineRuleType::~IfThenLineRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenLineRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenLineRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenLineRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenLineRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenLineRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

LinePointSamplingStrategyType * IfThenLineRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenLineRuleType::setThenPointStrategy(LinePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenLineRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenLineRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenOppositeAngledLinesRuleType

*/

IfThenOppositeAngledLinesRuleType::IfThenOppositeAngledLinesRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenOppositeAngledLinesRuleType::IfThenOppositeAngledLinesRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeAngledLinesRuleType::IfThenOppositeAngledLinesRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeAngledLinesRuleType::~IfThenOppositeAngledLinesRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenOppositeAngledLinesRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenOppositeAngledLinesRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenOppositeAngledLinesRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenOppositeAngledLinesRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenOppositeAngledLinesRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

OppositeAngledLinesPointSamplingStrategyType * IfThenOppositeAngledLinesRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenOppositeAngledLinesRuleType::setThenPointStrategy(OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenOppositeAngledLinesRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenOppositeAngledLinesRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenOppositeAngledPlanesRuleType

*/

IfThenOppositeAngledPlanesRuleType::IfThenOppositeAngledPlanesRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenOppositeAngledPlanesRuleType::IfThenOppositeAngledPlanesRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeAngledPlanesRuleType::IfThenOppositeAngledPlanesRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeAngledPlanesRuleType::~IfThenOppositeAngledPlanesRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenOppositeAngledPlanesRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenOppositeAngledPlanesRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenOppositeAngledPlanesRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenOppositeAngledPlanesRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenOppositeAngledPlanesRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

OppositeAngledPlanesPointSamplingStrategyType * IfThenOppositeAngledPlanesRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenOppositeAngledPlanesRuleType::setThenPointStrategy(OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenOppositeAngledPlanesRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenOppositeAngledPlanesRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenOppositeParallelLinesRuleType

*/

IfThenOppositeParallelLinesRuleType::IfThenOppositeParallelLinesRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenOppositeParallelLinesRuleType::IfThenOppositeParallelLinesRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeParallelLinesRuleType::IfThenOppositeParallelLinesRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeParallelLinesRuleType::~IfThenOppositeParallelLinesRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenOppositeParallelLinesRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenOppositeParallelLinesRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenOppositeParallelLinesRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenOppositeParallelLinesRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenOppositeParallelLinesRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

OppositeParallelLinesPointSamplingStrategyType * IfThenOppositeParallelLinesRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenOppositeParallelLinesRuleType::setThenPointStrategy(OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenOppositeParallelLinesRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenOppositeParallelLinesRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenOppositeParallelPlanesRuleType

*/

IfThenOppositeParallelPlanesRuleType::IfThenOppositeParallelPlanesRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenOppositeParallelPlanesRuleType::IfThenOppositeParallelPlanesRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeParallelPlanesRuleType::IfThenOppositeParallelPlanesRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenOppositeParallelPlanesRuleType::~IfThenOppositeParallelPlanesRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenOppositeParallelPlanesRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenOppositeParallelPlanesRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenOppositeParallelPlanesRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenOppositeParallelPlanesRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenOppositeParallelPlanesRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

OppositeParallelPlanesPointSamplingStrategyType * IfThenOppositeParallelPlanesRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenOppositeParallelPlanesRuleType::setThenPointStrategy(OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenOppositeParallelPlanesRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenOppositeParallelPlanesRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenPlaneRuleType

*/

IfThenPlaneRuleType::IfThenPlaneRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenPlaneRuleType::IfThenPlaneRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PlanePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPlaneRuleType::IfThenPlaneRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PlanePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPlaneRuleType::~IfThenPlaneRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenPlaneRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenPlaneRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenPlaneRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenPlaneRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenPlaneRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

PlanePointSamplingStrategyType * IfThenPlaneRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenPlaneRuleType::setThenPointStrategy(PlanePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenPlaneRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenPlaneRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenPointDefinedCurveRuleType

*/

IfThenPointDefinedCurveRuleType::IfThenPointDefinedCurveRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenPointDefinedCurveRuleType::IfThenPointDefinedCurveRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPointDefinedCurveRuleType::IfThenPointDefinedCurveRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPointDefinedCurveRuleType::~IfThenPointDefinedCurveRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenPointDefinedCurveRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenPointDefinedCurveRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenPointDefinedCurveRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenPointDefinedCurveRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenPointDefinedCurveRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

PointDefinedCurvePointSamplingStrategyType * IfThenPointDefinedCurveRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenPointDefinedCurveRuleType::setThenPointStrategy(PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenPointDefinedCurveRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenPointDefinedCurveRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenPointDefinedSurfaceRuleType

*/

IfThenPointDefinedSurfaceRuleType::IfThenPointDefinedSurfaceRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenPointDefinedSurfaceRuleType::IfThenPointDefinedSurfaceRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPointDefinedSurfaceRuleType::IfThenPointDefinedSurfaceRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenPointDefinedSurfaceRuleType::~IfThenPointDefinedSurfaceRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenPointDefinedSurfaceRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenPointDefinedSurfaceRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenPointDefinedSurfaceRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenPointDefinedSurfaceRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenPointDefinedSurfaceRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

PointDefinedSurfacePointSamplingStrategyType * IfThenPointDefinedSurfaceRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenPointDefinedSurfaceRuleType::setThenPointStrategy(PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenPointDefinedSurfaceRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenPointDefinedSurfaceRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenPointRuleType

*/

IfThenPointRuleType::IfThenPointRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
}

IfThenPointRuleType::IfThenPointRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointPointSamplingStrategyType * ThenPointStrategyIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
}

IfThenPointRuleType::IfThenPointRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 PointPointSamplingStrategyType * ThenPointStrategyIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
}

IfThenPointRuleType::~IfThenPointRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  #endif
}

void IfThenPointRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenPointRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenPointRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenPointRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenPointRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

PointPointSamplingStrategyType * IfThenPointRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenPointRuleType::setThenPointStrategy(PointPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

/* ***************************************************************** */

/* class IfThenSphereRuleType

*/

IfThenSphereRuleType::IfThenSphereRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenSphereRuleType::IfThenSphereRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SpherePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSphereRuleType::IfThenSphereRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SpherePointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSphereRuleType::~IfThenSphereRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenSphereRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenSphereRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenSphereRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenSphereRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenSphereRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

SpherePointSamplingStrategyType * IfThenSphereRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenSphereRuleType::setThenPointStrategy(SpherePointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenSphereRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenSphereRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenSphericalSegmentRuleType

*/

IfThenSphericalSegmentRuleType::IfThenSphericalSegmentRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenSphericalSegmentRuleType::IfThenSphericalSegmentRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSphericalSegmentRuleType::IfThenSphericalSegmentRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSphericalSegmentRuleType::~IfThenSphericalSegmentRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenSphericalSegmentRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenSphericalSegmentRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenSphericalSegmentRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenSphericalSegmentRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenSphericalSegmentRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

SphericalSegmentPointSamplingStrategyType * IfThenSphericalSegmentRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenSphericalSegmentRuleType::setThenPointStrategy(SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenSphericalSegmentRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenSphericalSegmentRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenSurfaceOfRevolutionRuleType

*/

IfThenSurfaceOfRevolutionRuleType::IfThenSurfaceOfRevolutionRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenSurfaceOfRevolutionRuleType::IfThenSurfaceOfRevolutionRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSurfaceOfRevolutionRuleType::IfThenSurfaceOfRevolutionRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenSurfaceOfRevolutionRuleType::~IfThenSurfaceOfRevolutionRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenSurfaceOfRevolutionRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenSurfaceOfRevolutionRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenSurfaceOfRevolutionRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenSurfaceOfRevolutionRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenSurfaceOfRevolutionRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

SurfaceOfRevolutionPointSamplingStrategyType * IfThenSurfaceOfRevolutionRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenSurfaceOfRevolutionRuleType::setThenPointStrategy(SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenSurfaceOfRevolutionRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenSurfaceOfRevolutionRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenSurfaceRuleType

*/

IfThenSurfaceRuleType::IfThenSurfaceRuleType() :
  IfThenFeatureRuleType()
{
}

IfThenSurfaceRuleType::IfThenSurfaceRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
}

IfThenSurfaceRuleType::IfThenSurfaceRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
}

IfThenSurfaceRuleType::~IfThenSurfaceRuleType()
{
  #ifndef NODESTRUCT
  #endif
}

void IfThenSurfaceRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenSurfaceRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenSurfaceRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenSurfaceRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenSurfaceRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class IfThenToroidalSegmentRuleType

*/

IfThenToroidalSegmentRuleType::IfThenToroidalSegmentRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenToroidalSegmentRuleType::IfThenToroidalSegmentRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenToroidalSegmentRuleType::IfThenToroidalSegmentRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenToroidalSegmentRuleType::~IfThenToroidalSegmentRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenToroidalSegmentRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenToroidalSegmentRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenToroidalSegmentRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenToroidalSegmentRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenToroidalSegmentRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

ToroidalSegmentPointSamplingStrategyType * IfThenToroidalSegmentRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenToroidalSegmentRuleType::setThenPointStrategy(ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenToroidalSegmentRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenToroidalSegmentRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class IfThenTorusRuleType

*/

IfThenTorusRuleType::IfThenTorusRuleType() :
  IfThenFeatureRuleType()
{
  ThenPointStrategy = 0;
  ThenFittingAlgorithm = 0;
}

IfThenTorusRuleType::IfThenTorusRuleType(
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 TorusPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenTorusRuleType::IfThenTorusRuleType(
 XmlToken * nameIn,
 QPIdType * UUIDIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 ThenPointsType * ThenPointsIn,
 TorusPointSamplingStrategyType * ThenPointStrategyIn,
 SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn) :
  IfThenFeatureRuleType(
    nameIn,
    UUIDIn,
    BooleanExpressionIn,
    ThenPointsIn)
{
  ThenPointStrategy = ThenPointStrategyIn;
  ThenFittingAlgorithm = ThenFittingAlgorithmIn;
}

IfThenTorusRuleType::~IfThenTorusRuleType()
{
  #ifndef NODESTRUCT
  delete ThenPointStrategy;
  delete ThenFittingAlgorithm;
  #endif
}

void IfThenTorusRuleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (BooleanExpression)
    {
      {// list may be empty
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
    }
  if (ThenPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPoints");
      ThenPoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPoints>\n");
    }
  if (ThenPointStrategy)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenPointStrategy");
      ThenPointStrategy->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenPointStrategy>\n");
    }
  if (ThenFittingAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThenFittingAlgorithm");
      ThenFittingAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThenFittingAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool IfThenTorusRuleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in IfThenTorusRuleType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in IfThenTorusRuleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in IfThenTorusRuleType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

TorusPointSamplingStrategyType * IfThenTorusRuleType::getThenPointStrategy()
{return ThenPointStrategy;}

void IfThenTorusRuleType::setThenPointStrategy(TorusPointSamplingStrategyType * ThenPointStrategyIn)
{ThenPointStrategy = ThenPointStrategyIn;}

SubstituteFeatureAlgorithmType * IfThenTorusRuleType::getThenFittingAlgorithm()
{return ThenFittingAlgorithm;}

void IfThenTorusRuleType::setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn)
{ThenFittingAlgorithm = ThenFittingAlgorithmIn;}

/* ***************************************************************** */

/* class LinePointSamplingStrategyType

*/

LinePointSamplingStrategyType::LinePointSamplingStrategyType()
{
  LinePointSamplingStrategyTypePair = 0;
}

LinePointSamplingStrategyType::LinePointSamplingStrategyType(
 LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyTypePairIn)
{
  LinePointSamplingStrategyTypePair = LinePointSamplingStrategyTypePairIn;
}

LinePointSamplingStrategyType::~LinePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete LinePointSamplingStrategyTypePair;
  #endif
}

void LinePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  LinePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyType::getLinePointSamplingStrategyTypePair()
{return LinePointSamplingStrategyTypePair;}

void LinePointSamplingStrategyType::setLinePointSamplingStrategyTypePair(LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyTypePairIn)
{LinePointSamplingStrategyTypePair = LinePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class LinePointSamplingStrategyTypeChoicePair

*/

LinePointSamplingStrategyTypeChoicePair::LinePointSamplingStrategyTypeChoicePair() {}

LinePointSamplingStrategyTypeChoicePair::LinePointSamplingStrategyTypeChoicePair(
 whichOne LinePointSamplingStrategyTypeTypeIn,
 LinePointSamplingStrategyTypeVal LinePointSamplingStrategyTypeValueIn)
{
  LinePointSamplingStrategyTypeType = LinePointSamplingStrategyTypeTypeIn;
  LinePointSamplingStrategyTypeValue = LinePointSamplingStrategyTypeValueIn;
}

LinePointSamplingStrategyTypeChoicePair::~LinePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LinePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete LinePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (LinePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete LinePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void LinePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (LinePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      LinePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (LinePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      LinePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class MaxFeatureRulesType

*/

MaxFeatureRulesType::MaxFeatureRulesType()
{
  n = 0;
  IfThenFeatureRule = 0;
  Else = 0;
}

MaxFeatureRulesType::MaxFeatureRulesType(
 IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
 ElseRuleType * ElseIn)
{
  n = 0;
  IfThenFeatureRule = IfThenFeatureRuleIn;
  Else = ElseIn;
}

MaxFeatureRulesType::MaxFeatureRulesType(
 NaturalType * nIn,
 IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
 ElseRuleType * ElseIn)
{
  n = nIn;
  IfThenFeatureRule = IfThenFeatureRuleIn;
  Else = ElseIn;
}

MaxFeatureRulesType::~MaxFeatureRulesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete IfThenFeatureRule;
  delete Else;
  #endif
}

void MaxFeatureRulesType::printSelf(FILE * outFile)
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
    if (!IfThenFeatureRule)
      {
        fprintf(stderr, "IfThenFeatureRule list is missing\n");
        exit(1);
      }
    if (IfThenFeatureRule->size() == 0)
      {
        fprintf(stderr, "IfThenFeatureRule list is empty\n");
        exit(1);
      }
    std::list<IfThenFeatureRuleType *>::iterator iter;
    for (iter = IfThenFeatureRule->begin();
         iter != IfThenFeatureRule->end(); iter++)
      {
        IfThenFeatureRuleType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "IfThenCurveRule") == 0)
          {
            IfThenCurveRuleType * typ;
            if ((typ = dynamic_cast<IfThenCurveRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCurveRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCurveRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCurveRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSurfaceRule") == 0)
          {
            IfThenSurfaceRuleType * typ;
            if ((typ = dynamic_cast<IfThenSurfaceRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSurfaceRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSurfaceRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSurfaceRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCircleRule") == 0)
          {
            IfThenCircleRuleType * typ;
            if ((typ = dynamic_cast<IfThenCircleRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCircleRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCircleRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCircleRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCircularArcRule") == 0)
          {
            IfThenCircularArcRuleType * typ;
            if ((typ = dynamic_cast<IfThenCircularArcRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCircularArcRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCircularArcRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCircularArcRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenConeRule") == 0)
          {
            IfThenConeRuleType * typ;
            if ((typ = dynamic_cast<IfThenConeRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenConeRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenConeRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenConeRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenConicalSegmentRule") == 0)
          {
            IfThenConicalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenConicalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenConicalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenConicalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenConicalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCylinderRule") == 0)
          {
            IfThenCylinderRuleType * typ;
            if ((typ = dynamic_cast<IfThenCylinderRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCylinderRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCylinderRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCylinderRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenCylindricalSegmentRule") == 0)
          {
            IfThenCylindricalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenCylindricalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenCylindricalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenCylindricalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenCylindricalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenEllipseRule") == 0)
          {
            IfThenEllipseRuleType * typ;
            if ((typ = dynamic_cast<IfThenEllipseRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenEllipseRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenEllipseRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenEllipseRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenEllipticalArcRule") == 0)
          {
            IfThenEllipticalArcRuleType * typ;
            if ((typ = dynamic_cast<IfThenEllipticalArcRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenEllipticalArcRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenEllipticalArcRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenEllipticalArcRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenElongatedCircleRule") == 0)
          {
            IfThenElongatedCircleRuleType * typ;
            if ((typ = dynamic_cast<IfThenElongatedCircleRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenElongatedCircleRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenElongatedCircleRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenElongatedCircleRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenElongatedCylinderRule") == 0)
          {
            IfThenElongatedCylinderRuleType * typ;
            if ((typ = dynamic_cast<IfThenElongatedCylinderRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenElongatedCylinderRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenElongatedCylinderRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenElongatedCylinderRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenExtrudedCrossSectionRule") == 0)
          {
            IfThenExtrudedCrossSectionRuleType * typ;
            if ((typ = dynamic_cast<IfThenExtrudedCrossSectionRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenExtrudedCrossSectionRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenExtrudedCrossSectionRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenExtrudedCrossSectionRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenLineRule") == 0)
          {
            IfThenLineRuleType * typ;
            if ((typ = dynamic_cast<IfThenLineRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenLineRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenLineRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenLineRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeAngledLinesRule") == 0)
          {
            IfThenOppositeAngledLinesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeAngledLinesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeAngledLinesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeAngledLinesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeAngledLinesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeAngledPlanesRule") == 0)
          {
            IfThenOppositeAngledPlanesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeAngledPlanesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeAngledPlanesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeAngledPlanesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeAngledPlanesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeParallelLinesRule") == 0)
          {
            IfThenOppositeParallelLinesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeParallelLinesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeParallelLinesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeParallelLinesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeParallelLinesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenOppositeParallelPlanesRule") == 0)
          {
            IfThenOppositeParallelPlanesRuleType * typ;
            if ((typ = dynamic_cast<IfThenOppositeParallelPlanesRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenOppositeParallelPlanesRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenOppositeParallelPlanesRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenOppositeParallelPlanesRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPlaneRule") == 0)
          {
            IfThenPlaneRuleType * typ;
            if ((typ = dynamic_cast<IfThenPlaneRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPlaneRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPlaneRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPlaneRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointDefinedCurveRule") == 0)
          {
            IfThenPointDefinedCurveRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointDefinedCurveRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointDefinedCurveRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointDefinedCurveRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointDefinedCurveRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointDefinedSurfaceRule") == 0)
          {
            IfThenPointDefinedSurfaceRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointDefinedSurfaceRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointDefinedSurfaceRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointDefinedSurfaceRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointDefinedSurfaceRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenPointRule") == 0)
          {
            IfThenPointRuleType * typ;
            if ((typ = dynamic_cast<IfThenPointRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenPointRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenPointRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenPointRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSphereRule") == 0)
          {
            IfThenSphereRuleType * typ;
            if ((typ = dynamic_cast<IfThenSphereRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSphereRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSphereRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSphereRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSphericalSegmentRule") == 0)
          {
            IfThenSphericalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenSphericalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSphericalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSphericalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSphericalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenSurfaceOfRevolutionRule") == 0)
          {
            IfThenSurfaceOfRevolutionRuleType * typ;
            if ((typ = dynamic_cast<IfThenSurfaceOfRevolutionRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenSurfaceOfRevolutionRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenSurfaceOfRevolutionRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenSurfaceOfRevolutionRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenToroidalSegmentRule") == 0)
          {
            IfThenToroidalSegmentRuleType * typ;
            if ((typ = dynamic_cast<IfThenToroidalSegmentRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenToroidalSegmentRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenToroidalSegmentRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenToroidalSegmentRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenTorusRule") == 0)
          {
            IfThenTorusRuleType * typ;
            if ((typ = dynamic_cast<IfThenTorusRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenTorusRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenTorusRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenTorusRule element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfThenFeatureRule") == 0)
          {
            IfThenFeatureRuleType * typ;
            if ((typ = dynamic_cast<IfThenFeatureRuleType *>(basie)))
              {
                fprintf(outFile, "<IfThenFeatureRule");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfThenFeatureRule>\n");
              }
            else
              {
                fprintf(stderr, "bad IfThenFeatureRule element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad IfThenFeatureRule type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  if (Else)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Else");
      Else->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Else>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MaxFeatureRulesType::badAttributes(
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
              fprintf(stderr, "two values for n in MaxFeatureRulesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in MaxFeatureRulesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MaxFeatureRulesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in MaxFeatureRulesType\n");
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

NaturalType * MaxFeatureRulesType::getn()
{return n;}

void MaxFeatureRulesType::setn(NaturalType * nIn)
{n = nIn;}

IfThenFeatureRuleTypeLisd * MaxFeatureRulesType::getIfThenFeatureRule()
{return IfThenFeatureRule;}

void MaxFeatureRulesType::setIfThenFeatureRule(IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn)
{IfThenFeatureRule = IfThenFeatureRuleIn;}

ElseRuleType * MaxFeatureRulesType::getElse()
{return Else;}

void MaxFeatureRulesType::setElse(ElseRuleType * ElseIn)
{Else = ElseIn;}

/* ***************************************************************** */

/* class OppositeAngledLinesPointSamplingStrategyType

*/

OppositeAngledLinesPointSamplingStrategyType::OppositeAngledLinesPointSamplingStrategyType()
{
  OppositeAngledLinesPointSamplingStrategyTypePair = 0;
}

OppositeAngledLinesPointSamplingStrategyType::OppositeAngledLinesPointSamplingStrategyType(
 OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyTypePairIn)
{
  OppositeAngledLinesPointSamplingStrategyTypePair = OppositeAngledLinesPointSamplingStrategyTypePairIn;
}

OppositeAngledLinesPointSamplingStrategyType::~OppositeAngledLinesPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete OppositeAngledLinesPointSamplingStrategyTypePair;
  #endif
}

void OppositeAngledLinesPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  OppositeAngledLinesPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyType::getOppositeAngledLinesPointSamplingStrategyTypePair()
{return OppositeAngledLinesPointSamplingStrategyTypePair;}

void OppositeAngledLinesPointSamplingStrategyType::setOppositeAngledLinesPointSamplingStrategyTypePair(OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyTypePairIn)
{OppositeAngledLinesPointSamplingStrategyTypePair = OppositeAngledLinesPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class OppositeAngledLinesPointSamplingStrategyTypeChoicePair

*/

OppositeAngledLinesPointSamplingStrategyTypeChoicePair::OppositeAngledLinesPointSamplingStrategyTypeChoicePair() {}

OppositeAngledLinesPointSamplingStrategyTypeChoicePair::OppositeAngledLinesPointSamplingStrategyTypeChoicePair(
 whichOne OppositeAngledLinesPointSamplingStrategyTypeTypeIn,
 OppositeAngledLinesPointSamplingStrategyTypeVal OppositeAngledLinesPointSamplingStrategyTypeValueIn)
{
  OppositeAngledLinesPointSamplingStrategyTypeType = OppositeAngledLinesPointSamplingStrategyTypeTypeIn;
  OppositeAngledLinesPointSamplingStrategyTypeValue = OppositeAngledLinesPointSamplingStrategyTypeValueIn;
}

OppositeAngledLinesPointSamplingStrategyTypeChoicePair::~OppositeAngledLinesPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (OppositeAngledLinesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete OppositeAngledLinesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (OppositeAngledLinesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete OppositeAngledLinesPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void OppositeAngledLinesPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (OppositeAngledLinesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      OppositeAngledLinesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (OppositeAngledLinesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      OppositeAngledLinesPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class OppositeAngledPlanesPointSamplingStrategyType

*/

OppositeAngledPlanesPointSamplingStrategyType::OppositeAngledPlanesPointSamplingStrategyType()
{
  OppositeAngledPlanesPointSamplingStrategyTypePair = 0;
}

OppositeAngledPlanesPointSamplingStrategyType::OppositeAngledPlanesPointSamplingStrategyType(
 OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyTypePairIn)
{
  OppositeAngledPlanesPointSamplingStrategyTypePair = OppositeAngledPlanesPointSamplingStrategyTypePairIn;
}

OppositeAngledPlanesPointSamplingStrategyType::~OppositeAngledPlanesPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete OppositeAngledPlanesPointSamplingStrategyTypePair;
  #endif
}

void OppositeAngledPlanesPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  OppositeAngledPlanesPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyType::getOppositeAngledPlanesPointSamplingStrategyTypePair()
{return OppositeAngledPlanesPointSamplingStrategyTypePair;}

void OppositeAngledPlanesPointSamplingStrategyType::setOppositeAngledPlanesPointSamplingStrategyTypePair(OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyTypePairIn)
{OppositeAngledPlanesPointSamplingStrategyTypePair = OppositeAngledPlanesPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class OppositeAngledPlanesPointSamplingStrategyTypeChoicePair

*/

OppositeAngledPlanesPointSamplingStrategyTypeChoicePair::OppositeAngledPlanesPointSamplingStrategyTypeChoicePair() {}

OppositeAngledPlanesPointSamplingStrategyTypeChoicePair::OppositeAngledPlanesPointSamplingStrategyTypeChoicePair(
 whichOne OppositeAngledPlanesPointSamplingStrategyTypeTypeIn,
 OppositeAngledPlanesPointSamplingStrategyTypeVal OppositeAngledPlanesPointSamplingStrategyTypeValueIn)
{
  OppositeAngledPlanesPointSamplingStrategyTypeType = OppositeAngledPlanesPointSamplingStrategyTypeTypeIn;
  OppositeAngledPlanesPointSamplingStrategyTypeValue = OppositeAngledPlanesPointSamplingStrategyTypeValueIn;
}

OppositeAngledPlanesPointSamplingStrategyTypeChoicePair::~OppositeAngledPlanesPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (OppositeAngledPlanesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete OppositeAngledPlanesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (OppositeAngledPlanesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete OppositeAngledPlanesPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void OppositeAngledPlanesPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (OppositeAngledPlanesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      OppositeAngledPlanesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (OppositeAngledPlanesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      OppositeAngledPlanesPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class OppositeParallelLinesPointSamplingStrategyType

*/

OppositeParallelLinesPointSamplingStrategyType::OppositeParallelLinesPointSamplingStrategyType()
{
  OppositeParallelLinesPointSamplingStrategyTypePair = 0;
}

OppositeParallelLinesPointSamplingStrategyType::OppositeParallelLinesPointSamplingStrategyType(
 OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyTypePairIn)
{
  OppositeParallelLinesPointSamplingStrategyTypePair = OppositeParallelLinesPointSamplingStrategyTypePairIn;
}

OppositeParallelLinesPointSamplingStrategyType::~OppositeParallelLinesPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete OppositeParallelLinesPointSamplingStrategyTypePair;
  #endif
}

void OppositeParallelLinesPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  OppositeParallelLinesPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyType::getOppositeParallelLinesPointSamplingStrategyTypePair()
{return OppositeParallelLinesPointSamplingStrategyTypePair;}

void OppositeParallelLinesPointSamplingStrategyType::setOppositeParallelLinesPointSamplingStrategyTypePair(OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyTypePairIn)
{OppositeParallelLinesPointSamplingStrategyTypePair = OppositeParallelLinesPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class OppositeParallelLinesPointSamplingStrategyTypeChoicePair

*/

OppositeParallelLinesPointSamplingStrategyTypeChoicePair::OppositeParallelLinesPointSamplingStrategyTypeChoicePair() {}

OppositeParallelLinesPointSamplingStrategyTypeChoicePair::OppositeParallelLinesPointSamplingStrategyTypeChoicePair(
 whichOne OppositeParallelLinesPointSamplingStrategyTypeTypeIn,
 OppositeParallelLinesPointSamplingStrategyTypeVal OppositeParallelLinesPointSamplingStrategyTypeValueIn)
{
  OppositeParallelLinesPointSamplingStrategyTypeType = OppositeParallelLinesPointSamplingStrategyTypeTypeIn;
  OppositeParallelLinesPointSamplingStrategyTypeValue = OppositeParallelLinesPointSamplingStrategyTypeValueIn;
}

OppositeParallelLinesPointSamplingStrategyTypeChoicePair::~OppositeParallelLinesPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (OppositeParallelLinesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete OppositeParallelLinesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (OppositeParallelLinesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete OppositeParallelLinesPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void OppositeParallelLinesPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (OppositeParallelLinesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      OppositeParallelLinesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (OppositeParallelLinesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      OppositeParallelLinesPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class OppositeParallelPlanesPointSamplingStrategyType

*/

OppositeParallelPlanesPointSamplingStrategyType::OppositeParallelPlanesPointSamplingStrategyType()
{
  OppositeParallelPlanesPointSamplingStrategyTypePair = 0;
}

OppositeParallelPlanesPointSamplingStrategyType::OppositeParallelPlanesPointSamplingStrategyType(
 OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyTypePairIn)
{
  OppositeParallelPlanesPointSamplingStrategyTypePair = OppositeParallelPlanesPointSamplingStrategyTypePairIn;
}

OppositeParallelPlanesPointSamplingStrategyType::~OppositeParallelPlanesPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete OppositeParallelPlanesPointSamplingStrategyTypePair;
  #endif
}

void OppositeParallelPlanesPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  OppositeParallelPlanesPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyType::getOppositeParallelPlanesPointSamplingStrategyTypePair()
{return OppositeParallelPlanesPointSamplingStrategyTypePair;}

void OppositeParallelPlanesPointSamplingStrategyType::setOppositeParallelPlanesPointSamplingStrategyTypePair(OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyTypePairIn)
{OppositeParallelPlanesPointSamplingStrategyTypePair = OppositeParallelPlanesPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class OppositeParallelPlanesPointSamplingStrategyTypeChoicePair

*/

OppositeParallelPlanesPointSamplingStrategyTypeChoicePair::OppositeParallelPlanesPointSamplingStrategyTypeChoicePair() {}

OppositeParallelPlanesPointSamplingStrategyTypeChoicePair::OppositeParallelPlanesPointSamplingStrategyTypeChoicePair(
 whichOne OppositeParallelPlanesPointSamplingStrategyTypeTypeIn,
 OppositeParallelPlanesPointSamplingStrategyTypeVal OppositeParallelPlanesPointSamplingStrategyTypeValueIn)
{
  OppositeParallelPlanesPointSamplingStrategyTypeType = OppositeParallelPlanesPointSamplingStrategyTypeTypeIn;
  OppositeParallelPlanesPointSamplingStrategyTypeValue = OppositeParallelPlanesPointSamplingStrategyTypeValueIn;
}

OppositeParallelPlanesPointSamplingStrategyTypeChoicePair::~OppositeParallelPlanesPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (OppositeParallelPlanesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete OppositeParallelPlanesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (OppositeParallelPlanesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete OppositeParallelPlanesPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void OppositeParallelPlanesPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (OppositeParallelPlanesPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      OppositeParallelPlanesPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (OppositeParallelPlanesPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      OppositeParallelPlanesPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class PlanePointSamplingStrategyType

*/

PlanePointSamplingStrategyType::PlanePointSamplingStrategyType()
{
  PlanePointSamplingStrategyTypePair = 0;
}

PlanePointSamplingStrategyType::PlanePointSamplingStrategyType(
 PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyTypePairIn)
{
  PlanePointSamplingStrategyTypePair = PlanePointSamplingStrategyTypePairIn;
}

PlanePointSamplingStrategyType::~PlanePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete PlanePointSamplingStrategyTypePair;
  #endif
}

void PlanePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PlanePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyType::getPlanePointSamplingStrategyTypePair()
{return PlanePointSamplingStrategyTypePair;}

void PlanePointSamplingStrategyType::setPlanePointSamplingStrategyTypePair(PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyTypePairIn)
{PlanePointSamplingStrategyTypePair = PlanePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class PlanePointSamplingStrategyTypeChoicePair

*/

PlanePointSamplingStrategyTypeChoicePair::PlanePointSamplingStrategyTypeChoicePair() {}

PlanePointSamplingStrategyTypeChoicePair::PlanePointSamplingStrategyTypeChoicePair(
 whichOne PlanePointSamplingStrategyTypeTypeIn,
 PlanePointSamplingStrategyTypeVal PlanePointSamplingStrategyTypeValueIn)
{
  PlanePointSamplingStrategyTypeType = PlanePointSamplingStrategyTypeTypeIn;
  PlanePointSamplingStrategyTypeValue = PlanePointSamplingStrategyTypeValueIn;
}

PlanePointSamplingStrategyTypeChoicePair::~PlanePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PlanePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete PlanePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (PlanePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete PlanePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void PlanePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (PlanePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      PlanePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (PlanePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      PlanePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class PointDefinedCurvePointSamplingStrategyType

*/

PointDefinedCurvePointSamplingStrategyType::PointDefinedCurvePointSamplingStrategyType()
{
  PointDefinedCurvePointSamplingStrategyTypePair = 0;
}

PointDefinedCurvePointSamplingStrategyType::PointDefinedCurvePointSamplingStrategyType(
 PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyTypePairIn)
{
  PointDefinedCurvePointSamplingStrategyTypePair = PointDefinedCurvePointSamplingStrategyTypePairIn;
}

PointDefinedCurvePointSamplingStrategyType::~PointDefinedCurvePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete PointDefinedCurvePointSamplingStrategyTypePair;
  #endif
}

void PointDefinedCurvePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PointDefinedCurvePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyType::getPointDefinedCurvePointSamplingStrategyTypePair()
{return PointDefinedCurvePointSamplingStrategyTypePair;}

void PointDefinedCurvePointSamplingStrategyType::setPointDefinedCurvePointSamplingStrategyTypePair(PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyTypePairIn)
{PointDefinedCurvePointSamplingStrategyTypePair = PointDefinedCurvePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class PointDefinedCurvePointSamplingStrategyTypeChoicePair

*/

PointDefinedCurvePointSamplingStrategyTypeChoicePair::PointDefinedCurvePointSamplingStrategyTypeChoicePair() {}

PointDefinedCurvePointSamplingStrategyTypeChoicePair::PointDefinedCurvePointSamplingStrategyTypeChoicePair(
 whichOne PointDefinedCurvePointSamplingStrategyTypeTypeIn,
 PointDefinedCurvePointSamplingStrategyTypeVal PointDefinedCurvePointSamplingStrategyTypeValueIn)
{
  PointDefinedCurvePointSamplingStrategyTypeType = PointDefinedCurvePointSamplingStrategyTypeTypeIn;
  PointDefinedCurvePointSamplingStrategyTypeValue = PointDefinedCurvePointSamplingStrategyTypeValueIn;
}

PointDefinedCurvePointSamplingStrategyTypeChoicePair::~PointDefinedCurvePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointDefinedCurvePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete PointDefinedCurvePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (PointDefinedCurvePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete PointDefinedCurvePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void PointDefinedCurvePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (PointDefinedCurvePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      PointDefinedCurvePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (PointDefinedCurvePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      PointDefinedCurvePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class PointDefinedSurfacePointSamplingStrategyType

*/

PointDefinedSurfacePointSamplingStrategyType::PointDefinedSurfacePointSamplingStrategyType()
{
  PointDefinedSurfacePointSamplingStrategyTypePair = 0;
}

PointDefinedSurfacePointSamplingStrategyType::PointDefinedSurfacePointSamplingStrategyType(
 PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyTypePairIn)
{
  PointDefinedSurfacePointSamplingStrategyTypePair = PointDefinedSurfacePointSamplingStrategyTypePairIn;
}

PointDefinedSurfacePointSamplingStrategyType::~PointDefinedSurfacePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete PointDefinedSurfacePointSamplingStrategyTypePair;
  #endif
}

void PointDefinedSurfacePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PointDefinedSurfacePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyType::getPointDefinedSurfacePointSamplingStrategyTypePair()
{return PointDefinedSurfacePointSamplingStrategyTypePair;}

void PointDefinedSurfacePointSamplingStrategyType::setPointDefinedSurfacePointSamplingStrategyTypePair(PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyTypePairIn)
{PointDefinedSurfacePointSamplingStrategyTypePair = PointDefinedSurfacePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class PointDefinedSurfacePointSamplingStrategyTypeChoicePair

*/

PointDefinedSurfacePointSamplingStrategyTypeChoicePair::PointDefinedSurfacePointSamplingStrategyTypeChoicePair() {}

PointDefinedSurfacePointSamplingStrategyTypeChoicePair::PointDefinedSurfacePointSamplingStrategyTypeChoicePair(
 whichOne PointDefinedSurfacePointSamplingStrategyTypeTypeIn,
 PointDefinedSurfacePointSamplingStrategyTypeVal PointDefinedSurfacePointSamplingStrategyTypeValueIn)
{
  PointDefinedSurfacePointSamplingStrategyTypeType = PointDefinedSurfacePointSamplingStrategyTypeTypeIn;
  PointDefinedSurfacePointSamplingStrategyTypeValue = PointDefinedSurfacePointSamplingStrategyTypeValueIn;
}

PointDefinedSurfacePointSamplingStrategyTypeChoicePair::~PointDefinedSurfacePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointDefinedSurfacePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete PointDefinedSurfacePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (PointDefinedSurfacePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete PointDefinedSurfacePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void PointDefinedSurfacePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (PointDefinedSurfacePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      PointDefinedSurfacePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (PointDefinedSurfacePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      PointDefinedSurfacePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class PointPointSamplingStrategyType

*/

PointPointSamplingStrategyType::PointPointSamplingStrategyType()
{
  PointPointSamplingStrategyTypePair = 0;
}

PointPointSamplingStrategyType::PointPointSamplingStrategyType(
 PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyTypePairIn)
{
  PointPointSamplingStrategyTypePair = PointPointSamplingStrategyTypePairIn;
}

PointPointSamplingStrategyType::~PointPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete PointPointSamplingStrategyTypePair;
  #endif
}

void PointPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PointPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyType::getPointPointSamplingStrategyTypePair()
{return PointPointSamplingStrategyTypePair;}

void PointPointSamplingStrategyType::setPointPointSamplingStrategyTypePair(PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyTypePairIn)
{PointPointSamplingStrategyTypePair = PointPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class PointPointSamplingStrategyTypeChoicePair

*/

PointPointSamplingStrategyTypeChoicePair::PointPointSamplingStrategyTypeChoicePair() {}

PointPointSamplingStrategyTypeChoicePair::PointPointSamplingStrategyTypeChoicePair(
 whichOne PointPointSamplingStrategyTypeTypeIn,
 PointPointSamplingStrategyTypeVal PointPointSamplingStrategyTypeValueIn)
{
  PointPointSamplingStrategyTypeType = PointPointSamplingStrategyTypeTypeIn;
  PointPointSamplingStrategyTypeValue = PointPointSamplingStrategyTypeValueIn;
}

PointPointSamplingStrategyTypeChoicePair::~PointPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete PointPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (PointPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete PointPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void PointPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (PointPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      PointPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (PointPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      PointPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class PointRuleBaseType

*/

PointRuleBaseType::PointRuleBaseType() :
  QIFRuleBaseType()
{
}

PointRuleBaseType::PointRuleBaseType(
 QPIdType * UUIDIn) :
  QIFRuleBaseType(
    UUIDIn)
{
}

PointRuleBaseType::PointRuleBaseType(
 XmlToken * nameIn,
 QPIdType * UUIDIn) :
  QIFRuleBaseType(
    nameIn,
    UUIDIn)
{
}

PointRuleBaseType::~PointRuleBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void PointRuleBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PointRuleBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in PointRuleBaseType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in PointRuleBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointRuleBaseType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class QIFMayType

*/

QIFMayType::QIFMayType() :
  ApplicabilityBaseType()
{
  desirability = 0;
}

QIFMayType::QIFMayType(
 ZeroToOneType * desirabilityIn) :
  ApplicabilityBaseType()
{
  desirability = desirabilityIn;
}

QIFMayType::~QIFMayType()
{
  #ifndef NODESTRUCT
  delete desirability;
  #endif
}

void QIFMayType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (desirability)
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
      fprintf(outFile, "desirability=\"");
      desirability->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, "/>\n");
}

bool QIFMayType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "desirability")
        {
          ZeroToOneType * desirabilityVal;
          if (desirability)
            {
              fprintf(stderr, "two values for desirability in QIFMayType\n");
              returnValue = true;
              break;
            }
          desirabilityVal = new ZeroToOneType(decl->val.c_str());
          if (desirabilityVal->bad)
            {
              delete desirabilityVal;
              fprintf(stderr, "bad value %s for desirability in QIFMayType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            desirability = desirabilityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFMayType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete desirability;
      desirability = 0;
    }
  return returnValue;
}

ZeroToOneType * QIFMayType::getdesirability()
{return desirability;}

void QIFMayType::setdesirability(ZeroToOneType * desirabilityIn)
{desirability = desirabilityIn;}

/* ***************************************************************** */

/* class QIFMustNotType

*/

QIFMustNotType::QIFMustNotType() :
  ApplicabilityBaseType() {}

QIFMustNotType::~QIFMustNotType() {}

void QIFMustNotType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/* ***************************************************************** */

/* class QIFMustType

*/

QIFMustType::QIFMustType() :
  ApplicabilityBaseType() {}

QIFMustType::~QIFMustType() {}

void QIFMustType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/* ***************************************************************** */

/* class QIFRuleBaseType

*/

QIFRuleBaseType::QIFRuleBaseType()
{
  name = 0;
  UUID = 0;
}

QIFRuleBaseType::QIFRuleBaseType(
 QPIdType * UUIDIn)
{
  name = 0;
  UUID = UUIDIn;
}

QIFRuleBaseType::QIFRuleBaseType(
 XmlToken * nameIn,
 QPIdType * UUIDIn)
{
  name = nameIn;
  UUID = UUIDIn;
}

QIFRuleBaseType::~QIFRuleBaseType()
{
  #ifndef NODESTRUCT
  delete name;
  delete UUID;
  #endif
}

void QIFRuleBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool QIFRuleBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "name")
        {
          XmlToken * nameVal;
          if (name)
            {
              fprintf(stderr, "two values for name in QIFRuleBaseType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlToken(decl->val.c_str());
          if (nameVal->bad)
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in QIFRuleBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFRuleBaseType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete name;
      name = 0;
    }
  return returnValue;
}

XmlToken * QIFRuleBaseType::getname()
{return name;}

void QIFRuleBaseType::setname(XmlToken * nameIn)
{name = nameIn;}

QPIdType * QIFRuleBaseType::getUUID()
{return UUID;}

void QIFRuleBaseType::setUUID(QPIdType * UUIDIn)
{UUID = UUIDIn;}

/* ***************************************************************** */

/* class QIFRulesType

*/

QIFRulesType::QIFRulesType()
{
  Version = 0;
  RulesUnits = 0;
  FeatureRules = 0;
  DMESelectionRules = 0;
}

QIFRulesType::QIFRulesType(
 VersionType * VersionIn,
 RulesUnitsType * RulesUnitsIn,
 FeatureRulesType * FeatureRulesIn,
 DMESelectionRulesType * DMESelectionRulesIn)
{
  Version = VersionIn;
  RulesUnits = RulesUnitsIn;
  FeatureRules = FeatureRulesIn;
  DMESelectionRules = DMESelectionRulesIn;
}

QIFRulesType::~QIFRulesType()
{
  #ifndef NODESTRUCT
  delete Version;
  delete RulesUnits;
  delete FeatureRules;
  delete DMESelectionRules;
  #endif
}

void QIFRulesType::printSelf(FILE * outFile)
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
  if (RulesUnits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RulesUnits");
      RulesUnits->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RulesUnits>\n");
    }
  if (FeatureRules)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureRules");
      FeatureRules->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureRules>\n");
    }
  if (DMESelectionRules)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DMESelectionRules");
      DMESelectionRules->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DMESelectionRules>\n");
    }
  doSpaces(-INDENT, outFile);
}

VersionType * QIFRulesType::getVersion()
{return Version;}

void QIFRulesType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

RulesUnitsType * QIFRulesType::getRulesUnits()
{return RulesUnits;}

void QIFRulesType::setRulesUnits(RulesUnitsType * RulesUnitsIn)
{RulesUnits = RulesUnitsIn;}

FeatureRulesType * QIFRulesType::getFeatureRules()
{return FeatureRules;}

void QIFRulesType::setFeatureRules(FeatureRulesType * FeatureRulesIn)
{FeatureRules = FeatureRulesIn;}

DMESelectionRulesType * QIFRulesType::getDMESelectionRules()
{return DMESelectionRules;}

void QIFRulesType::setDMESelectionRules(DMESelectionRulesType * DMESelectionRulesIn)
{DMESelectionRules = DMESelectionRulesIn;}

/* ***************************************************************** */

/* class RulesUnitsType

*/

RulesUnitsType::RulesUnitsType()
{
  n = 0;
  AreaUnit = 0;
  AngularUnit = 0;
  ForceUnit = 0;
  LinearUnit = 0;
  MassUnit = 0;
  PressureUnit = 0;
  SpeedUnit = 0;
  TemperatureUnit = 0;
  TimeUnit = 0;
}

RulesUnitsType::RulesUnitsType(
 AreaUnitType * AreaUnitIn,
 AngularUnitType * AngularUnitIn,
 ForceUnitType * ForceUnitIn,
 LinearUnitType * LinearUnitIn,
 MassUnitType * MassUnitIn,
 PressureUnitType * PressureUnitIn,
 SpeedUnitType * SpeedUnitIn,
 TemperatureUnitType * TemperatureUnitIn,
 TimeUnitType * TimeUnitIn)
{
  n = 0;
  AreaUnit = AreaUnitIn;
  AngularUnit = AngularUnitIn;
  ForceUnit = ForceUnitIn;
  LinearUnit = LinearUnitIn;
  MassUnit = MassUnitIn;
  PressureUnit = PressureUnitIn;
  SpeedUnit = SpeedUnitIn;
  TemperatureUnit = TemperatureUnitIn;
  TimeUnit = TimeUnitIn;
}

RulesUnitsType::RulesUnitsType(
 NaturalType * nIn,
 AreaUnitType * AreaUnitIn,
 AngularUnitType * AngularUnitIn,
 ForceUnitType * ForceUnitIn,
 LinearUnitType * LinearUnitIn,
 MassUnitType * MassUnitIn,
 PressureUnitType * PressureUnitIn,
 SpeedUnitType * SpeedUnitIn,
 TemperatureUnitType * TemperatureUnitIn,
 TimeUnitType * TimeUnitIn)
{
  n = nIn;
  AreaUnit = AreaUnitIn;
  AngularUnit = AngularUnitIn;
  ForceUnit = ForceUnitIn;
  LinearUnit = LinearUnitIn;
  MassUnit = MassUnitIn;
  PressureUnit = PressureUnitIn;
  SpeedUnit = SpeedUnitIn;
  TemperatureUnit = TemperatureUnitIn;
  TimeUnit = TimeUnitIn;
}

RulesUnitsType::~RulesUnitsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete AreaUnit;
  delete AngularUnit;
  delete ForceUnit;
  delete LinearUnit;
  delete MassUnit;
  delete PressureUnit;
  delete SpeedUnit;
  delete TemperatureUnit;
  delete TimeUnit;
  #endif
}

void RulesUnitsType::printSelf(FILE * outFile)
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
  if (AreaUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaUnit");
      AreaUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaUnit>\n");
    }
  if (AngularUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularUnit");
      AngularUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularUnit>\n");
    }
  if (ForceUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceUnit");
      ForceUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceUnit>\n");
    }
  if (LinearUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearUnit");
      LinearUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearUnit>\n");
    }
  if (MassUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassUnit");
      MassUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassUnit>\n");
    }
  if (PressureUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureUnit");
      PressureUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureUnit>\n");
    }
  if (SpeedUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedUnit");
      SpeedUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedUnit>\n");
    }
  if (TemperatureUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureUnit");
      TemperatureUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureUnit>\n");
    }
  if (TimeUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeUnit");
      TimeUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeUnit>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool RulesUnitsType::badAttributes(
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
              fprintf(stderr, "two values for n in RulesUnitsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in RulesUnitsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in RulesUnitsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in RulesUnitsType\n");
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

NaturalType * RulesUnitsType::getn()
{return n;}

void RulesUnitsType::setn(NaturalType * nIn)
{n = nIn;}

AreaUnitType * RulesUnitsType::getAreaUnit()
{return AreaUnit;}

void RulesUnitsType::setAreaUnit(AreaUnitType * AreaUnitIn)
{AreaUnit = AreaUnitIn;}

AngularUnitType * RulesUnitsType::getAngularUnit()
{return AngularUnit;}

void RulesUnitsType::setAngularUnit(AngularUnitType * AngularUnitIn)
{AngularUnit = AngularUnitIn;}

ForceUnitType * RulesUnitsType::getForceUnit()
{return ForceUnit;}

void RulesUnitsType::setForceUnit(ForceUnitType * ForceUnitIn)
{ForceUnit = ForceUnitIn;}

LinearUnitType * RulesUnitsType::getLinearUnit()
{return LinearUnit;}

void RulesUnitsType::setLinearUnit(LinearUnitType * LinearUnitIn)
{LinearUnit = LinearUnitIn;}

MassUnitType * RulesUnitsType::getMassUnit()
{return MassUnit;}

void RulesUnitsType::setMassUnit(MassUnitType * MassUnitIn)
{MassUnit = MassUnitIn;}

PressureUnitType * RulesUnitsType::getPressureUnit()
{return PressureUnit;}

void RulesUnitsType::setPressureUnit(PressureUnitType * PressureUnitIn)
{PressureUnit = PressureUnitIn;}

SpeedUnitType * RulesUnitsType::getSpeedUnit()
{return SpeedUnit;}

void RulesUnitsType::setSpeedUnit(SpeedUnitType * SpeedUnitIn)
{SpeedUnit = SpeedUnitIn;}

TemperatureUnitType * RulesUnitsType::getTemperatureUnit()
{return TemperatureUnit;}

void RulesUnitsType::setTemperatureUnit(TemperatureUnitType * TemperatureUnitIn)
{TemperatureUnit = TemperatureUnitIn;}

TimeUnitType * RulesUnitsType::getTimeUnit()
{return TimeUnit;}

void RulesUnitsType::setTimeUnit(TimeUnitType * TimeUnitIn)
{TimeUnit = TimeUnitIn;}

/* ***************************************************************** */

/* class SpherePointSamplingStrategyType

*/

SpherePointSamplingStrategyType::SpherePointSamplingStrategyType()
{
  SpherePointSamplingStrategyTypePair = 0;
}

SpherePointSamplingStrategyType::SpherePointSamplingStrategyType(
 SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyTypePairIn)
{
  SpherePointSamplingStrategyTypePair = SpherePointSamplingStrategyTypePairIn;
}

SpherePointSamplingStrategyType::~SpherePointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete SpherePointSamplingStrategyTypePair;
  #endif
}

void SpherePointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SpherePointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyType::getSpherePointSamplingStrategyTypePair()
{return SpherePointSamplingStrategyTypePair;}

void SpherePointSamplingStrategyType::setSpherePointSamplingStrategyTypePair(SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyTypePairIn)
{SpherePointSamplingStrategyTypePair = SpherePointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class SpherePointSamplingStrategyTypeChoicePair

*/

SpherePointSamplingStrategyTypeChoicePair::SpherePointSamplingStrategyTypeChoicePair() {}

SpherePointSamplingStrategyTypeChoicePair::SpherePointSamplingStrategyTypeChoicePair(
 whichOne SpherePointSamplingStrategyTypeTypeIn,
 SpherePointSamplingStrategyTypeVal SpherePointSamplingStrategyTypeValueIn)
{
  SpherePointSamplingStrategyTypeType = SpherePointSamplingStrategyTypeTypeIn;
  SpherePointSamplingStrategyTypeValue = SpherePointSamplingStrategyTypeValueIn;
}

SpherePointSamplingStrategyTypeChoicePair::~SpherePointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SpherePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete SpherePointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (SpherePointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete SpherePointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void SpherePointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (SpherePointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      SpherePointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (SpherePointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      SpherePointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class SphericalSegmentPointSamplingStrategyType

*/

SphericalSegmentPointSamplingStrategyType::SphericalSegmentPointSamplingStrategyType()
{
  SphericalSegmentPointSamplingStrategyTypePair = 0;
}

SphericalSegmentPointSamplingStrategyType::SphericalSegmentPointSamplingStrategyType(
 SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyTypePairIn)
{
  SphericalSegmentPointSamplingStrategyTypePair = SphericalSegmentPointSamplingStrategyTypePairIn;
}

SphericalSegmentPointSamplingStrategyType::~SphericalSegmentPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete SphericalSegmentPointSamplingStrategyTypePair;
  #endif
}

void SphericalSegmentPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SphericalSegmentPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyType::getSphericalSegmentPointSamplingStrategyTypePair()
{return SphericalSegmentPointSamplingStrategyTypePair;}

void SphericalSegmentPointSamplingStrategyType::setSphericalSegmentPointSamplingStrategyTypePair(SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyTypePairIn)
{SphericalSegmentPointSamplingStrategyTypePair = SphericalSegmentPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class SphericalSegmentPointSamplingStrategyTypeChoicePair

*/

SphericalSegmentPointSamplingStrategyTypeChoicePair::SphericalSegmentPointSamplingStrategyTypeChoicePair() {}

SphericalSegmentPointSamplingStrategyTypeChoicePair::SphericalSegmentPointSamplingStrategyTypeChoicePair(
 whichOne SphericalSegmentPointSamplingStrategyTypeTypeIn,
 SphericalSegmentPointSamplingStrategyTypeVal SphericalSegmentPointSamplingStrategyTypeValueIn)
{
  SphericalSegmentPointSamplingStrategyTypeType = SphericalSegmentPointSamplingStrategyTypeTypeIn;
  SphericalSegmentPointSamplingStrategyTypeValue = SphericalSegmentPointSamplingStrategyTypeValueIn;
}

SphericalSegmentPointSamplingStrategyTypeChoicePair::~SphericalSegmentPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SphericalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete SphericalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (SphericalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete SphericalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void SphericalSegmentPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (SphericalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      SphericalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (SphericalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      SphericalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class SurfaceOfRevolutionPointSamplingStrategyType

*/

SurfaceOfRevolutionPointSamplingStrategyType::SurfaceOfRevolutionPointSamplingStrategyType()
{
  SurfaceOfRevolutionPointSamplingStrategyTypePair = 0;
}

SurfaceOfRevolutionPointSamplingStrategyType::SurfaceOfRevolutionPointSamplingStrategyType(
 SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyTypePairIn)
{
  SurfaceOfRevolutionPointSamplingStrategyTypePair = SurfaceOfRevolutionPointSamplingStrategyTypePairIn;
}

SurfaceOfRevolutionPointSamplingStrategyType::~SurfaceOfRevolutionPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete SurfaceOfRevolutionPointSamplingStrategyTypePair;
  #endif
}

void SurfaceOfRevolutionPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SurfaceOfRevolutionPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyType::getSurfaceOfRevolutionPointSamplingStrategyTypePair()
{return SurfaceOfRevolutionPointSamplingStrategyTypePair;}

void SurfaceOfRevolutionPointSamplingStrategyType::setSurfaceOfRevolutionPointSamplingStrategyTypePair(SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyTypePairIn)
{SurfaceOfRevolutionPointSamplingStrategyTypePair = SurfaceOfRevolutionPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair

*/

SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair::SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair() {}

SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair::SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair(
 whichOne SurfaceOfRevolutionPointSamplingStrategyTypeTypeIn,
 SurfaceOfRevolutionPointSamplingStrategyTypeVal SurfaceOfRevolutionPointSamplingStrategyTypeValueIn)
{
  SurfaceOfRevolutionPointSamplingStrategyTypeType = SurfaceOfRevolutionPointSamplingStrategyTypeTypeIn;
  SurfaceOfRevolutionPointSamplingStrategyTypeValue = SurfaceOfRevolutionPointSamplingStrategyTypeValueIn;
}

SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair::~SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SurfaceOfRevolutionPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete SurfaceOfRevolutionPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (SurfaceOfRevolutionPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete SurfaceOfRevolutionPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (SurfaceOfRevolutionPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      SurfaceOfRevolutionPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (SurfaceOfRevolutionPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      SurfaceOfRevolutionPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ThenPointsType

*/

ThenPointsType::ThenPointsType()
{
  ThenPointsType_1213 = 0;
}

ThenPointsType::ThenPointsType(
 ThenPointsType_1213_Type * ThenPointsType_1213In)
{
  ThenPointsType_1213 = ThenPointsType_1213In;
}

ThenPointsType::~ThenPointsType()
{
  #ifndef NODESTRUCT
  delete ThenPointsType_1213;
  #endif
}

void ThenPointsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (ThenPointsType_1213)
    {
      ThenPointsType_1213->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

ThenPointsType_1213_Type * ThenPointsType::getThenPointsType_1213()
{return ThenPointsType_1213;}

void ThenPointsType::setThenPointsType_1213(ThenPointsType_1213_Type * ThenPointsType_1213In)
{ThenPointsType_1213 = ThenPointsType_1213In;}

/* ***************************************************************** */

/* class ToroidalSegmentPointSamplingStrategyType

*/

ToroidalSegmentPointSamplingStrategyType::ToroidalSegmentPointSamplingStrategyType()
{
  ToroidalSegmentPointSamplingStrategyTypePair = 0;
}

ToroidalSegmentPointSamplingStrategyType::ToroidalSegmentPointSamplingStrategyType(
 ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyTypePairIn)
{
  ToroidalSegmentPointSamplingStrategyTypePair = ToroidalSegmentPointSamplingStrategyTypePairIn;
}

ToroidalSegmentPointSamplingStrategyType::~ToroidalSegmentPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete ToroidalSegmentPointSamplingStrategyTypePair;
  #endif
}

void ToroidalSegmentPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ToroidalSegmentPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyType::getToroidalSegmentPointSamplingStrategyTypePair()
{return ToroidalSegmentPointSamplingStrategyTypePair;}

void ToroidalSegmentPointSamplingStrategyType::setToroidalSegmentPointSamplingStrategyTypePair(ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyTypePairIn)
{ToroidalSegmentPointSamplingStrategyTypePair = ToroidalSegmentPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class ToroidalSegmentPointSamplingStrategyTypeChoicePair

*/

ToroidalSegmentPointSamplingStrategyTypeChoicePair::ToroidalSegmentPointSamplingStrategyTypeChoicePair() {}

ToroidalSegmentPointSamplingStrategyTypeChoicePair::ToroidalSegmentPointSamplingStrategyTypeChoicePair(
 whichOne ToroidalSegmentPointSamplingStrategyTypeTypeIn,
 ToroidalSegmentPointSamplingStrategyTypeVal ToroidalSegmentPointSamplingStrategyTypeValueIn)
{
  ToroidalSegmentPointSamplingStrategyTypeType = ToroidalSegmentPointSamplingStrategyTypeTypeIn;
  ToroidalSegmentPointSamplingStrategyTypeValue = ToroidalSegmentPointSamplingStrategyTypeValueIn;
}

ToroidalSegmentPointSamplingStrategyTypeChoicePair::~ToroidalSegmentPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ToroidalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete ToroidalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (ToroidalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete ToroidalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void ToroidalSegmentPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (ToroidalSegmentPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      ToroidalSegmentPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (ToroidalSegmentPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      ToroidalSegmentPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class TorusPointSamplingStrategyType

*/

TorusPointSamplingStrategyType::TorusPointSamplingStrategyType()
{
  TorusPointSamplingStrategyTypePair = 0;
}

TorusPointSamplingStrategyType::TorusPointSamplingStrategyType(
 TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyTypePairIn)
{
  TorusPointSamplingStrategyTypePair = TorusPointSamplingStrategyTypePairIn;
}

TorusPointSamplingStrategyType::~TorusPointSamplingStrategyType()
{
  #ifndef NODESTRUCT
  delete TorusPointSamplingStrategyTypePair;
  #endif
}

void TorusPointSamplingStrategyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  TorusPointSamplingStrategyTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyType::getTorusPointSamplingStrategyTypePair()
{return TorusPointSamplingStrategyTypePair;}

void TorusPointSamplingStrategyType::setTorusPointSamplingStrategyTypePair(TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyTypePairIn)
{TorusPointSamplingStrategyTypePair = TorusPointSamplingStrategyTypePairIn;}

/* ***************************************************************** */

/* class TorusPointSamplingStrategyTypeChoicePair

*/

TorusPointSamplingStrategyTypeChoicePair::TorusPointSamplingStrategyTypeChoicePair() {}

TorusPointSamplingStrategyTypeChoicePair::TorusPointSamplingStrategyTypeChoicePair(
 whichOne TorusPointSamplingStrategyTypeTypeIn,
 TorusPointSamplingStrategyTypeVal TorusPointSamplingStrategyTypeValueIn)
{
  TorusPointSamplingStrategyTypeType = TorusPointSamplingStrategyTypeTypeIn;
  TorusPointSamplingStrategyTypeValue = TorusPointSamplingStrategyTypeValueIn;
}

TorusPointSamplingStrategyTypeChoicePair::~TorusPointSamplingStrategyTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (TorusPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    delete TorusPointSamplingStrategyTypeValue.PointSamplingStrategyEnum;
  else if (TorusPointSamplingStrategyTypeType == UserDefinedStrategyE)
    delete TorusPointSamplingStrategyTypeValue.UserDefinedStrategy;
  #endif
}

void TorusPointSamplingStrategyTypeChoicePair::printSelf(FILE * outFile)
{
  if (TorusPointSamplingStrategyTypeType == PointSamplingStrategyEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSamplingStrategyEnum");
      TorusPointSamplingStrategyTypeValue.PointSamplingStrategyEnum->printSelf(outFile);
      fprintf(outFile, "</PointSamplingStrategyEnum>\n");
    }
  else if (TorusPointSamplingStrategyTypeType == UserDefinedStrategyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedStrategy");
      TorusPointSamplingStrategyTypeValue.UserDefinedStrategy->printSelf(outFile);
      fprintf(outFile, "</UserDefinedStrategy>\n");
    }
}

/* ***************************************************************** */

/* class ZeroToOneType

*/

ZeroToOneType::ZeroToOneType() :
  XmlDouble()
{
}

ZeroToOneType::ZeroToOneType(
 const char * valIn) :
  XmlDouble(
    valIn)
{
  if (!bad)
    bad = ((val < 0) ||
          (val > 1));
}

ZeroToOneType::~ZeroToOneType() {}

bool ZeroToOneType::ZeroToOneTypeIsBad()
{
  if (XmlDoubleIsBad())
    return true;
  return ((val < 0) ||
          (val > 1));
}

void ZeroToOneType::printName(FILE * outFile)
{
  fprintf(outFile, "ZeroToOneType");
}

void ZeroToOneType::printSelf(FILE * outFile)
{
  if (ZeroToOneTypeIsBad())
    {
      fprintf(stderr, "bad ZeroToOneType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::printSelf(outFile);
}

void ZeroToOneType::oPrintSelf(FILE * outFile)
{
  if (ZeroToOneTypeIsBad())
    {
      fprintf(stderr, "bad ZeroToOneType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ThenPointsType_1213_Type

*/

ThenPointsType_1213_Type::ThenPointsType_1213_Type()
{
  ThenPointsType_1213_TypePair = 0;
}

ThenPointsType_1213_Type::ThenPointsType_1213_Type(
 ThenPointsType_1213_TypeChoicePair * ThenPointsType_1213_TypePairIn)
{
  ThenPointsType_1213_TypePair = ThenPointsType_1213_TypePairIn;
}

ThenPointsType_1213_Type::~ThenPointsType_1213_Type()
{
  #ifndef NODESTRUCT
  delete ThenPointsType_1213_TypePair;
  #endif
}

void ThenPointsType_1213_Type::printSelf(FILE * outFile)
{
  if (ThenPointsType_1213_TypePair)
    {
      ThenPointsType_1213_TypePair->printSelf(outFile);
    }
}

ThenPointsType_1213_TypeChoicePair * ThenPointsType_1213_Type::getThenPointsType_1213_TypePair()
{return ThenPointsType_1213_TypePair;}

void ThenPointsType_1213_Type::setThenPointsType_1213_TypePair(ThenPointsType_1213_TypeChoicePair * ThenPointsType_1213_TypePairIn)
{ThenPointsType_1213_TypePair = ThenPointsType_1213_TypePairIn;}

/* ***************************************************************** */

/* class ThenPointsType_1213_TypeChoicePair

*/

ThenPointsType_1213_TypeChoicePair::ThenPointsType_1213_TypeChoicePair() {}

ThenPointsType_1213_TypeChoicePair::ThenPointsType_1213_TypeChoicePair(
 whichOne ThenPointsType_1213_TypeTypeIn,
 ThenPointsType_1213_TypeVal ThenPointsType_1213_TypeValueIn)
{
  ThenPointsType_1213_TypeType = ThenPointsType_1213_TypeTypeIn;
  ThenPointsType_1213_TypeValue = ThenPointsType_1213_TypeValueIn;
}

ThenPointsType_1213_TypeChoicePair::~ThenPointsType_1213_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ThenPointsType_1213_TypeType == NumberOfPointsE)
    delete ThenPointsType_1213_TypeValue.NumberOfPoints;
  else if (ThenPointsType_1213_TypeType == MinPointsE)
    delete ThenPointsType_1213_TypeValue.MinPoints;
  else if (ThenPointsType_1213_TypeType == PointDensityE)
    delete ThenPointsType_1213_TypeValue.PointDensity;
  else if (ThenPointsType_1213_TypeType == MinPointDensityE)
    delete ThenPointsType_1213_TypeValue.MinPointDensity;
  #endif
}

void ThenPointsType_1213_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ThenPointsType_1213_TypeType == NumberOfPointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NumberOfPoints");
      ThenPointsType_1213_TypeValue.NumberOfPoints->printSelf(outFile);
      fprintf(outFile, "</NumberOfPoints>\n");
    }
  else if (ThenPointsType_1213_TypeType == MinPointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinPoints");
      ThenPointsType_1213_TypeValue.MinPoints->printSelf(outFile);
      fprintf(outFile, "</MinPoints>\n");
    }
  else if (ThenPointsType_1213_TypeType == PointDensityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointDensity");
      ThenPointsType_1213_TypeValue.PointDensity->printSelf(outFile);
      fprintf(outFile, "</PointDensity>\n");
    }
  else if (ThenPointsType_1213_TypeType == MinPointDensityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinPointDensity");
      ThenPointsType_1213_TypeValue.MinPointDensity->printSelf(outFile);
      fprintf(outFile, "</MinPointDensity>\n");
    }
}

/* ***************************************************************** */

