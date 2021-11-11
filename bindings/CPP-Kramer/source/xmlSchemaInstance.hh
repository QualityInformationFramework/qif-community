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

All fields of all classes are public unless ACCESS is defined when the
code is compiled (i.e., if -DACCESS is used). If ACCESS is defined,
all data fields of most types are protected, and access functions are
provided to get and set the fields.

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

#define NAMESIZE 200

//void xprintf(char * outString, int * N, const char * format, ...);
void xprintf(char * outString, size_t * remain, size_t * N, 
	     const char * format, ...);

/*********************************************************************/

class AttributePair;
class AttributePairLisd;
class SchemaLocation;
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

class XmlBasicLisdBase :
  public XmlSchemaInstanceBase
{
public:
  XmlBasicLisdBase();
  virtual ~XmlBasicLisdBase();
  virtual void PRINTNAMEDECL = 0;
  virtual void PRINTSELFDECL = 0;
  virtual void OPRINTSELFDECL = 0;

#ifdef USEXSITYPE 
  const char * printTypp;
#endif
#ifdef ACCESS
  const char * getprintElement();
  void setprintElement(const char * printElementIn);
  bool getbad();
  void setbad(bool badIn);
protected:
#endif
  const char * printElement;
  bool bad;
};

/*********************************************************************/

class XmlTypeBase :
  public XmlSchemaInstanceBase
{
public:
  XmlTypeBase();
  virtual ~XmlTypeBase();

#ifdef USEXSITYPE 
  const char * printTypp;
#endif
#ifdef ACCESS
  const char * getprintElement();
  void setprintElement(const char * printElementIn);
protected:
#endif
  const char * printElement;
};

/*********************************************************************/

class XmlOPrintTypeBase :
  public XmlTypeBase
{
public:
  XmlOPrintTypeBase();
  virtual ~XmlOPrintTypeBase();
  virtual void OPRINTSELFDECL = 0;
#ifdef ACCESS
  bool getbad();
  void setbad(bool badIn);
protected:
#endif
  bool bad;
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
#ifdef ACCESS
  std::string getname();
  void setname(std::string nameIn);
  std::string getval();
  void setval(std::string valIn);
#endif
  std::string name;
  std::string val;
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
#ifdef ACCESS
  std::string getprefix();
  void setprefix(std::string prefixIn);
  std::string getlocation();
  void setlocation(std::string locationIn);
  bool gethasNamespace();
  void sethasNamespace(bool hasNamespaceIn);
protected:
#endif
  std::string prefix;
  std::string location;
  bool hasNamespace;
};

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
  ~XmlAnyURI();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  bool XmlAnyURIIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
  bool getbad();
  void setbad(bool badIn);
protected:
#endif
  std::string val;
  bool bad;
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
  ~XmlBase64Binary();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlBase64BinaryIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
};

/*********************************************************************/

/* class XmlBase64BinaryLisd

It is not a good idea to use this since whitespace is allowed inside
an instance of base64Binary.

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
    XmlBase64BinaryLisd * base64BinaryLisdIn);
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
  ~XmlBoolean();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  bool XmlBooleanIsBad();
#ifdef ACCESS
  bool getval();
  void setval(bool valIn);
protected:
#endif
  bool val;
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
    XmlBooleanLisd * booleanLisdIn);
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
  ~XmlDate();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDateIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlDateLisd * dateLisdIn);
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
  ~XmlDateTime();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDateTimeIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlDateTimeLisd * dateTimeLisdIn);
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
    double valIn);
  ~XmlDecimal();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDecimalIsBad();

#ifdef ACCESS
  double getval();
  void setval(double valIn);
  short int getplaces();
  void setplaces(short int placesIn);
protected:
#endif
  double val;
  short int places;
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
    XmlDecimalLisd * decimalLisdIn);
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
    double valIn);
  ~XmlDouble();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlDoubleIsBad();
#ifdef ACCESS
  double getval();
  void setval(double valIn);
  short int getplaces();
  void setplaces(short int placesIn);
  char getformat();
  void setformat(char formatIn);
protected:
#endif
  double val;
  short int places;
  char format;
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
    XmlDoubleLisd * doubleLisdIn);
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
    float valIn);
  ~XmlFloat();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlFloatIsBad();
#ifdef ACCESS
  float getval();
  void setval(float valIn);
  short int getplaces();
  void setplaces(short int placesIn);
  char getformat();
  void setformat(char formatIn);
protected:
#endif
  float val;
  short int places;
  char format;
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
    XmlFloatLisd * floatLisdIn);
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
  ~XmlID();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIDIsBad();
 
  static std::set<std::string> allIDs;
  static int lastAuto;
  static const int idSize;
  static char buffer[];
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlIDLisd * idLisdIn);
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
  ~XmlIDREF();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIDREFIsBad();

  static bool idMissing();
  static std::set<std::string> allIDREFs;
  static const int idrefSize;
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlIDREFLisd * idrefLisdIn);
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
  ~XmlInt();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIntIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlIntLisd * intLisdIn);
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
  ~XmlInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlIntegerIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlIntegerLisd * integerLisdIn);
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
  ~XmlLong();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlLongIsBad();
#ifdef ACCESS
  long getval();
  void setval(long longIn);
protected:
#endif
  long val;
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
    XmlLongLisd * longLisdIn);
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
  ~XmlNCName();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNCNameIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
};

/*********************************************************************/

class XmlNCNameLisd :
  public std::list<XmlNCName *>,
  public XmlBasicLisdBase
{
public:
  XmlNCNameLisd();
  XmlNCNameLisd(
    XmlNCName * nmtokenIn);
  XmlNCNameLisd(
    XmlNCNameLisd * nmtokenLisdIn);
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
  ~XmlNegativeInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNegativeIntegerIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlNegativeIntegerLisd * negativeIntegerLisdIn);
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
  ~XmlNMTOKEN();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNMTOKENIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlNMTOKENLisd * nmtokenLisdIn);
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
  ~XmlNonNegativeInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNonNegativeIntegerIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlNonNegativeIntegerLisd * nonNegativeIntegerLisdIn);
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
  ~XmlNonPositiveInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlNonPositiveIntegerIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlNonPositiveIntegerLisd * nonPositiveIntegerLisdIn);
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
  ~XmlPositiveInteger();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlPositiveIntegerIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlPositiveIntegerLisd * positiveIntegerLisdIn);
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
  ~XmlShort();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlShortIsBad();
#ifdef ACCESS
  int getval();
  void setval(int valIn);
protected:
#endif
  int val;
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
    XmlShortLisd * shortLisdIn);
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
  ~XmlString();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlStringIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlStringLisd * stringLisdIn);
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
  ~XmlTime();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlTimeIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlTimeLisd * TimeLisdIn);
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
  ~XmlToken();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlTokenIsBad();
#ifdef ACCESS
  std::string getval();
  void setval(std::string valIn);
protected:
#endif
  std::string val;
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
    XmlTokenLisd * tokenLisdIn);
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
  ~XmlUnsignedByte();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedByteIsBad();
#ifdef ACCESS
  unsigned char getval();
  void setval(unsigned char valIn);
protected:
#endif
  unsigned char val;
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
    XmlUnsignedByteLisd * unsignedByteLisdIn);
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
  ~XmlUnsignedInt();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedIntIsBad();
#ifdef ACCESS
  unsigned int getval();
  void setval(unsigned int valIn);
protected:
#endif
  unsigned int val;
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
    XmlUnsignedIntLisd * unsignedIntLisdIn);
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
  ~XmlUnsignedLong();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedLongIsBad();
#ifdef ACCESS
  unsigned long getval();
  void setval(unsigned long valIn);
protected:
#endif
  unsigned long val;
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
    XmlUnsignedLongLisd * unsignedLongLisdIn);
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
  ~XmlUnsignedShort();
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
  void printBad(FILE * badFile);
  bool XmlUnsignedShortIsBad();
#ifdef ACCESS
  unsigned short getval();
  void setval(unsigned short valIn);
protected:
#endif
  unsigned short val;
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
    XmlUnsignedShortLisd * unsignedShortLisdIn);
  XmlUnsignedShortLisd(
    const char * valueString);
  ~XmlUnsignedShortLisd();
  virtual void PRINTNAMEDECL;
  void PRINTSELFDECL;
  void OPRINTSELFDECL;
};

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
#ifdef ACCESS
  char * getencoding();
  void setencoding(char * encodingIn);
  char * getstandalone();
  void setstandalone(char * standaloneIn);
protected:
#endif
  char encoding[10];
  char standalone[10];
};

/*********************************************************************/

#endif // XMLSCHEMAINSTANCE_HH
