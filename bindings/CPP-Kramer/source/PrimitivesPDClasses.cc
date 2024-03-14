/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPDClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class ApplicationType

*/

ApplicationType::ApplicationType()
{
  Name = 0;
  Organization = 0;
  AddonName = 0;
  AddonOrganization = 0;
}

ApplicationType::ApplicationType(
 XmlString * NameIn,
 XmlString * OrganizationIn,
 XmlString * AddonNameIn,
 XmlString * AddonOrganizationIn)
{
  Name = NameIn;
  Organization = OrganizationIn;
  AddonName = AddonNameIn;
  AddonOrganization = AddonOrganizationIn;
}

ApplicationType::~ApplicationType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Organization;
  delete AddonName;
  delete AddonOrganization;
  #endif
}

void ApplicationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Organization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Organization");
      Organization->printSelf(outFile);
      fprintf(outFile, "</Organization>\n");
    }
  if (AddonName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AddonName");
      AddonName->printSelf(outFile);
      fprintf(outFile, "</AddonName>\n");
    }
  if (AddonOrganization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AddonOrganization");
      AddonOrganization->printSelf(outFile);
      fprintf(outFile, "</AddonOrganization>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * ApplicationType::getName()
{return Name;}

void ApplicationType::setName(XmlString * NameIn)
{Name = NameIn;}

XmlString * ApplicationType::getOrganization()
{return Organization;}

void ApplicationType::setOrganization(XmlString * OrganizationIn)
{Organization = OrganizationIn;}

XmlString * ApplicationType::getAddonName()
{return AddonName;}

void ApplicationType::setAddonName(XmlString * AddonNameIn)
{AddonName = AddonNameIn;}

XmlString * ApplicationType::getAddonOrganization()
{return AddonOrganization;}

void ApplicationType::setAddonOrganization(XmlString * AddonOrganizationIn)
{AddonOrganization = AddonOrganizationIn;}

/* ***************************************************************** */

/* class AuthorType

*/

AuthorType::AuthorType()
{
  Name = 0;
  Organization = 0;
}

AuthorType::AuthorType(
 XmlString * NameIn,
 XmlString * OrganizationIn)
{
  Name = NameIn;
  Organization = OrganizationIn;
}

AuthorType::~AuthorType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Organization;
  #endif
}

void AuthorType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Organization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Organization");
      Organization->printSelf(outFile);
      fprintf(outFile, "</Organization>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * AuthorType::getName()
{return Name;}

void AuthorType::setName(XmlString * NameIn)
{Name = NameIn;}

XmlString * AuthorType::getOrganization()
{return Organization;}

void AuthorType::setOrganization(XmlString * OrganizationIn)
{Organization = OrganizationIn;}

/* ***************************************************************** */

/* class ColorType

*/

ColorType::ColorType() :
  ListIntType()
{
}

ColorType::ColorType(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
}

ColorType::ColorType(
 const char * valueString) :
  ListIntType(valueString)
{
  ColorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "ColorTypeCheck failed\n");
      exit(1);
    }
}

ColorType::~ColorType() {}

void ColorType::printName(FILE * outFile)
{
  fprintf(outFile, "ColorType");
}

void ColorType::printSelf(FILE * outFile)
{
  ColorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "ColorTypeCheck failed\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

void ColorType::oPrintSelf(FILE * outFile)
{
  ColorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "ColorTypeCheck failed\n");
      exit(1);
    }
  ListIntType::oPrintSelf(outFile);
}

bool ColorType::ColorTypeCheck()
{
  bad = ((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class DrawableBaseType

*/

DrawableBaseType::DrawableBaseType() :
  NodeWithIdBaseType()
{
  color = 0;
  hidden = 0;
  size = 0;
  transparency = 0;
}

DrawableBaseType::DrawableBaseType(
 AttributesType * AttributesIn) :
  NodeWithIdBaseType(
    AttributesIn)
{
  color = 0;
  hidden = 0;
  size = 0;
  transparency = 0;
}

DrawableBaseType::DrawableBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn) :
  NodeWithIdBaseType(
    labelIn,
    idIn,
    AttributesIn)
{
  color = colorIn;
  hidden = hiddenIn;
  size = sizeIn;
  transparency = transparencyIn;
}

DrawableBaseType::~DrawableBaseType()
{
  #ifndef NODESTRUCT
  delete color;
  delete hidden;
  delete size;
  delete transparency;
  #endif
}

void DrawableBaseType::printSelf(FILE * outFile)
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

bool DrawableBaseType::badAttributes(
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
              fprintf(stderr, "two values for color in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in DrawableBaseType\n",
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
              fprintf(stderr, "two values for hidden in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in DrawableBaseType\n",
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
              fprintf(stderr, "two values for id in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DrawableBaseType\n",
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
              fprintf(stderr, "two values for label in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in DrawableBaseType\n",
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
              fprintf(stderr, "two values for size in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in DrawableBaseType\n",
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
              fprintf(stderr, "two values for transparency in DrawableBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in DrawableBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DrawableBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DrawableBaseType\n");
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

ColorType * DrawableBaseType::getcolor()
{return color;}

void DrawableBaseType::setcolor(ColorType * colorIn)
{color = colorIn;}

XmlBoolean * DrawableBaseType::gethidden()
{return hidden;}

void DrawableBaseType::sethidden(XmlBoolean * hiddenIn)
{hidden = hiddenIn;}

DoublePositiveType * DrawableBaseType::getsize()
{return size;}

void DrawableBaseType::setsize(DoublePositiveType * sizeIn)
{size = sizeIn;}

TransparencyType * DrawableBaseType::gettransparency()
{return transparency;}

void DrawableBaseType::settransparency(TransparencyType * transparencyIn)
{transparency = transparencyIn;}

/* ***************************************************************** */

/* class EdgeOrientedType

*/

EdgeOrientedType::EdgeOrientedType() :
  ElementReferenceType()
{
  turned = 0;
}

EdgeOrientedType::EdgeOrientedType(
 QIFReferenceType * IdIn) :
  ElementReferenceType(
    IdIn)
{
  turned = 0;
}

EdgeOrientedType::EdgeOrientedType(
 QIFReferenceType * IdIn,
 XmlBoolean * turnedIn) :
  ElementReferenceType(
    IdIn)
{
  turned = turnedIn;
}

EdgeOrientedType::~EdgeOrientedType()
{
  #ifndef NODESTRUCT
  delete turned;
  #endif
}

void EdgeOrientedType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<Id");
  Id->printSelf(outFile);
  fprintf(outFile, "</Id>\n");
  doSpaces(-INDENT, outFile);
}

bool EdgeOrientedType::badAttributes(
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
          if (this->turned)
            {
              fprintf(stderr, "two values for turned in EdgeOrientedType\n");
              returnValue = true;
              break;
            }
          turnedVal = new XmlBoolean(decl->val.c_str());
          if (turnedVal->bad)
            {
              delete turnedVal;
              fprintf(stderr, "bad value %s for turned in EdgeOrientedType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->turned = turnedVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EdgeOrientedType\n");
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
      delete this->turned;
      this->turned = 0;
    }
  return returnValue;
}

XmlBoolean * EdgeOrientedType::getturned()
{return turned;}

void EdgeOrientedType::setturned(XmlBoolean * turnedIn)
{turned = turnedIn;}

/* ***************************************************************** */

/* class EdgeOrientedTypeLisd

*/

EdgeOrientedTypeLisd::EdgeOrientedTypeLisd() {}

EdgeOrientedTypeLisd::EdgeOrientedTypeLisd(EdgeOrientedType * aEdgeOrientedType)
{
  push_back(aEdgeOrientedType);
}

EdgeOrientedTypeLisd::~EdgeOrientedTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<EdgeOrientedType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void EdgeOrientedTypeLisd::printSelf(FILE * outFile)
{
  std::list<EdgeOrientedType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class LineStyleEnumType

*/

LineStyleEnumType::LineStyleEnumType() :
  XmlString()
{
}

LineStyleEnumType::LineStyleEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "SOLID") &&
           strcmp(val.c_str(), "DOT") &&
           strcmp(val.c_str(), "DASH") &&
           strcmp(val.c_str(), "DASH_DOT") &&
           strcmp(val.c_str(), "DASH_DOT_DOT") &&
           strcmp(val.c_str(), "DASH_DOT_DOT_DOT") &&
           strcmp(val.c_str(), "DASH_DASH_DOT") &&
           strcmp(val.c_str(), "DASH_DASH_DOT_DOT") &&
           strcmp(val.c_str(), "DASH_DASH_DOT_DOT_DOT") &&
           strcmp(val.c_str(), "SHORT_DASH") &&
           strcmp(val.c_str(), "LONG_DASH") &&
           strcmp(val.c_str(), "MEDIUM_LONG_DASH") &&
           strcmp(val.c_str(), "MEDIUM_DASH_SHORT_DASH_SHORT_DASH") &&
           strcmp(val.c_str(), "LONG_DASH_SHORT_DASH") &&
           strcmp(val.c_str(), "LONG_DASH_SHORT_DASH_SHORT_DASH") &&
           strcmp(val.c_str(), "LONG_DASH_DOT_DOT") &&
           strcmp(val.c_str(), "LONG_DASH_DOT") &&
           strcmp(val.c_str(), "MEDIUM_DASH_DOT_SHORT_DASH_DOT") &&
           strcmp(val.c_str(), "SPARSE_DOT") &&
           strcmp(val.c_str(), "CENTERLINE") &&
           strcmp(val.c_str(), "PHANTOM"));
}

LineStyleEnumType::~LineStyleEnumType() {}

bool LineStyleEnumType::LineStyleEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "SOLID") &&
          strcmp(val.c_str(), "DOT") &&
          strcmp(val.c_str(), "DASH") &&
          strcmp(val.c_str(), "DASH_DOT") &&
          strcmp(val.c_str(), "DASH_DOT_DOT") &&
          strcmp(val.c_str(), "DASH_DOT_DOT_DOT") &&
          strcmp(val.c_str(), "DASH_DASH_DOT") &&
          strcmp(val.c_str(), "DASH_DASH_DOT_DOT") &&
          strcmp(val.c_str(), "DASH_DASH_DOT_DOT_DOT") &&
          strcmp(val.c_str(), "SHORT_DASH") &&
          strcmp(val.c_str(), "LONG_DASH") &&
          strcmp(val.c_str(), "MEDIUM_LONG_DASH") &&
          strcmp(val.c_str(), "MEDIUM_DASH_SHORT_DASH_SHORT_DASH") &&
          strcmp(val.c_str(), "LONG_DASH_SHORT_DASH") &&
          strcmp(val.c_str(), "LONG_DASH_SHORT_DASH_SHORT_DASH") &&
          strcmp(val.c_str(), "LONG_DASH_DOT_DOT") &&
          strcmp(val.c_str(), "LONG_DASH_DOT") &&
          strcmp(val.c_str(), "MEDIUM_DASH_DOT_SHORT_DASH_DOT") &&
          strcmp(val.c_str(), "SPARSE_DOT") &&
          strcmp(val.c_str(), "CENTERLINE") &&
          strcmp(val.c_str(), "PHANTOM"));
}

void LineStyleEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LineStyleEnumType");
}

void LineStyleEnumType::printSelf(FILE * outFile)
{
  if (LineStyleEnumTypeIsBad())
    {
      fprintf(stderr, "bad LineStyleEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void LineStyleEnumType::oPrintSelf(FILE * outFile)
{
  if (LineStyleEnumTypeIsBad())
    {
      fprintf(stderr, "bad LineStyleEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LineStyleType

*/

LineStyleType::LineStyleType() :
  LineStyleEnumType()
{
  thickness = 0;
  val = "";
}

LineStyleType::LineStyleType(
 const char * valStringIn) :
  LineStyleEnumType(valStringIn)
{
  thickness = 0;
}

LineStyleType::LineStyleType(
 XmlPositiveInteger * thicknessIn,
 const char * valStringIn) :
  LineStyleEnumType(valStringIn)
{
  thickness = thicknessIn;
}

LineStyleType::~LineStyleType()
{
  #ifndef NODESTRUCT
  delete thickness;
  #endif
}

void LineStyleType::printName(FILE * outFile)
{
  fprintf(outFile, "LineStyleType");
}

void LineStyleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  LineStyleTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "LineStyleTypeIsBad failed\n");
      exit(1);
    }
  if (thickness)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "thickness=\"");
      thickness->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlString::printSelf(outFile);
}

bool LineStyleType::LineStyleTypeIsBad()
{
  LineStyleEnumTypeIsBad();
  return bad;
}

bool LineStyleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "thickness")
        {
          XmlPositiveInteger * thicknessVal;
          if (this->thickness)
            {
              fprintf(stderr, "two values for thickness in LineStyleType\n");
              returnValue = true;
              break;
            }
          thicknessVal = new XmlPositiveInteger(decl->val.c_str());
          if (thicknessVal->bad)
            {
              delete thicknessVal;
              fprintf(stderr, "bad value %s for thickness in LineStyleType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->thickness = thicknessVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LineStyleType\n");
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
      delete this->thickness;
      this->thickness = 0;
    }
  return returnValue;
}

XmlPositiveInteger * LineStyleType::getthickness()
{return thickness;}

void LineStyleType::setthickness(XmlPositiveInteger * thicknessIn)
{thickness = thicknessIn;}

/* ***************************************************************** */

/* class NodeBaseType

*/

NodeBaseType::NodeBaseType()
{
  label = 0;
}

NodeBaseType::NodeBaseType(
 XmlString * labelIn)
{
  label = labelIn;
}

NodeBaseType::~NodeBaseType()
{
  delete label;
}

void NodeBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
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
  fprintf(outFile, "/>\n");
}

bool NodeBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "label")
        {
          XmlString * labelVal;
          if (this->label)
            {
              fprintf(stderr, "two values for label in NodeBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in NodeBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NodeBaseType\n");
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
      delete this->label;
      this->label = 0;
    }
  return returnValue;
}

XmlString * NodeBaseType::getlabel()
{return label;}

void NodeBaseType::setlabel(XmlString * labelIn)
{label = labelIn;}

/* ***************************************************************** */

/* class NodeWithIdBaseType

*/

NodeWithIdBaseType::NodeWithIdBaseType() :
  NodeBaseType()
{
  id = 0;
  Attributes = 0;
}

NodeWithIdBaseType::NodeWithIdBaseType(
 AttributesType * AttributesIn) :
  NodeBaseType()
{
  id = 0;
  Attributes = AttributesIn;
}

NodeWithIdBaseType::NodeWithIdBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn) :
  NodeBaseType(
    labelIn)
{
  id = idIn;
  Attributes = AttributesIn;
}

NodeWithIdBaseType::~NodeWithIdBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  #endif
}

void NodeWithIdBaseType::printSelf(FILE * outFile)
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

bool NodeWithIdBaseType::badAttributes(
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
              fprintf(stderr, "two values for id in NodeWithIdBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in NodeWithIdBaseType\n",
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
              fprintf(stderr, "two values for label in NodeWithIdBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in NodeWithIdBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->label = labelVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NodeWithIdBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in NodeWithIdBaseType\n");
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
      delete this->label;
      this->label = 0;
    }
  return returnValue;
}

QIFIdType * NodeWithIdBaseType::getid()
{return id;}

void NodeWithIdBaseType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * NodeWithIdBaseType::getAttributes()
{return Attributes;}

void NodeWithIdBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class QuaternionType

*/

QuaternionType::QuaternionType()
{
  Value = 0;
}

QuaternionType::QuaternionType(
 D4Type * ValueIn)
{
  Value = ValueIn;
}

QuaternionType::~QuaternionType()
{
  #ifndef NODESTRUCT
  delete Value;
  #endif
}

void QuaternionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  doSpaces(-INDENT, outFile);
}

D4Type * QuaternionType::getValue()
{return Value;}

void QuaternionType::setValue(D4Type * ValueIn)
{Value = ValueIn;}

/* ***************************************************************** */

/* class TransparencyType

*/

TransparencyType::TransparencyType() :
  XmlDouble()
{
}

TransparencyType::TransparencyType(
 const char * valIn) :
  XmlDouble(
    valIn)
{
  if (!bad)
    bad = ((val < 0) ||
          (val >= 1));
}

TransparencyType::~TransparencyType() {}

bool TransparencyType::TransparencyTypeIsBad()
{
  if (XmlDoubleIsBad())
    return true;
  return ((val < 0) ||
          (val >= 1));
}

void TransparencyType::printName(FILE * outFile)
{
  fprintf(outFile, "TransparencyType");
}

void TransparencyType::printSelf(FILE * outFile)
{
  if (TransparencyTypeIsBad())
    {
      fprintf(stderr, "bad TransparencyType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::printSelf(outFile);
}

void TransparencyType::oPrintSelf(FILE * outFile)
{
  if (TransparencyTypeIsBad())
    {
      fprintf(stderr, "bad TransparencyType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::oPrintSelf(outFile);
}

/* ***************************************************************** */

