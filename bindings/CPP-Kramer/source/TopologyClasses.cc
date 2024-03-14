/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "TopologyClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class BodyFormEnumType

*/

BodyFormEnumType::BodyFormEnumType() :
  XmlNMTOKEN()
{
}

BodyFormEnumType::BodyFormEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "UNDEFINED") &&
           strcmp(val.c_str(), "TRIMMED_SURFACE") &&
           strcmp(val.c_str(), "WIRE") &&
           strcmp(val.c_str(), "SOLID") &&
           strcmp(val.c_str(), "SHEET") &&
           strcmp(val.c_str(), "MIXED"));
}

BodyFormEnumType::~BodyFormEnumType() {}

bool BodyFormEnumType::BodyFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "UNDEFINED") &&
          strcmp(val.c_str(), "TRIMMED_SURFACE") &&
          strcmp(val.c_str(), "WIRE") &&
          strcmp(val.c_str(), "SOLID") &&
          strcmp(val.c_str(), "SHEET") &&
          strcmp(val.c_str(), "MIXED"));
}

void BodyFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "BodyFormEnumType");
}

void BodyFormEnumType::printSelf(FILE * outFile)
{
  if (BodyFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad BodyFormEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void BodyFormEnumType::oPrintSelf(FILE * outFile)
{
  if (BodyFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad BodyFormEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class BodySetType

*/

BodySetType::BodySetType()
{
  n = 0;
  Body = 0;
}

BodySetType::BodySetType(
 BodyTypeLisd * BodyIn)
{
  n = 0;
  Body = BodyIn;
}

BodySetType::BodySetType(
 NaturalType * nIn,
 BodyTypeLisd * BodyIn)
{
  n = nIn;
  Body = BodyIn;
}

BodySetType::~BodySetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Body;
  #endif
}

void BodySetType::printSelf(FILE * outFile)
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
    if (!Body)
      {
        fprintf(stderr, "Body list is missing\n");
        exit(1);
      }
    if (Body->size() == 0)
      {
        fprintf(stderr, "Body list is empty\n");
        exit(1);
      }
    if (Body->size() < 1)
      {
        fprintf(stderr,
                "size of Body list (%d) less than minimum required (1)\n",
                (int)Body->size());
        exit(1);
      }
    std::list<BodyType *>::iterator iter;
    for (iter = Body->begin();
         iter != Body->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Body");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Body>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool BodySetType::badAttributes(
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
              fprintf(stderr, "two values for n in BodySetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in BodySetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BodySetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in BodySetType\n");
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

NaturalType * BodySetType::getn()
{return n;}

void BodySetType::setn(NaturalType * nIn)
{n = nIn;}

BodyTypeLisd * BodySetType::getBody()
{return Body;}

void BodySetType::setBody(BodyTypeLisd * BodyIn)
{Body = BodyIn;}

/* ***************************************************************** */

/* class BodyType

*/

BodyType::BodyType() :
  TopologyBaseType()
{
  form = 0;
  materialIndex = 0;
  Validation = 0;
  Transform = 0;
  ShellIds = 0;
  FaceIds = 0;
  LoopIds = 0;
  EdgeIds = 0;
  VertexIds = 0;
}

BodyType::BodyType(
 AttributesType * AttributesIn,
 ValidationBodyType * ValidationIn,
 ElementReferenceType * TransformIn,
 ArrayReferenceType * ShellIdsIn,
 ArrayReferenceType * FaceIdsIn,
 ArrayReferenceType * LoopIdsIn,
 ArrayReferenceType * EdgeIdsIn,
 ArrayReferenceType * VertexIdsIn) :
  TopologyBaseType(
    AttributesIn)
{
  form = 0;
  materialIndex = 0;
  Validation = ValidationIn;
  Transform = TransformIn;
  ShellIds = ShellIdsIn;
  FaceIds = FaceIdsIn;
  LoopIds = LoopIdsIn;
  EdgeIds = EdgeIdsIn;
  VertexIds = VertexIdsIn;
}

BodyType::BodyType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 BodyFormEnumType * formIn,
 NaturalType * materialIndexIn,
 ValidationBodyType * ValidationIn,
 ElementReferenceType * TransformIn,
 ArrayReferenceType * ShellIdsIn,
 ArrayReferenceType * FaceIdsIn,
 ArrayReferenceType * LoopIdsIn,
 ArrayReferenceType * EdgeIdsIn,
 ArrayReferenceType * VertexIdsIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  form = formIn;
  materialIndex = materialIndexIn;
  Validation = ValidationIn;
  Transform = TransformIn;
  ShellIds = ShellIdsIn;
  FaceIds = FaceIdsIn;
  LoopIds = LoopIdsIn;
  EdgeIds = EdgeIdsIn;
  VertexIds = VertexIdsIn;
}

BodyType::~BodyType()
{
  #ifndef NODESTRUCT
  delete form;
  delete materialIndex;
  delete Validation;
  delete Transform;
  delete ShellIds;
  delete FaceIds;
  delete LoopIds;
  delete EdgeIds;
  delete VertexIds;
  #endif
}

void BodyType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (materialIndex)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "materialIndex=\"");
      materialIndex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  if (ShellIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ShellIds");
      ShellIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ShellIds>\n");
    }
  if (FaceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FaceIds");
      FaceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FaceIds>\n");
    }
  if (LoopIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LoopIds");
      LoopIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LoopIds>\n");
    }
  if (EdgeIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EdgeIds");
      EdgeIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EdgeIds>\n");
    }
  if (VertexIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VertexIds");
      VertexIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</VertexIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool BodyType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in BodyType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "form")
        {
          BodyFormEnumType * formVal;
          if (this->form)
            {
              fprintf(stderr, "two values for form in BodyType\n");
              returnValue = true;
              break;
            }
          formVal = new BodyFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->form = formVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in BodyType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in BodyType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in BodyType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "materialIndex")
        {
          NaturalType * materialIndexVal;
          if (this->materialIndex)
            {
              fprintf(stderr, "two values for materialIndex in BodyType\n");
              returnValue = true;
              break;
            }
          materialIndexVal = new NaturalType(decl->val.c_str());
          if (materialIndexVal->bad)
            {
              delete materialIndexVal;
              fprintf(stderr, "bad value %s for materialIndex in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->materialIndex = materialIndexVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in BodyType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in BodyType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in BodyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BodyType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in BodyType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->form;
      this->form = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->materialIndex;
      this->materialIndex = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

BodyFormEnumType * BodyType::getform()
{return form;}

void BodyType::setform(BodyFormEnumType * formIn)
{form = formIn;}

NaturalType * BodyType::getmaterialIndex()
{return materialIndex;}

void BodyType::setmaterialIndex(NaturalType * materialIndexIn)
{materialIndex = materialIndexIn;}

ValidationBodyType * BodyType::getValidation()
{return Validation;}

void BodyType::setValidation(ValidationBodyType * ValidationIn)
{Validation = ValidationIn;}

ElementReferenceType * BodyType::getTransform()
{return Transform;}

void BodyType::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

ArrayReferenceType * BodyType::getShellIds()
{return ShellIds;}

void BodyType::setShellIds(ArrayReferenceType * ShellIdsIn)
{ShellIds = ShellIdsIn;}

ArrayReferenceType * BodyType::getFaceIds()
{return FaceIds;}

void BodyType::setFaceIds(ArrayReferenceType * FaceIdsIn)
{FaceIds = FaceIdsIn;}

ArrayReferenceType * BodyType::getLoopIds()
{return LoopIds;}

void BodyType::setLoopIds(ArrayReferenceType * LoopIdsIn)
{LoopIds = LoopIdsIn;}

ArrayReferenceType * BodyType::getEdgeIds()
{return EdgeIds;}

void BodyType::setEdgeIds(ArrayReferenceType * EdgeIdsIn)
{EdgeIds = EdgeIdsIn;}

ArrayReferenceType * BodyType::getVertexIds()
{return VertexIds;}

void BodyType::setVertexIds(ArrayReferenceType * VertexIdsIn)
{VertexIds = VertexIdsIn;}

/* ***************************************************************** */

/* class BodyTypeLisd

*/

BodyTypeLisd::BodyTypeLisd() {}

BodyTypeLisd::BodyTypeLisd(BodyType * aBodyType)
{
  push_back(aBodyType);
}

BodyTypeLisd::~BodyTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<BodyType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void BodyTypeLisd::printSelf(FILE * outFile)
{
  std::list<BodyType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoEdgeMeshType

*/

CoEdgeMeshType::CoEdgeMeshType()
{
  EdgeOriented = 0;
  CurveMesh = 0;
}

CoEdgeMeshType::CoEdgeMeshType(
 EdgeOrientedType * EdgeOrientedIn,
 ElementReferenceType * CurveMeshIn)
{
  EdgeOriented = EdgeOrientedIn;
  CurveMesh = CurveMeshIn;
}

CoEdgeMeshType::~CoEdgeMeshType()
{
  #ifndef NODESTRUCT
  delete EdgeOriented;
  delete CurveMesh;
  #endif
}

void CoEdgeMeshType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<EdgeOriented");
  EdgeOriented->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</EdgeOriented>\n");
  if (CurveMesh)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CurveMesh");
      CurveMesh->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CurveMesh>\n");
    }
  doSpaces(-INDENT, outFile);
}

EdgeOrientedType * CoEdgeMeshType::getEdgeOriented()
{return EdgeOriented;}

void CoEdgeMeshType::setEdgeOriented(EdgeOrientedType * EdgeOrientedIn)
{EdgeOriented = EdgeOrientedIn;}

ElementReferenceType * CoEdgeMeshType::getCurveMesh()
{return CurveMesh;}

void CoEdgeMeshType::setCurveMesh(ElementReferenceType * CurveMeshIn)
{CurveMesh = CurveMeshIn;}

/* ***************************************************************** */

/* class CoEdgeMeshTypeLisd

*/

CoEdgeMeshTypeLisd::CoEdgeMeshTypeLisd() {}

CoEdgeMeshTypeLisd::CoEdgeMeshTypeLisd(CoEdgeMeshType * aCoEdgeMeshType)
{
  push_back(aCoEdgeMeshType);
}

CoEdgeMeshTypeLisd::~CoEdgeMeshTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CoEdgeMeshType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CoEdgeMeshTypeLisd::printSelf(FILE * outFile)
{
  std::list<CoEdgeMeshType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoEdgeType

*/

CoEdgeType::CoEdgeType()
{
  EdgeOriented = 0;
  Curve12 = 0;
}

CoEdgeType::CoEdgeType(
 EdgeOrientedType * EdgeOrientedIn,
 ElementReferenceType * Curve12In)
{
  EdgeOriented = EdgeOrientedIn;
  Curve12 = Curve12In;
}

CoEdgeType::~CoEdgeType()
{
  #ifndef NODESTRUCT
  delete EdgeOriented;
  delete Curve12;
  #endif
}

void CoEdgeType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<EdgeOriented");
  EdgeOriented->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</EdgeOriented>\n");
  if (Curve12)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Curve12");
      Curve12->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Curve12>\n");
    }
  doSpaces(-INDENT, outFile);
}

EdgeOrientedType * CoEdgeType::getEdgeOriented()
{return EdgeOriented;}

void CoEdgeType::setEdgeOriented(EdgeOrientedType * EdgeOrientedIn)
{EdgeOriented = EdgeOrientedIn;}

ElementReferenceType * CoEdgeType::getCurve12()
{return Curve12;}

void CoEdgeType::setCurve12(ElementReferenceType * Curve12In)
{Curve12 = Curve12In;}

/* ***************************************************************** */

/* class CoEdgeTypeLisd

*/

CoEdgeTypeLisd::CoEdgeTypeLisd() {}

CoEdgeTypeLisd::CoEdgeTypeLisd(CoEdgeType * aCoEdgeType)
{
  push_back(aCoEdgeType);
}

CoEdgeTypeLisd::~CoEdgeTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CoEdgeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CoEdgeTypeLisd::printSelf(FILE * outFile)
{
  std::list<CoEdgeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoEdgesMeshType

*/

CoEdgesMeshType::CoEdgesMeshType()
{
  n = 0;
  CoEdgeMesh = 0;
}

CoEdgesMeshType::CoEdgesMeshType(
 CoEdgeMeshTypeLisd * CoEdgeMeshIn)
{
  n = 0;
  CoEdgeMesh = CoEdgeMeshIn;
}

CoEdgesMeshType::CoEdgesMeshType(
 NaturalType * nIn,
 CoEdgeMeshTypeLisd * CoEdgeMeshIn)
{
  n = nIn;
  CoEdgeMesh = CoEdgeMeshIn;
}

CoEdgesMeshType::~CoEdgesMeshType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CoEdgeMesh;
  #endif
}

void CoEdgesMeshType::printSelf(FILE * outFile)
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
    if (!CoEdgeMesh)
      {
        fprintf(stderr, "CoEdgeMesh list is missing\n");
        exit(1);
      }
    if (CoEdgeMesh->size() == 0)
      {
        fprintf(stderr, "CoEdgeMesh list is empty\n");
        exit(1);
      }
    if (CoEdgeMesh->size() < 1)
      {
        fprintf(stderr,
                "size of CoEdgeMesh list (%d) less than minimum required (1)\n",
                (int)CoEdgeMesh->size());
        exit(1);
      }
    std::list<CoEdgeMeshType *>::iterator iter;
    for (iter = CoEdgeMesh->begin();
         iter != CoEdgeMesh->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CoEdgeMesh");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CoEdgeMesh>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CoEdgesMeshType::badAttributes(
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
              fprintf(stderr, "two values for n in CoEdgesMeshType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CoEdgesMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoEdgesMeshType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CoEdgesMeshType\n");
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

NaturalType * CoEdgesMeshType::getn()
{return n;}

void CoEdgesMeshType::setn(NaturalType * nIn)
{n = nIn;}

CoEdgeMeshTypeLisd * CoEdgesMeshType::getCoEdgeMesh()
{return CoEdgeMesh;}

void CoEdgesMeshType::setCoEdgeMesh(CoEdgeMeshTypeLisd * CoEdgeMeshIn)
{CoEdgeMesh = CoEdgeMeshIn;}

/* ***************************************************************** */

/* class CoEdgesType

*/

CoEdgesType::CoEdgesType()
{
  n = 0;
  CoEdge = 0;
}

CoEdgesType::CoEdgesType(
 CoEdgeTypeLisd * CoEdgeIn)
{
  n = 0;
  CoEdge = CoEdgeIn;
}

CoEdgesType::CoEdgesType(
 NaturalType * nIn,
 CoEdgeTypeLisd * CoEdgeIn)
{
  n = nIn;
  CoEdge = CoEdgeIn;
}

CoEdgesType::~CoEdgesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CoEdge;
  #endif
}

void CoEdgesType::printSelf(FILE * outFile)
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
    if (!CoEdge)
      {
        fprintf(stderr, "CoEdge list is missing\n");
        exit(1);
      }
    if (CoEdge->size() == 0)
      {
        fprintf(stderr, "CoEdge list is empty\n");
        exit(1);
      }
    if (CoEdge->size() < 1)
      {
        fprintf(stderr,
                "size of CoEdge list (%d) less than minimum required (1)\n",
                (int)CoEdge->size());
        exit(1);
      }
    std::list<CoEdgeType *>::iterator iter;
    for (iter = CoEdge->begin();
         iter != CoEdge->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CoEdge");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CoEdge>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CoEdgesType::badAttributes(
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
              fprintf(stderr, "two values for n in CoEdgesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CoEdgesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoEdgesType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CoEdgesType\n");
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

NaturalType * CoEdgesType::getn()
{return n;}

void CoEdgesType::setn(NaturalType * nIn)
{n = nIn;}

CoEdgeTypeLisd * CoEdgesType::getCoEdge()
{return CoEdge;}

void CoEdgesType::setCoEdge(CoEdgeTypeLisd * CoEdgeIn)
{CoEdge = CoEdgeIn;}

/* ***************************************************************** */

/* class EdgeSetType

*/

EdgeSetType::EdgeSetType()
{
  n = 0;
  Edge = 0;
}

EdgeSetType::EdgeSetType(
 EdgeTypeLisd * EdgeIn)
{
  n = 0;
  Edge = EdgeIn;
}

EdgeSetType::EdgeSetType(
 NaturalType * nIn,
 EdgeTypeLisd * EdgeIn)
{
  n = nIn;
  Edge = EdgeIn;
}

EdgeSetType::~EdgeSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Edge;
  #endif
}

void EdgeSetType::printSelf(FILE * outFile)
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
    if (Edge->size() < 1)
      {
        fprintf(stderr,
                "size of Edge list (%d) less than minimum required (1)\n",
                (int)Edge->size());
        exit(1);
      }
    std::list<EdgeType *>::iterator iter;
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

bool EdgeSetType::badAttributes(
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
              fprintf(stderr, "two values for n in EdgeSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in EdgeSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EdgeSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in EdgeSetType\n");
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

NaturalType * EdgeSetType::getn()
{return n;}

void EdgeSetType::setn(NaturalType * nIn)
{n = nIn;}

EdgeTypeLisd * EdgeSetType::getEdge()
{return Edge;}

void EdgeSetType::setEdge(EdgeTypeLisd * EdgeIn)
{Edge = EdgeIn;}

/* ***************************************************************** */

/* class EdgeType

*/

EdgeType::EdgeType() :
  TopologyBaseType()
{
  tolerance = 0;
  Validation = 0;
  Curve = 0;
  VertexBeg = 0;
  VertexEnd = 0;
}

EdgeType::EdgeType(
 AttributesType * AttributesIn,
 ValidationEdgeType * ValidationIn,
 ElementReferenceType * CurveIn,
 ElementReferenceType * VertexBegIn,
 ElementReferenceType * VertexEndIn) :
  TopologyBaseType(
    AttributesIn)
{
  tolerance = 0;
  Validation = ValidationIn;
  Curve = CurveIn;
  VertexBeg = VertexBegIn;
  VertexEnd = VertexEndIn;
}

EdgeType::EdgeType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlDouble * toleranceIn,
 ValidationEdgeType * ValidationIn,
 ElementReferenceType * CurveIn,
 ElementReferenceType * VertexBegIn,
 ElementReferenceType * VertexEndIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  tolerance = toleranceIn;
  Validation = ValidationIn;
  Curve = CurveIn;
  VertexBeg = VertexBegIn;
  VertexEnd = VertexEndIn;
}

EdgeType::~EdgeType()
{
  #ifndef NODESTRUCT
  delete tolerance;
  delete Validation;
  delete Curve;
  delete VertexBeg;
  delete VertexEnd;
  #endif
}

void EdgeType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (tolerance)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "tolerance=\"");
      tolerance->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Curve");
  Curve->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Curve>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<VertexBeg");
  VertexBeg->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</VertexBeg>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<VertexEnd");
  VertexEnd->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</VertexEnd>\n");
  doSpaces(-INDENT, outFile);
}

bool EdgeType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in EdgeType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in EdgeType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in EdgeType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in EdgeType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in EdgeType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "tolerance")
        {
          XmlDouble * toleranceVal;
          if (this->tolerance)
            {
              fprintf(stderr, "two values for tolerance in EdgeType\n");
              returnValue = true;
              break;
            }
          toleranceVal = new XmlDouble(decl->val.c_str());
          if (toleranceVal->bad)
            {
              delete toleranceVal;
              fprintf(stderr, "bad value %s for tolerance in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->tolerance = toleranceVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in EdgeType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in EdgeType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EdgeType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in EdgeType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->tolerance;
      this->tolerance = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

XmlDouble * EdgeType::gettolerance()
{return tolerance;}

void EdgeType::settolerance(XmlDouble * toleranceIn)
{tolerance = toleranceIn;}

ValidationEdgeType * EdgeType::getValidation()
{return Validation;}

void EdgeType::setValidation(ValidationEdgeType * ValidationIn)
{Validation = ValidationIn;}

ElementReferenceType * EdgeType::getCurve()
{return Curve;}

void EdgeType::setCurve(ElementReferenceType * CurveIn)
{Curve = CurveIn;}

ElementReferenceType * EdgeType::getVertexBeg()
{return VertexBeg;}

void EdgeType::setVertexBeg(ElementReferenceType * VertexBegIn)
{VertexBeg = VertexBegIn;}

ElementReferenceType * EdgeType::getVertexEnd()
{return VertexEnd;}

void EdgeType::setVertexEnd(ElementReferenceType * VertexEndIn)
{VertexEnd = VertexEndIn;}

/* ***************************************************************** */

/* class EdgeTypeLisd

*/

EdgeTypeLisd::EdgeTypeLisd() {}

EdgeTypeLisd::EdgeTypeLisd(EdgeType * aEdgeType)
{
  push_back(aEdgeType);
}

EdgeTypeLisd::~EdgeTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<EdgeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void EdgeTypeLisd::printSelf(FILE * outFile)
{
  std::list<EdgeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class FaceBaseType

*/

FaceBaseType::FaceBaseType() :
  TopologyBaseType()
{
  turned = 0;
  Validation = 0;
}

FaceBaseType::FaceBaseType(
 AttributesType * AttributesIn,
 ValidationFaceType * ValidationIn) :
  TopologyBaseType(
    AttributesIn)
{
  turned = 0;
  Validation = ValidationIn;
}

FaceBaseType::FaceBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlBoolean * turnedIn,
 ValidationFaceType * ValidationIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  turned = turnedIn;
  Validation = ValidationIn;
}

FaceBaseType::~FaceBaseType()
{
  #ifndef NODESTRUCT
  delete turned;
  delete Validation;
  #endif
}

void FaceBaseType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FaceBaseType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in FaceBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in FaceBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in FaceBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in FaceBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in FaceBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in FaceBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (this->turned)
            {
              fprintf(stderr, "two values for turned in FaceBaseType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in FaceBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FaceBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FaceBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
      delete this->turned;
      this->turned = 0;
    }
  return returnValue;
}

XmlBoolean * FaceBaseType::getturned()
{return turned;}

void FaceBaseType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

ValidationFaceType * FaceBaseType::getValidation()
{return Validation;}

void FaceBaseType::setValidation(ValidationFaceType * ValidationIn)
{Validation = ValidationIn;}

/* ***************************************************************** */

/* class FaceBaseTypeLisd

*/

FaceBaseTypeLisd::FaceBaseTypeLisd() {}

FaceBaseTypeLisd::FaceBaseTypeLisd(FaceBaseType * aFaceBaseType)
{
  push_back(aFaceBaseType);
}

FaceBaseTypeLisd::~FaceBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<FaceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void FaceBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<FaceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class FaceMeshType

*/

FaceMeshType::FaceMeshType() :
  FaceBaseType()
{
  Mesh = 0;
  LoopIds = 0;
  FaceMeshType_1180 = 0;
  FaceMeshType_1181 = 0;
  FaceMeshType_1182 = 0;
}

FaceMeshType::FaceMeshType(
 AttributesType * AttributesIn,
 ValidationFaceType * ValidationIn,
 ElementReferenceType * MeshIn,
 ArrayReferenceType * LoopIdsIn,
 FaceMeshType_1180_Type * FaceMeshType_1180In,
 FaceMeshType_1181_Type * FaceMeshType_1181In,
 FaceMeshType_1182_Type * FaceMeshType_1182In) :
  FaceBaseType(
    AttributesIn,
    ValidationIn)
{
  Mesh = MeshIn;
  LoopIds = LoopIdsIn;
  FaceMeshType_1180 = FaceMeshType_1180In;
  FaceMeshType_1181 = FaceMeshType_1181In;
  FaceMeshType_1182 = FaceMeshType_1182In;
}

FaceMeshType::FaceMeshType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlBoolean * turnedIn,
 ValidationFaceType * ValidationIn,
 ElementReferenceType * MeshIn,
 ArrayReferenceType * LoopIdsIn,
 FaceMeshType_1180_Type * FaceMeshType_1180In,
 FaceMeshType_1181_Type * FaceMeshType_1181In,
 FaceMeshType_1182_Type * FaceMeshType_1182In) :
  FaceBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    turnedIn,
    ValidationIn)
{
  Mesh = MeshIn;
  LoopIds = LoopIdsIn;
  FaceMeshType_1180 = FaceMeshType_1180In;
  FaceMeshType_1181 = FaceMeshType_1181In;
  FaceMeshType_1182 = FaceMeshType_1182In;
}

FaceMeshType::~FaceMeshType()
{
  #ifndef NODESTRUCT
  delete Mesh;
  delete LoopIds;
  delete FaceMeshType_1180;
  delete FaceMeshType_1181;
  delete FaceMeshType_1182;
  #endif
}

void FaceMeshType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Mesh");
  Mesh->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Mesh>\n");
  if (LoopIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LoopIds");
      LoopIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LoopIds>\n");
    }
  if (FaceMeshType_1180)
    {
  FaceMeshType_1180->printSelf(outFile);
    }
  if (FaceMeshType_1181)
    {
  FaceMeshType_1181->printSelf(outFile);
    }
  if (FaceMeshType_1182)
    {
  FaceMeshType_1182->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

bool FaceMeshType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in FaceMeshType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in FaceMeshType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in FaceMeshType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in FaceMeshType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in FaceMeshType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in FaceMeshType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (this->turned)
            {
              fprintf(stderr, "two values for turned in FaceMeshType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in FaceMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FaceMeshType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FaceMeshType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
      delete this->turned;
      this->turned = 0;
    }
  return returnValue;
}

ElementReferenceType * FaceMeshType::getMesh()
{return Mesh;}

void FaceMeshType::setMesh(ElementReferenceType * MeshIn)
{Mesh = MeshIn;}

ArrayReferenceType * FaceMeshType::getLoopIds()
{return LoopIds;}

void FaceMeshType::setLoopIds(ArrayReferenceType * LoopIdsIn)
{LoopIds = LoopIdsIn;}

FaceMeshType_1180_Type * FaceMeshType::getFaceMeshType_1180()
{return FaceMeshType_1180;}

void FaceMeshType::setFaceMeshType_1180(FaceMeshType_1180_Type * FaceMeshType_1180In)
{FaceMeshType_1180 = FaceMeshType_1180In;}

FaceMeshType_1181_Type * FaceMeshType::getFaceMeshType_1181()
{return FaceMeshType_1181;}

void FaceMeshType::setFaceMeshType_1181(FaceMeshType_1181_Type * FaceMeshType_1181In)
{FaceMeshType_1181 = FaceMeshType_1181In;}

FaceMeshType_1182_Type * FaceMeshType::getFaceMeshType_1182()
{return FaceMeshType_1182;}

void FaceMeshType::setFaceMeshType_1182(FaceMeshType_1182_Type * FaceMeshType_1182In)
{FaceMeshType_1182 = FaceMeshType_1182In;}

/* ***************************************************************** */

/* class FaceSetType

*/

FaceSetType::FaceSetType()
{
  n = 0;
  FaceBase = 0;
}

FaceSetType::FaceSetType(
 FaceBaseTypeLisd * FaceBaseIn)
{
  n = 0;
  FaceBase = FaceBaseIn;
}

FaceSetType::FaceSetType(
 NaturalType * nIn,
 FaceBaseTypeLisd * FaceBaseIn)
{
  n = nIn;
  FaceBase = FaceBaseIn;
}

FaceSetType::~FaceSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete FaceBase;
  #endif
}

void FaceSetType::printSelf(FILE * outFile)
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
    if (!FaceBase)
      {
        fprintf(stderr, "FaceBase list is missing\n");
        exit(1);
      }
    if (FaceBase->size() == 0)
      {
        fprintf(stderr, "FaceBase list is empty\n");
        exit(1);
      }
    if (FaceBase->size() < 1)
      {
        fprintf(stderr,
                "size of FaceBase list (%d) less than minimum required (1)\n",
                (int)FaceBase->size());
        exit(1);
      }
    std::list<FaceBaseType *>::iterator iter;
    for (iter = FaceBase->begin();
         iter != FaceBase->end(); iter++)
      {
        FaceBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Face") == 0)
          {
            FaceType * typ;
            if ((typ = dynamic_cast<FaceType *>(basie)))
              {
                fprintf(outFile, "<Face");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Face>\n");
              }
            else
              {
                fprintf(stderr, "bad Face element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FaceMesh") == 0)
          {
            FaceMeshType * typ;
            if ((typ = dynamic_cast<FaceMeshType *>(basie)))
              {
                fprintf(outFile, "<FaceMesh");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FaceMesh>\n");
              }
            else
              {
                fprintf(stderr, "bad FaceMesh element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad FaceBase type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool FaceSetType::badAttributes(
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
              fprintf(stderr, "two values for n in FaceSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in FaceSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FaceSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in FaceSetType\n");
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

NaturalType * FaceSetType::getn()
{return n;}

void FaceSetType::setn(NaturalType * nIn)
{n = nIn;}

FaceBaseTypeLisd * FaceSetType::getFaceBase()
{return FaceBase;}

void FaceSetType::setFaceBase(FaceBaseTypeLisd * FaceBaseIn)
{FaceBase = FaceBaseIn;}

/* ***************************************************************** */

/* class FaceType

*/

FaceType::FaceType() :
  FaceBaseType()
{
  hasOuter = 0;
  Surface = 0;
  LoopIds = 0;
}

FaceType::FaceType(
 AttributesType * AttributesIn,
 ValidationFaceType * ValidationIn,
 ElementReferenceType * SurfaceIn,
 ArrayReferenceType * LoopIdsIn) :
  FaceBaseType(
    AttributesIn,
    ValidationIn)
{
  hasOuter = 0;
  Surface = SurfaceIn;
  LoopIds = LoopIdsIn;
}

FaceType::FaceType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlBoolean * turnedIn,
 ValidationFaceType * ValidationIn,
 XmlBoolean * hasOuterIn,
 ElementReferenceType * SurfaceIn,
 ArrayReferenceType * LoopIdsIn) :
  FaceBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    turnedIn,
    ValidationIn)
{
  hasOuter = hasOuterIn;
  Surface = SurfaceIn;
  LoopIds = LoopIdsIn;
}

FaceType::~FaceType()
{
  #ifndef NODESTRUCT
  delete hasOuter;
  delete Surface;
  delete LoopIds;
  #endif
}

void FaceType::printSelf(FILE * outFile)
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
  if (hasOuter)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hasOuter=\"");
      hasOuter->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Surface");
  Surface->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Surface>\n");
  if (LoopIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LoopIds");
      LoopIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LoopIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FaceType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in FaceType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hasOuter")
        {
          XmlBoolean * hasOuterVal;
          if (this->hasOuter)
            {
              fprintf(stderr, "two values for hasOuter in FaceType\n");
              returnValue = true;
              break;
            }
          hasOuterVal = new XmlBoolean(decl->val.c_str());
          if (hasOuterVal->bad)
            {
              delete hasOuterVal;
              fprintf(stderr, "bad value %s for hasOuter in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hasOuter = hasOuterVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in FaceType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in FaceType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in FaceType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in FaceType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in FaceType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (this->turned)
            {
              fprintf(stderr, "two values for turned in FaceType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in FaceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FaceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FaceType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hasOuter;
      this->hasOuter = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
      delete this->turned;
      this->turned = 0;
    }
  return returnValue;
}

XmlBoolean * FaceType::gethasOuter()
{return hasOuter;}

void FaceType::sethasOuter(XmlBoolean * hasOuterIn)
{hasOuter = hasOuterIn;}

ElementReferenceType * FaceType::getSurface()
{return Surface;}

void FaceType::setSurface(ElementReferenceType * SurfaceIn)
{Surface = SurfaceIn;}

ArrayReferenceType * FaceType::getLoopIds()
{return LoopIds;}

void FaceType::setLoopIds(ArrayReferenceType * LoopIdsIn)
{LoopIds = LoopIdsIn;}

/* ***************************************************************** */

/* class LoopBaseType

*/

LoopBaseType::LoopBaseType() :
  TopologyBaseType()
{
}

LoopBaseType::LoopBaseType(
 AttributesType * AttributesIn) :
  TopologyBaseType(
    AttributesIn)
{
}

LoopBaseType::LoopBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
}

LoopBaseType::~LoopBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void LoopBaseType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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

bool LoopBaseType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in LoopBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in LoopBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LoopBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in LoopBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in LoopBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in LoopBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in LoopBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LoopBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LoopBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class LoopBaseTypeLisd

*/

LoopBaseTypeLisd::LoopBaseTypeLisd() {}

LoopBaseTypeLisd::LoopBaseTypeLisd(LoopBaseType * aLoopBaseType)
{
  push_back(aLoopBaseType);
}

LoopBaseTypeLisd::~LoopBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LoopBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LoopBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<LoopBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class LoopFormEnumType

*/

LoopFormEnumType::LoopFormEnumType() :
  XmlString()
{
}

LoopFormEnumType::LoopFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "UNKNOWN") &&
           strcmp(val.c_str(), "OUTER") &&
           strcmp(val.c_str(), "INNER") &&
           strcmp(val.c_str(), "SLIT") &&
           strcmp(val.c_str(), "VERTEX"));
}

LoopFormEnumType::~LoopFormEnumType() {}

bool LoopFormEnumType::LoopFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "UNKNOWN") &&
          strcmp(val.c_str(), "OUTER") &&
          strcmp(val.c_str(), "INNER") &&
          strcmp(val.c_str(), "SLIT") &&
          strcmp(val.c_str(), "VERTEX"));
}

void LoopFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LoopFormEnumType");
}

void LoopFormEnumType::printSelf(FILE * outFile)
{
  if (LoopFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad LoopFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void LoopFormEnumType::oPrintSelf(FILE * outFile)
{
  if (LoopFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad LoopFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LoopMeshType

*/

LoopMeshType::LoopMeshType() :
  LoopBaseType()
{
  CoEdgesMesh = 0;
}

LoopMeshType::LoopMeshType(
 AttributesType * AttributesIn,
 CoEdgesMeshType * CoEdgesMeshIn) :
  LoopBaseType(
    AttributesIn)
{
  CoEdgesMesh = CoEdgesMeshIn;
}

LoopMeshType::LoopMeshType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 CoEdgesMeshType * CoEdgesMeshIn) :
  LoopBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  CoEdgesMesh = CoEdgesMeshIn;
}

LoopMeshType::~LoopMeshType()
{
  #ifndef NODESTRUCT
  delete CoEdgesMesh;
  #endif
}

void LoopMeshType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  fprintf(outFile, "<CoEdgesMesh");
  CoEdgesMesh->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CoEdgesMesh>\n");
  doSpaces(-INDENT, outFile);
}

bool LoopMeshType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in LoopMeshType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in LoopMeshType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LoopMeshType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in LoopMeshType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in LoopMeshType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in LoopMeshType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in LoopMeshType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LoopMeshType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LoopMeshType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

CoEdgesMeshType * LoopMeshType::getCoEdgesMesh()
{return CoEdgesMesh;}

void LoopMeshType::setCoEdgesMesh(CoEdgesMeshType * CoEdgesMeshIn)
{CoEdgesMesh = CoEdgesMeshIn;}

/* ***************************************************************** */

/* class LoopSetType

*/

LoopSetType::LoopSetType()
{
  n = 0;
  LoopBase = 0;
}

LoopSetType::LoopSetType(
 LoopBaseTypeLisd * LoopBaseIn)
{
  n = 0;
  LoopBase = LoopBaseIn;
}

LoopSetType::LoopSetType(
 NaturalType * nIn,
 LoopBaseTypeLisd * LoopBaseIn)
{
  n = nIn;
  LoopBase = LoopBaseIn;
}

LoopSetType::~LoopSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete LoopBase;
  #endif
}

void LoopSetType::printSelf(FILE * outFile)
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
    if (!LoopBase)
      {
        fprintf(stderr, "LoopBase list is missing\n");
        exit(1);
      }
    if (LoopBase->size() == 0)
      {
        fprintf(stderr, "LoopBase list is empty\n");
        exit(1);
      }
    if (LoopBase->size() < 1)
      {
        fprintf(stderr,
                "size of LoopBase list (%d) less than minimum required (1)\n",
                (int)LoopBase->size());
        exit(1);
      }
    std::list<LoopBaseType *>::iterator iter;
    for (iter = LoopBase->begin();
         iter != LoopBase->end(); iter++)
      {
        LoopBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Loop") == 0)
          {
            LoopType * typ;
            if ((typ = dynamic_cast<LoopType *>(basie)))
              {
                fprintf(outFile, "<Loop");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Loop>\n");
              }
            else
              {
                fprintf(stderr, "bad Loop element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LoopMesh") == 0)
          {
            LoopMeshType * typ;
            if ((typ = dynamic_cast<LoopMeshType *>(basie)))
              {
                fprintf(outFile, "<LoopMesh");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LoopMesh>\n");
              }
            else
              {
                fprintf(stderr, "bad LoopMesh element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad LoopBase type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool LoopSetType::badAttributes(
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
              fprintf(stderr, "two values for n in LoopSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in LoopSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LoopSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in LoopSetType\n");
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

NaturalType * LoopSetType::getn()
{return n;}

void LoopSetType::setn(NaturalType * nIn)
{n = nIn;}

LoopBaseTypeLisd * LoopSetType::getLoopBase()
{return LoopBase;}

void LoopSetType::setLoopBase(LoopBaseTypeLisd * LoopBaseIn)
{LoopBase = LoopBaseIn;}

/* ***************************************************************** */

/* class LoopType

*/

LoopType::LoopType() :
  LoopBaseType()
{
  form = 0;
  CoEdges = 0;
}

LoopType::LoopType(
 AttributesType * AttributesIn,
 CoEdgesType * CoEdgesIn) :
  LoopBaseType(
    AttributesIn)
{
  form = 0;
  CoEdges = CoEdgesIn;
}

LoopType::LoopType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 LoopFormEnumType * formIn,
 CoEdgesType * CoEdgesIn) :
  LoopBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  form = formIn;
  CoEdges = CoEdgesIn;
}

LoopType::~LoopType()
{
  #ifndef NODESTRUCT
  delete form;
  delete CoEdges;
  #endif
}

void LoopType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  fprintf(outFile, "<CoEdges");
  CoEdges->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CoEdges>\n");
  doSpaces(-INDENT, outFile);
}

bool LoopType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in LoopType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "form")
        {
          LoopFormEnumType * formVal;
          if (this->form)
            {
              fprintf(stderr, "two values for form in LoopType\n");
              returnValue = true;
              break;
            }
          formVal = new LoopFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->form = formVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in LoopType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LoopType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in LoopType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in LoopType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in LoopType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in LoopType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LoopType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LoopType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->form;
      this->form = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

LoopFormEnumType * LoopType::getform()
{return form;}

void LoopType::setform(LoopFormEnumType * formIn)
{form = formIn;}

CoEdgesType * LoopType::getCoEdges()
{return CoEdges;}

void LoopType::setCoEdges(CoEdgesType * CoEdgesIn)
{CoEdges = CoEdgesIn;}

/* ***************************************************************** */

/* class PointCloudSetType

*/

PointCloudSetType::PointCloudSetType()
{
  n = 0;
  PointCloud = 0;
}

PointCloudSetType::PointCloudSetType(
 PointCloudTypeLisd * PointCloudIn)
{
  n = 0;
  PointCloud = PointCloudIn;
}

PointCloudSetType::PointCloudSetType(
 NaturalType * nIn,
 PointCloudTypeLisd * PointCloudIn)
{
  n = nIn;
  PointCloud = PointCloudIn;
}

PointCloudSetType::~PointCloudSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete PointCloud;
  #endif
}

void PointCloudSetType::printSelf(FILE * outFile)
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
    if (!PointCloud)
      {
        fprintf(stderr, "PointCloud list is missing\n");
        exit(1);
      }
    if (PointCloud->size() == 0)
      {
        fprintf(stderr, "PointCloud list is empty\n");
        exit(1);
      }
    if (PointCloud->size() < 1)
      {
        fprintf(stderr,
                "size of PointCloud list (%d) less than minimum required (1)\n",
                (int)PointCloud->size());
        exit(1);
      }
    std::list<PointCloudType *>::iterator iter;
    for (iter = PointCloud->begin();
         iter != PointCloud->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<PointCloud");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</PointCloud>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PointCloudSetType::badAttributes(
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
              fprintf(stderr, "two values for n in PointCloudSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PointCloudSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointCloudSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PointCloudSetType\n");
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

NaturalType * PointCloudSetType::getn()
{return n;}

void PointCloudSetType::setn(NaturalType * nIn)
{n = nIn;}

PointCloudTypeLisd * PointCloudSetType::getPointCloud()
{return PointCloud;}

void PointCloudSetType::setPointCloud(PointCloudTypeLisd * PointCloudIn)
{PointCloud = PointCloudIn;}

/* ***************************************************************** */

/* class PointCloudType

*/

PointCloudType::PointCloudType() :
  TopologyBaseType()
{
  PointCloudType_1183 = 0;
  PointCloudType_1184 = 0;
  PointCloudType_1185 = 0;
  PointCloudType_1186 = 0;
}

PointCloudType::PointCloudType(
 AttributesType * AttributesIn,
 PointCloudType_1183_Type * PointCloudType_1183In,
 PointCloudType_1184_Type * PointCloudType_1184In,
 PointCloudType_1185_Type * PointCloudType_1185In,
 PointCloudType_1186_Type * PointCloudType_1186In) :
  TopologyBaseType(
    AttributesIn)
{
  PointCloudType_1183 = PointCloudType_1183In;
  PointCloudType_1184 = PointCloudType_1184In;
  PointCloudType_1185 = PointCloudType_1185In;
  PointCloudType_1186 = PointCloudType_1186In;
}

PointCloudType::PointCloudType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 PointCloudType_1183_Type * PointCloudType_1183In,
 PointCloudType_1184_Type * PointCloudType_1184In,
 PointCloudType_1185_Type * PointCloudType_1185In,
 PointCloudType_1186_Type * PointCloudType_1186In) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  PointCloudType_1183 = PointCloudType_1183In;
  PointCloudType_1184 = PointCloudType_1184In;
  PointCloudType_1185 = PointCloudType_1185In;
  PointCloudType_1186 = PointCloudType_1186In;
}

PointCloudType::~PointCloudType()
{
  #ifndef NODESTRUCT
  delete PointCloudType_1183;
  delete PointCloudType_1184;
  delete PointCloudType_1185;
  delete PointCloudType_1186;
  #endif
}

void PointCloudType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  PointCloudType_1183->printSelf(outFile);
  if (PointCloudType_1184)
    {
  PointCloudType_1184->printSelf(outFile);
    }
  if (PointCloudType_1185)
    {
  PointCloudType_1185->printSelf(outFile);
    }
  if (PointCloudType_1186)
    {
  PointCloudType_1186->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

bool PointCloudType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in PointCloudType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in PointCloudType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in PointCloudType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in PointCloudType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in PointCloudType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in PointCloudType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PointCloudType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointCloudType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PointCloudType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

PointCloudType_1183_Type * PointCloudType::getPointCloudType_1183()
{return PointCloudType_1183;}

void PointCloudType::setPointCloudType_1183(PointCloudType_1183_Type * PointCloudType_1183In)
{PointCloudType_1183 = PointCloudType_1183In;}

PointCloudType_1184_Type * PointCloudType::getPointCloudType_1184()
{return PointCloudType_1184;}

void PointCloudType::setPointCloudType_1184(PointCloudType_1184_Type * PointCloudType_1184In)
{PointCloudType_1184 = PointCloudType_1184In;}

PointCloudType_1185_Type * PointCloudType::getPointCloudType_1185()
{return PointCloudType_1185;}

void PointCloudType::setPointCloudType_1185(PointCloudType_1185_Type * PointCloudType_1185In)
{PointCloudType_1185 = PointCloudType_1185In;}

PointCloudType_1186_Type * PointCloudType::getPointCloudType_1186()
{return PointCloudType_1186;}

void PointCloudType::setPointCloudType_1186(PointCloudType_1186_Type * PointCloudType_1186In)
{PointCloudType_1186 = PointCloudType_1186In;}

/* ***************************************************************** */

/* class PointCloudTypeLisd

*/

PointCloudTypeLisd::PointCloudTypeLisd() {}

PointCloudTypeLisd::PointCloudTypeLisd(PointCloudType * aPointCloudType)
{
  push_back(aPointCloudType);
}

PointCloudTypeLisd::~PointCloudTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PointCloudType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PointCloudTypeLisd::printSelf(FILE * outFile)
{
  std::list<PointCloudType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ShellFormEnumType

*/

ShellFormEnumType::ShellFormEnumType() :
  XmlString()
{
}

ShellFormEnumType::ShellFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "UNKNOWN") &&
           strcmp(val.c_str(), "OUTER") &&
           strcmp(val.c_str(), "INNER"));
}

ShellFormEnumType::~ShellFormEnumType() {}

bool ShellFormEnumType::ShellFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "UNKNOWN") &&
          strcmp(val.c_str(), "OUTER") &&
          strcmp(val.c_str(), "INNER"));
}

void ShellFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ShellFormEnumType");
}

void ShellFormEnumType::printSelf(FILE * outFile)
{
  if (ShellFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad ShellFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void ShellFormEnumType::oPrintSelf(FILE * outFile)
{
  if (ShellFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad ShellFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ShellSetType

*/

ShellSetType::ShellSetType()
{
  n = 0;
  Shell = 0;
}

ShellSetType::ShellSetType(
 ShellTypeLisd * ShellIn)
{
  n = 0;
  Shell = ShellIn;
}

ShellSetType::ShellSetType(
 NaturalType * nIn,
 ShellTypeLisd * ShellIn)
{
  n = nIn;
  Shell = ShellIn;
}

ShellSetType::~ShellSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Shell;
  #endif
}

void ShellSetType::printSelf(FILE * outFile)
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
    if (!Shell)
      {
        fprintf(stderr, "Shell list is missing\n");
        exit(1);
      }
    if (Shell->size() == 0)
      {
        fprintf(stderr, "Shell list is empty\n");
        exit(1);
      }
    if (Shell->size() < 1)
      {
        fprintf(stderr,
                "size of Shell list (%d) less than minimum required (1)\n",
                (int)Shell->size());
        exit(1);
      }
    std::list<ShellType *>::iterator iter;
    for (iter = Shell->begin();
         iter != Shell->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Shell");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Shell>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ShellSetType::badAttributes(
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
              fprintf(stderr, "two values for n in ShellSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ShellSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ShellSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ShellSetType\n");
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

NaturalType * ShellSetType::getn()
{return n;}

void ShellSetType::setn(NaturalType * nIn)
{n = nIn;}

ShellTypeLisd * ShellSetType::getShell()
{return Shell;}

void ShellSetType::setShell(ShellTypeLisd * ShellIn)
{Shell = ShellIn;}

/* ***************************************************************** */

/* class ShellType

*/

ShellType::ShellType() :
  TopologyBaseType()
{
  closed = 0;
  form = 0;
  turned = 0;
  FaceIds = 0;
}

ShellType::ShellType(
 AttributesType * AttributesIn,
 ArrayReferenceType * FaceIdsIn) :
  TopologyBaseType(
    AttributesIn)
{
  closed = 0;
  form = 0;
  turned = 0;
  FaceIds = FaceIdsIn;
}

ShellType::ShellType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlBoolean * closedIn,
 ShellFormEnumType * formIn,
 XmlBoolean * turnedIn,
 ArrayReferenceType * FaceIdsIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  closed = closedIn;
  form = formIn;
  turned = turnedIn;
  FaceIds = FaceIdsIn;
}

ShellType::~ShellType()
{
  #ifndef NODESTRUCT
  delete closed;
  delete form;
  delete turned;
  delete FaceIds;
  #endif
}

void ShellType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (closed)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "closed=\"");
      closed->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (FaceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FaceIds");
      FaceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FaceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ShellType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "closed")
        {
          XmlBoolean * closedVal;
          if (this->closed)
            {
              fprintf(stderr, "two values for closed in ShellType\n");
              returnValue = true;
              break;
            }
          closedVal = new XmlBoolean(decl->val.c_str());
          if (closedVal->bad)
            {
              delete closedVal;
              fprintf(stderr, "bad value %s for closed in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->closed = closedVal;
        }
      else if (decl->name == "color")
        {
          ColorType * colorVal;
          if (this->color)
            {
              fprintf(stderr, "two values for color in ShellType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "form")
        {
          ShellFormEnumType * formVal;
          if (this->form)
            {
              fprintf(stderr, "two values for form in ShellType\n");
              returnValue = true;
              break;
            }
          formVal = new ShellFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->form = formVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in ShellType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ShellType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in ShellType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in ShellType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in ShellType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else if (decl->name == "turned")
        {
          XmlBoolean * turnedVal;
          if (this->turned)
            {
              fprintf(stderr, "two values for turned in ShellType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in ShellType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ShellType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ShellType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->closed;
      this->closed = 0;
      delete this->color;
      this->color = 0;
      delete this->form;
      this->form = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
      delete this->turned;
      this->turned = 0;
    }
  return returnValue;
}

XmlBoolean * ShellType::getclosed()
{return closed;}

void ShellType::setclosed(XmlBoolean * closedIn)
{closed = closedIn;}

ShellFormEnumType * ShellType::getform()
{return form;}

void ShellType::setform(ShellFormEnumType * formIn)
{form = formIn;}

XmlBoolean * ShellType::getturned()
{return turned;}

void ShellType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

ArrayReferenceType * ShellType::getFaceIds()
{return FaceIds;}

void ShellType::setFaceIds(ArrayReferenceType * FaceIdsIn)
{FaceIds = FaceIdsIn;}

/* ***************************************************************** */

/* class ShellTypeLisd

*/

ShellTypeLisd::ShellTypeLisd() {}

ShellTypeLisd::ShellTypeLisd(ShellType * aShellType)
{
  push_back(aShellType);
}

ShellTypeLisd::~ShellTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ShellType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ShellTypeLisd::printSelf(FILE * outFile)
{
  std::list<ShellType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class TopologyBaseType

*/

TopologyBaseType::TopologyBaseType() :
  DrawableBaseType()
{
}

TopologyBaseType::TopologyBaseType(
 AttributesType * AttributesIn) :
  DrawableBaseType(
    AttributesIn)
{
}

TopologyBaseType::TopologyBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
}

TopologyBaseType::~TopologyBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void TopologyBaseType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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

bool TopologyBaseType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in TopologyBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in TopologyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TopologyBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in TopologyBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class TopologySetType

*/

TopologySetType::TopologySetType()
{
  VertexSet = 0;
  EdgeSet = 0;
  LoopSet = 0;
  FaceSet = 0;
  ShellSet = 0;
  BodySet = 0;
  PointCloudSet = 0;
}

TopologySetType::TopologySetType(
 VertexSetType * VertexSetIn,
 EdgeSetType * EdgeSetIn,
 LoopSetType * LoopSetIn,
 FaceSetType * FaceSetIn,
 ShellSetType * ShellSetIn,
 BodySetType * BodySetIn,
 PointCloudSetType * PointCloudSetIn)
{
  VertexSet = VertexSetIn;
  EdgeSet = EdgeSetIn;
  LoopSet = LoopSetIn;
  FaceSet = FaceSetIn;
  ShellSet = ShellSetIn;
  BodySet = BodySetIn;
  PointCloudSet = PointCloudSetIn;
}

TopologySetType::~TopologySetType()
{
  #ifndef NODESTRUCT
  delete VertexSet;
  delete EdgeSet;
  delete LoopSet;
  delete FaceSet;
  delete ShellSet;
  delete BodySet;
  delete PointCloudSet;
  #endif
}

void TopologySetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (VertexSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VertexSet");
      VertexSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</VertexSet>\n");
    }
  if (EdgeSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EdgeSet");
      EdgeSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EdgeSet>\n");
    }
  if (LoopSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LoopSet");
      LoopSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LoopSet>\n");
    }
  if (FaceSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FaceSet");
      FaceSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FaceSet>\n");
    }
  if (ShellSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ShellSet");
      ShellSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ShellSet>\n");
    }
  if (BodySet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodySet");
      BodySet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodySet>\n");
    }
  if (PointCloudSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudSet");
      PointCloudSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudSet>\n");
    }
  doSpaces(-INDENT, outFile);
}

VertexSetType * TopologySetType::getVertexSet()
{return VertexSet;}

void TopologySetType::setVertexSet(VertexSetType * VertexSetIn)
{VertexSet = VertexSetIn;}

EdgeSetType * TopologySetType::getEdgeSet()
{return EdgeSet;}

void TopologySetType::setEdgeSet(EdgeSetType * EdgeSetIn)
{EdgeSet = EdgeSetIn;}

LoopSetType * TopologySetType::getLoopSet()
{return LoopSet;}

void TopologySetType::setLoopSet(LoopSetType * LoopSetIn)
{LoopSet = LoopSetIn;}

FaceSetType * TopologySetType::getFaceSet()
{return FaceSet;}

void TopologySetType::setFaceSet(FaceSetType * FaceSetIn)
{FaceSet = FaceSetIn;}

ShellSetType * TopologySetType::getShellSet()
{return ShellSet;}

void TopologySetType::setShellSet(ShellSetType * ShellSetIn)
{ShellSet = ShellSetIn;}

BodySetType * TopologySetType::getBodySet()
{return BodySet;}

void TopologySetType::setBodySet(BodySetType * BodySetIn)
{BodySet = BodySetIn;}

PointCloudSetType * TopologySetType::getPointCloudSet()
{return PointCloudSet;}

void TopologySetType::setPointCloudSet(PointCloudSetType * PointCloudSetIn)
{PointCloudSet = PointCloudSetIn;}

/* ***************************************************************** */

/* class ValidationBodyType

*/

ValidationBodyType::ValidationBodyType()
{
  Area = 0;
  Centroid = 0;
  Volume = 0;
  Box = 0;
  FacePoints = 0;
  EdgePoints = 0;
}

ValidationBodyType::ValidationBodyType(
 XmlDouble * AreaIn,
 PointSimpleType * CentroidIn,
 XmlDouble * VolumeIn,
 BoundingBoxAxisAlignedType * BoxIn,
 ValidationPointsType * FacePointsIn,
 ValidationPointsType * EdgePointsIn)
{
  Area = AreaIn;
  Centroid = CentroidIn;
  Volume = VolumeIn;
  Box = BoxIn;
  FacePoints = FacePointsIn;
  EdgePoints = EdgePointsIn;
}

ValidationBodyType::~ValidationBodyType()
{
  #ifndef NODESTRUCT
  delete Area;
  delete Centroid;
  delete Volume;
  delete Box;
  delete FacePoints;
  delete EdgePoints;
  #endif
}

void ValidationBodyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Area)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Area");
      Area->printSelf(outFile);
      fprintf(outFile, "</Area>\n");
    }
  if (Centroid)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Centroid");
      Centroid->printSelf(outFile);
      fprintf(outFile, "</Centroid>\n");
    }
  if (Volume)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Volume");
      Volume->printSelf(outFile);
      fprintf(outFile, "</Volume>\n");
    }
  if (Box)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Box");
      Box->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Box>\n");
    }
  if (FacePoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FacePoints");
      FacePoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FacePoints>\n");
    }
  if (EdgePoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EdgePoints");
      EdgePoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EdgePoints>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDouble * ValidationBodyType::getArea()
{return Area;}

void ValidationBodyType::setArea(XmlDouble * AreaIn)
{Area = AreaIn;}

PointSimpleType * ValidationBodyType::getCentroid()
{return Centroid;}

void ValidationBodyType::setCentroid(PointSimpleType * CentroidIn)
{Centroid = CentroidIn;}

XmlDouble * ValidationBodyType::getVolume()
{return Volume;}

void ValidationBodyType::setVolume(XmlDouble * VolumeIn)
{Volume = VolumeIn;}

BoundingBoxAxisAlignedType * ValidationBodyType::getBox()
{return Box;}

void ValidationBodyType::setBox(BoundingBoxAxisAlignedType * BoxIn)
{Box = BoxIn;}

ValidationPointsType * ValidationBodyType::getFacePoints()
{return FacePoints;}

void ValidationBodyType::setFacePoints(ValidationPointsType * FacePointsIn)
{FacePoints = FacePointsIn;}

ValidationPointsType * ValidationBodyType::getEdgePoints()
{return EdgePoints;}

void ValidationBodyType::setEdgePoints(ValidationPointsType * EdgePointsIn)
{EdgePoints = EdgePointsIn;}

/* ***************************************************************** */

/* class ValidationEdgeType

*/

ValidationEdgeType::ValidationEdgeType()
{
  Length = 0;
  Centroid = 0;
  Box = 0;
  Points = 0;
}

ValidationEdgeType::ValidationEdgeType(
 XmlDouble * LengthIn,
 PointSimpleType * CentroidIn,
 BoundingBoxAxisAlignedType * BoxIn,
 ValidationPointsType * PointsIn)
{
  Length = LengthIn;
  Centroid = CentroidIn;
  Box = BoxIn;
  Points = PointsIn;
}

ValidationEdgeType::~ValidationEdgeType()
{
  #ifndef NODESTRUCT
  delete Length;
  delete Centroid;
  delete Box;
  delete Points;
  #endif
}

void ValidationEdgeType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Length)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Length");
      Length->printSelf(outFile);
      fprintf(outFile, "</Length>\n");
    }
  if (Centroid)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Centroid");
      Centroid->printSelf(outFile);
      fprintf(outFile, "</Centroid>\n");
    }
  if (Box)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Box");
      Box->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Box>\n");
    }
  if (Points)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      Points->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Points>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDouble * ValidationEdgeType::getLength()
{return Length;}

void ValidationEdgeType::setLength(XmlDouble * LengthIn)
{Length = LengthIn;}

PointSimpleType * ValidationEdgeType::getCentroid()
{return Centroid;}

void ValidationEdgeType::setCentroid(PointSimpleType * CentroidIn)
{Centroid = CentroidIn;}

BoundingBoxAxisAlignedType * ValidationEdgeType::getBox()
{return Box;}

void ValidationEdgeType::setBox(BoundingBoxAxisAlignedType * BoxIn)
{Box = BoxIn;}

ValidationPointsType * ValidationEdgeType::getPoints()
{return Points;}

void ValidationEdgeType::setPoints(ValidationPointsType * PointsIn)
{Points = PointsIn;}

/* ***************************************************************** */

/* class ValidationFaceType

*/

ValidationFaceType::ValidationFaceType()
{
  Area = 0;
  Centroid = 0;
  Box = 0;
  Points = 0;
}

ValidationFaceType::ValidationFaceType(
 XmlDouble * AreaIn,
 PointSimpleType * CentroidIn,
 BoundingBoxAxisAlignedType * BoxIn,
 ValidationPointsType * PointsIn)
{
  Area = AreaIn;
  Centroid = CentroidIn;
  Box = BoxIn;
  Points = PointsIn;
}

ValidationFaceType::~ValidationFaceType()
{
  #ifndef NODESTRUCT
  delete Area;
  delete Centroid;
  delete Box;
  delete Points;
  #endif
}

void ValidationFaceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Area)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Area");
      Area->printSelf(outFile);
      fprintf(outFile, "</Area>\n");
    }
  if (Centroid)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Centroid");
      Centroid->printSelf(outFile);
      fprintf(outFile, "</Centroid>\n");
    }
  if (Box)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Box");
      Box->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Box>\n");
    }
  if (Points)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      Points->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Points>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDouble * ValidationFaceType::getArea()
{return Area;}

void ValidationFaceType::setArea(XmlDouble * AreaIn)
{Area = AreaIn;}

PointSimpleType * ValidationFaceType::getCentroid()
{return Centroid;}

void ValidationFaceType::setCentroid(PointSimpleType * CentroidIn)
{Centroid = CentroidIn;}

BoundingBoxAxisAlignedType * ValidationFaceType::getBox()
{return Box;}

void ValidationFaceType::setBox(BoundingBoxAxisAlignedType * BoxIn)
{Box = BoxIn;}

ValidationPointsType * ValidationFaceType::getPoints()
{return Points;}

void ValidationFaceType::setPoints(ValidationPointsType * PointsIn)
{Points = PointsIn;}

/* ***************************************************************** */

/* class VertexSetType

*/

VertexSetType::VertexSetType()
{
  n = 0;
  Vertex = 0;
}

VertexSetType::VertexSetType(
 VertexTypeLisd * VertexIn)
{
  n = 0;
  Vertex = VertexIn;
}

VertexSetType::VertexSetType(
 NaturalType * nIn,
 VertexTypeLisd * VertexIn)
{
  n = nIn;
  Vertex = VertexIn;
}

VertexSetType::~VertexSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Vertex;
  #endif
}

void VertexSetType::printSelf(FILE * outFile)
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
    if (!Vertex)
      {
        fprintf(stderr, "Vertex list is missing\n");
        exit(1);
      }
    if (Vertex->size() == 0)
      {
        fprintf(stderr, "Vertex list is empty\n");
        exit(1);
      }
    if (Vertex->size() < 1)
      {
        fprintf(stderr,
                "size of Vertex list (%d) less than minimum required (1)\n",
                (int)Vertex->size());
        exit(1);
      }
    std::list<VertexType *>::iterator iter;
    for (iter = Vertex->begin();
         iter != Vertex->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Vertex");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Vertex>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool VertexSetType::badAttributes(
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
              fprintf(stderr, "two values for n in VertexSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in VertexSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VertexSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in VertexSetType\n");
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

NaturalType * VertexSetType::getn()
{return n;}

void VertexSetType::setn(NaturalType * nIn)
{n = nIn;}

VertexTypeLisd * VertexSetType::getVertex()
{return Vertex;}

void VertexSetType::setVertex(VertexTypeLisd * VertexIn)
{Vertex = VertexIn;}

/* ***************************************************************** */

/* class VertexType

*/

VertexType::VertexType() :
  TopologyBaseType()
{
  tolerance = 0;
  Point = 0;
}

VertexType::VertexType(
 AttributesType * AttributesIn,
 ElementReferenceType * PointIn) :
  TopologyBaseType(
    AttributesIn)
{
  tolerance = 0;
  Point = PointIn;
}

VertexType::VertexType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlDouble * toleranceIn,
 ElementReferenceType * PointIn) :
  TopologyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  tolerance = toleranceIn;
  Point = PointIn;
}

VertexType::~VertexType()
{
  #ifndef NODESTRUCT
  delete tolerance;
  delete Point;
  #endif
}

void VertexType::printSelf(FILE * outFile)
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
  if (hidden)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
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
  if (size)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (tolerance)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "tolerance=\"");
      tolerance->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Point>\n");
  doSpaces(-INDENT, outFile);
}

bool VertexType::badAttributes(
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
          if (this->color)
            {
              fprintf(stderr, "two values for color in VertexType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (this->hidden)
            {
              fprintf(stderr, "two values for hidden in VertexType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in VertexType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in VertexType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (this->size)
            {
              fprintf(stderr, "two values for size in VertexType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->size = sizeVal;
        }
      else if (decl->name == "tolerance")
        {
          XmlDouble * toleranceVal;
          if (this->tolerance)
            {
              fprintf(stderr, "two values for tolerance in VertexType\n");
              returnValue = true;
              break;
            }
          toleranceVal = new XmlDouble(decl->val.c_str());
          if (toleranceVal->bad)
            {
              delete toleranceVal;
              fprintf(stderr, "bad value %s for tolerance in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->tolerance = toleranceVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (this->transparency)
            {
              fprintf(stderr, "two values for transparency in VertexType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in VertexType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VertexType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in VertexType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->color;
      this->color = 0;
      delete this->hidden;
      this->hidden = 0;
      delete this->id;
      this->id = 0;
      delete this->label;
      this->label = 0;
      delete this->size;
      this->size = 0;
      delete this->tolerance;
      this->tolerance = 0;
      delete this->transparency;
      this->transparency = 0;
    }
  return returnValue;
}

XmlDouble * VertexType::gettolerance()
{return tolerance;}

void VertexType::settolerance(XmlDouble * toleranceIn)
{tolerance = toleranceIn;}

ElementReferenceType * VertexType::getPoint()
{return Point;}

void VertexType::setPoint(ElementReferenceType * PointIn)
{Point = PointIn;}

/* ***************************************************************** */

/* class VertexTypeLisd

*/

VertexTypeLisd::VertexTypeLisd() {}

VertexTypeLisd::VertexTypeLisd(VertexType * aVertexType)
{
  push_back(aVertexType);
}

VertexTypeLisd::~VertexTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<VertexType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void VertexTypeLisd::printSelf(FILE * outFile)
{
  std::list<VertexType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class FaceMeshType_1180_Type

*/

FaceMeshType_1180_Type::FaceMeshType_1180_Type()
{
  FaceMeshType_1180_TypePair = 0;
}

FaceMeshType_1180_Type::FaceMeshType_1180_Type(
 FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_TypePairIn)
{
  FaceMeshType_1180_TypePair = FaceMeshType_1180_TypePairIn;
}

FaceMeshType_1180_Type::~FaceMeshType_1180_Type()
{
  #ifndef NODESTRUCT
  delete FaceMeshType_1180_TypePair;
  #endif
}

void FaceMeshType_1180_Type::printSelf(FILE * outFile)
{
  if (FaceMeshType_1180_TypePair)
    {
      FaceMeshType_1180_TypePair->printSelf(outFile);
    }
}

FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_Type::getFaceMeshType_1180_TypePair()
{return FaceMeshType_1180_TypePair;}

void FaceMeshType_1180_Type::setFaceMeshType_1180_TypePair(FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_TypePairIn)
{FaceMeshType_1180_TypePair = FaceMeshType_1180_TypePairIn;}
FaceMeshType_1180_TypeChoicePair::FaceMeshType_1180_TypeChoicePair() {}

FaceMeshType_1180_TypeChoicePair::FaceMeshType_1180_TypeChoicePair(
 whichOne FaceMeshType_1180_TypeTypeIn,
 FaceMeshType_1180_TypeVal FaceMeshType_1180_TypeValueIn)
{
  FaceMeshType_1180_TypeType = FaceMeshType_1180_TypeTypeIn;
  FaceMeshType_1180_TypeValue = FaceMeshType_1180_TypeValueIn;
}

FaceMeshType_1180_TypeChoicePair::~FaceMeshType_1180_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (FaceMeshType_1180_TypeType == TrianglesE)
    delete FaceMeshType_1180_TypeValue.Triangles;
  else if (FaceMeshType_1180_TypeType == TrianglesBinaryE)
    delete FaceMeshType_1180_TypeValue.TrianglesBinary;
  #endif
}

void FaceMeshType_1180_TypeChoicePair::printSelf(FILE * outFile)
{
  if (FaceMeshType_1180_TypeType == TrianglesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Triangles");
      FaceMeshType_1180_TypeValue.Triangles->printSelf(outFile);
      fprintf(outFile, "</Triangles>\n");
    }
  else if (FaceMeshType_1180_TypeType == TrianglesBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesBinary");
      FaceMeshType_1180_TypeValue.TrianglesBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesBinary>\n");
    }
}

/* ***************************************************************** */

/* class FaceMeshType_1181_Type

*/

FaceMeshType_1181_Type::FaceMeshType_1181_Type()
{
  FaceMeshType_1181_TypePair = 0;
}

FaceMeshType_1181_Type::FaceMeshType_1181_Type(
 FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_TypePairIn)
{
  FaceMeshType_1181_TypePair = FaceMeshType_1181_TypePairIn;
}

FaceMeshType_1181_Type::~FaceMeshType_1181_Type()
{
  #ifndef NODESTRUCT
  delete FaceMeshType_1181_TypePair;
  #endif
}

void FaceMeshType_1181_Type::printSelf(FILE * outFile)
{
  if (FaceMeshType_1181_TypePair)
    {
      FaceMeshType_1181_TypePair->printSelf(outFile);
    }
}

FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_Type::getFaceMeshType_1181_TypePair()
{return FaceMeshType_1181_TypePair;}

void FaceMeshType_1181_Type::setFaceMeshType_1181_TypePair(FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_TypePairIn)
{FaceMeshType_1181_TypePair = FaceMeshType_1181_TypePairIn;}
FaceMeshType_1181_TypeChoicePair::FaceMeshType_1181_TypeChoicePair() {}

FaceMeshType_1181_TypeChoicePair::FaceMeshType_1181_TypeChoicePair(
 whichOne FaceMeshType_1181_TypeTypeIn,
 FaceMeshType_1181_TypeVal FaceMeshType_1181_TypeValueIn)
{
  FaceMeshType_1181_TypeType = FaceMeshType_1181_TypeTypeIn;
  FaceMeshType_1181_TypeValue = FaceMeshType_1181_TypeValueIn;
}

FaceMeshType_1181_TypeChoicePair::~FaceMeshType_1181_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (FaceMeshType_1181_TypeType == TrianglesVisibleE)
    delete FaceMeshType_1181_TypeValue.TrianglesVisible;
  else if (FaceMeshType_1181_TypeType == TrianglesVisibleBinaryE)
    delete FaceMeshType_1181_TypeValue.TrianglesVisibleBinary;
  else if (FaceMeshType_1181_TypeType == TrianglesHiddenE)
    delete FaceMeshType_1181_TypeValue.TrianglesHidden;
  else if (FaceMeshType_1181_TypeType == TrianglesHiddenBinaryE)
    delete FaceMeshType_1181_TypeValue.TrianglesHiddenBinary;
  #endif
}

void FaceMeshType_1181_TypeChoicePair::printSelf(FILE * outFile)
{
  if (FaceMeshType_1181_TypeType == TrianglesVisibleE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesVisible");
      FaceMeshType_1181_TypeValue.TrianglesVisible->printSelf(outFile);
      fprintf(outFile, "</TrianglesVisible>\n");
    }
  else if (FaceMeshType_1181_TypeType == TrianglesVisibleBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesVisibleBinary");
      FaceMeshType_1181_TypeValue.TrianglesVisibleBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesVisibleBinary>\n");
    }
  else if (FaceMeshType_1181_TypeType == TrianglesHiddenE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesHidden");
      FaceMeshType_1181_TypeValue.TrianglesHidden->printSelf(outFile);
      fprintf(outFile, "</TrianglesHidden>\n");
    }
  else if (FaceMeshType_1181_TypeType == TrianglesHiddenBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesHiddenBinary");
      FaceMeshType_1181_TypeValue.TrianglesHiddenBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesHiddenBinary>\n");
    }
}

/* ***************************************************************** */

/* class FaceMeshType_1182_Type

*/

FaceMeshType_1182_Type::FaceMeshType_1182_Type()
{
  FaceMeshType_1182_TypePair = 0;
}

FaceMeshType_1182_Type::FaceMeshType_1182_Type(
 FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_TypePairIn)
{
  FaceMeshType_1182_TypePair = FaceMeshType_1182_TypePairIn;
}

FaceMeshType_1182_Type::~FaceMeshType_1182_Type()
{
  #ifndef NODESTRUCT
  delete FaceMeshType_1182_TypePair;
  #endif
}

void FaceMeshType_1182_Type::printSelf(FILE * outFile)
{
  if (FaceMeshType_1182_TypePair)
    {
      FaceMeshType_1182_TypePair->printSelf(outFile);
    }
}

FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_Type::getFaceMeshType_1182_TypePair()
{return FaceMeshType_1182_TypePair;}

void FaceMeshType_1182_Type::setFaceMeshType_1182_TypePair(FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_TypePairIn)
{FaceMeshType_1182_TypePair = FaceMeshType_1182_TypePairIn;}
FaceMeshType_1182_TypeChoicePair::FaceMeshType_1182_TypeChoicePair() {}

FaceMeshType_1182_TypeChoicePair::FaceMeshType_1182_TypeChoicePair(
 whichOne FaceMeshType_1182_TypeTypeIn,
 FaceMeshType_1182_TypeVal FaceMeshType_1182_TypeValueIn)
{
  FaceMeshType_1182_TypeType = FaceMeshType_1182_TypeTypeIn;
  FaceMeshType_1182_TypeValue = FaceMeshType_1182_TypeValueIn;
}

FaceMeshType_1182_TypeChoicePair::~FaceMeshType_1182_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (FaceMeshType_1182_TypeType == TrianglesColorE)
    delete FaceMeshType_1182_TypeValue.TrianglesColor;
  else if (FaceMeshType_1182_TypeType == TrianglesColorBinaryE)
    delete FaceMeshType_1182_TypeValue.TrianglesColorBinary;
  #endif
}

void FaceMeshType_1182_TypeChoicePair::printSelf(FILE * outFile)
{
  if (FaceMeshType_1182_TypeType == TrianglesColorE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesColor");
      FaceMeshType_1182_TypeValue.TrianglesColor->printSelf(outFile);
      fprintf(outFile, "</TrianglesColor>\n");
    }
  else if (FaceMeshType_1182_TypeType == TrianglesColorBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrianglesColorBinary");
      FaceMeshType_1182_TypeValue.TrianglesColorBinary->printSelf(outFile);
      fprintf(outFile, "</TrianglesColorBinary>\n");
    }
}

/* ***************************************************************** */

/* class PointCloudType_1183_Type

*/

PointCloudType_1183_Type::PointCloudType_1183_Type()
{
  PointCloudType_1183_TypePair = 0;
}

PointCloudType_1183_Type::PointCloudType_1183_Type(
 PointCloudType_1183_TypeChoicePair * PointCloudType_1183_TypePairIn)
{
  PointCloudType_1183_TypePair = PointCloudType_1183_TypePairIn;
}

PointCloudType_1183_Type::~PointCloudType_1183_Type()
{
  #ifndef NODESTRUCT
  delete PointCloudType_1183_TypePair;
  #endif
}

void PointCloudType_1183_Type::printSelf(FILE * outFile)
{
  PointCloudType_1183_TypePair->printSelf(outFile);
}

PointCloudType_1183_TypeChoicePair * PointCloudType_1183_Type::getPointCloudType_1183_TypePair()
{return PointCloudType_1183_TypePair;}

void PointCloudType_1183_Type::setPointCloudType_1183_TypePair(PointCloudType_1183_TypeChoicePair * PointCloudType_1183_TypePairIn)
{PointCloudType_1183_TypePair = PointCloudType_1183_TypePairIn;}
PointCloudType_1183_TypeChoicePair::PointCloudType_1183_TypeChoicePair() {}

PointCloudType_1183_TypeChoicePair::PointCloudType_1183_TypeChoicePair(
 whichOne PointCloudType_1183_TypeTypeIn,
 PointCloudType_1183_TypeVal PointCloudType_1183_TypeValueIn)
{
  PointCloudType_1183_TypeType = PointCloudType_1183_TypeTypeIn;
  PointCloudType_1183_TypeValue = PointCloudType_1183_TypeValueIn;
}

PointCloudType_1183_TypeChoicePair::~PointCloudType_1183_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointCloudType_1183_TypeType == PointsE)
    delete PointCloudType_1183_TypeValue.Points;
  else if (PointCloudType_1183_TypeType == PointsBinaryE)
    delete PointCloudType_1183_TypeValue.PointsBinary;
  #endif
}

void PointCloudType_1183_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PointCloudType_1183_TypeType == PointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      PointCloudType_1183_TypeValue.Points->printSelf(outFile);
      fprintf(outFile, "</Points>\n");
    }
  else if (PointCloudType_1183_TypeType == PointsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsBinary");
      PointCloudType_1183_TypeValue.PointsBinary->printSelf(outFile);
      fprintf(outFile, "</PointsBinary>\n");
    }
}

/* ***************************************************************** */

/* class PointCloudType_1184_Type

*/

PointCloudType_1184_Type::PointCloudType_1184_Type()
{
  PointCloudType_1184_TypePair = 0;
}

PointCloudType_1184_Type::PointCloudType_1184_Type(
 PointCloudType_1184_TypeChoicePair * PointCloudType_1184_TypePairIn)
{
  PointCloudType_1184_TypePair = PointCloudType_1184_TypePairIn;
}

PointCloudType_1184_Type::~PointCloudType_1184_Type()
{
  #ifndef NODESTRUCT
  delete PointCloudType_1184_TypePair;
  #endif
}

void PointCloudType_1184_Type::printSelf(FILE * outFile)
{
  if (PointCloudType_1184_TypePair)
    {
      PointCloudType_1184_TypePair->printSelf(outFile);
    }
}

PointCloudType_1184_TypeChoicePair * PointCloudType_1184_Type::getPointCloudType_1184_TypePair()
{return PointCloudType_1184_TypePair;}

void PointCloudType_1184_Type::setPointCloudType_1184_TypePair(PointCloudType_1184_TypeChoicePair * PointCloudType_1184_TypePairIn)
{PointCloudType_1184_TypePair = PointCloudType_1184_TypePairIn;}
PointCloudType_1184_TypeChoicePair::PointCloudType_1184_TypeChoicePair() {}

PointCloudType_1184_TypeChoicePair::PointCloudType_1184_TypeChoicePair(
 whichOne PointCloudType_1184_TypeTypeIn,
 PointCloudType_1184_TypeVal PointCloudType_1184_TypeValueIn)
{
  PointCloudType_1184_TypeType = PointCloudType_1184_TypeTypeIn;
  PointCloudType_1184_TypeValue = PointCloudType_1184_TypeValueIn;
}

PointCloudType_1184_TypeChoicePair::~PointCloudType_1184_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointCloudType_1184_TypeType == NormalsE)
    delete PointCloudType_1184_TypeValue.Normals;
  else if (PointCloudType_1184_TypeType == NormalsBinaryE)
    delete PointCloudType_1184_TypeValue.NormalsBinary;
  #endif
}

void PointCloudType_1184_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PointCloudType_1184_TypeType == NormalsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normals");
      PointCloudType_1184_TypeValue.Normals->printSelf(outFile);
      fprintf(outFile, "</Normals>\n");
    }
  else if (PointCloudType_1184_TypeType == NormalsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NormalsBinary");
      PointCloudType_1184_TypeValue.NormalsBinary->printSelf(outFile);
      fprintf(outFile, "</NormalsBinary>\n");
    }
}

/* ***************************************************************** */

/* class PointCloudType_1185_Type

*/

PointCloudType_1185_Type::PointCloudType_1185_Type()
{
  PointCloudType_1185_TypePair = 0;
}

PointCloudType_1185_Type::PointCloudType_1185_Type(
 PointCloudType_1185_TypeChoicePair * PointCloudType_1185_TypePairIn)
{
  PointCloudType_1185_TypePair = PointCloudType_1185_TypePairIn;
}

PointCloudType_1185_Type::~PointCloudType_1185_Type()
{
  #ifndef NODESTRUCT
  delete PointCloudType_1185_TypePair;
  #endif
}

void PointCloudType_1185_Type::printSelf(FILE * outFile)
{
  if (PointCloudType_1185_TypePair)
    {
      PointCloudType_1185_TypePair->printSelf(outFile);
    }
}

PointCloudType_1185_TypeChoicePair * PointCloudType_1185_Type::getPointCloudType_1185_TypePair()
{return PointCloudType_1185_TypePair;}

void PointCloudType_1185_Type::setPointCloudType_1185_TypePair(PointCloudType_1185_TypeChoicePair * PointCloudType_1185_TypePairIn)
{PointCloudType_1185_TypePair = PointCloudType_1185_TypePairIn;}
PointCloudType_1185_TypeChoicePair::PointCloudType_1185_TypeChoicePair() {}

PointCloudType_1185_TypeChoicePair::PointCloudType_1185_TypeChoicePair(
 whichOne PointCloudType_1185_TypeTypeIn,
 PointCloudType_1185_TypeVal PointCloudType_1185_TypeValueIn)
{
  PointCloudType_1185_TypeType = PointCloudType_1185_TypeTypeIn;
  PointCloudType_1185_TypeValue = PointCloudType_1185_TypeValueIn;
}

PointCloudType_1185_TypeChoicePair::~PointCloudType_1185_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointCloudType_1185_TypeType == PointsVisibleE)
    delete PointCloudType_1185_TypeValue.PointsVisible;
  else if (PointCloudType_1185_TypeType == PointsVisibleBinaryE)
    delete PointCloudType_1185_TypeValue.PointsVisibleBinary;
  else if (PointCloudType_1185_TypeType == PointsHiddenE)
    delete PointCloudType_1185_TypeValue.PointsHidden;
  else if (PointCloudType_1185_TypeType == PointsHiddenBinaryE)
    delete PointCloudType_1185_TypeValue.PointsHiddenBinary;
  #endif
}

void PointCloudType_1185_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PointCloudType_1185_TypeType == PointsVisibleE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsVisible");
      PointCloudType_1185_TypeValue.PointsVisible->printSelf(outFile);
      fprintf(outFile, "</PointsVisible>\n");
    }
  else if (PointCloudType_1185_TypeType == PointsVisibleBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsVisibleBinary");
      PointCloudType_1185_TypeValue.PointsVisibleBinary->printSelf(outFile);
      fprintf(outFile, "</PointsVisibleBinary>\n");
    }
  else if (PointCloudType_1185_TypeType == PointsHiddenE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsHidden");
      PointCloudType_1185_TypeValue.PointsHidden->printSelf(outFile);
      fprintf(outFile, "</PointsHidden>\n");
    }
  else if (PointCloudType_1185_TypeType == PointsHiddenBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsHiddenBinary");
      PointCloudType_1185_TypeValue.PointsHiddenBinary->printSelf(outFile);
      fprintf(outFile, "</PointsHiddenBinary>\n");
    }
}

/* ***************************************************************** */

/* class PointCloudType_1186_Type

*/

PointCloudType_1186_Type::PointCloudType_1186_Type()
{
  PointCloudType_1186_TypePair = 0;
}

PointCloudType_1186_Type::PointCloudType_1186_Type(
 PointCloudType_1186_TypeChoicePair * PointCloudType_1186_TypePairIn)
{
  PointCloudType_1186_TypePair = PointCloudType_1186_TypePairIn;
}

PointCloudType_1186_Type::~PointCloudType_1186_Type()
{
  #ifndef NODESTRUCT
  delete PointCloudType_1186_TypePair;
  #endif
}

void PointCloudType_1186_Type::printSelf(FILE * outFile)
{
  if (PointCloudType_1186_TypePair)
    {
      PointCloudType_1186_TypePair->printSelf(outFile);
    }
}

PointCloudType_1186_TypeChoicePair * PointCloudType_1186_Type::getPointCloudType_1186_TypePair()
{return PointCloudType_1186_TypePair;}

void PointCloudType_1186_Type::setPointCloudType_1186_TypePair(PointCloudType_1186_TypeChoicePair * PointCloudType_1186_TypePairIn)
{PointCloudType_1186_TypePair = PointCloudType_1186_TypePairIn;}
PointCloudType_1186_TypeChoicePair::PointCloudType_1186_TypeChoicePair() {}

PointCloudType_1186_TypeChoicePair::PointCloudType_1186_TypeChoicePair(
 whichOne PointCloudType_1186_TypeTypeIn,
 PointCloudType_1186_TypeVal PointCloudType_1186_TypeValueIn)
{
  PointCloudType_1186_TypeType = PointCloudType_1186_TypeTypeIn;
  PointCloudType_1186_TypeValue = PointCloudType_1186_TypeValueIn;
}

PointCloudType_1186_TypeChoicePair::~PointCloudType_1186_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PointCloudType_1186_TypeType == PointsColorE)
    delete PointCloudType_1186_TypeValue.PointsColor;
  else if (PointCloudType_1186_TypeType == PointsColorBinaryE)
    delete PointCloudType_1186_TypeValue.PointsColorBinary;
  #endif
}

void PointCloudType_1186_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PointCloudType_1186_TypeType == PointsColorE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsColor");
      PointCloudType_1186_TypeValue.PointsColor->printSelf(outFile);
      fprintf(outFile, "</PointsColor>\n");
    }
  else if (PointCloudType_1186_TypeType == PointsColorBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsColorBinary");
      PointCloudType_1186_TypeValue.PointsColorBinary->printSelf(outFile);
      fprintf(outFile, "</PointsColorBinary>\n");
    }
}

/* ***************************************************************** */

