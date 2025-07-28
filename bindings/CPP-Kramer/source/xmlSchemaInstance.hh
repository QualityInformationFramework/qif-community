/*
Copyright: Thomas R. Kramer 2020Feb12
License: Boost Software License - Version 1.0 - August 17th, 2003
*/
/*********************************************************************/

/*

This models the XML built-in types, lists of the XML built-in types,
and a couple other items. The name for a C++ type corresponding to an
XML built-in type is the name for the XML type with the first letter
changed to upper case if it was lower case, and an "Xml" prefix added;
for example XML "integer" becomes C++ "XmlInteger". For each built-in
type there is a corresponding list type whose name is formed by adding
a "Lisd" suffix; for example, "XmlIntegerLisd". The adjusted spelling
"Lisd" is to avoid naming conflicts, which were observed to occur with
normal spelling.

The OPRINTSELF and OPRINTSELFDECL are for functions that print:
 - built-in XML types (such as xs:integer)
 - restrictions of built-in types
 - simple lists of built-in types.

What the OPRINTSELF functions print differs from what the PRINTSELF
functions print only in that the PRINTSELF version prints a '>' before
the value but the OPRINTSELF version does not. This is needed because
built-in types and their restrictions and simple lists can be either
xs:element values (which need the '>') or xs:attribute values (which
do not need the '>').

For string-like types such as string and base64Binary, the OPRINTSELF
function is not likely to be called because a simple list of the type
is not usable.

The STRINGOUT versions of the macros are for printing to a string.
The non-STRINGOUT versions are for printing to a file. When printing
to a file, the SPACE... macros insert white space to pretty print
the file. When printing to a string, no extra white space is desirable,
so the SPACE... macros do nothing.

The "remain" argument in the STRINGOUT macros keeps track of the remaining
space in the string so that printing will not go beyond the end of the
string.

The printTypp and printElement fields of XmlBasicLisdBase and
XmlTypeBase are used for processing. The printTypp field is included
only if USEXSITYPE is defined when this is compiled and is used in
connection with derived types that are used via xsi:type. The
printElement field is used in connection with substitution groups.

The XmlAnyString class is derived from the XmlString class and represents
the XML text of an XmlAny. It is not a basic data type.

All fields of all classes are public unless ACCESSGETSET or
ACCESSOVERLOAD is defined when the code is compiled (i.e., if
-DACCESSGETSET or -DACCESSOVERLOAD is used). If ACCESSGETSET or
ACCESSOVERLOAD is defined, all data fields of most types are
protected, and access functions are provided to get and set the
fields.

All destructors are marked virtual because there may be derived types
used via xsi:type with an element that nominally has a basic type. If the
destructor of the basic type is not virtual in that case, only the destructor
of the basic type will be called, so the derived type might not be fully
destructed.

*/

/*********************************************************************/

#ifndef XMLSCHEMAINSTANCE_HH
#define XMLSCHEMAINSTANCE_HH

#include <stdio.h>
#include <stdarg.h>
#include <set>
#include <list>
#include <string>

#ifdef STRINGOUT
#define OPRINTSELFDECL oPrintSelf(char * outStr, size_t * remain, size_t * N)
#define OPRINTSELF oPrintSelf(outStr, remain, N)
#define PRINTNAMEDECL printName(char * outStr, size_t * remain, size_t * N)
#define PRINTNAME printName(outStr, remain, N)
#define PRINTSELFDECL printSelf(char * outStr, size_t * remain, size_t * N)
#define PRINTSELF printSelf(outStr, remain, N)
#define SPACESZERO
#define SPACESPLUS 
#define SPACESMINUS 
#define XFPRINTF xprintf(outStr, remain, N,

#else
#define OPRINTSELFDECL oPrintSelf(FILE * outFile)
#define OPRINTSELF oPrintSelf(outFile)
#define PRINTNAMEDECL printName(FILE * outFile)
#define PRINTNAME printName(outFile)
#define PRINTSELFDECL printSelf(FILE * outFile)
#define PRINTSELF printSelf(outFile)
#define SPACESZERO doSpaces(0, outFile)
#define SPACESPLUS doSpaces(+INDENT, outFile)
#define SPACESMINUS doSpaces(-INDENT, outFile)
#define XFPRINTF fprintf(outFile,
#endif

#ifdef ACCESSGETSET
#define PROT(x) x
#define GET(x) get ## x
#define SET(x) set ## x
#elif defined(ACCESSOVERLOAD)
#define PROT(x) PROTECT_ ## x
#define GET(x) x
#define SET(x) x
#else
#define PROT(x) x
#endif

#define NAMESIZE 200

//void xprintf(char * outString, int * N, const char * format, ...);
void xprintf(char * outString, size_t * remain, size_t * N, 
	     const char * format, ...);

/*********************************************************************/
/* Missing Primitive Types
byte
duration
gDay
gMonth
gMonthDay
gYear
gYearMonth
language
Name
normalizedString
*/

class AttributePair;
class AttributePairLisd;
class SchemaInstanceError;
class SchemaLocation;
class XmlAnyString;
class XmlAnyURI;
class XmlBase64Binary;
class XmlBase64BinaryLisd;
class XmlBasicLisdBase;
class XmlBoolean;
class XmlBooleanLisd;
class XmlDate;
class XmlDateLisd;
class XmlDateTime;
class XmlDateTimeLisd;
class XmlDecimal;
class XmlDecimalLisd;
class XmlDouble;
class XmlDoubleLisd;
class XmlFloat;
class XmlFloatLisd;
class XmlID;
class XmlIDLisd;
class XmlIDREF;
class XmlIDREFLisd;
class XmlInt;
class XmlIntLisd;
class XmlInteger;
class XmlIntegerLisd;
class XmlLong;
class XmlLongLisd;
class XmlNCName;
class XmlNCNameLisd;
class XmlNegativeInteger;
class XmlNegativeIntegerLisd;
class XmlNMTOKEN;
class XmlNMTOKENLisd;
class XmlNonNegativeInteger;
class XmlNonNegativeIntegerLisd;
class XmlNonPositiveInteger;
class XmlNonPositiveIntegerLisd;
class XmlPositiveInteger;
class XmlPositiveIntegerLisd;
class XmlSchemaInstanceBase;
class XmlShort;
class XmlShortLisd;
class XmlString;
class XmlStringLisd;
class XmlTime;
class XmlTimeLisd;
class XmlToken;
class XmlTokenLisd;
class XmlTypeBase;
class XmlUnsignedByte;
class XmlUnsignedByteLisd;
class XmlUnsignedInt;
class XmlUnsignedIntLisd;
class XmlUnsignedLong;
class XmlUnsignedLongLisd;
class XmlUnsignedShort;
class XmlUnsignedShortLisd;
class XmlVersion;

/*********************************************************************/

class XmlSchemaInstanceBase
{
public:
  XmlSchemaInstanceBase();
  virtual ~XmlSchemaInstanceBase();
  virtual void PRINTSELFDECL = 0;
  static void doSpaces(int change, FILE * outFile);

  static int places;
  static int format;
};

/*********************************************************************/

class SchemaInstanceError
{
public:
  SchemaInstanceError(const char * mess)
  {errorMessage = mess;}
  std::string errorMessage;
};

/*********************************************************************/

class XmlBasicLisdBase :
  public XmlSchemaInstanceBase
{
public:
  XmlBasicLisdBase();
  virtual ~XmlBasicLisdBase();
  virtual void PRINTNAMEDECL = 0;
  virtual void PRINTSELFDECL = 0;
  virtual void OPRINTSELFDECL = 0;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  const char * GET(printElement)();
  void SET(printElement)(const char * printElementIn);
  bool GET(bad)();
  void SET(bad)(bool badIn);
#ifdef USEXSITYPE 
  const char * GET(printTypp)();
  void SET(printTypp)(const char * printTyppIn);
#endif
protected:
#endif
  const char * PROT(printElement);
  bool PROT(bad);
#ifdef USEXSITYPE 
  const char * PROT(printTypp);
#endif
};

/*********************************************************************/

class XmlTypeBase :
  public XmlSchemaInstanceBase
{
public:
  XmlTypeBase();
  virtual ~XmlTypeBase();

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  char * GET(printElement)();
  void SET(printElement)(const char * printElementIn);
#ifdef USEXSITYPE 
  char * GET(printTypp)();
  void SET(printTypp)(const char * printTyppIn);
#endif
protected:
#endif
  char * PROT(printElement);
#ifdef USEXSITYPE
  char * PROT(printTypp);
#endif
};

/*********************************************************************/

class XmlOPrintTypeBase :
  public XmlTypeBase
{
public:
  XmlOPrintTypeBase();
  virtual ~XmlOPrintTypeBase();
  virtual void OPRINTSELFDECL = 0;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  bool GET(bad)();
  void SET(bad)(bool badIn);
protected:
#endif
  bool PROT(bad);
};

/*********************************************************************/

class AttributePair :
  public XmlSchemaInstanceBase
{
public:
  AttributePair();
  AttributePair(
    const char * nameIn,
    const char * valIn);
  ~AttributePair();
  void PRINTSELFDECL;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(name)();
  void SET(name)(std::string nameIn);
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(name);
  std::string PROT(val);
};

/*********************************************************************/

class AttributePairLisd :
  public std::list<AttributePair *>,
  public XmlSchemaInstanceBase
{
public:
  AttributePairLisd();
  AttributePairLisd(
    AttributePair * pairIn);
  ~AttributePairLisd();
  void PRINTSELFDECL;
};

/*********************************************************************/

class SchemaLocation :
  public XmlSchemaInstanceBase
{
public:
  SchemaLocation();
  SchemaLocation(
    const char * prefixIn,
    const char * locationIn,
    bool hasNamespaceIn);
  ~SchemaLocation();
  void PRINTSELFDECL;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(prefix)();
  void SET(prefix)(std::string prefixIn);
  std::string GET(location)();
  void SET(location)(std::string locationIn);
  bool GET(hasNamespace)();
  void SET(hasNamespace)(bool hasNamespaceIn);
protected:
#endif
  std::string PROT(prefix);
  std::string PROT(location);
  bool PROT(hasNamespace);
};

/*********************************************************************/
/***************************** BEGIN BASIC TYPES *********************/
/*********************************************************************/

/* class XmlAnyURI

This is a class for handling XML basic type anyURI. It is being
treated the same as the XML basic type string. There is not list type.

*/

class XmlAnyURI :
  public XmlSchemaInstanceBase
{
public:
  XmlAnyURI();
  XmlAnyURI(
    const char * valIn);
  XmlAnyURI(
    const XmlAnyURI * URIIn);
  ~XmlAnyURI();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  bool XmlAnyURIIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
  bool GET(bad)();
  void SET(bad)(bool badIn);
protected:
#endif
  std::string PROT(val);
  bool PROT(bad);
};

/*********************************************************************/

/* class XmlBase64Binary

This is a class for handling XML basic type base64Binary.

*/

class XmlBase64Binary :
  public XmlOPrintTypeBase
{
public:
  XmlBase64Binary();
  XmlBase64Binary(
    const char * valIn);
  XmlBase64Binary(
    const XmlBase64Binary * binIn);
  ~XmlBase64Binary();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlBase64BinaryIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

/* class XmlBase64BinaryLisd

*/

class XmlBase64BinaryLisd :
  public std::list<XmlBase64Binary *>,
  public XmlBasicLisdBase
{
public:
  XmlBase64BinaryLisd();
  XmlBase64BinaryLisd(
    XmlBase64Binary * base64BinaryIn);
  XmlBase64BinaryLisd(
    const XmlBase64BinaryLisd * base64BinaryLisdIn);
  ~XmlBase64BinaryLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlBoolean

This is a class for handling XML basic type boolean.

*/

class XmlBoolean :
  public XmlOPrintTypeBase
{
public:
  XmlBoolean();
  XmlBoolean(
    const char * valIn);
  XmlBoolean(
    const XmlBoolean * XmlBooleanIn);
  ~XmlBoolean();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  bool XmlBooleanIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  bool GET(val)();
  void SET(val)(bool valIn);
protected:
#endif
  bool PROT(val);
};

/*********************************************************************/

class XmlBooleanLisd :
  public std::list<XmlBoolean *>,
  public XmlBasicLisdBase
{
public:
  XmlBooleanLisd();
  XmlBooleanLisd(
    XmlBoolean * booleanIn);
  XmlBooleanLisd(
    const XmlBooleanLisd * booleanLisdIn);
  XmlBooleanLisd(
    const char * valueString);
  ~XmlBooleanLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlDate

This is a class for handling XML basic type date.

*/

class XmlDate :
  public XmlOPrintTypeBase
{
public:
  XmlDate();
  XmlDate(
    const char * valIn);
  XmlDate(
    const XmlDate * dateIn);
  ~XmlDate();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDateIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlDateLisd :
  public std::list<XmlDate *>,
  public XmlBasicLisdBase
{
public:
  XmlDateLisd();
  XmlDateLisd(
    XmlDate * dateIn);
  XmlDateLisd(
    const XmlDateLisd * dateLisdIn);
  XmlDateLisd(
    const char * valueString);
  ~XmlDateLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlDateTime

This is a class for handling XML basic type dateTime.

*/

class XmlDateTime :
  public XmlOPrintTypeBase
{
public:
  XmlDateTime();
  XmlDateTime(
    const char * valIn);
  XmlDateTime(
    const XmlDateTime * dateTimeIn);
  ~XmlDateTime();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDateTimeIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlDateTimeLisd :
  public std::list<XmlDateTime *>,
  public XmlBasicLisdBase
{
public:
  XmlDateTimeLisd();
  XmlDateTimeLisd(
    XmlDateTime * dateTimeIn);
  XmlDateTimeLisd(
    const XmlDateTimeLisd * dateTimeLisdIn);
  XmlDateTimeLisd(
    const char * valueString);
  ~XmlDateTimeLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlDecimal
 
This is a class for handling XML basic type decimal.

places is the number of decimal places to use when printing the number

*/

class XmlDecimal :
  public XmlOPrintTypeBase
{
public:
  XmlDecimal();
  XmlDecimal(
    const char * valStringIn);
  XmlDecimal(
    const double valIn);
  XmlDecimal(
    const XmlDecimal* decimalIn);
  ~XmlDecimal();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDecimalIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  double GET(val)();
  void SET(val)(double valIn);
  short int GET(places)();
  void SET(places)(short int placesIn);
protected:
#endif
  double PROT(val);
  short int PROT(places);
};

/*********************************************************************/

class XmlDecimalLisd :
  public std::list<XmlDecimal *>,
  public XmlBasicLisdBase
{
public:
  XmlDecimalLisd();
  XmlDecimalLisd(
    XmlDecimal * decimalIn);
  XmlDecimalLisd(
    const XmlDecimalLisd * decimalLisdIn);
  XmlDecimalLisd(
    const char * valueString);
  ~XmlDecimalLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlDouble

This is a class for handling XML basic type double.

places is the number of decimal places to use when printing the number

format is the format to use when printing the number and will be f, e, or E.

*/

class XmlDouble :
  public XmlOPrintTypeBase
{
public:
  XmlDouble();
  XmlDouble(
    const char * valueString);
  XmlDouble(
    const double valIn);
  XmlDouble(
    const XmlDouble * doubleIn);
  ~XmlDouble();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDoubleIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  double GET(val)();
  void SET(val)(double valIn);
  short int GET(places)();
  void SET(places)(short int placesIn);
  char GET(format)();
  void SET(format)(char formatIn);
protected:
#endif
  double PROT(val);
  short int PROT(places);
  char PROT(format);
};

/*********************************************************************/

class XmlDoubleLisd :
  public std::list<XmlDouble *>,
  public XmlBasicLisdBase
{
public:
  XmlDoubleLisd();
  XmlDoubleLisd(
    XmlDouble * doubleIn);
  XmlDoubleLisd(
    const XmlDoubleLisd * doubleLisdIn);
  XmlDoubleLisd(
    const char * valueString);
  ~XmlDoubleLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  bool XmlDoubleLisdIsBad();
};

/*********************************************************************/

/* class XmlFloat

This is a class for handling XML basic type float.

places is the number of decimal places to use when printing the number

format is the format to use when printing the number and will be f, e, or E.

*/

class XmlFloat :
  public XmlOPrintTypeBase
{
public:
  XmlFloat();
  XmlFloat(
    const char * valIn);
  XmlFloat(
    const float valIn);
  XmlFloat(
    const XmlFloat * floatIn);
  ~XmlFloat();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlFloatIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  float GET(val)();
  void SET(val)(float valIn);
  short int GET(places)();
  void SET(places)(short int placesIn);
  char GET(format)();
  void SET(format)(char formatIn);
protected:
#endif
  float PROT(val);
  short int PROT(places);
  char PROT(format);
};

/*********************************************************************/

class XmlFloatLisd :
  public std::list<XmlFloat *>,
  public XmlBasicLisdBase
{
public:
  XmlFloatLisd();
  XmlFloatLisd(
    XmlFloat * floatIn);
  XmlFloatLisd(
    const XmlFloatLisd * floatLisdIn);
  XmlFloatLisd(
    const char * valueString);
  ~XmlFloatLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlID

This is a class for handling XML IDs. See documentation in
xmlSchemaInstance.cc. This uses std::string to take advantage of the
built-in find and insert functions for a set of std::string. There are
no analogous built-in functions for a set of char*.

*/

class XmlID :
  public XmlOPrintTypeBase
{
public:
  XmlID();
  XmlID(
    const char * valIn);
  XmlID(
    const XmlID * IDIn);
  ~XmlID();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIDIsBad();
 
  static std::set<std::string> allIDs;
  static int lastAuto;
  static const int idSize;
  static char buffer[];
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlIDLisd :
  public std::list<XmlID *>,
  public XmlBasicLisdBase
{
public:
  XmlIDLisd();
  XmlIDLisd(
    XmlID * idIn);
  XmlIDLisd(
    const XmlIDLisd * idLisdIn);
  XmlIDLisd(
    const char * valueString);
  ~XmlIDLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlIDREF

This is a class for handling XML IDREFs. See documentation in
xmlSchemaInstance.cc. This uses std::string to take advantage of the
built-in find and insert functions for a set of std::string. There are
no analogous built-in functions for a set of char*.

*/

class XmlIDREF :
  public XmlOPrintTypeBase
{
public:
  XmlIDREF();
  XmlIDREF(
    const char * valIn);
  XmlIDREF(
    const XmlIDREF * IDREFIn);
  ~XmlIDREF();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIDREFIsBad();

  static bool idMissing();
  static std::set<std::string> allIDREFs;
  static const int idrefSize;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlIDREFLisd :
  public std::list<XmlIDREF *>,
  public XmlBasicLisdBase
{
public:
  XmlIDREFLisd();
  XmlIDREFLisd(
    XmlIDREF * idrefIn);
  XmlIDREFLisd(
    const XmlIDREFLisd * idrefLisdIn);
  XmlIDREFLisd(
    const char * valueString);
  ~XmlIDREFLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlInt

This is a class for handling XML basic type int.

*/

class XmlInt :
  public XmlOPrintTypeBase
{
public:
  XmlInt();
  XmlInt(
    const char * valIn);
  XmlInt(
    const XmlInt * intIn);
  ~XmlInt();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIntIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlIntLisd :
  public std::list<XmlInt *>,
  public XmlBasicLisdBase
{
public:
  XmlIntLisd();
  XmlIntLisd(
    XmlInt * intIn);
  XmlIntLisd(
    const XmlIntLisd * intLisdIn);
  XmlIntLisd(
    const char * valueString);
  ~XmlIntLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlInteger

This is a class for handling XML basic type integer.
Currently, this cannot handle an arbitrarily large number (a
capability an XML integer is supposed to have).
Might change the type of val to long.

*/

class XmlInteger :
  public XmlOPrintTypeBase
{
public:
  XmlInteger();
  XmlInteger(
    const char * valIn);
  XmlInteger(
    const XmlInteger * integerIn);
  ~XmlInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIntegerIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlIntegerLisd :
  public std::list<XmlInteger *>,
  public XmlBasicLisdBase
{
public:
  XmlIntegerLisd();
  XmlIntegerLisd(
    XmlInteger * integerIn);
  XmlIntegerLisd(
    const XmlIntegerLisd * integerLisdIn);
  XmlIntegerLisd(
    const char * valueString);
  ~XmlIntegerLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlLong

This is a class for handling XML basic type long.

*/

class XmlLong :
  public XmlOPrintTypeBase
{
public:
  XmlLong();
  XmlLong(
    const char * valIn);
  XmlLong(
    const XmlLong * longIn);
  ~XmlLong();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlLongIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  long GET(val)();
  void SET(val)(long longIn);
protected:
#endif
  long PROT(val);
};

/*********************************************************************/

class XmlLongLisd :
  public std::list<XmlLong *>,
  public XmlBasicLisdBase
{
public:
  XmlLongLisd();
  XmlLongLisd(
    XmlLong * longIn);
  XmlLongLisd(
    const XmlLongLisd * longLisdIn);
  XmlLongLisd(
    const char * valueString);
  ~XmlLongLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlNCName

This is a class for handling XML basic type NCName.

*/

class XmlNCName :
  public XmlOPrintTypeBase
{
public:
  XmlNCName();
  XmlNCName(
    const char * valIn);
  XmlNCName(
    const XmlNCName * nameIn);
  ~XmlNCName();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNCNameIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlNCNameLisd :
  public std::list<XmlNCName *>,
  public XmlBasicLisdBase
{
public:
  XmlNCNameLisd();
  XmlNCNameLisd(
    XmlNCName * ncNameIn);
  XmlNCNameLisd(
    const XmlNCNameLisd * ncNameLisdIn);
  XmlNCNameLisd(
    const char * valueString);
  ~XmlNCNameLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlNegativeInteger

This is a class for handling XML basic type negativeInteger.
Currently, this cannot handle an arbitrarily large number (a
capability an XML integer is supposed to have).
Might change the type of val to long.

*/

class XmlNegativeInteger :
  public XmlOPrintTypeBase
{
public:
  XmlNegativeInteger();
  XmlNegativeInteger(
    const char * valIn);
  XmlNegativeInteger(
    const XmlNegativeInteger * negIntIn);
  ~XmlNegativeInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNegativeIntegerIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlNegativeIntegerLisd :
  public std::list<XmlNegativeInteger *>,
  public XmlBasicLisdBase
{
public:
  XmlNegativeIntegerLisd();
  XmlNegativeIntegerLisd(
    XmlNegativeInteger * negativeIntegerIn);
  XmlNegativeIntegerLisd(
    const XmlNegativeIntegerLisd * negIntLisdIn);
  XmlNegativeIntegerLisd(
    const char * valueString);
  ~XmlNegativeIntegerLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlNMTOKEN

This is a class for handling XML basic type NMTOKEN.

*/

class XmlNMTOKEN :
  public XmlOPrintTypeBase
{
public:
  XmlNMTOKEN();
  XmlNMTOKEN(
    const char * valIn);
  XmlNMTOKEN(
    const XmlNMTOKEN * nmTokenIn);
  ~XmlNMTOKEN();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNMTOKENIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlNMTOKENLisd :
  public std::list<XmlNMTOKEN *>,
  public XmlBasicLisdBase
{
public:
  XmlNMTOKENLisd();
  XmlNMTOKENLisd(
    XmlNMTOKEN * nmtokenIn);
  XmlNMTOKENLisd(
    const XmlNMTOKENLisd * nmtokenLisdIn);
  XmlNMTOKENLisd(
    const char * valueString);
  ~XmlNMTOKENLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlNonNegativeInteger

This is a class for handling XML basic type nonNegativeInteger.
Currently, this cannot handle an arbitrarily large number (a
capability an XML integer is supposed to have).
Might change the type of val to long.

*/

class XmlNonNegativeInteger :
  public XmlOPrintTypeBase
{
public:
  XmlNonNegativeInteger();
  XmlNonNegativeInteger(
    const char * valIn);
  XmlNonNegativeInteger(
    const XmlNonNegativeInteger * nonNegIn);
  ~XmlNonNegativeInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNonNegativeIntegerIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlNonNegativeIntegerLisd :
  public std::list<XmlNonNegativeInteger *>,
  public XmlBasicLisdBase
{
public:
  XmlNonNegativeIntegerLisd();
  XmlNonNegativeIntegerLisd(
    XmlNonNegativeInteger * nonNegativeIntegerIn);
  XmlNonNegativeIntegerLisd(
    const XmlNonNegativeIntegerLisd * nonNegIntLisdIn);
  XmlNonNegativeIntegerLisd(
    const char * valueString);
  ~XmlNonNegativeIntegerLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlNonPositiveInteger

This is a class for handling XML basic type nonPositiveInteger.
Currently, this cannot handle an arbitrarily large number (a
capability an XML integer is supposed to have).
Might change the type of val to long.

*/

class XmlNonPositiveInteger :
  public XmlOPrintTypeBase
{
public:
  XmlNonPositiveInteger();
  XmlNonPositiveInteger(
    const char * valIn);
  XmlNonPositiveInteger(
    const XmlNonPositiveInteger * nonPosIntIn);
  ~XmlNonPositiveInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNonPositiveIntegerIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlNonPositiveIntegerLisd :
  public std::list<XmlNonPositiveInteger *>,
  public XmlBasicLisdBase
{
public:
  XmlNonPositiveIntegerLisd();
  XmlNonPositiveIntegerLisd(
    XmlNonPositiveInteger * nonPositiveIntegerIn);
  XmlNonPositiveIntegerLisd(
    const XmlNonPositiveIntegerLisd * nonPosIntLisdIn);
  XmlNonPositiveIntegerLisd(
    const char * valueString);
  ~XmlNonPositiveIntegerLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlPositiveInteger

This is a class for handling XML basic type positiveInteger.
Currently, this cannot handle an arbitrarily large number (a
capability an XML integer is supposed to have).
Might change the type of val to long.

*/

class XmlPositiveInteger :
  public XmlOPrintTypeBase
{
public:
  XmlPositiveInteger();
  XmlPositiveInteger(
    const char * valIn);
  XmlPositiveInteger(
    const XmlPositiveInteger * xmlPosIntIn);
  ~XmlPositiveInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlPositiveIntegerIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int GET(val)();
  void SET(val)(int valIn);
protected:
#endif
  int PROT(val);
};

/*********************************************************************/

class XmlPositiveIntegerLisd :
  public std::list<XmlPositiveInteger *>,
  public XmlBasicLisdBase
{
public:
  XmlPositiveIntegerLisd();
  XmlPositiveIntegerLisd(
    XmlPositiveInteger * positiveIntegerIn);
  XmlPositiveIntegerLisd(
    const XmlPositiveIntegerLisd * positiveIntegerLisdIn);
  XmlPositiveIntegerLisd(
    const char * valueString);
  ~XmlPositiveIntegerLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlShort

This is a class for handling XML basic type short.

*/

class XmlShort :
  public XmlOPrintTypeBase
{
public:
  XmlShort();
  XmlShort(
    const char * valIn);
  XmlShort(
    const XmlShort * shortIn);
  ~XmlShort();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlShortIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  short GET(val)();
  void SET(val)(short valIn);
protected:
#endif
  short PROT(val);
};

/*********************************************************************/

class XmlShortLisd :
  public std::list<XmlShort *>,
  public XmlBasicLisdBase
{
public:
  XmlShortLisd();
  XmlShortLisd(
    XmlShort * shortIn);
  XmlShortLisd(
    const XmlShortLisd * shortLisdIn);
  XmlShortLisd(
    const char * valueString);
  ~XmlShortLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlString

This is a class for handling XML basic type string.

*/

class XmlString :
  public XmlOPrintTypeBase
{
public:
  XmlString();
  XmlString(
    const char * valIn);
  XmlString(
    const XmlString * stringIn);
  ~XmlString();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlStringIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

/* class XmlStringLisd

It is not a good idea to use this since whitespace is allowed inside
an instance of string.

*/

class XmlStringLisd :
  public std::list<XmlString *>,
  public XmlBasicLisdBase
{
public:
  XmlStringLisd();
  XmlStringLisd(
    XmlString * stringIn);
  XmlStringLisd(
    const XmlStringLisd * stringLisdIn);
  ~XmlStringLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlTime

This is a class for handling XML basic type time.

*/

class XmlTime :
  public XmlOPrintTypeBase
{
public:
  XmlTime();
  XmlTime(
    const char * valIn);
  XmlTime(
    const XmlTime * timeIn);
  ~XmlTime();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlTimeIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlTimeLisd :
  public std::list<XmlTime *>,
  public XmlBasicLisdBase
{
public:
  XmlTimeLisd();
  XmlTimeLisd(
    XmlTime * TimeIn);
  XmlTimeLisd(
    const XmlTimeLisd * timeLisdIn);
  XmlTimeLisd(
    const char * valueString);
  ~XmlTimeLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlToken

This is a class for handling XML basic type token.
A token is a string with no white space at the front or back, and
all white space substrings inside reduced to a single space.
White space is 9, 10, 13 and 32 (tab, linefeed, carriage return, space).

*/

class XmlToken :
  public XmlOPrintTypeBase
{
public:
  XmlToken();
  XmlToken(
    const char * valIn);
  XmlToken(
    const XmlToken * tokenIn);
  ~XmlToken();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlTokenIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

class XmlTokenLisd :
  public std::list<XmlToken *>,
  public XmlBasicLisdBase
{
public:
  XmlTokenLisd();
  XmlTokenLisd(
    XmlToken * tokenIn);
  XmlTokenLisd(
    const XmlTokenLisd * tokenLisdIn);
  XmlTokenLisd(
    const char * valueString);
  ~XmlTokenLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlUnsignedByte

This is a class for handling XML basic type unsignedByte.

*/

class XmlUnsignedByte :
  public XmlOPrintTypeBase
{
public:
  XmlUnsignedByte();
  XmlUnsignedByte(
    const char * valIn);
  XmlUnsignedByte(
    const XmlUnsignedByte * unsignedByteIn);
  ~XmlUnsignedByte();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedByteIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned char GET(val)();
  void SET(val)(unsigned char valIn);
protected:
#endif
  unsigned char PROT(val);
};

/*********************************************************************/

class XmlUnsignedByteLisd :
  public std::list<XmlUnsignedByte *>,
  public XmlBasicLisdBase
{
public:
  XmlUnsignedByteLisd();
  XmlUnsignedByteLisd(
    XmlUnsignedByte * unsignedByteIn);
  XmlUnsignedByteLisd(
    const XmlUnsignedByteLisd * unsignedByteLisdIn);
  XmlUnsignedByteLisd(
    const char * valueString);
  ~XmlUnsignedByteLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlUnsignedInt

This is a class for handling XML basic type unsignedInt.

*/

class XmlUnsignedInt :
  public XmlOPrintTypeBase
{
public:
  XmlUnsignedInt();
  XmlUnsignedInt(
    const char * valIn);
  XmlUnsignedInt(
    const XmlUnsignedInt * unsignedIntIn);
  ~XmlUnsignedInt();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedIntIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned int GET(val)();
  void SET(val)(unsigned int valIn);
protected:
#endif
  unsigned int PROT(val);
};

/*********************************************************************/

class XmlUnsignedIntLisd :
  public std::list<XmlUnsignedInt *>,
  public XmlBasicLisdBase
{
public:
  XmlUnsignedIntLisd();
  XmlUnsignedIntLisd(
    XmlUnsignedInt * unsignedIntIn);
  XmlUnsignedIntLisd(
    const XmlUnsignedIntLisd * unsignedIntLisdIn);
  XmlUnsignedIntLisd(
    const char * valueString);
  ~XmlUnsignedIntLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlUnsignedLong

This is a class for handling XML basic type unsignedLong.

*/

class XmlUnsignedLong :
  public XmlOPrintTypeBase
{
public:
  XmlUnsignedLong();
  XmlUnsignedLong(
    const char * valIn);
  XmlUnsignedLong(
    const XmlUnsignedLong * unsignedLongIn);
  ~XmlUnsignedLong();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedLongIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned long GET(val)();
  void SET(val)(unsigned long valIn);
protected:
#endif
  unsigned long PROT(val);
};

/*********************************************************************/

class XmlUnsignedLongLisd :
  public std::list<XmlUnsignedLong *>,
  public XmlBasicLisdBase
{
public:
  XmlUnsignedLongLisd();
  XmlUnsignedLongLisd(
    XmlUnsignedLong * unsignedLongIn);
  XmlUnsignedLongLisd(
    const XmlUnsignedLongLisd * unsignedLongLisdIn);
  XmlUnsignedLongLisd(
    const char * valueString);
  ~XmlUnsignedLongLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/

/* class XmlUnsignedShort

This is a class for handling XML basic type unsignedShort.

*/

class XmlUnsignedShort :
  public XmlOPrintTypeBase
{
public:
  XmlUnsignedShort();
  XmlUnsignedShort(
    const char * valIn);
  XmlUnsignedShort(
    const XmlUnsignedShort * unsignedShortIn);
  ~XmlUnsignedShort();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedShortIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned short GET(val)();
  void SET(val)(unsigned short valIn);
protected:
#endif
  unsigned short PROT(val);
};

/*********************************************************************/

class XmlUnsignedShortLisd :
  public std::list<XmlUnsignedShort *>,
  public XmlBasicLisdBase
{
public:
  XmlUnsignedShortLisd();
  XmlUnsignedShortLisd(
    XmlUnsignedShort * unsignedShortIn);
  XmlUnsignedShortLisd(
    const XmlUnsignedShortLisd * unsignedShortLisdIn);
  XmlUnsignedShortLisd(
    const char * valueString);
  ~XmlUnsignedShortLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

/*********************************************************************/
/***************************** END BASIC TYPES ***********************/
/*********************************************************************/


/*********************************************************************/

class XmlVersion :
  public XmlSchemaInstanceBase
{
public:
  XmlVersion();
  XmlVersion(
   const char * encodingIn,
   const char * standaloneIn);
  ~XmlVersion();
  void PRINTSELFDECL;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  char * GET(encoding)();
  void SET(encoding)(char * encodingIn);
  char * GET(standalone)();
  void SET(standalone)(char * standaloneIn);
protected:
#endif
  char PROT(encoding)[10];
  char PROT(standalone)[10];
};

/*********************************************************************/

/* class XmlAnyString

This is a class for handling the XML text of an XmlAny.
The XmlAnyStringIsBad function checks that the string is a single
valid XML element.

*/

class XmlAnyString :
  public XmlString
{
public:
  XmlAnyString();
  XmlAnyString(
    const char * valIn);
  ~XmlAnyString();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlAnyStringIsBad();
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string GET(val)();
  void SET(val)(std::string valIn);
protected:
#endif
  std::string PROT(val);
};

/*********************************************************************/

#endif // XMLSCHEMAINSTANCE_HH
