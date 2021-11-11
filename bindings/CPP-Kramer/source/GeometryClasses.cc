/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "GeometryClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class Aggregate12CoreType

*/

Aggregate12CoreType::Aggregate12CoreType() :
  CurveCoreBaseType()
{
  SubCurves = 0;
}

Aggregate12CoreType::Aggregate12CoreType(
 ArraySubCurve12Type * SubCurvesIn) :
  CurveCoreBaseType()
{
  SubCurves = SubCurvesIn;
}

Aggregate12CoreType::Aggregate12CoreType(
 ParameterRangeType * domainIn,
 ArraySubCurve12Type * SubCurvesIn) :
  CurveCoreBaseType(
    domainIn)
{
  SubCurves = SubCurvesIn;
}

Aggregate12CoreType::~Aggregate12CoreType()
{
  #ifndef NODESTRUCT
  delete SubCurves;
  #endif
}

void Aggregate12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SubCurves");
  SubCurves->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SubCurves>\n");
  doSpaces(-INDENT, outFile);
}

bool Aggregate12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Aggregate12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Aggregate12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Aggregate12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Aggregate12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

ArraySubCurve12Type * Aggregate12CoreType::getSubCurves()
{return SubCurves;}

void Aggregate12CoreType::setSubCurves(ArraySubCurve12Type * SubCurvesIn)
{SubCurves = SubCurvesIn;}

/* ***************************************************************** */

/* class Aggregate12Type

*/

Aggregate12Type::Aggregate12Type() :
  Curve12BaseType()
{
  Aggregate12Core = 0;
}

Aggregate12Type::Aggregate12Type(
 AttributesType * AttributesIn,
 Aggregate12CoreType * Aggregate12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  Aggregate12Core = Aggregate12CoreIn;
}

Aggregate12Type::Aggregate12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Aggregate12CoreType * Aggregate12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Aggregate12Core = Aggregate12CoreIn;
}

Aggregate12Type::~Aggregate12Type()
{
  #ifndef NODESTRUCT
  delete Aggregate12Core;
  #endif
}

void Aggregate12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Aggregate12Core");
  Aggregate12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Aggregate12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool Aggregate12Type::badAttributes(
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
              fprintf(stderr, "two values for id in Aggregate12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Aggregate12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Aggregate12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Aggregate12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Aggregate12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Aggregate12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Aggregate12CoreType * Aggregate12Type::getAggregate12Core()
{return Aggregate12Core;}

void Aggregate12Type::setAggregate12Core(Aggregate12CoreType * Aggregate12CoreIn)
{Aggregate12Core = Aggregate12CoreIn;}

/* ***************************************************************** */

/* class Aggregate13CoreType

*/

Aggregate13CoreType::Aggregate13CoreType() :
  CurveCoreBaseType()
{
  SubCurves = 0;
}

Aggregate13CoreType::Aggregate13CoreType(
 ArraySubCurve13Type * SubCurvesIn) :
  CurveCoreBaseType()
{
  SubCurves = SubCurvesIn;
}

Aggregate13CoreType::Aggregate13CoreType(
 ParameterRangeType * domainIn,
 ArraySubCurve13Type * SubCurvesIn) :
  CurveCoreBaseType(
    domainIn)
{
  SubCurves = SubCurvesIn;
}

Aggregate13CoreType::~Aggregate13CoreType()
{
  #ifndef NODESTRUCT
  delete SubCurves;
  #endif
}

void Aggregate13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SubCurves");
  SubCurves->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SubCurves>\n");
  doSpaces(-INDENT, outFile);
}

bool Aggregate13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Aggregate13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Aggregate13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Aggregate13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Aggregate13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

ArraySubCurve13Type * Aggregate13CoreType::getSubCurves()
{return SubCurves;}

void Aggregate13CoreType::setSubCurves(ArraySubCurve13Type * SubCurvesIn)
{SubCurves = SubCurvesIn;}

/* ***************************************************************** */

/* class Aggregate13Type

*/

Aggregate13Type::Aggregate13Type() :
  Curve13BaseType()
{
  Aggregate13Core = 0;
  Transform = 0;
}

Aggregate13Type::Aggregate13Type(
 AttributesType * AttributesIn,
 Aggregate13CoreType * Aggregate13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  Aggregate13Core = Aggregate13CoreIn;
  Transform = TransformIn;
}

Aggregate13Type::Aggregate13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Aggregate13CoreType * Aggregate13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Aggregate13Core = Aggregate13CoreIn;
  Transform = TransformIn;
}

Aggregate13Type::~Aggregate13Type()
{
  #ifndef NODESTRUCT
  delete Aggregate13Core;
  delete Transform;
  #endif
}

void Aggregate13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Aggregate13Core");
  Aggregate13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Aggregate13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Aggregate13Type::badAttributes(
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
              fprintf(stderr, "two values for id in Aggregate13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Aggregate13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Aggregate13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Aggregate13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Aggregate13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Aggregate13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Aggregate13CoreType * Aggregate13Type::getAggregate13Core()
{return Aggregate13Core;}

void Aggregate13Type::setAggregate13Core(Aggregate13CoreType * Aggregate13CoreIn)
{Aggregate13Core = Aggregate13CoreIn;}

ElementReferenceType * Aggregate13Type::getTransform()
{return Transform;}

void Aggregate13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class ArcCircular12CoreType

*/

ArcCircular12CoreType::ArcCircular12CoreType() :
  CurveCoreBaseType()
{
  turned = 0;
  Radius = 0;
  Center = 0;
  DirBeg = 0;
}

ArcCircular12CoreType::ArcCircular12CoreType(
 XmlDouble * RadiusIn,
 Point2dSimpleType * CenterIn,
 UnitVector2dSimpleType * DirBegIn) :
  CurveCoreBaseType()
{
  turned = 0;
  Radius = RadiusIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
}

ArcCircular12CoreType::ArcCircular12CoreType(
 ParameterRangeType * domainIn,
 XmlBoolean * turnedIn,
 XmlDouble * RadiusIn,
 Point2dSimpleType * CenterIn,
 UnitVector2dSimpleType * DirBegIn) :
  CurveCoreBaseType(
    domainIn)
{
  turned = turnedIn;
  Radius = RadiusIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
}

ArcCircular12CoreType::~ArcCircular12CoreType()
{
  #ifndef NODESTRUCT
  delete turned;
  delete Radius;
  delete Center;
  delete DirBeg;
  #endif
}

void ArcCircular12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  if (turned)
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
      fprintf(outFile, "turned=\"");
      turned->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Radius");
  Radius->printSelf(outFile);
  fprintf(outFile, "</Radius>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirBeg");
  DirBeg->printSelf(outFile);
  fprintf(outFile, "</DirBeg>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcCircular12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in ArcCircular12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in ArcCircular12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (turned)
            {
              fprintf(stderr, "two values for turned in ArcCircular12CoreType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in ArcCircular12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcCircular12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in ArcCircular12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
      delete turned;
      turned = 0;
    }
  return returnValue;
}

XmlBoolean * ArcCircular12CoreType::getturned()
{return turned;}

void ArcCircular12CoreType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

XmlDouble * ArcCircular12CoreType::getRadius()
{return Radius;}

void ArcCircular12CoreType::setRadius(XmlDouble * RadiusIn)
{Radius = RadiusIn;}

Point2dSimpleType * ArcCircular12CoreType::getCenter()
{return Center;}

void ArcCircular12CoreType::setCenter(Point2dSimpleType * CenterIn)
{Center = CenterIn;}

UnitVector2dSimpleType * ArcCircular12CoreType::getDirBeg()
{return DirBeg;}

void ArcCircular12CoreType::setDirBeg(UnitVector2dSimpleType * DirBegIn)
{DirBeg = DirBegIn;}

/* ***************************************************************** */

/* class ArcCircular12Type

*/

ArcCircular12Type::ArcCircular12Type() :
  Curve12BaseType()
{
  ArcCircular12Core = 0;
}

ArcCircular12Type::ArcCircular12Type(
 AttributesType * AttributesIn,
 ArcCircular12CoreType * ArcCircular12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  ArcCircular12Core = ArcCircular12CoreIn;
}

ArcCircular12Type::ArcCircular12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ArcCircular12CoreType * ArcCircular12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  ArcCircular12Core = ArcCircular12CoreIn;
}

ArcCircular12Type::~ArcCircular12Type()
{
  #ifndef NODESTRUCT
  delete ArcCircular12Core;
  #endif
}

void ArcCircular12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<ArcCircular12Core");
  ArcCircular12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ArcCircular12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcCircular12Type::badAttributes(
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
              fprintf(stderr, "two values for id in ArcCircular12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ArcCircular12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in ArcCircular12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ArcCircular12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcCircular12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ArcCircular12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

ArcCircular12CoreType * ArcCircular12Type::getArcCircular12Core()
{return ArcCircular12Core;}

void ArcCircular12Type::setArcCircular12Core(ArcCircular12CoreType * ArcCircular12CoreIn)
{ArcCircular12Core = ArcCircular12CoreIn;}

/* ***************************************************************** */

/* class ArcCircular13CoreType

*/

ArcCircular13CoreType::ArcCircular13CoreType() :
  CurveCoreBaseType()
{
  Radius = 0;
  Center = 0;
  DirBeg = 0;
  Normal = 0;
}

ArcCircular13CoreType::ArcCircular13CoreType(
 XmlDouble * RadiusIn,
 PointSimpleType * CenterIn,
 UnitVectorSimpleType * DirBegIn,
 UnitVectorSimpleType * NormalIn) :
  CurveCoreBaseType()
{
  Radius = RadiusIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
  Normal = NormalIn;
}

ArcCircular13CoreType::ArcCircular13CoreType(
 ParameterRangeType * domainIn,
 XmlDouble * RadiusIn,
 PointSimpleType * CenterIn,
 UnitVectorSimpleType * DirBegIn,
 UnitVectorSimpleType * NormalIn) :
  CurveCoreBaseType(
    domainIn)
{
  Radius = RadiusIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
  Normal = NormalIn;
}

ArcCircular13CoreType::~ArcCircular13CoreType()
{
  #ifndef NODESTRUCT
  delete Radius;
  delete Center;
  delete DirBeg;
  delete Normal;
  #endif
}

void ArcCircular13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Radius");
  Radius->printSelf(outFile);
  fprintf(outFile, "</Radius>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirBeg");
  DirBeg->printSelf(outFile);
  fprintf(outFile, "</DirBeg>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcCircular13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in ArcCircular13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in ArcCircular13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcCircular13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in ArcCircular13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

XmlDouble * ArcCircular13CoreType::getRadius()
{return Radius;}

void ArcCircular13CoreType::setRadius(XmlDouble * RadiusIn)
{Radius = RadiusIn;}

PointSimpleType * ArcCircular13CoreType::getCenter()
{return Center;}

void ArcCircular13CoreType::setCenter(PointSimpleType * CenterIn)
{Center = CenterIn;}

UnitVectorSimpleType * ArcCircular13CoreType::getDirBeg()
{return DirBeg;}

void ArcCircular13CoreType::setDirBeg(UnitVectorSimpleType * DirBegIn)
{DirBeg = DirBegIn;}

UnitVectorSimpleType * ArcCircular13CoreType::getNormal()
{return Normal;}

void ArcCircular13CoreType::setNormal(UnitVectorSimpleType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class ArcCircular13Type

*/

ArcCircular13Type::ArcCircular13Type() :
  Curve13BaseType()
{
  ArcCircular13Core = 0;
  Transform = 0;
}

ArcCircular13Type::ArcCircular13Type(
 AttributesType * AttributesIn,
 ArcCircular13CoreType * ArcCircular13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  ArcCircular13Core = ArcCircular13CoreIn;
  Transform = TransformIn;
}

ArcCircular13Type::ArcCircular13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ArcCircular13CoreType * ArcCircular13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  ArcCircular13Core = ArcCircular13CoreIn;
  Transform = TransformIn;
}

ArcCircular13Type::~ArcCircular13Type()
{
  #ifndef NODESTRUCT
  delete ArcCircular13Core;
  delete Transform;
  #endif
}

void ArcCircular13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<ArcCircular13Core");
  ArcCircular13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ArcCircular13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ArcCircular13Type::badAttributes(
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
              fprintf(stderr, "two values for id in ArcCircular13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ArcCircular13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in ArcCircular13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ArcCircular13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcCircular13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ArcCircular13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

ArcCircular13CoreType * ArcCircular13Type::getArcCircular13Core()
{return ArcCircular13Core;}

void ArcCircular13Type::setArcCircular13Core(ArcCircular13CoreType * ArcCircular13CoreIn)
{ArcCircular13Core = ArcCircular13CoreIn;}

ElementReferenceType * ArcCircular13Type::getTransform()
{return Transform;}

void ArcCircular13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class ArcConic12CoreType

*/

ArcConic12CoreType::ArcConic12CoreType() :
  CurveCoreBaseType()
{
  form = 0;
  turned = 0;
  A = 0;
  B = 0;
  Center = 0;
  DirBeg = 0;
}

ArcConic12CoreType::ArcConic12CoreType(
 XmlDouble * AIn,
 XmlDouble * BIn,
 Point2dSimpleType * CenterIn,
 UnitVector2dSimpleType * DirBegIn) :
  CurveCoreBaseType()
{
  form = 0;
  turned = 0;
  A = AIn;
  B = BIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
}

ArcConic12CoreType::ArcConic12CoreType(
 ParameterRangeType * domainIn,
 ArcConicFormEnumType * formIn,
 XmlBoolean * turnedIn,
 XmlDouble * AIn,
 XmlDouble * BIn,
 Point2dSimpleType * CenterIn,
 UnitVector2dSimpleType * DirBegIn) :
  CurveCoreBaseType(
    domainIn)
{
  form = formIn;
  turned = turnedIn;
  A = AIn;
  B = BIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
}

ArcConic12CoreType::~ArcConic12CoreType()
{
  #ifndef NODESTRUCT
  delete form;
  delete turned;
  delete A;
  delete B;
  delete Center;
  delete DirBeg;
  #endif
}

void ArcConic12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"form\" missing\n");
      exit(1);
    }
  if (turned)
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
      fprintf(outFile, "turned=\"");
      turned->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<A");
  A->printSelf(outFile);
  fprintf(outFile, "</A>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<B");
  B->printSelf(outFile);
  fprintf(outFile, "</B>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirBeg");
  DirBeg->printSelf(outFile);
  fprintf(outFile, "</DirBeg>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcConic12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in ArcConic12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in ArcConic12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else if (decl->name == "form")
        {
          ArcConicFormEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in ArcConic12CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new ArcConicFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in ArcConic12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (turned)
            {
              fprintf(stderr, "two values for turned in ArcConic12CoreType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in ArcConic12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcConic12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in ArcConic12CoreType\n");
      returnValue = true;
    }
  if (form == 0)
    {
      fprintf(stderr, "required attribute \"form\" missing in ArcConic12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
      delete form;
      form = 0;
      delete turned;
      turned = 0;
    }
  return returnValue;
}

ArcConicFormEnumType * ArcConic12CoreType::getform()
{return form;}

void ArcConic12CoreType::setform(ArcConicFormEnumType * formIn)
{form = formIn;}

XmlBoolean * ArcConic12CoreType::getturned()
{return turned;}

void ArcConic12CoreType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

XmlDouble * ArcConic12CoreType::getA()
{return A;}

void ArcConic12CoreType::setA(XmlDouble * AIn)
{A = AIn;}

XmlDouble * ArcConic12CoreType::getB()
{return B;}

void ArcConic12CoreType::setB(XmlDouble * BIn)
{B = BIn;}

Point2dSimpleType * ArcConic12CoreType::getCenter()
{return Center;}

void ArcConic12CoreType::setCenter(Point2dSimpleType * CenterIn)
{Center = CenterIn;}

UnitVector2dSimpleType * ArcConic12CoreType::getDirBeg()
{return DirBeg;}

void ArcConic12CoreType::setDirBeg(UnitVector2dSimpleType * DirBegIn)
{DirBeg = DirBegIn;}

/* ***************************************************************** */

/* class ArcConic12Type

*/

ArcConic12Type::ArcConic12Type() :
  Curve12BaseType()
{
  ArcConic12Core = 0;
}

ArcConic12Type::ArcConic12Type(
 AttributesType * AttributesIn,
 ArcConic12CoreType * ArcConic12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  ArcConic12Core = ArcConic12CoreIn;
}

ArcConic12Type::ArcConic12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ArcConic12CoreType * ArcConic12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  ArcConic12Core = ArcConic12CoreIn;
}

ArcConic12Type::~ArcConic12Type()
{
  #ifndef NODESTRUCT
  delete ArcConic12Core;
  #endif
}

void ArcConic12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<ArcConic12Core");
  ArcConic12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ArcConic12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcConic12Type::badAttributes(
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
              fprintf(stderr, "two values for id in ArcConic12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ArcConic12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in ArcConic12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ArcConic12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcConic12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ArcConic12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

ArcConic12CoreType * ArcConic12Type::getArcConic12Core()
{return ArcConic12Core;}

void ArcConic12Type::setArcConic12Core(ArcConic12CoreType * ArcConic12CoreIn)
{ArcConic12Core = ArcConic12CoreIn;}

/* ***************************************************************** */

/* class ArcConic13CoreType

*/

ArcConic13CoreType::ArcConic13CoreType() :
  CurveCoreBaseType()
{
  form = 0;
  A = 0;
  B = 0;
  Center = 0;
  DirBeg = 0;
  Normal = 0;
}

ArcConic13CoreType::ArcConic13CoreType(
 XmlDouble * AIn,
 XmlDouble * BIn,
 PointSimpleType * CenterIn,
 UnitVectorSimpleType * DirBegIn,
 UnitVectorSimpleType * NormalIn) :
  CurveCoreBaseType()
{
  form = 0;
  A = AIn;
  B = BIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
  Normal = NormalIn;
}

ArcConic13CoreType::ArcConic13CoreType(
 ParameterRangeType * domainIn,
 ArcConicFormEnumType * formIn,
 XmlDouble * AIn,
 XmlDouble * BIn,
 PointSimpleType * CenterIn,
 UnitVectorSimpleType * DirBegIn,
 UnitVectorSimpleType * NormalIn) :
  CurveCoreBaseType(
    domainIn)
{
  form = formIn;
  A = AIn;
  B = BIn;
  Center = CenterIn;
  DirBeg = DirBegIn;
  Normal = NormalIn;
}

ArcConic13CoreType::~ArcConic13CoreType()
{
  #ifndef NODESTRUCT
  delete form;
  delete A;
  delete B;
  delete Center;
  delete DirBeg;
  delete Normal;
  #endif
}

void ArcConic13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"form\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<A");
  A->printSelf(outFile);
  fprintf(outFile, "</A>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<B");
  B->printSelf(outFile);
  fprintf(outFile, "</B>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirBeg");
  DirBeg->printSelf(outFile);
  fprintf(outFile, "</DirBeg>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(-INDENT, outFile);
}

bool ArcConic13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in ArcConic13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in ArcConic13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else if (decl->name == "form")
        {
          ArcConicFormEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in ArcConic13CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new ArcConicFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in ArcConic13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcConic13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in ArcConic13CoreType\n");
      returnValue = true;
    }
  if (form == 0)
    {
      fprintf(stderr, "required attribute \"form\" missing in ArcConic13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
      delete form;
      form = 0;
    }
  return returnValue;
}

ArcConicFormEnumType * ArcConic13CoreType::getform()
{return form;}

void ArcConic13CoreType::setform(ArcConicFormEnumType * formIn)
{form = formIn;}

XmlDouble * ArcConic13CoreType::getA()
{return A;}

void ArcConic13CoreType::setA(XmlDouble * AIn)
{A = AIn;}

XmlDouble * ArcConic13CoreType::getB()
{return B;}

void ArcConic13CoreType::setB(XmlDouble * BIn)
{B = BIn;}

PointSimpleType * ArcConic13CoreType::getCenter()
{return Center;}

void ArcConic13CoreType::setCenter(PointSimpleType * CenterIn)
{Center = CenterIn;}

UnitVectorSimpleType * ArcConic13CoreType::getDirBeg()
{return DirBeg;}

void ArcConic13CoreType::setDirBeg(UnitVectorSimpleType * DirBegIn)
{DirBeg = DirBegIn;}

UnitVectorSimpleType * ArcConic13CoreType::getNormal()
{return Normal;}

void ArcConic13CoreType::setNormal(UnitVectorSimpleType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class ArcConic13Type

*/

ArcConic13Type::ArcConic13Type() :
  Curve13BaseType()
{
  ArcConic13Core = 0;
  Transform = 0;
}

ArcConic13Type::ArcConic13Type(
 AttributesType * AttributesIn,
 ArcConic13CoreType * ArcConic13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  ArcConic13Core = ArcConic13CoreIn;
  Transform = TransformIn;
}

ArcConic13Type::ArcConic13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ArcConic13CoreType * ArcConic13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  ArcConic13Core = ArcConic13CoreIn;
  Transform = TransformIn;
}

ArcConic13Type::~ArcConic13Type()
{
  #ifndef NODESTRUCT
  delete ArcConic13Core;
  delete Transform;
  #endif
}

void ArcConic13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<ArcConic13Core");
  ArcConic13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ArcConic13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ArcConic13Type::badAttributes(
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
              fprintf(stderr, "two values for id in ArcConic13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ArcConic13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in ArcConic13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ArcConic13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArcConic13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ArcConic13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

ArcConic13CoreType * ArcConic13Type::getArcConic13Core()
{return ArcConic13Core;}

void ArcConic13Type::setArcConic13Core(ArcConic13CoreType * ArcConic13CoreIn)
{ArcConic13Core = ArcConic13CoreIn;}

ElementReferenceType * ArcConic13Type::getTransform()
{return Transform;}

void ArcConic13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class ArcConicFormEnumType

*/

ArcConicFormEnumType::ArcConicFormEnumType() :
  XmlString()
{
}

ArcConicFormEnumType::ArcConicFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "PARABOLA") &&
           strcmp(val.c_str(), "ELLIPSE") &&
           strcmp(val.c_str(), "HYPERBOLA"));
}

ArcConicFormEnumType::~ArcConicFormEnumType() {}

bool ArcConicFormEnumType::ArcConicFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PARABOLA") &&
          strcmp(val.c_str(), "ELLIPSE") &&
          strcmp(val.c_str(), "HYPERBOLA"));
}

void ArcConicFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ArcConicFormEnumType");
}

void ArcConicFormEnumType::printSelf(FILE * outFile)
{
  if (ArcConicFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad ArcConicFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void ArcConicFormEnumType::oPrintSelf(FILE * outFile)
{
  if (ArcConicFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad ArcConicFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ArraySubCurve12Type

*/

ArraySubCurve12Type::ArraySubCurve12Type()
{
  n = 0;
  SubCurve = 0;
}

ArraySubCurve12Type::ArraySubCurve12Type(
 Curve12OrientedTypeLisd * SubCurveIn)
{
  n = 0;
  SubCurve = SubCurveIn;
}

ArraySubCurve12Type::ArraySubCurve12Type(
 NaturalType * nIn,
 Curve12OrientedTypeLisd * SubCurveIn)
{
  n = nIn;
  SubCurve = SubCurveIn;
}

ArraySubCurve12Type::~ArraySubCurve12Type()
{
  #ifndef NODESTRUCT
  delete n;
  delete SubCurve;
  #endif
}

void ArraySubCurve12Type::printSelf(FILE * outFile)
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
    if (!SubCurve)
      {
        fprintf(stderr, "SubCurve list is missing\n");
        exit(1);
      }
    if (SubCurve->size() == 0)
      {
        fprintf(stderr, "SubCurve list is empty\n");
        exit(1);
      }
    std::list<Curve12OrientedType *>::iterator iter;
    for (iter = SubCurve->begin();
         iter != SubCurve->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SubCurve");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SubCurve>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArraySubCurve12Type::badAttributes(
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
              fprintf(stderr, "two values for n in ArraySubCurve12Type\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArraySubCurve12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArraySubCurve12Type\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArraySubCurve12Type\n");
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

NaturalType * ArraySubCurve12Type::getn()
{return n;}

void ArraySubCurve12Type::setn(NaturalType * nIn)
{n = nIn;}

Curve12OrientedTypeLisd * ArraySubCurve12Type::getSubCurve()
{return SubCurve;}

void ArraySubCurve12Type::setSubCurve(Curve12OrientedTypeLisd * SubCurveIn)
{SubCurve = SubCurveIn;}

/* ***************************************************************** */

/* class ArraySubCurve13Type

*/

ArraySubCurve13Type::ArraySubCurve13Type()
{
  n = 0;
  SubCurve = 0;
}

ArraySubCurve13Type::ArraySubCurve13Type(
 Curve13OrientedTypeLisd * SubCurveIn)
{
  n = 0;
  SubCurve = SubCurveIn;
}

ArraySubCurve13Type::ArraySubCurve13Type(
 NaturalType * nIn,
 Curve13OrientedTypeLisd * SubCurveIn)
{
  n = nIn;
  SubCurve = SubCurveIn;
}

ArraySubCurve13Type::~ArraySubCurve13Type()
{
  #ifndef NODESTRUCT
  delete n;
  delete SubCurve;
  #endif
}

void ArraySubCurve13Type::printSelf(FILE * outFile)
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
    if (!SubCurve)
      {
        fprintf(stderr, "SubCurve list is missing\n");
        exit(1);
      }
    if (SubCurve->size() == 0)
      {
        fprintf(stderr, "SubCurve list is empty\n");
        exit(1);
      }
    std::list<Curve13OrientedType *>::iterator iter;
    for (iter = SubCurve->begin();
         iter != SubCurve->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SubCurve");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SubCurve>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArraySubCurve13Type::badAttributes(
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
              fprintf(stderr, "two values for n in ArraySubCurve13Type\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArraySubCurve13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArraySubCurve13Type\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArraySubCurve13Type\n");
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

NaturalType * ArraySubCurve13Type::getn()
{return n;}

void ArraySubCurve13Type::setn(NaturalType * nIn)
{n = nIn;}

Curve13OrientedTypeLisd * ArraySubCurve13Type::getSubCurve()
{return SubCurve;}

void ArraySubCurve13Type::setSubCurve(Curve13OrientedTypeLisd * SubCurveIn)
{SubCurve = SubCurveIn;}

/* ***************************************************************** */

/* class ArrayTriangleVertexNormalType

*/

ArrayTriangleVertexNormalType::ArrayTriangleVertexNormalType()
{
  n = 0;
  NormalSpecial = 0;
}

ArrayTriangleVertexNormalType::ArrayTriangleVertexNormalType(
 TriangleVertexNormalTypeLisd * NormalSpecialIn)
{
  n = 0;
  NormalSpecial = NormalSpecialIn;
}

ArrayTriangleVertexNormalType::ArrayTriangleVertexNormalType(
 NaturalType * nIn,
 TriangleVertexNormalTypeLisd * NormalSpecialIn)
{
  n = nIn;
  NormalSpecial = NormalSpecialIn;
}

ArrayTriangleVertexNormalType::~ArrayTriangleVertexNormalType()
{
  #ifndef NODESTRUCT
  delete n;
  delete NormalSpecial;
  #endif
}

void ArrayTriangleVertexNormalType::printSelf(FILE * outFile)
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
    if (!NormalSpecial)
      {
        fprintf(stderr, "NormalSpecial list is missing\n");
        exit(1);
      }
    if (NormalSpecial->size() == 0)
      {
        fprintf(stderr, "NormalSpecial list is empty\n");
        exit(1);
      }
    std::list<TriangleVertexNormalType *>::iterator iter;
    for (iter = NormalSpecial->begin();
         iter != NormalSpecial->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<NormalSpecial");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</NormalSpecial>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayTriangleVertexNormalType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayTriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayTriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayTriangleVertexNormalType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayTriangleVertexNormalType\n");
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

NaturalType * ArrayTriangleVertexNormalType::getn()
{return n;}

void ArrayTriangleVertexNormalType::setn(NaturalType * nIn)
{n = nIn;}

TriangleVertexNormalTypeLisd * ArrayTriangleVertexNormalType::getNormalSpecial()
{return NormalSpecial;}

void ArrayTriangleVertexNormalType::setNormalSpecial(TriangleVertexNormalTypeLisd * NormalSpecialIn)
{NormalSpecial = NormalSpecialIn;}

/* ***************************************************************** */

/* class Attr23CoreEnumType

*/

Attr23CoreEnumType::Attr23CoreEnumType() :
  XmlString()
{
}

Attr23CoreEnumType::Attr23CoreEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "FREEFORM") &&
           strcmp(val.c_str(), "CYLINDER") &&
           strcmp(val.c_str(), "CONE") &&
           strcmp(val.c_str(), "TORUS") &&
           strcmp(val.c_str(), "SPHERE") &&
           strcmp(val.c_str(), "PLANE"));
}

Attr23CoreEnumType::~Attr23CoreEnumType() {}

bool Attr23CoreEnumType::Attr23CoreEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "FREEFORM") &&
          strcmp(val.c_str(), "CYLINDER") &&
          strcmp(val.c_str(), "CONE") &&
          strcmp(val.c_str(), "TORUS") &&
          strcmp(val.c_str(), "SPHERE") &&
          strcmp(val.c_str(), "PLANE"));
}

void Attr23CoreEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "Attr23CoreEnumType");
}

void Attr23CoreEnumType::printSelf(FILE * outFile)
{
  if (Attr23CoreEnumTypeIsBad())
    {
      fprintf(stderr, "bad Attr23CoreEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void Attr23CoreEnumType::oPrintSelf(FILE * outFile)
{
  if (Attr23CoreEnumTypeIsBad())
    {
      fprintf(stderr, "bad Attr23CoreEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class Cone23CoreType

*/

Cone23CoreType::Cone23CoreType() :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  DiameterBottom = 0;
  DiameterTop = 0;
  Length = 0;
  Axis = 0;
  Sweep = 0;
}

Cone23CoreType::Cone23CoreType(
 XmlDouble * DiameterBottomIn,
 XmlDouble * DiameterTopIn,
 XmlDouble * LengthIn,
 AxisType * AxisIn,
 SweepType * SweepIn) :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  DiameterBottom = DiameterBottomIn;
  DiameterTop = DiameterTopIn;
  Length = LengthIn;
  Axis = AxisIn;
  Sweep = SweepIn;
}

Cone23CoreType::Cone23CoreType(
 Attr23CoreEnumType * formIn,
 DoublePositiveType * scaleUIn,
 DoublePositiveType * scaleVIn,
 XmlBoolean * turnedVIn,
 XmlDouble * DiameterBottomIn,
 XmlDouble * DiameterTopIn,
 XmlDouble * LengthIn,
 AxisType * AxisIn,
 SweepType * SweepIn) :
  SurfaceCoreBaseType(
    formIn)
{
  scaleU = scaleUIn;
  scaleV = scaleVIn;
  turnedV = turnedVIn;
  DiameterBottom = DiameterBottomIn;
  DiameterTop = DiameterTopIn;
  Length = LengthIn;
  Axis = AxisIn;
  Sweep = SweepIn;
}

Cone23CoreType::~Cone23CoreType()
{
  #ifndef NODESTRUCT
  delete scaleU;
  delete scaleV;
  delete turnedV;
  delete DiameterBottom;
  delete DiameterTop;
  delete Length;
  delete Axis;
  delete Sweep;
  #endif
}

void Cone23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleU)
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
      fprintf(outFile, "scaleU=\"");
      scaleU->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleV)
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
      fprintf(outFile, "scaleV=\"");
      scaleV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (turnedV)
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
      fprintf(outFile, "turnedV=\"");
      turnedV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DiameterBottom");
  DiameterBottom->printSelf(outFile);
  fprintf(outFile, "</DiameterBottom>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DiameterTop");
  DiameterTop->printSelf(outFile);
  fprintf(outFile, "</DiameterTop>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Sweep");
  Sweep->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Sweep>\n");
  doSpaces(-INDENT, outFile);
}

bool Cone23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Cone23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Cone23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "scaleU")
        {
          DoublePositiveType * scaleUVal;
          if (scaleU)
            {
              fprintf(stderr, "two values for scaleU in Cone23CoreType\n");
              returnValue = true;
              break;
            }
          scaleUVal = new DoublePositiveType(decl->val.c_str());
          if (scaleUVal->bad)
            {
              delete scaleUVal;
              fprintf(stderr, "bad value %s for scaleU in Cone23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleU = scaleUVal;
        }
      else if (decl->name == "scaleV")
        {
          DoublePositiveType * scaleVVal;
          if (scaleV)
            {
              fprintf(stderr, "two values for scaleV in Cone23CoreType\n");
              returnValue = true;
              break;
            }
          scaleVVal = new DoublePositiveType(decl->val.c_str());
          if (scaleVVal->bad)
            {
              delete scaleVVal;
              fprintf(stderr, "bad value %s for scaleV in Cone23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleV = scaleVVal;
        }
      else if (decl->name == "turnedV")
        {
          XmlBoolean * turnedVVal;
          if (turnedV)
            {
              fprintf(stderr, "two values for turnedV in Cone23CoreType\n");
              returnValue = true;
              break;
            }
          turnedVVal = new XmlBoolean(decl->val.c_str());
          if (turnedVVal->bad)
            {
              delete turnedVVal;
              fprintf(stderr, "bad value %s for turnedV in Cone23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turnedV = turnedVVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Cone23CoreType\n");
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
      delete form;
      form = 0;
      delete scaleU;
      scaleU = 0;
      delete scaleV;
      scaleV = 0;
      delete turnedV;
      turnedV = 0;
    }
  return returnValue;
}

DoublePositiveType * Cone23CoreType::getscaleU()
{return scaleU;}

void Cone23CoreType::setscaleU(DoublePositiveType * scaleUIn)
{scaleU = scaleUIn;}

DoublePositiveType * Cone23CoreType::getscaleV()
{return scaleV;}

void Cone23CoreType::setscaleV(DoublePositiveType * scaleVIn)
{scaleV = scaleVIn;}

XmlBoolean * Cone23CoreType::getturnedV()
{return turnedV;}

void Cone23CoreType::setturnedV(XmlBoolean * turnedVIn)
{turnedV = turnedVIn;}

XmlDouble * Cone23CoreType::getDiameterBottom()
{return DiameterBottom;}

void Cone23CoreType::setDiameterBottom(XmlDouble * DiameterBottomIn)
{DiameterBottom = DiameterBottomIn;}

XmlDouble * Cone23CoreType::getDiameterTop()
{return DiameterTop;}

void Cone23CoreType::setDiameterTop(XmlDouble * DiameterTopIn)
{DiameterTop = DiameterTopIn;}

XmlDouble * Cone23CoreType::getLength()
{return Length;}

void Cone23CoreType::setLength(XmlDouble * LengthIn)
{Length = LengthIn;}

AxisType * Cone23CoreType::getAxis()
{return Axis;}

void Cone23CoreType::setAxis(AxisType * AxisIn)
{Axis = AxisIn;}

SweepType * Cone23CoreType::getSweep()
{return Sweep;}

void Cone23CoreType::setSweep(SweepType * SweepIn)
{Sweep = SweepIn;}

/* ***************************************************************** */

/* class Cone23Type

*/

Cone23Type::Cone23Type() :
  SurfaceBaseType()
{
  Cone23Core = 0;
  Transform = 0;
}

Cone23Type::Cone23Type(
 AttributesType * AttributesIn,
 Cone23CoreType * Cone23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Cone23Core = Cone23CoreIn;
  Transform = TransformIn;
}

Cone23Type::Cone23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Cone23CoreType * Cone23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Cone23Core = Cone23CoreIn;
  Transform = TransformIn;
}

Cone23Type::~Cone23Type()
{
  #ifndef NODESTRUCT
  delete Cone23Core;
  delete Transform;
  #endif
}

void Cone23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Cone23Core");
  Cone23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Cone23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Cone23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Cone23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Cone23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Cone23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Cone23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Cone23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Cone23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Cone23CoreType * Cone23Type::getCone23Core()
{return Cone23Core;}

void Cone23Type::setCone23Core(Cone23CoreType * Cone23CoreIn)
{Cone23Core = Cone23CoreIn;}

ElementReferenceType * Cone23Type::getTransform()
{return Transform;}

void Cone23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Curve12BaseType

*/

Curve12BaseType::Curve12BaseType() :
  GeometryBaseType()
{
}

Curve12BaseType::Curve12BaseType(
 AttributesType * AttributesIn) :
  GeometryBaseType(
    AttributesIn)
{
}

Curve12BaseType::Curve12BaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
}

Curve12BaseType::~Curve12BaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void Curve12BaseType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool Curve12BaseType::badAttributes(
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
              fprintf(stderr, "two values for id in Curve12BaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Curve12BaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Curve12BaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Curve12BaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve12BaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Curve12BaseType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class Curve12BaseTypeLisd

*/

Curve12BaseTypeLisd::Curve12BaseTypeLisd() {}

Curve12BaseTypeLisd::Curve12BaseTypeLisd(Curve12BaseType * aCurve12BaseType)
{
  push_back(aCurve12BaseType);
}

Curve12BaseTypeLisd::~Curve12BaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Curve12BaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Curve12BaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Curve12OrientedType

*/

Curve12OrientedType::Curve12OrientedType()
{
  turned = 0;
  Curve12Core = 0;
}

Curve12OrientedType::Curve12OrientedType(
 CurveCoreBaseType * Curve12CoreIn)
{
  turned = 0;
  Curve12Core = Curve12CoreIn;
}

Curve12OrientedType::Curve12OrientedType(
 XmlBoolean * turnedIn,
 CurveCoreBaseType * Curve12CoreIn)
{
  turned = turnedIn;
  Curve12Core = Curve12CoreIn;
}

Curve12OrientedType::~Curve12OrientedType()
{
  #ifndef NODESTRUCT
  delete turned;
  delete Curve12Core;
  #endif
}

void Curve12OrientedType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (turned)
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
      fprintf(outFile, "turned=\"");
      turned->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Curve12Core->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Curve12Core->printElement, "Segment12Core") == 0)
      {
        Segment12CoreType * typ;
        if ((typ = dynamic_cast<Segment12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<Segment12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Segment12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Segment12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "ArcConic12Core") == 0)
      {
        ArcConic12CoreType * typ;
        if ((typ = dynamic_cast<ArcConic12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<ArcConic12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcConic12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcConic12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "ArcCircular12Core") == 0)
      {
        ArcCircular12CoreType * typ;
        if ((typ = dynamic_cast<ArcCircular12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<ArcCircular12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcCircular12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcCircular12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "Nurbs12Core") == 0)
      {
        Nurbs12CoreType * typ;
        if ((typ = dynamic_cast<Nurbs12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<Nurbs12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Nurbs12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Nurbs12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "Spline12Core") == 0)
      {
        Spline12CoreType * typ;
        if ((typ = dynamic_cast<Spline12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<Spline12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Spline12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Spline12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "Aggregate12Core") == 0)
      {
        Aggregate12CoreType * typ;
        if ((typ = dynamic_cast<Aggregate12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<Aggregate12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Aggregate12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Aggregate12Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve12Core->printElement, "Polyline12Core") == 0)
      {
        Polyline12CoreType * typ;
        if ((typ = dynamic_cast<Polyline12CoreType *>(Curve12Core)))
          {
            fprintf(outFile, "<Polyline12Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Polyline12Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Polyline12Core element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Curve12Core type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Curve12OrientedType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (turned)
            {
              fprintf(stderr, "two values for turned in Curve12OrientedType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in Curve12OrientedType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve12OrientedType\n");
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
      delete turned;
      turned = 0;
    }
  return returnValue;
}

XmlBoolean * Curve12OrientedType::getturned()
{return turned;}

void Curve12OrientedType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

CurveCoreBaseType * Curve12OrientedType::getCurve12Core()
{return Curve12Core;}

void Curve12OrientedType::setCurve12Core(CurveCoreBaseType * Curve12CoreIn)
{Curve12Core = Curve12CoreIn;}

/* ***************************************************************** */

/* class Curve12OrientedTypeLisd

*/

Curve12OrientedTypeLisd::Curve12OrientedTypeLisd() {}

Curve12OrientedTypeLisd::Curve12OrientedTypeLisd(Curve12OrientedType * aCurve12OrientedType)
{
  push_back(aCurve12OrientedType);
}

Curve12OrientedTypeLisd::~Curve12OrientedTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Curve12OrientedType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Curve12OrientedTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Curve12SetType

*/

Curve12SetType::Curve12SetType()
{
  n = 0;
  Curve12 = 0;
}

Curve12SetType::Curve12SetType(
 Curve12BaseTypeLisd * Curve12In)
{
  n = 0;
  Curve12 = Curve12In;
}

Curve12SetType::Curve12SetType(
 NaturalType * nIn,
 Curve12BaseTypeLisd * Curve12In)
{
  n = nIn;
  Curve12 = Curve12In;
}

Curve12SetType::~Curve12SetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Curve12;
  #endif
}

void Curve12SetType::printSelf(FILE * outFile)
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
    if (!Curve12)
      {
        fprintf(stderr, "Curve12 list is missing\n");
        exit(1);
      }
    if (Curve12->size() == 0)
      {
        fprintf(stderr, "Curve12 list is empty\n");
        exit(1);
      }
    std::list<Curve12BaseType *>::iterator iter;
    for (iter = Curve12->begin();
         iter != Curve12->end(); iter++)
      {
        Curve12BaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Segment12") == 0)
          {
            Segment12Type * typ;
            if ((typ = dynamic_cast<Segment12Type *>(basie)))
              {
                fprintf(outFile, "<Segment12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Segment12>\n");
              }
            else
              {
                fprintf(stderr, "bad Segment12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArcConic12") == 0)
          {
            ArcConic12Type * typ;
            if ((typ = dynamic_cast<ArcConic12Type *>(basie)))
              {
                fprintf(outFile, "<ArcConic12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArcConic12>\n");
              }
            else
              {
                fprintf(stderr, "bad ArcConic12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArcCircular12") == 0)
          {
            ArcCircular12Type * typ;
            if ((typ = dynamic_cast<ArcCircular12Type *>(basie)))
              {
                fprintf(outFile, "<ArcCircular12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArcCircular12>\n");
              }
            else
              {
                fprintf(stderr, "bad ArcCircular12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Nurbs12") == 0)
          {
            Nurbs12Type * typ;
            if ((typ = dynamic_cast<Nurbs12Type *>(basie)))
              {
                fprintf(outFile, "<Nurbs12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Nurbs12>\n");
              }
            else
              {
                fprintf(stderr, "bad Nurbs12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Spline12") == 0)
          {
            Spline12Type * typ;
            if ((typ = dynamic_cast<Spline12Type *>(basie)))
              {
                fprintf(outFile, "<Spline12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Spline12>\n");
              }
            else
              {
                fprintf(stderr, "bad Spline12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Aggregate12") == 0)
          {
            Aggregate12Type * typ;
            if ((typ = dynamic_cast<Aggregate12Type *>(basie)))
              {
                fprintf(outFile, "<Aggregate12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Aggregate12>\n");
              }
            else
              {
                fprintf(stderr, "bad Aggregate12 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Polyline12") == 0)
          {
            Polyline12Type * typ;
            if ((typ = dynamic_cast<Polyline12Type *>(basie)))
              {
                fprintf(outFile, "<Polyline12");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Polyline12>\n");
              }
            else
              {
                fprintf(stderr, "bad Polyline12 element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Curve12 type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Curve12SetType::badAttributes(
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
              fprintf(stderr, "two values for n in Curve12SetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in Curve12SetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve12SetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in Curve12SetType\n");
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

NaturalType * Curve12SetType::getn()
{return n;}

void Curve12SetType::setn(NaturalType * nIn)
{n = nIn;}

Curve12BaseTypeLisd * Curve12SetType::getCurve12()
{return Curve12;}

void Curve12SetType::setCurve12(Curve12BaseTypeLisd * Curve12In)
{Curve12 = Curve12In;}

/* ***************************************************************** */

/* class Curve13BaseType

*/

Curve13BaseType::Curve13BaseType() :
  GeometryBaseType()
{
}

Curve13BaseType::Curve13BaseType(
 AttributesType * AttributesIn) :
  GeometryBaseType(
    AttributesIn)
{
}

Curve13BaseType::Curve13BaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
}

Curve13BaseType::~Curve13BaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void Curve13BaseType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool Curve13BaseType::badAttributes(
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
              fprintf(stderr, "two values for id in Curve13BaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Curve13BaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Curve13BaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Curve13BaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve13BaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Curve13BaseType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class Curve13BaseTypeLisd

*/

Curve13BaseTypeLisd::Curve13BaseTypeLisd() {}

Curve13BaseTypeLisd::Curve13BaseTypeLisd(Curve13BaseType * aCurve13BaseType)
{
  push_back(aCurve13BaseType);
}

Curve13BaseTypeLisd::~Curve13BaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Curve13BaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Curve13BaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Curve13CoreType

*/

Curve13CoreType::Curve13CoreType()
{
  Curve13Core = 0;
}

Curve13CoreType::Curve13CoreType(
 CurveCoreBaseType * Curve13CoreIn)
{
  Curve13Core = Curve13CoreIn;
}

Curve13CoreType::~Curve13CoreType()
{
  #ifndef NODESTRUCT
  delete Curve13Core;
  #endif
}

void Curve13CoreType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Curve13Core->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Curve13Core->printElement, "Segment13Core") == 0)
      {
        Segment13CoreType * typ;
        if ((typ = dynamic_cast<Segment13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Segment13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Segment13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Segment13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "ArcConic13Core") == 0)
      {
        ArcConic13CoreType * typ;
        if ((typ = dynamic_cast<ArcConic13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<ArcConic13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcConic13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcConic13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "ArcCircular13Core") == 0)
      {
        ArcCircular13CoreType * typ;
        if ((typ = dynamic_cast<ArcCircular13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<ArcCircular13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcCircular13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcCircular13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Nurbs13Core") == 0)
      {
        Nurbs13CoreType * typ;
        if ((typ = dynamic_cast<Nurbs13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Nurbs13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Nurbs13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Nurbs13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Spline13Core") == 0)
      {
        Spline13CoreType * typ;
        if ((typ = dynamic_cast<Spline13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Spline13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Spline13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Spline13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Aggregate13Core") == 0)
      {
        Aggregate13CoreType * typ;
        if ((typ = dynamic_cast<Aggregate13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Aggregate13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Aggregate13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Aggregate13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Polyline13Core") == 0)
      {
        Polyline13CoreType * typ;
        if ((typ = dynamic_cast<Polyline13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Polyline13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Polyline13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Polyline13Core element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Curve13Core type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

CurveCoreBaseType * Curve13CoreType::getCurve13Core()
{return Curve13Core;}

void Curve13CoreType::setCurve13Core(CurveCoreBaseType * Curve13CoreIn)
{Curve13Core = Curve13CoreIn;}

/* ***************************************************************** */

/* class Curve13CoreTypeLisd

*/

Curve13CoreTypeLisd::Curve13CoreTypeLisd() {}

Curve13CoreTypeLisd::Curve13CoreTypeLisd(Curve13CoreType * aCurve13CoreType)
{
  push_back(aCurve13CoreType);
}

Curve13CoreTypeLisd::~Curve13CoreTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Curve13CoreType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Curve13CoreTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Curve13OrientedType

*/

Curve13OrientedType::Curve13OrientedType()
{
  turned = 0;
  Curve13Core = 0;
}

Curve13OrientedType::Curve13OrientedType(
 CurveCoreBaseType * Curve13CoreIn)
{
  turned = 0;
  Curve13Core = Curve13CoreIn;
}

Curve13OrientedType::Curve13OrientedType(
 XmlBoolean * turnedIn,
 CurveCoreBaseType * Curve13CoreIn)
{
  turned = turnedIn;
  Curve13Core = Curve13CoreIn;
}

Curve13OrientedType::~Curve13OrientedType()
{
  #ifndef NODESTRUCT
  delete turned;
  delete Curve13Core;
  #endif
}

void Curve13OrientedType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (turned)
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
      fprintf(outFile, "turned=\"");
      turned->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (Curve13Core->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(Curve13Core->printElement, "Segment13Core") == 0)
      {
        Segment13CoreType * typ;
        if ((typ = dynamic_cast<Segment13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Segment13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Segment13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Segment13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "ArcConic13Core") == 0)
      {
        ArcConic13CoreType * typ;
        if ((typ = dynamic_cast<ArcConic13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<ArcConic13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcConic13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcConic13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "ArcCircular13Core") == 0)
      {
        ArcCircular13CoreType * typ;
        if ((typ = dynamic_cast<ArcCircular13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<ArcCircular13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArcCircular13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad ArcCircular13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Nurbs13Core") == 0)
      {
        Nurbs13CoreType * typ;
        if ((typ = dynamic_cast<Nurbs13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Nurbs13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Nurbs13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Nurbs13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Spline13Core") == 0)
      {
        Spline13CoreType * typ;
        if ((typ = dynamic_cast<Spline13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Spline13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Spline13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Spline13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Aggregate13Core") == 0)
      {
        Aggregate13CoreType * typ;
        if ((typ = dynamic_cast<Aggregate13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Aggregate13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Aggregate13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Aggregate13Core element\n");
            exit(1);
          }
      }
    else if (strcmp(Curve13Core->printElement, "Polyline13Core") == 0)
      {
        Polyline13CoreType * typ;
        if ((typ = dynamic_cast<Polyline13CoreType *>(Curve13Core)))
          {
            fprintf(outFile, "<Polyline13Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Polyline13Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Polyline13Core element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad Curve13Core type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Curve13OrientedType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (turned)
            {
              fprintf(stderr, "two values for turned in Curve13OrientedType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in Curve13OrientedType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve13OrientedType\n");
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
      delete turned;
      turned = 0;
    }
  return returnValue;
}

XmlBoolean * Curve13OrientedType::getturned()
{return turned;}

void Curve13OrientedType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

CurveCoreBaseType * Curve13OrientedType::getCurve13Core()
{return Curve13Core;}

void Curve13OrientedType::setCurve13Core(CurveCoreBaseType * Curve13CoreIn)
{Curve13Core = Curve13CoreIn;}

/* ***************************************************************** */

/* class Curve13OrientedTypeLisd

*/

Curve13OrientedTypeLisd::Curve13OrientedTypeLisd() {}

Curve13OrientedTypeLisd::Curve13OrientedTypeLisd(Curve13OrientedType * aCurve13OrientedType)
{
  push_back(aCurve13OrientedType);
}

Curve13OrientedTypeLisd::~Curve13OrientedTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Curve13OrientedType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Curve13OrientedTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Curve13SetType

*/

Curve13SetType::Curve13SetType()
{
  n = 0;
  Curve13 = 0;
}

Curve13SetType::Curve13SetType(
 Curve13BaseTypeLisd * Curve13In)
{
  n = 0;
  Curve13 = Curve13In;
}

Curve13SetType::Curve13SetType(
 NaturalType * nIn,
 Curve13BaseTypeLisd * Curve13In)
{
  n = nIn;
  Curve13 = Curve13In;
}

Curve13SetType::~Curve13SetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Curve13;
  #endif
}

void Curve13SetType::printSelf(FILE * outFile)
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
    if (!Curve13)
      {
        fprintf(stderr, "Curve13 list is missing\n");
        exit(1);
      }
    if (Curve13->size() == 0)
      {
        fprintf(stderr, "Curve13 list is empty\n");
        exit(1);
      }
    std::list<Curve13BaseType *>::iterator iter;
    for (iter = Curve13->begin();
         iter != Curve13->end(); iter++)
      {
        Curve13BaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Segment13") == 0)
          {
            Segment13Type * typ;
            if ((typ = dynamic_cast<Segment13Type *>(basie)))
              {
                fprintf(outFile, "<Segment13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Segment13>\n");
              }
            else
              {
                fprintf(stderr, "bad Segment13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArcConic13") == 0)
          {
            ArcConic13Type * typ;
            if ((typ = dynamic_cast<ArcConic13Type *>(basie)))
              {
                fprintf(outFile, "<ArcConic13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArcConic13>\n");
              }
            else
              {
                fprintf(stderr, "bad ArcConic13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArcCircular13") == 0)
          {
            ArcCircular13Type * typ;
            if ((typ = dynamic_cast<ArcCircular13Type *>(basie)))
              {
                fprintf(outFile, "<ArcCircular13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArcCircular13>\n");
              }
            else
              {
                fprintf(stderr, "bad ArcCircular13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Nurbs13") == 0)
          {
            Nurbs13Type * typ;
            if ((typ = dynamic_cast<Nurbs13Type *>(basie)))
              {
                fprintf(outFile, "<Nurbs13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Nurbs13>\n");
              }
            else
              {
                fprintf(stderr, "bad Nurbs13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Spline13") == 0)
          {
            Spline13Type * typ;
            if ((typ = dynamic_cast<Spline13Type *>(basie)))
              {
                fprintf(outFile, "<Spline13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Spline13>\n");
              }
            else
              {
                fprintf(stderr, "bad Spline13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Aggregate13") == 0)
          {
            Aggregate13Type * typ;
            if ((typ = dynamic_cast<Aggregate13Type *>(basie)))
              {
                fprintf(outFile, "<Aggregate13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Aggregate13>\n");
              }
            else
              {
                fprintf(stderr, "bad Aggregate13 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Polyline13") == 0)
          {
            Polyline13Type * typ;
            if ((typ = dynamic_cast<Polyline13Type *>(basie)))
              {
                fprintf(outFile, "<Polyline13");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Polyline13>\n");
              }
            else
              {
                fprintf(stderr, "bad Polyline13 element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Curve13 type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Curve13SetType::badAttributes(
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
              fprintf(stderr, "two values for n in Curve13SetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in Curve13SetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Curve13SetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in Curve13SetType\n");
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

NaturalType * Curve13SetType::getn()
{return n;}

void Curve13SetType::setn(NaturalType * nIn)
{n = nIn;}

Curve13BaseTypeLisd * Curve13SetType::getCurve13()
{return Curve13;}

void Curve13SetType::setCurve13(Curve13BaseTypeLisd * Curve13In)
{Curve13 = Curve13In;}

/* ***************************************************************** */

/* class CurveCoreBaseType

*/

CurveCoreBaseType::CurveCoreBaseType()
{
  domain = 0;
}

CurveCoreBaseType::CurveCoreBaseType(
 ParameterRangeType * domainIn)
{
  domain = domainIn;
}

CurveCoreBaseType::~CurveCoreBaseType()
{
  delete domain;
}

void CurveCoreBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool CurveCoreBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in CurveCoreBaseType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in CurveCoreBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CurveCoreBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in CurveCoreBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

ParameterRangeType * CurveCoreBaseType::getdomain()
{return domain;}

void CurveCoreBaseType::setdomain(ParameterRangeType * domainIn)
{domain = domainIn;}

/* ***************************************************************** */

/* class CurveMeshSetType

*/

CurveMeshSetType::CurveMeshSetType()
{
  n = 0;
  PathTriangulation = 0;
}

CurveMeshSetType::CurveMeshSetType(
 PathTriangulationTypeLisd * PathTriangulationIn)
{
  n = 0;
  PathTriangulation = PathTriangulationIn;
}

CurveMeshSetType::CurveMeshSetType(
 NaturalType * nIn,
 PathTriangulationTypeLisd * PathTriangulationIn)
{
  n = nIn;
  PathTriangulation = PathTriangulationIn;
}

CurveMeshSetType::~CurveMeshSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete PathTriangulation;
  #endif
}

void CurveMeshSetType::printSelf(FILE * outFile)
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
    if (!PathTriangulation)
      {
        fprintf(stderr, "PathTriangulation list is missing\n");
        exit(1);
      }
    if (PathTriangulation->size() == 0)
      {
        fprintf(stderr, "PathTriangulation list is empty\n");
        exit(1);
      }
    std::list<PathTriangulationType *>::iterator iter;
    for (iter = PathTriangulation->begin();
         iter != PathTriangulation->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<PathTriangulation");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</PathTriangulation>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CurveMeshSetType::badAttributes(
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
              fprintf(stderr, "two values for n in CurveMeshSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CurveMeshSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CurveMeshSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CurveMeshSetType\n");
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

NaturalType * CurveMeshSetType::getn()
{return n;}

void CurveMeshSetType::setn(NaturalType * nIn)
{n = nIn;}

PathTriangulationTypeLisd * CurveMeshSetType::getPathTriangulation()
{return PathTriangulation;}

void CurveMeshSetType::setPathTriangulation(PathTriangulationTypeLisd * PathTriangulationIn)
{PathTriangulation = PathTriangulationIn;}

/* ***************************************************************** */

/* class Cylinder23CoreType

*/

Cylinder23CoreType::Cylinder23CoreType() :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  Diameter = 0;
  Length = 0;
  Axis = 0;
  Sweep = 0;
}

Cylinder23CoreType::Cylinder23CoreType(
 XmlDouble * DiameterIn,
 XmlDouble * LengthIn,
 AxisType * AxisIn,
 SweepType * SweepIn) :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  Diameter = DiameterIn;
  Length = LengthIn;
  Axis = AxisIn;
  Sweep = SweepIn;
}

Cylinder23CoreType::Cylinder23CoreType(
 Attr23CoreEnumType * formIn,
 DoublePositiveType * scaleUIn,
 DoublePositiveType * scaleVIn,
 XmlBoolean * turnedVIn,
 XmlDouble * DiameterIn,
 XmlDouble * LengthIn,
 AxisType * AxisIn,
 SweepType * SweepIn) :
  SurfaceCoreBaseType(
    formIn)
{
  scaleU = scaleUIn;
  scaleV = scaleVIn;
  turnedV = turnedVIn;
  Diameter = DiameterIn;
  Length = LengthIn;
  Axis = AxisIn;
  Sweep = SweepIn;
}

Cylinder23CoreType::~Cylinder23CoreType()
{
  #ifndef NODESTRUCT
  delete scaleU;
  delete scaleV;
  delete turnedV;
  delete Diameter;
  delete Length;
  delete Axis;
  delete Sweep;
  #endif
}

void Cylinder23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleU)
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
      fprintf(outFile, "scaleU=\"");
      scaleU->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleV)
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
      fprintf(outFile, "scaleV=\"");
      scaleV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (turnedV)
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
      fprintf(outFile, "turnedV=\"");
      turnedV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Sweep");
  Sweep->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Sweep>\n");
  doSpaces(-INDENT, outFile);
}

bool Cylinder23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Cylinder23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Cylinder23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "scaleU")
        {
          DoublePositiveType * scaleUVal;
          if (scaleU)
            {
              fprintf(stderr, "two values for scaleU in Cylinder23CoreType\n");
              returnValue = true;
              break;
            }
          scaleUVal = new DoublePositiveType(decl->val.c_str());
          if (scaleUVal->bad)
            {
              delete scaleUVal;
              fprintf(stderr, "bad value %s for scaleU in Cylinder23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleU = scaleUVal;
        }
      else if (decl->name == "scaleV")
        {
          DoublePositiveType * scaleVVal;
          if (scaleV)
            {
              fprintf(stderr, "two values for scaleV in Cylinder23CoreType\n");
              returnValue = true;
              break;
            }
          scaleVVal = new DoublePositiveType(decl->val.c_str());
          if (scaleVVal->bad)
            {
              delete scaleVVal;
              fprintf(stderr, "bad value %s for scaleV in Cylinder23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleV = scaleVVal;
        }
      else if (decl->name == "turnedV")
        {
          XmlBoolean * turnedVVal;
          if (turnedV)
            {
              fprintf(stderr, "two values for turnedV in Cylinder23CoreType\n");
              returnValue = true;
              break;
            }
          turnedVVal = new XmlBoolean(decl->val.c_str());
          if (turnedVVal->bad)
            {
              delete turnedVVal;
              fprintf(stderr, "bad value %s for turnedV in Cylinder23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turnedV = turnedVVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Cylinder23CoreType\n");
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
      delete form;
      form = 0;
      delete scaleU;
      scaleU = 0;
      delete scaleV;
      scaleV = 0;
      delete turnedV;
      turnedV = 0;
    }
  return returnValue;
}

DoublePositiveType * Cylinder23CoreType::getscaleU()
{return scaleU;}

void Cylinder23CoreType::setscaleU(DoublePositiveType * scaleUIn)
{scaleU = scaleUIn;}

DoublePositiveType * Cylinder23CoreType::getscaleV()
{return scaleV;}

void Cylinder23CoreType::setscaleV(DoublePositiveType * scaleVIn)
{scaleV = scaleVIn;}

XmlBoolean * Cylinder23CoreType::getturnedV()
{return turnedV;}

void Cylinder23CoreType::setturnedV(XmlBoolean * turnedVIn)
{turnedV = turnedVIn;}

XmlDouble * Cylinder23CoreType::getDiameter()
{return Diameter;}

void Cylinder23CoreType::setDiameter(XmlDouble * DiameterIn)
{Diameter = DiameterIn;}

XmlDouble * Cylinder23CoreType::getLength()
{return Length;}

void Cylinder23CoreType::setLength(XmlDouble * LengthIn)
{Length = LengthIn;}

AxisType * Cylinder23CoreType::getAxis()
{return Axis;}

void Cylinder23CoreType::setAxis(AxisType * AxisIn)
{Axis = AxisIn;}

SweepType * Cylinder23CoreType::getSweep()
{return Sweep;}

void Cylinder23CoreType::setSweep(SweepType * SweepIn)
{Sweep = SweepIn;}

/* ***************************************************************** */

/* class Cylinder23Type

*/

Cylinder23Type::Cylinder23Type() :
  SurfaceBaseType()
{
  Cylinder23Core = 0;
  Transform = 0;
}

Cylinder23Type::Cylinder23Type(
 AttributesType * AttributesIn,
 Cylinder23CoreType * Cylinder23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Cylinder23Core = Cylinder23CoreIn;
  Transform = TransformIn;
}

Cylinder23Type::Cylinder23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Cylinder23CoreType * Cylinder23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Cylinder23Core = Cylinder23CoreIn;
  Transform = TransformIn;
}

Cylinder23Type::~Cylinder23Type()
{
  #ifndef NODESTRUCT
  delete Cylinder23Core;
  delete Transform;
  #endif
}

void Cylinder23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Cylinder23Core");
  Cylinder23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Cylinder23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Cylinder23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Cylinder23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Cylinder23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Cylinder23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Cylinder23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Cylinder23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Cylinder23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Cylinder23CoreType * Cylinder23Type::getCylinder23Core()
{return Cylinder23Core;}

void Cylinder23Type::setCylinder23Core(Cylinder23CoreType * Cylinder23CoreIn)
{Cylinder23Core = Cylinder23CoreIn;}

ElementReferenceType * Cylinder23Type::getTransform()
{return Transform;}

void Cylinder23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Extrude23CoreType

*/

Extrude23CoreType::Extrude23CoreType() :
  SurfaceCoreBaseType()
{
  TerminationPoint = 0;
  Curve = 0;
}

Extrude23CoreType::Extrude23CoreType(
 PointSimpleType * TerminationPointIn,
 Curve13CoreType * CurveIn) :
  SurfaceCoreBaseType()
{
  TerminationPoint = TerminationPointIn;
  Curve = CurveIn;
}

Extrude23CoreType::Extrude23CoreType(
 Attr23CoreEnumType * formIn,
 PointSimpleType * TerminationPointIn,
 Curve13CoreType * CurveIn) :
  SurfaceCoreBaseType(
    formIn)
{
  TerminationPoint = TerminationPointIn;
  Curve = CurveIn;
}

Extrude23CoreType::~Extrude23CoreType()
{
  #ifndef NODESTRUCT
  delete TerminationPoint;
  delete Curve;
  #endif
}

void Extrude23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<TerminationPoint");
  TerminationPoint->printSelf(outFile);
  fprintf(outFile, "</TerminationPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Curve");
  Curve->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Curve>\n");
  doSpaces(-INDENT, outFile);
}

bool Extrude23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Extrude23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Extrude23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Extrude23CoreType\n");
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
      delete form;
      form = 0;
    }
  return returnValue;
}

PointSimpleType * Extrude23CoreType::getTerminationPoint()
{return TerminationPoint;}

void Extrude23CoreType::setTerminationPoint(PointSimpleType * TerminationPointIn)
{TerminationPoint = TerminationPointIn;}

Curve13CoreType * Extrude23CoreType::getCurve()
{return Curve;}

void Extrude23CoreType::setCurve(Curve13CoreType * CurveIn)
{Curve = CurveIn;}

/* ***************************************************************** */

/* class Extrude23Type

*/

Extrude23Type::Extrude23Type() :
  SurfaceBaseType()
{
  Extrude23Core = 0;
  Transform = 0;
}

Extrude23Type::Extrude23Type(
 AttributesType * AttributesIn,
 Extrude23CoreType * Extrude23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Extrude23Core = Extrude23CoreIn;
  Transform = TransformIn;
}

Extrude23Type::Extrude23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Extrude23CoreType * Extrude23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Extrude23Core = Extrude23CoreIn;
  Transform = TransformIn;
}

Extrude23Type::~Extrude23Type()
{
  #ifndef NODESTRUCT
  delete Extrude23Core;
  delete Transform;
  #endif
}

void Extrude23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Extrude23Core");
  Extrude23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Extrude23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Extrude23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Extrude23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Extrude23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Extrude23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Extrude23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Extrude23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Extrude23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Extrude23CoreType * Extrude23Type::getExtrude23Core()
{return Extrude23Core;}

void Extrude23Type::setExtrude23Core(Extrude23CoreType * Extrude23CoreIn)
{Extrude23Core = Extrude23CoreIn;}

ElementReferenceType * Extrude23Type::getTransform()
{return Transform;}

void Extrude23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class GeometryBaseType

*/

GeometryBaseType::GeometryBaseType() :
  NodeWithIdBaseType()
{
}

GeometryBaseType::GeometryBaseType(
 AttributesType * AttributesIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
}

GeometryBaseType::GeometryBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
}

GeometryBaseType::~GeometryBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void GeometryBaseType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool GeometryBaseType::badAttributes(
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
              fprintf(stderr, "two values for id in GeometryBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in GeometryBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in GeometryBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in GeometryBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in GeometryBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in GeometryBaseType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class GeometrySetType

*/

GeometrySetType::GeometrySetType()
{
  PointSet = 0;
  Curve12Set = 0;
  Curve13Set = 0;
  SurfaceSet = 0;
  CurveMeshSet = 0;
  SurfaceMeshSet = 0;
}

GeometrySetType::GeometrySetType(
 PointSetType * PointSetIn,
 Curve12SetType * Curve12SetIn,
 Curve13SetType * Curve13SetIn,
 SurfaceSetType * SurfaceSetIn,
 CurveMeshSetType * CurveMeshSetIn,
 SurfaceMeshSetType * SurfaceMeshSetIn)
{
  PointSet = PointSetIn;
  Curve12Set = Curve12SetIn;
  Curve13Set = Curve13SetIn;
  SurfaceSet = SurfaceSetIn;
  CurveMeshSet = CurveMeshSetIn;
  SurfaceMeshSet = SurfaceMeshSetIn;
}

GeometrySetType::~GeometrySetType()
{
  #ifndef NODESTRUCT
  delete PointSet;
  delete Curve12Set;
  delete Curve13Set;
  delete SurfaceSet;
  delete CurveMeshSet;
  delete SurfaceMeshSet;
  #endif
}

void GeometrySetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (PointSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointSet");
      PointSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointSet>\n");
    }
  if (Curve12Set)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Curve12Set");
      Curve12Set->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Curve12Set>\n");
    }
  if (Curve13Set)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Curve13Set");
      Curve13Set->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Curve13Set>\n");
    }
  if (SurfaceSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SurfaceSet");
      SurfaceSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SurfaceSet>\n");
    }
  if (CurveMeshSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CurveMeshSet");
      CurveMeshSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CurveMeshSet>\n");
    }
  if (SurfaceMeshSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SurfaceMeshSet");
      SurfaceMeshSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SurfaceMeshSet>\n");
    }
  doSpaces(-INDENT, outFile);
}

PointSetType * GeometrySetType::getPointSet()
{return PointSet;}

void GeometrySetType::setPointSet(PointSetType * PointSetIn)
{PointSet = PointSetIn;}

Curve12SetType * GeometrySetType::getCurve12Set()
{return Curve12Set;}

void GeometrySetType::setCurve12Set(Curve12SetType * Curve12SetIn)
{Curve12Set = Curve12SetIn;}

Curve13SetType * GeometrySetType::getCurve13Set()
{return Curve13Set;}

void GeometrySetType::setCurve13Set(Curve13SetType * Curve13SetIn)
{Curve13Set = Curve13SetIn;}

SurfaceSetType * GeometrySetType::getSurfaceSet()
{return SurfaceSet;}

void GeometrySetType::setSurfaceSet(SurfaceSetType * SurfaceSetIn)
{SurfaceSet = SurfaceSetIn;}

CurveMeshSetType * GeometrySetType::getCurveMeshSet()
{return CurveMeshSet;}

void GeometrySetType::setCurveMeshSet(CurveMeshSetType * CurveMeshSetIn)
{CurveMeshSet = CurveMeshSetIn;}

SurfaceMeshSetType * GeometrySetType::getSurfaceMeshSet()
{return SurfaceMeshSet;}

void GeometrySetType::setSurfaceMeshSet(SurfaceMeshSetType * SurfaceMeshSetIn)
{SurfaceMeshSet = SurfaceMeshSetIn;}

/* ***************************************************************** */

/* class MeshTriangleCoreType

*/

MeshTriangleCoreType::MeshTriangleCoreType()
{
  MeshTriangleCor_1214 = 0;
  MeshTriangleCor_1215 = 0;
  MeshTriangleCor_1216 = 0;
  MeshTriangleCor_1217 = 0;
}

MeshTriangleCoreType::MeshTriangleCoreType(
 MeshTriangleCor_1214_Type * MeshTriangleCor_1214In,
 MeshTriangleCor_1215_Type * MeshTriangleCor_1215In,
 MeshTriangleCor_1216_Type * MeshTriangleCor_1216In,
 MeshTriangleCor_1217_Type * MeshTriangleCor_1217In)
{
  MeshTriangleCor_1214 = MeshTriangleCor_1214In;
  MeshTriangleCor_1215 = MeshTriangleCor_1215In;
  MeshTriangleCor_1216 = MeshTriangleCor_1216In;
  MeshTriangleCor_1217 = MeshTriangleCor_1217In;
}

MeshTriangleCoreType::~MeshTriangleCoreType()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCor_1214;
  delete MeshTriangleCor_1215;
  delete MeshTriangleCor_1216;
  delete MeshTriangleCor_1217;
  #endif
}

void MeshTriangleCoreType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  MeshTriangleCor_1214->printSelf(outFile);
  if (MeshTriangleCor_1215)
    {
      MeshTriangleCor_1215->printSelf(outFile);
    }
  MeshTriangleCor_1216->printSelf(outFile);
  if (MeshTriangleCor_1217)
    {
      MeshTriangleCor_1217->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

MeshTriangleCor_1214_Type * MeshTriangleCoreType::getMeshTriangleCor_1214()
{return MeshTriangleCor_1214;}

void MeshTriangleCoreType::setMeshTriangleCor_1214(MeshTriangleCor_1214_Type * MeshTriangleCor_1214In)
{MeshTriangleCor_1214 = MeshTriangleCor_1214In;}

MeshTriangleCor_1215_Type * MeshTriangleCoreType::getMeshTriangleCor_1215()
{return MeshTriangleCor_1215;}

void MeshTriangleCoreType::setMeshTriangleCor_1215(MeshTriangleCor_1215_Type * MeshTriangleCor_1215In)
{MeshTriangleCor_1215 = MeshTriangleCor_1215In;}

MeshTriangleCor_1216_Type * MeshTriangleCoreType::getMeshTriangleCor_1216()
{return MeshTriangleCor_1216;}

void MeshTriangleCoreType::setMeshTriangleCor_1216(MeshTriangleCor_1216_Type * MeshTriangleCor_1216In)
{MeshTriangleCor_1216 = MeshTriangleCor_1216In;}

MeshTriangleCor_1217_Type * MeshTriangleCoreType::getMeshTriangleCor_1217()
{return MeshTriangleCor_1217;}

void MeshTriangleCoreType::setMeshTriangleCor_1217(MeshTriangleCor_1217_Type * MeshTriangleCor_1217In)
{MeshTriangleCor_1217 = MeshTriangleCor_1217In;}

/* ***************************************************************** */

/* class MeshTriangleType

*/

MeshTriangleType::MeshTriangleType() :
  GeometryBaseType()
{
  MeshTriangleCore = 0;
  MeshTriangleTyp_1218 = 0;
}

MeshTriangleType::MeshTriangleType(
 AttributesType * AttributesIn,
 MeshTriangleCoreType * MeshTriangleCoreIn,
 MeshTriangleTyp_1218_Type * MeshTriangleTyp_1218In) :
  GeometryBaseType(
    AttributesIn)
{
  MeshTriangleCore = MeshTriangleCoreIn;
  MeshTriangleTyp_1218 = MeshTriangleTyp_1218In;
}

MeshTriangleType::MeshTriangleType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 MeshTriangleCoreType * MeshTriangleCoreIn,
 MeshTriangleTyp_1218_Type * MeshTriangleTyp_1218In) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  MeshTriangleCore = MeshTriangleCoreIn;
  MeshTriangleTyp_1218 = MeshTriangleTyp_1218In;
}

MeshTriangleType::~MeshTriangleType()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCore;
  delete MeshTriangleTyp_1218;
  #endif
}

void MeshTriangleType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<MeshTriangleCore");
  MeshTriangleCore->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</MeshTriangleCore>\n");
  if (MeshTriangleTyp_1218)
    {
      MeshTriangleTyp_1218->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

bool MeshTriangleType::badAttributes(
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
              fprintf(stderr, "two values for id in MeshTriangleType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeshTriangleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in MeshTriangleType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in MeshTriangleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeshTriangleType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in MeshTriangleType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

MeshTriangleCoreType * MeshTriangleType::getMeshTriangleCore()
{return MeshTriangleCore;}

void MeshTriangleType::setMeshTriangleCore(MeshTriangleCoreType * MeshTriangleCoreIn)
{MeshTriangleCore = MeshTriangleCoreIn;}

MeshTriangleTyp_1218_Type * MeshTriangleType::getMeshTriangleTyp_1218()
{return MeshTriangleTyp_1218;}

void MeshTriangleType::setMeshTriangleTyp_1218(MeshTriangleTyp_1218_Type * MeshTriangleTyp_1218In)
{MeshTriangleTyp_1218 = MeshTriangleTyp_1218In;}

/* ***************************************************************** */

/* class MeshTriangleTypeLisd

*/

MeshTriangleTypeLisd::MeshTriangleTypeLisd() {}

MeshTriangleTypeLisd::MeshTriangleTypeLisd(MeshTriangleType * aMeshTriangleType)
{
  push_back(aMeshTriangleType);
}

MeshTriangleTypeLisd::~MeshTriangleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeshTriangleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeshTriangleTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Nurbs12CoreType

*/

Nurbs12CoreType::Nurbs12CoreType() :
  CurveCoreBaseType()
{
  Order = 0;
  Knots = 0;
  Nurbs12CoreType_1219 = 0;
  Weights = 0;
}

Nurbs12CoreType::Nurbs12CoreType(
 NaturalType * OrderIn,
 ArrayDoubleType * KnotsIn,
 Nurbs12CoreType_1219_Type * Nurbs12CoreType_1219In,
 ArrayDoubleType * WeightsIn) :
  CurveCoreBaseType()
{
  Order = OrderIn;
  Knots = KnotsIn;
  Nurbs12CoreType_1219 = Nurbs12CoreType_1219In;
  Weights = WeightsIn;
}

Nurbs12CoreType::Nurbs12CoreType(
 ParameterRangeType * domainIn,
 NaturalType * OrderIn,
 ArrayDoubleType * KnotsIn,
 Nurbs12CoreType_1219_Type * Nurbs12CoreType_1219In,
 ArrayDoubleType * WeightsIn) :
  CurveCoreBaseType(
    domainIn)
{
  Order = OrderIn;
  Knots = KnotsIn;
  Nurbs12CoreType_1219 = Nurbs12CoreType_1219In;
  Weights = WeightsIn;
}

Nurbs12CoreType::~Nurbs12CoreType()
{
  #ifndef NODESTRUCT
  delete Order;
  delete Knots;
  delete Nurbs12CoreType_1219;
  delete Weights;
  #endif
}

void Nurbs12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Order");
  Order->printSelf(outFile);
  fprintf(outFile, "</Order>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Knots");
  Knots->printSelf(outFile);
  fprintf(outFile, "</Knots>\n");
  Nurbs12CoreType_1219->printSelf(outFile);
  if (Weights)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Weights");
      Weights->printSelf(outFile);
      fprintf(outFile, "</Weights>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Nurbs12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Nurbs12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Nurbs12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Nurbs12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

NaturalType * Nurbs12CoreType::getOrder()
{return Order;}

void Nurbs12CoreType::setOrder(NaturalType * OrderIn)
{Order = OrderIn;}

ArrayDoubleType * Nurbs12CoreType::getKnots()
{return Knots;}

void Nurbs12CoreType::setKnots(ArrayDoubleType * KnotsIn)
{Knots = KnotsIn;}

Nurbs12CoreType_1219_Type * Nurbs12CoreType::getNurbs12CoreType_1219()
{return Nurbs12CoreType_1219;}

void Nurbs12CoreType::setNurbs12CoreType_1219(Nurbs12CoreType_1219_Type * Nurbs12CoreType_1219In)
{Nurbs12CoreType_1219 = Nurbs12CoreType_1219In;}

ArrayDoubleType * Nurbs12CoreType::getWeights()
{return Weights;}

void Nurbs12CoreType::setWeights(ArrayDoubleType * WeightsIn)
{Weights = WeightsIn;}

/* ***************************************************************** */

/* class Nurbs12Type

*/

Nurbs12Type::Nurbs12Type() :
  Curve12BaseType()
{
  Nurbs12Core = 0;
}

Nurbs12Type::Nurbs12Type(
 AttributesType * AttributesIn,
 Nurbs12CoreType * Nurbs12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  Nurbs12Core = Nurbs12CoreIn;
}

Nurbs12Type::Nurbs12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Nurbs12CoreType * Nurbs12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Nurbs12Core = Nurbs12CoreIn;
}

Nurbs12Type::~Nurbs12Type()
{
  #ifndef NODESTRUCT
  delete Nurbs12Core;
  #endif
}

void Nurbs12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Nurbs12Core");
  Nurbs12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Nurbs12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool Nurbs12Type::badAttributes(
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
              fprintf(stderr, "two values for id in Nurbs12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Nurbs12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Nurbs12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Nurbs12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Nurbs12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Nurbs12CoreType * Nurbs12Type::getNurbs12Core()
{return Nurbs12Core;}

void Nurbs12Type::setNurbs12Core(Nurbs12CoreType * Nurbs12CoreIn)
{Nurbs12Core = Nurbs12CoreIn;}

/* ***************************************************************** */

/* class Nurbs13CoreType

*/

Nurbs13CoreType::Nurbs13CoreType() :
  CurveCoreBaseType()
{
  Order = 0;
  Knots = 0;
  Nurbs13CoreType_1220 = 0;
  Weights = 0;
}

Nurbs13CoreType::Nurbs13CoreType(
 NaturalType * OrderIn,
 ArrayDoubleType * KnotsIn,
 Nurbs13CoreType_1220_Type * Nurbs13CoreType_1220In,
 ArrayDoubleType * WeightsIn) :
  CurveCoreBaseType()
{
  Order = OrderIn;
  Knots = KnotsIn;
  Nurbs13CoreType_1220 = Nurbs13CoreType_1220In;
  Weights = WeightsIn;
}

Nurbs13CoreType::Nurbs13CoreType(
 ParameterRangeType * domainIn,
 NaturalType * OrderIn,
 ArrayDoubleType * KnotsIn,
 Nurbs13CoreType_1220_Type * Nurbs13CoreType_1220In,
 ArrayDoubleType * WeightsIn) :
  CurveCoreBaseType(
    domainIn)
{
  Order = OrderIn;
  Knots = KnotsIn;
  Nurbs13CoreType_1220 = Nurbs13CoreType_1220In;
  Weights = WeightsIn;
}

Nurbs13CoreType::~Nurbs13CoreType()
{
  #ifndef NODESTRUCT
  delete Order;
  delete Knots;
  delete Nurbs13CoreType_1220;
  delete Weights;
  #endif
}

void Nurbs13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Order");
  Order->printSelf(outFile);
  fprintf(outFile, "</Order>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Knots");
  Knots->printSelf(outFile);
  fprintf(outFile, "</Knots>\n");
  Nurbs13CoreType_1220->printSelf(outFile);
  if (Weights)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Weights");
      Weights->printSelf(outFile);
      fprintf(outFile, "</Weights>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Nurbs13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Nurbs13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Nurbs13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Nurbs13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

NaturalType * Nurbs13CoreType::getOrder()
{return Order;}

void Nurbs13CoreType::setOrder(NaturalType * OrderIn)
{Order = OrderIn;}

ArrayDoubleType * Nurbs13CoreType::getKnots()
{return Knots;}

void Nurbs13CoreType::setKnots(ArrayDoubleType * KnotsIn)
{Knots = KnotsIn;}

Nurbs13CoreType_1220_Type * Nurbs13CoreType::getNurbs13CoreType_1220()
{return Nurbs13CoreType_1220;}

void Nurbs13CoreType::setNurbs13CoreType_1220(Nurbs13CoreType_1220_Type * Nurbs13CoreType_1220In)
{Nurbs13CoreType_1220 = Nurbs13CoreType_1220In;}

ArrayDoubleType * Nurbs13CoreType::getWeights()
{return Weights;}

void Nurbs13CoreType::setWeights(ArrayDoubleType * WeightsIn)
{Weights = WeightsIn;}

/* ***************************************************************** */

/* class Nurbs13Type

*/

Nurbs13Type::Nurbs13Type() :
  Curve13BaseType()
{
  Nurbs13Core = 0;
  Transform = 0;
}

Nurbs13Type::Nurbs13Type(
 AttributesType * AttributesIn,
 Nurbs13CoreType * Nurbs13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  Nurbs13Core = Nurbs13CoreIn;
  Transform = TransformIn;
}

Nurbs13Type::Nurbs13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Nurbs13CoreType * Nurbs13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Nurbs13Core = Nurbs13CoreIn;
  Transform = TransformIn;
}

Nurbs13Type::~Nurbs13Type()
{
  #ifndef NODESTRUCT
  delete Nurbs13Core;
  delete Transform;
  #endif
}

void Nurbs13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Nurbs13Core");
  Nurbs13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Nurbs13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Nurbs13Type::badAttributes(
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
              fprintf(stderr, "two values for id in Nurbs13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Nurbs13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Nurbs13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Nurbs13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Nurbs13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Nurbs13CoreType * Nurbs13Type::getNurbs13Core()
{return Nurbs13Core;}

void Nurbs13Type::setNurbs13Core(Nurbs13CoreType * Nurbs13CoreIn)
{Nurbs13Core = Nurbs13CoreIn;}

ElementReferenceType * Nurbs13Type::getTransform()
{return Transform;}

void Nurbs13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Nurbs23CoreType

*/

Nurbs23CoreType::Nurbs23CoreType() :
  SurfaceCoreBaseType()
{
  OrderU = 0;
  OrderV = 0;
  KnotsU = 0;
  KnotsV = 0;
  Nurbs23CoreType_1221 = 0;
  Weights = 0;
}

Nurbs23CoreType::Nurbs23CoreType(
 NaturalType * OrderUIn,
 NaturalType * OrderVIn,
 ArrayDoubleType * KnotsUIn,
 ArrayDoubleType * KnotsVIn,
 Nurbs23CoreType_1221_Type * Nurbs23CoreType_1221In,
 ArrayDoubleType * WeightsIn) :
  SurfaceCoreBaseType()
{
  OrderU = OrderUIn;
  OrderV = OrderVIn;
  KnotsU = KnotsUIn;
  KnotsV = KnotsVIn;
  Nurbs23CoreType_1221 = Nurbs23CoreType_1221In;
  Weights = WeightsIn;
}

Nurbs23CoreType::Nurbs23CoreType(
 Attr23CoreEnumType * formIn,
 NaturalType * OrderUIn,
 NaturalType * OrderVIn,
 ArrayDoubleType * KnotsUIn,
 ArrayDoubleType * KnotsVIn,
 Nurbs23CoreType_1221_Type * Nurbs23CoreType_1221In,
 ArrayDoubleType * WeightsIn) :
  SurfaceCoreBaseType(
    formIn)
{
  OrderU = OrderUIn;
  OrderV = OrderVIn;
  KnotsU = KnotsUIn;
  KnotsV = KnotsVIn;
  Nurbs23CoreType_1221 = Nurbs23CoreType_1221In;
  Weights = WeightsIn;
}

Nurbs23CoreType::~Nurbs23CoreType()
{
  #ifndef NODESTRUCT
  delete OrderU;
  delete OrderV;
  delete KnotsU;
  delete KnotsV;
  delete Nurbs23CoreType_1221;
  delete Weights;
  #endif
}

void Nurbs23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<OrderU");
  OrderU->printSelf(outFile);
  fprintf(outFile, "</OrderU>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<OrderV");
  OrderV->printSelf(outFile);
  fprintf(outFile, "</OrderV>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<KnotsU");
  KnotsU->printSelf(outFile);
  fprintf(outFile, "</KnotsU>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<KnotsV");
  KnotsV->printSelf(outFile);
  fprintf(outFile, "</KnotsV>\n");
  Nurbs23CoreType_1221->printSelf(outFile);
  if (Weights)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Weights");
      Weights->printSelf(outFile);
      fprintf(outFile, "</Weights>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Nurbs23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Nurbs23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Nurbs23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs23CoreType\n");
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
      delete form;
      form = 0;
    }
  return returnValue;
}

NaturalType * Nurbs23CoreType::getOrderU()
{return OrderU;}

void Nurbs23CoreType::setOrderU(NaturalType * OrderUIn)
{OrderU = OrderUIn;}

NaturalType * Nurbs23CoreType::getOrderV()
{return OrderV;}

void Nurbs23CoreType::setOrderV(NaturalType * OrderVIn)
{OrderV = OrderVIn;}

ArrayDoubleType * Nurbs23CoreType::getKnotsU()
{return KnotsU;}

void Nurbs23CoreType::setKnotsU(ArrayDoubleType * KnotsUIn)
{KnotsU = KnotsUIn;}

ArrayDoubleType * Nurbs23CoreType::getKnotsV()
{return KnotsV;}

void Nurbs23CoreType::setKnotsV(ArrayDoubleType * KnotsVIn)
{KnotsV = KnotsVIn;}

Nurbs23CoreType_1221_Type * Nurbs23CoreType::getNurbs23CoreType_1221()
{return Nurbs23CoreType_1221;}

void Nurbs23CoreType::setNurbs23CoreType_1221(Nurbs23CoreType_1221_Type * Nurbs23CoreType_1221In)
{Nurbs23CoreType_1221 = Nurbs23CoreType_1221In;}

ArrayDoubleType * Nurbs23CoreType::getWeights()
{return Weights;}

void Nurbs23CoreType::setWeights(ArrayDoubleType * WeightsIn)
{Weights = WeightsIn;}

/* ***************************************************************** */

/* class Nurbs23Type

*/

Nurbs23Type::Nurbs23Type() :
  SurfaceBaseType()
{
  Nurbs23Core = 0;
  Transform = 0;
}

Nurbs23Type::Nurbs23Type(
 AttributesType * AttributesIn,
 Nurbs23CoreType * Nurbs23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Nurbs23Core = Nurbs23CoreIn;
  Transform = TransformIn;
}

Nurbs23Type::Nurbs23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Nurbs23CoreType * Nurbs23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Nurbs23Core = Nurbs23CoreIn;
  Transform = TransformIn;
}

Nurbs23Type::~Nurbs23Type()
{
  #ifndef NODESTRUCT
  delete Nurbs23Core;
  delete Transform;
  #endif
}

void Nurbs23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Nurbs23Core");
  Nurbs23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Nurbs23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Nurbs23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Nurbs23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Nurbs23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Nurbs23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Nurbs23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Nurbs23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Nurbs23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Nurbs23CoreType * Nurbs23Type::getNurbs23Core()
{return Nurbs23Core;}

void Nurbs23Type::setNurbs23Core(Nurbs23CoreType * Nurbs23CoreIn)
{Nurbs23Core = Nurbs23CoreIn;}

ElementReferenceType * Nurbs23Type::getTransform()
{return Transform;}

void Nurbs23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Offset23CoreType

*/

Offset23CoreType::Offset23CoreType() :
  SurfaceCoreBaseType()
{
  Distance = 0;
  Surface = 0;
}

Offset23CoreType::Offset23CoreType(
 XmlDouble * DistanceIn,
 SurfaceCoreType * SurfaceIn) :
  SurfaceCoreBaseType()
{
  Distance = DistanceIn;
  Surface = SurfaceIn;
}

Offset23CoreType::Offset23CoreType(
 Attr23CoreEnumType * formIn,
 XmlDouble * DistanceIn,
 SurfaceCoreType * SurfaceIn) :
  SurfaceCoreBaseType(
    formIn)
{
  Distance = DistanceIn;
  Surface = SurfaceIn;
}

Offset23CoreType::~Offset23CoreType()
{
  #ifndef NODESTRUCT
  delete Distance;
  delete Surface;
  #endif
}

void Offset23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Distance");
  Distance->printSelf(outFile);
  fprintf(outFile, "</Distance>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Surface");
  Surface->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Surface>\n");
  doSpaces(-INDENT, outFile);
}

bool Offset23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Offset23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Offset23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Offset23CoreType\n");
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
      delete form;
      form = 0;
    }
  return returnValue;
}

XmlDouble * Offset23CoreType::getDistance()
{return Distance;}

void Offset23CoreType::setDistance(XmlDouble * DistanceIn)
{Distance = DistanceIn;}

SurfaceCoreType * Offset23CoreType::getSurface()
{return Surface;}

void Offset23CoreType::setSurface(SurfaceCoreType * SurfaceIn)
{Surface = SurfaceIn;}

/* ***************************************************************** */

/* class Offset23Type

*/

Offset23Type::Offset23Type() :
  SurfaceBaseType()
{
  Offset23Core = 0;
  Transform = 0;
}

Offset23Type::Offset23Type(
 AttributesType * AttributesIn,
 Offset23CoreType * Offset23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Offset23Core = Offset23CoreIn;
  Transform = TransformIn;
}

Offset23Type::Offset23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Offset23CoreType * Offset23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Offset23Core = Offset23CoreIn;
  Transform = TransformIn;
}

Offset23Type::~Offset23Type()
{
  #ifndef NODESTRUCT
  delete Offset23Core;
  delete Transform;
  #endif
}

void Offset23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Offset23Core");
  Offset23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Offset23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Offset23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Offset23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Offset23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Offset23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Offset23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Offset23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Offset23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Offset23CoreType * Offset23Type::getOffset23Core()
{return Offset23Core;}

void Offset23Type::setOffset23Core(Offset23CoreType * Offset23CoreIn)
{Offset23Core = Offset23CoreIn;}

ElementReferenceType * Offset23Type::getTransform()
{return Transform;}

void Offset23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class PathTriangulationCoreType

*/

PathTriangulationCoreType::PathTriangulationCoreType()
{
  PathTriangulationCoreTypePair = 0;
}

PathTriangulationCoreType::PathTriangulationCoreType(
 PathTriangulationCoreTypeChoicePair * PathTriangulationCoreTypePairIn)
{
  PathTriangulationCoreTypePair = PathTriangulationCoreTypePairIn;
}

PathTriangulationCoreType::~PathTriangulationCoreType()
{
  #ifndef NODESTRUCT
  delete PathTriangulationCoreTypePair;
  #endif
}

void PathTriangulationCoreType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PathTriangulationCoreTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PathTriangulationCoreTypeChoicePair * PathTriangulationCoreType::getPathTriangulationCoreTypePair()
{return PathTriangulationCoreTypePair;}

void PathTriangulationCoreType::setPathTriangulationCoreTypePair(PathTriangulationCoreTypeChoicePair * PathTriangulationCoreTypePairIn)
{PathTriangulationCoreTypePair = PathTriangulationCoreTypePairIn;}

/* ***************************************************************** */

/* class PathTriangulationCoreTypeChoicePair

*/

PathTriangulationCoreTypeChoicePair::PathTriangulationCoreTypeChoicePair() {}

PathTriangulationCoreTypeChoicePair::PathTriangulationCoreTypeChoicePair(
 whichOne PathTriangulationCoreTypeTypeIn,
 PathTriangulationCoreTypeVal PathTriangulationCoreTypeValueIn)
{
  PathTriangulationCoreTypeType = PathTriangulationCoreTypeTypeIn;
  PathTriangulationCoreTypeValue = PathTriangulationCoreTypeValueIn;
}

PathTriangulationCoreTypeChoicePair::~PathTriangulationCoreTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PathTriangulationCoreTypeType == EdgesE)
    delete PathTriangulationCoreTypeValue.Edges;
  else if (PathTriangulationCoreTypeType == EdgesBinaryE)
    delete PathTriangulationCoreTypeValue.EdgesBinary;
  #endif
}

void PathTriangulationCoreTypeChoicePair::printSelf(FILE * outFile)
{
  if (PathTriangulationCoreTypeType == EdgesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Edges");
      PathTriangulationCoreTypeValue.Edges->printSelf(outFile);
      fprintf(outFile, "</Edges>\n");
    }
  else if (PathTriangulationCoreTypeType == EdgesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EdgesBinary");
      PathTriangulationCoreTypeValue.EdgesBinary->printSelf(outFile);
      fprintf(outFile, "</EdgesBinary>\n");
    }
}

/* ***************************************************************** */

/* class PathTriangulationType

*/

PathTriangulationType::PathTriangulationType() :
  GeometryBaseType()
{
  PathTriangulationCore = 0;
  MeshTriangle = 0;
}

PathTriangulationType::PathTriangulationType(
 AttributesType * AttributesIn,
 PathTriangulationCoreType * PathTriangulationCoreIn,
 ElementReferenceType * MeshTriangleIn) :
  GeometryBaseType(
    AttributesIn)
{
  PathTriangulationCore = PathTriangulationCoreIn;
  MeshTriangle = MeshTriangleIn;
}

PathTriangulationType::PathTriangulationType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 PathTriangulationCoreType * PathTriangulationCoreIn,
 ElementReferenceType * MeshTriangleIn) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  PathTriangulationCore = PathTriangulationCoreIn;
  MeshTriangle = MeshTriangleIn;
}

PathTriangulationType::~PathTriangulationType()
{
  #ifndef NODESTRUCT
  delete PathTriangulationCore;
  delete MeshTriangle;
  #endif
}

void PathTriangulationType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<PathTriangulationCore");
  PathTriangulationCore->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</PathTriangulationCore>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<MeshTriangle");
  MeshTriangle->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</MeshTriangle>\n");
  doSpaces(-INDENT, outFile);
}

bool PathTriangulationType::badAttributes(
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
              fprintf(stderr, "two values for id in PathTriangulationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PathTriangulationType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in PathTriangulationType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PathTriangulationType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PathTriangulationType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PathTriangulationType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

PathTriangulationCoreType * PathTriangulationType::getPathTriangulationCore()
{return PathTriangulationCore;}

void PathTriangulationType::setPathTriangulationCore(PathTriangulationCoreType * PathTriangulationCoreIn)
{PathTriangulationCore = PathTriangulationCoreIn;}

ElementReferenceType * PathTriangulationType::getMeshTriangle()
{return MeshTriangle;}

void PathTriangulationType::setMeshTriangle(ElementReferenceType * MeshTriangleIn)
{MeshTriangle = MeshTriangleIn;}

/* ***************************************************************** */

/* class PathTriangulationTypeLisd

*/

PathTriangulationTypeLisd::PathTriangulationTypeLisd() {}

PathTriangulationTypeLisd::PathTriangulationTypeLisd(PathTriangulationType * aPathTriangulationType)
{
  push_back(aPathTriangulationType);
}

PathTriangulationTypeLisd::~PathTriangulationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PathTriangulationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PathTriangulationTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Plane23CoreType

*/

Plane23CoreType::Plane23CoreType() :
  SurfaceCoreBaseType()
{
  domainU = 0;
  domainV = 0;
  Origin = 0;
  DirU = 0;
  DirV = 0;
}

Plane23CoreType::Plane23CoreType(
 PointSimpleType * OriginIn,
 VectorSimpleType * DirUIn,
 VectorSimpleType * DirVIn) :
  SurfaceCoreBaseType()
{
  domainU = 0;
  domainV = 0;
  Origin = OriginIn;
  DirU = DirUIn;
  DirV = DirVIn;
}

Plane23CoreType::Plane23CoreType(
 Attr23CoreEnumType * formIn,
 ParameterRangeType * domainUIn,
 ParameterRangeType * domainVIn,
 PointSimpleType * OriginIn,
 VectorSimpleType * DirUIn,
 VectorSimpleType * DirVIn) :
  SurfaceCoreBaseType(
    formIn)
{
  domainU = domainUIn;
  domainV = domainVIn;
  Origin = OriginIn;
  DirU = DirUIn;
  DirV = DirVIn;
}

Plane23CoreType::~Plane23CoreType()
{
  #ifndef NODESTRUCT
  delete domainU;
  delete domainV;
  delete Origin;
  delete DirU;
  delete DirV;
  #endif
}

void Plane23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domainU)
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
      fprintf(outFile, "domainU=\"");
      domainU->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domainU\" missing\n");
      exit(1);
    }
  if (domainV)
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
      fprintf(outFile, "domainV=\"");
      domainV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domainV\" missing\n");
      exit(1);
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirU");
  DirU->printSelf(outFile);
  fprintf(outFile, "</DirU>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirV");
  DirV->printSelf(outFile);
  fprintf(outFile, "</DirV>\n");
  doSpaces(-INDENT, outFile);
}

bool Plane23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domainU")
        {
          ParameterRangeType * domainUVal;
          if (domainU)
            {
              fprintf(stderr, "two values for domainU in Plane23CoreType\n");
              returnValue = true;
              break;
            }
          domainUVal = new ParameterRangeType(decl->val.c_str());
          if (domainUVal->bad)
            {
              delete domainUVal;
              fprintf(stderr, "bad value %s for domainU in Plane23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domainU = domainUVal;
        }
      else if (decl->name == "domainV")
        {
          ParameterRangeType * domainVVal;
          if (domainV)
            {
              fprintf(stderr, "two values for domainV in Plane23CoreType\n");
              returnValue = true;
              break;
            }
          domainVVal = new ParameterRangeType(decl->val.c_str());
          if (domainVVal->bad)
            {
              delete domainVVal;
              fprintf(stderr, "bad value %s for domainV in Plane23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domainV = domainVVal;
        }
      else if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Plane23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Plane23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Plane23CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domainU == 0)
    {
      fprintf(stderr, "required attribute \"domainU\" missing in Plane23CoreType\n");
      returnValue = true;
    }
  if (domainV == 0)
    {
      fprintf(stderr, "required attribute \"domainV\" missing in Plane23CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domainU;
      domainU = 0;
      delete domainV;
      domainV = 0;
      delete form;
      form = 0;
    }
  return returnValue;
}

ParameterRangeType * Plane23CoreType::getdomainU()
{return domainU;}

void Plane23CoreType::setdomainU(ParameterRangeType * domainUIn)
{domainU = domainUIn;}

ParameterRangeType * Plane23CoreType::getdomainV()
{return domainV;}

void Plane23CoreType::setdomainV(ParameterRangeType * domainVIn)
{domainV = domainVIn;}

PointSimpleType * Plane23CoreType::getOrigin()
{return Origin;}

void Plane23CoreType::setOrigin(PointSimpleType * OriginIn)
{Origin = OriginIn;}

VectorSimpleType * Plane23CoreType::getDirU()
{return DirU;}

void Plane23CoreType::setDirU(VectorSimpleType * DirUIn)
{DirU = DirUIn;}

VectorSimpleType * Plane23CoreType::getDirV()
{return DirV;}

void Plane23CoreType::setDirV(VectorSimpleType * DirVIn)
{DirV = DirVIn;}

/* ***************************************************************** */

/* class Plane23Type

*/

Plane23Type::Plane23Type() :
  SurfaceBaseType()
{
  Plane23Core = 0;
  Transform = 0;
}

Plane23Type::Plane23Type(
 AttributesType * AttributesIn,
 Plane23CoreType * Plane23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Plane23Core = Plane23CoreIn;
  Transform = TransformIn;
}

Plane23Type::Plane23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Plane23CoreType * Plane23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Plane23Core = Plane23CoreIn;
  Transform = TransformIn;
}

Plane23Type::~Plane23Type()
{
  #ifndef NODESTRUCT
  delete Plane23Core;
  delete Transform;
  #endif
}

void Plane23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Plane23Core");
  Plane23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Plane23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Plane23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Plane23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Plane23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Plane23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Plane23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Plane23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Plane23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Plane23CoreType * Plane23Type::getPlane23Core()
{return Plane23Core;}

void Plane23Type::setPlane23Core(Plane23CoreType * Plane23CoreIn)
{Plane23Core = Plane23CoreIn;}

ElementReferenceType * Plane23Type::getTransform()
{return Transform;}

void Plane23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class PointEntityType

*/

PointEntityType::PointEntityType() :
  GeometryBaseType()
{
  XYZ = 0;
}

PointEntityType::PointEntityType(
 AttributesType * AttributesIn,
 PointSimpleType * XYZIn) :
  GeometryBaseType(
    AttributesIn)
{
  XYZ = XYZIn;
}

PointEntityType::PointEntityType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 PointSimpleType * XYZIn) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  XYZ = XYZIn;
}

PointEntityType::~PointEntityType()
{
  #ifndef NODESTRUCT
  delete XYZ;
  #endif
}

void PointEntityType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<XYZ");
  XYZ->printSelf(outFile);
  fprintf(outFile, "</XYZ>\n");
  doSpaces(-INDENT, outFile);
}

bool PointEntityType::badAttributes(
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
              fprintf(stderr, "two values for id in PointEntityType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PointEntityType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in PointEntityType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PointEntityType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointEntityType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PointEntityType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

PointSimpleType * PointEntityType::getXYZ()
{return XYZ;}

void PointEntityType::setXYZ(PointSimpleType * XYZIn)
{XYZ = XYZIn;}

/* ***************************************************************** */

/* class PointEntityTypeLisd

*/

PointEntityTypeLisd::PointEntityTypeLisd() {}

PointEntityTypeLisd::PointEntityTypeLisd(PointEntityType * aPointEntityType)
{
  push_back(aPointEntityType);
}

PointEntityTypeLisd::~PointEntityTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PointEntityType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PointEntityTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class PointSetType

*/

PointSetType::PointSetType()
{
  n = 0;
  Point = 0;
}

PointSetType::PointSetType(
 PointEntityTypeLisd * PointIn)
{
  n = 0;
  Point = PointIn;
}

PointSetType::PointSetType(
 NaturalType * nIn,
 PointEntityTypeLisd * PointIn)
{
  n = nIn;
  Point = PointIn;
}

PointSetType::~PointSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Point;
  #endif
}

void PointSetType::printSelf(FILE * outFile)
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
    if (!Point)
      {
        fprintf(stderr, "Point list is missing\n");
        exit(1);
      }
    if (Point->size() == 0)
      {
        fprintf(stderr, "Point list is empty\n");
        exit(1);
      }
    std::list<PointEntityType *>::iterator iter;
    for (iter = Point->begin();
         iter != Point->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Point");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Point>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PointSetType::badAttributes(
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
              fprintf(stderr, "two values for n in PointSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PointSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PointSetType\n");
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

NaturalType * PointSetType::getn()
{return n;}

void PointSetType::setn(NaturalType * nIn)
{n = nIn;}

PointEntityTypeLisd * PointSetType::getPoint()
{return Point;}

void PointSetType::setPoint(PointEntityTypeLisd * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class Polyline12CoreType

*/

Polyline12CoreType::Polyline12CoreType() :
  CurveCoreBaseType()
{
  Polyline12CoreT_1222 = 0;
}

Polyline12CoreType::Polyline12CoreType(
 Polyline12CoreT_1222_Type * Polyline12CoreT_1222In) :
  CurveCoreBaseType()
{
  Polyline12CoreT_1222 = Polyline12CoreT_1222In;
}

Polyline12CoreType::Polyline12CoreType(
 ParameterRangeType * domainIn,
 Polyline12CoreT_1222_Type * Polyline12CoreT_1222In) :
  CurveCoreBaseType(
    domainIn)
{
  Polyline12CoreT_1222 = Polyline12CoreT_1222In;
}

Polyline12CoreType::~Polyline12CoreType()
{
  #ifndef NODESTRUCT
  delete Polyline12CoreT_1222;
  #endif
}

void Polyline12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  Polyline12CoreT_1222->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool Polyline12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Polyline12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Polyline12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polyline12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Polyline12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

Polyline12CoreT_1222_Type * Polyline12CoreType::getPolyline12CoreT_1222()
{return Polyline12CoreT_1222;}

void Polyline12CoreType::setPolyline12CoreT_1222(Polyline12CoreT_1222_Type * Polyline12CoreT_1222In)
{Polyline12CoreT_1222 = Polyline12CoreT_1222In;}

/* ***************************************************************** */

/* class Polyline12Type

*/

Polyline12Type::Polyline12Type() :
  Curve12BaseType()
{
  Polyline12Core = 0;
}

Polyline12Type::Polyline12Type(
 AttributesType * AttributesIn,
 Polyline12CoreType * Polyline12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  Polyline12Core = Polyline12CoreIn;
}

Polyline12Type::Polyline12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Polyline12CoreType * Polyline12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Polyline12Core = Polyline12CoreIn;
}

Polyline12Type::~Polyline12Type()
{
  #ifndef NODESTRUCT
  delete Polyline12Core;
  #endif
}

void Polyline12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Polyline12Core");
  Polyline12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Polyline12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool Polyline12Type::badAttributes(
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
              fprintf(stderr, "two values for id in Polyline12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Polyline12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Polyline12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Polyline12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polyline12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Polyline12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Polyline12CoreType * Polyline12Type::getPolyline12Core()
{return Polyline12Core;}

void Polyline12Type::setPolyline12Core(Polyline12CoreType * Polyline12CoreIn)
{Polyline12Core = Polyline12CoreIn;}

/* ***************************************************************** */

/* class Polyline13CoreType

*/

Polyline13CoreType::Polyline13CoreType() :
  CurveCoreBaseType()
{
  Polyline13CoreT_1223 = 0;
}

Polyline13CoreType::Polyline13CoreType(
 Polyline13CoreT_1223_Type * Polyline13CoreT_1223In) :
  CurveCoreBaseType()
{
  Polyline13CoreT_1223 = Polyline13CoreT_1223In;
}

Polyline13CoreType::Polyline13CoreType(
 ParameterRangeType * domainIn,
 Polyline13CoreT_1223_Type * Polyline13CoreT_1223In) :
  CurveCoreBaseType(
    domainIn)
{
  Polyline13CoreT_1223 = Polyline13CoreT_1223In;
}

Polyline13CoreType::~Polyline13CoreType()
{
  #ifndef NODESTRUCT
  delete Polyline13CoreT_1223;
  #endif
}

void Polyline13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  Polyline13CoreT_1223->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool Polyline13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Polyline13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Polyline13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polyline13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Polyline13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

Polyline13CoreT_1223_Type * Polyline13CoreType::getPolyline13CoreT_1223()
{return Polyline13CoreT_1223;}

void Polyline13CoreType::setPolyline13CoreT_1223(Polyline13CoreT_1223_Type * Polyline13CoreT_1223In)
{Polyline13CoreT_1223 = Polyline13CoreT_1223In;}

/* ***************************************************************** */

/* class Polyline13Type

*/

Polyline13Type::Polyline13Type() :
  Curve13BaseType()
{
  Polyline13Core = 0;
  Transform = 0;
}

Polyline13Type::Polyline13Type(
 AttributesType * AttributesIn,
 Polyline13CoreType * Polyline13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  Polyline13Core = Polyline13CoreIn;
  Transform = TransformIn;
}

Polyline13Type::Polyline13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Polyline13CoreType * Polyline13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Polyline13Core = Polyline13CoreIn;
  Transform = TransformIn;
}

Polyline13Type::~Polyline13Type()
{
  #ifndef NODESTRUCT
  delete Polyline13Core;
  delete Transform;
  #endif
}

void Polyline13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Polyline13Core");
  Polyline13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Polyline13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Polyline13Type::badAttributes(
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
              fprintf(stderr, "two values for id in Polyline13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Polyline13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Polyline13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Polyline13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polyline13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Polyline13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Polyline13CoreType * Polyline13Type::getPolyline13Core()
{return Polyline13Core;}

void Polyline13Type::setPolyline13Core(Polyline13CoreType * Polyline13CoreIn)
{Polyline13Core = Polyline13CoreIn;}

ElementReferenceType * Polyline13Type::getTransform()
{return Transform;}

void Polyline13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Revolution23CoreType

*/

Revolution23CoreType::Revolution23CoreType() :
  SurfaceCoreBaseType()
{
  angle = 0;
  Axis = 0;
  Generatrix = 0;
}

Revolution23CoreType::Revolution23CoreType(
 AxisType * AxisIn,
 Curve13CoreType * GeneratrixIn) :
  SurfaceCoreBaseType()
{
  angle = 0;
  Axis = AxisIn;
  Generatrix = GeneratrixIn;
}

Revolution23CoreType::Revolution23CoreType(
 Attr23CoreEnumType * formIn,
 ParameterRangeType * angleIn,
 AxisType * AxisIn,
 Curve13CoreType * GeneratrixIn) :
  SurfaceCoreBaseType(
    formIn)
{
  angle = angleIn;
  Axis = AxisIn;
  Generatrix = GeneratrixIn;
}

Revolution23CoreType::~Revolution23CoreType()
{
  #ifndef NODESTRUCT
  delete angle;
  delete Axis;
  delete Generatrix;
  #endif
}

void Revolution23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (angle)
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
      fprintf(outFile, "angle=\"");
      angle->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"angle\" missing\n");
      exit(1);
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Generatrix");
  Generatrix->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Generatrix>\n");
  doSpaces(-INDENT, outFile);
}

bool Revolution23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "angle")
        {
          ParameterRangeType * angleVal;
          if (angle)
            {
              fprintf(stderr, "two values for angle in Revolution23CoreType\n");
              returnValue = true;
              break;
            }
          angleVal = new ParameterRangeType(decl->val.c_str());
          if (angleVal->bad)
            {
              delete angleVal;
              fprintf(stderr, "bad value %s for angle in Revolution23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            angle = angleVal;
        }
      else if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Revolution23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Revolution23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Revolution23CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (angle == 0)
    {
      fprintf(stderr, "required attribute \"angle\" missing in Revolution23CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete angle;
      angle = 0;
      delete form;
      form = 0;
    }
  return returnValue;
}

ParameterRangeType * Revolution23CoreType::getangle()
{return angle;}

void Revolution23CoreType::setangle(ParameterRangeType * angleIn)
{angle = angleIn;}

AxisType * Revolution23CoreType::getAxis()
{return Axis;}

void Revolution23CoreType::setAxis(AxisType * AxisIn)
{Axis = AxisIn;}

Curve13CoreType * Revolution23CoreType::getGeneratrix()
{return Generatrix;}

void Revolution23CoreType::setGeneratrix(Curve13CoreType * GeneratrixIn)
{Generatrix = GeneratrixIn;}

/* ***************************************************************** */

/* class Revolution23Type

*/

Revolution23Type::Revolution23Type() :
  SurfaceBaseType()
{
  Revolution23Core = 0;
  Transform = 0;
}

Revolution23Type::Revolution23Type(
 AttributesType * AttributesIn,
 Revolution23CoreType * Revolution23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Revolution23Core = Revolution23CoreIn;
  Transform = TransformIn;
}

Revolution23Type::Revolution23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Revolution23CoreType * Revolution23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Revolution23Core = Revolution23CoreIn;
  Transform = TransformIn;
}

Revolution23Type::~Revolution23Type()
{
  #ifndef NODESTRUCT
  delete Revolution23Core;
  delete Transform;
  #endif
}

void Revolution23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Revolution23Core");
  Revolution23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Revolution23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Revolution23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Revolution23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Revolution23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Revolution23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Revolution23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Revolution23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Revolution23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Revolution23CoreType * Revolution23Type::getRevolution23Core()
{return Revolution23Core;}

void Revolution23Type::setRevolution23Core(Revolution23CoreType * Revolution23CoreIn)
{Revolution23Core = Revolution23CoreIn;}

ElementReferenceType * Revolution23Type::getTransform()
{return Transform;}

void Revolution23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Ruled23CoreType

*/

Ruled23CoreType::Ruled23CoreType() :
  SurfaceCoreBaseType()
{
  turnedSecondCurve = 0;
  Curve = 0;
}

Ruled23CoreType::Ruled23CoreType(
 Curve13CoreTypeLisd * CurveIn) :
  SurfaceCoreBaseType()
{
  turnedSecondCurve = 0;
  Curve = CurveIn;
}

Ruled23CoreType::Ruled23CoreType(
 Attr23CoreEnumType * formIn,
 XmlBoolean * turnedSecondCurveIn,
 Curve13CoreTypeLisd * CurveIn) :
  SurfaceCoreBaseType(
    formIn)
{
  turnedSecondCurve = turnedSecondCurveIn;
  Curve = CurveIn;
}

Ruled23CoreType::~Ruled23CoreType()
{
  #ifndef NODESTRUCT
  delete turnedSecondCurve;
  delete Curve;
  #endif
}

void Ruled23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (turnedSecondCurve)
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
      fprintf(outFile, "turnedSecondCurve=\"");
      turnedSecondCurve->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!Curve)
      {
        fprintf(stderr, "Curve list is missing\n");
        exit(1);
      }
    if (Curve->size() == 0)
      {
        fprintf(stderr, "Curve list is empty\n");
        exit(1);
      }
    std::list<Curve13CoreType *>::iterator iter;
    for (iter = Curve->begin();
         iter != Curve->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Curve");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Curve>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Ruled23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Ruled23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Ruled23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "turnedSecondCurve")
        {
          XmlBoolean * turnedSecondCurveVal;
          if (turnedSecondCurve)
            {
              fprintf(stderr, "two values for turnedSecondCurve in Ruled23CoreType\n");
              returnValue = true;
              break;
            }
          turnedSecondCurveVal = new XmlBoolean(decl->val.c_str());
          if (turnedSecondCurveVal->bad)
            {
              delete turnedSecondCurveVal;
              fprintf(stderr, "bad value %s for turnedSecondCurve in Ruled23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turnedSecondCurve = turnedSecondCurveVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Ruled23CoreType\n");
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
      delete form;
      form = 0;
      delete turnedSecondCurve;
      turnedSecondCurve = 0;
    }
  return returnValue;
}

XmlBoolean * Ruled23CoreType::getturnedSecondCurve()
{return turnedSecondCurve;}

void Ruled23CoreType::setturnedSecondCurve(XmlBoolean * turnedSecondCurveIn)
{turnedSecondCurve = turnedSecondCurveIn;}

Curve13CoreTypeLisd * Ruled23CoreType::getCurve()
{return Curve;}

void Ruled23CoreType::setCurve(Curve13CoreTypeLisd * CurveIn)
{Curve = CurveIn;}

/* ***************************************************************** */

/* class Ruled23Type

*/

Ruled23Type::Ruled23Type() :
  SurfaceBaseType()
{
  Ruled23Core = 0;
  Transform = 0;
}

Ruled23Type::Ruled23Type(
 AttributesType * AttributesIn,
 Ruled23CoreType * Ruled23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Ruled23Core = Ruled23CoreIn;
  Transform = TransformIn;
}

Ruled23Type::Ruled23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Ruled23CoreType * Ruled23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Ruled23Core = Ruled23CoreIn;
  Transform = TransformIn;
}

Ruled23Type::~Ruled23Type()
{
  #ifndef NODESTRUCT
  delete Ruled23Core;
  delete Transform;
  #endif
}

void Ruled23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Ruled23Core");
  Ruled23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Ruled23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Ruled23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Ruled23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Ruled23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Ruled23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Ruled23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Ruled23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Ruled23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Ruled23CoreType * Ruled23Type::getRuled23Core()
{return Ruled23Core;}

void Ruled23Type::setRuled23Core(Ruled23CoreType * Ruled23CoreIn)
{Ruled23Core = Ruled23CoreIn;}

ElementReferenceType * Ruled23Type::getTransform()
{return Transform;}

void Ruled23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Segment12CoreType

*/

Segment12CoreType::Segment12CoreType() :
  CurveCoreBaseType()
{
  StartPoint = 0;
  EndPoint = 0;
}

Segment12CoreType::Segment12CoreType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn) :
  CurveCoreBaseType()
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

Segment12CoreType::Segment12CoreType(
 ParameterRangeType * domainIn,
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn) :
  CurveCoreBaseType(
    domainIn)
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

Segment12CoreType::~Segment12CoreType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete EndPoint;
  #endif
}

void Segment12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  doSpaces(-INDENT, outFile);
}

bool Segment12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Segment12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Segment12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Segment12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Segment12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

Point2dSimpleType * Segment12CoreType::getStartPoint()
{return StartPoint;}

void Segment12CoreType::setStartPoint(Point2dSimpleType * StartPointIn)
{StartPoint = StartPointIn;}

Point2dSimpleType * Segment12CoreType::getEndPoint()
{return EndPoint;}

void Segment12CoreType::setEndPoint(Point2dSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

/* ***************************************************************** */

/* class Segment12Type

*/

Segment12Type::Segment12Type() :
  Curve12BaseType()
{
  Segment12Core = 0;
}

Segment12Type::Segment12Type(
 AttributesType * AttributesIn,
 Segment12CoreType * Segment12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  Segment12Core = Segment12CoreIn;
}

Segment12Type::Segment12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Segment12CoreType * Segment12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Segment12Core = Segment12CoreIn;
}

Segment12Type::~Segment12Type()
{
  #ifndef NODESTRUCT
  delete Segment12Core;
  #endif
}

void Segment12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Segment12Core");
  Segment12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Segment12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool Segment12Type::badAttributes(
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
              fprintf(stderr, "two values for id in Segment12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Segment12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Segment12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Segment12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Segment12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Segment12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Segment12CoreType * Segment12Type::getSegment12Core()
{return Segment12Core;}

void Segment12Type::setSegment12Core(Segment12CoreType * Segment12CoreIn)
{Segment12Core = Segment12CoreIn;}

/* ***************************************************************** */

/* class Segment13CoreType

*/

Segment13CoreType::Segment13CoreType() :
  CurveCoreBaseType()
{
  StartPoint = 0;
  EndPoint = 0;
}

Segment13CoreType::Segment13CoreType(
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn) :
  CurveCoreBaseType()
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

Segment13CoreType::Segment13CoreType(
 ParameterRangeType * domainIn,
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn) :
  CurveCoreBaseType(
    domainIn)
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

Segment13CoreType::~Segment13CoreType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete EndPoint;
  #endif
}

void Segment13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  doSpaces(-INDENT, outFile);
}

bool Segment13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Segment13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Segment13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Segment13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Segment13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
    }
  return returnValue;
}

PointSimpleType * Segment13CoreType::getStartPoint()
{return StartPoint;}

void Segment13CoreType::setStartPoint(PointSimpleType * StartPointIn)
{StartPoint = StartPointIn;}

PointSimpleType * Segment13CoreType::getEndPoint()
{return EndPoint;}

void Segment13CoreType::setEndPoint(PointSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

/* ***************************************************************** */

/* class Segment13Type

*/

Segment13Type::Segment13Type() :
  Curve13BaseType()
{
  Segment13Core = 0;
  Transform = 0;
}

Segment13Type::Segment13Type(
 AttributesType * AttributesIn,
 Segment13CoreType * Segment13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  Segment13Core = Segment13CoreIn;
  Transform = TransformIn;
}

Segment13Type::Segment13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Segment13CoreType * Segment13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Segment13Core = Segment13CoreIn;
  Transform = TransformIn;
}

Segment13Type::~Segment13Type()
{
  #ifndef NODESTRUCT
  delete Segment13Core;
  delete Transform;
  #endif
}

void Segment13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Segment13Core");
  Segment13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Segment13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Segment13Type::badAttributes(
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
              fprintf(stderr, "two values for id in Segment13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Segment13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Segment13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Segment13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Segment13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Segment13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Segment13CoreType * Segment13Type::getSegment13Core()
{return Segment13Core;}

void Segment13Type::setSegment13Core(Segment13CoreType * Segment13CoreIn)
{Segment13Core = Segment13CoreIn;}

ElementReferenceType * Segment13Type::getTransform()
{return Transform;}

void Segment13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Sphere23CoreType

*/

Sphere23CoreType::Sphere23CoreType() :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  Diameter = 0;
  Location = 0;
  LatitudeLongitudeSweep = 0;
}

Sphere23CoreType::Sphere23CoreType(
 XmlDouble * DiameterIn,
 PointSimpleType * LocationIn,
 OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn) :
  SurfaceCoreBaseType()
{
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  Diameter = DiameterIn;
  Location = LocationIn;
  LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;
}

Sphere23CoreType::Sphere23CoreType(
 Attr23CoreEnumType * formIn,
 DoublePositiveType * scaleUIn,
 DoublePositiveType * scaleVIn,
 XmlBoolean * turnedVIn,
 XmlDouble * DiameterIn,
 PointSimpleType * LocationIn,
 OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn) :
  SurfaceCoreBaseType(
    formIn)
{
  scaleU = scaleUIn;
  scaleV = scaleVIn;
  turnedV = turnedVIn;
  Diameter = DiameterIn;
  Location = LocationIn;
  LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;
}

Sphere23CoreType::~Sphere23CoreType()
{
  #ifndef NODESTRUCT
  delete scaleU;
  delete scaleV;
  delete turnedV;
  delete Diameter;
  delete Location;
  delete LatitudeLongitudeSweep;
  #endif
}

void Sphere23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleU)
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
      fprintf(outFile, "scaleU=\"");
      scaleU->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleV)
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
      fprintf(outFile, "scaleV=\"");
      scaleV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (turnedV)
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
      fprintf(outFile, "turnedV=\"");
      turnedV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Location");
  Location->printSelf(outFile);
  fprintf(outFile, "</Location>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<LatitudeLongitudeSweep");
  LatitudeLongitudeSweep->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</LatitudeLongitudeSweep>\n");
  doSpaces(-INDENT, outFile);
}

bool Sphere23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Sphere23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Sphere23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "scaleU")
        {
          DoublePositiveType * scaleUVal;
          if (scaleU)
            {
              fprintf(stderr, "two values for scaleU in Sphere23CoreType\n");
              returnValue = true;
              break;
            }
          scaleUVal = new DoublePositiveType(decl->val.c_str());
          if (scaleUVal->bad)
            {
              delete scaleUVal;
              fprintf(stderr, "bad value %s for scaleU in Sphere23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleU = scaleUVal;
        }
      else if (decl->name == "scaleV")
        {
          DoublePositiveType * scaleVVal;
          if (scaleV)
            {
              fprintf(stderr, "two values for scaleV in Sphere23CoreType\n");
              returnValue = true;
              break;
            }
          scaleVVal = new DoublePositiveType(decl->val.c_str());
          if (scaleVVal->bad)
            {
              delete scaleVVal;
              fprintf(stderr, "bad value %s for scaleV in Sphere23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleV = scaleVVal;
        }
      else if (decl->name == "turnedV")
        {
          XmlBoolean * turnedVVal;
          if (turnedV)
            {
              fprintf(stderr, "two values for turnedV in Sphere23CoreType\n");
              returnValue = true;
              break;
            }
          turnedVVal = new XmlBoolean(decl->val.c_str());
          if (turnedVVal->bad)
            {
              delete turnedVVal;
              fprintf(stderr, "bad value %s for turnedV in Sphere23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turnedV = turnedVVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Sphere23CoreType\n");
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
      delete form;
      form = 0;
      delete scaleU;
      scaleU = 0;
      delete scaleV;
      scaleV = 0;
      delete turnedV;
      turnedV = 0;
    }
  return returnValue;
}

DoublePositiveType * Sphere23CoreType::getscaleU()
{return scaleU;}

void Sphere23CoreType::setscaleU(DoublePositiveType * scaleUIn)
{scaleU = scaleUIn;}

DoublePositiveType * Sphere23CoreType::getscaleV()
{return scaleV;}

void Sphere23CoreType::setscaleV(DoublePositiveType * scaleVIn)
{scaleV = scaleVIn;}

XmlBoolean * Sphere23CoreType::getturnedV()
{return turnedV;}

void Sphere23CoreType::setturnedV(XmlBoolean * turnedVIn)
{turnedV = turnedVIn;}

XmlDouble * Sphere23CoreType::getDiameter()
{return Diameter;}

void Sphere23CoreType::setDiameter(XmlDouble * DiameterIn)
{Diameter = DiameterIn;}

PointSimpleType * Sphere23CoreType::getLocation()
{return Location;}

void Sphere23CoreType::setLocation(PointSimpleType * LocationIn)
{Location = LocationIn;}

OrientedLatitudeLongitudeSweepType * Sphere23CoreType::getLatitudeLongitudeSweep()
{return LatitudeLongitudeSweep;}

void Sphere23CoreType::setLatitudeLongitudeSweep(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn)
{LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;}

/* ***************************************************************** */

/* class Sphere23Type

*/

Sphere23Type::Sphere23Type() :
  SurfaceBaseType()
{
  Sphere23Core = 0;
  Transform = 0;
}

Sphere23Type::Sphere23Type(
 AttributesType * AttributesIn,
 Sphere23CoreType * Sphere23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Sphere23Core = Sphere23CoreIn;
  Transform = TransformIn;
}

Sphere23Type::Sphere23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Sphere23CoreType * Sphere23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Sphere23Core = Sphere23CoreIn;
  Transform = TransformIn;
}

Sphere23Type::~Sphere23Type()
{
  #ifndef NODESTRUCT
  delete Sphere23Core;
  delete Transform;
  #endif
}

void Sphere23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Sphere23Core");
  Sphere23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Sphere23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Sphere23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Sphere23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Sphere23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Sphere23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Sphere23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Sphere23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Sphere23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Sphere23CoreType * Sphere23Type::getSphere23Core()
{return Sphere23Core;}

void Sphere23Type::setSphere23Core(Sphere23CoreType * Sphere23CoreIn)
{Sphere23Core = Sphere23CoreIn;}

ElementReferenceType * Sphere23Type::getTransform()
{return Transform;}

void Sphere23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Spline12CoreType

*/

Spline12CoreType::Spline12CoreType() :
  CurveCoreBaseType()
{
  normalized = 0;
  Knots = 0;
  Orders = 0;
  Coefficients = 0;
}

Spline12CoreType::Spline12CoreType(
 ArrayDoubleType * KnotsIn,
 ArrayNaturalType * OrdersIn,
 ArrayPoint2dType * CoefficientsIn) :
  CurveCoreBaseType()
{
  normalized = 0;
  Knots = KnotsIn;
  Orders = OrdersIn;
  Coefficients = CoefficientsIn;
}

Spline12CoreType::Spline12CoreType(
 ParameterRangeType * domainIn,
 XmlBoolean * normalizedIn,
 ArrayDoubleType * KnotsIn,
 ArrayNaturalType * OrdersIn,
 ArrayPoint2dType * CoefficientsIn) :
  CurveCoreBaseType(
    domainIn)
{
  normalized = normalizedIn;
  Knots = KnotsIn;
  Orders = OrdersIn;
  Coefficients = CoefficientsIn;
}

Spline12CoreType::~Spline12CoreType()
{
  #ifndef NODESTRUCT
  delete normalized;
  delete Knots;
  delete Orders;
  delete Coefficients;
  #endif
}

void Spline12CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  if (normalized)
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
      fprintf(outFile, "normalized=\"");
      normalized->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Knots");
  Knots->printSelf(outFile);
  fprintf(outFile, "</Knots>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Orders");
  Orders->printSelf(outFile);
  fprintf(outFile, "</Orders>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Coefficients");
  Coefficients->printSelf(outFile);
  fprintf(outFile, "</Coefficients>\n");
  doSpaces(-INDENT, outFile);
}

bool Spline12CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Spline12CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Spline12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else if (decl->name == "normalized")
        {
          XmlBoolean * normalizedVal;
          if (normalized)
            {
              fprintf(stderr, "two values for normalized in Spline12CoreType\n");
              returnValue = true;
              break;
            }
          normalizedVal = new XmlBoolean(decl->val.c_str());
          if (normalizedVal->bad)
            {
              delete normalizedVal;
              fprintf(stderr, "bad value %s for normalized in Spline12CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            normalized = normalizedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline12CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Spline12CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
      delete normalized;
      normalized = 0;
    }
  return returnValue;
}

XmlBoolean * Spline12CoreType::getnormalized()
{return normalized;}

void Spline12CoreType::setnormalized(XmlBoolean * normalizedIn)
{normalized = normalizedIn;}

ArrayDoubleType * Spline12CoreType::getKnots()
{return Knots;}

void Spline12CoreType::setKnots(ArrayDoubleType * KnotsIn)
{Knots = KnotsIn;}

ArrayNaturalType * Spline12CoreType::getOrders()
{return Orders;}

void Spline12CoreType::setOrders(ArrayNaturalType * OrdersIn)
{Orders = OrdersIn;}

ArrayPoint2dType * Spline12CoreType::getCoefficients()
{return Coefficients;}

void Spline12CoreType::setCoefficients(ArrayPoint2dType * CoefficientsIn)
{Coefficients = CoefficientsIn;}

/* ***************************************************************** */

/* class Spline12Type

*/

Spline12Type::Spline12Type() :
  Curve12BaseType()
{
  Spline12Core = 0;
}

Spline12Type::Spline12Type(
 AttributesType * AttributesIn,
 Spline12CoreType * Spline12CoreIn) :
  Curve12BaseType(
    AttributesIn)
{
  Spline12Core = Spline12CoreIn;
}

Spline12Type::Spline12Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Spline12CoreType * Spline12CoreIn) :
  Curve12BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Spline12Core = Spline12CoreIn;
}

Spline12Type::~Spline12Type()
{
  #ifndef NODESTRUCT
  delete Spline12Core;
  #endif
}

void Spline12Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Spline12Core");
  Spline12Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Spline12Core>\n");
  doSpaces(-INDENT, outFile);
}

bool Spline12Type::badAttributes(
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
              fprintf(stderr, "two values for id in Spline12Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Spline12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Spline12Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Spline12Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline12Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Spline12Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Spline12CoreType * Spline12Type::getSpline12Core()
{return Spline12Core;}

void Spline12Type::setSpline12Core(Spline12CoreType * Spline12CoreIn)
{Spline12Core = Spline12CoreIn;}

/* ***************************************************************** */

/* class Spline13CoreType

*/

Spline13CoreType::Spline13CoreType() :
  CurveCoreBaseType()
{
  normalized = 0;
  Knots = 0;
  Orders = 0;
  Coefficients = 0;
}

Spline13CoreType::Spline13CoreType(
 ArrayDoubleType * KnotsIn,
 ArrayNaturalType * OrdersIn,
 ArrayPointType * CoefficientsIn) :
  CurveCoreBaseType()
{
  normalized = 0;
  Knots = KnotsIn;
  Orders = OrdersIn;
  Coefficients = CoefficientsIn;
}

Spline13CoreType::Spline13CoreType(
 ParameterRangeType * domainIn,
 XmlBoolean * normalizedIn,
 ArrayDoubleType * KnotsIn,
 ArrayNaturalType * OrdersIn,
 ArrayPointType * CoefficientsIn) :
  CurveCoreBaseType(
    domainIn)
{
  normalized = normalizedIn;
  Knots = KnotsIn;
  Orders = OrdersIn;
  Coefficients = CoefficientsIn;
}

Spline13CoreType::~Spline13CoreType()
{
  #ifndef NODESTRUCT
  delete normalized;
  delete Knots;
  delete Orders;
  delete Coefficients;
  #endif
}

void Spline13CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (domain)
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
      fprintf(outFile, "domain=\"");
      domain->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"domain\" missing\n");
      exit(1);
    }
  if (normalized)
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
      fprintf(outFile, "normalized=\"");
      normalized->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Knots");
  Knots->printSelf(outFile);
  fprintf(outFile, "</Knots>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Orders");
  Orders->printSelf(outFile);
  fprintf(outFile, "</Orders>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Coefficients");
  Coefficients->printSelf(outFile);
  fprintf(outFile, "</Coefficients>\n");
  doSpaces(-INDENT, outFile);
}

bool Spline13CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "domain")
        {
          ParameterRangeType * domainVal;
          if (domain)
            {
              fprintf(stderr, "two values for domain in Spline13CoreType\n");
              returnValue = true;
              break;
            }
          domainVal = new ParameterRangeType(decl->val.c_str());
          if (domainVal->bad)
            {
              delete domainVal;
              fprintf(stderr, "bad value %s for domain in Spline13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            domain = domainVal;
        }
      else if (decl->name == "normalized")
        {
          XmlBoolean * normalizedVal;
          if (normalized)
            {
              fprintf(stderr, "two values for normalized in Spline13CoreType\n");
              returnValue = true;
              break;
            }
          normalizedVal = new XmlBoolean(decl->val.c_str());
          if (normalizedVal->bad)
            {
              delete normalizedVal;
              fprintf(stderr, "bad value %s for normalized in Spline13CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            normalized = normalizedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline13CoreType\n");
          returnValue = true;
          break;
        }
    }
  if (domain == 0)
    {
      fprintf(stderr, "required attribute \"domain\" missing in Spline13CoreType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete domain;
      domain = 0;
      delete normalized;
      normalized = 0;
    }
  return returnValue;
}

XmlBoolean * Spline13CoreType::getnormalized()
{return normalized;}

void Spline13CoreType::setnormalized(XmlBoolean * normalizedIn)
{normalized = normalizedIn;}

ArrayDoubleType * Spline13CoreType::getKnots()
{return Knots;}

void Spline13CoreType::setKnots(ArrayDoubleType * KnotsIn)
{Knots = KnotsIn;}

ArrayNaturalType * Spline13CoreType::getOrders()
{return Orders;}

void Spline13CoreType::setOrders(ArrayNaturalType * OrdersIn)
{Orders = OrdersIn;}

ArrayPointType * Spline13CoreType::getCoefficients()
{return Coefficients;}

void Spline13CoreType::setCoefficients(ArrayPointType * CoefficientsIn)
{Coefficients = CoefficientsIn;}

/* ***************************************************************** */

/* class Spline13Type

*/

Spline13Type::Spline13Type() :
  Curve13BaseType()
{
  Spline13Core = 0;
  Transform = 0;
}

Spline13Type::Spline13Type(
 AttributesType * AttributesIn,
 Spline13CoreType * Spline13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    AttributesIn)
{
  Spline13Core = Spline13CoreIn;
  Transform = TransformIn;
}

Spline13Type::Spline13Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Spline13CoreType * Spline13CoreIn,
 ElementReferenceType * TransformIn) :
  Curve13BaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Spline13Core = Spline13CoreIn;
  Transform = TransformIn;
}

Spline13Type::~Spline13Type()
{
  #ifndef NODESTRUCT
  delete Spline13Core;
  delete Transform;
  #endif
}

void Spline13Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Spline13Core");
  Spline13Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Spline13Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Spline13Type::badAttributes(
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
              fprintf(stderr, "two values for id in Spline13Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Spline13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Spline13Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Spline13Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline13Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Spline13Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Spline13CoreType * Spline13Type::getSpline13Core()
{return Spline13Core;}

void Spline13Type::setSpline13Core(Spline13CoreType * Spline13CoreIn)
{Spline13Core = Spline13CoreIn;}

ElementReferenceType * Spline13Type::getTransform()
{return Transform;}

void Spline13Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class Spline23CoreType

*/

Spline23CoreType::Spline23CoreType() :
  SurfaceCoreBaseType()
{
  normalized = 0;
  KnotsU = 0;
  KnotsV = 0;
  OrdersU = 0;
  OrdersV = 0;
  Coefficients = 0;
}

Spline23CoreType::Spline23CoreType(
 ArrayDoubleType * KnotsUIn,
 ArrayDoubleType * KnotsVIn,
 ArrayNaturalType * OrdersUIn,
 ArrayNaturalType * OrdersVIn,
 ArrayPointType * CoefficientsIn) :
  SurfaceCoreBaseType()
{
  normalized = 0;
  KnotsU = KnotsUIn;
  KnotsV = KnotsVIn;
  OrdersU = OrdersUIn;
  OrdersV = OrdersVIn;
  Coefficients = CoefficientsIn;
}

Spline23CoreType::Spline23CoreType(
 Attr23CoreEnumType * formIn,
 XmlBoolean * normalizedIn,
 ArrayDoubleType * KnotsUIn,
 ArrayDoubleType * KnotsVIn,
 ArrayNaturalType * OrdersUIn,
 ArrayNaturalType * OrdersVIn,
 ArrayPointType * CoefficientsIn) :
  SurfaceCoreBaseType(
    formIn)
{
  normalized = normalizedIn;
  KnotsU = KnotsUIn;
  KnotsV = KnotsVIn;
  OrdersU = OrdersUIn;
  OrdersV = OrdersVIn;
  Coefficients = CoefficientsIn;
}

Spline23CoreType::~Spline23CoreType()
{
  #ifndef NODESTRUCT
  delete normalized;
  delete KnotsU;
  delete KnotsV;
  delete OrdersU;
  delete OrdersV;
  delete Coefficients;
  #endif
}

void Spline23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (normalized)
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
      fprintf(outFile, "normalized=\"");
      normalized->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<KnotsU");
  KnotsU->printSelf(outFile);
  fprintf(outFile, "</KnotsU>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<KnotsV");
  KnotsV->printSelf(outFile);
  fprintf(outFile, "</KnotsV>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<OrdersU");
  OrdersU->printSelf(outFile);
  fprintf(outFile, "</OrdersU>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<OrdersV");
  OrdersV->printSelf(outFile);
  fprintf(outFile, "</OrdersV>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Coefficients");
  Coefficients->printSelf(outFile);
  fprintf(outFile, "</Coefficients>\n");
  doSpaces(-INDENT, outFile);
}

bool Spline23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Spline23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Spline23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "normalized")
        {
          XmlBoolean * normalizedVal;
          if (normalized)
            {
              fprintf(stderr, "two values for normalized in Spline23CoreType\n");
              returnValue = true;
              break;
            }
          normalizedVal = new XmlBoolean(decl->val.c_str());
          if (normalizedVal->bad)
            {
              delete normalizedVal;
              fprintf(stderr, "bad value %s for normalized in Spline23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            normalized = normalizedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline23CoreType\n");
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
      delete form;
      form = 0;
      delete normalized;
      normalized = 0;
    }
  return returnValue;
}

XmlBoolean * Spline23CoreType::getnormalized()
{return normalized;}

void Spline23CoreType::setnormalized(XmlBoolean * normalizedIn)
{normalized = normalizedIn;}

ArrayDoubleType * Spline23CoreType::getKnotsU()
{return KnotsU;}

void Spline23CoreType::setKnotsU(ArrayDoubleType * KnotsUIn)
{KnotsU = KnotsUIn;}

ArrayDoubleType * Spline23CoreType::getKnotsV()
{return KnotsV;}

void Spline23CoreType::setKnotsV(ArrayDoubleType * KnotsVIn)
{KnotsV = KnotsVIn;}

ArrayNaturalType * Spline23CoreType::getOrdersU()
{return OrdersU;}

void Spline23CoreType::setOrdersU(ArrayNaturalType * OrdersUIn)
{OrdersU = OrdersUIn;}

ArrayNaturalType * Spline23CoreType::getOrdersV()
{return OrdersV;}

void Spline23CoreType::setOrdersV(ArrayNaturalType * OrdersVIn)
{OrdersV = OrdersVIn;}

ArrayPointType * Spline23CoreType::getCoefficients()
{return Coefficients;}

void Spline23CoreType::setCoefficients(ArrayPointType * CoefficientsIn)
{Coefficients = CoefficientsIn;}

/* ***************************************************************** */

/* class Spline23Type

*/

Spline23Type::Spline23Type() :
  SurfaceBaseType()
{
  Spline23Core = 0;
  Transform = 0;
}

Spline23Type::Spline23Type(
 AttributesType * AttributesIn,
 Spline23CoreType * Spline23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Spline23Core = Spline23CoreIn;
  Transform = TransformIn;
}

Spline23Type::Spline23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Spline23CoreType * Spline23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Spline23Core = Spline23CoreIn;
  Transform = TransformIn;
}

Spline23Type::~Spline23Type()
{
  #ifndef NODESTRUCT
  delete Spline23Core;
  delete Transform;
  #endif
}

void Spline23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Spline23Core");
  Spline23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Spline23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Spline23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Spline23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Spline23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Spline23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Spline23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Spline23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Spline23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Spline23CoreType * Spline23Type::getSpline23Core()
{return Spline23Core;}

void Spline23Type::setSpline23Core(Spline23CoreType * Spline23CoreIn)
{Spline23Core = Spline23CoreIn;}

ElementReferenceType * Spline23Type::getTransform()
{return Transform;}

void Spline23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class SurfaceBaseType

*/

SurfaceBaseType::SurfaceBaseType() :
  GeometryBaseType()
{
}

SurfaceBaseType::SurfaceBaseType(
 AttributesType * AttributesIn) :
  GeometryBaseType(
    AttributesIn)
{
}

SurfaceBaseType::SurfaceBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn) :
  GeometryBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
}

SurfaceBaseType::~SurfaceBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void SurfaceBaseType::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool SurfaceBaseType::badAttributes(
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
              fprintf(stderr, "two values for id in SurfaceBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SurfaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in SurfaceBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in SurfaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SurfaceBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in SurfaceBaseType\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class SurfaceBaseTypeLisd

*/

SurfaceBaseTypeLisd::SurfaceBaseTypeLisd() {}

SurfaceBaseTypeLisd::SurfaceBaseTypeLisd(SurfaceBaseType * aSurfaceBaseType)
{
  push_back(aSurfaceBaseType);
}

SurfaceBaseTypeLisd::~SurfaceBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SurfaceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SurfaceBaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SurfaceCoreBaseType

*/

SurfaceCoreBaseType::SurfaceCoreBaseType()
{
  form = 0;
}

SurfaceCoreBaseType::SurfaceCoreBaseType(
 Attr23CoreEnumType * formIn)
{
  form = formIn;
}

SurfaceCoreBaseType::~SurfaceCoreBaseType()
{
  delete form;
}

void SurfaceCoreBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, "/>\n");
}

bool SurfaceCoreBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in SurfaceCoreBaseType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in SurfaceCoreBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SurfaceCoreBaseType\n");
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
      delete form;
      form = 0;
    }
  return returnValue;
}

Attr23CoreEnumType * SurfaceCoreBaseType::getform()
{return form;}

void SurfaceCoreBaseType::setform(Attr23CoreEnumType * formIn)
{form = formIn;}

/* ***************************************************************** */

/* class SurfaceCoreType

*/

SurfaceCoreType::SurfaceCoreType()
{
  SurfaceCore = 0;
}

SurfaceCoreType::SurfaceCoreType(
 SurfaceCoreBaseType * SurfaceCoreIn)
{
  SurfaceCore = SurfaceCoreIn;
}

SurfaceCoreType::~SurfaceCoreType()
{
  #ifndef NODESTRUCT
  delete SurfaceCore;
  #endif
}

void SurfaceCoreType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (SurfaceCore->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(SurfaceCore->printElement, "Nurbs23Core") == 0)
      {
        Nurbs23CoreType * typ;
        if ((typ = dynamic_cast<Nurbs23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Nurbs23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Nurbs23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Nurbs23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Spline23Core") == 0)
      {
        Spline23CoreType * typ;
        if ((typ = dynamic_cast<Spline23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Spline23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Spline23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Spline23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Revolution23Core") == 0)
      {
        Revolution23CoreType * typ;
        if ((typ = dynamic_cast<Revolution23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Revolution23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Revolution23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Revolution23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Extrude23Core") == 0)
      {
        Extrude23CoreType * typ;
        if ((typ = dynamic_cast<Extrude23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Extrude23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Extrude23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Extrude23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Ruled23Core") == 0)
      {
        Ruled23CoreType * typ;
        if ((typ = dynamic_cast<Ruled23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Ruled23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Ruled23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Ruled23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Offset23Core") == 0)
      {
        Offset23CoreType * typ;
        if ((typ = dynamic_cast<Offset23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Offset23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Offset23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Offset23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Plane23Core") == 0)
      {
        Plane23CoreType * typ;
        if ((typ = dynamic_cast<Plane23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Plane23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Plane23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Plane23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Cone23Core") == 0)
      {
        Cone23CoreType * typ;
        if ((typ = dynamic_cast<Cone23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Cone23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Cone23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Cone23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Cylinder23Core") == 0)
      {
        Cylinder23CoreType * typ;
        if ((typ = dynamic_cast<Cylinder23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Cylinder23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Cylinder23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Cylinder23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Sphere23Core") == 0)
      {
        Sphere23CoreType * typ;
        if ((typ = dynamic_cast<Sphere23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Sphere23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Sphere23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Sphere23Core element\n");
            exit(1);
          }
      }
    else if (strcmp(SurfaceCore->printElement, "Torus23Core") == 0)
      {
        Torus23CoreType * typ;
        if ((typ = dynamic_cast<Torus23CoreType *>(SurfaceCore)))
          {
            fprintf(outFile, "<Torus23Core");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Torus23Core>\n");
          }
        else
          {
            fprintf(stderr, "bad Torus23Core element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad SurfaceCore type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

SurfaceCoreBaseType * SurfaceCoreType::getSurfaceCore()
{return SurfaceCore;}

void SurfaceCoreType::setSurfaceCore(SurfaceCoreBaseType * SurfaceCoreIn)
{SurfaceCore = SurfaceCoreIn;}

/* ***************************************************************** */

/* class SurfaceMeshSetType

*/

SurfaceMeshSetType::SurfaceMeshSetType()
{
  n = 0;
  MeshTriangle = 0;
}

SurfaceMeshSetType::SurfaceMeshSetType(
 MeshTriangleTypeLisd * MeshTriangleIn)
{
  n = 0;
  MeshTriangle = MeshTriangleIn;
}

SurfaceMeshSetType::SurfaceMeshSetType(
 NaturalType * nIn,
 MeshTriangleTypeLisd * MeshTriangleIn)
{
  n = nIn;
  MeshTriangle = MeshTriangleIn;
}

SurfaceMeshSetType::~SurfaceMeshSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete MeshTriangle;
  #endif
}

void SurfaceMeshSetType::printSelf(FILE * outFile)
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
    if (!MeshTriangle)
      {
        fprintf(stderr, "MeshTriangle list is missing\n");
        exit(1);
      }
    if (MeshTriangle->size() == 0)
      {
        fprintf(stderr, "MeshTriangle list is empty\n");
        exit(1);
      }
    std::list<MeshTriangleType *>::iterator iter;
    for (iter = MeshTriangle->begin();
         iter != MeshTriangle->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<MeshTriangle");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</MeshTriangle>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SurfaceMeshSetType::badAttributes(
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
              fprintf(stderr, "two values for n in SurfaceMeshSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SurfaceMeshSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SurfaceMeshSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SurfaceMeshSetType\n");
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

NaturalType * SurfaceMeshSetType::getn()
{return n;}

void SurfaceMeshSetType::setn(NaturalType * nIn)
{n = nIn;}

MeshTriangleTypeLisd * SurfaceMeshSetType::getMeshTriangle()
{return MeshTriangle;}

void SurfaceMeshSetType::setMeshTriangle(MeshTriangleTypeLisd * MeshTriangleIn)
{MeshTriangle = MeshTriangleIn;}

/* ***************************************************************** */

/* class SurfaceSetType

*/

SurfaceSetType::SurfaceSetType()
{
  n = 0;
  Surface = 0;
}

SurfaceSetType::SurfaceSetType(
 SurfaceBaseTypeLisd * SurfaceIn)
{
  n = 0;
  Surface = SurfaceIn;
}

SurfaceSetType::SurfaceSetType(
 NaturalType * nIn,
 SurfaceBaseTypeLisd * SurfaceIn)
{
  n = nIn;
  Surface = SurfaceIn;
}

SurfaceSetType::~SurfaceSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Surface;
  #endif
}

void SurfaceSetType::printSelf(FILE * outFile)
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
    if (!Surface)
      {
        fprintf(stderr, "Surface list is missing\n");
        exit(1);
      }
    if (Surface->size() == 0)
      {
        fprintf(stderr, "Surface list is empty\n");
        exit(1);
      }
    std::list<SurfaceBaseType *>::iterator iter;
    for (iter = Surface->begin();
         iter != Surface->end(); iter++)
      {
        SurfaceBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Nurbs23") == 0)
          {
            Nurbs23Type * typ;
            if ((typ = dynamic_cast<Nurbs23Type *>(basie)))
              {
                fprintf(outFile, "<Nurbs23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Nurbs23>\n");
              }
            else
              {
                fprintf(stderr, "bad Nurbs23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Spline23") == 0)
          {
            Spline23Type * typ;
            if ((typ = dynamic_cast<Spline23Type *>(basie)))
              {
                fprintf(outFile, "<Spline23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Spline23>\n");
              }
            else
              {
                fprintf(stderr, "bad Spline23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Revolution23") == 0)
          {
            Revolution23Type * typ;
            if ((typ = dynamic_cast<Revolution23Type *>(basie)))
              {
                fprintf(outFile, "<Revolution23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Revolution23>\n");
              }
            else
              {
                fprintf(stderr, "bad Revolution23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Extrude23") == 0)
          {
            Extrude23Type * typ;
            if ((typ = dynamic_cast<Extrude23Type *>(basie)))
              {
                fprintf(outFile, "<Extrude23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Extrude23>\n");
              }
            else
              {
                fprintf(stderr, "bad Extrude23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Ruled23") == 0)
          {
            Ruled23Type * typ;
            if ((typ = dynamic_cast<Ruled23Type *>(basie)))
              {
                fprintf(outFile, "<Ruled23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Ruled23>\n");
              }
            else
              {
                fprintf(stderr, "bad Ruled23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Offset23") == 0)
          {
            Offset23Type * typ;
            if ((typ = dynamic_cast<Offset23Type *>(basie)))
              {
                fprintf(outFile, "<Offset23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Offset23>\n");
              }
            else
              {
                fprintf(stderr, "bad Offset23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plane23") == 0)
          {
            Plane23Type * typ;
            if ((typ = dynamic_cast<Plane23Type *>(basie)))
              {
                fprintf(outFile, "<Plane23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plane23>\n");
              }
            else
              {
                fprintf(stderr, "bad Plane23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Cone23") == 0)
          {
            Cone23Type * typ;
            if ((typ = dynamic_cast<Cone23Type *>(basie)))
              {
                fprintf(outFile, "<Cone23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Cone23>\n");
              }
            else
              {
                fprintf(stderr, "bad Cone23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Cylinder23") == 0)
          {
            Cylinder23Type * typ;
            if ((typ = dynamic_cast<Cylinder23Type *>(basie)))
              {
                fprintf(outFile, "<Cylinder23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Cylinder23>\n");
              }
            else
              {
                fprintf(stderr, "bad Cylinder23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Sphere23") == 0)
          {
            Sphere23Type * typ;
            if ((typ = dynamic_cast<Sphere23Type *>(basie)))
              {
                fprintf(outFile, "<Sphere23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Sphere23>\n");
              }
            else
              {
                fprintf(stderr, "bad Sphere23 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Torus23") == 0)
          {
            Torus23Type * typ;
            if ((typ = dynamic_cast<Torus23Type *>(basie)))
              {
                fprintf(outFile, "<Torus23");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Torus23>\n");
              }
            else
              {
                fprintf(stderr, "bad Torus23 element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Surface type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SurfaceSetType::badAttributes(
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
              fprintf(stderr, "two values for n in SurfaceSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SurfaceSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SurfaceSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SurfaceSetType\n");
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

NaturalType * SurfaceSetType::getn()
{return n;}

void SurfaceSetType::setn(NaturalType * nIn)
{n = nIn;}

SurfaceBaseTypeLisd * SurfaceSetType::getSurface()
{return Surface;}

void SurfaceSetType::setSurface(SurfaceBaseTypeLisd * SurfaceIn)
{Surface = SurfaceIn;}

/* ***************************************************************** */

/* class Torus23CoreType

*/

Torus23CoreType::Torus23CoreType() :
  SurfaceCoreBaseType()
{
  offsetV = 0;
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  DiameterMinor = 0;
  DiameterMajor = 0;
  Axis = 0;
  LatitudeLongitudeSweep = 0;
}

Torus23CoreType::Torus23CoreType(
 XmlDouble * DiameterMinorIn,
 XmlDouble * DiameterMajorIn,
 AxisType * AxisIn,
 LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn) :
  SurfaceCoreBaseType()
{
  offsetV = 0;
  scaleU = 0;
  scaleV = 0;
  turnedV = 0;
  DiameterMinor = DiameterMinorIn;
  DiameterMajor = DiameterMajorIn;
  Axis = AxisIn;
  LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;
}

Torus23CoreType::Torus23CoreType(
 Attr23CoreEnumType * formIn,
 XmlDouble * offsetVIn,
 DoublePositiveType * scaleUIn,
 DoublePositiveType * scaleVIn,
 XmlBoolean * turnedVIn,
 XmlDouble * DiameterMinorIn,
 XmlDouble * DiameterMajorIn,
 AxisType * AxisIn,
 LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn) :
  SurfaceCoreBaseType(
    formIn)
{
  offsetV = offsetVIn;
  scaleU = scaleUIn;
  scaleV = scaleVIn;
  turnedV = turnedVIn;
  DiameterMinor = DiameterMinorIn;
  DiameterMajor = DiameterMajorIn;
  Axis = AxisIn;
  LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;
}

Torus23CoreType::~Torus23CoreType()
{
  #ifndef NODESTRUCT
  delete offsetV;
  delete scaleU;
  delete scaleV;
  delete turnedV;
  delete DiameterMinor;
  delete DiameterMajor;
  delete Axis;
  delete LatitudeLongitudeSweep;
  #endif
}

void Torus23CoreType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (offsetV)
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
      fprintf(outFile, "offsetV=\"");
      offsetV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleU)
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
      fprintf(outFile, "scaleU=\"");
      scaleU->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (scaleV)
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
      fprintf(outFile, "scaleV=\"");
      scaleV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (turnedV)
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
      fprintf(outFile, "turnedV=\"");
      turnedV->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DiameterMinor");
  DiameterMinor->printSelf(outFile);
  fprintf(outFile, "</DiameterMinor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DiameterMajor");
  DiameterMajor->printSelf(outFile);
  fprintf(outFile, "</DiameterMajor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<LatitudeLongitudeSweep");
  LatitudeLongitudeSweep->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</LatitudeLongitudeSweep>\n");
  doSpaces(-INDENT, outFile);
}

bool Torus23CoreType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "form")
        {
          Attr23CoreEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in Torus23CoreType\n");
              returnValue = true;
              break;
            }
          formVal = new Attr23CoreEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in Torus23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "offsetV")
        {
          XmlDouble * offsetVVal;
          if (offsetV)
            {
              fprintf(stderr, "two values for offsetV in Torus23CoreType\n");
              returnValue = true;
              break;
            }
          offsetVVal = new XmlDouble(decl->val.c_str());
          if (offsetVVal->bad)
            {
              delete offsetVVal;
              fprintf(stderr, "bad value %s for offsetV in Torus23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            offsetV = offsetVVal;
        }
      else if (decl->name == "scaleU")
        {
          DoublePositiveType * scaleUVal;
          if (scaleU)
            {
              fprintf(stderr, "two values for scaleU in Torus23CoreType\n");
              returnValue = true;
              break;
            }
          scaleUVal = new DoublePositiveType(decl->val.c_str());
          if (scaleUVal->bad)
            {
              delete scaleUVal;
              fprintf(stderr, "bad value %s for scaleU in Torus23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleU = scaleUVal;
        }
      else if (decl->name == "scaleV")
        {
          DoublePositiveType * scaleVVal;
          if (scaleV)
            {
              fprintf(stderr, "two values for scaleV in Torus23CoreType\n");
              returnValue = true;
              break;
            }
          scaleVVal = new DoublePositiveType(decl->val.c_str());
          if (scaleVVal->bad)
            {
              delete scaleVVal;
              fprintf(stderr, "bad value %s for scaleV in Torus23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            scaleV = scaleVVal;
        }
      else if (decl->name == "turnedV")
        {
          XmlBoolean * turnedVVal;
          if (turnedV)
            {
              fprintf(stderr, "two values for turnedV in Torus23CoreType\n");
              returnValue = true;
              break;
            }
          turnedVVal = new XmlBoolean(decl->val.c_str());
          if (turnedVVal->bad)
            {
              delete turnedVVal;
              fprintf(stderr, "bad value %s for turnedV in Torus23CoreType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            turnedV = turnedVVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Torus23CoreType\n");
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
      delete form;
      form = 0;
      delete offsetV;
      offsetV = 0;
      delete scaleU;
      scaleU = 0;
      delete scaleV;
      scaleV = 0;
      delete turnedV;
      turnedV = 0;
    }
  return returnValue;
}

XmlDouble * Torus23CoreType::getoffsetV()
{return offsetV;}

void Torus23CoreType::setoffsetV(XmlDouble * offsetVIn)
{offsetV = offsetVIn;}

DoublePositiveType * Torus23CoreType::getscaleU()
{return scaleU;}

void Torus23CoreType::setscaleU(DoublePositiveType * scaleUIn)
{scaleU = scaleUIn;}

DoublePositiveType * Torus23CoreType::getscaleV()
{return scaleV;}

void Torus23CoreType::setscaleV(DoublePositiveType * scaleVIn)
{scaleV = scaleVIn;}

XmlBoolean * Torus23CoreType::getturnedV()
{return turnedV;}

void Torus23CoreType::setturnedV(XmlBoolean * turnedVIn)
{turnedV = turnedVIn;}

XmlDouble * Torus23CoreType::getDiameterMinor()
{return DiameterMinor;}

void Torus23CoreType::setDiameterMinor(XmlDouble * DiameterMinorIn)
{DiameterMinor = DiameterMinorIn;}

XmlDouble * Torus23CoreType::getDiameterMajor()
{return DiameterMajor;}

void Torus23CoreType::setDiameterMajor(XmlDouble * DiameterMajorIn)
{DiameterMajor = DiameterMajorIn;}

AxisType * Torus23CoreType::getAxis()
{return Axis;}

void Torus23CoreType::setAxis(AxisType * AxisIn)
{Axis = AxisIn;}

LatitudeLongitudeSweepType * Torus23CoreType::getLatitudeLongitudeSweep()
{return LatitudeLongitudeSweep;}

void Torus23CoreType::setLatitudeLongitudeSweep(LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn)
{LatitudeLongitudeSweep = LatitudeLongitudeSweepIn;}

/* ***************************************************************** */

/* class Torus23Type

*/

Torus23Type::Torus23Type() :
  SurfaceBaseType()
{
  Torus23Core = 0;
  Transform = 0;
}

Torus23Type::Torus23Type(
 AttributesType * AttributesIn,
 Torus23CoreType * Torus23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    AttributesIn)
{
  Torus23Core = Torus23CoreIn;
  Transform = TransformIn;
}

Torus23Type::Torus23Type(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 Torus23CoreType * Torus23CoreIn,
 ElementReferenceType * TransformIn) :
  SurfaceBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Torus23Core = Torus23CoreIn;
  Transform = TransformIn;
}

Torus23Type::~Torus23Type()
{
  #ifndef NODESTRUCT
  delete Torus23Core;
  delete Transform;
  #endif
}

void Torus23Type::printSelf(FILE * outFile)
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  fprintf(outFile, "<Torus23Core");
  Torus23Core->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Torus23Core>\n");
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool Torus23Type::badAttributes(
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
              fprintf(stderr, "two values for id in Torus23Type\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in Torus23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in Torus23Type\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in Torus23Type\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Torus23Type\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in Torus23Type\n");
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
      delete label;
      label = 0;
    }
  return returnValue;
}

Torus23CoreType * Torus23Type::getTorus23Core()
{return Torus23Core;}

void Torus23Type::setTorus23Core(Torus23CoreType * Torus23CoreIn)
{Torus23Core = Torus23CoreIn;}

ElementReferenceType * Torus23Type::getTransform()
{return Transform;}

void Torus23Type::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class TriangleVertexNormalType

*/

TriangleVertexNormalType::TriangleVertexNormalType() :
  UnitVectorType()
{
  vertex = 0;
}

TriangleVertexNormalType::TriangleVertexNormalType(
 XmlDouble * aXmlDouble) :
  UnitVectorType(aXmlDouble)
{
  vertex = 0;
}

TriangleVertexNormalType::TriangleVertexNormalType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 ValidityEnumType * validityIn,
 I2Type * vertexIn,
 XmlNonNegativeInteger * xDecimalPlacesIn,
 XmlNonNegativeInteger * xSignificantFiguresIn,
 ValidityEnumType * xValidityIn,
 XmlNonNegativeInteger * yDecimalPlacesIn,
 XmlNonNegativeInteger * ySignificantFiguresIn,
 ValidityEnumType * yValidityIn,
 XmlNonNegativeInteger * zDecimalPlacesIn,
 XmlNonNegativeInteger * zSignificantFiguresIn,
 ValidityEnumType * zValidityIn,
 XmlDouble * aXmlDouble) :
  UnitVectorType(aXmlDouble)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  vertex = vertexIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

TriangleVertexNormalType::~TriangleVertexNormalType()
{
  #ifndef NODESTRUCT
  delete vertex;
  #endif
}

void TriangleVertexNormalType::printName(FILE * outFile)
{
  fprintf(outFile, "TriangleVertexNormalType");
}

void TriangleVertexNormalType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  TriangleVertexNormalTypeCheck();
  if (bad)
    {
      fprintf(stderr, "TriangleVertexNormalTypeCheck failed\n");
      exit(1);
    }
  if (decimalPlaces)
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
      fprintf(outFile, "decimalPlaces=\"");
      decimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (linearUnit)
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
      fprintf(outFile, "linearUnit=\"");
      linearUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (significantFigures)
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
      fprintf(outFile, "significantFigures=\"");
      significantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (validity)
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
      fprintf(outFile, "validity=\"");
      validity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (vertex)
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
      fprintf(outFile, "vertex=\"");
      vertex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"vertex\" missing\n");
      exit(1);
    }
  if (xDecimalPlaces)
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
      fprintf(outFile, "xDecimalPlaces=\"");
      xDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (xSignificantFigures)
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
      fprintf(outFile, "xSignificantFigures=\"");
      xSignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (xValidity)
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
      fprintf(outFile, "xValidity=\"");
      xValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (yDecimalPlaces)
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
      fprintf(outFile, "yDecimalPlaces=\"");
      yDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (ySignificantFigures)
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
      fprintf(outFile, "ySignificantFigures=\"");
      ySignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (yValidity)
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
      fprintf(outFile, "yValidity=\"");
      yValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zDecimalPlaces)
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
      fprintf(outFile, "zDecimalPlaces=\"");
      zDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zSignificantFigures)
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
      fprintf(outFile, "zSignificantFigures=\"");
      zSignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zValidity)
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
      fprintf(outFile, "zValidity=\"");
      zValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  ListDoubleType::printSelf(outFile);
}

bool TriangleVertexNormalType::TriangleVertexNormalTypeCheck()
{
  UnitVectorTypeCheck();
  return bad;
}

bool TriangleVertexNormalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            linearUnit = linearUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            significantFigures = significantFiguresVal;
        }
      else if (decl->name == "validity")
        {
          ValidityEnumType * validityVal;
          if (validity)
            {
              fprintf(stderr, "two values for validity in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->val.c_str());
          if (validityVal->bad)
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            validity = validityVal;
        }
      else if (decl->name == "vertex")
        {
          I2Type * vertexVal;
          if (vertex)
            {
              fprintf(stderr, "two values for vertex in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          vertexVal = new I2Type(decl->val.c_str());
          if (vertexVal->bad)
            {
              delete vertexVal;
              fprintf(stderr, "bad value %s for vertex in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            vertex = vertexVal;
        }
      else if (decl->name == "xDecimalPlaces")
        {
          XmlNonNegativeInteger * xDecimalPlacesVal;
          if (xDecimalPlaces)
            {
              fprintf(stderr, "two values for xDecimalPlaces in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xDecimalPlacesVal->bad)
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xDecimalPlaces = xDecimalPlacesVal;
        }
      else if (decl->name == "xSignificantFigures")
        {
          XmlNonNegativeInteger * xSignificantFiguresVal;
          if (xSignificantFigures)
            {
              fprintf(stderr, "two values for xSignificantFigures in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xSignificantFiguresVal->bad)
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xSignificantFigures = xSignificantFiguresVal;
        }
      else if (decl->name == "xValidity")
        {
          ValidityEnumType * xValidityVal;
          if (xValidity)
            {
              fprintf(stderr, "two values for xValidity in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->val.c_str());
          if (xValidityVal->bad)
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xValidity = xValidityVal;
        }
      else if (decl->name == "yDecimalPlaces")
        {
          XmlNonNegativeInteger * yDecimalPlacesVal;
          if (yDecimalPlaces)
            {
              fprintf(stderr, "two values for yDecimalPlaces in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (yDecimalPlacesVal->bad)
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yDecimalPlaces = yDecimalPlacesVal;
        }
      else if (decl->name == "ySignificantFigures")
        {
          XmlNonNegativeInteger * ySignificantFiguresVal;
          if (ySignificantFigures)
            {
              fprintf(stderr, "two values for ySignificantFigures in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (ySignificantFiguresVal->bad)
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            ySignificantFigures = ySignificantFiguresVal;
        }
      else if (decl->name == "yValidity")
        {
          ValidityEnumType * yValidityVal;
          if (yValidity)
            {
              fprintf(stderr, "two values for yValidity in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->val.c_str());
          if (yValidityVal->bad)
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yValidity = yValidityVal;
        }
      else if (decl->name == "zDecimalPlaces")
        {
          XmlNonNegativeInteger * zDecimalPlacesVal;
          if (zDecimalPlaces)
            {
              fprintf(stderr, "two values for zDecimalPlaces in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zDecimalPlacesVal->bad)
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zDecimalPlaces = zDecimalPlacesVal;
        }
      else if (decl->name == "zSignificantFigures")
        {
          XmlNonNegativeInteger * zSignificantFiguresVal;
          if (zSignificantFigures)
            {
              fprintf(stderr, "two values for zSignificantFigures in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zSignificantFiguresVal->bad)
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zSignificantFigures = zSignificantFiguresVal;
        }
      else if (decl->name == "zValidity")
        {
          ValidityEnumType * zValidityVal;
          if (zValidity)
            {
              fprintf(stderr, "two values for zValidity in TriangleVertexNormalType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->val.c_str());
          if (zValidityVal->bad)
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in TriangleVertexNormalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TriangleVertexNormalType\n");
          returnValue = true;
          break;
        }
    }
  if (vertex == 0)
    {
      fprintf(stderr, "required attribute \"vertex\" missing in TriangleVertexNormalType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete decimalPlaces;
      decimalPlaces = 0;
      delete linearUnit;
      linearUnit = 0;
      delete significantFigures;
      significantFigures = 0;
      delete validity;
      validity = 0;
      delete vertex;
      vertex = 0;
      delete xDecimalPlaces;
      xDecimalPlaces = 0;
      delete xSignificantFigures;
      xSignificantFigures = 0;
      delete xValidity;
      xValidity = 0;
      delete yDecimalPlaces;
      yDecimalPlaces = 0;
      delete ySignificantFigures;
      ySignificantFigures = 0;
      delete yValidity;
      yValidity = 0;
      delete zDecimalPlaces;
      zDecimalPlaces = 0;
      delete zSignificantFigures;
      zSignificantFigures = 0;
      delete zValidity;
      zValidity = 0;
    }
  return returnValue;
}

I2Type * TriangleVertexNormalType::getvertex()
{return vertex;}

void TriangleVertexNormalType::setvertex(I2Type * vertexIn)
{vertex = vertexIn;}

/* ***************************************************************** */

/* class TriangleVertexNormalTypeLisd

*/

TriangleVertexNormalTypeLisd::TriangleVertexNormalTypeLisd() {}

TriangleVertexNormalTypeLisd::TriangleVertexNormalTypeLisd(TriangleVertexNormalType * aTriangleVertexNormalType)
{
  push_back(aTriangleVertexNormalType);
}

TriangleVertexNormalTypeLisd::~TriangleVertexNormalTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TriangleVertexNormalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TriangleVertexNormalTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class MeshTriangleCor_1214_Type

*/

MeshTriangleCor_1214_Type::MeshTriangleCor_1214_Type()
{
  MeshTriangleCor_1214_TypePair = 0;
}

MeshTriangleCor_1214_Type::MeshTriangleCor_1214_Type(
 MeshTriangleCor_1214_TypeChoicePair * MeshTriangleCor_1214_TypePairIn)
{
  MeshTriangleCor_1214_TypePair = MeshTriangleCor_1214_TypePairIn;
}

MeshTriangleCor_1214_Type::~MeshTriangleCor_1214_Type()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCor_1214_TypePair;
  #endif
}

void MeshTriangleCor_1214_Type::printSelf(FILE * outFile)
{
  MeshTriangleCor_1214_TypePair->printSelf(outFile);
}

MeshTriangleCor_1214_TypeChoicePair * MeshTriangleCor_1214_Type::getMeshTriangleCor_1214_TypePair()
{return MeshTriangleCor_1214_TypePair;}

void MeshTriangleCor_1214_Type::setMeshTriangleCor_1214_TypePair(MeshTriangleCor_1214_TypeChoicePair * MeshTriangleCor_1214_TypePairIn)
{MeshTriangleCor_1214_TypePair = MeshTriangleCor_1214_TypePairIn;}

/* ***************************************************************** */

/* class MeshTriangleCor_1214_TypeChoicePair

*/

MeshTriangleCor_1214_TypeChoicePair::MeshTriangleCor_1214_TypeChoicePair() {}

MeshTriangleCor_1214_TypeChoicePair::MeshTriangleCor_1214_TypeChoicePair(
 whichOne MeshTriangleCor_1214_TypeTypeIn,
 MeshTriangleCor_1214_TypeVal MeshTriangleCor_1214_TypeValueIn)
{
  MeshTriangleCor_1214_TypeType = MeshTriangleCor_1214_TypeTypeIn;
  MeshTriangleCor_1214_TypeValue = MeshTriangleCor_1214_TypeValueIn;
}

MeshTriangleCor_1214_TypeChoicePair::~MeshTriangleCor_1214_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeshTriangleCor_1214_TypeType == TrianglesE)
    delete MeshTriangleCor_1214_TypeValue.Triangles;
  else if (MeshTriangleCor_1214_TypeType == TrianglesBinaryE)
    delete MeshTriangleCor_1214_TypeValue.TrianglesBinary;
  #endif
}

void MeshTriangleCor_1214_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1214_TypeType == TrianglesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Triangles");
      MeshTriangleCor_1214_TypeValue.Triangles->printSelf(outFile);
      fprintf(outFile, "</Triangles>\n");
    }
  else if (MeshTriangleCor_1214_TypeType == TrianglesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesBinary");
      MeshTriangleCor_1214_TypeValue.TrianglesBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesBinary>\n");
    }
}

/* ***************************************************************** */

/* class MeshTriangleCor_1215_Type

*/

MeshTriangleCor_1215_Type::MeshTriangleCor_1215_Type()
{
  MeshTriangleCor_1215_TypePair = 0;
}

MeshTriangleCor_1215_Type::MeshTriangleCor_1215_Type(
 MeshTriangleCor_1215_TypeChoicePair * MeshTriangleCor_1215_TypePairIn)
{
  MeshTriangleCor_1215_TypePair = MeshTriangleCor_1215_TypePairIn;
}

MeshTriangleCor_1215_Type::~MeshTriangleCor_1215_Type()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCor_1215_TypePair;
  #endif
}

void MeshTriangleCor_1215_Type::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1215_TypePair)
    {
      MeshTriangleCor_1215_TypePair->printSelf(outFile);
    }
}

MeshTriangleCor_1215_TypeChoicePair * MeshTriangleCor_1215_Type::getMeshTriangleCor_1215_TypePair()
{return MeshTriangleCor_1215_TypePair;}

void MeshTriangleCor_1215_Type::setMeshTriangleCor_1215_TypePair(MeshTriangleCor_1215_TypeChoicePair * MeshTriangleCor_1215_TypePairIn)
{MeshTriangleCor_1215_TypePair = MeshTriangleCor_1215_TypePairIn;}

/* ***************************************************************** */

/* class MeshTriangleCor_1215_TypeChoicePair

*/

MeshTriangleCor_1215_TypeChoicePair::MeshTriangleCor_1215_TypeChoicePair() {}

MeshTriangleCor_1215_TypeChoicePair::MeshTriangleCor_1215_TypeChoicePair(
 whichOne MeshTriangleCor_1215_TypeTypeIn,
 MeshTriangleCor_1215_TypeVal MeshTriangleCor_1215_TypeValueIn)
{
  MeshTriangleCor_1215_TypeType = MeshTriangleCor_1215_TypeTypeIn;
  MeshTriangleCor_1215_TypeValue = MeshTriangleCor_1215_TypeValueIn;
}

MeshTriangleCor_1215_TypeChoicePair::~MeshTriangleCor_1215_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeshTriangleCor_1215_TypeType == NeighboursE)
    delete MeshTriangleCor_1215_TypeValue.Neighbours;
  else if (MeshTriangleCor_1215_TypeType == NeighboursBinaryE)
    delete MeshTriangleCor_1215_TypeValue.NeighboursBinary;
  #endif
}

void MeshTriangleCor_1215_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1215_TypeType == NeighboursE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Neighbours");
      MeshTriangleCor_1215_TypeValue.Neighbours->printSelf(outFile);
      fprintf(outFile, "</Neighbours>\n");
    }
  else if (MeshTriangleCor_1215_TypeType == NeighboursBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NeighboursBinary");
      MeshTriangleCor_1215_TypeValue.NeighboursBinary->printSelf(outFile);
      fprintf(outFile, "</NeighboursBinary>\n");
    }
}

/* ***************************************************************** */

/* class MeshTriangleCor_1216_Type

*/

MeshTriangleCor_1216_Type::MeshTriangleCor_1216_Type()
{
  MeshTriangleCor_1216_TypePair = 0;
}

MeshTriangleCor_1216_Type::MeshTriangleCor_1216_Type(
 MeshTriangleCor_1216_TypeChoicePair * MeshTriangleCor_1216_TypePairIn)
{
  MeshTriangleCor_1216_TypePair = MeshTriangleCor_1216_TypePairIn;
}

MeshTriangleCor_1216_Type::~MeshTriangleCor_1216_Type()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCor_1216_TypePair;
  #endif
}

void MeshTriangleCor_1216_Type::printSelf(FILE * outFile)
{
  MeshTriangleCor_1216_TypePair->printSelf(outFile);
}

MeshTriangleCor_1216_TypeChoicePair * MeshTriangleCor_1216_Type::getMeshTriangleCor_1216_TypePair()
{return MeshTriangleCor_1216_TypePair;}

void MeshTriangleCor_1216_Type::setMeshTriangleCor_1216_TypePair(MeshTriangleCor_1216_TypeChoicePair * MeshTriangleCor_1216_TypePairIn)
{MeshTriangleCor_1216_TypePair = MeshTriangleCor_1216_TypePairIn;}

/* ***************************************************************** */

/* class MeshTriangleCor_1216_TypeChoicePair

*/

MeshTriangleCor_1216_TypeChoicePair::MeshTriangleCor_1216_TypeChoicePair() {}

MeshTriangleCor_1216_TypeChoicePair::MeshTriangleCor_1216_TypeChoicePair(
 whichOne MeshTriangleCor_1216_TypeTypeIn,
 MeshTriangleCor_1216_TypeVal MeshTriangleCor_1216_TypeValueIn)
{
  MeshTriangleCor_1216_TypeType = MeshTriangleCor_1216_TypeTypeIn;
  MeshTriangleCor_1216_TypeValue = MeshTriangleCor_1216_TypeValueIn;
}

MeshTriangleCor_1216_TypeChoicePair::~MeshTriangleCor_1216_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeshTriangleCor_1216_TypeType == VerticesE)
    delete MeshTriangleCor_1216_TypeValue.Vertices;
  else if (MeshTriangleCor_1216_TypeType == VerticesBinaryE)
    delete MeshTriangleCor_1216_TypeValue.VerticesBinary;
  #endif
}

void MeshTriangleCor_1216_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1216_TypeType == VerticesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Vertices");
      MeshTriangleCor_1216_TypeValue.Vertices->printSelf(outFile);
      fprintf(outFile, "</Vertices>\n");
    }
  else if (MeshTriangleCor_1216_TypeType == VerticesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VerticesBinary");
      MeshTriangleCor_1216_TypeValue.VerticesBinary->printSelf(outFile);
      fprintf(outFile, "</VerticesBinary>\n");
    }
}

/* ***************************************************************** */

/* class MeshTriangleCor_1217_Type

*/

MeshTriangleCor_1217_Type::MeshTriangleCor_1217_Type()
{
  MeshTriangleCor_1217_TypePair = 0;
}

MeshTriangleCor_1217_Type::MeshTriangleCor_1217_Type(
 MeshTriangleCor_1217_TypeChoicePair * MeshTriangleCor_1217_TypePairIn)
{
  MeshTriangleCor_1217_TypePair = MeshTriangleCor_1217_TypePairIn;
}

MeshTriangleCor_1217_Type::~MeshTriangleCor_1217_Type()
{
  #ifndef NODESTRUCT
  delete MeshTriangleCor_1217_TypePair;
  #endif
}

void MeshTriangleCor_1217_Type::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1217_TypePair)
    {
      MeshTriangleCor_1217_TypePair->printSelf(outFile);
    }
}

MeshTriangleCor_1217_TypeChoicePair * MeshTriangleCor_1217_Type::getMeshTriangleCor_1217_TypePair()
{return MeshTriangleCor_1217_TypePair;}

void MeshTriangleCor_1217_Type::setMeshTriangleCor_1217_TypePair(MeshTriangleCor_1217_TypeChoicePair * MeshTriangleCor_1217_TypePairIn)
{MeshTriangleCor_1217_TypePair = MeshTriangleCor_1217_TypePairIn;}

/* ***************************************************************** */

/* class MeshTriangleCor_1217_TypeChoicePair

*/

MeshTriangleCor_1217_TypeChoicePair::MeshTriangleCor_1217_TypeChoicePair() {}

MeshTriangleCor_1217_TypeChoicePair::MeshTriangleCor_1217_TypeChoicePair(
 whichOne MeshTriangleCor_1217_TypeTypeIn,
 MeshTriangleCor_1217_TypeVal MeshTriangleCor_1217_TypeValueIn)
{
  MeshTriangleCor_1217_TypeType = MeshTriangleCor_1217_TypeTypeIn;
  MeshTriangleCor_1217_TypeValue = MeshTriangleCor_1217_TypeValueIn;
}

MeshTriangleCor_1217_TypeChoicePair::~MeshTriangleCor_1217_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeshTriangleCor_1217_TypeType == NormalsE)
    delete MeshTriangleCor_1217_TypeValue.Normals;
  else if (MeshTriangleCor_1217_TypeType == NormalsBinaryE)
    delete MeshTriangleCor_1217_TypeValue.NormalsBinary;
  #endif
}

void MeshTriangleCor_1217_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MeshTriangleCor_1217_TypeType == NormalsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normals");
      MeshTriangleCor_1217_TypeValue.Normals->printSelf(outFile);
      fprintf(outFile, "</Normals>\n");
    }
  else if (MeshTriangleCor_1217_TypeType == NormalsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NormalsBinary");
      MeshTriangleCor_1217_TypeValue.NormalsBinary->printSelf(outFile);
      fprintf(outFile, "</NormalsBinary>\n");
    }
}

/* ***************************************************************** */

/* class MeshTriangleTyp_1218_Type

*/

MeshTriangleTyp_1218_Type::MeshTriangleTyp_1218_Type()
{
  MeshTriangleTyp_1218_TypePair = 0;
}

MeshTriangleTyp_1218_Type::MeshTriangleTyp_1218_Type(
 MeshTriangleTyp_1218_TypeChoicePair * MeshTriangleTyp_1218_TypePairIn)
{
  MeshTriangleTyp_1218_TypePair = MeshTriangleTyp_1218_TypePairIn;
}

MeshTriangleTyp_1218_Type::~MeshTriangleTyp_1218_Type()
{
  #ifndef NODESTRUCT
  delete MeshTriangleTyp_1218_TypePair;
  #endif
}

void MeshTriangleTyp_1218_Type::printSelf(FILE * outFile)
{
  if (MeshTriangleTyp_1218_TypePair)
    {
      MeshTriangleTyp_1218_TypePair->printSelf(outFile);
    }
}

MeshTriangleTyp_1218_TypeChoicePair * MeshTriangleTyp_1218_Type::getMeshTriangleTyp_1218_TypePair()
{return MeshTriangleTyp_1218_TypePair;}

void MeshTriangleTyp_1218_Type::setMeshTriangleTyp_1218_TypePair(MeshTriangleTyp_1218_TypeChoicePair * MeshTriangleTyp_1218_TypePairIn)
{MeshTriangleTyp_1218_TypePair = MeshTriangleTyp_1218_TypePairIn;}

/* ***************************************************************** */

/* class MeshTriangleTyp_1218_TypeChoicePair

*/

MeshTriangleTyp_1218_TypeChoicePair::MeshTriangleTyp_1218_TypeChoicePair() {}

MeshTriangleTyp_1218_TypeChoicePair::MeshTriangleTyp_1218_TypeChoicePair(
 whichOne MeshTriangleTyp_1218_TypeTypeIn,
 MeshTriangleTyp_1218_TypeVal MeshTriangleTyp_1218_TypeValueIn)
{
  MeshTriangleTyp_1218_TypeType = MeshTriangleTyp_1218_TypeTypeIn;
  MeshTriangleTyp_1218_TypeValue = MeshTriangleTyp_1218_TypeValueIn;
}

MeshTriangleTyp_1218_TypeChoicePair::~MeshTriangleTyp_1218_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeshTriangleTyp_1218_TypeType == NormalsSpecialE)
    delete MeshTriangleTyp_1218_TypeValue.NormalsSpecial;
  else if (MeshTriangleTyp_1218_TypeType == NormalsSpecialBinaryE)
    delete MeshTriangleTyp_1218_TypeValue.NormalsSpecialBinary;
  #endif
}

void MeshTriangleTyp_1218_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MeshTriangleTyp_1218_TypeType == NormalsSpecialE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NormalsSpecial");
      MeshTriangleTyp_1218_TypeValue.NormalsSpecial->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NormalsSpecial>\n");
    }
  else if (MeshTriangleTyp_1218_TypeType == NormalsSpecialBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NormalsSpecialBinary");
      MeshTriangleTyp_1218_TypeValue.NormalsSpecialBinary->printSelf(outFile);
      fprintf(outFile, "</NormalsSpecialBinary>\n");
    }
}

/* ***************************************************************** */

/* class Nurbs12CoreType_1219_Type

*/

Nurbs12CoreType_1219_Type::Nurbs12CoreType_1219_Type()
{
  Nurbs12CoreType_1219_TypePair = 0;
}

Nurbs12CoreType_1219_Type::Nurbs12CoreType_1219_Type(
 Nurbs12CoreType_1219_TypeChoicePair * Nurbs12CoreType_1219_TypePairIn)
{
  Nurbs12CoreType_1219_TypePair = Nurbs12CoreType_1219_TypePairIn;
}

Nurbs12CoreType_1219_Type::~Nurbs12CoreType_1219_Type()
{
  #ifndef NODESTRUCT
  delete Nurbs12CoreType_1219_TypePair;
  #endif
}

void Nurbs12CoreType_1219_Type::printSelf(FILE * outFile)
{
  Nurbs12CoreType_1219_TypePair->printSelf(outFile);
}

Nurbs12CoreType_1219_TypeChoicePair * Nurbs12CoreType_1219_Type::getNurbs12CoreType_1219_TypePair()
{return Nurbs12CoreType_1219_TypePair;}

void Nurbs12CoreType_1219_Type::setNurbs12CoreType_1219_TypePair(Nurbs12CoreType_1219_TypeChoicePair * Nurbs12CoreType_1219_TypePairIn)
{Nurbs12CoreType_1219_TypePair = Nurbs12CoreType_1219_TypePairIn;}

/* ***************************************************************** */

/* class Nurbs12CoreType_1219_TypeChoicePair

*/

Nurbs12CoreType_1219_TypeChoicePair::Nurbs12CoreType_1219_TypeChoicePair() {}

Nurbs12CoreType_1219_TypeChoicePair::Nurbs12CoreType_1219_TypeChoicePair(
 whichOne Nurbs12CoreType_1219_TypeTypeIn,
 Nurbs12CoreType_1219_TypeVal Nurbs12CoreType_1219_TypeValueIn)
{
  Nurbs12CoreType_1219_TypeType = Nurbs12CoreType_1219_TypeTypeIn;
  Nurbs12CoreType_1219_TypeValue = Nurbs12CoreType_1219_TypeValueIn;
}

Nurbs12CoreType_1219_TypeChoicePair::~Nurbs12CoreType_1219_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Nurbs12CoreType_1219_TypeType == CPsE)
    delete Nurbs12CoreType_1219_TypeValue.CPs;
  else if (Nurbs12CoreType_1219_TypeType == CPsBinaryE)
    delete Nurbs12CoreType_1219_TypeValue.CPsBinary;
  #endif
}

void Nurbs12CoreType_1219_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Nurbs12CoreType_1219_TypeType == CPsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPs");
      Nurbs12CoreType_1219_TypeValue.CPs->printSelf(outFile);
      fprintf(outFile, "</CPs>\n");
    }
  else if (Nurbs12CoreType_1219_TypeType == CPsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPsBinary");
      Nurbs12CoreType_1219_TypeValue.CPsBinary->printSelf(outFile);
      fprintf(outFile, "</CPsBinary>\n");
    }
}

/* ***************************************************************** */

/* class Nurbs13CoreType_1220_Type

*/

Nurbs13CoreType_1220_Type::Nurbs13CoreType_1220_Type()
{
  Nurbs13CoreType_1220_TypePair = 0;
}

Nurbs13CoreType_1220_Type::Nurbs13CoreType_1220_Type(
 Nurbs13CoreType_1220_TypeChoicePair * Nurbs13CoreType_1220_TypePairIn)
{
  Nurbs13CoreType_1220_TypePair = Nurbs13CoreType_1220_TypePairIn;
}

Nurbs13CoreType_1220_Type::~Nurbs13CoreType_1220_Type()
{
  #ifndef NODESTRUCT
  delete Nurbs13CoreType_1220_TypePair;
  #endif
}

void Nurbs13CoreType_1220_Type::printSelf(FILE * outFile)
{
  Nurbs13CoreType_1220_TypePair->printSelf(outFile);
}

Nurbs13CoreType_1220_TypeChoicePair * Nurbs13CoreType_1220_Type::getNurbs13CoreType_1220_TypePair()
{return Nurbs13CoreType_1220_TypePair;}

void Nurbs13CoreType_1220_Type::setNurbs13CoreType_1220_TypePair(Nurbs13CoreType_1220_TypeChoicePair * Nurbs13CoreType_1220_TypePairIn)
{Nurbs13CoreType_1220_TypePair = Nurbs13CoreType_1220_TypePairIn;}

/* ***************************************************************** */

/* class Nurbs13CoreType_1220_TypeChoicePair

*/

Nurbs13CoreType_1220_TypeChoicePair::Nurbs13CoreType_1220_TypeChoicePair() {}

Nurbs13CoreType_1220_TypeChoicePair::Nurbs13CoreType_1220_TypeChoicePair(
 whichOne Nurbs13CoreType_1220_TypeTypeIn,
 Nurbs13CoreType_1220_TypeVal Nurbs13CoreType_1220_TypeValueIn)
{
  Nurbs13CoreType_1220_TypeType = Nurbs13CoreType_1220_TypeTypeIn;
  Nurbs13CoreType_1220_TypeValue = Nurbs13CoreType_1220_TypeValueIn;
}

Nurbs13CoreType_1220_TypeChoicePair::~Nurbs13CoreType_1220_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Nurbs13CoreType_1220_TypeType == CPsE)
    delete Nurbs13CoreType_1220_TypeValue.CPs;
  else if (Nurbs13CoreType_1220_TypeType == CPsBinaryE)
    delete Nurbs13CoreType_1220_TypeValue.CPsBinary;
  #endif
}

void Nurbs13CoreType_1220_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Nurbs13CoreType_1220_TypeType == CPsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPs");
      Nurbs13CoreType_1220_TypeValue.CPs->printSelf(outFile);
      fprintf(outFile, "</CPs>\n");
    }
  else if (Nurbs13CoreType_1220_TypeType == CPsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPsBinary");
      Nurbs13CoreType_1220_TypeValue.CPsBinary->printSelf(outFile);
      fprintf(outFile, "</CPsBinary>\n");
    }
}

/* ***************************************************************** */

/* class Nurbs23CoreType_1221_Type

*/

Nurbs23CoreType_1221_Type::Nurbs23CoreType_1221_Type()
{
  Nurbs23CoreType_1221_TypePair = 0;
}

Nurbs23CoreType_1221_Type::Nurbs23CoreType_1221_Type(
 Nurbs23CoreType_1221_TypeChoicePair * Nurbs23CoreType_1221_TypePairIn)
{
  Nurbs23CoreType_1221_TypePair = Nurbs23CoreType_1221_TypePairIn;
}

Nurbs23CoreType_1221_Type::~Nurbs23CoreType_1221_Type()
{
  #ifndef NODESTRUCT
  delete Nurbs23CoreType_1221_TypePair;
  #endif
}

void Nurbs23CoreType_1221_Type::printSelf(FILE * outFile)
{
  Nurbs23CoreType_1221_TypePair->printSelf(outFile);
}

Nurbs23CoreType_1221_TypeChoicePair * Nurbs23CoreType_1221_Type::getNurbs23CoreType_1221_TypePair()
{return Nurbs23CoreType_1221_TypePair;}

void Nurbs23CoreType_1221_Type::setNurbs23CoreType_1221_TypePair(Nurbs23CoreType_1221_TypeChoicePair * Nurbs23CoreType_1221_TypePairIn)
{Nurbs23CoreType_1221_TypePair = Nurbs23CoreType_1221_TypePairIn;}

/* ***************************************************************** */

/* class Nurbs23CoreType_1221_TypeChoicePair

*/

Nurbs23CoreType_1221_TypeChoicePair::Nurbs23CoreType_1221_TypeChoicePair() {}

Nurbs23CoreType_1221_TypeChoicePair::Nurbs23CoreType_1221_TypeChoicePair(
 whichOne Nurbs23CoreType_1221_TypeTypeIn,
 Nurbs23CoreType_1221_TypeVal Nurbs23CoreType_1221_TypeValueIn)
{
  Nurbs23CoreType_1221_TypeType = Nurbs23CoreType_1221_TypeTypeIn;
  Nurbs23CoreType_1221_TypeValue = Nurbs23CoreType_1221_TypeValueIn;
}

Nurbs23CoreType_1221_TypeChoicePair::~Nurbs23CoreType_1221_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Nurbs23CoreType_1221_TypeType == CPsE)
    delete Nurbs23CoreType_1221_TypeValue.CPs;
  else if (Nurbs23CoreType_1221_TypeType == CPsBinaryE)
    delete Nurbs23CoreType_1221_TypeValue.CPsBinary;
  #endif
}

void Nurbs23CoreType_1221_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Nurbs23CoreType_1221_TypeType == CPsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPs");
      Nurbs23CoreType_1221_TypeValue.CPs->printSelf(outFile);
      fprintf(outFile, "</CPs>\n");
    }
  else if (Nurbs23CoreType_1221_TypeType == CPsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CPsBinary");
      Nurbs23CoreType_1221_TypeValue.CPsBinary->printSelf(outFile);
      fprintf(outFile, "</CPsBinary>\n");
    }
}

/* ***************************************************************** */

/* class Polyline12CoreT_1222_Type

*/

Polyline12CoreT_1222_Type::Polyline12CoreT_1222_Type()
{
  Polyline12CoreT_1222_TypePair = 0;
}

Polyline12CoreT_1222_Type::Polyline12CoreT_1222_Type(
 Polyline12CoreT_1222_TypeChoicePair * Polyline12CoreT_1222_TypePairIn)
{
  Polyline12CoreT_1222_TypePair = Polyline12CoreT_1222_TypePairIn;
}

Polyline12CoreT_1222_Type::~Polyline12CoreT_1222_Type()
{
  #ifndef NODESTRUCT
  delete Polyline12CoreT_1222_TypePair;
  #endif
}

void Polyline12CoreT_1222_Type::printSelf(FILE * outFile)
{
  Polyline12CoreT_1222_TypePair->printSelf(outFile);
}

Polyline12CoreT_1222_TypeChoicePair * Polyline12CoreT_1222_Type::getPolyline12CoreT_1222_TypePair()
{return Polyline12CoreT_1222_TypePair;}

void Polyline12CoreT_1222_Type::setPolyline12CoreT_1222_TypePair(Polyline12CoreT_1222_TypeChoicePair * Polyline12CoreT_1222_TypePairIn)
{Polyline12CoreT_1222_TypePair = Polyline12CoreT_1222_TypePairIn;}

/* ***************************************************************** */

/* class Polyline12CoreT_1222_TypeChoicePair

*/

Polyline12CoreT_1222_TypeChoicePair::Polyline12CoreT_1222_TypeChoicePair() {}

Polyline12CoreT_1222_TypeChoicePair::Polyline12CoreT_1222_TypeChoicePair(
 whichOne Polyline12CoreT_1222_TypeTypeIn,
 Polyline12CoreT_1222_TypeVal Polyline12CoreT_1222_TypeValueIn)
{
  Polyline12CoreT_1222_TypeType = Polyline12CoreT_1222_TypeTypeIn;
  Polyline12CoreT_1222_TypeValue = Polyline12CoreT_1222_TypeValueIn;
}

Polyline12CoreT_1222_TypeChoicePair::~Polyline12CoreT_1222_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Polyline12CoreT_1222_TypeType == PointsE)
    delete Polyline12CoreT_1222_TypeValue.Points;
  else if (Polyline12CoreT_1222_TypeType == PointsBinaryE)
    delete Polyline12CoreT_1222_TypeValue.PointsBinary;
  #endif
}

void Polyline12CoreT_1222_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Polyline12CoreT_1222_TypeType == PointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      Polyline12CoreT_1222_TypeValue.Points->printSelf(outFile);
      fprintf(outFile, "</Points>\n");
    }
  else if (Polyline12CoreT_1222_TypeType == PointsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsBinary");
      Polyline12CoreT_1222_TypeValue.PointsBinary->printSelf(outFile);
      fprintf(outFile, "</PointsBinary>\n");
    }
}

/* ***************************************************************** */

/* class Polyline13CoreT_1223_Type

*/

Polyline13CoreT_1223_Type::Polyline13CoreT_1223_Type()
{
  Polyline13CoreT_1223_TypePair = 0;
}

Polyline13CoreT_1223_Type::Polyline13CoreT_1223_Type(
 Polyline13CoreT_1223_TypeChoicePair * Polyline13CoreT_1223_TypePairIn)
{
  Polyline13CoreT_1223_TypePair = Polyline13CoreT_1223_TypePairIn;
}

Polyline13CoreT_1223_Type::~Polyline13CoreT_1223_Type()
{
  #ifndef NODESTRUCT
  delete Polyline13CoreT_1223_TypePair;
  #endif
}

void Polyline13CoreT_1223_Type::printSelf(FILE * outFile)
{
  Polyline13CoreT_1223_TypePair->printSelf(outFile);
}

Polyline13CoreT_1223_TypeChoicePair * Polyline13CoreT_1223_Type::getPolyline13CoreT_1223_TypePair()
{return Polyline13CoreT_1223_TypePair;}

void Polyline13CoreT_1223_Type::setPolyline13CoreT_1223_TypePair(Polyline13CoreT_1223_TypeChoicePair * Polyline13CoreT_1223_TypePairIn)
{Polyline13CoreT_1223_TypePair = Polyline13CoreT_1223_TypePairIn;}

/* ***************************************************************** */

/* class Polyline13CoreT_1223_TypeChoicePair

*/

Polyline13CoreT_1223_TypeChoicePair::Polyline13CoreT_1223_TypeChoicePair() {}

Polyline13CoreT_1223_TypeChoicePair::Polyline13CoreT_1223_TypeChoicePair(
 whichOne Polyline13CoreT_1223_TypeTypeIn,
 Polyline13CoreT_1223_TypeVal Polyline13CoreT_1223_TypeValueIn)
{
  Polyline13CoreT_1223_TypeType = Polyline13CoreT_1223_TypeTypeIn;
  Polyline13CoreT_1223_TypeValue = Polyline13CoreT_1223_TypeValueIn;
}

Polyline13CoreT_1223_TypeChoicePair::~Polyline13CoreT_1223_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Polyline13CoreT_1223_TypeType == PointsE)
    delete Polyline13CoreT_1223_TypeValue.Points;
  else if (Polyline13CoreT_1223_TypeType == PointsBinaryE)
    delete Polyline13CoreT_1223_TypeValue.PointsBinary;
  #endif
}

void Polyline13CoreT_1223_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Polyline13CoreT_1223_TypeType == PointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      Polyline13CoreT_1223_TypeValue.Points->printSelf(outFile);
      fprintf(outFile, "</Points>\n");
    }
  else if (Polyline13CoreT_1223_TypeType == PointsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsBinary");
      Polyline13CoreT_1223_TypeValue.PointsBinary->printSelf(outFile);
      fprintf(outFile, "</PointsBinary>\n");
    }
}

/* ***************************************************************** */

