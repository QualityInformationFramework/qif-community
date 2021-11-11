/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "VisualizationClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class AlignmentEnumType

*/

AlignmentEnumType::AlignmentEnumType() :
  XmlString()
{
}

AlignmentEnumType::AlignmentEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ALIGNMENT_LEFT") &&
           strcmp(val.c_str(), "ALIGNMENT_RIGHT") &&
           strcmp(val.c_str(), "ALIGNMENT_CENTER"));
}

AlignmentEnumType::~AlignmentEnumType() {}

bool AlignmentEnumType::AlignmentEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ALIGNMENT_LEFT") &&
          strcmp(val.c_str(), "ALIGNMENT_RIGHT") &&
          strcmp(val.c_str(), "ALIGNMENT_CENTER"));
}

void AlignmentEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "AlignmentEnumType");
}

void AlignmentEnumType::printSelf(FILE * outFile)
{
  if (AlignmentEnumTypeIsBad())
    {
      fprintf(stderr, "bad AlignmentEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void AlignmentEnumType::oPrintSelf(FILE * outFile)
{
  if (AlignmentEnumTypeIsBad())
    {
      fprintf(stderr, "bad AlignmentEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class AnnotationViewSetType

*/

AnnotationViewSetType::AnnotationViewSetType()
{
  n = 0;
  AnnotationView = 0;
}

AnnotationViewSetType::AnnotationViewSetType(
 AnnotationViewTypeLisd * AnnotationViewIn)
{
  n = 0;
  AnnotationView = AnnotationViewIn;
}

AnnotationViewSetType::AnnotationViewSetType(
 NaturalType * nIn,
 AnnotationViewTypeLisd * AnnotationViewIn)
{
  n = nIn;
  AnnotationView = AnnotationViewIn;
}

AnnotationViewSetType::~AnnotationViewSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete AnnotationView;
  #endif
}

void AnnotationViewSetType::printSelf(FILE * outFile)
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
    if (!AnnotationView)
      {
        fprintf(stderr, "AnnotationView list is missing\n");
        exit(1);
      }
    if (AnnotationView->size() == 0)
      {
        fprintf(stderr, "AnnotationView list is empty\n");
        exit(1);
      }
    std::list<AnnotationViewType *>::iterator iter;
    for (iter = AnnotationView->begin();
         iter != AnnotationView->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<AnnotationView");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</AnnotationView>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AnnotationViewSetType::badAttributes(
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
              fprintf(stderr, "two values for n in AnnotationViewSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AnnotationViewSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AnnotationViewSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AnnotationViewSetType\n");
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

NaturalType * AnnotationViewSetType::getn()
{return n;}

void AnnotationViewSetType::setn(NaturalType * nIn)
{n = nIn;}

AnnotationViewTypeLisd * AnnotationViewSetType::getAnnotationView()
{return AnnotationView;}

void AnnotationViewSetType::setAnnotationView(AnnotationViewTypeLisd * AnnotationViewIn)
{AnnotationView = AnnotationViewIn;}

/* ***************************************************************** */

/* class AnnotationViewType

*/

AnnotationViewType::AnnotationViewType() :
  NodeWithIdBaseType()
{
  Normal = 0;
  Direction = 0;
}

AnnotationViewType::AnnotationViewType(
 AttributesType * AttributesIn,
 UnitVectorType * NormalIn,
 UnitVectorType * DirectionIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  Normal = NormalIn;
  Direction = DirectionIn;
}

AnnotationViewType::AnnotationViewType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 UnitVectorType * NormalIn,
 UnitVectorType * DirectionIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Normal = NormalIn;
  Direction = DirectionIn;
}

AnnotationViewType::~AnnotationViewType()
{
  #ifndef NODESTRUCT
  delete Normal;
  delete Direction;
  #endif
}

void AnnotationViewType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Direction");
  Direction->printSelf(outFile);
  fprintf(outFile, "</Direction>\n");
  doSpaces(-INDENT, outFile);
}

bool AnnotationViewType::badAttributes(
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
              fprintf(stderr, "two values for id in AnnotationViewType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AnnotationViewType\n",
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
              fprintf(stderr, "two values for label in AnnotationViewType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in AnnotationViewType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AnnotationViewType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AnnotationViewType\n");
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

UnitVectorType * AnnotationViewType::getNormal()
{return Normal;}

void AnnotationViewType::setNormal(UnitVectorType * NormalIn)
{Normal = NormalIn;}

UnitVectorType * AnnotationViewType::getDirection()
{return Direction;}

void AnnotationViewType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class AnnotationViewTypeLisd

*/

AnnotationViewTypeLisd::AnnotationViewTypeLisd() {}

AnnotationViewTypeLisd::AnnotationViewTypeLisd(AnnotationViewType * aAnnotationViewType)
{
  push_back(aAnnotationViewType);
}

AnnotationViewTypeLisd::~AnnotationViewTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AnnotationViewType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AnnotationViewTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Area2dType

*/

Area2dType::Area2dType()
{
  Area2dTypePair = 0;
}

Area2dType::Area2dType(
 Area2dTypeChoicePair * Area2dTypePairIn)
{
  Area2dTypePair = Area2dTypePairIn;
}

Area2dType::~Area2dType()
{
  #ifndef NODESTRUCT
  delete Area2dTypePair;
  #endif
}

void Area2dType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  Area2dTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

Area2dTypeChoicePair * Area2dType::getArea2dTypePair()
{return Area2dTypePair;}

void Area2dType::setArea2dTypePair(Area2dTypeChoicePair * Area2dTypePairIn)
{Area2dTypePair = Area2dTypePairIn;}

/* ***************************************************************** */

/* class Area2dTypeChoicePair

*/

Area2dTypeChoicePair::Area2dTypeChoicePair() {}

Area2dTypeChoicePair::Area2dTypeChoicePair(
 whichOne Area2dTypeTypeIn,
 Area2dTypeVal Area2dTypeValueIn)
{
  Area2dTypeType = Area2dTypeTypeIn;
  Area2dTypeValue = Area2dTypeValueIn;
}

Area2dTypeChoicePair::~Area2dTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Area2dTypeType == LoopsE)
    delete Area2dTypeValue.Loops;
  else if (Area2dTypeType == TriangulationE)
    delete Area2dTypeValue.Triangulation;
  #endif
}

void Area2dTypeChoicePair::printSelf(FILE * outFile)
{
  if (Area2dTypeType == LoopsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Loops");
      Area2dTypeValue.Loops->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Loops>\n");
    }
  else if (Area2dTypeType == TriangulationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Triangulation");
      Area2dTypeValue.Triangulation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Triangulation>\n");
    }
}

/* ***************************************************************** */

/* class Area2dTypeLisd

*/

Area2dTypeLisd::Area2dTypeLisd() {}

Area2dTypeLisd::Area2dTypeLisd(Area2dType * aArea2dType)
{
  push_back(aArea2dType);
}

Area2dTypeLisd::~Area2dTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Area2dType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Area2dTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Areas2dType

*/

Areas2dType::Areas2dType()
{
  n = 0;
  Area = 0;
}

Areas2dType::Areas2dType(
 Area2dTypeLisd * AreaIn)
{
  n = 0;
  Area = AreaIn;
}

Areas2dType::Areas2dType(
 NaturalType * nIn,
 Area2dTypeLisd * AreaIn)
{
  n = nIn;
  Area = AreaIn;
}

Areas2dType::~Areas2dType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Area;
  #endif
}

void Areas2dType::printSelf(FILE * outFile)
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
    if (!Area)
      {
        fprintf(stderr, "Area list is missing\n");
        exit(1);
      }
    if (Area->size() == 0)
      {
        fprintf(stderr, "Area list is empty\n");
        exit(1);
      }
    std::list<Area2dType *>::iterator iter;
    for (iter = Area->begin();
         iter != Area->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Area");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Area>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Areas2dType::badAttributes(
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
              fprintf(stderr, "two values for n in Areas2dType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in Areas2dType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Areas2dType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in Areas2dType\n");
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

NaturalType * Areas2dType::getn()
{return n;}

void Areas2dType::setn(NaturalType * nIn)
{n = nIn;}

Area2dTypeLisd * Areas2dType::getArea()
{return Area;}

void Areas2dType::setArea(Area2dTypeLisd * AreaIn)
{Area = AreaIn;}

/* ***************************************************************** */

/* class CameraFormEnumType

*/

CameraFormEnumType::CameraFormEnumType() :
  XmlString()
{
}

CameraFormEnumType::CameraFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGRAPHIC") &&
           strcmp(val.c_str(), "PERSPECTIVE"));
}

CameraFormEnumType::~CameraFormEnumType() {}

bool CameraFormEnumType::CameraFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGRAPHIC") &&
          strcmp(val.c_str(), "PERSPECTIVE"));
}

void CameraFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "CameraFormEnumType");
}

void CameraFormEnumType::printSelf(FILE * outFile)
{
  if (CameraFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad CameraFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void CameraFormEnumType::oPrintSelf(FILE * outFile)
{
  if (CameraFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad CameraFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class CameraSetType

*/

CameraSetType::CameraSetType()
{
  n = 0;
  Camera = 0;
}

CameraSetType::CameraSetType(
 CameraTypeLisd * CameraIn)
{
  n = 0;
  Camera = CameraIn;
}

CameraSetType::CameraSetType(
 NaturalType * nIn,
 CameraTypeLisd * CameraIn)
{
  n = nIn;
  Camera = CameraIn;
}

CameraSetType::~CameraSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Camera;
  #endif
}

void CameraSetType::printSelf(FILE * outFile)
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
    if (!Camera)
      {
        fprintf(stderr, "Camera list is missing\n");
        exit(1);
      }
    if (Camera->size() == 0)
      {
        fprintf(stderr, "Camera list is empty\n");
        exit(1);
      }
    std::list<CameraType *>::iterator iter;
    for (iter = Camera->begin();
         iter != Camera->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Camera");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Camera>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CameraSetType::badAttributes(
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
              fprintf(stderr, "two values for n in CameraSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CameraSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CameraSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CameraSetType\n");
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

NaturalType * CameraSetType::getn()
{return n;}

void CameraSetType::setn(NaturalType * nIn)
{n = nIn;}

CameraTypeLisd * CameraSetType::getCamera()
{return Camera;}

void CameraSetType::setCamera(CameraTypeLisd * CameraIn)
{Camera = CameraIn;}

/* ***************************************************************** */

/* class CameraType

*/

CameraType::CameraType() :
  NodeWithIdBaseType()
{
  form = 0;
  ViewPlaneOrigin = 0;
  Orientation = 0;
  Ratio = 0;
  Near = 0;
  Far = 0;
  Height = 0;
}

CameraType::CameraType(
 AttributesType * AttributesIn,
 PointSimpleType * ViewPlaneOriginIn,
 QuaternionType * OrientationIn,
 XmlDouble * RatioIn,
 LinearValueType * NearIn,
 LinearValueType * FarIn,
 XmlDouble * HeightIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  form = 0;
  ViewPlaneOrigin = ViewPlaneOriginIn;
  Orientation = OrientationIn;
  Ratio = RatioIn;
  Near = NearIn;
  Far = FarIn;
  Height = HeightIn;
}

CameraType::CameraType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 CameraFormEnumType * formIn,
 PointSimpleType * ViewPlaneOriginIn,
 QuaternionType * OrientationIn,
 XmlDouble * RatioIn,
 LinearValueType * NearIn,
 LinearValueType * FarIn,
 XmlDouble * HeightIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  form = formIn;
  ViewPlaneOrigin = ViewPlaneOriginIn;
  Orientation = OrientationIn;
  Ratio = RatioIn;
  Near = NearIn;
  Far = FarIn;
  Height = HeightIn;
}

CameraType::~CameraType()
{
  #ifndef NODESTRUCT
  delete form;
  delete ViewPlaneOrigin;
  delete Orientation;
  delete Ratio;
  delete Near;
  delete Far;
  delete Height;
  #endif
}

void CameraType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<ViewPlaneOrigin");
  ViewPlaneOrigin->printSelf(outFile);
  fprintf(outFile, "</ViewPlaneOrigin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Orientation");
  Orientation->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Orientation>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Ratio");
  Ratio->printSelf(outFile);
  fprintf(outFile, "</Ratio>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Near");
  Near->printSelf(outFile);
  fprintf(outFile, "</Near>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Far");
  Far->printSelf(outFile);
  fprintf(outFile, "</Far>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Height");
  Height->printSelf(outFile);
  fprintf(outFile, "</Height>\n");
  doSpaces(-INDENT, outFile);
}

bool CameraType::badAttributes(
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
          CameraFormEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in CameraType\n");
              returnValue = true;
              break;
            }
          formVal = new CameraFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in CameraType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in CameraType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CameraType\n",
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
              fprintf(stderr, "two values for label in CameraType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in CameraType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CameraType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in CameraType\n");
      returnValue = true;
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
      delete id;
      id = 0;
      delete label;
      label = 0;
    }
  return returnValue;
}

CameraFormEnumType * CameraType::getform()
{return form;}

void CameraType::setform(CameraFormEnumType * formIn)
{form = formIn;}

PointSimpleType * CameraType::getViewPlaneOrigin()
{return ViewPlaneOrigin;}

void CameraType::setViewPlaneOrigin(PointSimpleType * ViewPlaneOriginIn)
{ViewPlaneOrigin = ViewPlaneOriginIn;}

QuaternionType * CameraType::getOrientation()
{return Orientation;}

void CameraType::setOrientation(QuaternionType * OrientationIn)
{Orientation = OrientationIn;}

XmlDouble * CameraType::getRatio()
{return Ratio;}

void CameraType::setRatio(XmlDouble * RatioIn)
{Ratio = RatioIn;}

LinearValueType * CameraType::getNear()
{return Near;}

void CameraType::setNear(LinearValueType * NearIn)
{Near = NearIn;}

LinearValueType * CameraType::getFar()
{return Far;}

void CameraType::setFar(LinearValueType * FarIn)
{Far = FarIn;}

XmlDouble * CameraType::getHeight()
{return Height;}

void CameraType::setHeight(XmlDouble * HeightIn)
{Height = HeightIn;}

/* ***************************************************************** */

/* class CameraTypeLisd

*/

CameraTypeLisd::CameraTypeLisd() {}

CameraTypeLisd::CameraTypeLisd(CameraType * aCameraType)
{
  push_back(aCameraType);
}

CameraTypeLisd::~CameraTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CameraType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CameraTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class DisplayStyleFormEnumType

*/

DisplayStyleFormEnumType::DisplayStyleFormEnumType() :
  XmlString()
{
}

DisplayStyleFormEnumType::DisplayStyleFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "WIREFRAME") &&
           strcmp(val.c_str(), "ISOLINES") &&
           strcmp(val.c_str(), "ISOLINES_WITH_EDGES") &&
           strcmp(val.c_str(), "SHADING") &&
           strcmp(val.c_str(), "SHADING_WITH_EDGES"));
}

DisplayStyleFormEnumType::~DisplayStyleFormEnumType() {}

bool DisplayStyleFormEnumType::DisplayStyleFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "WIREFRAME") &&
          strcmp(val.c_str(), "ISOLINES") &&
          strcmp(val.c_str(), "ISOLINES_WITH_EDGES") &&
          strcmp(val.c_str(), "SHADING") &&
          strcmp(val.c_str(), "SHADING_WITH_EDGES"));
}

void DisplayStyleFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DisplayStyleFormEnumType");
}

void DisplayStyleFormEnumType::printSelf(FILE * outFile)
{
  if (DisplayStyleFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad DisplayStyleFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void DisplayStyleFormEnumType::oPrintSelf(FILE * outFile)
{
  if (DisplayStyleFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad DisplayStyleFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DisplayStyleGroupType

*/

DisplayStyleGroupType::DisplayStyleGroupType()
{
  Mode = 0;
  ComponentIds = 0;
  BodyIds = 0;
}

DisplayStyleGroupType::DisplayStyleGroupType(
 DisplayStyleModeType * ModeIn,
 ArrayReferenceFullType * ComponentIdsIn,
 ArrayReferenceFullType * BodyIdsIn)
{
  Mode = ModeIn;
  ComponentIds = ComponentIdsIn;
  BodyIds = BodyIdsIn;
}

DisplayStyleGroupType::~DisplayStyleGroupType()
{
  #ifndef NODESTRUCT
  delete Mode;
  delete ComponentIds;
  delete BodyIds;
  #endif
}

void DisplayStyleGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Mode");
  Mode->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Mode>\n");
  if (ComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentIds");
      ComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

DisplayStyleModeType * DisplayStyleGroupType::getMode()
{return Mode;}

void DisplayStyleGroupType::setMode(DisplayStyleModeType * ModeIn)
{Mode = ModeIn;}

ArrayReferenceFullType * DisplayStyleGroupType::getComponentIds()
{return ComponentIds;}

void DisplayStyleGroupType::setComponentIds(ArrayReferenceFullType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

ArrayReferenceFullType * DisplayStyleGroupType::getBodyIds()
{return BodyIds;}

void DisplayStyleGroupType::setBodyIds(ArrayReferenceFullType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

/* ***************************************************************** */

/* class DisplayStyleGroupTypeLisd

*/

DisplayStyleGroupTypeLisd::DisplayStyleGroupTypeLisd() {}

DisplayStyleGroupTypeLisd::DisplayStyleGroupTypeLisd(DisplayStyleGroupType * aDisplayStyleGroupType)
{
  push_back(aDisplayStyleGroupType);
}

DisplayStyleGroupTypeLisd::~DisplayStyleGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DisplayStyleGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DisplayStyleGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class DisplayStyleGroupsType

*/

DisplayStyleGroupsType::DisplayStyleGroupsType()
{
  n = 0;
  DisplayStyleGroup = 0;
}

DisplayStyleGroupsType::DisplayStyleGroupsType(
 DisplayStyleGroupTypeLisd * DisplayStyleGroupIn)
{
  n = 0;
  DisplayStyleGroup = DisplayStyleGroupIn;
}

DisplayStyleGroupsType::DisplayStyleGroupsType(
 NaturalType * nIn,
 DisplayStyleGroupTypeLisd * DisplayStyleGroupIn)
{
  n = nIn;
  DisplayStyleGroup = DisplayStyleGroupIn;
}

DisplayStyleGroupsType::~DisplayStyleGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DisplayStyleGroup;
  #endif
}

void DisplayStyleGroupsType::printSelf(FILE * outFile)
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
    if (!DisplayStyleGroup)
      {
        fprintf(stderr, "DisplayStyleGroup list is missing\n");
        exit(1);
      }
    if (DisplayStyleGroup->size() == 0)
      {
        fprintf(stderr, "DisplayStyleGroup list is empty\n");
        exit(1);
      }
    std::list<DisplayStyleGroupType *>::iterator iter;
    for (iter = DisplayStyleGroup->begin();
         iter != DisplayStyleGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DisplayStyleGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DisplayStyleGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DisplayStyleGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in DisplayStyleGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DisplayStyleGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DisplayStyleGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DisplayStyleGroupsType\n");
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

NaturalType * DisplayStyleGroupsType::getn()
{return n;}

void DisplayStyleGroupsType::setn(NaturalType * nIn)
{n = nIn;}

DisplayStyleGroupTypeLisd * DisplayStyleGroupsType::getDisplayStyleGroup()
{return DisplayStyleGroup;}

void DisplayStyleGroupsType::setDisplayStyleGroup(DisplayStyleGroupTypeLisd * DisplayStyleGroupIn)
{DisplayStyleGroup = DisplayStyleGroupIn;}

/* ***************************************************************** */

/* class DisplayStyleModeType

*/

DisplayStyleModeType::DisplayStyleModeType()
{
  Form = 0;
  Color = 0;
  Transparency = 0;
}

DisplayStyleModeType::DisplayStyleModeType(
 DisplayStyleFormEnumType * FormIn,
 ColorType * ColorIn,
 TransparencyType * TransparencyIn)
{
  Form = FormIn;
  Color = ColorIn;
  Transparency = TransparencyIn;
}

DisplayStyleModeType::~DisplayStyleModeType()
{
  #ifndef NODESTRUCT
  delete Form;
  delete Color;
  delete Transparency;
  #endif
}

void DisplayStyleModeType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Form");
  Form->printSelf(outFile);
  fprintf(outFile, "</Form>\n");
  if (Color)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Color");
      Color->printSelf(outFile);
      fprintf(outFile, "</Color>\n");
    }
  if (Transparency)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transparency");
      Transparency->printSelf(outFile);
      fprintf(outFile, "</Transparency>\n");
    }
  doSpaces(-INDENT, outFile);
}

DisplayStyleFormEnumType * DisplayStyleModeType::getForm()
{return Form;}

void DisplayStyleModeType::setForm(DisplayStyleFormEnumType * FormIn)
{Form = FormIn;}

ColorType * DisplayStyleModeType::getColor()
{return Color;}

void DisplayStyleModeType::setColor(ColorType * ColorIn)
{Color = ColorIn;}

TransparencyType * DisplayStyleModeType::getTransparency()
{return Transparency;}

void DisplayStyleModeType::setTransparency(TransparencyType * TransparencyIn)
{Transparency = TransparencyIn;}

/* ***************************************************************** */

/* class DisplayStyleSetType

*/

DisplayStyleSetType::DisplayStyleSetType()
{
  n = 0;
  DisplayStyle = 0;
}

DisplayStyleSetType::DisplayStyleSetType(
 DisplayStyleTypeLisd * DisplayStyleIn)
{
  n = 0;
  DisplayStyle = DisplayStyleIn;
}

DisplayStyleSetType::DisplayStyleSetType(
 NaturalType * nIn,
 DisplayStyleTypeLisd * DisplayStyleIn)
{
  n = nIn;
  DisplayStyle = DisplayStyleIn;
}

DisplayStyleSetType::~DisplayStyleSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DisplayStyle;
  #endif
}

void DisplayStyleSetType::printSelf(FILE * outFile)
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
    if (!DisplayStyle)
      {
        fprintf(stderr, "DisplayStyle list is missing\n");
        exit(1);
      }
    if (DisplayStyle->size() == 0)
      {
        fprintf(stderr, "DisplayStyle list is empty\n");
        exit(1);
      }
    std::list<DisplayStyleType *>::iterator iter;
    for (iter = DisplayStyle->begin();
         iter != DisplayStyle->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DisplayStyle");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DisplayStyle>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DisplayStyleSetType::badAttributes(
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
              fprintf(stderr, "two values for n in DisplayStyleSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DisplayStyleSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DisplayStyleSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DisplayStyleSetType\n");
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

NaturalType * DisplayStyleSetType::getn()
{return n;}

void DisplayStyleSetType::setn(NaturalType * nIn)
{n = nIn;}

DisplayStyleTypeLisd * DisplayStyleSetType::getDisplayStyle()
{return DisplayStyle;}

void DisplayStyleSetType::setDisplayStyle(DisplayStyleTypeLisd * DisplayStyleIn)
{DisplayStyle = DisplayStyleIn;}

/* ***************************************************************** */

/* class DisplayStyleType

*/

DisplayStyleType::DisplayStyleType() :
  NodeWithIdBaseType()
{
  Mode = 0;
  DisplayStyleGroups = 0;
}

DisplayStyleType::DisplayStyleType(
 AttributesType * AttributesIn,
 DisplayStyleModeType * ModeIn,
 DisplayStyleGroupsType * DisplayStyleGroupsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  Mode = ModeIn;
  DisplayStyleGroups = DisplayStyleGroupsIn;
}

DisplayStyleType::DisplayStyleType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 DisplayStyleModeType * ModeIn,
 DisplayStyleGroupsType * DisplayStyleGroupsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Mode = ModeIn;
  DisplayStyleGroups = DisplayStyleGroupsIn;
}

DisplayStyleType::~DisplayStyleType()
{
  #ifndef NODESTRUCT
  delete Mode;
  delete DisplayStyleGroups;
  #endif
}

void DisplayStyleType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Mode");
  Mode->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Mode>\n");
  if (DisplayStyleGroups)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DisplayStyleGroups");
      DisplayStyleGroups->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DisplayStyleGroups>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DisplayStyleType::badAttributes(
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
              fprintf(stderr, "two values for id in DisplayStyleType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DisplayStyleType\n",
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
              fprintf(stderr, "two values for label in DisplayStyleType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in DisplayStyleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DisplayStyleType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DisplayStyleType\n");
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

DisplayStyleModeType * DisplayStyleType::getMode()
{return Mode;}

void DisplayStyleType::setMode(DisplayStyleModeType * ModeIn)
{Mode = ModeIn;}

DisplayStyleGroupsType * DisplayStyleType::getDisplayStyleGroups()
{return DisplayStyleGroups;}

void DisplayStyleType::setDisplayStyleGroups(DisplayStyleGroupsType * DisplayStyleGroupsIn)
{DisplayStyleGroups = DisplayStyleGroupsIn;}

/* ***************************************************************** */

/* class DisplayStyleTypeLisd

*/

DisplayStyleTypeLisd::DisplayStyleTypeLisd() {}

DisplayStyleTypeLisd::DisplayStyleTypeLisd(DisplayStyleType * aDisplayStyleType)
{
  push_back(aDisplayStyleType);
}

DisplayStyleTypeLisd::~DisplayStyleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DisplayStyleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DisplayStyleTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ExplodedViewMoveGroupType

*/

ExplodedViewMoveGroupType::ExplodedViewMoveGroupType()
{
  ExplodedViewMov_1231 = 0;
  ComponentIds = 0;
  BodyIds = 0;
}

ExplodedViewMoveGroupType::ExplodedViewMoveGroupType(
 ExplodedViewMov_1231_Type * ExplodedViewMov_1231In,
 ArrayReferenceFullType * ComponentIdsIn,
 ArrayReferenceFullType * BodyIdsIn)
{
  ExplodedViewMov_1231 = ExplodedViewMov_1231In;
  ComponentIds = ComponentIdsIn;
  BodyIds = BodyIdsIn;
}

ExplodedViewMoveGroupType::~ExplodedViewMoveGroupType()
{
  #ifndef NODESTRUCT
  delete ExplodedViewMov_1231;
  delete ComponentIds;
  delete BodyIds;
  #endif
}

void ExplodedViewMoveGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ExplodedViewMov_1231->printSelf(outFile);
  if (ComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentIds");
      ComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

ExplodedViewMov_1231_Type * ExplodedViewMoveGroupType::getExplodedViewMov_1231()
{return ExplodedViewMov_1231;}

void ExplodedViewMoveGroupType::setExplodedViewMov_1231(ExplodedViewMov_1231_Type * ExplodedViewMov_1231In)
{ExplodedViewMov_1231 = ExplodedViewMov_1231In;}

ArrayReferenceFullType * ExplodedViewMoveGroupType::getComponentIds()
{return ComponentIds;}

void ExplodedViewMoveGroupType::setComponentIds(ArrayReferenceFullType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

ArrayReferenceFullType * ExplodedViewMoveGroupType::getBodyIds()
{return BodyIds;}

void ExplodedViewMoveGroupType::setBodyIds(ArrayReferenceFullType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

/* ***************************************************************** */

/* class ExplodedViewMoveGroupTypeLisd

*/

ExplodedViewMoveGroupTypeLisd::ExplodedViewMoveGroupTypeLisd() {}

ExplodedViewMoveGroupTypeLisd::ExplodedViewMoveGroupTypeLisd(ExplodedViewMoveGroupType * aExplodedViewMoveGroupType)
{
  push_back(aExplodedViewMoveGroupType);
}

ExplodedViewMoveGroupTypeLisd::~ExplodedViewMoveGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ExplodedViewMoveGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ExplodedViewMoveGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ExplodedViewMoveGroupsType

*/

ExplodedViewMoveGroupsType::ExplodedViewMoveGroupsType()
{
  n = 0;
  MoveGroup = 0;
}

ExplodedViewMoveGroupsType::ExplodedViewMoveGroupsType(
 ExplodedViewMoveGroupTypeLisd * MoveGroupIn)
{
  n = 0;
  MoveGroup = MoveGroupIn;
}

ExplodedViewMoveGroupsType::ExplodedViewMoveGroupsType(
 NaturalType * nIn,
 ExplodedViewMoveGroupTypeLisd * MoveGroupIn)
{
  n = nIn;
  MoveGroup = MoveGroupIn;
}

ExplodedViewMoveGroupsType::~ExplodedViewMoveGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete MoveGroup;
  #endif
}

void ExplodedViewMoveGroupsType::printSelf(FILE * outFile)
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
    if (!MoveGroup)
      {
        fprintf(stderr, "MoveGroup list is missing\n");
        exit(1);
      }
    if (MoveGroup->size() == 0)
      {
        fprintf(stderr, "MoveGroup list is empty\n");
        exit(1);
      }
    std::list<ExplodedViewMoveGroupType *>::iterator iter;
    for (iter = MoveGroup->begin();
         iter != MoveGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<MoveGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</MoveGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ExplodedViewMoveGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in ExplodedViewMoveGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ExplodedViewMoveGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExplodedViewMoveGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ExplodedViewMoveGroupsType\n");
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

NaturalType * ExplodedViewMoveGroupsType::getn()
{return n;}

void ExplodedViewMoveGroupsType::setn(NaturalType * nIn)
{n = nIn;}

ExplodedViewMoveGroupTypeLisd * ExplodedViewMoveGroupsType::getMoveGroup()
{return MoveGroup;}

void ExplodedViewMoveGroupsType::setMoveGroup(ExplodedViewMoveGroupTypeLisd * MoveGroupIn)
{MoveGroup = MoveGroupIn;}

/* ***************************************************************** */

/* class ExplodedViewRotateType

*/

ExplodedViewRotateType::ExplodedViewRotateType()
{
  Axis = 0;
  Angle = 0;
}

ExplodedViewRotateType::ExplodedViewRotateType(
 AxisType * AxisIn,
 AngularValueType * AngleIn)
{
  Axis = AxisIn;
  Angle = AngleIn;
}

ExplodedViewRotateType::~ExplodedViewRotateType()
{
  #ifndef NODESTRUCT
  delete Axis;
  delete Angle;
  #endif
}

void ExplodedViewRotateType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Angle");
  Angle->printSelf(outFile);
  fprintf(outFile, "</Angle>\n");
  doSpaces(-INDENT, outFile);
}

AxisType * ExplodedViewRotateType::getAxis()
{return Axis;}

void ExplodedViewRotateType::setAxis(AxisType * AxisIn)
{Axis = AxisIn;}

AngularValueType * ExplodedViewRotateType::getAngle()
{return Angle;}

void ExplodedViewRotateType::setAngle(AngularValueType * AngleIn)
{Angle = AngleIn;}

/* ***************************************************************** */

/* class ExplodedViewSetType

*/

ExplodedViewSetType::ExplodedViewSetType()
{
  n = 0;
  ExplodedView = 0;
}

ExplodedViewSetType::ExplodedViewSetType(
 ExplodedViewTypeLisd * ExplodedViewIn)
{
  n = 0;
  ExplodedView = ExplodedViewIn;
}

ExplodedViewSetType::ExplodedViewSetType(
 NaturalType * nIn,
 ExplodedViewTypeLisd * ExplodedViewIn)
{
  n = nIn;
  ExplodedView = ExplodedViewIn;
}

ExplodedViewSetType::~ExplodedViewSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ExplodedView;
  #endif
}

void ExplodedViewSetType::printSelf(FILE * outFile)
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
    if (!ExplodedView)
      {
        fprintf(stderr, "ExplodedView list is missing\n");
        exit(1);
      }
    if (ExplodedView->size() == 0)
      {
        fprintf(stderr, "ExplodedView list is empty\n");
        exit(1);
      }
    std::list<ExplodedViewType *>::iterator iter;
    for (iter = ExplodedView->begin();
         iter != ExplodedView->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ExplodedView");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ExplodedView>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ExplodedViewSetType::badAttributes(
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
              fprintf(stderr, "two values for n in ExplodedViewSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ExplodedViewSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExplodedViewSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ExplodedViewSetType\n");
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

NaturalType * ExplodedViewSetType::getn()
{return n;}

void ExplodedViewSetType::setn(NaturalType * nIn)
{n = nIn;}

ExplodedViewTypeLisd * ExplodedViewSetType::getExplodedView()
{return ExplodedView;}

void ExplodedViewSetType::setExplodedView(ExplodedViewTypeLisd * ExplodedViewIn)
{ExplodedView = ExplodedViewIn;}

/* ***************************************************************** */

/* class ExplodedViewTranslateType

*/

ExplodedViewTranslateType::ExplodedViewTranslateType()
{
  Direction = 0;
  Value = 0;
}

ExplodedViewTranslateType::ExplodedViewTranslateType(
 UnitVectorType * DirectionIn,
 LinearValueType * ValueIn)
{
  Direction = DirectionIn;
  Value = ValueIn;
}

ExplodedViewTranslateType::~ExplodedViewTranslateType()
{
  #ifndef NODESTRUCT
  delete Direction;
  delete Value;
  #endif
}

void ExplodedViewTranslateType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Direction");
  Direction->printSelf(outFile);
  fprintf(outFile, "</Direction>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * ExplodedViewTranslateType::getDirection()
{return Direction;}

void ExplodedViewTranslateType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

LinearValueType * ExplodedViewTranslateType::getValue()
{return Value;}

void ExplodedViewTranslateType::setValue(LinearValueType * ValueIn)
{Value = ValueIn;}

/* ***************************************************************** */

/* class ExplodedViewType

*/

ExplodedViewType::ExplodedViewType() :
  NodeWithIdBaseType()
{
  MoveGroups = 0;
}

ExplodedViewType::ExplodedViewType(
 AttributesType * AttributesIn,
 ExplodedViewMoveGroupsType * MoveGroupsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  MoveGroups = MoveGroupsIn;
}

ExplodedViewType::ExplodedViewType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ExplodedViewMoveGroupsType * MoveGroupsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  MoveGroups = MoveGroupsIn;
}

ExplodedViewType::~ExplodedViewType()
{
  #ifndef NODESTRUCT
  delete MoveGroups;
  #endif
}

void ExplodedViewType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<MoveGroups");
  MoveGroups->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</MoveGroups>\n");
  doSpaces(-INDENT, outFile);
}

bool ExplodedViewType::badAttributes(
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
              fprintf(stderr, "two values for id in ExplodedViewType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ExplodedViewType\n",
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
              fprintf(stderr, "two values for label in ExplodedViewType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ExplodedViewType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExplodedViewType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ExplodedViewType\n");
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

ExplodedViewMoveGroupsType * ExplodedViewType::getMoveGroups()
{return MoveGroups;}

void ExplodedViewType::setMoveGroups(ExplodedViewMoveGroupsType * MoveGroupsIn)
{MoveGroups = MoveGroupsIn;}

/* ***************************************************************** */

/* class ExplodedViewTypeLisd

*/

ExplodedViewTypeLisd::ExplodedViewTypeLisd() {}

ExplodedViewTypeLisd::ExplodedViewTypeLisd(ExplodedViewType * aExplodedViewType)
{
  push_back(aExplodedViewType);
}

ExplodedViewTypeLisd::~ExplodedViewTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ExplodedViewType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ExplodedViewTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class FontType

*/

FontType::FontType()
{
  bold = 0;
  index = 0;
  italic = 0;
  underline = 0;
  Attributes = 0;
  Name = 0;
  Size = 0;
  Alignment = 0;
}

FontType::FontType(
 AttributesType * AttributesIn,
 XmlString * NameIn,
 NaturalType * SizeIn,
 AlignmentEnumType * AlignmentIn)
{
  bold = 0;
  index = 0;
  italic = 0;
  underline = 0;
  Attributes = AttributesIn;
  Name = NameIn;
  Size = SizeIn;
  Alignment = AlignmentIn;
}

FontType::FontType(
 XmlBoolean * boldIn,
 XmlUnsignedInt * indexIn,
 XmlBoolean * italicIn,
 XmlBoolean * underlineIn,
 AttributesType * AttributesIn,
 XmlString * NameIn,
 NaturalType * SizeIn,
 AlignmentEnumType * AlignmentIn)
{
  bold = boldIn;
  index = indexIn;
  italic = italicIn;
  underline = underlineIn;
  Attributes = AttributesIn;
  Name = NameIn;
  Size = SizeIn;
  Alignment = AlignmentIn;
}

FontType::~FontType()
{
  #ifndef NODESTRUCT
  delete bold;
  delete index;
  delete italic;
  delete underline;
  delete Attributes;
  delete Name;
  delete Size;
  delete Alignment;
  #endif
}

void FontType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (bold)
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
      fprintf(outFile, "bold=\"");
      bold->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (index)
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
      fprintf(outFile, "index=\"");
      index->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"index\" missing\n");
      exit(1);
    }
  if (italic)
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
      fprintf(outFile, "italic=\"");
      italic->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (underline)
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
      fprintf(outFile, "underline=\"");
      underline->oPrintSelf(outFile);
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
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Size");
  Size->printSelf(outFile);
  fprintf(outFile, "</Size>\n");
  if (Alignment)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Alignment");
      Alignment->printSelf(outFile);
      fprintf(outFile, "</Alignment>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FontType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "bold")
        {
          XmlBoolean * boldVal;
          if (bold)
            {
              fprintf(stderr, "two values for bold in FontType\n");
              returnValue = true;
              break;
            }
          boldVal = new XmlBoolean(decl->val.c_str());
          if (boldVal->bad)
            {
              delete boldVal;
              fprintf(stderr, "bad value %s for bold in FontType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            bold = boldVal;
        }
      else if (decl->name == "index")
        {
          XmlUnsignedInt * indexVal;
          if (index)
            {
              fprintf(stderr, "two values for index in FontType\n");
              returnValue = true;
              break;
            }
          indexVal = new XmlUnsignedInt(decl->val.c_str());
          if (indexVal->bad)
            {
              delete indexVal;
              fprintf(stderr, "bad value %s for index in FontType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            index = indexVal;
        }
      else if (decl->name == "italic")
        {
          XmlBoolean * italicVal;
          if (italic)
            {
              fprintf(stderr, "two values for italic in FontType\n");
              returnValue = true;
              break;
            }
          italicVal = new XmlBoolean(decl->val.c_str());
          if (italicVal->bad)
            {
              delete italicVal;
              fprintf(stderr, "bad value %s for italic in FontType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            italic = italicVal;
        }
      else if (decl->name == "underline")
        {
          XmlBoolean * underlineVal;
          if (underline)
            {
              fprintf(stderr, "two values for underline in FontType\n");
              returnValue = true;
              break;
            }
          underlineVal = new XmlBoolean(decl->val.c_str());
          if (underlineVal->bad)
            {
              delete underlineVal;
              fprintf(stderr, "bad value %s for underline in FontType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            underline = underlineVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FontType\n");
          returnValue = true;
          break;
        }
    }
  if (index == 0)
    {
      fprintf(stderr, "required attribute \"index\" missing in FontType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete bold;
      bold = 0;
      delete index;
      index = 0;
      delete italic;
      italic = 0;
      delete underline;
      underline = 0;
    }
  return returnValue;
}

XmlBoolean * FontType::getbold()
{return bold;}

void FontType::setbold(XmlBoolean * boldIn)
{bold = boldIn;}

XmlUnsignedInt * FontType::getindex()
{return index;}

void FontType::setindex(XmlUnsignedInt * indexIn)
{index = indexIn;}

XmlBoolean * FontType::getitalic()
{return italic;}

void FontType::setitalic(XmlBoolean * italicIn)
{italic = italicIn;}

XmlBoolean * FontType::getunderline()
{return underline;}

void FontType::setunderline(XmlBoolean * underlineIn)
{underline = underlineIn;}

AttributesType * FontType::getAttributes()
{return Attributes;}

void FontType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlString * FontType::getName()
{return Name;}

void FontType::setName(XmlString * NameIn)
{Name = NameIn;}

NaturalType * FontType::getSize()
{return Size;}

void FontType::setSize(NaturalType * SizeIn)
{Size = SizeIn;}

AlignmentEnumType * FontType::getAlignment()
{return Alignment;}

void FontType::setAlignment(AlignmentEnumType * AlignmentIn)
{Alignment = AlignmentIn;}

/* ***************************************************************** */

/* class FontTypeLisd

*/

FontTypeLisd::FontTypeLisd() {}

FontTypeLisd::FontTypeLisd(FontType * aFontType)
{
  push_back(aFontType);
}

FontTypeLisd::~FontTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<FontType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void FontTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class FontsType

*/

FontsType::FontsType()
{
  n = 0;
  Font = 0;
}

FontsType::FontsType(
 FontTypeLisd * FontIn)
{
  n = 0;
  Font = FontIn;
}

FontsType::FontsType(
 NaturalType * nIn,
 FontTypeLisd * FontIn)
{
  n = nIn;
  Font = FontIn;
}

FontsType::~FontsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Font;
  #endif
}

void FontsType::printSelf(FILE * outFile)
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
    if (!Font)
      {
        fprintf(stderr, "Font list is missing\n");
        exit(1);
      }
    if (Font->size() == 0)
      {
        fprintf(stderr, "Font list is empty\n");
        exit(1);
      }
    std::list<FontType *>::iterator iter;
    for (iter = Font->begin();
         iter != Font->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Font");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Font>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool FontsType::badAttributes(
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
              fprintf(stderr, "two values for n in FontsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in FontsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FontsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in FontsType\n");
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

NaturalType * FontsType::getn()
{return n;}

void FontsType::setn(NaturalType * nIn)
{n = nIn;}

FontTypeLisd * FontsType::getFont()
{return Font;}

void FontsType::setFont(FontTypeLisd * FontIn)
{Font = FontIn;}

/* ***************************************************************** */

/* class FrameBaseType

*/

FrameBaseType::FrameBaseType()
{}

FrameBaseType::~FrameBaseType() {}

void FrameBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/* ***************************************************************** */

/* class FrameBaseTypeLisd

*/

FrameBaseTypeLisd::FrameBaseTypeLisd() {}

FrameBaseTypeLisd::FrameBaseTypeLisd(FrameBaseType * aFrameBaseType)
{
  push_back(aFrameBaseType);
}

FrameBaseTypeLisd::~FrameBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<FrameBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void FrameBaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class FrameCircularType

*/

FrameCircularType::FrameCircularType() :
  FrameBaseType()
{
  crossed = 0;
  XY = 0;
  Radius = 0;
}

FrameCircularType::FrameCircularType(
 Point2dSimpleType * XYIn,
 XmlDouble * RadiusIn) :
  FrameBaseType()
{
  crossed = 0;
  XY = XYIn;
  Radius = RadiusIn;
}

FrameCircularType::FrameCircularType(
 XmlBoolean * crossedIn,
 Point2dSimpleType * XYIn,
 XmlDouble * RadiusIn) :
  FrameBaseType()
{
  crossed = crossedIn;
  XY = XYIn;
  Radius = RadiusIn;
}

FrameCircularType::~FrameCircularType()
{
  #ifndef NODESTRUCT
  delete crossed;
  delete XY;
  delete Radius;
  #endif
}

void FrameCircularType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (crossed)
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
      fprintf(outFile, "crossed=\"");
      crossed->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<XY");
  XY->printSelf(outFile);
  fprintf(outFile, "</XY>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Radius");
  Radius->printSelf(outFile);
  fprintf(outFile, "</Radius>\n");
  doSpaces(-INDENT, outFile);
}

bool FrameCircularType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "crossed")
        {
          XmlBoolean * crossedVal;
          if (crossed)
            {
              fprintf(stderr, "two values for crossed in FrameCircularType\n");
              returnValue = true;
              break;
            }
          crossedVal = new XmlBoolean(decl->val.c_str());
          if (crossedVal->bad)
            {
              delete crossedVal;
              fprintf(stderr, "bad value %s for crossed in FrameCircularType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            crossed = crossedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FrameCircularType\n");
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
      delete crossed;
      crossed = 0;
    }
  return returnValue;
}

XmlBoolean * FrameCircularType::getcrossed()
{return crossed;}

void FrameCircularType::setcrossed(XmlBoolean * crossedIn)
{crossed = crossedIn;}

Point2dSimpleType * FrameCircularType::getXY()
{return XY;}

void FrameCircularType::setXY(Point2dSimpleType * XYIn)
{XY = XYIn;}

XmlDouble * FrameCircularType::getRadius()
{return Radius;}

void FrameCircularType::setRadius(XmlDouble * RadiusIn)
{Radius = RadiusIn;}

/* ***************************************************************** */

/* class FrameFlagType

*/

FrameFlagType::FrameFlagType() :
  FrameRectangularType()
{
  right = 0;
}

FrameFlagType::FrameFlagType(
 Point2dSimpleType * XYIn,
 XmlDouble * WidthIn,
 XmlDouble * HeightIn) :
  FrameRectangularType(
    XYIn,
    WidthIn,
    HeightIn)
{
  right = 0;
}

FrameFlagType::FrameFlagType(
 Point2dSimpleType * XYIn,
 XmlDouble * WidthIn,
 XmlDouble * HeightIn,
 XmlBoolean * rightIn) :
  FrameRectangularType(
    XYIn,
    WidthIn,
    HeightIn)
{
  right = rightIn;
}

FrameFlagType::~FrameFlagType()
{
  #ifndef NODESTRUCT
  delete right;
  #endif
}

void FrameFlagType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (right)
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
      fprintf(outFile, "right=\"");
      right->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<XY");
  XY->printSelf(outFile);
  fprintf(outFile, "</XY>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Width");
  Width->printSelf(outFile);
  fprintf(outFile, "</Width>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Height");
  Height->printSelf(outFile);
  fprintf(outFile, "</Height>\n");
  doSpaces(-INDENT, outFile);
}

bool FrameFlagType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "right")
        {
          XmlBoolean * rightVal;
          if (right)
            {
              fprintf(stderr, "two values for right in FrameFlagType\n");
              returnValue = true;
              break;
            }
          rightVal = new XmlBoolean(decl->val.c_str());
          if (rightVal->bad)
            {
              delete rightVal;
              fprintf(stderr, "bad value %s for right in FrameFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            right = rightVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FrameFlagType\n");
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
      delete right;
      right = 0;
    }
  return returnValue;
}

XmlBoolean * FrameFlagType::getright()
{return right;}

void FrameFlagType::setright(XmlBoolean * rightIn)
{right = rightIn;}

/* ***************************************************************** */

/* class FrameHexagonalType

*/

FrameHexagonalType::FrameHexagonalType() :
  FrameBaseType()
{
  Point = 0;
}

FrameHexagonalType::FrameHexagonalType(
 Point2dSimpleTypeLisd * PointIn) :
  FrameBaseType()
{
  Point = PointIn;
}

FrameHexagonalType::~FrameHexagonalType()
{
  #ifndef NODESTRUCT
  delete Point;
  #endif
}

void FrameHexagonalType::printSelf(FILE * outFile)
{
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
    std::list<Point2dSimpleType *>::iterator iter;
    for (iter = Point->begin();
         iter != Point->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Point");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Point>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleTypeLisd * FrameHexagonalType::getPoint()
{return Point;}

void FrameHexagonalType::setPoint(Point2dSimpleTypeLisd * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class FrameIrregularFormType

*/

FrameIrregularFormType::FrameIrregularFormType() :
  FrameBaseType()
{
  Points = 0;
}

FrameIrregularFormType::FrameIrregularFormType(
 ArrayPoint2dType * PointsIn) :
  FrameBaseType()
{
  Points = PointsIn;
}

FrameIrregularFormType::~FrameIrregularFormType()
{
  #ifndef NODESTRUCT
  delete Points;
  #endif
}

void FrameIrregularFormType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Points");
  Points->printSelf(outFile);
  fprintf(outFile, "</Points>\n");
  doSpaces(-INDENT, outFile);
}

ArrayPoint2dType * FrameIrregularFormType::getPoints()
{return Points;}

void FrameIrregularFormType::setPoints(ArrayPoint2dType * PointsIn)
{Points = PointsIn;}

/* ***************************************************************** */

/* class FrameOctagonalType

*/

FrameOctagonalType::FrameOctagonalType() :
  FrameBaseType()
{
  Point = 0;
}

FrameOctagonalType::FrameOctagonalType(
 Point2dSimpleTypeLisd * PointIn) :
  FrameBaseType()
{
  Point = PointIn;
}

FrameOctagonalType::~FrameOctagonalType()
{
  #ifndef NODESTRUCT
  delete Point;
  #endif
}

void FrameOctagonalType::printSelf(FILE * outFile)
{
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
    std::list<Point2dSimpleType *>::iterator iter;
    for (iter = Point->begin();
         iter != Point->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Point");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Point>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleTypeLisd * FrameOctagonalType::getPoint()
{return Point;}

void FrameOctagonalType::setPoint(Point2dSimpleTypeLisd * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class FramePentagonalType

*/

FramePentagonalType::FramePentagonalType() :
  FrameBaseType()
{
  Point = 0;
}

FramePentagonalType::FramePentagonalType(
 Point2dSimpleTypeLisd * PointIn) :
  FrameBaseType()
{
  Point = PointIn;
}

FramePentagonalType::~FramePentagonalType()
{
  #ifndef NODESTRUCT
  delete Point;
  #endif
}

void FramePentagonalType::printSelf(FILE * outFile)
{
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
    std::list<Point2dSimpleType *>::iterator iter;
    for (iter = Point->begin();
         iter != Point->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Point");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Point>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleTypeLisd * FramePentagonalType::getPoint()
{return Point;}

void FramePentagonalType::setPoint(Point2dSimpleTypeLisd * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class FrameRectangularType

*/

FrameRectangularType::FrameRectangularType() :
  FrameBaseType()
{
  XY = 0;
  Width = 0;
  Height = 0;
}

FrameRectangularType::FrameRectangularType(
 Point2dSimpleType * XYIn,
 XmlDouble * WidthIn,
 XmlDouble * HeightIn) :
  FrameBaseType()
{
  XY = XYIn;
  Width = WidthIn;
  Height = HeightIn;
}

FrameRectangularType::~FrameRectangularType()
{
  #ifndef NODESTRUCT
  delete XY;
  delete Width;
  delete Height;
  #endif
}

void FrameRectangularType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<XY");
  XY->printSelf(outFile);
  fprintf(outFile, "</XY>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Width");
  Width->printSelf(outFile);
  fprintf(outFile, "</Width>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Height");
  Height->printSelf(outFile);
  fprintf(outFile, "</Height>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * FrameRectangularType::getXY()
{return XY;}

void FrameRectangularType::setXY(Point2dSimpleType * XYIn)
{XY = XYIn;}

XmlDouble * FrameRectangularType::getWidth()
{return Width;}

void FrameRectangularType::setWidth(XmlDouble * WidthIn)
{Width = WidthIn;}

XmlDouble * FrameRectangularType::getHeight()
{return Height;}

void FrameRectangularType::setHeight(XmlDouble * HeightIn)
{Height = HeightIn;}

/* ***************************************************************** */

/* class FrameTriangleType

*/

FrameTriangleType::FrameTriangleType() :
  FrameBaseType()
{
  Point = 0;
}

FrameTriangleType::FrameTriangleType(
 Point2dSimpleTypeLisd * PointIn) :
  FrameBaseType()
{
  Point = PointIn;
}

FrameTriangleType::~FrameTriangleType()
{
  #ifndef NODESTRUCT
  delete Point;
  #endif
}

void FrameTriangleType::printSelf(FILE * outFile)
{
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
    std::list<Point2dSimpleType *>::iterator iter;
    for (iter = Point->begin();
         iter != Point->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Point");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Point>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleTypeLisd * FrameTriangleType::getPoint()
{return Point;}

void FrameTriangleType::setPoint(Point2dSimpleTypeLisd * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class FrameWeldSymbolTailType

*/

FrameWeldSymbolTailType::FrameWeldSymbolTailType()
{
  UpperPoint = 0;
  LowerPoint = 0;
}

FrameWeldSymbolTailType::FrameWeldSymbolTailType(
 Point2dSimpleType * UpperPointIn,
 Point2dSimpleType * LowerPointIn)
{
  UpperPoint = UpperPointIn;
  LowerPoint = LowerPointIn;
}

FrameWeldSymbolTailType::~FrameWeldSymbolTailType()
{
  #ifndef NODESTRUCT
  delete UpperPoint;
  delete LowerPoint;
  #endif
}

void FrameWeldSymbolTailType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<UpperPoint");
  UpperPoint->printSelf(outFile);
  fprintf(outFile, "</UpperPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<LowerPoint");
  LowerPoint->printSelf(outFile);
  fprintf(outFile, "</LowerPoint>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * FrameWeldSymbolTailType::getUpperPoint()
{return UpperPoint;}

void FrameWeldSymbolTailType::setUpperPoint(Point2dSimpleType * UpperPointIn)
{UpperPoint = UpperPointIn;}

Point2dSimpleType * FrameWeldSymbolTailType::getLowerPoint()
{return LowerPoint;}

void FrameWeldSymbolTailType::setLowerPoint(Point2dSimpleType * LowerPointIn)
{LowerPoint = LowerPointIn;}

/* ***************************************************************** */

/* class FrameWeldSymbolType

*/

FrameWeldSymbolType::FrameWeldSymbolType() :
  FrameBaseType()
{
  ReferenceLineBeginPoint = 0;
  ReferenceLineEndPoint = 0;
  Tail = 0;
  MainSymbol = 0;
  SupplementarySymbol = 0;
  ArrowSideContourSymbol = 0;
  OtherSideContourSymbol = 0;
}

FrameWeldSymbolType::FrameWeldSymbolType(
 Point2dSimpleType * ReferenceLineBeginPointIn,
 Point2dSimpleType * ReferenceLineEndPointIn,
 FrameWeldSymbolTailType * TailIn,
 WeldMainSymbolType * MainSymbolIn,
 WeldSupplementarySymbolType * SupplementarySymbolIn,
 WeldContourSymbolType * ArrowSideContourSymbolIn,
 WeldContourSymbolType * OtherSideContourSymbolIn) :
  FrameBaseType()
{
  ReferenceLineBeginPoint = ReferenceLineBeginPointIn;
  ReferenceLineEndPoint = ReferenceLineEndPointIn;
  Tail = TailIn;
  MainSymbol = MainSymbolIn;
  SupplementarySymbol = SupplementarySymbolIn;
  ArrowSideContourSymbol = ArrowSideContourSymbolIn;
  OtherSideContourSymbol = OtherSideContourSymbolIn;
}

FrameWeldSymbolType::~FrameWeldSymbolType()
{
  #ifndef NODESTRUCT
  delete ReferenceLineBeginPoint;
  delete ReferenceLineEndPoint;
  delete Tail;
  delete MainSymbol;
  delete SupplementarySymbol;
  delete ArrowSideContourSymbol;
  delete OtherSideContourSymbol;
  #endif
}

void FrameWeldSymbolType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferenceLineBeginPoint");
  ReferenceLineBeginPoint->printSelf(outFile);
  fprintf(outFile, "</ReferenceLineBeginPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferenceLineEndPoint");
  ReferenceLineEndPoint->printSelf(outFile);
  fprintf(outFile, "</ReferenceLineEndPoint>\n");
  if (Tail)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Tail");
      Tail->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Tail>\n");
    }
  if (MainSymbol)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MainSymbol");
      MainSymbol->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MainSymbol>\n");
    }
  if (SupplementarySymbol)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SupplementarySymbol");
      SupplementarySymbol->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SupplementarySymbol>\n");
    }
  if (ArrowSideContourSymbol)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ArrowSideContourSymbol");
      ArrowSideContourSymbol->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ArrowSideContourSymbol>\n");
    }
  if (OtherSideContourSymbol)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherSideContourSymbol");
      OtherSideContourSymbol->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</OtherSideContourSymbol>\n");
    }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * FrameWeldSymbolType::getReferenceLineBeginPoint()
{return ReferenceLineBeginPoint;}

void FrameWeldSymbolType::setReferenceLineBeginPoint(Point2dSimpleType * ReferenceLineBeginPointIn)
{ReferenceLineBeginPoint = ReferenceLineBeginPointIn;}

Point2dSimpleType * FrameWeldSymbolType::getReferenceLineEndPoint()
{return ReferenceLineEndPoint;}

void FrameWeldSymbolType::setReferenceLineEndPoint(Point2dSimpleType * ReferenceLineEndPointIn)
{ReferenceLineEndPoint = ReferenceLineEndPointIn;}

FrameWeldSymbolTailType * FrameWeldSymbolType::getTail()
{return Tail;}

void FrameWeldSymbolType::setTail(FrameWeldSymbolTailType * TailIn)
{Tail = TailIn;}

WeldMainSymbolType * FrameWeldSymbolType::getMainSymbol()
{return MainSymbol;}

void FrameWeldSymbolType::setMainSymbol(WeldMainSymbolType * MainSymbolIn)
{MainSymbol = MainSymbolIn;}

WeldSupplementarySymbolType * FrameWeldSymbolType::getSupplementarySymbol()
{return SupplementarySymbol;}

void FrameWeldSymbolType::setSupplementarySymbol(WeldSupplementarySymbolType * SupplementarySymbolIn)
{SupplementarySymbol = SupplementarySymbolIn;}

WeldContourSymbolType * FrameWeldSymbolType::getArrowSideContourSymbol()
{return ArrowSideContourSymbol;}

void FrameWeldSymbolType::setArrowSideContourSymbol(WeldContourSymbolType * ArrowSideContourSymbolIn)
{ArrowSideContourSymbol = ArrowSideContourSymbolIn;}

WeldContourSymbolType * FrameWeldSymbolType::getOtherSideContourSymbol()
{return OtherSideContourSymbol;}

void FrameWeldSymbolType::setOtherSideContourSymbol(WeldContourSymbolType * OtherSideContourSymbolIn)
{OtherSideContourSymbol = OtherSideContourSymbolIn;}

/* ***************************************************************** */

/* class FramesType

*/

FramesType::FramesType()
{
  n = 0;
  Frame = 0;
}

FramesType::FramesType(
 FrameBaseTypeLisd * FrameIn)
{
  n = 0;
  Frame = FrameIn;
}

FramesType::FramesType(
 NaturalType * nIn,
 FrameBaseTypeLisd * FrameIn)
{
  n = nIn;
  Frame = FrameIn;
}

FramesType::~FramesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Frame;
  #endif
}

void FramesType::printSelf(FILE * outFile)
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
    if (!Frame)
      {
        fprintf(stderr, "Frame list is missing\n");
        exit(1);
      }
    if (Frame->size() == 0)
      {
        fprintf(stderr, "Frame list is empty\n");
        exit(1);
      }
    std::list<FrameBaseType *>::iterator iter;
    for (iter = Frame->begin();
         iter != Frame->end(); iter++)
      {
        FrameBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "FrameRectangular") == 0)
          {
            FrameRectangularType * typ;
            if ((typ = dynamic_cast<FrameRectangularType *>(basie)))
              {
                fprintf(outFile, "<FrameRectangular");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameRectangular>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameRectangular element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameCircular") == 0)
          {
            FrameCircularType * typ;
            if ((typ = dynamic_cast<FrameCircularType *>(basie)))
              {
                fprintf(outFile, "<FrameCircular");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameCircular>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameCircular element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameFlag") == 0)
          {
            FrameFlagType * typ;
            if ((typ = dynamic_cast<FrameFlagType *>(basie)))
              {
                fprintf(outFile, "<FrameFlag");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameFlag>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameFlag element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameIrregularForm") == 0)
          {
            FrameIrregularFormType * typ;
            if ((typ = dynamic_cast<FrameIrregularFormType *>(basie)))
              {
                fprintf(outFile, "<FrameIrregularForm");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameIrregularForm>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameIrregularForm element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameTriangle") == 0)
          {
            FrameTriangleType * typ;
            if ((typ = dynamic_cast<FrameTriangleType *>(basie)))
              {
                fprintf(outFile, "<FrameTriangle");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameTriangle>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameTriangle element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameHexagonal") == 0)
          {
            FrameHexagonalType * typ;
            if ((typ = dynamic_cast<FrameHexagonalType *>(basie)))
              {
                fprintf(outFile, "<FrameHexagonal");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameHexagonal>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameHexagonal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FramePentagonal") == 0)
          {
            FramePentagonalType * typ;
            if ((typ = dynamic_cast<FramePentagonalType *>(basie)))
              {
                fprintf(outFile, "<FramePentagonal");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FramePentagonal>\n");
              }
            else
              {
                fprintf(stderr, "bad FramePentagonal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameOctagonal") == 0)
          {
            FrameOctagonalType * typ;
            if ((typ = dynamic_cast<FrameOctagonalType *>(basie)))
              {
                fprintf(outFile, "<FrameOctagonal");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameOctagonal>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameOctagonal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FrameWeldSymbol") == 0)
          {
            FrameWeldSymbolType * typ;
            if ((typ = dynamic_cast<FrameWeldSymbolType *>(basie)))
              {
                fprintf(outFile, "<FrameWeldSymbol");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FrameWeldSymbol>\n");
              }
            else
              {
                fprintf(stderr, "bad FrameWeldSymbol element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Frame type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool FramesType::badAttributes(
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
              fprintf(stderr, "two values for n in FramesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in FramesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FramesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in FramesType\n");
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

NaturalType * FramesType::getn()
{return n;}

void FramesType::setn(NaturalType * nIn)
{n = nIn;}

FrameBaseTypeLisd * FramesType::getFrame()
{return Frame;}

void FramesType::setFrame(FrameBaseTypeLisd * FrameIn)
{Frame = FrameIn;}

/* ***************************************************************** */

/* class GraphicsType

*/

GraphicsType::GraphicsType()
{
  Polylines = 0;
  Areas = 0;
}

GraphicsType::GraphicsType(
 Polylines2dType * PolylinesIn,
 Areas2dType * AreasIn)
{
  Polylines = PolylinesIn;
  Areas = AreasIn;
}

GraphicsType::~GraphicsType()
{
  #ifndef NODESTRUCT
  delete Polylines;
  delete Areas;
  #endif
}

void GraphicsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Polylines)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Polylines");
      Polylines->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Polylines>\n");
    }
  if (Areas)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Areas");
      Areas->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Areas>\n");
    }
  doSpaces(-INDENT, outFile);
}

Polylines2dType * GraphicsType::getPolylines()
{return Polylines;}

void GraphicsType::setPolylines(Polylines2dType * PolylinesIn)
{Polylines = PolylinesIn;}

Areas2dType * GraphicsType::getAreas()
{return Areas;}

void GraphicsType::setAreas(Areas2dType * AreasIn)
{Areas = AreasIn;}

/* ***************************************************************** */

/* class HatchPatternType

*/

HatchPatternType::HatchPatternType()
{
  LineStyle = 0;
  FirstLineOrigin = 0;
  SecondLineOrigin = 0;
  Angle = 0;
  Color = 0;
}

HatchPatternType::HatchPatternType(
 LineStyleType * LineStyleIn,
 Point2dSimpleType * FirstLineOriginIn,
 Point2dSimpleType * SecondLineOriginIn,
 AngularValueType * AngleIn,
 ColorType * ColorIn)
{
  LineStyle = LineStyleIn;
  FirstLineOrigin = FirstLineOriginIn;
  SecondLineOrigin = SecondLineOriginIn;
  Angle = AngleIn;
  Color = ColorIn;
}

HatchPatternType::~HatchPatternType()
{
  #ifndef NODESTRUCT
  delete LineStyle;
  delete FirstLineOrigin;
  delete SecondLineOrigin;
  delete Angle;
  delete Color;
  #endif
}

void HatchPatternType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (LineStyle)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LineStyle");
      LineStyle->printSelf(outFile);
      fprintf(outFile, "</LineStyle>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<FirstLineOrigin");
  FirstLineOrigin->printSelf(outFile);
  fprintf(outFile, "</FirstLineOrigin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SecondLineOrigin");
  SecondLineOrigin->printSelf(outFile);
  fprintf(outFile, "</SecondLineOrigin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Angle");
  Angle->printSelf(outFile);
  fprintf(outFile, "</Angle>\n");
  if (Color)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Color");
      Color->printSelf(outFile);
      fprintf(outFile, "</Color>\n");
    }
  doSpaces(-INDENT, outFile);
}

LineStyleType * HatchPatternType::getLineStyle()
{return LineStyle;}

void HatchPatternType::setLineStyle(LineStyleType * LineStyleIn)
{LineStyle = LineStyleIn;}

Point2dSimpleType * HatchPatternType::getFirstLineOrigin()
{return FirstLineOrigin;}

void HatchPatternType::setFirstLineOrigin(Point2dSimpleType * FirstLineOriginIn)
{FirstLineOrigin = FirstLineOriginIn;}

Point2dSimpleType * HatchPatternType::getSecondLineOrigin()
{return SecondLineOrigin;}

void HatchPatternType::setSecondLineOrigin(Point2dSimpleType * SecondLineOriginIn)
{SecondLineOrigin = SecondLineOriginIn;}

AngularValueType * HatchPatternType::getAngle()
{return Angle;}

void HatchPatternType::setAngle(AngularValueType * AngleIn)
{Angle = AngleIn;}

ColorType * HatchPatternType::getColor()
{return Color;}

void HatchPatternType::setColor(ColorType * ColorIn)
{Color = ColorIn;}

/* ***************************************************************** */

/* class HatchPatternTypeLisd

*/

HatchPatternTypeLisd::HatchPatternTypeLisd() {}

HatchPatternTypeLisd::HatchPatternTypeLisd(HatchPatternType * aHatchPatternType)
{
  push_back(aHatchPatternType);
}

HatchPatternTypeLisd::~HatchPatternTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<HatchPatternType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void HatchPatternTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class HatchPatternsType

*/

HatchPatternsType::HatchPatternsType()
{
  n = 0;
  Pattern = 0;
}

HatchPatternsType::HatchPatternsType(
 HatchPatternTypeLisd * PatternIn)
{
  n = 0;
  Pattern = PatternIn;
}

HatchPatternsType::HatchPatternsType(
 NaturalType * nIn,
 HatchPatternTypeLisd * PatternIn)
{
  n = nIn;
  Pattern = PatternIn;
}

HatchPatternsType::~HatchPatternsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Pattern;
  #endif
}

void HatchPatternsType::printSelf(FILE * outFile)
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
    if (!Pattern)
      {
        fprintf(stderr, "Pattern list is missing\n");
        exit(1);
      }
    if (Pattern->size() == 0)
      {
        fprintf(stderr, "Pattern list is empty\n");
        exit(1);
      }
    std::list<HatchPatternType *>::iterator iter;
    for (iter = Pattern->begin();
         iter != Pattern->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Pattern");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Pattern>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool HatchPatternsType::badAttributes(
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
              fprintf(stderr, "two values for n in HatchPatternsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in HatchPatternsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in HatchPatternsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in HatchPatternsType\n");
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

NaturalType * HatchPatternsType::getn()
{return n;}

void HatchPatternsType::setn(NaturalType * nIn)
{n = nIn;}

HatchPatternTypeLisd * HatchPatternsType::getPattern()
{return Pattern;}

void HatchPatternsType::setPattern(HatchPatternTypeLisd * PatternIn)
{Pattern = PatternIn;}

/* ***************************************************************** */

/* class HatchStyleFormEnumType

*/

HatchStyleFormEnumType::HatchStyleFormEnumType() :
  XmlString()
{
}

HatchStyleFormEnumType::HatchStyleFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "NONE") &&
           strcmp(val.c_str(), "PATTERN") &&
           strcmp(val.c_str(), "FILL") &&
           strcmp(val.c_str(), "ERASED"));
}

HatchStyleFormEnumType::~HatchStyleFormEnumType() {}

bool HatchStyleFormEnumType::HatchStyleFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "NONE") &&
          strcmp(val.c_str(), "PATTERN") &&
          strcmp(val.c_str(), "FILL") &&
          strcmp(val.c_str(), "ERASED"));
}

void HatchStyleFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "HatchStyleFormEnumType");
}

void HatchStyleFormEnumType::printSelf(FILE * outFile)
{
  if (HatchStyleFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad HatchStyleFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void HatchStyleFormEnumType::oPrintSelf(FILE * outFile)
{
  if (HatchStyleFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad HatchStyleFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class HatchStyleSetType

*/

HatchStyleSetType::HatchStyleSetType()
{
  n = 0;
  HatchStyle = 0;
}

HatchStyleSetType::HatchStyleSetType(
 HatchStyleTypeLisd * HatchStyleIn)
{
  n = 0;
  HatchStyle = HatchStyleIn;
}

HatchStyleSetType::HatchStyleSetType(
 NaturalType * nIn,
 HatchStyleTypeLisd * HatchStyleIn)
{
  n = nIn;
  HatchStyle = HatchStyleIn;
}

HatchStyleSetType::~HatchStyleSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete HatchStyle;
  #endif
}

void HatchStyleSetType::printSelf(FILE * outFile)
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
    if (!HatchStyle)
      {
        fprintf(stderr, "HatchStyle list is missing\n");
        exit(1);
      }
    if (HatchStyle->size() == 0)
      {
        fprintf(stderr, "HatchStyle list is empty\n");
        exit(1);
      }
    std::list<HatchStyleType *>::iterator iter;
    for (iter = HatchStyle->begin();
         iter != HatchStyle->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<HatchStyle");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</HatchStyle>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool HatchStyleSetType::badAttributes(
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
              fprintf(stderr, "two values for n in HatchStyleSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in HatchStyleSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in HatchStyleSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in HatchStyleSetType\n");
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

NaturalType * HatchStyleSetType::getn()
{return n;}

void HatchStyleSetType::setn(NaturalType * nIn)
{n = nIn;}

HatchStyleTypeLisd * HatchStyleSetType::getHatchStyle()
{return HatchStyle;}

void HatchStyleSetType::setHatchStyle(HatchStyleTypeLisd * HatchStyleIn)
{HatchStyle = HatchStyleIn;}

/* ***************************************************************** */

/* class HatchStyleType

*/

HatchStyleType::HatchStyleType() :
  NodeWithIdBaseType()
{
  Form = 0;
  Color = 0;
  Patterns = 0;
}

HatchStyleType::HatchStyleType(
 AttributesType * AttributesIn,
 HatchStyleFormEnumType * FormIn,
 ColorType * ColorIn,
 HatchPatternsType * PatternsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  Form = FormIn;
  Color = ColorIn;
  Patterns = PatternsIn;
}

HatchStyleType::HatchStyleType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 HatchStyleFormEnumType * FormIn,
 ColorType * ColorIn,
 HatchPatternsType * PatternsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Form = FormIn;
  Color = ColorIn;
  Patterns = PatternsIn;
}

HatchStyleType::~HatchStyleType()
{
  #ifndef NODESTRUCT
  delete Form;
  delete Color;
  delete Patterns;
  #endif
}

void HatchStyleType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Form");
  Form->printSelf(outFile);
  fprintf(outFile, "</Form>\n");
  if (Color)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Color");
      Color->printSelf(outFile);
      fprintf(outFile, "</Color>\n");
    }
  if (Patterns)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Patterns");
      Patterns->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Patterns>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool HatchStyleType::badAttributes(
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
              fprintf(stderr, "two values for id in HatchStyleType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in HatchStyleType\n",
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
              fprintf(stderr, "two values for label in HatchStyleType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in HatchStyleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in HatchStyleType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in HatchStyleType\n");
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

HatchStyleFormEnumType * HatchStyleType::getForm()
{return Form;}

void HatchStyleType::setForm(HatchStyleFormEnumType * FormIn)
{Form = FormIn;}

ColorType * HatchStyleType::getColor()
{return Color;}

void HatchStyleType::setColor(ColorType * ColorIn)
{Color = ColorIn;}

HatchPatternsType * HatchStyleType::getPatterns()
{return Patterns;}

void HatchStyleType::setPatterns(HatchPatternsType * PatternsIn)
{Patterns = PatternsIn;}

/* ***************************************************************** */

/* class HatchStyleTypeLisd

*/

HatchStyleTypeLisd::HatchStyleTypeLisd() {}

HatchStyleTypeLisd::HatchStyleTypeLisd(HatchStyleType * aHatchStyleType)
{
  push_back(aHatchStyleType);
}

HatchStyleTypeLisd::~HatchStyleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<HatchStyleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void HatchStyleTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class LeaderCircularType

*/

LeaderCircularType::LeaderCircularType() :
  LeaderType()
{
  Center = 0;
}

LeaderCircularType::LeaderCircularType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn,
 Point2dSimpleType * CenterIn) :
  LeaderType(
    StartPointIn,
    EndPointIn,
    HeadFormIn,
    HeadHeightIn)
{
  Center = CenterIn;
}

LeaderCircularType::~LeaderCircularType()
{
  #ifndef NODESTRUCT
  delete Center;
  #endif
}

void LeaderCircularType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * LeaderCircularType::getCenter()
{return Center;}

void LeaderCircularType::setCenter(Point2dSimpleType * CenterIn)
{Center = CenterIn;}

/* ***************************************************************** */

/* class LeaderDoubleHeadCircularType

*/

LeaderDoubleHeadCircularType::LeaderDoubleHeadCircularType() :
  LeaderDoubleHeadType()
{
  Center = 0;
}

LeaderDoubleHeadCircularType::LeaderDoubleHeadCircularType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn,
 LeaderHeadFormEnumType * HeadForm2In,
 Point2dSimpleType * PointConnectionIn,
 Point2dSimpleType * CenterIn) :
  LeaderDoubleHeadType(
    StartPointIn,
    EndPointIn,
    HeadFormIn,
    HeadHeightIn,
    HeadForm2In,
    PointConnectionIn)
{
  Center = CenterIn;
}

LeaderDoubleHeadCircularType::~LeaderDoubleHeadCircularType()
{
  #ifndef NODESTRUCT
  delete Center;
  #endif
}

void LeaderDoubleHeadCircularType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm2");
  HeadForm2->printSelf(outFile);
  fprintf(outFile, "</HeadForm2>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointConnection");
  PointConnection->printSelf(outFile);
  fprintf(outFile, "</PointConnection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Center");
  Center->printSelf(outFile);
  fprintf(outFile, "</Center>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * LeaderDoubleHeadCircularType::getCenter()
{return Center;}

void LeaderDoubleHeadCircularType::setCenter(Point2dSimpleType * CenterIn)
{Center = CenterIn;}

/* ***************************************************************** */

/* class LeaderDoubleHeadExtendType

*/

LeaderDoubleHeadExtendType::LeaderDoubleHeadExtendType() :
  LeaderDoubleHeadType()
{
  PointExtension = 0;
}

LeaderDoubleHeadExtendType::LeaderDoubleHeadExtendType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn,
 LeaderHeadFormEnumType * HeadForm2In,
 Point2dSimpleType * PointConnectionIn,
 Point2dSimpleType * PointExtensionIn) :
  LeaderDoubleHeadType(
    StartPointIn,
    EndPointIn,
    HeadFormIn,
    HeadHeightIn,
    HeadForm2In,
    PointConnectionIn)
{
  PointExtension = PointExtensionIn;
}

LeaderDoubleHeadExtendType::~LeaderDoubleHeadExtendType()
{
  #ifndef NODESTRUCT
  delete PointExtension;
  #endif
}

void LeaderDoubleHeadExtendType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm2");
  HeadForm2->printSelf(outFile);
  fprintf(outFile, "</HeadForm2>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointConnection");
  PointConnection->printSelf(outFile);
  fprintf(outFile, "</PointConnection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointExtension");
  PointExtension->printSelf(outFile);
  fprintf(outFile, "</PointExtension>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * LeaderDoubleHeadExtendType::getPointExtension()
{return PointExtension;}

void LeaderDoubleHeadExtendType::setPointExtension(Point2dSimpleType * PointExtensionIn)
{PointExtension = PointExtensionIn;}

/* ***************************************************************** */

/* class LeaderDoubleHeadType

*/

LeaderDoubleHeadType::LeaderDoubleHeadType() :
  LeaderType()
{
  HeadForm2 = 0;
  PointConnection = 0;
}

LeaderDoubleHeadType::LeaderDoubleHeadType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn,
 LeaderHeadFormEnumType * HeadForm2In,
 Point2dSimpleType * PointConnectionIn) :
  LeaderType(
    StartPointIn,
    EndPointIn,
    HeadFormIn,
    HeadHeightIn)
{
  HeadForm2 = HeadForm2In;
  PointConnection = PointConnectionIn;
}

LeaderDoubleHeadType::~LeaderDoubleHeadType()
{
  #ifndef NODESTRUCT
  delete HeadForm2;
  delete PointConnection;
  #endif
}

void LeaderDoubleHeadType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm2");
  HeadForm2->printSelf(outFile);
  fprintf(outFile, "</HeadForm2>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointConnection");
  PointConnection->printSelf(outFile);
  fprintf(outFile, "</PointConnection>\n");
  doSpaces(-INDENT, outFile);
}

LeaderHeadFormEnumType * LeaderDoubleHeadType::getHeadForm2()
{return HeadForm2;}

void LeaderDoubleHeadType::setHeadForm2(LeaderHeadFormEnumType * HeadForm2In)
{HeadForm2 = HeadForm2In;}

Point2dSimpleType * LeaderDoubleHeadType::getPointConnection()
{return PointConnection;}

void LeaderDoubleHeadType::setPointConnection(Point2dSimpleType * PointConnectionIn)
{PointConnection = PointConnectionIn;}

/* ***************************************************************** */

/* class LeaderExtendType

*/

LeaderExtendType::LeaderExtendType() :
  LeaderType()
{
  PointExtension = 0;
  Modifier = 0;
}

LeaderExtendType::LeaderExtendType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn,
 Point2dSimpleType * PointExtensionIn,
 LeaderModifierEnumType * ModifierIn) :
  LeaderType(
    StartPointIn,
    EndPointIn,
    HeadFormIn,
    HeadHeightIn)
{
  PointExtension = PointExtensionIn;
  Modifier = ModifierIn;
}

LeaderExtendType::~LeaderExtendType()
{
  #ifndef NODESTRUCT
  delete PointExtension;
  delete Modifier;
  #endif
}

void LeaderExtendType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointExtension");
  PointExtension->printSelf(outFile);
  fprintf(outFile, "</PointExtension>\n");
  if (Modifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Modifier");
      Modifier->printSelf(outFile);
      fprintf(outFile, "</Modifier>\n");
    }
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * LeaderExtendType::getPointExtension()
{return PointExtension;}

void LeaderExtendType::setPointExtension(Point2dSimpleType * PointExtensionIn)
{PointExtension = PointExtensionIn;}

LeaderModifierEnumType * LeaderExtendType::getModifier()
{return Modifier;}

void LeaderExtendType::setModifier(LeaderModifierEnumType * ModifierIn)
{Modifier = ModifierIn;}

/* ***************************************************************** */

/* class LeaderHeadFormEnumType

*/

LeaderHeadFormEnumType::LeaderHeadFormEnumType() :
  XmlString()
{
}

LeaderHeadFormEnumType::LeaderHeadFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "NONE") &&
           strcmp(val.c_str(), "ARROW_OPEN") &&
           strcmp(val.c_str(), "ARROW_UNFILLED") &&
           strcmp(val.c_str(), "ARROW_BLANKED") &&
           strcmp(val.c_str(), "ARROW_FILLED") &&
           strcmp(val.c_str(), "TRIANGLE_BLANKED") &&
           strcmp(val.c_str(), "TRIANGLE_FILLED") &&
           strcmp(val.c_str(), "DOT_BLANKED") &&
           strcmp(val.c_str(), "DOT_FILLED") &&
           strcmp(val.c_str(), "BOX_BLANKED") &&
           strcmp(val.c_str(), "BOX_FILLED") &&
           strcmp(val.c_str(), "DIMENSION_ORIGIN") &&
           strcmp(val.c_str(), "SYMBOL_SLASH") &&
           strcmp(val.c_str(), "SYMBOL_INTEGRAL") &&
           strcmp(val.c_str(), "SYMBOL_CROSS"));
}

LeaderHeadFormEnumType::~LeaderHeadFormEnumType() {}

bool LeaderHeadFormEnumType::LeaderHeadFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "NONE") &&
          strcmp(val.c_str(), "ARROW_OPEN") &&
          strcmp(val.c_str(), "ARROW_UNFILLED") &&
          strcmp(val.c_str(), "ARROW_BLANKED") &&
          strcmp(val.c_str(), "ARROW_FILLED") &&
          strcmp(val.c_str(), "TRIANGLE_BLANKED") &&
          strcmp(val.c_str(), "TRIANGLE_FILLED") &&
          strcmp(val.c_str(), "DOT_BLANKED") &&
          strcmp(val.c_str(), "DOT_FILLED") &&
          strcmp(val.c_str(), "BOX_BLANKED") &&
          strcmp(val.c_str(), "BOX_FILLED") &&
          strcmp(val.c_str(), "DIMENSION_ORIGIN") &&
          strcmp(val.c_str(), "SYMBOL_SLASH") &&
          strcmp(val.c_str(), "SYMBOL_INTEGRAL") &&
          strcmp(val.c_str(), "SYMBOL_CROSS"));
}

void LeaderHeadFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LeaderHeadFormEnumType");
}

void LeaderHeadFormEnumType::printSelf(FILE * outFile)
{
  if (LeaderHeadFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad LeaderHeadFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void LeaderHeadFormEnumType::oPrintSelf(FILE * outFile)
{
  if (LeaderHeadFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad LeaderHeadFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LeaderHeadFormType

*/

LeaderHeadFormType::LeaderHeadFormType() :
  LeaderHeadFormEnumType()
{
  normal = 0;
  val = "";
}

LeaderHeadFormType::LeaderHeadFormType(
 const char * valStringIn) :
  LeaderHeadFormEnumType(valStringIn)
{
  normal = 0;
}

LeaderHeadFormType::LeaderHeadFormType(
 D3Type * normalIn,
 const char * valStringIn) :
  LeaderHeadFormEnumType(valStringIn)
{
  normal = normalIn;
}

LeaderHeadFormType::~LeaderHeadFormType()
{
  #ifndef NODESTRUCT
  delete normal;
  #endif
}

void LeaderHeadFormType::printName(FILE * outFile)
{
  fprintf(outFile, "LeaderHeadFormType");
}

void LeaderHeadFormType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  LeaderHeadFormTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "LeaderHeadFormTypeIsBad failed\n");
      exit(1);
    }
  if (normal)
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
      fprintf(outFile, "normal=\"");
      normal->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlString::printSelf(outFile);
}

bool LeaderHeadFormType::LeaderHeadFormTypeIsBad()
{
  LeaderHeadFormEnumTypeIsBad();
  return bad;
}

bool LeaderHeadFormType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "normal")
        {
          D3Type * normalVal;
          if (normal)
            {
              fprintf(stderr, "two values for normal in LeaderHeadFormType\n");
              returnValue = true;
              break;
            }
          normalVal = new D3Type(decl->val.c_str());
          if (normalVal->bad)
            {
              delete normalVal;
              fprintf(stderr, "bad value %s for normal in LeaderHeadFormType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            normal = normalVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LeaderHeadFormType\n");
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
      delete normal;
      normal = 0;
    }
  return returnValue;
}

D3Type * LeaderHeadFormType::getnormal()
{return normal;}

void LeaderHeadFormType::setnormal(D3Type * normalIn)
{normal = normalIn;}

/* ***************************************************************** */

/* class LeaderModifierEnumType

*/

LeaderModifierEnumType::LeaderModifierEnumType() :
  XmlString()
{
}

LeaderModifierEnumType::LeaderModifierEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ALL_AROUND") &&
           strcmp(val.c_str(), "ALL_OVER") &&
           strcmp(val.c_str(), "FLAG") &&
           strcmp(val.c_str(), "ALL_AROUND_FLAG"));
}

LeaderModifierEnumType::~LeaderModifierEnumType() {}

bool LeaderModifierEnumType::LeaderModifierEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ALL_AROUND") &&
          strcmp(val.c_str(), "ALL_OVER") &&
          strcmp(val.c_str(), "FLAG") &&
          strcmp(val.c_str(), "ALL_AROUND_FLAG"));
}

void LeaderModifierEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LeaderModifierEnumType");
}

void LeaderModifierEnumType::printSelf(FILE * outFile)
{
  if (LeaderModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad LeaderModifierEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void LeaderModifierEnumType::oPrintSelf(FILE * outFile)
{
  if (LeaderModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad LeaderModifierEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LeaderType

*/

LeaderType::LeaderType() :
  LineSegment2dType()
{
  HeadForm = 0;
  HeadHeight = 0;
}

LeaderType::LeaderType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn,
 LeaderHeadFormType * HeadFormIn,
 XmlDouble * HeadHeightIn) :
  LineSegment2dType(
    StartPointIn,
    EndPointIn)
{
  HeadForm = HeadFormIn;
  HeadHeight = HeadHeightIn;
}

LeaderType::~LeaderType()
{
  #ifndef NODESTRUCT
  delete HeadForm;
  delete HeadHeight;
  #endif
}

void LeaderType::printSelf(FILE * outFile)
{
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
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadForm");
  HeadForm->printSelf(outFile);
  fprintf(outFile, "</HeadForm>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<HeadHeight");
  HeadHeight->printSelf(outFile);
  fprintf(outFile, "</HeadHeight>\n");
  doSpaces(-INDENT, outFile);
}

LeaderHeadFormType * LeaderType::getHeadForm()
{return HeadForm;}

void LeaderType::setHeadForm(LeaderHeadFormType * HeadFormIn)
{HeadForm = HeadFormIn;}

XmlDouble * LeaderType::getHeadHeight()
{return HeadHeight;}

void LeaderType::setHeadHeight(XmlDouble * HeadHeightIn)
{HeadHeight = HeadHeightIn;}

/* ***************************************************************** */

/* class LeaderTypeLisd

*/

LeaderTypeLisd::LeaderTypeLisd() {}

LeaderTypeLisd::LeaderTypeLisd(LeaderType * aLeaderType)
{
  push_back(aLeaderType);
}

LeaderTypeLisd::~LeaderTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LeaderType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LeaderTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class LogicalOperationEnumType

*/

LogicalOperationEnumType::LogicalOperationEnumType() :
  XmlString()
{
}

LogicalOperationEnumType::LogicalOperationEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "LOGICAL_AND") &&
           strcmp(val.c_str(), "LOGICAL_OR"));
}

LogicalOperationEnumType::~LogicalOperationEnumType() {}

bool LogicalOperationEnumType::LogicalOperationEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "LOGICAL_AND") &&
          strcmp(val.c_str(), "LOGICAL_OR"));
}

void LogicalOperationEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LogicalOperationEnumType");
}

void LogicalOperationEnumType::printSelf(FILE * outFile)
{
  if (LogicalOperationEnumTypeIsBad())
    {
      fprintf(stderr, "bad LogicalOperationEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void LogicalOperationEnumType::oPrintSelf(FILE * outFile)
{
  if (LogicalOperationEnumTypeIsBad())
    {
      fprintf(stderr, "bad LogicalOperationEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LogicalOperationType

*/

LogicalOperationType::LogicalOperationType()
{
  index = 0;
  Action = 0;
  LogicalOperatio_1232 = 0;
}

LogicalOperationType::LogicalOperationType(
 LogicalOperationEnumType * ActionIn,
 LogicalOperatio_1232_Type * LogicalOperatio_1232In)
{
  index = 0;
  Action = ActionIn;
  LogicalOperatio_1232 = LogicalOperatio_1232In;
}

LogicalOperationType::LogicalOperationType(
 XmlUnsignedInt * indexIn,
 LogicalOperationEnumType * ActionIn,
 LogicalOperatio_1232_Type * LogicalOperatio_1232In)
{
  index = indexIn;
  Action = ActionIn;
  LogicalOperatio_1232 = LogicalOperatio_1232In;
}

LogicalOperationType::~LogicalOperationType()
{
  #ifndef NODESTRUCT
  delete index;
  delete Action;
  delete LogicalOperatio_1232;
  #endif
}

void LogicalOperationType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (index)
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
      fprintf(outFile, "index=\"");
      index->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"index\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Action");
  Action->printSelf(outFile);
  fprintf(outFile, "</Action>\n");
  LogicalOperatio_1232->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool LogicalOperationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "index")
        {
          XmlUnsignedInt * indexVal;
          if (index)
            {
              fprintf(stderr, "two values for index in LogicalOperationType\n");
              returnValue = true;
              break;
            }
          indexVal = new XmlUnsignedInt(decl->val.c_str());
          if (indexVal->bad)
            {
              delete indexVal;
              fprintf(stderr, "bad value %s for index in LogicalOperationType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            index = indexVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LogicalOperationType\n");
          returnValue = true;
          break;
        }
    }
  if (index == 0)
    {
      fprintf(stderr, "required attribute \"index\" missing in LogicalOperationType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete index;
      index = 0;
    }
  return returnValue;
}

XmlUnsignedInt * LogicalOperationType::getindex()
{return index;}

void LogicalOperationType::setindex(XmlUnsignedInt * indexIn)
{index = indexIn;}

LogicalOperationEnumType * LogicalOperationType::getAction()
{return Action;}

void LogicalOperationType::setAction(LogicalOperationEnumType * ActionIn)
{Action = ActionIn;}

LogicalOperatio_1232_Type * LogicalOperationType::getLogicalOperatio_1232()
{return LogicalOperatio_1232;}

void LogicalOperationType::setLogicalOperatio_1232(LogicalOperatio_1232_Type * LogicalOperatio_1232In)
{LogicalOperatio_1232 = LogicalOperatio_1232In;}

/* ***************************************************************** */

/* class LogicalOperationTypeLisd

*/

LogicalOperationTypeLisd::LogicalOperationTypeLisd() {}

LogicalOperationTypeLisd::LogicalOperationTypeLisd(LogicalOperationType * aLogicalOperationType)
{
  push_back(aLogicalOperationType);
}

LogicalOperationTypeLisd::~LogicalOperationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LogicalOperationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LogicalOperationTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class LogicalOperationsType

*/

LogicalOperationsType::LogicalOperationsType()
{
  n = 0;
  LogicalOperation = 0;
}

LogicalOperationsType::LogicalOperationsType(
 LogicalOperationTypeLisd * LogicalOperationIn)
{
  n = 0;
  LogicalOperation = LogicalOperationIn;
}

LogicalOperationsType::LogicalOperationsType(
 NaturalType * nIn,
 LogicalOperationTypeLisd * LogicalOperationIn)
{
  n = nIn;
  LogicalOperation = LogicalOperationIn;
}

LogicalOperationsType::~LogicalOperationsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete LogicalOperation;
  #endif
}

void LogicalOperationsType::printSelf(FILE * outFile)
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
    if (!LogicalOperation)
      {
        fprintf(stderr, "LogicalOperation list is missing\n");
        exit(1);
      }
    if (LogicalOperation->size() == 0)
      {
        fprintf(stderr, "LogicalOperation list is empty\n");
        exit(1);
      }
    std::list<LogicalOperationType *>::iterator iter;
    for (iter = LogicalOperation->begin();
         iter != LogicalOperation->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<LogicalOperation");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</LogicalOperation>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool LogicalOperationsType::badAttributes(
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
              fprintf(stderr, "two values for n in LogicalOperationsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in LogicalOperationsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LogicalOperationsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in LogicalOperationsType\n");
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

NaturalType * LogicalOperationsType::getn()
{return n;}

void LogicalOperationsType::setn(NaturalType * nIn)
{n = nIn;}

LogicalOperationTypeLisd * LogicalOperationsType::getLogicalOperation()
{return LogicalOperation;}

void LogicalOperationsType::setLogicalOperation(LogicalOperationTypeLisd * LogicalOperationIn)
{LogicalOperation = LogicalOperationIn;}

/* ***************************************************************** */

/* class Loops2dType

*/

Loops2dType::Loops2dType()
{
  n = 0;
  Loop = 0;
}

Loops2dType::Loops2dType(
 Polyline2dTypeLisd * LoopIn)
{
  n = 0;
  Loop = LoopIn;
}

Loops2dType::Loops2dType(
 NaturalType * nIn,
 Polyline2dTypeLisd * LoopIn)
{
  n = nIn;
  Loop = LoopIn;
}

Loops2dType::~Loops2dType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Loop;
  #endif
}

void Loops2dType::printSelf(FILE * outFile)
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
    if (!Loop)
      {
        fprintf(stderr, "Loop list is missing\n");
        exit(1);
      }
    if (Loop->size() == 0)
      {
        fprintf(stderr, "Loop list is empty\n");
        exit(1);
      }
    std::list<Polyline2dType *>::iterator iter;
    for (iter = Loop->begin();
         iter != Loop->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Loop");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Loop>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Loops2dType::badAttributes(
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
              fprintf(stderr, "two values for n in Loops2dType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in Loops2dType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Loops2dType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in Loops2dType\n");
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

NaturalType * Loops2dType::getn()
{return n;}

void Loops2dType::setn(NaturalType * nIn)
{n = nIn;}

Polyline2dTypeLisd * Loops2dType::getLoop()
{return Loop;}

void Loops2dType::setLoop(Polyline2dTypeLisd * LoopIn)
{Loop = LoopIn;}

/* ***************************************************************** */

/* class OriginType

*/

OriginType::OriginType()
{
  Origin = 0;
}

OriginType::OriginType(
 Point2dSimpleType * OriginIn)
{
  Origin = OriginIn;
}

OriginType::~OriginType()
{
  #ifndef NODESTRUCT
  delete Origin;
  #endif
}

void OriginType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * OriginType::getOrigin()
{return Origin;}

void OriginType::setOrigin(Point2dSimpleType * OriginIn)
{Origin = OriginIn;}

/* ***************************************************************** */

/* class PMIDisplaySetType

*/

PMIDisplaySetType::PMIDisplaySetType()
{
  n = 0;
  PMIDisplay = 0;
}

PMIDisplaySetType::PMIDisplaySetType(
 PMIDisplayTypeLisd * PMIDisplayIn)
{
  n = 0;
  PMIDisplay = PMIDisplayIn;
}

PMIDisplaySetType::PMIDisplaySetType(
 NaturalType * nIn,
 PMIDisplayTypeLisd * PMIDisplayIn)
{
  n = nIn;
  PMIDisplay = PMIDisplayIn;
}

PMIDisplaySetType::~PMIDisplaySetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete PMIDisplay;
  #endif
}

void PMIDisplaySetType::printSelf(FILE * outFile)
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
    if (!PMIDisplay)
      {
        fprintf(stderr, "PMIDisplay list is missing\n");
        exit(1);
      }
    if (PMIDisplay->size() == 0)
      {
        fprintf(stderr, "PMIDisplay list is empty\n");
        exit(1);
      }
    std::list<PMIDisplayType *>::iterator iter;
    for (iter = PMIDisplay->begin();
         iter != PMIDisplay->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<PMIDisplay");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</PMIDisplay>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PMIDisplaySetType::badAttributes(
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
              fprintf(stderr, "two values for n in PMIDisplaySetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PMIDisplaySetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PMIDisplaySetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PMIDisplaySetType\n");
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

NaturalType * PMIDisplaySetType::getn()
{return n;}

void PMIDisplaySetType::setn(NaturalType * nIn)
{n = nIn;}

PMIDisplayTypeLisd * PMIDisplaySetType::getPMIDisplay()
{return PMIDisplay;}

void PMIDisplaySetType::setPMIDisplay(PMIDisplayTypeLisd * PMIDisplayIn)
{PMIDisplay = PMIDisplayIn;}

/* ***************************************************************** */

/* class PMIDisplayType

*/

PMIDisplayType::PMIDisplayType()
{
  Attributes = 0;
  Color = 0;
  Plane = 0;
  Texts = 0;
  Leader = 0;
  WitnessLines = 0;
  Frames = 0;
  Graphics = 0;
  Reference = 0;
  GroupID = 0;
}

PMIDisplayType::PMIDisplayType(
 AttributesType * AttributesIn,
 ColorType * ColorIn,
 PlanePMIDisplayType * PlaneIn,
 TextsType * TextsIn,
 LeaderTypeLisd * LeaderIn,
 WitnessLinesType * WitnessLinesIn,
 FramesType * FramesIn,
 GraphicsType * GraphicsIn,
 ElementReferenceFullType * ReferenceIn,
 I2Type * GroupIDIn)
{
  Attributes = AttributesIn;
  Color = ColorIn;
  Plane = PlaneIn;
  Texts = TextsIn;
  Leader = LeaderIn;
  WitnessLines = WitnessLinesIn;
  Frames = FramesIn;
  Graphics = GraphicsIn;
  Reference = ReferenceIn;
  GroupID = GroupIDIn;
}

PMIDisplayType::~PMIDisplayType()
{
  #ifndef NODESTRUCT
  delete Attributes;
  delete Color;
  delete Plane;
  delete Texts;
  delete Leader;
  delete WitnessLines;
  delete Frames;
  delete Graphics;
  delete Reference;
  delete GroupID;
  #endif
}

void PMIDisplayType::printSelf(FILE * outFile)
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
  if (Color)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Color");
      Color->printSelf(outFile);
      fprintf(outFile, "</Color>\n");
    }
  if (Plane)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Plane");
      Plane->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Plane>\n");
    }
  if (Texts)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Texts");
      Texts->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Texts>\n");
    }
  {
    if (!Leader)
      {
        Leader = new LeaderTypeLisd;
      }
    std::list<LeaderType *>::iterator iter;
    for (iter = Leader->begin();
         iter != Leader->end(); iter++)
      {// list may be empty
        LeaderType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "LeaderExtend") == 0)
          {
            LeaderExtendType * typ;
            if ((typ = dynamic_cast<LeaderExtendType *>(basie)))
              {
                fprintf(outFile, "<LeaderExtend");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LeaderExtend>\n");
              }
            else
              {
                fprintf(stderr, "bad LeaderExtend element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LeaderCircular") == 0)
          {
            LeaderCircularType * typ;
            if ((typ = dynamic_cast<LeaderCircularType *>(basie)))
              {
                fprintf(outFile, "<LeaderCircular");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LeaderCircular>\n");
              }
            else
              {
                fprintf(stderr, "bad LeaderCircular element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LeaderDoubleHead") == 0)
          {
            LeaderDoubleHeadType * typ;
            if ((typ = dynamic_cast<LeaderDoubleHeadType *>(basie)))
              {
                fprintf(outFile, "<LeaderDoubleHead");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LeaderDoubleHead>\n");
              }
            else
              {
                fprintf(stderr, "bad LeaderDoubleHead element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LeaderDoubleHeadCircular") == 0)
          {
            LeaderDoubleHeadCircularType * typ;
            if ((typ = dynamic_cast<LeaderDoubleHeadCircularType *>(basie)))
              {
                fprintf(outFile, "<LeaderDoubleHeadCircular");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LeaderDoubleHeadCircular>\n");
              }
            else
              {
                fprintf(stderr, "bad LeaderDoubleHeadCircular element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LeaderDoubleHeadExtend") == 0)
          {
            LeaderDoubleHeadExtendType * typ;
            if ((typ = dynamic_cast<LeaderDoubleHeadExtendType *>(basie)))
              {
                fprintf(outFile, "<LeaderDoubleHeadExtend");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LeaderDoubleHeadExtend>\n");
              }
            else
              {
                fprintf(stderr, "bad LeaderDoubleHeadExtend element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Leader") == 0)
          {
            LeaderType * typ;
            if ((typ = dynamic_cast<LeaderType *>(basie)))
              {
                fprintf(outFile, "<Leader");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Leader>\n");
              }
            else
              {
                fprintf(stderr, "bad Leader element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Leader type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  if (WitnessLines)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WitnessLines");
      WitnessLines->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WitnessLines>\n");
    }
  if (Frames)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Frames");
      Frames->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Frames>\n");
    }
  if (Graphics)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Graphics");
      Graphics->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Graphics>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Reference");
  Reference->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Reference>\n");
  if (GroupID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GroupID");
      GroupID->printSelf(outFile);
      fprintf(outFile, "</GroupID>\n");
    }
  doSpaces(-INDENT, outFile);
}

AttributesType * PMIDisplayType::getAttributes()
{return Attributes;}

void PMIDisplayType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

ColorType * PMIDisplayType::getColor()
{return Color;}

void PMIDisplayType::setColor(ColorType * ColorIn)
{Color = ColorIn;}

PlanePMIDisplayType * PMIDisplayType::getPlane()
{return Plane;}

void PMIDisplayType::setPlane(PlanePMIDisplayType * PlaneIn)
{Plane = PlaneIn;}

TextsType * PMIDisplayType::getTexts()
{return Texts;}

void PMIDisplayType::setTexts(TextsType * TextsIn)
{Texts = TextsIn;}

LeaderTypeLisd * PMIDisplayType::getLeader()
{return Leader;}

void PMIDisplayType::setLeader(LeaderTypeLisd * LeaderIn)
{Leader = LeaderIn;}

WitnessLinesType * PMIDisplayType::getWitnessLines()
{return WitnessLines;}

void PMIDisplayType::setWitnessLines(WitnessLinesType * WitnessLinesIn)
{WitnessLines = WitnessLinesIn;}

FramesType * PMIDisplayType::getFrames()
{return Frames;}

void PMIDisplayType::setFrames(FramesType * FramesIn)
{Frames = FramesIn;}

GraphicsType * PMIDisplayType::getGraphics()
{return Graphics;}

void PMIDisplayType::setGraphics(GraphicsType * GraphicsIn)
{Graphics = GraphicsIn;}

ElementReferenceFullType * PMIDisplayType::getReference()
{return Reference;}

void PMIDisplayType::setReference(ElementReferenceFullType * ReferenceIn)
{Reference = ReferenceIn;}

I2Type * PMIDisplayType::getGroupID()
{return GroupID;}

void PMIDisplayType::setGroupID(I2Type * GroupIDIn)
{GroupID = GroupIDIn;}

/* ***************************************************************** */

/* class PMIDisplayTypeLisd

*/

PMIDisplayTypeLisd::PMIDisplayTypeLisd() {}

PMIDisplayTypeLisd::PMIDisplayTypeLisd(PMIDisplayType * aPMIDisplayType)
{
  push_back(aPMIDisplayType);
}

PMIDisplayTypeLisd::~PMIDisplayTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PMIDisplayType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PMIDisplayTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class PlanePMIDisplayType

*/

PlanePMIDisplayType::PlanePMIDisplayType()
{
  AnnotationViewId = 0;
  Origin = 0;
  Direction = 0;
}

PlanePMIDisplayType::PlanePMIDisplayType(
 ElementReferenceType * AnnotationViewIdIn,
 PointType * OriginIn,
 UnitVectorType * DirectionIn)
{
  AnnotationViewId = AnnotationViewIdIn;
  Origin = OriginIn;
  Direction = DirectionIn;
}

PlanePMIDisplayType::~PlanePMIDisplayType()
{
  #ifndef NODESTRUCT
  delete AnnotationViewId;
  delete Origin;
  delete Direction;
  #endif
}

void PlanePMIDisplayType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<AnnotationViewId");
  AnnotationViewId->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</AnnotationViewId>\n");
  if (Origin)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Origin");
      Origin->printSelf(outFile);
      fprintf(outFile, "</Origin>\n");
    }
  if (Direction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Direction");
      Direction->printSelf(outFile);
      fprintf(outFile, "</Direction>\n");
    }
  doSpaces(-INDENT, outFile);
}

ElementReferenceType * PlanePMIDisplayType::getAnnotationViewId()
{return AnnotationViewId;}

void PlanePMIDisplayType::setAnnotationViewId(ElementReferenceType * AnnotationViewIdIn)
{AnnotationViewId = AnnotationViewIdIn;}

PointType * PlanePMIDisplayType::getOrigin()
{return Origin;}

void PlanePMIDisplayType::setOrigin(PointType * OriginIn)
{Origin = OriginIn;}

UnitVectorType * PlanePMIDisplayType::getDirection()
{return Direction;}

void PlanePMIDisplayType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class Polyline2dType

*/

Polyline2dType::Polyline2dType()
{
  color = 0;
  Polyline2dType_1233 = 0;
}

Polyline2dType::Polyline2dType(
 Polyline2dType_1233_Type * Polyline2dType_1233In)
{
  color = 0;
  Polyline2dType_1233 = Polyline2dType_1233In;
}

Polyline2dType::Polyline2dType(
 ColorType * colorIn,
 Polyline2dType_1233_Type * Polyline2dType_1233In)
{
  color = colorIn;
  Polyline2dType_1233 = Polyline2dType_1233In;
}

Polyline2dType::~Polyline2dType()
{
  #ifndef NODESTRUCT
  delete color;
  delete Polyline2dType_1233;
  #endif
}

void Polyline2dType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  Polyline2dType_1233->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool Polyline2dType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in Polyline2dType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in Polyline2dType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polyline2dType\n");
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
      delete color;
      color = 0;
    }
  return returnValue;
}

ColorType * Polyline2dType::getcolor()
{return color;}

void Polyline2dType::setcolor(ColorType * colorIn)
{color = colorIn;}

Polyline2dType_1233_Type * Polyline2dType::getPolyline2dType_1233()
{return Polyline2dType_1233;}

void Polyline2dType::setPolyline2dType_1233(Polyline2dType_1233_Type * Polyline2dType_1233In)
{Polyline2dType_1233 = Polyline2dType_1233In;}

/* ***************************************************************** */

/* class Polyline2dTypeLisd

*/

Polyline2dTypeLisd::Polyline2dTypeLisd() {}

Polyline2dTypeLisd::Polyline2dTypeLisd(Polyline2dType * aPolyline2dType)
{
  push_back(aPolyline2dType);
}

Polyline2dTypeLisd::~Polyline2dTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Polyline2dType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Polyline2dTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Polylines2dType

*/

Polylines2dType::Polylines2dType()
{
  n = 0;
  Polyline = 0;
}

Polylines2dType::Polylines2dType(
 Polyline2dTypeLisd * PolylineIn)
{
  n = 0;
  Polyline = PolylineIn;
}

Polylines2dType::Polylines2dType(
 NaturalType * nIn,
 Polyline2dTypeLisd * PolylineIn)
{
  n = nIn;
  Polyline = PolylineIn;
}

Polylines2dType::~Polylines2dType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Polyline;
  #endif
}

void Polylines2dType::printSelf(FILE * outFile)
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
    if (!Polyline)
      {
        fprintf(stderr, "Polyline list is missing\n");
        exit(1);
      }
    if (Polyline->size() == 0)
      {
        fprintf(stderr, "Polyline list is empty\n");
        exit(1);
      }
    std::list<Polyline2dType *>::iterator iter;
    for (iter = Polyline->begin();
         iter != Polyline->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Polyline");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Polyline>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool Polylines2dType::badAttributes(
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
              fprintf(stderr, "two values for n in Polylines2dType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in Polylines2dType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in Polylines2dType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in Polylines2dType\n");
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

NaturalType * Polylines2dType::getn()
{return n;}

void Polylines2dType::setn(NaturalType * nIn)
{n = nIn;}

Polyline2dTypeLisd * Polylines2dType::getPolyline()
{return Polyline;}

void Polylines2dType::setPolyline(Polyline2dTypeLisd * PolylineIn)
{Polyline = PolylineIn;}

/* ***************************************************************** */

/* class SavedViewSetType

*/

SavedViewSetType::SavedViewSetType()
{
  n = 0;
  SavedView = 0;
}

SavedViewSetType::SavedViewSetType(
 SavedViewTypeLisd * SavedViewIn)
{
  n = 0;
  SavedView = SavedViewIn;
}

SavedViewSetType::SavedViewSetType(
 NaturalType * nIn,
 SavedViewTypeLisd * SavedViewIn)
{
  n = nIn;
  SavedView = SavedViewIn;
}

SavedViewSetType::~SavedViewSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SavedView;
  #endif
}

void SavedViewSetType::printSelf(FILE * outFile)
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
    if (!SavedView)
      {
        fprintf(stderr, "SavedView list is missing\n");
        exit(1);
      }
    if (SavedView->size() == 0)
      {
        fprintf(stderr, "SavedView list is empty\n");
        exit(1);
      }
    std::list<SavedViewType *>::iterator iter;
    for (iter = SavedView->begin();
         iter != SavedView->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SavedView");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SavedView>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SavedViewSetType::badAttributes(
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
              fprintf(stderr, "two values for n in SavedViewSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SavedViewSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SavedViewSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SavedViewSetType\n");
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

NaturalType * SavedViewSetType::getn()
{return n;}

void SavedViewSetType::setn(NaturalType * nIn)
{n = nIn;}

SavedViewTypeLisd * SavedViewSetType::getSavedView()
{return SavedView;}

void SavedViewSetType::setSavedView(SavedViewTypeLisd * SavedViewIn)
{SavedView = SavedViewIn;}

/* ***************************************************************** */

/* class SavedViewType

*/

SavedViewType::SavedViewType() :
  NodeWithIdBaseType()
{
  ActiveView = 0;
  AnnotationVisibleIds = 0;
  AnnotationHiddenIds = 0;
  BodyIds = 0;
  ComponentIds = 0;
  SimplifiedRepresentationId = 0;
  ExplodedViewId = 0;
  DisplayStyleId = 0;
  ZoneSectionId = 0;
  CameraIds = 0;
}

SavedViewType::SavedViewType(
 AttributesType * AttributesIn,
 XmlBoolean * ActiveViewIn,
 ArrayReferenceFullType * AnnotationVisibleIdsIn,
 ArrayReferenceFullType * AnnotationHiddenIdsIn,
 ArrayReferenceFullType * BodyIdsIn,
 ArrayReferenceFullType * ComponentIdsIn,
 QIFReferenceActiveType * SimplifiedRepresentationIdIn,
 QIFReferenceActiveType * ExplodedViewIdIn,
 QIFReferenceActiveType * DisplayStyleIdIn,
 QIFReferenceActiveType * ZoneSectionIdIn,
 ArrayReferenceActiveType * CameraIdsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  ActiveView = ActiveViewIn;
  AnnotationVisibleIds = AnnotationVisibleIdsIn;
  AnnotationHiddenIds = AnnotationHiddenIdsIn;
  BodyIds = BodyIdsIn;
  ComponentIds = ComponentIdsIn;
  SimplifiedRepresentationId = SimplifiedRepresentationIdIn;
  ExplodedViewId = ExplodedViewIdIn;
  DisplayStyleId = DisplayStyleIdIn;
  ZoneSectionId = ZoneSectionIdIn;
  CameraIds = CameraIdsIn;
}

SavedViewType::SavedViewType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlBoolean * ActiveViewIn,
 ArrayReferenceFullType * AnnotationVisibleIdsIn,
 ArrayReferenceFullType * AnnotationHiddenIdsIn,
 ArrayReferenceFullType * BodyIdsIn,
 ArrayReferenceFullType * ComponentIdsIn,
 QIFReferenceActiveType * SimplifiedRepresentationIdIn,
 QIFReferenceActiveType * ExplodedViewIdIn,
 QIFReferenceActiveType * DisplayStyleIdIn,
 QIFReferenceActiveType * ZoneSectionIdIn,
 ArrayReferenceActiveType * CameraIdsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  ActiveView = ActiveViewIn;
  AnnotationVisibleIds = AnnotationVisibleIdsIn;
  AnnotationHiddenIds = AnnotationHiddenIdsIn;
  BodyIds = BodyIdsIn;
  ComponentIds = ComponentIdsIn;
  SimplifiedRepresentationId = SimplifiedRepresentationIdIn;
  ExplodedViewId = ExplodedViewIdIn;
  DisplayStyleId = DisplayStyleIdIn;
  ZoneSectionId = ZoneSectionIdIn;
  CameraIds = CameraIdsIn;
}

SavedViewType::~SavedViewType()
{
  #ifndef NODESTRUCT
  delete ActiveView;
  delete AnnotationVisibleIds;
  delete AnnotationHiddenIds;
  delete BodyIds;
  delete ComponentIds;
  delete SimplifiedRepresentationId;
  delete ExplodedViewId;
  delete DisplayStyleId;
  delete ZoneSectionId;
  delete CameraIds;
  #endif
}

void SavedViewType::printSelf(FILE * outFile)
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
  if (ActiveView)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ActiveView");
      ActiveView->printSelf(outFile);
      fprintf(outFile, "</ActiveView>\n");
    }
  if (AnnotationVisibleIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AnnotationVisibleIds");
      AnnotationVisibleIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AnnotationVisibleIds>\n");
    }
  if (AnnotationHiddenIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AnnotationHiddenIds");
      AnnotationHiddenIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AnnotationHiddenIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (ComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentIds");
      ComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentIds>\n");
    }
  if (SimplifiedRepresentationId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SimplifiedRepresentationId");
      SimplifiedRepresentationId->printSelf(outFile);
      fprintf(outFile, "</SimplifiedRepresentationId>\n");
    }
  if (ExplodedViewId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExplodedViewId");
      ExplodedViewId->printSelf(outFile);
      fprintf(outFile, "</ExplodedViewId>\n");
    }
  if (DisplayStyleId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DisplayStyleId");
      DisplayStyleId->printSelf(outFile);
      fprintf(outFile, "</DisplayStyleId>\n");
    }
  if (ZoneSectionId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ZoneSectionId");
      ZoneSectionId->printSelf(outFile);
      fprintf(outFile, "</ZoneSectionId>\n");
    }
  if (CameraIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CameraIds");
      CameraIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CameraIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool SavedViewType::badAttributes(
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
              fprintf(stderr, "two values for id in SavedViewType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SavedViewType\n",
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
              fprintf(stderr, "two values for label in SavedViewType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in SavedViewType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SavedViewType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in SavedViewType\n");
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

XmlBoolean * SavedViewType::getActiveView()
{return ActiveView;}

void SavedViewType::setActiveView(XmlBoolean * ActiveViewIn)
{ActiveView = ActiveViewIn;}

ArrayReferenceFullType * SavedViewType::getAnnotationVisibleIds()
{return AnnotationVisibleIds;}

void SavedViewType::setAnnotationVisibleIds(ArrayReferenceFullType * AnnotationVisibleIdsIn)
{AnnotationVisibleIds = AnnotationVisibleIdsIn;}

ArrayReferenceFullType * SavedViewType::getAnnotationHiddenIds()
{return AnnotationHiddenIds;}

void SavedViewType::setAnnotationHiddenIds(ArrayReferenceFullType * AnnotationHiddenIdsIn)
{AnnotationHiddenIds = AnnotationHiddenIdsIn;}

ArrayReferenceFullType * SavedViewType::getBodyIds()
{return BodyIds;}

void SavedViewType::setBodyIds(ArrayReferenceFullType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

ArrayReferenceFullType * SavedViewType::getComponentIds()
{return ComponentIds;}

void SavedViewType::setComponentIds(ArrayReferenceFullType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

QIFReferenceActiveType * SavedViewType::getSimplifiedRepresentationId()
{return SimplifiedRepresentationId;}

void SavedViewType::setSimplifiedRepresentationId(QIFReferenceActiveType * SimplifiedRepresentationIdIn)
{SimplifiedRepresentationId = SimplifiedRepresentationIdIn;}

QIFReferenceActiveType * SavedViewType::getExplodedViewId()
{return ExplodedViewId;}

void SavedViewType::setExplodedViewId(QIFReferenceActiveType * ExplodedViewIdIn)
{ExplodedViewId = ExplodedViewIdIn;}

QIFReferenceActiveType * SavedViewType::getDisplayStyleId()
{return DisplayStyleId;}

void SavedViewType::setDisplayStyleId(QIFReferenceActiveType * DisplayStyleIdIn)
{DisplayStyleId = DisplayStyleIdIn;}

QIFReferenceActiveType * SavedViewType::getZoneSectionId()
{return ZoneSectionId;}

void SavedViewType::setZoneSectionId(QIFReferenceActiveType * ZoneSectionIdIn)
{ZoneSectionId = ZoneSectionIdIn;}

ArrayReferenceActiveType * SavedViewType::getCameraIds()
{return CameraIds;}

void SavedViewType::setCameraIds(ArrayReferenceActiveType * CameraIdsIn)
{CameraIds = CameraIdsIn;}

/* ***************************************************************** */

/* class SavedViewTypeLisd

*/

SavedViewTypeLisd::SavedViewTypeLisd() {}

SavedViewTypeLisd::SavedViewTypeLisd(SavedViewType * aSavedViewType)
{
  push_back(aSavedViewType);
}

SavedViewTypeLisd::~SavedViewTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SavedViewType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SavedViewTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SectionAreaType

*/

SectionAreaType::SectionAreaType()
{
  HatchStyleId = 0;
  Loops = 0;
}

SectionAreaType::SectionAreaType(
 QIFReferenceType * HatchStyleIdIn,
 SectionLoopsType * LoopsIn)
{
  HatchStyleId = HatchStyleIdIn;
  Loops = LoopsIn;
}

SectionAreaType::~SectionAreaType()
{
  #ifndef NODESTRUCT
  delete HatchStyleId;
  delete Loops;
  #endif
}

void SectionAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (HatchStyleId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<HatchStyleId");
      HatchStyleId->printSelf(outFile);
      fprintf(outFile, "</HatchStyleId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Loops");
  Loops->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Loops>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * SectionAreaType::getHatchStyleId()
{return HatchStyleId;}

void SectionAreaType::setHatchStyleId(QIFReferenceType * HatchStyleIdIn)
{HatchStyleId = HatchStyleIdIn;}

SectionLoopsType * SectionAreaType::getLoops()
{return Loops;}

void SectionAreaType::setLoops(SectionLoopsType * LoopsIn)
{Loops = LoopsIn;}

/* ***************************************************************** */

/* class SectionAreaTypeLisd

*/

SectionAreaTypeLisd::SectionAreaTypeLisd() {}

SectionAreaTypeLisd::SectionAreaTypeLisd(SectionAreaType * aSectionAreaType)
{
  push_back(aSectionAreaType);
}

SectionAreaTypeLisd::~SectionAreaTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SectionAreaType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SectionAreaTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SectionAreasType

*/

SectionAreasType::SectionAreasType()
{
  n = 0;
  Area = 0;
}

SectionAreasType::SectionAreasType(
 SectionAreaTypeLisd * AreaIn)
{
  n = 0;
  Area = AreaIn;
}

SectionAreasType::SectionAreasType(
 NaturalType * nIn,
 SectionAreaTypeLisd * AreaIn)
{
  n = nIn;
  Area = AreaIn;
}

SectionAreasType::~SectionAreasType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Area;
  #endif
}

void SectionAreasType::printSelf(FILE * outFile)
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
    if (!Area)
      {
        fprintf(stderr, "Area list is missing\n");
        exit(1);
      }
    if (Area->size() == 0)
      {
        fprintf(stderr, "Area list is empty\n");
        exit(1);
      }
    std::list<SectionAreaType *>::iterator iter;
    for (iter = Area->begin();
         iter != Area->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Area");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Area>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SectionAreasType::badAttributes(
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
              fprintf(stderr, "two values for n in SectionAreasType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SectionAreasType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SectionAreasType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SectionAreasType\n");
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

NaturalType * SectionAreasType::getn()
{return n;}

void SectionAreasType::setn(NaturalType * nIn)
{n = nIn;}

SectionAreaTypeLisd * SectionAreasType::getArea()
{return Area;}

void SectionAreasType::setArea(SectionAreaTypeLisd * AreaIn)
{Area = AreaIn;}

/* ***************************************************************** */

/* class SectionEdgesType

*/

SectionEdgesType::SectionEdgesType()
{
  n = 0;
  Edge = 0;
}

SectionEdgesType::SectionEdgesType(
 EdgeOrientedTypeLisd * EdgeIn)
{
  n = 0;
  Edge = EdgeIn;
}

SectionEdgesType::SectionEdgesType(
 NaturalType * nIn,
 EdgeOrientedTypeLisd * EdgeIn)
{
  n = nIn;
  Edge = EdgeIn;
}

SectionEdgesType::~SectionEdgesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Edge;
  #endif
}

void SectionEdgesType::printSelf(FILE * outFile)
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
    if (!Edge)
      {
        fprintf(stderr, "Edge list is missing\n");
        exit(1);
      }
    if (Edge->size() == 0)
      {
        fprintf(stderr, "Edge list is empty\n");
        exit(1);
      }
    std::list<EdgeOrientedType *>::iterator iter;
    for (iter = Edge->begin();
         iter != Edge->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Edge");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Edge>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SectionEdgesType::badAttributes(
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
              fprintf(stderr, "two values for n in SectionEdgesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SectionEdgesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SectionEdgesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SectionEdgesType\n");
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

NaturalType * SectionEdgesType::getn()
{return n;}

void SectionEdgesType::setn(NaturalType * nIn)
{n = nIn;}

EdgeOrientedTypeLisd * SectionEdgesType::getEdge()
{return Edge;}

void SectionEdgesType::setEdge(EdgeOrientedTypeLisd * EdgeIn)
{Edge = EdgeIn;}

/* ***************************************************************** */

/* class SectionGroupType

*/

SectionGroupType::SectionGroupType()
{
  BodyId = 0;
  Areas = 0;
  Paths = 0;
  Vertices = 0;
}

SectionGroupType::SectionGroupType(
 QIFReferenceFullType * BodyIdIn,
 SectionAreasType * AreasIn,
 SectionPathsType * PathsIn,
 ArrayReferenceType * VerticesIn)
{
  BodyId = BodyIdIn;
  Areas = AreasIn;
  Paths = PathsIn;
  Vertices = VerticesIn;
}

SectionGroupType::~SectionGroupType()
{
  #ifndef NODESTRUCT
  delete BodyId;
  delete Areas;
  delete Paths;
  delete Vertices;
  #endif
}

void SectionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (BodyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyId");
      BodyId->printSelf(outFile);
      fprintf(outFile, "</BodyId>\n");
    }
  if (Areas)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Areas");
      Areas->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Areas>\n");
    }
  if (Paths)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Paths");
      Paths->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Paths>\n");
    }
  if (Vertices)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Vertices");
      Vertices->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Vertices>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * SectionGroupType::getBodyId()
{return BodyId;}

void SectionGroupType::setBodyId(QIFReferenceFullType * BodyIdIn)
{BodyId = BodyIdIn;}

SectionAreasType * SectionGroupType::getAreas()
{return Areas;}

void SectionGroupType::setAreas(SectionAreasType * AreasIn)
{Areas = AreasIn;}

SectionPathsType * SectionGroupType::getPaths()
{return Paths;}

void SectionGroupType::setPaths(SectionPathsType * PathsIn)
{Paths = PathsIn;}

ArrayReferenceType * SectionGroupType::getVertices()
{return Vertices;}

void SectionGroupType::setVertices(ArrayReferenceType * VerticesIn)
{Vertices = VerticesIn;}

/* ***************************************************************** */

/* class SectionGroupTypeLisd

*/

SectionGroupTypeLisd::SectionGroupTypeLisd() {}

SectionGroupTypeLisd::SectionGroupTypeLisd(SectionGroupType * aSectionGroupType)
{
  push_back(aSectionGroupType);
}

SectionGroupTypeLisd::~SectionGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SectionGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SectionGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SectionGroupsType

*/

SectionGroupsType::SectionGroupsType()
{
  n = 0;
  SectionGroup = 0;
}

SectionGroupsType::SectionGroupsType(
 SectionGroupTypeLisd * SectionGroupIn)
{
  n = 0;
  SectionGroup = SectionGroupIn;
}

SectionGroupsType::SectionGroupsType(
 NaturalType * nIn,
 SectionGroupTypeLisd * SectionGroupIn)
{
  n = nIn;
  SectionGroup = SectionGroupIn;
}

SectionGroupsType::~SectionGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SectionGroup;
  #endif
}

void SectionGroupsType::printSelf(FILE * outFile)
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
    if (!SectionGroup)
      {
        fprintf(stderr, "SectionGroup list is missing\n");
        exit(1);
      }
    if (SectionGroup->size() == 0)
      {
        fprintf(stderr, "SectionGroup list is empty\n");
        exit(1);
      }
    std::list<SectionGroupType *>::iterator iter;
    for (iter = SectionGroup->begin();
         iter != SectionGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SectionGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SectionGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SectionGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in SectionGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SectionGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SectionGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SectionGroupsType\n");
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

NaturalType * SectionGroupsType::getn()
{return n;}

void SectionGroupsType::setn(NaturalType * nIn)
{n = nIn;}

SectionGroupTypeLisd * SectionGroupsType::getSectionGroup()
{return SectionGroup;}

void SectionGroupsType::setSectionGroup(SectionGroupTypeLisd * SectionGroupIn)
{SectionGroup = SectionGroupIn;}

/* ***************************************************************** */

/* class SectionLoopsType

*/

SectionLoopsType::SectionLoopsType()
{
  n = 0;
  Loop = 0;
}

SectionLoopsType::SectionLoopsType(
 SectionPathTypeLisd * LoopIn)
{
  n = 0;
  Loop = LoopIn;
}

SectionLoopsType::SectionLoopsType(
 NaturalType * nIn,
 SectionPathTypeLisd * LoopIn)
{
  n = nIn;
  Loop = LoopIn;
}

SectionLoopsType::~SectionLoopsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Loop;
  #endif
}

void SectionLoopsType::printSelf(FILE * outFile)
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
    if (!Loop)
      {
        fprintf(stderr, "Loop list is missing\n");
        exit(1);
      }
    if (Loop->size() == 0)
      {
        fprintf(stderr, "Loop list is empty\n");
        exit(1);
      }
    std::list<SectionPathType *>::iterator iter;
    for (iter = Loop->begin();
         iter != Loop->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Loop");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Loop>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SectionLoopsType::badAttributes(
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
              fprintf(stderr, "two values for n in SectionLoopsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SectionLoopsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SectionLoopsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SectionLoopsType\n");
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

NaturalType * SectionLoopsType::getn()
{return n;}

void SectionLoopsType::setn(NaturalType * nIn)
{n = nIn;}

SectionPathTypeLisd * SectionLoopsType::getLoop()
{return Loop;}

void SectionLoopsType::setLoop(SectionPathTypeLisd * LoopIn)
{Loop = LoopIn;}

/* ***************************************************************** */

/* class SectionPathType

*/

SectionPathType::SectionPathType()
{
  Edges = 0;
}

SectionPathType::SectionPathType(
 SectionEdgesType * EdgesIn)
{
  Edges = EdgesIn;
}

SectionPathType::~SectionPathType()
{
  #ifndef NODESTRUCT
  delete Edges;
  #endif
}

void SectionPathType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Edges");
  Edges->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Edges>\n");
  doSpaces(-INDENT, outFile);
}

SectionEdgesType * SectionPathType::getEdges()
{return Edges;}

void SectionPathType::setEdges(SectionEdgesType * EdgesIn)
{Edges = EdgesIn;}

/* ***************************************************************** */

/* class SectionPathTypeLisd

*/

SectionPathTypeLisd::SectionPathTypeLisd() {}

SectionPathTypeLisd::SectionPathTypeLisd(SectionPathType * aSectionPathType)
{
  push_back(aSectionPathType);
}

SectionPathTypeLisd::~SectionPathTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SectionPathType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SectionPathTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SectionPathsType

*/

SectionPathsType::SectionPathsType()
{
  n = 0;
  Path = 0;
}

SectionPathsType::SectionPathsType(
 SectionPathTypeLisd * PathIn)
{
  n = 0;
  Path = PathIn;
}

SectionPathsType::SectionPathsType(
 NaturalType * nIn,
 SectionPathTypeLisd * PathIn)
{
  n = nIn;
  Path = PathIn;
}

SectionPathsType::~SectionPathsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Path;
  #endif
}

void SectionPathsType::printSelf(FILE * outFile)
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
    if (!Path)
      {
        fprintf(stderr, "Path list is missing\n");
        exit(1);
      }
    if (Path->size() == 0)
      {
        fprintf(stderr, "Path list is empty\n");
        exit(1);
      }
    std::list<SectionPathType *>::iterator iter;
    for (iter = Path->begin();
         iter != Path->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Path");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Path>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SectionPathsType::badAttributes(
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
              fprintf(stderr, "two values for n in SectionPathsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SectionPathsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SectionPathsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SectionPathsType\n");
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

NaturalType * SectionPathsType::getn()
{return n;}

void SectionPathsType::setn(NaturalType * nIn)
{n = nIn;}

SectionPathTypeLisd * SectionPathsType::getPath()
{return Path;}

void SectionPathsType::setPath(SectionPathTypeLisd * PathIn)
{Path = PathIn;}

/* ***************************************************************** */

/* class SimplifiedRepresentationFormEnumType

*/

SimplifiedRepresentationFormEnumType::SimplifiedRepresentationFormEnumType() :
  XmlString()
{
}

SimplifiedRepresentationFormEnumType::SimplifiedRepresentationFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "MASTER") &&
           strcmp(val.c_str(), "HIDE") &&
           strcmp(val.c_str(), "BOUNDING_BOX"));
}

SimplifiedRepresentationFormEnumType::~SimplifiedRepresentationFormEnumType() {}

bool SimplifiedRepresentationFormEnumType::SimplifiedRepresentationFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "MASTER") &&
          strcmp(val.c_str(), "HIDE") &&
          strcmp(val.c_str(), "BOUNDING_BOX"));
}

void SimplifiedRepresentationFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SimplifiedRepresentationFormEnumType");
}

void SimplifiedRepresentationFormEnumType::printSelf(FILE * outFile)
{
  if (SimplifiedRepresentationFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad SimplifiedRepresentationFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void SimplifiedRepresentationFormEnumType::oPrintSelf(FILE * outFile)
{
  if (SimplifiedRepresentationFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad SimplifiedRepresentationFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SimplifiedRepresentationGroupType

*/

SimplifiedRepresentationGroupType::SimplifiedRepresentationGroupType()
{
  Form = 0;
  ComponentIds = 0;
  BodyIds = 0;
}

SimplifiedRepresentationGroupType::SimplifiedRepresentationGroupType(
 SimplifiedRepresentationFormEnumType * FormIn,
 ArrayReferenceFullType * ComponentIdsIn,
 ArrayReferenceFullType * BodyIdsIn)
{
  Form = FormIn;
  ComponentIds = ComponentIdsIn;
  BodyIds = BodyIdsIn;
}

SimplifiedRepresentationGroupType::~SimplifiedRepresentationGroupType()
{
  #ifndef NODESTRUCT
  delete Form;
  delete ComponentIds;
  delete BodyIds;
  #endif
}

void SimplifiedRepresentationGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Form");
  Form->printSelf(outFile);
  fprintf(outFile, "</Form>\n");
  if (ComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentIds");
      ComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

SimplifiedRepresentationFormEnumType * SimplifiedRepresentationGroupType::getForm()
{return Form;}

void SimplifiedRepresentationGroupType::setForm(SimplifiedRepresentationFormEnumType * FormIn)
{Form = FormIn;}

ArrayReferenceFullType * SimplifiedRepresentationGroupType::getComponentIds()
{return ComponentIds;}

void SimplifiedRepresentationGroupType::setComponentIds(ArrayReferenceFullType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

ArrayReferenceFullType * SimplifiedRepresentationGroupType::getBodyIds()
{return BodyIds;}

void SimplifiedRepresentationGroupType::setBodyIds(ArrayReferenceFullType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

/* ***************************************************************** */

/* class SimplifiedRepresentationGroupTypeLisd

*/

SimplifiedRepresentationGroupTypeLisd::SimplifiedRepresentationGroupTypeLisd() {}

SimplifiedRepresentationGroupTypeLisd::SimplifiedRepresentationGroupTypeLisd(SimplifiedRepresentationGroupType * aSimplifiedRepresentationGroupType)
{
  push_back(aSimplifiedRepresentationGroupType);
}

SimplifiedRepresentationGroupTypeLisd::~SimplifiedRepresentationGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SimplifiedRepresentationGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SimplifiedRepresentationGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SimplifiedRepresentationGroupsType

*/

SimplifiedRepresentationGroupsType::SimplifiedRepresentationGroupsType()
{
  n = 0;
  SimplifiedRepresentationGroup = 0;
}

SimplifiedRepresentationGroupsType::SimplifiedRepresentationGroupsType(
 SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupIn)
{
  n = 0;
  SimplifiedRepresentationGroup = SimplifiedRepresentationGroupIn;
}

SimplifiedRepresentationGroupsType::SimplifiedRepresentationGroupsType(
 NaturalType * nIn,
 SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupIn)
{
  n = nIn;
  SimplifiedRepresentationGroup = SimplifiedRepresentationGroupIn;
}

SimplifiedRepresentationGroupsType::~SimplifiedRepresentationGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SimplifiedRepresentationGroup;
  #endif
}

void SimplifiedRepresentationGroupsType::printSelf(FILE * outFile)
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
    if (!SimplifiedRepresentationGroup)
      {
        fprintf(stderr, "SimplifiedRepresentationGroup list is missing\n");
        exit(1);
      }
    if (SimplifiedRepresentationGroup->size() == 0)
      {
        fprintf(stderr, "SimplifiedRepresentationGroup list is empty\n");
        exit(1);
      }
    std::list<SimplifiedRepresentationGroupType *>::iterator iter;
    for (iter = SimplifiedRepresentationGroup->begin();
         iter != SimplifiedRepresentationGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SimplifiedRepresentationGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SimplifiedRepresentationGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SimplifiedRepresentationGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in SimplifiedRepresentationGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SimplifiedRepresentationGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SimplifiedRepresentationGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SimplifiedRepresentationGroupsType\n");
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

NaturalType * SimplifiedRepresentationGroupsType::getn()
{return n;}

void SimplifiedRepresentationGroupsType::setn(NaturalType * nIn)
{n = nIn;}

SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupsType::getSimplifiedRepresentationGroup()
{return SimplifiedRepresentationGroup;}

void SimplifiedRepresentationGroupsType::setSimplifiedRepresentationGroup(SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupIn)
{SimplifiedRepresentationGroup = SimplifiedRepresentationGroupIn;}

/* ***************************************************************** */

/* class SimplifiedRepresentationSetType

*/

SimplifiedRepresentationSetType::SimplifiedRepresentationSetType()
{
  n = 0;
  SimplifiedRepresentation = 0;
}

SimplifiedRepresentationSetType::SimplifiedRepresentationSetType(
 SimplifiedRepresentationTypeLisd * SimplifiedRepresentationIn)
{
  n = 0;
  SimplifiedRepresentation = SimplifiedRepresentationIn;
}

SimplifiedRepresentationSetType::SimplifiedRepresentationSetType(
 NaturalType * nIn,
 SimplifiedRepresentationTypeLisd * SimplifiedRepresentationIn)
{
  n = nIn;
  SimplifiedRepresentation = SimplifiedRepresentationIn;
}

SimplifiedRepresentationSetType::~SimplifiedRepresentationSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SimplifiedRepresentation;
  #endif
}

void SimplifiedRepresentationSetType::printSelf(FILE * outFile)
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
    if (!SimplifiedRepresentation)
      {
        fprintf(stderr, "SimplifiedRepresentation list is missing\n");
        exit(1);
      }
    if (SimplifiedRepresentation->size() == 0)
      {
        fprintf(stderr, "SimplifiedRepresentation list is empty\n");
        exit(1);
      }
    std::list<SimplifiedRepresentationType *>::iterator iter;
    for (iter = SimplifiedRepresentation->begin();
         iter != SimplifiedRepresentation->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SimplifiedRepresentation");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SimplifiedRepresentation>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SimplifiedRepresentationSetType::badAttributes(
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
              fprintf(stderr, "two values for n in SimplifiedRepresentationSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SimplifiedRepresentationSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SimplifiedRepresentationSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SimplifiedRepresentationSetType\n");
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

NaturalType * SimplifiedRepresentationSetType::getn()
{return n;}

void SimplifiedRepresentationSetType::setn(NaturalType * nIn)
{n = nIn;}

SimplifiedRepresentationTypeLisd * SimplifiedRepresentationSetType::getSimplifiedRepresentation()
{return SimplifiedRepresentation;}

void SimplifiedRepresentationSetType::setSimplifiedRepresentation(SimplifiedRepresentationTypeLisd * SimplifiedRepresentationIn)
{SimplifiedRepresentation = SimplifiedRepresentationIn;}

/* ***************************************************************** */

/* class SimplifiedRepresentationType

*/

SimplifiedRepresentationType::SimplifiedRepresentationType() :
  NodeWithIdBaseType()
{
  Form = 0;
  SimplifiedRepresentationGroups = 0;
}

SimplifiedRepresentationType::SimplifiedRepresentationType(
 AttributesType * AttributesIn,
 SimplifiedRepresentationFormEnumType * FormIn,
 SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  Form = FormIn;
  SimplifiedRepresentationGroups = SimplifiedRepresentationGroupsIn;
}

SimplifiedRepresentationType::SimplifiedRepresentationType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 SimplifiedRepresentationFormEnumType * FormIn,
 SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  Form = FormIn;
  SimplifiedRepresentationGroups = SimplifiedRepresentationGroupsIn;
}

SimplifiedRepresentationType::~SimplifiedRepresentationType()
{
  #ifndef NODESTRUCT
  delete Form;
  delete SimplifiedRepresentationGroups;
  #endif
}

void SimplifiedRepresentationType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Form");
  Form->printSelf(outFile);
  fprintf(outFile, "</Form>\n");
  if (SimplifiedRepresentationGroups)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SimplifiedRepresentationGroups");
      SimplifiedRepresentationGroups->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SimplifiedRepresentationGroups>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool SimplifiedRepresentationType::badAttributes(
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
              fprintf(stderr, "two values for id in SimplifiedRepresentationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SimplifiedRepresentationType\n",
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
              fprintf(stderr, "two values for label in SimplifiedRepresentationType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in SimplifiedRepresentationType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SimplifiedRepresentationType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in SimplifiedRepresentationType\n");
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

SimplifiedRepresentationFormEnumType * SimplifiedRepresentationType::getForm()
{return Form;}

void SimplifiedRepresentationType::setForm(SimplifiedRepresentationFormEnumType * FormIn)
{Form = FormIn;}

SimplifiedRepresentationGroupsType * SimplifiedRepresentationType::getSimplifiedRepresentationGroups()
{return SimplifiedRepresentationGroups;}

void SimplifiedRepresentationType::setSimplifiedRepresentationGroups(SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn)
{SimplifiedRepresentationGroups = SimplifiedRepresentationGroupsIn;}

/* ***************************************************************** */

/* class SimplifiedRepresentationTypeLisd

*/

SimplifiedRepresentationTypeLisd::SimplifiedRepresentationTypeLisd() {}

SimplifiedRepresentationTypeLisd::SimplifiedRepresentationTypeLisd(SimplifiedRepresentationType * aSimplifiedRepresentationType)
{
  push_back(aSimplifiedRepresentationType);
}

SimplifiedRepresentationTypeLisd::~SimplifiedRepresentationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SimplifiedRepresentationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SimplifiedRepresentationTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class TextType

*/

TextType::TextType()
{
  Data = 0;
  XY = 0;
}

TextType::TextType(
 XmlString * DataIn,
 Point2dSimpleType * XYIn)
{
  Data = DataIn;
  XY = XYIn;
}

TextType::~TextType()
{
  #ifndef NODESTRUCT
  delete Data;
  delete XY;
  #endif
}

void TextType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Data");
  Data->printSelf(outFile);
  fprintf(outFile, "</Data>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<XY");
  XY->printSelf(outFile);
  fprintf(outFile, "</XY>\n");
  doSpaces(-INDENT, outFile);
}

XmlString * TextType::getData()
{return Data;}

void TextType::setData(XmlString * DataIn)
{Data = DataIn;}

Point2dSimpleType * TextType::getXY()
{return XY;}

void TextType::setXY(Point2dSimpleType * XYIn)
{XY = XYIn;}

/* ***************************************************************** */

/* class TextTypeLisd

*/

TextTypeLisd::TextTypeLisd() {}

TextTypeLisd::TextTypeLisd(TextType * aTextType)
{
  push_back(aTextType);
}

TextTypeLisd::~TextTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TextType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TextTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class TextsType

*/

TextsType::TextsType()
{
  fontIndex = 0;
  lineHeight = 0;
  n = 0;
  Text = 0;
}

TextsType::TextsType(
 TextTypeLisd * TextIn)
{
  fontIndex = 0;
  lineHeight = 0;
  n = 0;
  Text = TextIn;
}

TextsType::TextsType(
 XmlUnsignedInt * fontIndexIn,
 XmlDouble * lineHeightIn,
 NaturalType * nIn,
 TextTypeLisd * TextIn)
{
  fontIndex = fontIndexIn;
  lineHeight = lineHeightIn;
  n = nIn;
  Text = TextIn;
}

TextsType::~TextsType()
{
  #ifndef NODESTRUCT
  delete fontIndex;
  delete lineHeight;
  delete n;
  delete Text;
  #endif
}

void TextsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (fontIndex)
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
      fprintf(outFile, "fontIndex=\"");
      fontIndex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"fontIndex\" missing\n");
      exit(1);
    }
  if (lineHeight)
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
      fprintf(outFile, "lineHeight=\"");
      lineHeight->oPrintSelf(outFile);
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
    if (!Text)
      {
        fprintf(stderr, "Text list is missing\n");
        exit(1);
      }
    if (Text->size() == 0)
      {
        fprintf(stderr, "Text list is empty\n");
        exit(1);
      }
    std::list<TextType *>::iterator iter;
    for (iter = Text->begin();
         iter != Text->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Text");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Text>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool TextsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "fontIndex")
        {
          XmlUnsignedInt * fontIndexVal;
          if (fontIndex)
            {
              fprintf(stderr, "two values for fontIndex in TextsType\n");
              returnValue = true;
              break;
            }
          fontIndexVal = new XmlUnsignedInt(decl->val.c_str());
          if (fontIndexVal->bad)
            {
              delete fontIndexVal;
              fprintf(stderr, "bad value %s for fontIndex in TextsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            fontIndex = fontIndexVal;
        }
      else if (decl->name == "lineHeight")
        {
          XmlDouble * lineHeightVal;
          if (lineHeight)
            {
              fprintf(stderr, "two values for lineHeight in TextsType\n");
              returnValue = true;
              break;
            }
          lineHeightVal = new XmlDouble(decl->val.c_str());
          if (lineHeightVal->bad)
            {
              delete lineHeightVal;
              fprintf(stderr, "bad value %s for lineHeight in TextsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            lineHeight = lineHeightVal;
        }
      else if (decl->name == "n")
        {
          NaturalType * nVal;
          if (n)
            {
              fprintf(stderr, "two values for n in TextsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in TextsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TextsType\n");
          returnValue = true;
          break;
        }
    }
  if (fontIndex == 0)
    {
      fprintf(stderr, "required attribute \"fontIndex\" missing in TextsType\n");
      returnValue = true;
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in TextsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete fontIndex;
      fontIndex = 0;
      delete lineHeight;
      lineHeight = 0;
      delete n;
      n = 0;
    }
  return returnValue;
}

XmlUnsignedInt * TextsType::getfontIndex()
{return fontIndex;}

void TextsType::setfontIndex(XmlUnsignedInt * fontIndexIn)
{fontIndex = fontIndexIn;}

XmlDouble * TextsType::getlineHeight()
{return lineHeight;}

void TextsType::setlineHeight(XmlDouble * lineHeightIn)
{lineHeight = lineHeightIn;}

NaturalType * TextsType::getn()
{return n;}

void TextsType::setn(NaturalType * nIn)
{n = nIn;}

TextTypeLisd * TextsType::getText()
{return Text;}

void TextsType::setText(TextTypeLisd * TextIn)
{Text = TextIn;}

/* ***************************************************************** */

/* class TrailingZeroDimensionalCharacteristicDisplayGroupType

*/

TrailingZeroDimensionalCharacteristicDisplayGroupType::TrailingZeroDimensionalCharacteristicDisplayGroupType()
{
  DimensionalCharacteristicValueTarget = 0;
  DimensionalCharacteristicValueLimits = 0;
  DimensionalCharacteristicIds = 0;
}

TrailingZeroDimensionalCharacteristicDisplayGroupType::TrailingZeroDimensionalCharacteristicDisplayGroupType(
 XmlBoolean * DimensionalCharacteristicValueTargetIn,
 XmlBoolean * DimensionalCharacteristicValueLimitsIn,
 ArrayReferenceFullType * DimensionalCharacteristicIdsIn)
{
  DimensionalCharacteristicValueTarget = DimensionalCharacteristicValueTargetIn;
  DimensionalCharacteristicValueLimits = DimensionalCharacteristicValueLimitsIn;
  DimensionalCharacteristicIds = DimensionalCharacteristicIdsIn;
}

TrailingZeroDimensionalCharacteristicDisplayGroupType::~TrailingZeroDimensionalCharacteristicDisplayGroupType()
{
  #ifndef NODESTRUCT
  delete DimensionalCharacteristicValueTarget;
  delete DimensionalCharacteristicValueLimits;
  delete DimensionalCharacteristicIds;
  #endif
}

void TrailingZeroDimensionalCharacteristicDisplayGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (DimensionalCharacteristicValueTarget)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DimensionalCharacteristicValueTarget");
      DimensionalCharacteristicValueTarget->printSelf(outFile);
      fprintf(outFile, "</DimensionalCharacteristicValueTarget>\n");
    }
  if (DimensionalCharacteristicValueLimits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DimensionalCharacteristicValueLimits");
      DimensionalCharacteristicValueLimits->printSelf(outFile);
      fprintf(outFile, "</DimensionalCharacteristicValueLimits>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<DimensionalCharacteristicIds");
  DimensionalCharacteristicIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</DimensionalCharacteristicIds>\n");
  doSpaces(-INDENT, outFile);
}

XmlBoolean * TrailingZeroDimensionalCharacteristicDisplayGroupType::getDimensionalCharacteristicValueTarget()
{return DimensionalCharacteristicValueTarget;}

void TrailingZeroDimensionalCharacteristicDisplayGroupType::setDimensionalCharacteristicValueTarget(XmlBoolean * DimensionalCharacteristicValueTargetIn)
{DimensionalCharacteristicValueTarget = DimensionalCharacteristicValueTargetIn;}

XmlBoolean * TrailingZeroDimensionalCharacteristicDisplayGroupType::getDimensionalCharacteristicValueLimits()
{return DimensionalCharacteristicValueLimits;}

void TrailingZeroDimensionalCharacteristicDisplayGroupType::setDimensionalCharacteristicValueLimits(XmlBoolean * DimensionalCharacteristicValueLimitsIn)
{DimensionalCharacteristicValueLimits = DimensionalCharacteristicValueLimitsIn;}

ArrayReferenceFullType * TrailingZeroDimensionalCharacteristicDisplayGroupType::getDimensionalCharacteristicIds()
{return DimensionalCharacteristicIds;}

void TrailingZeroDimensionalCharacteristicDisplayGroupType::setDimensionalCharacteristicIds(ArrayReferenceFullType * DimensionalCharacteristicIdsIn)
{DimensionalCharacteristicIds = DimensionalCharacteristicIdsIn;}

/* ***************************************************************** */

/* class TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd

*/

TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd::TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd() {}

TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd::TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd(TrailingZeroDimensionalCharacteristicDisplayGroupType * aTrailingZeroDimensionalCharacteristicDisplayGroupType)
{
  push_back(aTrailingZeroDimensionalCharacteristicDisplayGroupType);
}

TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd::~TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TrailingZeroDimensionalCharacteristicDisplayGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class TrailingZeroDimensionalCharacteristicDisplayGroupsType

*/

TrailingZeroDimensionalCharacteristicDisplayGroupsType::TrailingZeroDimensionalCharacteristicDisplayGroupsType()
{
  n = 0;
  TrailingZeroDimensionalCharacteristicDisplayGroup = 0;
}

TrailingZeroDimensionalCharacteristicDisplayGroupsType::TrailingZeroDimensionalCharacteristicDisplayGroupsType(
 TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupIn)
{
  n = 0;
  TrailingZeroDimensionalCharacteristicDisplayGroup = TrailingZeroDimensionalCharacteristicDisplayGroupIn;
}

TrailingZeroDimensionalCharacteristicDisplayGroupsType::TrailingZeroDimensionalCharacteristicDisplayGroupsType(
 NaturalType * nIn,
 TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupIn)
{
  n = nIn;
  TrailingZeroDimensionalCharacteristicDisplayGroup = TrailingZeroDimensionalCharacteristicDisplayGroupIn;
}

TrailingZeroDimensionalCharacteristicDisplayGroupsType::~TrailingZeroDimensionalCharacteristicDisplayGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete TrailingZeroDimensionalCharacteristicDisplayGroup;
  #endif
}

void TrailingZeroDimensionalCharacteristicDisplayGroupsType::printSelf(FILE * outFile)
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
    if (!TrailingZeroDimensionalCharacteristicDisplayGroup)
      {
        fprintf(stderr, "TrailingZeroDimensionalCharacteristicDisplayGroup list is missing\n");
        exit(1);
      }
    if (TrailingZeroDimensionalCharacteristicDisplayGroup->size() == 0)
      {
        fprintf(stderr, "TrailingZeroDimensionalCharacteristicDisplayGroup list is empty\n");
        exit(1);
      }
    std::list<TrailingZeroDimensionalCharacteristicDisplayGroupType *>::iterator iter;
    for (iter = TrailingZeroDimensionalCharacteristicDisplayGroup->begin();
         iter != TrailingZeroDimensionalCharacteristicDisplayGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<TrailingZeroDimensionalCharacteristicDisplayGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</TrailingZeroDimensionalCharacteristicDisplayGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool TrailingZeroDimensionalCharacteristicDisplayGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in TrailingZeroDimensionalCharacteristicDisplayGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in TrailingZeroDimensionalCharacteristicDisplayGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TrailingZeroDimensionalCharacteristicDisplayGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in TrailingZeroDimensionalCharacteristicDisplayGroupsType\n");
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

NaturalType * TrailingZeroDimensionalCharacteristicDisplayGroupsType::getn()
{return n;}

void TrailingZeroDimensionalCharacteristicDisplayGroupsType::setn(NaturalType * nIn)
{n = nIn;}

TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupsType::getTrailingZeroDimensionalCharacteristicDisplayGroup()
{return TrailingZeroDimensionalCharacteristicDisplayGroup;}

void TrailingZeroDimensionalCharacteristicDisplayGroupsType::setTrailingZeroDimensionalCharacteristicDisplayGroup(TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupIn)
{TrailingZeroDimensionalCharacteristicDisplayGroup = TrailingZeroDimensionalCharacteristicDisplayGroupIn;}

/* ***************************************************************** */

/* class TrailingZeroDisplayType

*/

TrailingZeroDisplayType::TrailingZeroDisplayType()
{
  DimensionalCharacteristicValueTarget = 0;
  DimensionalCharacteristicValueLimits = 0;
  GeometricCharacteristicValue = 0;
  TrailingZeroDimensionalCharacteristicDisplayGroups = 0;
  TrailingZeroGeometricCharacteristicDisplayGroups = 0;
}

TrailingZeroDisplayType::TrailingZeroDisplayType(
 XmlBoolean * DimensionalCharacteristicValueTargetIn,
 XmlBoolean * DimensionalCharacteristicValueLimitsIn,
 XmlBoolean * GeometricCharacteristicValueIn,
 TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDimensionalCharacteristicDisplayGroupsIn,
 TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroGeometricCharacteristicDisplayGroupsIn)
{
  DimensionalCharacteristicValueTarget = DimensionalCharacteristicValueTargetIn;
  DimensionalCharacteristicValueLimits = DimensionalCharacteristicValueLimitsIn;
  GeometricCharacteristicValue = GeometricCharacteristicValueIn;
  TrailingZeroDimensionalCharacteristicDisplayGroups = TrailingZeroDimensionalCharacteristicDisplayGroupsIn;
  TrailingZeroGeometricCharacteristicDisplayGroups = TrailingZeroGeometricCharacteristicDisplayGroupsIn;
}

TrailingZeroDisplayType::~TrailingZeroDisplayType()
{
  #ifndef NODESTRUCT
  delete DimensionalCharacteristicValueTarget;
  delete DimensionalCharacteristicValueLimits;
  delete GeometricCharacteristicValue;
  delete TrailingZeroDimensionalCharacteristicDisplayGroups;
  delete TrailingZeroGeometricCharacteristicDisplayGroups;
  #endif
}

void TrailingZeroDisplayType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (DimensionalCharacteristicValueTarget)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DimensionalCharacteristicValueTarget");
      DimensionalCharacteristicValueTarget->printSelf(outFile);
      fprintf(outFile, "</DimensionalCharacteristicValueTarget>\n");
    }
  if (DimensionalCharacteristicValueLimits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DimensionalCharacteristicValueLimits");
      DimensionalCharacteristicValueLimits->printSelf(outFile);
      fprintf(outFile, "</DimensionalCharacteristicValueLimits>\n");
    }
  if (GeometricCharacteristicValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GeometricCharacteristicValue");
      GeometricCharacteristicValue->printSelf(outFile);
      fprintf(outFile, "</GeometricCharacteristicValue>\n");
    }
  if (TrailingZeroDimensionalCharacteristicDisplayGroups)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrailingZeroDimensionalCharacteristicDisplayGroups");
      TrailingZeroDimensionalCharacteristicDisplayGroups->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TrailingZeroDimensionalCharacteristicDisplayGroups>\n");
    }
  if (TrailingZeroGeometricCharacteristicDisplayGroups)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrailingZeroGeometricCharacteristicDisplayGroups");
      TrailingZeroGeometricCharacteristicDisplayGroups->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TrailingZeroGeometricCharacteristicDisplayGroups>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlBoolean * TrailingZeroDisplayType::getDimensionalCharacteristicValueTarget()
{return DimensionalCharacteristicValueTarget;}

void TrailingZeroDisplayType::setDimensionalCharacteristicValueTarget(XmlBoolean * DimensionalCharacteristicValueTargetIn)
{DimensionalCharacteristicValueTarget = DimensionalCharacteristicValueTargetIn;}

XmlBoolean * TrailingZeroDisplayType::getDimensionalCharacteristicValueLimits()
{return DimensionalCharacteristicValueLimits;}

void TrailingZeroDisplayType::setDimensionalCharacteristicValueLimits(XmlBoolean * DimensionalCharacteristicValueLimitsIn)
{DimensionalCharacteristicValueLimits = DimensionalCharacteristicValueLimitsIn;}

XmlBoolean * TrailingZeroDisplayType::getGeometricCharacteristicValue()
{return GeometricCharacteristicValue;}

void TrailingZeroDisplayType::setGeometricCharacteristicValue(XmlBoolean * GeometricCharacteristicValueIn)
{GeometricCharacteristicValue = GeometricCharacteristicValueIn;}

TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDisplayType::getTrailingZeroDimensionalCharacteristicDisplayGroups()
{return TrailingZeroDimensionalCharacteristicDisplayGroups;}

void TrailingZeroDisplayType::setTrailingZeroDimensionalCharacteristicDisplayGroups(TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDimensionalCharacteristicDisplayGroupsIn)
{TrailingZeroDimensionalCharacteristicDisplayGroups = TrailingZeroDimensionalCharacteristicDisplayGroupsIn;}

TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroDisplayType::getTrailingZeroGeometricCharacteristicDisplayGroups()
{return TrailingZeroGeometricCharacteristicDisplayGroups;}

void TrailingZeroDisplayType::setTrailingZeroGeometricCharacteristicDisplayGroups(TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroGeometricCharacteristicDisplayGroupsIn)
{TrailingZeroGeometricCharacteristicDisplayGroups = TrailingZeroGeometricCharacteristicDisplayGroupsIn;}

/* ***************************************************************** */

/* class TrailingZeroGeometricCharacteristicDisplayGroupType

*/

TrailingZeroGeometricCharacteristicDisplayGroupType::TrailingZeroGeometricCharacteristicDisplayGroupType()
{
  GeometricCharacteristicValue = 0;
  GeometricCharacteristicIds = 0;
}

TrailingZeroGeometricCharacteristicDisplayGroupType::TrailingZeroGeometricCharacteristicDisplayGroupType(
 XmlBoolean * GeometricCharacteristicValueIn,
 ArrayReferenceFullType * GeometricCharacteristicIdsIn)
{
  GeometricCharacteristicValue = GeometricCharacteristicValueIn;
  GeometricCharacteristicIds = GeometricCharacteristicIdsIn;
}

TrailingZeroGeometricCharacteristicDisplayGroupType::~TrailingZeroGeometricCharacteristicDisplayGroupType()
{
  #ifndef NODESTRUCT
  delete GeometricCharacteristicValue;
  delete GeometricCharacteristicIds;
  #endif
}

void TrailingZeroGeometricCharacteristicDisplayGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<GeometricCharacteristicValue");
  GeometricCharacteristicValue->printSelf(outFile);
  fprintf(outFile, "</GeometricCharacteristicValue>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<GeometricCharacteristicIds");
  GeometricCharacteristicIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</GeometricCharacteristicIds>\n");
  doSpaces(-INDENT, outFile);
}

XmlBoolean * TrailingZeroGeometricCharacteristicDisplayGroupType::getGeometricCharacteristicValue()
{return GeometricCharacteristicValue;}

void TrailingZeroGeometricCharacteristicDisplayGroupType::setGeometricCharacteristicValue(XmlBoolean * GeometricCharacteristicValueIn)
{GeometricCharacteristicValue = GeometricCharacteristicValueIn;}

ArrayReferenceFullType * TrailingZeroGeometricCharacteristicDisplayGroupType::getGeometricCharacteristicIds()
{return GeometricCharacteristicIds;}

void TrailingZeroGeometricCharacteristicDisplayGroupType::setGeometricCharacteristicIds(ArrayReferenceFullType * GeometricCharacteristicIdsIn)
{GeometricCharacteristicIds = GeometricCharacteristicIdsIn;}

/* ***************************************************************** */

/* class TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd

*/

TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd::TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd() {}

TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd::TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd(TrailingZeroGeometricCharacteristicDisplayGroupType * aTrailingZeroGeometricCharacteristicDisplayGroupType)
{
  push_back(aTrailingZeroGeometricCharacteristicDisplayGroupType);
}

TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd::~TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TrailingZeroGeometricCharacteristicDisplayGroupType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class TrailingZeroGeometricCharacteristicDisplayGroupsType

*/

TrailingZeroGeometricCharacteristicDisplayGroupsType::TrailingZeroGeometricCharacteristicDisplayGroupsType()
{
  n = 0;
  TrailingZeroGeometricCharacteristicDisplayGroup = 0;
}

TrailingZeroGeometricCharacteristicDisplayGroupsType::TrailingZeroGeometricCharacteristicDisplayGroupsType(
 TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupIn)
{
  n = 0;
  TrailingZeroGeometricCharacteristicDisplayGroup = TrailingZeroGeometricCharacteristicDisplayGroupIn;
}

TrailingZeroGeometricCharacteristicDisplayGroupsType::TrailingZeroGeometricCharacteristicDisplayGroupsType(
 NaturalType * nIn,
 TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupIn)
{
  n = nIn;
  TrailingZeroGeometricCharacteristicDisplayGroup = TrailingZeroGeometricCharacteristicDisplayGroupIn;
}

TrailingZeroGeometricCharacteristicDisplayGroupsType::~TrailingZeroGeometricCharacteristicDisplayGroupsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete TrailingZeroGeometricCharacteristicDisplayGroup;
  #endif
}

void TrailingZeroGeometricCharacteristicDisplayGroupsType::printSelf(FILE * outFile)
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
    if (!TrailingZeroGeometricCharacteristicDisplayGroup)
      {
        fprintf(stderr, "TrailingZeroGeometricCharacteristicDisplayGroup list is missing\n");
        exit(1);
      }
    if (TrailingZeroGeometricCharacteristicDisplayGroup->size() == 0)
      {
        fprintf(stderr, "TrailingZeroGeometricCharacteristicDisplayGroup list is empty\n");
        exit(1);
      }
    std::list<TrailingZeroGeometricCharacteristicDisplayGroupType *>::iterator iter;
    for (iter = TrailingZeroGeometricCharacteristicDisplayGroup->begin();
         iter != TrailingZeroGeometricCharacteristicDisplayGroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<TrailingZeroGeometricCharacteristicDisplayGroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</TrailingZeroGeometricCharacteristicDisplayGroup>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool TrailingZeroGeometricCharacteristicDisplayGroupsType::badAttributes(
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
              fprintf(stderr, "two values for n in TrailingZeroGeometricCharacteristicDisplayGroupsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in TrailingZeroGeometricCharacteristicDisplayGroupsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TrailingZeroGeometricCharacteristicDisplayGroupsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in TrailingZeroGeometricCharacteristicDisplayGroupsType\n");
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

NaturalType * TrailingZeroGeometricCharacteristicDisplayGroupsType::getn()
{return n;}

void TrailingZeroGeometricCharacteristicDisplayGroupsType::setn(NaturalType * nIn)
{n = nIn;}

TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupsType::getTrailingZeroGeometricCharacteristicDisplayGroup()
{return TrailingZeroGeometricCharacteristicDisplayGroup;}

void TrailingZeroGeometricCharacteristicDisplayGroupsType::setTrailingZeroGeometricCharacteristicDisplayGroup(TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupIn)
{TrailingZeroGeometricCharacteristicDisplayGroup = TrailingZeroGeometricCharacteristicDisplayGroupIn;}

/* ***************************************************************** */

/* class Triangulation2dType

*/

Triangulation2dType::Triangulation2dType()
{
  Triangulation2d_1234 = 0;
  Triangulation2d_1235 = 0;
}

Triangulation2dType::Triangulation2dType(
 Triangulation2d_1234_Type * Triangulation2d_1234In,
 Triangulation2d_1235_Type * Triangulation2d_1235In)
{
  Triangulation2d_1234 = Triangulation2d_1234In;
  Triangulation2d_1235 = Triangulation2d_1235In;
}

Triangulation2dType::~Triangulation2dType()
{
  #ifndef NODESTRUCT
  delete Triangulation2d_1234;
  delete Triangulation2d_1235;
  #endif
}

void Triangulation2dType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  Triangulation2d_1234->printSelf(outFile);
  Triangulation2d_1235->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

Triangulation2d_1234_Type * Triangulation2dType::getTriangulation2d_1234()
{return Triangulation2d_1234;}

void Triangulation2dType::setTriangulation2d_1234(Triangulation2d_1234_Type * Triangulation2d_1234In)
{Triangulation2d_1234 = Triangulation2d_1234In;}

Triangulation2d_1235_Type * Triangulation2dType::getTriangulation2d_1235()
{return Triangulation2d_1235;}

void Triangulation2dType::setTriangulation2d_1235(Triangulation2d_1235_Type * Triangulation2d_1235In)
{Triangulation2d_1235 = Triangulation2d_1235In;}

/* ***************************************************************** */

/* class ViewSetType

*/

ViewSetType::ViewSetType()
{
  CameraSet = 0;
  SavedViewSet = 0;
  AnnotationViewSet = 0;
  SimplifiedRepresentationSet = 0;
  ExplodedViewSet = 0;
  DisplayStyleSet = 0;
  ZoneSectionSet = 0;
  HatchStyleSet = 0;
}

ViewSetType::ViewSetType(
 CameraSetType * CameraSetIn,
 SavedViewSetType * SavedViewSetIn,
 AnnotationViewSetType * AnnotationViewSetIn,
 SimplifiedRepresentationSetType * SimplifiedRepresentationSetIn,
 ExplodedViewSetType * ExplodedViewSetIn,
 DisplayStyleSetType * DisplayStyleSetIn,
 ZoneSectionSetType * ZoneSectionSetIn,
 HatchStyleSetType * HatchStyleSetIn)
{
  CameraSet = CameraSetIn;
  SavedViewSet = SavedViewSetIn;
  AnnotationViewSet = AnnotationViewSetIn;
  SimplifiedRepresentationSet = SimplifiedRepresentationSetIn;
  ExplodedViewSet = ExplodedViewSetIn;
  DisplayStyleSet = DisplayStyleSetIn;
  ZoneSectionSet = ZoneSectionSetIn;
  HatchStyleSet = HatchStyleSetIn;
}

ViewSetType::~ViewSetType()
{
  #ifndef NODESTRUCT
  delete CameraSet;
  delete SavedViewSet;
  delete AnnotationViewSet;
  delete SimplifiedRepresentationSet;
  delete ExplodedViewSet;
  delete DisplayStyleSet;
  delete ZoneSectionSet;
  delete HatchStyleSet;
  #endif
}

void ViewSetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (CameraSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CameraSet");
      CameraSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CameraSet>\n");
    }
  if (SavedViewSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SavedViewSet");
      SavedViewSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SavedViewSet>\n");
    }
  if (AnnotationViewSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AnnotationViewSet");
      AnnotationViewSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AnnotationViewSet>\n");
    }
  if (SimplifiedRepresentationSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SimplifiedRepresentationSet");
      SimplifiedRepresentationSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SimplifiedRepresentationSet>\n");
    }
  if (ExplodedViewSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExplodedViewSet");
      ExplodedViewSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ExplodedViewSet>\n");
    }
  if (DisplayStyleSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DisplayStyleSet");
      DisplayStyleSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DisplayStyleSet>\n");
    }
  if (ZoneSectionSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ZoneSectionSet");
      ZoneSectionSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ZoneSectionSet>\n");
    }
  if (HatchStyleSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<HatchStyleSet");
      HatchStyleSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</HatchStyleSet>\n");
    }
  doSpaces(-INDENT, outFile);
}

CameraSetType * ViewSetType::getCameraSet()
{return CameraSet;}

void ViewSetType::setCameraSet(CameraSetType * CameraSetIn)
{CameraSet = CameraSetIn;}

SavedViewSetType * ViewSetType::getSavedViewSet()
{return SavedViewSet;}

void ViewSetType::setSavedViewSet(SavedViewSetType * SavedViewSetIn)
{SavedViewSet = SavedViewSetIn;}

AnnotationViewSetType * ViewSetType::getAnnotationViewSet()
{return AnnotationViewSet;}

void ViewSetType::setAnnotationViewSet(AnnotationViewSetType * AnnotationViewSetIn)
{AnnotationViewSet = AnnotationViewSetIn;}

SimplifiedRepresentationSetType * ViewSetType::getSimplifiedRepresentationSet()
{return SimplifiedRepresentationSet;}

void ViewSetType::setSimplifiedRepresentationSet(SimplifiedRepresentationSetType * SimplifiedRepresentationSetIn)
{SimplifiedRepresentationSet = SimplifiedRepresentationSetIn;}

ExplodedViewSetType * ViewSetType::getExplodedViewSet()
{return ExplodedViewSet;}

void ViewSetType::setExplodedViewSet(ExplodedViewSetType * ExplodedViewSetIn)
{ExplodedViewSet = ExplodedViewSetIn;}

DisplayStyleSetType * ViewSetType::getDisplayStyleSet()
{return DisplayStyleSet;}

void ViewSetType::setDisplayStyleSet(DisplayStyleSetType * DisplayStyleSetIn)
{DisplayStyleSet = DisplayStyleSetIn;}

ZoneSectionSetType * ViewSetType::getZoneSectionSet()
{return ZoneSectionSet;}

void ViewSetType::setZoneSectionSet(ZoneSectionSetType * ZoneSectionSetIn)
{ZoneSectionSet = ZoneSectionSetIn;}

HatchStyleSetType * ViewSetType::getHatchStyleSet()
{return HatchStyleSet;}

void ViewSetType::setHatchStyleSet(HatchStyleSetType * HatchStyleSetIn)
{HatchStyleSet = HatchStyleSetIn;}

/* ***************************************************************** */

/* class VisualizationSetType

*/

VisualizationSetType::VisualizationSetType()
{
  Fonts = 0;
  TrailingZeroDisplay = 0;
  PMIDisplaySet = 0;
}

VisualizationSetType::VisualizationSetType(
 FontsType * FontsIn,
 TrailingZeroDisplayType * TrailingZeroDisplayIn,
 PMIDisplaySetType * PMIDisplaySetIn)
{
  Fonts = FontsIn;
  TrailingZeroDisplay = TrailingZeroDisplayIn;
  PMIDisplaySet = PMIDisplaySetIn;
}

VisualizationSetType::~VisualizationSetType()
{
  #ifndef NODESTRUCT
  delete Fonts;
  delete TrailingZeroDisplay;
  delete PMIDisplaySet;
  #endif
}

void VisualizationSetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Fonts");
  Fonts->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Fonts>\n");
  if (TrailingZeroDisplay)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrailingZeroDisplay");
      TrailingZeroDisplay->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TrailingZeroDisplay>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<PMIDisplaySet");
  PMIDisplaySet->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</PMIDisplaySet>\n");
  doSpaces(-INDENT, outFile);
}

FontsType * VisualizationSetType::getFonts()
{return Fonts;}

void VisualizationSetType::setFonts(FontsType * FontsIn)
{Fonts = FontsIn;}

TrailingZeroDisplayType * VisualizationSetType::getTrailingZeroDisplay()
{return TrailingZeroDisplay;}

void VisualizationSetType::setTrailingZeroDisplay(TrailingZeroDisplayType * TrailingZeroDisplayIn)
{TrailingZeroDisplay = TrailingZeroDisplayIn;}

PMIDisplaySetType * VisualizationSetType::getPMIDisplaySet()
{return PMIDisplaySet;}

void VisualizationSetType::setPMIDisplaySet(PMIDisplaySetType * PMIDisplaySetIn)
{PMIDisplaySet = PMIDisplaySetIn;}

/* ***************************************************************** */

/* class WeldContourSymbolType

*/

WeldContourSymbolType::WeldContourSymbolType() :
  OriginType()
{
  Symbol = 0;
}

WeldContourSymbolType::WeldContourSymbolType(
 Point2dSimpleType * OriginIn,
 WeldContourSymbolEnumType * SymbolIn) :
  OriginType(
    OriginIn)
{
  Symbol = SymbolIn;
}

WeldContourSymbolType::~WeldContourSymbolType()
{
  #ifndef NODESTRUCT
  delete Symbol;
  #endif
}

void WeldContourSymbolType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Symbol");
  Symbol->printSelf(outFile);
  fprintf(outFile, "</Symbol>\n");
  doSpaces(-INDENT, outFile);
}

WeldContourSymbolEnumType * WeldContourSymbolType::getSymbol()
{return Symbol;}

void WeldContourSymbolType::setSymbol(WeldContourSymbolEnumType * SymbolIn)
{Symbol = SymbolIn;}

/* ***************************************************************** */

/* class WeldMainSymbolEnumType

*/

WeldMainSymbolEnumType::WeldMainSymbolEnumType() :
  XmlString()
{
}

WeldMainSymbolEnumType::WeldMainSymbolEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "WELD_FILLET_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_FILLET_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_FILLET_BOTH") &&
           strcmp(val.c_str(), "WELD_SPOT_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_SPOT_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_SPOT_NO_SIDE") &&
           strcmp(val.c_str(), "WELD_STUD_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_SEAM_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_SEAM_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_SEAM_NO_SIDE") &&
           strcmp(val.c_str(), "WELD_SURFACING_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_EDGE_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_EDGE_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_SQUARE_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_SQUARE_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_SQUARE_BOTH") &&
           strcmp(val.c_str(), "WELD_V_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_V_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_V_BOTH") &&
           strcmp(val.c_str(), "WELD_BEVEL_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_BEVEL_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_BEVEL_BOTH") &&
           strcmp(val.c_str(), "WELD_U_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_U_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_U_BOTH") &&
           strcmp(val.c_str(), "WELD_J_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_J_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_J_BOTH") &&
           strcmp(val.c_str(), "WELD_FLARE_V_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_FLARE_V_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_FLARE_V_BOTH") &&
           strcmp(val.c_str(), "WELD_FLARE_BEVEL_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_FLARE_BEVEL_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_FLARE_BEVEL_BOTH") &&
           strcmp(val.c_str(), "WELD_SCARF_V_ARROW_SIDE") &&
           strcmp(val.c_str(), "WELD_SCARF_V_OTHER_SIDE") &&
           strcmp(val.c_str(), "WELD_SCARF_V_BOTH") &&
           strcmp(val.c_str(), "WELD_V_SPACER") &&
           strcmp(val.c_str(), "WELD_BEVEL_SPACER") &&
           strcmp(val.c_str(), "WELD_U_SPACER") &&
           strcmp(val.c_str(), "WELD_J_SPACER") &&
           strcmp(val.c_str(), "WELD_FLARE_V_SPACER") &&
           strcmp(val.c_str(), "WELD_FLARE_BEVEL_SPACER") &&
           strcmp(val.c_str(), "BACK_WELD") &&
           strcmp(val.c_str(), "MELT_THROUGH") &&
           strcmp(val.c_str(), "CONSUMABLE_INSERT") &&
           strcmp(val.c_str(), "REMOVABLE_BACKING"));
}

WeldMainSymbolEnumType::~WeldMainSymbolEnumType() {}

bool WeldMainSymbolEnumType::WeldMainSymbolEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "WELD_FILLET_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_FILLET_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_FILLET_BOTH") &&
          strcmp(val.c_str(), "WELD_SPOT_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_SPOT_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_SPOT_NO_SIDE") &&
          strcmp(val.c_str(), "WELD_STUD_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_SEAM_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_SEAM_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_SEAM_NO_SIDE") &&
          strcmp(val.c_str(), "WELD_SURFACING_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_EDGE_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_EDGE_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_SQUARE_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_SQUARE_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_SQUARE_BOTH") &&
          strcmp(val.c_str(), "WELD_V_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_V_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_V_BOTH") &&
          strcmp(val.c_str(), "WELD_BEVEL_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_BEVEL_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_BEVEL_BOTH") &&
          strcmp(val.c_str(), "WELD_U_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_U_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_U_BOTH") &&
          strcmp(val.c_str(), "WELD_J_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_J_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_J_BOTH") &&
          strcmp(val.c_str(), "WELD_FLARE_V_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_FLARE_V_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_FLARE_V_BOTH") &&
          strcmp(val.c_str(), "WELD_FLARE_BEVEL_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_FLARE_BEVEL_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_FLARE_BEVEL_BOTH") &&
          strcmp(val.c_str(), "WELD_SCARF_V_ARROW_SIDE") &&
          strcmp(val.c_str(), "WELD_SCARF_V_OTHER_SIDE") &&
          strcmp(val.c_str(), "WELD_SCARF_V_BOTH") &&
          strcmp(val.c_str(), "WELD_V_SPACER") &&
          strcmp(val.c_str(), "WELD_BEVEL_SPACER") &&
          strcmp(val.c_str(), "WELD_U_SPACER") &&
          strcmp(val.c_str(), "WELD_J_SPACER") &&
          strcmp(val.c_str(), "WELD_FLARE_V_SPACER") &&
          strcmp(val.c_str(), "WELD_FLARE_BEVEL_SPACER") &&
          strcmp(val.c_str(), "BACK_WELD") &&
          strcmp(val.c_str(), "MELT_THROUGH") &&
          strcmp(val.c_str(), "CONSUMABLE_INSERT") &&
          strcmp(val.c_str(), "REMOVABLE_BACKING"));
}

void WeldMainSymbolEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "WeldMainSymbolEnumType");
}

void WeldMainSymbolEnumType::printSelf(FILE * outFile)
{
  if (WeldMainSymbolEnumTypeIsBad())
    {
      fprintf(stderr, "bad WeldMainSymbolEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void WeldMainSymbolEnumType::oPrintSelf(FILE * outFile)
{
  if (WeldMainSymbolEnumTypeIsBad())
    {
      fprintf(stderr, "bad WeldMainSymbolEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class WeldMainSymbolType

*/

WeldMainSymbolType::WeldMainSymbolType() :
  OriginType()
{
  Symbol = 0;
}

WeldMainSymbolType::WeldMainSymbolType(
 Point2dSimpleType * OriginIn,
 WeldMainSymbolEnumType * SymbolIn) :
  OriginType(
    OriginIn)
{
  Symbol = SymbolIn;
}

WeldMainSymbolType::~WeldMainSymbolType()
{
  #ifndef NODESTRUCT
  delete Symbol;
  #endif
}

void WeldMainSymbolType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Symbol");
  Symbol->printSelf(outFile);
  fprintf(outFile, "</Symbol>\n");
  doSpaces(-INDENT, outFile);
}

WeldMainSymbolEnumType * WeldMainSymbolType::getSymbol()
{return Symbol;}

void WeldMainSymbolType::setSymbol(WeldMainSymbolEnumType * SymbolIn)
{Symbol = SymbolIn;}

/* ***************************************************************** */

/* class WeldSupplementarySymbolType

*/

WeldSupplementarySymbolType::WeldSupplementarySymbolType() :
  OriginType()
{
  Symbol = 0;
}

WeldSupplementarySymbolType::WeldSupplementarySymbolType(
 Point2dSimpleType * OriginIn,
 WeldSupplementarySymbolEnumType * SymbolIn) :
  OriginType(
    OriginIn)
{
  Symbol = SymbolIn;
}

WeldSupplementarySymbolType::~WeldSupplementarySymbolType()
{
  #ifndef NODESTRUCT
  delete Symbol;
  #endif
}

void WeldSupplementarySymbolType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Symbol");
  Symbol->printSelf(outFile);
  fprintf(outFile, "</Symbol>\n");
  doSpaces(-INDENT, outFile);
}

WeldSupplementarySymbolEnumType * WeldSupplementarySymbolType::getSymbol()
{return Symbol;}

void WeldSupplementarySymbolType::setSymbol(WeldSupplementarySymbolEnumType * SymbolIn)
{Symbol = SymbolIn;}

/* ***************************************************************** */

/* class WitnessLinesType

*/

WitnessLinesType::WitnessLinesType()
{
  width = 0;
  WitnessLinesTypePair = 0;
}

WitnessLinesType::WitnessLinesType(
 WitnessLinesTypeChoicePair * WitnessLinesTypePairIn)
{
  width = 0;
  WitnessLinesTypePair = WitnessLinesTypePairIn;
}

WitnessLinesType::WitnessLinesType(
 XmlDouble * widthIn,
 WitnessLinesTypeChoicePair * WitnessLinesTypePairIn)
{
  width = widthIn;
  WitnessLinesTypePair = WitnessLinesTypePairIn;
}

WitnessLinesType::~WitnessLinesType()
{
  #ifndef NODESTRUCT
  delete width;
  delete WitnessLinesTypePair;
  #endif
}

void WitnessLinesType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (width)
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
      fprintf(outFile, "width=\"");
      width->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"width\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  WitnessLinesTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

WitnessLinesTypeChoicePair * WitnessLinesType::getWitnessLinesTypePair()
{return WitnessLinesTypePair;}

void WitnessLinesType::setWitnessLinesTypePair(WitnessLinesTypeChoicePair * WitnessLinesTypePairIn)
{WitnessLinesTypePair = WitnessLinesTypePairIn;}

/* ***************************************************************** */

/* class WitnessLinesTypeChoicePair

*/

WitnessLinesTypeChoicePair::WitnessLinesTypeChoicePair() {}

WitnessLinesTypeChoicePair::WitnessLinesTypeChoicePair(
 whichOne WitnessLinesTypeTypeIn,
 WitnessLinesTypeVal WitnessLinesTypeValueIn)
{
  WitnessLinesTypeType = WitnessLinesTypeTypeIn;
  WitnessLinesTypeValue = WitnessLinesTypeValueIn;
}

WitnessLinesTypeChoicePair::~WitnessLinesTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (WitnessLinesTypeType == WitnessLinesTyp_1236E)
    delete WitnessLinesTypeValue.WitnessLinesTyp_1236;
  else if (WitnessLinesTypeType == WitnessLinesTyp_1237E)
    delete WitnessLinesTypeValue.WitnessLinesTyp_1237;
  #endif
}

void WitnessLinesTypeChoicePair::printSelf(FILE * outFile)
{
  if (WitnessLinesTypeType == WitnessLinesTyp_1236E)
    {
      WitnessLinesTypeValue.WitnessLinesTyp_1236->printSelf(outFile);
    }
  else if (WitnessLinesTypeType == WitnessLinesTyp_1237E)
    {
      WitnessLinesTypeValue.WitnessLinesTyp_1237->printSelf(outFile);
    }
}

bool WitnessLinesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "width")
        {
          XmlDouble * widthVal;
          if (width)
            {
              fprintf(stderr, "two values for width in WitnessLinesType\n");
              returnValue = true;
              break;
            }
          widthVal = new XmlDouble(decl->val.c_str());
          if (widthVal->bad)
            {
              delete widthVal;
              fprintf(stderr, "bad value %s for width in WitnessLinesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            width = widthVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in WitnessLinesType\n");
          returnValue = true;
          break;
        }
    }
  if (width == 0)
    {
      fprintf(stderr, "required attribute \"width\" missing in WitnessLinesType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete width;
      width = 0;
    }
  return returnValue;
}

XmlDouble * WitnessLinesType::getwidth()
{return width;}

void WitnessLinesType::setwidth(XmlDouble * widthIn)
{width = widthIn;}

/* ***************************************************************** */

/* class ZoneSectionPlaneType

*/

ZoneSectionPlaneType::ZoneSectionPlaneType()
{
  index = 0;
  Plane = 0;
  SectionGroups = 0;
}

ZoneSectionPlaneType::ZoneSectionPlaneType(
 PlaneXType * PlaneIn,
 SectionGroupsType * SectionGroupsIn)
{
  index = 0;
  Plane = PlaneIn;
  SectionGroups = SectionGroupsIn;
}

ZoneSectionPlaneType::ZoneSectionPlaneType(
 XmlUnsignedInt * indexIn,
 PlaneXType * PlaneIn,
 SectionGroupsType * SectionGroupsIn)
{
  index = indexIn;
  Plane = PlaneIn;
  SectionGroups = SectionGroupsIn;
}

ZoneSectionPlaneType::~ZoneSectionPlaneType()
{
  #ifndef NODESTRUCT
  delete index;
  delete Plane;
  delete SectionGroups;
  #endif
}

void ZoneSectionPlaneType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (index)
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
      fprintf(outFile, "index=\"");
      index->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"index\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Plane");
  Plane->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Plane>\n");
  if (SectionGroups)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SectionGroups");
      SectionGroups->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SectionGroups>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ZoneSectionPlaneType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "index")
        {
          XmlUnsignedInt * indexVal;
          if (index)
            {
              fprintf(stderr, "two values for index in ZoneSectionPlaneType\n");
              returnValue = true;
              break;
            }
          indexVal = new XmlUnsignedInt(decl->val.c_str());
          if (indexVal->bad)
            {
              delete indexVal;
              fprintf(stderr, "bad value %s for index in ZoneSectionPlaneType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            index = indexVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ZoneSectionPlaneType\n");
          returnValue = true;
          break;
        }
    }
  if (index == 0)
    {
      fprintf(stderr, "required attribute \"index\" missing in ZoneSectionPlaneType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete index;
      index = 0;
    }
  return returnValue;
}

XmlUnsignedInt * ZoneSectionPlaneType::getindex()
{return index;}

void ZoneSectionPlaneType::setindex(XmlUnsignedInt * indexIn)
{index = indexIn;}

PlaneXType * ZoneSectionPlaneType::getPlane()
{return Plane;}

void ZoneSectionPlaneType::setPlane(PlaneXType * PlaneIn)
{Plane = PlaneIn;}

SectionGroupsType * ZoneSectionPlaneType::getSectionGroups()
{return SectionGroups;}

void ZoneSectionPlaneType::setSectionGroups(SectionGroupsType * SectionGroupsIn)
{SectionGroups = SectionGroupsIn;}

/* ***************************************************************** */

/* class ZoneSectionPlaneTypeLisd

*/

ZoneSectionPlaneTypeLisd::ZoneSectionPlaneTypeLisd() {}

ZoneSectionPlaneTypeLisd::ZoneSectionPlaneTypeLisd(ZoneSectionPlaneType * aZoneSectionPlaneType)
{
  push_back(aZoneSectionPlaneType);
}

ZoneSectionPlaneTypeLisd::~ZoneSectionPlaneTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ZoneSectionPlaneType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ZoneSectionPlaneTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ZoneSectionPlanesType

*/

ZoneSectionPlanesType::ZoneSectionPlanesType()
{
  n = 0;
  SectionPlane = 0;
}

ZoneSectionPlanesType::ZoneSectionPlanesType(
 ZoneSectionPlaneTypeLisd * SectionPlaneIn)
{
  n = 0;
  SectionPlane = SectionPlaneIn;
}

ZoneSectionPlanesType::ZoneSectionPlanesType(
 NaturalType * nIn,
 ZoneSectionPlaneTypeLisd * SectionPlaneIn)
{
  n = nIn;
  SectionPlane = SectionPlaneIn;
}

ZoneSectionPlanesType::~ZoneSectionPlanesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SectionPlane;
  #endif
}

void ZoneSectionPlanesType::printSelf(FILE * outFile)
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
    if (!SectionPlane)
      {
        fprintf(stderr, "SectionPlane list is missing\n");
        exit(1);
      }
    if (SectionPlane->size() == 0)
      {
        fprintf(stderr, "SectionPlane list is empty\n");
        exit(1);
      }
    std::list<ZoneSectionPlaneType *>::iterator iter;
    for (iter = SectionPlane->begin();
         iter != SectionPlane->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SectionPlane");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SectionPlane>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ZoneSectionPlanesType::badAttributes(
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
              fprintf(stderr, "two values for n in ZoneSectionPlanesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ZoneSectionPlanesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ZoneSectionPlanesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ZoneSectionPlanesType\n");
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

NaturalType * ZoneSectionPlanesType::getn()
{return n;}

void ZoneSectionPlanesType::setn(NaturalType * nIn)
{n = nIn;}

ZoneSectionPlaneTypeLisd * ZoneSectionPlanesType::getSectionPlane()
{return SectionPlane;}

void ZoneSectionPlanesType::setSectionPlane(ZoneSectionPlaneTypeLisd * SectionPlaneIn)
{SectionPlane = SectionPlaneIn;}

/* ***************************************************************** */

/* class ZoneSectionSetType

*/

ZoneSectionSetType::ZoneSectionSetType()
{
  n = 0;
  ZoneSection = 0;
}

ZoneSectionSetType::ZoneSectionSetType(
 ZoneSectionTypeLisd * ZoneSectionIn)
{
  n = 0;
  ZoneSection = ZoneSectionIn;
}

ZoneSectionSetType::ZoneSectionSetType(
 NaturalType * nIn,
 ZoneSectionTypeLisd * ZoneSectionIn)
{
  n = nIn;
  ZoneSection = ZoneSectionIn;
}

ZoneSectionSetType::~ZoneSectionSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ZoneSection;
  #endif
}

void ZoneSectionSetType::printSelf(FILE * outFile)
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
    if (!ZoneSection)
      {
        fprintf(stderr, "ZoneSection list is missing\n");
        exit(1);
      }
    if (ZoneSection->size() == 0)
      {
        fprintf(stderr, "ZoneSection list is empty\n");
        exit(1);
      }
    std::list<ZoneSectionType *>::iterator iter;
    for (iter = ZoneSection->begin();
         iter != ZoneSection->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ZoneSection");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ZoneSection>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ZoneSectionSetType::badAttributes(
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
              fprintf(stderr, "two values for n in ZoneSectionSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ZoneSectionSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ZoneSectionSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ZoneSectionSetType\n");
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

NaturalType * ZoneSectionSetType::getn()
{return n;}

void ZoneSectionSetType::setn(NaturalType * nIn)
{n = nIn;}

ZoneSectionTypeLisd * ZoneSectionSetType::getZoneSection()
{return ZoneSection;}

void ZoneSectionSetType::setZoneSection(ZoneSectionTypeLisd * ZoneSectionIn)
{ZoneSection = ZoneSectionIn;}

/* ***************************************************************** */

/* class ZoneSectionType

*/

ZoneSectionType::ZoneSectionType() :
  NodeWithIdBaseType()
{
  hatching = 0;
  SectionPlanes = 0;
  LogicalOperations = 0;
}

ZoneSectionType::ZoneSectionType(
 AttributesType * AttributesIn,
 ZoneSectionPlanesType * SectionPlanesIn,
 LogicalOperationsType * LogicalOperationsIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  hatching = 0;
  SectionPlanes = SectionPlanesIn;
  LogicalOperations = LogicalOperationsIn;
}

ZoneSectionType::ZoneSectionType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlBoolean * hatchingIn,
 ZoneSectionPlanesType * SectionPlanesIn,
 LogicalOperationsType * LogicalOperationsIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  hatching = hatchingIn;
  SectionPlanes = SectionPlanesIn;
  LogicalOperations = LogicalOperationsIn;
}

ZoneSectionType::~ZoneSectionType()
{
  #ifndef NODESTRUCT
  delete hatching;
  delete SectionPlanes;
  delete LogicalOperations;
  #endif
}

void ZoneSectionType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (hatching)
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
      fprintf(outFile, "hatching=\"");
      hatching->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  fprintf(outFile, "<SectionPlanes");
  SectionPlanes->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SectionPlanes>\n");
  if (LogicalOperations)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LogicalOperations");
      LogicalOperations->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LogicalOperations>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ZoneSectionType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "hatching")
        {
          XmlBoolean * hatchingVal;
          if (hatching)
            {
              fprintf(stderr, "two values for hatching in ZoneSectionType\n");
              returnValue = true;
              break;
            }
          hatchingVal = new XmlBoolean(decl->val.c_str());
          if (hatchingVal->bad)
            {
              delete hatchingVal;
              fprintf(stderr, "bad value %s for hatching in ZoneSectionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hatching = hatchingVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in ZoneSectionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ZoneSectionType\n",
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
              fprintf(stderr, "two values for label in ZoneSectionType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ZoneSectionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ZoneSectionType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ZoneSectionType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete hatching;
      hatching = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
    }
  return returnValue;
}

XmlBoolean * ZoneSectionType::gethatching()
{return hatching;}

void ZoneSectionType::sethatching(XmlBoolean * hatchingIn)
{hatching = hatchingIn;}

ZoneSectionPlanesType * ZoneSectionType::getSectionPlanes()
{return SectionPlanes;}

void ZoneSectionType::setSectionPlanes(ZoneSectionPlanesType * SectionPlanesIn)
{SectionPlanes = SectionPlanesIn;}

LogicalOperationsType * ZoneSectionType::getLogicalOperations()
{return LogicalOperations;}

void ZoneSectionType::setLogicalOperations(LogicalOperationsType * LogicalOperationsIn)
{LogicalOperations = LogicalOperationsIn;}

/* ***************************************************************** */

/* class ZoneSectionTypeLisd

*/

ZoneSectionTypeLisd::ZoneSectionTypeLisd() {}

ZoneSectionTypeLisd::ZoneSectionTypeLisd(ZoneSectionType * aZoneSectionType)
{
  push_back(aZoneSectionType);
}

ZoneSectionTypeLisd::~ZoneSectionTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ZoneSectionType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ZoneSectionTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ExplodedViewMov_1231_Type

*/

ExplodedViewMov_1231_Type::ExplodedViewMov_1231_Type()
{
  ExplodedViewMov_1231_TypePair = 0;
}

ExplodedViewMov_1231_Type::ExplodedViewMov_1231_Type(
 ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_TypePairIn)
{
  ExplodedViewMov_1231_TypePair = ExplodedViewMov_1231_TypePairIn;
}

ExplodedViewMov_1231_Type::~ExplodedViewMov_1231_Type()
{
  #ifndef NODESTRUCT
  delete ExplodedViewMov_1231_TypePair;
  #endif
}

void ExplodedViewMov_1231_Type::printSelf(FILE * outFile)
{
  ExplodedViewMov_1231_TypePair->printSelf(outFile);
}

ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_Type::getExplodedViewMov_1231_TypePair()
{return ExplodedViewMov_1231_TypePair;}

void ExplodedViewMov_1231_Type::setExplodedViewMov_1231_TypePair(ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_TypePairIn)
{ExplodedViewMov_1231_TypePair = ExplodedViewMov_1231_TypePairIn;}

/* ***************************************************************** */

/* class ExplodedViewMov_1231_TypeChoicePair

*/

ExplodedViewMov_1231_TypeChoicePair::ExplodedViewMov_1231_TypeChoicePair() {}

ExplodedViewMov_1231_TypeChoicePair::ExplodedViewMov_1231_TypeChoicePair(
 whichOne ExplodedViewMov_1231_TypeTypeIn,
 ExplodedViewMov_1231_TypeVal ExplodedViewMov_1231_TypeValueIn)
{
  ExplodedViewMov_1231_TypeType = ExplodedViewMov_1231_TypeTypeIn;
  ExplodedViewMov_1231_TypeValue = ExplodedViewMov_1231_TypeValueIn;
}

ExplodedViewMov_1231_TypeChoicePair::~ExplodedViewMov_1231_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ExplodedViewMov_1231_TypeType == TranslateE)
    delete ExplodedViewMov_1231_TypeValue.Translate;
  else if (ExplodedViewMov_1231_TypeType == RotateE)
    delete ExplodedViewMov_1231_TypeValue.Rotate;
  #endif
}

void ExplodedViewMov_1231_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ExplodedViewMov_1231_TypeType == TranslateE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Translate");
      ExplodedViewMov_1231_TypeValue.Translate->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Translate>\n");
    }
  else if (ExplodedViewMov_1231_TypeType == RotateE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Rotate");
      ExplodedViewMov_1231_TypeValue.Rotate->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Rotate>\n");
    }
}

/* ***************************************************************** */

/* class LogicalOperatio_1232_Type

*/

LogicalOperatio_1232_Type::LogicalOperatio_1232_Type()
{
  LogicalOperatio_1232_TypePairs = 0;
}

LogicalOperatio_1232_Type::LogicalOperatio_1232_Type(
 LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_TypePairsIn)
{
  LogicalOperatio_1232_TypePairs = LogicalOperatio_1232_TypePairsIn;
}

LogicalOperatio_1232_Type::~LogicalOperatio_1232_Type()
{
  #ifndef NODESTRUCT
  delete LogicalOperatio_1232_TypePairs;
  #endif
}

void LogicalOperatio_1232_Type::printSelf(FILE * outFile)
{
  std::list<LogicalOperatio_1232_TypeChoicePair *>::iterator iter;

  for (iter = LogicalOperatio_1232_TypePairs->begin();
       iter != LogicalOperatio_1232_TypePairs->end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_Type::getLogicalOperatio_1232_TypePairs()
{return LogicalOperatio_1232_TypePairs;}

void LogicalOperatio_1232_Type::setLogicalOperatio_1232_TypePairs(LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_TypePairsIn)
{LogicalOperatio_1232_TypePairs = LogicalOperatio_1232_TypePairsIn;}

/* ***************************************************************** */

/* class LogicalOperatio_1232_TypeChoicePair

*/

LogicalOperatio_1232_TypeChoicePair::LogicalOperatio_1232_TypeChoicePair() {}

LogicalOperatio_1232_TypeChoicePair::LogicalOperatio_1232_TypeChoicePair(
 whichOne LogicalOperatio_1232_TypeTypeIn,
 LogicalOperatio_1232_TypeVal LogicalOperatio_1232_TypeValueIn)
{
  LogicalOperatio_1232_TypeType = LogicalOperatio_1232_TypeTypeIn;
  LogicalOperatio_1232_TypeValue = LogicalOperatio_1232_TypeValueIn;
}

LogicalOperatio_1232_TypeChoicePair::~LogicalOperatio_1232_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LogicalOperatio_1232_TypeType == SectionPlaneE)
    delete LogicalOperatio_1232_TypeValue.SectionPlane;
  else if (LogicalOperatio_1232_TypeType == LogicalOperationResultE)
    delete LogicalOperatio_1232_TypeValue.LogicalOperationResult;
  #endif
}

void LogicalOperatio_1232_TypeChoicePair::printSelf(FILE * outFile)
{
  if (LogicalOperatio_1232_TypeType == SectionPlaneE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SectionPlane");
      LogicalOperatio_1232_TypeValue.SectionPlane->printSelf(outFile);
      fprintf(outFile, "</SectionPlane>\n");
    }
  else if (LogicalOperatio_1232_TypeType == LogicalOperationResultE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LogicalOperationResult");
      LogicalOperatio_1232_TypeValue.LogicalOperationResult->printSelf(outFile);
      fprintf(outFile, "</LogicalOperationResult>\n");
    }
}

/* ***************************************************************** */

/* class LogicalOperatio_1232_TypeChoicePairLisd

*/

LogicalOperatio_1232_TypeChoicePairLisd::LogicalOperatio_1232_TypeChoicePairLisd() {}

LogicalOperatio_1232_TypeChoicePairLisd::LogicalOperatio_1232_TypeChoicePairLisd(LogicalOperatio_1232_TypeChoicePair * aLogicalOperatio_1232_TypeChoicePair)
{
  push_back(aLogicalOperatio_1232_TypeChoicePair);
}

LogicalOperatio_1232_TypeChoicePairLisd::~LogicalOperatio_1232_TypeChoicePairLisd()
{
  #ifndef NODESTRUCT
  std::list<LogicalOperatio_1232_TypeChoicePair *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LogicalOperatio_1232_TypeChoicePairLisd::printSelf(FILE * outFile)
{
  std::list<LogicalOperatio_1232_TypeChoicePair *>::iterator iter;

  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

/* ***************************************************************** */

/* class LogicalOperatio_1232_TypeLisd

*/

LogicalOperatio_1232_TypeLisd::LogicalOperatio_1232_TypeLisd() {}

LogicalOperatio_1232_TypeLisd::LogicalOperatio_1232_TypeLisd(LogicalOperatio_1232_Type * aLogicalOperatio_1232_Type)
{
  push_back(aLogicalOperatio_1232_Type);
}

LogicalOperatio_1232_TypeLisd::~LogicalOperatio_1232_TypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LogicalOperatio_1232_Type *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LogicalOperatio_1232_TypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class Polyline2dType_1233_Type

*/

Polyline2dType_1233_Type::Polyline2dType_1233_Type()
{
  Polyline2dType_1233_TypePair = 0;
}

Polyline2dType_1233_Type::Polyline2dType_1233_Type(
 Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_TypePairIn)
{
  Polyline2dType_1233_TypePair = Polyline2dType_1233_TypePairIn;
}

Polyline2dType_1233_Type::~Polyline2dType_1233_Type()
{
  #ifndef NODESTRUCT
  delete Polyline2dType_1233_TypePair;
  #endif
}

void Polyline2dType_1233_Type::printSelf(FILE * outFile)
{
  Polyline2dType_1233_TypePair->printSelf(outFile);
}

Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_Type::getPolyline2dType_1233_TypePair()
{return Polyline2dType_1233_TypePair;}

void Polyline2dType_1233_Type::setPolyline2dType_1233_TypePair(Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_TypePairIn)
{Polyline2dType_1233_TypePair = Polyline2dType_1233_TypePairIn;}

/* ***************************************************************** */

/* class Polyline2dType_1233_TypeChoicePair

*/

Polyline2dType_1233_TypeChoicePair::Polyline2dType_1233_TypeChoicePair() {}

Polyline2dType_1233_TypeChoicePair::Polyline2dType_1233_TypeChoicePair(
 whichOne Polyline2dType_1233_TypeTypeIn,
 Polyline2dType_1233_TypeVal Polyline2dType_1233_TypeValueIn)
{
  Polyline2dType_1233_TypeType = Polyline2dType_1233_TypeTypeIn;
  Polyline2dType_1233_TypeValue = Polyline2dType_1233_TypeValueIn;
}

Polyline2dType_1233_TypeChoicePair::~Polyline2dType_1233_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Polyline2dType_1233_TypeType == PointsE)
    delete Polyline2dType_1233_TypeValue.Points;
  else if (Polyline2dType_1233_TypeType == PointsBinaryE)
    delete Polyline2dType_1233_TypeValue.PointsBinary;
  #endif
}

void Polyline2dType_1233_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Polyline2dType_1233_TypeType == PointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      Polyline2dType_1233_TypeValue.Points->printSelf(outFile);
      fprintf(outFile, "</Points>\n");
    }
  else if (Polyline2dType_1233_TypeType == PointsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsBinary");
      Polyline2dType_1233_TypeValue.PointsBinary->printSelf(outFile);
      fprintf(outFile, "</PointsBinary>\n");
    }
}

/* ***************************************************************** */

/* class Triangulation2d_1234_Type

*/

Triangulation2d_1234_Type::Triangulation2d_1234_Type()
{
  Triangulation2d_1234_TypePair = 0;
}

Triangulation2d_1234_Type::Triangulation2d_1234_Type(
 Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_TypePairIn)
{
  Triangulation2d_1234_TypePair = Triangulation2d_1234_TypePairIn;
}

Triangulation2d_1234_Type::~Triangulation2d_1234_Type()
{
  #ifndef NODESTRUCT
  delete Triangulation2d_1234_TypePair;
  #endif
}

void Triangulation2d_1234_Type::printSelf(FILE * outFile)
{
  Triangulation2d_1234_TypePair->printSelf(outFile);
}

Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_Type::getTriangulation2d_1234_TypePair()
{return Triangulation2d_1234_TypePair;}

void Triangulation2d_1234_Type::setTriangulation2d_1234_TypePair(Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_TypePairIn)
{Triangulation2d_1234_TypePair = Triangulation2d_1234_TypePairIn;}

/* ***************************************************************** */

/* class Triangulation2d_1234_TypeChoicePair

*/

Triangulation2d_1234_TypeChoicePair::Triangulation2d_1234_TypeChoicePair() {}

Triangulation2d_1234_TypeChoicePair::Triangulation2d_1234_TypeChoicePair(
 whichOne Triangulation2d_1234_TypeTypeIn,
 Triangulation2d_1234_TypeVal Triangulation2d_1234_TypeValueIn)
{
  Triangulation2d_1234_TypeType = Triangulation2d_1234_TypeTypeIn;
  Triangulation2d_1234_TypeValue = Triangulation2d_1234_TypeValueIn;
}

Triangulation2d_1234_TypeChoicePair::~Triangulation2d_1234_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Triangulation2d_1234_TypeType == VerticesE)
    delete Triangulation2d_1234_TypeValue.Vertices;
  else if (Triangulation2d_1234_TypeType == VerticesBinaryE)
    delete Triangulation2d_1234_TypeValue.VerticesBinary;
  #endif
}

void Triangulation2d_1234_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Triangulation2d_1234_TypeType == VerticesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Vertices");
      Triangulation2d_1234_TypeValue.Vertices->printSelf(outFile);
      fprintf(outFile, "</Vertices>\n");
    }
  else if (Triangulation2d_1234_TypeType == VerticesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VerticesBinary");
      Triangulation2d_1234_TypeValue.VerticesBinary->printSelf(outFile);
      fprintf(outFile, "</VerticesBinary>\n");
    }
}

/* ***************************************************************** */

/* class Triangulation2d_1235_Type

*/

Triangulation2d_1235_Type::Triangulation2d_1235_Type()
{
  Triangulation2d_1235_TypePair = 0;
}

Triangulation2d_1235_Type::Triangulation2d_1235_Type(
 Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_TypePairIn)
{
  Triangulation2d_1235_TypePair = Triangulation2d_1235_TypePairIn;
}

Triangulation2d_1235_Type::~Triangulation2d_1235_Type()
{
  #ifndef NODESTRUCT
  delete Triangulation2d_1235_TypePair;
  #endif
}

void Triangulation2d_1235_Type::printSelf(FILE * outFile)
{
  Triangulation2d_1235_TypePair->printSelf(outFile);
}

Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_Type::getTriangulation2d_1235_TypePair()
{return Triangulation2d_1235_TypePair;}

void Triangulation2d_1235_Type::setTriangulation2d_1235_TypePair(Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_TypePairIn)
{Triangulation2d_1235_TypePair = Triangulation2d_1235_TypePairIn;}

/* ***************************************************************** */

/* class Triangulation2d_1235_TypeChoicePair

*/

Triangulation2d_1235_TypeChoicePair::Triangulation2d_1235_TypeChoicePair() {}

Triangulation2d_1235_TypeChoicePair::Triangulation2d_1235_TypeChoicePair(
 whichOne Triangulation2d_1235_TypeTypeIn,
 Triangulation2d_1235_TypeVal Triangulation2d_1235_TypeValueIn)
{
  Triangulation2d_1235_TypeType = Triangulation2d_1235_TypeTypeIn;
  Triangulation2d_1235_TypeValue = Triangulation2d_1235_TypeValueIn;
}

Triangulation2d_1235_TypeChoicePair::~Triangulation2d_1235_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (Triangulation2d_1235_TypeType == TrianglesE)
    delete Triangulation2d_1235_TypeValue.Triangles;
  else if (Triangulation2d_1235_TypeType == TrianglesBinaryE)
    delete Triangulation2d_1235_TypeValue.TrianglesBinary;
  else if (Triangulation2d_1235_TypeType == TrianglesColorE)
    delete Triangulation2d_1235_TypeValue.TrianglesColor;
  else if (Triangulation2d_1235_TypeType == TrianglesColorBinaryE)
    delete Triangulation2d_1235_TypeValue.TrianglesColorBinary;
  #endif
}

void Triangulation2d_1235_TypeChoicePair::printSelf(FILE * outFile)
{
  if (Triangulation2d_1235_TypeType == TrianglesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Triangles");
      Triangulation2d_1235_TypeValue.Triangles->printSelf(outFile);
      fprintf(outFile, "</Triangles>\n");
    }
  else if (Triangulation2d_1235_TypeType == TrianglesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesBinary");
      Triangulation2d_1235_TypeValue.TrianglesBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesBinary>\n");
    }
  else if (Triangulation2d_1235_TypeType == TrianglesColorE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesColor");
      Triangulation2d_1235_TypeValue.TrianglesColor->printSelf(outFile);
      fprintf(outFile, "</TrianglesColor>\n");
    }
  else if (Triangulation2d_1235_TypeType == TrianglesColorBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesColorBinary");
      Triangulation2d_1235_TypeValue.TrianglesColorBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesColorBinary>\n");
    }
}

/* ***************************************************************** */

/* class WitnessLinesTyp_1236_Type

*/

WitnessLinesTyp_1236_Type::WitnessLinesTyp_1236_Type()
{
  Segment1 = 0;
  ZextensionPoint1 = 0;
  Segment2 = 0;
  ZextensionPoint2 = 0;
}

WitnessLinesTyp_1236_Type::WitnessLinesTyp_1236_Type(
 LineSegment2dType * Segment1In,
 PointSimpleType * ZextensionPoint1In,
 LineSegment2dType * Segment2In,
 PointSimpleType * ZextensionPoint2In)
{
  Segment1 = Segment1In;
  ZextensionPoint1 = ZextensionPoint1In;
  Segment2 = Segment2In;
  ZextensionPoint2 = ZextensionPoint2In;
}

WitnessLinesTyp_1236_Type::~WitnessLinesTyp_1236_Type()
{
  #ifndef NODESTRUCT
  delete Segment1;
  delete ZextensionPoint1;
  delete Segment2;
  delete ZextensionPoint2;
  #endif
}

void WitnessLinesTyp_1236_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<Segment1");
  Segment1->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Segment1>\n");
  if (ZextensionPoint1)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ZextensionPoint1");
      ZextensionPoint1->printSelf(outFile);
      fprintf(outFile, "</ZextensionPoint1>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Segment2");
  Segment2->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Segment2>\n");
  if (ZextensionPoint2)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ZextensionPoint2");
      ZextensionPoint2->printSelf(outFile);
      fprintf(outFile, "</ZextensionPoint2>\n");
    }
}

LineSegment2dType * WitnessLinesTyp_1236_Type::getSegment1()
{return Segment1;}

void WitnessLinesTyp_1236_Type::setSegment1(LineSegment2dType * Segment1In)
{Segment1 = Segment1In;}

PointSimpleType * WitnessLinesTyp_1236_Type::getZextensionPoint1()
{return ZextensionPoint1;}

void WitnessLinesTyp_1236_Type::setZextensionPoint1(PointSimpleType * ZextensionPoint1In)
{ZextensionPoint1 = ZextensionPoint1In;}

LineSegment2dType * WitnessLinesTyp_1236_Type::getSegment2()
{return Segment2;}

void WitnessLinesTyp_1236_Type::setSegment2(LineSegment2dType * Segment2In)
{Segment2 = Segment2In;}

PointSimpleType * WitnessLinesTyp_1236_Type::getZextensionPoint2()
{return ZextensionPoint2;}

void WitnessLinesTyp_1236_Type::setZextensionPoint2(PointSimpleType * ZextensionPoint2In)
{ZextensionPoint2 = ZextensionPoint2In;}

/* ***************************************************************** */

/* class WitnessLinesTyp_1237_Type

*/

WitnessLinesTyp_1237_Type::WitnessLinesTyp_1237_Type()
{
  BeginPoint = 0;
  EndPoint = 0;
  CircleCenter = 0;
  CircleRadius = 0;
}

WitnessLinesTyp_1237_Type::WitnessLinesTyp_1237_Type(
 Point2dSimpleType * BeginPointIn,
 Point2dSimpleType * EndPointIn,
 Point2dSimpleType * CircleCenterIn,
 DoublePositiveType * CircleRadiusIn)
{
  BeginPoint = BeginPointIn;
  EndPoint = EndPointIn;
  CircleCenter = CircleCenterIn;
  CircleRadius = CircleRadiusIn;
}

WitnessLinesTyp_1237_Type::~WitnessLinesTyp_1237_Type()
{
  #ifndef NODESTRUCT
  delete BeginPoint;
  delete EndPoint;
  delete CircleCenter;
  delete CircleRadius;
  #endif
}

void WitnessLinesTyp_1237_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<BeginPoint");
  BeginPoint->printSelf(outFile);
  fprintf(outFile, "</BeginPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<CircleCenter");
  CircleCenter->printSelf(outFile);
  fprintf(outFile, "</CircleCenter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<CircleRadius");
  CircleRadius->printSelf(outFile);
  fprintf(outFile, "</CircleRadius>\n");
}

Point2dSimpleType * WitnessLinesTyp_1237_Type::getBeginPoint()
{return BeginPoint;}

void WitnessLinesTyp_1237_Type::setBeginPoint(Point2dSimpleType * BeginPointIn)
{BeginPoint = BeginPointIn;}

Point2dSimpleType * WitnessLinesTyp_1237_Type::getEndPoint()
{return EndPoint;}

void WitnessLinesTyp_1237_Type::setEndPoint(Point2dSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

Point2dSimpleType * WitnessLinesTyp_1237_Type::getCircleCenter()
{return CircleCenter;}

void WitnessLinesTyp_1237_Type::setCircleCenter(Point2dSimpleType * CircleCenterIn)
{CircleCenter = CircleCenterIn;}

DoublePositiveType * WitnessLinesTyp_1237_Type::getCircleRadius()
{return CircleRadius;}

void WitnessLinesTyp_1237_Type::setCircleRadius(DoublePositiveType * CircleRadiusIn)
{CircleRadius = CircleRadiusIn;}

/* ***************************************************************** */

