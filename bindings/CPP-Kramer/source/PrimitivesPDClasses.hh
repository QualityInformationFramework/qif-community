/* ***************************************************************** */

#ifndef PRIMITIVESPD_HH
#define PRIMITIVESPD_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesClasses.hh"

/* ***************************************************************** */

class ApplicationType;
class AuthorType;
class ColorType;
class DrawableBaseType;
class EdgeOrientedType;
class EdgeOrientedTypeLisd;
class LineStyleEnumType;
class LineStyleType;
class NodeBaseType;
class NodeWithIdBaseType;
class QuaternionType;
class TransparencyType;

/* ***************************************************************** */
/* ***************************************************************** */

class ApplicationType :
  public XmlTypeBase
{
public:
  ApplicationType();
  ApplicationType(
    XmlString * NameIn,
    XmlString * OrganizationIn,
    XmlString * AddonNameIn,
    XmlString * AddonOrganizationIn);
  ~ApplicationType();
  void printSelf(FILE * outFile);

  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getOrganization();
  void setOrganization(XmlString * OrganizationIn);
  XmlString * getAddonName();
  void setAddonName(XmlString * AddonNameIn);
  XmlString * getAddonOrganization();
  void setAddonOrganization(XmlString * AddonOrganizationIn);

protected:
  XmlString * Name;
  XmlString * Organization;
  XmlString * AddonName;
  XmlString * AddonOrganization;
};

/* ***************************************************************** */

class AuthorType :
  public XmlTypeBase
{
public:
  AuthorType();
  AuthorType(
    XmlString * NameIn,
    XmlString * OrganizationIn);
  ~AuthorType();
  void printSelf(FILE * outFile);

  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getOrganization();
  void setOrganization(XmlString * OrganizationIn);

protected:
  XmlString * Name;
  XmlString * Organization;
};

/* ***************************************************************** */

class ColorType :
  public ListIntType
{
public:
  ColorType();
  ColorType(
    XmlInteger * aXmlInteger);
  ColorType(
    const char * valueString);
  ~ColorType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool ColorTypeCheck();
};

/* ***************************************************************** */

class EdgeOrientedType :
  public ElementReferenceType
{
public:
  EdgeOrientedType();
  EdgeOrientedType(
    QIFReferenceType * IdIn);
  EdgeOrientedType(
    QIFReferenceType * IdIn,
    XmlBoolean * turnedIn);
  ~EdgeOrientedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

protected:
  XmlBoolean * turned;
};

/* ***************************************************************** */

class EdgeOrientedTypeLisd :
  public std::list<EdgeOrientedType *>,
  public XmlSchemaInstanceBase
{
public:
  EdgeOrientedTypeLisd();
  EdgeOrientedTypeLisd(
    EdgeOrientedType * aEdgeOrientedType);
  ~EdgeOrientedTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LineStyleEnumType :
  public XmlString
{
public:
  LineStyleEnumType();
  LineStyleEnumType(
    const char * valIn);
  ~LineStyleEnumType();
  bool LineStyleEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LineStyleType :
  public LineStyleEnumType
{
public:
  LineStyleType();
  LineStyleType(
    const char * valStringIn);
  LineStyleType(
    XmlPositiveInteger * thicknessIn,
    const char * valStringIn);
  ~LineStyleType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool LineStyleTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getthickness();
  void setthickness(XmlPositiveInteger * thicknessIn);

protected:
  XmlPositiveInteger * thickness;
};

/* ***************************************************************** */

class NodeBaseType :
  public XmlTypeBase
{
public:
  NodeBaseType();
  NodeBaseType(
    XmlString * labelIn);
  ~NodeBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getlabel();
  void setlabel(XmlString * labelIn);

protected:
  XmlString * label;
};

/* ***************************************************************** */

class NodeWithIdBaseType :
  public NodeBaseType
{
public:
  NodeWithIdBaseType();
  NodeWithIdBaseType(
    AttributesType * AttributesIn);
  NodeWithIdBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~NodeWithIdBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class QuaternionType :
  public XmlTypeBase
{
public:
  QuaternionType();
  QuaternionType(
    D4Type * ValueIn);
  ~QuaternionType();
  void printSelf(FILE * outFile);

  D4Type * getValue();
  void setValue(D4Type * ValueIn);

protected:
  D4Type * Value;
};

/* ***************************************************************** */

class TransparencyType :
  public XmlDouble
{
public:
  TransparencyType();
  TransparencyType(
    const char * valIn);
  ~TransparencyType();
  bool TransparencyTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DrawableBaseType :
  public NodeWithIdBaseType
{
public:
  DrawableBaseType();
  DrawableBaseType(
    AttributesType * AttributesIn);
  DrawableBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn);
  ~DrawableBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ColorType * getcolor();
  void setcolor(ColorType * colorIn);
  XmlBoolean * gethidden();
  void sethidden(XmlBoolean * hiddenIn);
  DoublePositiveType * getsize();
  void setsize(DoublePositiveType * sizeIn);
  TransparencyType * gettransparency();
  void settransparency(TransparencyType * transparencyIn);

protected:
  ColorType * color;
  XmlBoolean * hidden;
  DoublePositiveType * size;
  TransparencyType * transparency;
};

/* ***************************************************************** */

#endif // PRIMITIVESPD_HH
