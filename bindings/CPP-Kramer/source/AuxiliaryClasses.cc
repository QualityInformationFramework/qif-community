/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "AuxiliaryClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class AuxiliaryBaseType

*/

AuxiliaryBaseType::AuxiliaryBaseType() :
  DrawableBaseType()
{
}

AuxiliaryBaseType::AuxiliaryBaseType(
 AttributesType * AttributesIn) :
  DrawableBaseType(
    AttributesIn)
{
}

AuxiliaryBaseType::AuxiliaryBaseType(
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

AuxiliaryBaseType::~AuxiliaryBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void AuxiliaryBaseType::printSelf(FILE * outFile)
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

bool AuxiliaryBaseType::badAttributes(
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
              fprintf(stderr, "two values for color in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in AuxiliaryBaseType\n",
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
              fprintf(stderr, "two values for hidden in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in AuxiliaryBaseType\n",
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
              fprintf(stderr, "two values for id in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AuxiliaryBaseType\n",
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
              fprintf(stderr, "two values for label in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in AuxiliaryBaseType\n",
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
              fprintf(stderr, "two values for size in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in AuxiliaryBaseType\n",
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
              fprintf(stderr, "two values for transparency in AuxiliaryBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in AuxiliaryBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AuxiliaryBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AuxiliaryBaseType\n");
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

/* class AuxiliaryBaseTypeLisd

*/

AuxiliaryBaseTypeLisd::AuxiliaryBaseTypeLisd() {}

AuxiliaryBaseTypeLisd::AuxiliaryBaseTypeLisd(AuxiliaryBaseType * aAuxiliaryBaseType)
{
  push_back(aAuxiliaryBaseType);
}

AuxiliaryBaseTypeLisd::~AuxiliaryBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AuxiliaryBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AuxiliaryBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<AuxiliaryBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AuxiliaryPlaneBaseType

*/

AuxiliaryPlaneBaseType::AuxiliaryPlaneBaseType() :
  AuxiliaryBaseType()
{
  Plane = 0;
}

AuxiliaryPlaneBaseType::AuxiliaryPlaneBaseType(
 AttributesType * AttributesIn,
 PlaneType * PlaneIn) :
  AuxiliaryBaseType(
    AttributesIn)
{
  Plane = PlaneIn;
}

AuxiliaryPlaneBaseType::AuxiliaryPlaneBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 PlaneType * PlaneIn) :
  AuxiliaryBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  Plane = PlaneIn;
}

AuxiliaryPlaneBaseType::~AuxiliaryPlaneBaseType()
{
  #ifndef NODESTRUCT
  delete Plane;
  #endif
}

void AuxiliaryPlaneBaseType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Plane");
  Plane->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Plane>\n");
  doSpaces(-INDENT, outFile);
}

bool AuxiliaryPlaneBaseType::badAttributes(
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
              fprintf(stderr, "two values for color in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in AuxiliaryPlaneBaseType\n",
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
              fprintf(stderr, "two values for hidden in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in AuxiliaryPlaneBaseType\n",
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
              fprintf(stderr, "two values for id in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AuxiliaryPlaneBaseType\n",
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
              fprintf(stderr, "two values for label in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in AuxiliaryPlaneBaseType\n",
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
              fprintf(stderr, "two values for size in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in AuxiliaryPlaneBaseType\n",
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
              fprintf(stderr, "two values for transparency in AuxiliaryPlaneBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in AuxiliaryPlaneBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AuxiliaryPlaneBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AuxiliaryPlaneBaseType\n");
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

PlaneType * AuxiliaryPlaneBaseType::getPlane()
{return Plane;}

void AuxiliaryPlaneBaseType::setPlane(PlaneType * PlaneIn)
{Plane = PlaneIn;}

/* ***************************************************************** */

/* class AuxiliarySetType

*/

AuxiliarySetType::AuxiliarySetType()
{
  n = 0;
  Auxiliary = 0;
}

AuxiliarySetType::AuxiliarySetType(
 AuxiliaryBaseTypeLisd * AuxiliaryIn)
{
  n = 0;
  Auxiliary = AuxiliaryIn;
}

AuxiliarySetType::AuxiliarySetType(
 NaturalType * nIn,
 AuxiliaryBaseTypeLisd * AuxiliaryIn)
{
  n = nIn;
  Auxiliary = AuxiliaryIn;
}

AuxiliarySetType::~AuxiliarySetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Auxiliary;
  #endif
}

void AuxiliarySetType::printSelf(FILE * outFile)
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
    if (!Auxiliary)
      {
        fprintf(stderr, "Auxiliary list is missing\n");
        exit(1);
      }
    if (Auxiliary->size() == 0)
      {
        fprintf(stderr, "Auxiliary list is empty\n");
        exit(1);
      }
    if (Auxiliary->size() < 1)
      {
        fprintf(stderr,
                "size of Auxiliary list (%d) less than minimum required (1)\n",
                (int)Auxiliary->size());
        exit(1);
      }
    std::list<AuxiliaryBaseType *>::iterator iter;
    for (iter = Auxiliary->begin();
         iter != Auxiliary->end(); iter++)
      {
        AuxiliaryBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "PointAuxiliary") == 0)
          {
            PointAuxiliaryType * typ;
            if ((typ = dynamic_cast<PointAuxiliaryType *>(basie)))
              {
                fprintf(outFile, "<PointAuxiliary");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</PointAuxiliary>\n");
              }
            else
              {
                fprintf(stderr, "bad PointAuxiliary element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LineAuxiliary") == 0)
          {
            LineAuxiliaryType * typ;
            if ((typ = dynamic_cast<LineAuxiliaryType *>(basie)))
              {
                fprintf(outFile, "<LineAuxiliary");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LineAuxiliary>\n");
              }
            else
              {
                fprintf(stderr, "bad LineAuxiliary element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "PlaneReference") == 0)
          {
            PlaneReferenceType * typ;
            if ((typ = dynamic_cast<PlaneReferenceType *>(basie)))
              {
                fprintf(outFile, "<PlaneReference");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</PlaneReference>\n");
              }
            else
              {
                fprintf(stderr, "bad PlaneReference element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Auxiliary type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AuxiliarySetType::badAttributes(
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
              fprintf(stderr, "two values for n in AuxiliarySetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AuxiliarySetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AuxiliarySetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AuxiliarySetType\n");
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

NaturalType * AuxiliarySetType::getn()
{return n;}

void AuxiliarySetType::setn(NaturalType * nIn)
{n = nIn;}

AuxiliaryBaseTypeLisd * AuxiliarySetType::getAuxiliary()
{return Auxiliary;}

void AuxiliarySetType::setAuxiliary(AuxiliaryBaseTypeLisd * AuxiliaryIn)
{Auxiliary = AuxiliaryIn;}

/* ***************************************************************** */

/* class CADCoordinateSystemType

*/

CADCoordinateSystemType::CADCoordinateSystemType() :
  DrawableBaseType()
{
  CoordinateSystemCore = 0;
}

CADCoordinateSystemType::CADCoordinateSystemType(
 AttributesType * AttributesIn,
 CoordinateSystemCoreType * CoordinateSystemCoreIn) :
  DrawableBaseType(
    AttributesIn)
{
  CoordinateSystemCore = CoordinateSystemCoreIn;
}

CADCoordinateSystemType::CADCoordinateSystemType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 CoordinateSystemCoreType * CoordinateSystemCoreIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  CoordinateSystemCore = CoordinateSystemCoreIn;
}

CADCoordinateSystemType::~CADCoordinateSystemType()
{
  #ifndef NODESTRUCT
  delete CoordinateSystemCore;
  #endif
}

void CADCoordinateSystemType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<CoordinateSystemCore");
  CoordinateSystemCore->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CoordinateSystemCore>\n");
  doSpaces(-INDENT, outFile);
}

bool CADCoordinateSystemType::badAttributes(
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
              fprintf(stderr, "two values for color in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in CADCoordinateSystemType\n",
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
              fprintf(stderr, "two values for hidden in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in CADCoordinateSystemType\n",
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
              fprintf(stderr, "two values for id in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CADCoordinateSystemType\n",
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
              fprintf(stderr, "two values for label in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in CADCoordinateSystemType\n",
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
              fprintf(stderr, "two values for size in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in CADCoordinateSystemType\n",
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
              fprintf(stderr, "two values for transparency in CADCoordinateSystemType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in CADCoordinateSystemType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CADCoordinateSystemType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in CADCoordinateSystemType\n");
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

CoordinateSystemCoreType * CADCoordinateSystemType::getCoordinateSystemCore()
{return CoordinateSystemCore;}

void CADCoordinateSystemType::setCoordinateSystemCore(CoordinateSystemCoreType * CoordinateSystemCoreIn)
{CoordinateSystemCore = CoordinateSystemCoreIn;}

/* ***************************************************************** */

/* class CADCoordinateSystemTypeLisd

*/

CADCoordinateSystemTypeLisd::CADCoordinateSystemTypeLisd() {}

CADCoordinateSystemTypeLisd::CADCoordinateSystemTypeLisd(CADCoordinateSystemType * aCADCoordinateSystemType)
{
  push_back(aCADCoordinateSystemType);
}

CADCoordinateSystemTypeLisd::~CADCoordinateSystemTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CADCoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CADCoordinateSystemTypeLisd::printSelf(FILE * outFile)
{
  std::list<CADCoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoordinateSystemSetType

*/

CoordinateSystemSetType::CoordinateSystemSetType()
{
  n = 0;
  CoordinateSystem = 0;
}

CoordinateSystemSetType::CoordinateSystemSetType(
 CADCoordinateSystemTypeLisd * CoordinateSystemIn)
{
  n = 0;
  CoordinateSystem = CoordinateSystemIn;
}

CoordinateSystemSetType::CoordinateSystemSetType(
 NaturalType * nIn,
 CADCoordinateSystemTypeLisd * CoordinateSystemIn)
{
  n = nIn;
  CoordinateSystem = CoordinateSystemIn;
}

CoordinateSystemSetType::~CoordinateSystemSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CoordinateSystem;
  #endif
}

void CoordinateSystemSetType::printSelf(FILE * outFile)
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
    if (!CoordinateSystem)
      {
        fprintf(stderr, "CoordinateSystem list is missing\n");
        exit(1);
      }
    if (CoordinateSystem->size() == 0)
      {
        fprintf(stderr, "CoordinateSystem list is empty\n");
        exit(1);
      }
    if (CoordinateSystem->size() < 1)
      {
        fprintf(stderr,
                "size of CoordinateSystem list (%d) less than minimum required (1)\n",
                (int)CoordinateSystem->size());
        exit(1);
      }
    std::list<CADCoordinateSystemType *>::iterator iter;
    for (iter = CoordinateSystem->begin();
         iter != CoordinateSystem->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CoordinateSystem");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CoordinateSystem>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CoordinateSystemSetType::badAttributes(
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
              fprintf(stderr, "two values for n in CoordinateSystemSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CoordinateSystemSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoordinateSystemSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CoordinateSystemSetType\n");
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

NaturalType * CoordinateSystemSetType::getn()
{return n;}

void CoordinateSystemSetType::setn(NaturalType * nIn)
{n = nIn;}

CADCoordinateSystemTypeLisd * CoordinateSystemSetType::getCoordinateSystem()
{return CoordinateSystem;}

void CoordinateSystemSetType::setCoordinateSystem(CADCoordinateSystemTypeLisd * CoordinateSystemIn)
{CoordinateSystem = CoordinateSystemIn;}

/* ***************************************************************** */

/* class LineAuxiliaryType

*/

LineAuxiliaryType::LineAuxiliaryType() :
  AuxiliaryBaseType()
{
  StartPoint = 0;
  EndPoint = 0;
  LineStyle = 0;
}

LineAuxiliaryType::LineAuxiliaryType(
 AttributesType * AttributesIn,
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn,
 LineStyleType * LineStyleIn) :
  AuxiliaryBaseType(
    AttributesIn)
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
  LineStyle = LineStyleIn;
}

LineAuxiliaryType::LineAuxiliaryType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn,
 LineStyleType * LineStyleIn) :
  AuxiliaryBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
  LineStyle = LineStyleIn;
}

LineAuxiliaryType::~LineAuxiliaryType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete EndPoint;
  delete LineStyle;
  #endif
}

void LineAuxiliaryType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  if (LineStyle)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LineStyle");
      LineStyle->printSelf(outFile);
      fprintf(outFile, "</LineStyle>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool LineAuxiliaryType::badAttributes(
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
              fprintf(stderr, "two values for color in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in LineAuxiliaryType\n",
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
              fprintf(stderr, "two values for hidden in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in LineAuxiliaryType\n",
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
              fprintf(stderr, "two values for id in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LineAuxiliaryType\n",
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
              fprintf(stderr, "two values for label in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in LineAuxiliaryType\n",
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
              fprintf(stderr, "two values for size in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in LineAuxiliaryType\n",
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
              fprintf(stderr, "two values for transparency in LineAuxiliaryType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in LineAuxiliaryType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LineAuxiliaryType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LineAuxiliaryType\n");
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

PointSimpleType * LineAuxiliaryType::getStartPoint()
{return StartPoint;}

void LineAuxiliaryType::setStartPoint(PointSimpleType * StartPointIn)
{StartPoint = StartPointIn;}

PointSimpleType * LineAuxiliaryType::getEndPoint()
{return EndPoint;}

void LineAuxiliaryType::setEndPoint(PointSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

LineStyleType * LineAuxiliaryType::getLineStyle()
{return LineStyle;}

void LineAuxiliaryType::setLineStyle(LineStyleType * LineStyleIn)
{LineStyle = LineStyleIn;}

/* ***************************************************************** */

/* class PlaneReferenceType

*/

PlaneReferenceType::PlaneReferenceType() :
  AuxiliaryPlaneBaseType()
{
}

PlaneReferenceType::PlaneReferenceType(
 AttributesType * AttributesIn,
 PlaneType * PlaneIn) :
  AuxiliaryPlaneBaseType(
    AttributesIn,
    PlaneIn)
{
}

PlaneReferenceType::PlaneReferenceType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 PlaneType * PlaneIn) :
  AuxiliaryPlaneBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    PlaneIn)
{
}

PlaneReferenceType::~PlaneReferenceType()
{
  #ifndef NODESTRUCT
  #endif
}

void PlaneReferenceType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Plane");
  Plane->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Plane>\n");
  doSpaces(-INDENT, outFile);
}

bool PlaneReferenceType::badAttributes(
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
              fprintf(stderr, "two values for color in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PlaneReferenceType\n",
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
              fprintf(stderr, "two values for hidden in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PlaneReferenceType\n",
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
              fprintf(stderr, "two values for id in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PlaneReferenceType\n",
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
              fprintf(stderr, "two values for label in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PlaneReferenceType\n",
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
              fprintf(stderr, "two values for size in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PlaneReferenceType\n",
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
              fprintf(stderr, "two values for transparency in PlaneReferenceType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PlaneReferenceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PlaneReferenceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PlaneReferenceType\n");
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

/* class PointAuxiliaryType

*/

PointAuxiliaryType::PointAuxiliaryType() :
  AuxiliaryBaseType()
{
  XYZ = 0;
}

PointAuxiliaryType::PointAuxiliaryType(
 AttributesType * AttributesIn,
 PointType * XYZIn) :
  AuxiliaryBaseType(
    AttributesIn)
{
  XYZ = XYZIn;
}

PointAuxiliaryType::PointAuxiliaryType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 PointType * XYZIn) :
  AuxiliaryBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  XYZ = XYZIn;
}

PointAuxiliaryType::~PointAuxiliaryType()
{
  #ifndef NODESTRUCT
  delete XYZ;
  #endif
}

void PointAuxiliaryType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<XYZ");
  XYZ->printSelf(outFile);
  fprintf(outFile, "</XYZ>\n");
  doSpaces(-INDENT, outFile);
}

bool PointAuxiliaryType::badAttributes(
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
              fprintf(stderr, "two values for color in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PointAuxiliaryType\n",
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
              fprintf(stderr, "two values for hidden in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PointAuxiliaryType\n",
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
              fprintf(stderr, "two values for id in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PointAuxiliaryType\n",
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
              fprintf(stderr, "two values for label in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PointAuxiliaryType\n",
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
              fprintf(stderr, "two values for size in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PointAuxiliaryType\n",
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
              fprintf(stderr, "two values for transparency in PointAuxiliaryType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PointAuxiliaryType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointAuxiliaryType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PointAuxiliaryType\n");
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

PointType * PointAuxiliaryType::getXYZ()
{return XYZ;}

void PointAuxiliaryType::setXYZ(PointType * XYZIn)
{XYZ = XYZIn;}

/* ***************************************************************** */

