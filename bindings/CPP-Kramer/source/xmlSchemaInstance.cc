/*
Copyright: Thomas R. Kramer 2020Feb12
License: Boost Software License - Version 1.0 - August 17th, 2003
*/
/*********************************************************************/

#include <stdio.h>              // for fprintf, etc.
#include <stdlib.h>             // for exit
#include <string.h>             // for strcmp
#include "xmlSchemaInstance.hh"

#ifdef _WIN32
#define strdup _strdup
#define isatty _isatty
#endif

/* 

The handling of the various types of strings should be improved to deal
correctly with the XML white space facets: preserve, replace, and collapse.
Currently these are only partially handled correctly.

The XmlSchemaInstanceBase::places is an externally defined integer
indicating how to deal with decimal places when printing non-integer
numbers. If XmlSchemaInstanceBase::places is negative, that means
-XmlSchemaInstanceBase::places should be used for printing regardless
of the number of places in numbers that are read in. If
XmlSchemaInstanceBase::places is positive, that means that, for
printing, numbers that are read in should keep the number of places as
read, but other numbers should use XmlSchemaInstanceBase::places
places.

The XmlSchemaInstanceBase::format is an externally defined int
indicating the format to use for printing non-integer numbers. The
value must be 0, 1, 2, 3, or 4, representing f, e, E, e, E. If the
value is less than 3, then if a number had a format when it was read
(necessarily e or E), that format should be used. If the number is 3
then e must be used. If the number is 4 then E must be used.

*/

/*********************************************************************/

std::set<std::string> XmlID::allIDs;
int XmlID::lastAuto = 0;
const int XmlID::idSize = 100;
char XmlID::buffer[101];
std::set<std::string> XmlIDREF::allIDREFs;
const int XmlIDREF::idrefSize = 100;

/*********************************************************************/

/*

The printSelf functions here (which are used in printing XML data
files) call the xxxIsBad function before printing.  If the returned
value is true (meaning the data is bad), this throws a
SchemaInstanceError containing an error message is printed. The
catcher of the SchemaInstanceError can decide what to do.

The constructors here that take a char * argument read the argument.
It is up to the caller to check that the argument is not 0. The
argument may be the empty string (a pointer to 0), however.

If the argument is valid for the data type, val is set to the value
that is read, and bad is set to false. If the argument is not valid,
bad is set to true and a warning message is printed. The constructor
does not exit if there is an error. It is up to the caller of the
constructor to check the value of bad and decide what to do if bad
is true.

The XXXIsBad functions are necessary even when bad is public and
could be accessed directly because if a descendant type of a built in
type is defined, an XXXIsBad function will be defined for each member of
the chain of descendants, and each of those will call the XXXIsBad
function for its parent.

Although "val" cannot avoid being of the correct C++ type, "bad" may
be true if a value could not be read. Hence, if "val" is set in a
program, "bad" should first be set to false and then be set to xxxIsBad().

FIX - The XML integer types are not supposed to have any limit on the
number of digits. However, the integer types here have a limit but do
not check it. It would be better to use C++ long or unsigned long for all
XML integer types here and check that the range is not exceeded.

*/

/*********************************************************************/

/*
void xprintf(char * outString, int * N, const char * format, ...)
{
  va_list args;

  va_start (args, format);
  *N += vsprintf(outString + *N, format, args);
  va_end(args);
}
*/

void xprintf(char * outString, size_t * remain, size_t * N,
	     const char * format, ...)
{
  va_list args;
  int k;

  if (*remain > 0)
    {
      va_start (args, format);
      k = vsnprintf((outString + *N), *remain, format, args);
      if (k > -1)
	{
	  *N += k;
	  *remain = (((size_t)k > *remain) ? 0 : (*remain - (size_t)k));
	}
      else
	*remain = 0;
      va_end(args);
    }
}

/*********************************************************************/

/* class AttributePair

*/

AttributePair::AttributePair() {}

AttributePair::AttributePair(
 const char * nameIn,
 const char * valIn)
{
  PROT(name) = nameIn; // automatic write to std::string
  PROT(val) = valIn;   // automatic write to std::string
}

AttributePair::~AttributePair() {}

void AttributePair::PRINTSELFDECL
{

}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
std::string AttributePair::GET(name)()
{return PROT(name);}

void AttributePair::SET(name)(std::string nameIn)
{PROT(name) = nameIn;}

std::string AttributePair::GET(val)()
{return PROT(val);}

void AttributePair::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class AttributePairLisd

*/

AttributePairLisd::AttributePairLisd() {}

AttributePairLisd::AttributePairLisd(
  AttributePair * pairIn)
{
  push_back(pairIn);
}

AttributePairLisd::~AttributePairLisd()
{
  #ifndef NODESTRUCT
  std::list<AttributePair *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AttributePairLisd::PRINTSELFDECL
{

}

/*********************************************************************/

/* class SchemaLocation

*/

SchemaLocation::SchemaLocation() {}

SchemaLocation::SchemaLocation(
  const char * prefixIn,
  const char * locationIn,
  bool hasNamespaceIn)
{
  PROT(prefix) = prefixIn;     // automatic write to std::string
  PROT(location) = locationIn; // automatic write to std::string
  PROT(hasNamespace) = hasNamespaceIn;
}

SchemaLocation::~SchemaLocation() {}

void SchemaLocation::PRINTSELFDECL
{
  if (PROT(hasNamespace))
    {
      XFPRINTF "  %s:schemaLocation=\n", PROT(prefix).c_str());
    }
  else
    {
      XFPRINTF "  %s:noNamespaceSchemaLocation=\n", PROT(prefix).c_str());
    }
  XFPRINTF "    \"%s\"", PROT(location).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
std::string SchemaLocation::GET(prefix)()
{return PROT(prefix);}

void SchemaLocation::SET(prefix)(std::string prefixIn)
{PROT(prefix) = prefixIn;}
  
std::string SchemaLocation::GET(location)()
{return PROT(location);}

void SchemaLocation::SET(location)(std::string locationIn)
{PROT(location) = locationIn;}

bool SchemaLocation::GET(hasNamespace)()
{return PROT(hasNamespace);}

void SchemaLocation::SET(hasNamespace)(bool hasNamespaceIn)
{PROT(hasNamespace) = hasNamespaceIn;}
#endif


/*********************************************************************/
/* class XmlAnyString

This is a pseudo-basic class for handling the text of an XmlAny.

Note that '>' is not included in PRINTSELFDECL, but \n is included.

*/

XmlAnyString::XmlAnyString()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlAnyString::XmlAnyString(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlAnyString::~XmlAnyString() {}

bool XmlAnyString::XmlAnyStringIsBad()
{
  return PROT(bad);
}

void XmlAnyString::PRINTSELFDECL
{
  if (XmlAnyStringIsBad())
    {
      throw(SchemaInstanceError("xs:any string value is bad"));
    }
  XFPRINTF "%s\n", PROT(val).c_str());
}

void XmlAnyString::OPRINTSELFDECL
{
  if (XmlAnyStringIsBad())
    {
      throw(SchemaInstanceError("xs:any string value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlAnyString::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
std::string XmlAnyString::GET(val)()
{return PROT(val);}

void XmlAnyString::SET(val)(std::string valIn)
{PROT(val) = valIn;}
#endif

/*********************************************************************/
/* class XmlAnyURI

This is a class for handling XML basic type anyURI. 

*/

XmlAnyURI::XmlAnyURI()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlAnyURI::XmlAnyURI(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlAnyURI::XmlAnyURI(
  const XmlAnyURI * URIIn)
{
  PROT(val) = URIIn->PROT(val); // automatic copy std::string
  PROT(bad) = URIIn->PROT(bad);
}

XmlAnyURI::~XmlAnyURI() {}

bool XmlAnyURI::XmlAnyURIIsBad()
{
  return PROT(bad);
}

void XmlAnyURI::PRINTSELFDECL
{
  if (XmlAnyURIIsBad())
    {
      throw(SchemaInstanceError("anyURI value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlAnyURI::OPRINTSELFDECL
{
  if (XmlAnyURIIsBad())
    {
      throw(SchemaInstanceError("anyURI value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlAnyURI::GET(val)()
  {return PROT(val);}

  void XmlAnyURI::SET(val)(std::string valIn)
  {PROT(val) = valIn;}

  bool XmlAnyURI::GET(bad)()
  {return PROT(bad);}

  void XmlAnyURI::SET(bad)(bool badIn)
  {PROT(bad) = badIn;}
#endif

/*********************************************************************/

/* class XmlBase64Binary

This is a class for handling XML basic type base64Binary.

A base64Binary value is a string subject to the following rules
for the allowed characters.
1. Each non-whitespace character must be one of a-z, A-Z, 0-9, +, /, =
2. Any number of whitespace characters may appear anywhere.
3. The number of non-whitespace characters must be divisible by 4.
4. The = character may appear only once or twice, and only after all
   other non-whitespace characters.
5. If there are two = characters, the preceding non-whitespace character
   must be one of AQgw
6. If there is one = character, the preceding non-whitespace character
   must be one of AEIMQUYcgkosw048

The checkers below check rules 1-3 but not 4-6.

Since the empty string ("") is a valid value, it is not used to
represent a bad value. Rather, "!" (which is bad by both 1 and 3
above) is used for a bad value.

*/

XmlBase64Binary::XmlBase64Binary()
{
  PROT(val) = "!";
  PROT(bad) = true;
}

XmlBase64Binary::XmlBase64Binary(
 const char * valIn)
{
  int n;
  int count;
  char c;

  count = 0;
  for (n = 0; (c = valIn[n]); n++)
    {
      if (isalnum(c) || (c == '+') || (c == '/') || (c == '='))
	count++;
      else if (isspace(c));
      else
	break;
    }
  if (valIn[n] || (count % 4))
    {
      PROT(val) = "!";
      PROT(bad) = true;
    }
  else
    {
      PROT(val) = valIn;
      PROT(bad) = false;
    }
}

XmlBase64Binary::XmlBase64Binary(
 const XmlBase64Binary * binIn)
{
  PROT(val) = binIn->PROT(val); // automatic copy std::string
  PROT(bad) = binIn->PROT(bad);
}

XmlBase64Binary::~XmlBase64Binary() {}

bool XmlBase64Binary::XmlBase64BinaryIsBad()
{
  char c;
  size_t n;
  int count;
  
  count = 0;
  if (PROT(val).length() == 0)
    { // empty string is legal
      PROT(bad) = false;
      return false;
    }
  for (n = 0; n < PROT(val).length(); n++)
    {
      c = PROT(val)[n];
      if (isalnum(c) || (c == '+') || (c == '/') || (c == '='))
        count++;
      else if (isspace(c));
      else
	break;
    }
  if ((n != PROT(val).length()) || (count % 4))
    {
      PROT(bad) = true;
      return true;
    }
  else
    {
      PROT(bad) = false;
      return false;
    }
}

void XmlBase64Binary::PRINTSELFDECL
{
  if (XmlBase64BinaryIsBad())
    {
      throw(SchemaInstanceError("base64Binary value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlBase64Binary::OPRINTSELFDECL
{
  if (XmlBase64BinaryIsBad())
    {
      throw(SchemaInstanceError("base64Binary value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlBase64Binary::GET(val)()
  {return PROT(val);}

  void XmlBase64Binary::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlBase64BinaryLisd

*/

XmlBase64BinaryLisd::XmlBase64BinaryLisd() {}

XmlBase64BinaryLisd::XmlBase64BinaryLisd(
  XmlBase64Binary * base64BinaryIn)
{
  push_back(base64BinaryIn);
}

XmlBase64BinaryLisd::XmlBase64BinaryLisd(
  const XmlBase64BinaryLisd * base64BinaryLisdIn)
{
  std::list<XmlBase64Binary *>::const_iterator iter;
  for (iter = base64BinaryLisdIn->begin();
       iter != base64BinaryLisdIn->end(); iter++)
    {
      push_back(new XmlBase64Binary(*iter));
    }
}

XmlBase64BinaryLisd::~XmlBase64BinaryLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlBase64Binary *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlBase64BinaryLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlBase64BinaryLisd");
}
 
void XmlBase64BinaryLisd::PRINTSELFDECL
{
  // This does nothing because it should not be used.
}

void XmlBase64BinaryLisd::OPRINTSELFDECL
{
  // This does nothing because it should not be used.
}

void XmlBase64Binary::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

/*********************************************************************/

/* class XmlBasicLisdBase

*/

XmlBasicLisdBase::XmlBasicLisdBase() {}

XmlBasicLisdBase::~XmlBasicLisdBase() {}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
const char * XmlBasicLisdBase::GET(printElement)()
  {return PROT(printElement);}

void XmlBasicLisdBase::SET(printElement)(const char * printElementIn)
  {PROT(printElement) = printElementIn;}

  bool XmlBasicLisdBase::GET(bad)()
  {return PROT(bad);}

  void XmlBasicLisdBase::SET(bad)(bool badIn)
  {PROT(bad) = badIn;}
#endif

/*********************************************************************/

/* class XmlBoolean

This is a class for handling XML basic type boolean. This handles
spaces inside the quotes around "true" and "false" (or "0" and "1")
Might make the value of this be a logical, so that an unset boolean
could have an unknown value.

*/

XmlBoolean::XmlBoolean()
{
  PROT(val) = true;
  PROT(bad) = true;
}

XmlBoolean::XmlBoolean(
  const char * valIn)
{ // collapse white space
  int start;
  int stop;

  for (start = 0; ((valIn[start] != 0) && (isspace(valIn[start]))); start++);
  //skip leading white space and handle empty or white string
  if (valIn[start] == 0)
    {
      PROT(val) = true;
      fprintf(stderr, "%s is not a valid boolean\n", valIn);
      PROT(bad) = true;
      return;
    }
  for (stop = (strlen(valIn) - 1); (isspace(valIn[stop])); stop--);
  if ((stop - start) == 0)
    {
      if (valIn[start] == '1')
	{
	  PROT(val) = true;
	  PROT(bad) = false;
	}
      else if (valIn[start] == '0')
	{
	  PROT(val) = false;
	  PROT(bad) = false;
	}
      else
	{
	  PROT(val) = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  PROT(bad) = true;
	}
    }
  else if ((stop - start) == 3)
    {
      if ((valIn[start] == 't') && (valIn[start+1] == 'r') &&
	  (valIn[start+2] == 'u') && (valIn[start+3] == 'e'))
	{
	  PROT(val) = true;
	  PROT(bad) = false;
	}
      else
	{
	  PROT(val) = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  PROT(bad) = true;
	}
    }
  else if ((stop - start) == 4)
    {
      if ((valIn[start] == 'f') && (valIn[start+1] == 'a') &&
	  (valIn[start+2] == 'l') && (valIn[start+3] == 's') &&
	  (valIn[start+4] == 'e'))
	{
	  PROT(val) = false;
	  PROT(bad) = false;
	}
      else
	{
	  PROT(val) = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  PROT(bad) = true;
	}
    }
  else
    {
      PROT(val) = true;
      fprintf(stderr, "%s is not a valid boolean\n", valIn);
      PROT(bad) = true;
    }
}

XmlBoolean::XmlBoolean(
  const XmlBoolean * XmlBooleanIn)
{
  PROT(val) = XmlBooleanIn->PROT(val);
  PROT(bad) = XmlBooleanIn->PROT(bad);
}

XmlBoolean::~XmlBoolean() {}

bool XmlBoolean::XmlBooleanIsBad()
{
  return PROT(bad);
}

void XmlBoolean::PRINTSELFDECL
{
  if (XmlBooleanIsBad())
    {
      throw(SchemaInstanceError("boolean value is bad"));
    }
  XFPRINTF "%s", (PROT(val) ? ">true" : ">false"));
}

void XmlBoolean::OPRINTSELFDECL
{
  if (XmlBooleanIsBad())
    {
      throw(SchemaInstanceError("boolean value is bad"));
    }
  XFPRINTF "%s", (PROT(val) ? "true" : "false"));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  bool XmlBoolean::GET(val)()
  {return PROT(val);}

  void XmlBoolean::SET(val)(bool valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlBooleanLisd

*/

XmlBooleanLisd::XmlBooleanLisd() {}

XmlBooleanLisd::XmlBooleanLisd(
  XmlBoolean * booleanIn)
{
  push_back(booleanIn);
}

XmlBooleanLisd::XmlBooleanLisd(
  const XmlBooleanLisd * booleanLisdIn)
{
  std::list<XmlBoolean *>::const_iterator iter;
  for (iter = booleanLisdIn->begin(); iter != booleanLisdIn->end(); iter++)
    {
      push_back(new XmlBoolean(*iter));
    }
}

XmlBooleanLisd::XmlBooleanLisd(
 const char * valueString)
{
  XmlBoolean * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid boolean list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlBoolean(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid boolean list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlBooleanLisd::~XmlBooleanLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlBoolean *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlBooleanLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlBooleanLisd");
}

void XmlBooleanLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlBooleanLisd::OPRINTSELFDECL
{
  std::list<XmlBoolean *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlDate

This is a class for handling XML basic type date. This is currently
not checking the requirements for a date and is allowing any string.

*/

XmlDate::XmlDate()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlDate::XmlDate(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlDate::XmlDate(
  const XmlDate * dateIn)
{
  PROT(val) = dateIn->PROT(val); // automatic write to std::string
  PROT(bad) = dateIn->PROT(bad);
}

XmlDate::~XmlDate() {}

bool XmlDate::XmlDateIsBad()
{
  return PROT(bad);
}

void XmlDate::PRINTSELFDECL
{
  if (XmlDateIsBad())
    {
      throw(SchemaInstanceError("date value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlDate::OPRINTSELFDECL
{
  if (XmlDateIsBad())
    {
      throw(SchemaInstanceError("date value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlDate::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlDate::GET(val)()
  {return PROT(val);}

  void XmlDate::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlDateLisd

*/

XmlDateLisd::XmlDateLisd() {}

XmlDateLisd::XmlDateLisd(
  XmlDate * dateIn)
{
  push_back(dateIn);
}

XmlDateLisd::XmlDateLisd(
  const XmlDateLisd * dateLisdIn)
{
  std::list<XmlDate *>::const_iterator iter;
  for (iter = dateLisdIn->begin(); iter != dateLisdIn->end(); iter++)
    {
      push_back(new XmlDate(*iter));
    }
}

XmlDateLisd::XmlDateLisd(
 const char * valueString)
{
  XmlDate * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid date list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlDate(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid date list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlDateLisd::~XmlDateLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlDate *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlDateLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlDateLisd");
}

void XmlDateLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlDateLisd::OPRINTSELFDECL
{
  std::list<XmlDate *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlDateTime

This is a class for handling XML basic type dateTime. This is currently
not checking the requirements for a dateTime and is allowing any string.

*/

XmlDateTime::XmlDateTime()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlDateTime::XmlDateTime(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlDateTime::XmlDateTime(
  const XmlDateTime * dateTimeIn)
{
  PROT(val) = dateTimeIn->PROT(val); // automatic write to std::string
  PROT(bad) = dateTimeIn->PROT(bad);
}

XmlDateTime::~XmlDateTime() {}

bool XmlDateTime::XmlDateTimeIsBad()
{
  return PROT(bad);
}

void XmlDateTime::PRINTSELFDECL
{
  if (XmlDateTimeIsBad())
    {
      throw(SchemaInstanceError("dateTime value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlDateTime::OPRINTSELFDECL
{
  if (XmlDateTimeIsBad())
    {
      throw(SchemaInstanceError("dateTime value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlDateTime::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlDateTime::GET(val)()
  {return PROT(val);}

  void XmlDateTime::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlDateTimeLisd

*/

XmlDateTimeLisd::XmlDateTimeLisd() {}

XmlDateTimeLisd::XmlDateTimeLisd(
  XmlDateTime * dateTimeIn)
{
  push_back(dateTimeIn);
}

XmlDateTimeLisd::XmlDateTimeLisd(
  const XmlDateTimeLisd * dateTimeLisdIn)
{
  std::list<XmlDateTime *>::const_iterator iter;
  for (iter = dateTimeLisdIn->begin(); iter != dateTimeLisdIn->end(); iter++)
    {
      push_back(new XmlDateTime(*iter));
    }
}

XmlDateTimeLisd::XmlDateTimeLisd(
 const char * valueString)
{
  XmlDateTime * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid dateTime list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlDateTime(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid dateTime list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlDateTimeLisd::~XmlDateTimeLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlDateTime *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlDateTimeLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlDateTimeLisd");
}

void XmlDateTimeLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlDateTimeLisd::OPRINTSELFDECL
{
  std::list<XmlDateTime *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlDecimal

This is a class for handling XML basic type decimal.
Might add fussier checks similar to the ones for unsignedInt.

*/

XmlDecimal::XmlDecimal()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlDecimal::XmlDecimal(
  const char * valueString)
{
  int n;
  int m; // number of digits after decimal point

  if (sscanf(valueString, "%lf", &PROT(val)) == 1)
    {
      PROT(bad) = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid decimal\n", valueString);
      PROT(bad) = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		      -XmlSchemaInstanceBase::places : 0);
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places : m);
}

XmlDecimal::XmlDecimal(
  const double valIn)
{
  PROT(val) = valIn;
  PROT(bad) = false;
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places :
		  XmlSchemaInstanceBase::places);
}

XmlDecimal::XmlDecimal(
  const XmlDecimal* decimalIn)
{
  PROT(val) = decimalIn->PROT(val);
  PROT(bad) = decimalIn->PROT(bad);
  PROT(places) = decimalIn->PROT(places);
}


XmlDecimal::~XmlDecimal() {}

bool XmlDecimal::XmlDecimalIsBad()
{
  return PROT(bad);
}

void XmlDecimal::PRINTSELFDECL
{
  if (XmlDecimalIsBad())
    {
      throw(SchemaInstanceError("decimal value is bad"));
    }
  XFPRINTF ">%.*f", PROT(places), PROT(val));
}

void XmlDecimal::OPRINTSELFDECL
{
  if (XmlDecimalIsBad())
    {
      throw(SchemaInstanceError("decimal value is bad"));
    }
  XFPRINTF "%.*f", PROT(places), PROT(val));
}

void XmlDecimal::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
double XmlDecimal::GET(val)()
{return PROT(val);}

void XmlDecimal::SET(val)(double valIn)
{PROT(val) = valIn;}

short int XmlDecimal::GET(places)()
{return PROT(places);}

void XmlDecimal::SET(places)(short int placesIn)
{PROT(places) = placesIn;}
#endif

/*********************************************************************/

/* class XmlDecimalLisd

*/

XmlDecimalLisd::XmlDecimalLisd() {}

XmlDecimalLisd::XmlDecimalLisd(
  XmlDecimal * decimalIn)
{
  push_back(decimalIn);
}

XmlDecimalLisd::XmlDecimalLisd(
  const XmlDecimalLisd * decimalLisdIn)
{
  std::list<XmlDecimal *>::const_iterator iter;
  for (iter = decimalLisdIn->begin(); iter != decimalLisdIn->end(); iter++)
    {
      push_back(new XmlDecimal(*iter));
    }
}

XmlDecimalLisd::XmlDecimalLisd(
 const char * valueString)
{
  XmlDecimal * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  PROT(bad) = false;
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid decimal list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlDecimal(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid decimal list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlDecimalLisd::~XmlDecimalLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlDecimal *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlDecimalLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlDecimalLisd");
}

void XmlDecimalLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlDecimalLisd::OPRINTSELFDECL
{
  std::list<XmlDecimal *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlDouble

This is a class for handling XML basic type double.
Might add range check.

See the beginning of this file regarding the meanings of places and format.

In the constructor taking a string argument, after scanf succeeds, the
code assumes the syntax is correct. If all checks pass, bad is set to
false and val is set to the number read. If any check fails, bad is
set to true and val is set to 0.

*/

XmlDouble::XmlDouble()
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  PROT(val) = 0;
  PROT(places) = XmlSchemaInstanceBase::places;
  PROT(format) = formats[XmlSchemaInstanceBase::format];
  PROT(bad) = true;
}

XmlDouble::XmlDouble(
  const char * valueString)
{
  int n = 0;
  int m; // number of digits after decimal point
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};

  if ((sscanf(valueString, " %lf %n", &PROT(val), &n) == 1) &&
      (n == (int)strlen(valueString)))
    { //skip white space around number and require all characters be read
      PROT(bad) = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid double\n", valueString);
      PROT(val) = 0;
      PROT(bad) = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		      -XmlSchemaInstanceBase::places : 0);
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : 'f');
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places : m);
  if (!valueString[n])
    { // number ended with no exponent 
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : 'f');
    }
  else
    { // number has e or E
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : valueString[n]);
    }
}

XmlDouble::XmlDouble(
  const double valIn)
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  PROT(val) = valIn;
  PROT(bad) = false;
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places :
		  XmlSchemaInstanceBase::places);
  PROT(format) = formats[XmlSchemaInstanceBase::format];
}

XmlDouble::XmlDouble(
  const XmlDouble * doubleIn)
{
  PROT(val) = doubleIn->PROT(val);
  PROT(bad) = doubleIn->PROT(bad);
  PROT(places) = doubleIn->PROT(places);
  PROT(format) = doubleIn->PROT(format);
}

XmlDouble::~XmlDouble() {}

bool XmlDouble::XmlDoubleIsBad()
{
  return PROT(bad);
}

void XmlDouble::PRINTSELFDECL
{
  static char printFormat[10];
  if (XmlDoubleIsBad())
    {
      throw(SchemaInstanceError("double value is bad"));
    }
  snprintf(printFormat, 10, ">%%.%d%c", PROT(places), PROT(format));
  XFPRINTF printFormat, PROT(val));
}

void XmlDouble::OPRINTSELFDECL
{
  static char printFormat[10];
  if (XmlDoubleIsBad())
    {
      throw(SchemaInstanceError("double value is bad"));
    }
  snprintf(printFormat, 10, "%%.%d%c", PROT(places), PROT(format));
  XFPRINTF printFormat, PROT(val));
}

void XmlDouble::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
double XmlDouble::GET(val)()
{return PROT(val);}

void XmlDouble::SET(val)(double valIn)
{PROT(val) = valIn;}

short int XmlDouble::GET(places)()
{return PROT(places);}

void XmlDouble::SET(places)(short int placesIn)
{PROT(places) = placesIn;}

char XmlDouble::GET(format)()
{return PROT(format);}

void XmlDouble::SET(format)(char formatIn)
{PROT(format) = formatIn;}
#endif

/*********************************************************************/

/* class XmlDoubleLisd

*/

XmlDoubleLisd::XmlDoubleLisd() {}

XmlDoubleLisd::XmlDoubleLisd(
  XmlDouble * doubleIn)
{
  push_back(doubleIn);
}

XmlDoubleLisd::XmlDoubleLisd(
  const XmlDoubleLisd * doubleLisdIn)
{
  std::list<XmlDouble *>::const_iterator iter;
  for (iter = doubleLisdIn->begin(); iter != doubleLisdIn->end(); iter++)
    {
      push_back(new XmlDouble(*iter));
    }
}

XmlDoubleLisd::XmlDoubleLisd(
 const char * valueString)
{
  XmlDouble * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  PROT(bad) = false;
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid double list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlDouble(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlDoubleLisd::~XmlDoubleLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlDouble *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

bool XmlDoubleLisd::XmlDoubleLisdIsBad()
{
  return PROT(bad);
}

void XmlDoubleLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlDoubleLisd");
}

void XmlDoubleLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlDoubleLisd::OPRINTSELFDECL
{
  std::list<XmlDouble *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlFloat

This is a class for handling XML basic type float.
Might add range check.

See the beginning of this file regarding the meanings of places and format.

In the constructor taking a string argument, after scanf succeeds, the
code assumes the syntax is correct. If all checks pass, bad is set to
false and val is set to the number read. If any check fails, bad is
set to true and val is set to 0.

*/

XmlFloat::XmlFloat()
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  PROT(val) = 0.0;
  PROT(places) = XmlSchemaInstanceBase::places;
  PROT(format) = formats[XmlSchemaInstanceBase::format];
  PROT(bad) = true;
}

XmlFloat::XmlFloat(
  const char * valueString)
{
  int n = 0;
  int m; // number of digits after decimal point
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};

  if ((sscanf(valueString, " %f %n", &PROT(val), &n) == 1) &&
      (n == (int)strlen(valueString)))
    { //skip white space around number and require all characters be read
      PROT(bad) = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid float\n", valueString);
      PROT(val) = 0;
      PROT(bad) = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		      -XmlSchemaInstanceBase::places : 0);
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : 'f');
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places : m);
  if (!valueString[n])
    { // number ended with no exponent 
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : 'f');
    }
  else
    { // number has e or E
      PROT(format) = ((XmlSchemaInstanceBase::format > 2) ?
		      formats[XmlSchemaInstanceBase::format] : valueString[n]);
    }
}

XmlFloat::XmlFloat(
  const float valIn)
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  PROT(val) = valIn;
  PROT(bad) = false;
  PROT(places) = ((XmlSchemaInstanceBase::places < 0) ?
		  -XmlSchemaInstanceBase::places :
		  XmlSchemaInstanceBase::places);
  PROT(format) = formats[XmlSchemaInstanceBase::format];
}

XmlFloat::XmlFloat(
  const XmlFloat * floatIn)
{
  PROT(val) = floatIn->PROT(val);
  PROT(bad) = floatIn->PROT(bad);
  PROT(places) = floatIn->PROT(places);
  PROT(format) =  floatIn->PROT(format);
}

XmlFloat::~XmlFloat() {}

bool XmlFloat::XmlFloatIsBad()
{
  return PROT(bad);
}

void XmlFloat::PRINTSELFDECL
{
  static char printFormat[10];
  if (XmlFloatIsBad())
    {
      throw(SchemaInstanceError("float value is bad"));
    }
  snprintf(printFormat, 10, ">%%.%d%c", PROT(places), PROT(format));
  XFPRINTF printFormat, PROT(val));
}

void XmlFloat::OPRINTSELFDECL
{
  static char printFormat[10];
  if (XmlFloatIsBad())
    {
      throw(SchemaInstanceError("float value is bad"));
    }
  snprintf(printFormat, 10, "%%.%d%c", PROT(places), PROT(format));
  XFPRINTF printFormat, PROT(val));
}

void XmlFloat::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
float XmlFloat::GET(val)()
{return PROT(val);}

void XmlFloat::SET(val)(float valIn)
{PROT(val) = valIn;}

short int XmlFloat::GET(places)()
{return PROT(places);}

void XmlFloat::SET(places)(short int placesIn)
{PROT(places) = placesIn;}

char XmlFloat::GET(format)()
{return PROT(format);}

void XmlFloat::SET(format)(char formatIn)
{PROT(format) = formatIn;}
#endif

/*********************************************************************/

/* class XmlFloatLisd

*/

XmlFloatLisd::XmlFloatLisd() {}

XmlFloatLisd::XmlFloatLisd(
  XmlFloat * floatIn)
{
  push_back(floatIn);
}

XmlFloatLisd::XmlFloatLisd(
  const XmlFloatLisd * floatLisdIn)
{
  std::list<XmlFloat *>::const_iterator iter;
  for (iter = floatLisdIn->begin(); iter != floatLisdIn->end(); iter++)
    {
      push_back(new XmlFloat(*iter));
    }
}

XmlFloatLisd::XmlFloatLisd(
 const char * valueString)
{
  XmlFloat * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  SET(bad)(false);
#else
  PROT(bad) = false;
#endif
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlFloat(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid float list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlFloatLisd::~XmlFloatLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlFloat *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlFloatLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlFloatLisd");
}

void XmlFloatLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlFloatLisd::OPRINTSELFDECL
{
  std::list<XmlFloat *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlID

This is a class for handling XML IDs, which are required to be unique
in any one instance file.

The allIDs, lastAuto, idSize, and buffer static attributes are 
defined at the beginning of this file.

The constructor that takes no arguments assigns a unique value to the
ID of the form autoIdN, where the N at the end is an integer. The
lastAuto attribute keeps the next value of N to use. Before using
that value, however, it is checked whether autoIdN already exists.
If so, N is increased by 1 and the process repeats. This is currently
not checking that all integers have been used up. The "bad" attribute
is set to false.

The constructor that takes the argument valIn checks the length of valIn.
If is is greater than idSize, val is set to "0", and bad is set to true.
Bad is set to true also if the valIn is already used in another XmlID

The allIDs set keeps track of all strings used in instances of XmlID.
Every time a new XmlID is created, its val is recorded in allIDs. When
the destructor for an XmlID is called, the string in the XmlID is
removed from allIDs. Note that allIDs only contains the names of the
XmlIDs; it does not contain XmlIDs.

The buffer is a place for constructing a string.

The bad attribute is set to false if the XmlID is OK. It is set to true
if the constructor with the valIn argument contains a value that is too
long (larger than idSize) or a value that is already used for another
XmlID.

It is expected that any program using XmlIDs will check the bad attribute
after calling the constructor with the valIn argument.

The limitation on the size of IDs is probably not necessary, but it may be
useful to the find and insert operations.

A valid ID may have leading and/or trailing white space, but
otherwise, the first non-space character must be a member of [a-zA-Z_]
and other characters must be a member of [a-zA-Z0-9_.-].

This is handling white space correctly. Leading white space (tab, space,
10, 13) and trailing white space is removed.

*/

XmlID::XmlID()
{
  for (lastAuto++; ; lastAuto++)
    {
      snprintf(buffer, idSize, "autoId%d", lastAuto);
      if (allIDs.find(buffer) == allIDs.end())
	break;
    }
  PROT(val) = buffer;
  allIDs.insert(PROT(val));
  PROT(bad) = false;
}

XmlID::XmlID(
 const char * valIn)
{
  int n;
  int start;
  int length;
  static char buffer[NAMESIZE];

  length = strlen(valIn);
  if (length > NAMESIZE)
    {
      fprintf(stderr, "ID %s is too long", valIn);
      PROT(bad) = true;
      return;
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (start=0; isspace(buffer[start]); start++);
  for (n = length - 1; isspace(buffer[n]); n--);
  buffer[n+1] = 0;
  if ((int)strlen(buffer + start) > idSize)
    {
      fprintf(stderr, "the ID %s is too long\n", buffer + start);
      PROT(val) = "";
      PROT(bad) = true;
      return;
    }
  n = start;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white character is not allowed
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid ID\n", buffer + start);
      return;
    }
  for (n++; ((buffer[n] == '_') ||
	     (buffer[n] == '.') ||
	     (buffer[n] == '-') ||
	     ((buffer[n] >= 'a') && (buffer[n] <= 'z')) ||
	     ((buffer[n] >= 'A') && (buffer[n] <= 'Z')) ||
	     ((buffer[n] >= '0') && (buffer[n] <= '9'))); n++);
  if (buffer[n])
    { // buffer[n] should be 0 but isn't
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid ID\n", buffer + start);
      return;
    }
   else
    {
      PROT(val) = buffer + start; // automatic write to std::string
      if (allIDs.find(PROT(val)) != allIDs.end())
	{
	  fprintf(stderr, "ID value %s is already in use\n", PROT(val).c_str());
	  PROT(val) = "";
	  PROT(bad) = true;
	}
      else
	{ // everything OK
	  PROT(bad) = false;
	  allIDs.insert(PROT(val));
	}
    }
}

XmlID::XmlID(
  const XmlID * IDIn)
{
  PROT(val) = IDIn->PROT(val);
  PROT(bad) = IDIn->PROT(bad);
}

XmlID::~XmlID()
{
  allIDs.erase(PROT(val));
}

bool XmlID::XmlIDIsBad()
{
  int n;

  if (PROT(bad))
    return true;
  else if ((int)PROT(val).size() > idSize)
    return true;
  else if (allIDs.find(PROT(val)) == allIDs.end())
    return true;
  else if ((PROT(val)[0] != '_') &&
	   ((PROT(val)[0] < 'a') || (PROT(val)[0] > 'z')) &&
	   ((PROT(val)[0] < 'A') || (PROT(val)[0] > 'Z')))
    { // first character is not allowed
      PROT(val) = "";
      return true;
    }
  for (n=1; ((PROT(val)[n] == '_') ||
	     (PROT(val)[n] == '.') ||
	     (PROT(val)[n] == '-') ||
	     ((PROT(val)[n] >= 'a') && (PROT(val)[n] <= 'z')) ||
	     ((PROT(val)[n] >= 'A') && (PROT(val)[n] <= 'Z')) ||
	     ((PROT(val)[n] >= '0') && (PROT(val)[n] <= '9'))); n++);
  if (PROT(val)[n])
    { // val[n] should be 0 but isn't
      PROT(val) = "";
      return true;
    }
  return false;
}

void XmlID::PRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlIDIsBad())
    {
      snprintf(mess, NAMESIZE, "ID %s is bad\n", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlID::OPRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlIDIsBad())
    {
      snprintf(mess, NAMESIZE, "ID %s is bad\n", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlID::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlID::GET(val)()
  {return PROT(val);}

  void XmlID::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlIDLisd

*/

XmlIDLisd::XmlIDLisd() {}

XmlIDLisd::XmlIDLisd(
  XmlID * idIn)
{
  push_back(idIn);
}

XmlIDLisd::XmlIDLisd(
  const XmlIDLisd * idLisdIn)
{
  std::list<XmlID *>::const_iterator iter;
  for (iter = idLisdIn->begin(); iter != idLisdIn->end(); iter++)
    {
      push_back(new XmlID(*iter));
    }
}

XmlIDLisd::XmlIDLisd(
 const char * valueString)
{
  XmlID * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  PROT(bad) = false;
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid ID list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlID(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid ID list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlIDLisd::~XmlIDLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlID *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlIDLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlIDLisd");
}

void XmlIDLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlIDLisd::OPRINTSELFDECL
{
  std::list<XmlID *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlIDREF

This is a class for handling XML IDREFs, which are required to match
XML IDs with the same val. Checking IDREFs agains IDs must be postponed
until an entire data file has been read, so this saves all the IDREFs
in the allIDREFs. 

The xmlIDREFIsBad function checks that the value of an IDREF is found
in allIDs. That function runs whenever an IDREF is printed and should
not be called until the entire instance file has been parsed. Any program
using an instance file parser may check allIDREFs against AllIDs after
parsing is complete.

Every time a new XmlIDREF is created, its val is recorded in
allIDREFs. When the destructor is called, the string in the XmlIDREF is
removed from allIDREFs.

The allIDREFs and idrefSize static attributes are defined at the
beginning of this file.

The bad attribute is set to false if the XmlIDREF is OK. It is set to true
if the constructor with the valIn argument contains a value that is too
long (larger than idrefSize).

It is expected that any program using XmlIDREFs will check the bad attribute
after calling the constructor with the valIn argument.

The limitation on the size of IDREFs is probably not necessary, but it may be
useful to the find and insert operations.

*/

XmlIDREF::XmlIDREF()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlIDREF::XmlIDREF(
  const char * valIn)
{
  int n;
  int start;
  int length;
  static char buffer[NAMESIZE];

  length = strlen(valIn);
  if (length > NAMESIZE)
    {
      snprintf(buffer, NAMESIZE, "IDREF is too long: %s", valIn);
      throw(SchemaInstanceError(buffer));
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (start=0; isspace(buffer[start]); start++);
  for (n = length - 1; isspace(buffer[n]); n--);
  buffer[n+1] = 0;
  if ((int)strlen(buffer + start) > idrefSize)
    {
      fprintf(stderr,
	      "IDREF %s is too long\n", buffer + start);
      PROT(val) = "";
      PROT(bad) = true;
      return;
    }
  n = start;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white character is not allowed
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid IDREF\n", buffer + start);
      return;
    }
  for (n++; ((buffer[n] == '_') ||
	     (buffer[n] == '.') ||
	     (buffer[n] == '-') ||
	     ((buffer[n] >= 'a') && (buffer[n] <= 'z')) ||
	     ((buffer[n] >= 'A') && (buffer[n] <= 'Z')) ||
	     ((buffer[n] >= '0') && (buffer[n] <= '9'))); n++);
  if (buffer[n])
    { // buffer[n] should be 0 but isn't
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid IDREF\n", buffer + start);
      return;
    }
  PROT(val) = buffer + start; // automatic write to std::string
  PROT(bad) = false;
  allIDREFs.insert(PROT(val));
}

XmlIDREF::XmlIDREF(
  const XmlIDREF * IDREFIn)
{
  PROT(val) = IDREFIn->PROT(val);
  PROT(bad) = IDREFIn->PROT(bad);
}

XmlIDREF::~XmlIDREF()
{
  allIDREFs.erase(PROT(val));
}

bool XmlIDREF::XmlIDREFIsBad()
{
  int n;

  if (PROT(bad))
    return true;
  else if ((int)PROT(val).size() > idrefSize)
    return true;
  else if (XmlID::allIDs.find(PROT(val)) == XmlID::allIDs.end())
    return true;
  else if ((PROT(val)[0] != '_') &&
	   ((PROT(val)[0] < 'a') || (PROT(val)[0] > 'z')) &&
	   ((PROT(val)[0] < 'A') || (PROT(val)[0] > 'Z')))
    { // first character is not allowed
      PROT(val) = "";
      return true;
    }
  for (n=1; ((PROT(val)[n] == '_') ||
	     (PROT(val)[n] == '.') ||
	     (PROT(val)[n] == '-') ||
	     ((PROT(val)[n] >= 'a') && (PROT(val)[n] <= 'z')) ||
	     ((PROT(val)[n] >= 'A') && (PROT(val)[n] <= 'Z')) ||
	     ((PROT(val)[n] >= '0') && (PROT(val)[n] <= '9'))); n++);
  if (PROT(val)[n])
    { // val[n] should be 0 but isn't
      PROT(val) = "";
      return true;
    }
  return false;
}

void XmlIDREF::PRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlIDREFIsBad())
    {
      snprintf(mess, NAMESIZE, "IDREF %s is bad\n", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlIDREF::OPRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlIDREFIsBad())
    {
      snprintf(mess, NAMESIZE, "IDREF %s is bad\n", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlIDREF::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

bool XmlIDREF::idMissing()
{
  std::set<std::string>::iterator iter;
  for (iter = allIDREFs.begin(); iter != allIDREFs.end(); iter++)
    {
      if (XmlID::allIDs.find(*iter) == XmlID::allIDs.end())
	{
	  fprintf(stderr, "referenced xs:ID %s is not defined\n",
		  iter->c_str());
	  return true;
	}
    }
  return false;
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlIDREF::GET(val)()
  {return PROT(val);}

  void XmlIDREF::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlIDREFLisd

*/

XmlIDREFLisd::XmlIDREFLisd() {}

XmlIDREFLisd::XmlIDREFLisd(
  XmlIDREF * idrefIn)
{
  push_back(idrefIn);
}

XmlIDREFLisd::XmlIDREFLisd(
  const XmlIDREFLisd * idrefLisdIn)
{
  std::list<XmlIDREF *>::const_iterator iter;
  for (iter = idrefLisdIn->begin(); iter != idrefLisdIn->end(); iter++)
    {
      push_back(new XmlIDREF(*iter));
    }
}

XmlIDREFLisd::XmlIDREFLisd(
 const char * valueString)
{
  XmlIDREF * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  PROT(bad) = false;
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid IDREF list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlIDREF(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid IDREF list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlIDREFLisd::~XmlIDREFLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlIDREF *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlIDREFLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlIDREFLisd");
}

void XmlIDREFLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlIDREFLisd::OPRINTSELFDECL
{
  std::list<XmlIDREF *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlInt

This is a class for handling XML basic type int.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus or minus sign followed by
3. a sequence of one to 11 digits followed by
4. a sequence of zero or more white space characters

It is checked that sscanf can read the number into a long int.
It is checked that the long int is in range for an int.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlInt::XmlInt()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlInt::XmlInt(
  const char * valIn)
{
  int n;
  int start;
  long longVal;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] == '+') || (valIn[n] == '-'))
    n++;
  start = n;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 11)
    { // too many digits
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &longVal) == 1)
    {
      if ((longVal < -2147483648) || (longVal > 2147483647))
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid int\n", valIn);
	}      
      else
	{
	  PROT(val) = (int)longVal;
	  PROT(bad) = false;
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
    }
}

XmlInt::XmlInt(
  const XmlInt * intIn)
{
  PROT(val) = intIn->PROT(val);
  PROT(bad) = intIn->PROT(bad);
}

XmlInt::~XmlInt() {}

bool XmlInt::XmlIntIsBad()
{
  return PROT(bad);
}

void XmlInt::PRINTSELFDECL
{
  if (XmlIntIsBad())
    {
      throw(SchemaInstanceError("int value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlInt::OPRINTSELFDECL
{
  if (XmlIntIsBad())
    {
      throw(SchemaInstanceError("int value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlInt::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlInt::GET(val)()
  {return PROT(val);}

  void XmlInt::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlIntLisd

*/

XmlIntLisd::XmlIntLisd() {}

XmlIntLisd::XmlIntLisd(
  XmlInt * intIn)
{
  push_back(intIn);
}

XmlIntLisd::XmlIntLisd(
  const XmlIntLisd * intLisdIn)
{
  std::list<XmlInt *>::const_iterator iter;
  for (iter = intLisdIn->begin(); iter != intLisdIn->end(); iter++)
    {
      push_back(new XmlInt(*iter));
    }
}

XmlIntLisd::XmlIntLisd(
 const char * valueString)
{
  XmlInt * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid int list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlInt(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid int list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlIntLisd::~XmlIntLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlInt *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlIntLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlIntLisd");
}

void XmlIntLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlIntLisd::OPRINTSELFDECL
{
  std::list<XmlInt *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlInteger

This is a class for handling XML basic type integer.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus or minus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more white space characters

If that checks, it is checked that sscanf can read the number.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlInteger::XmlInteger()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlInteger::XmlInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] == '+') || (valIn[n] == '-'))
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; valIn[n] && isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &PROT(val)) == 1)
    {
      PROT(bad) = false;
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
    }
}

XmlInteger::XmlInteger(
  const XmlInteger * integerIn)
{
  PROT(val) = integerIn->PROT(val);
  PROT(bad) = integerIn->PROT(bad);
}

XmlInteger::~XmlInteger() {}

bool XmlInteger::XmlIntegerIsBad()
{
  return PROT(bad);
}

void XmlInteger::PRINTSELFDECL
{
  if (XmlIntegerIsBad())
    {
      throw(SchemaInstanceError("integer value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlInteger::OPRINTSELFDECL
{
  if (XmlIntegerIsBad())
    {
      throw(SchemaInstanceError("integer value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlInteger::GET(val)()
  {return PROT(val);}

  void XmlInteger::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlIntegerLisd

*/

XmlIntegerLisd::XmlIntegerLisd() {}

XmlIntegerLisd::XmlIntegerLisd(
  XmlInteger * integerIn)
{
  push_back(integerIn);
}

XmlIntegerLisd::XmlIntegerLisd(
  const XmlIntegerLisd * integerLisdIn)
{
  *this = *integerLisdIn;
}

XmlIntegerLisd::XmlIntegerLisd(
 const char * valueString)
{
  XmlInteger * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid integer list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlInteger(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid integer list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlIntegerLisd::~XmlIntegerLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlIntegerLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlIntegerLisd");
}

void XmlIntegerLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlIntegerLisd::OPRINTSELFDECL
{
  std::list<XmlInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlLong

This is a class for handling XML basic type long.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus or minus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more white space characters

If that checks, it is checked that sscanf can read the number.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlLong::XmlLong()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlLong::XmlLong(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] == '+') || (valIn[n] == '-'))
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &PROT(val)) == 1)
    {
      PROT(bad) = false;
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
    }
}

XmlLong::XmlLong(
  const XmlLong * longIn)
{
  PROT(val) = longIn->PROT(val);
  PROT(bad) = longIn->PROT(bad);
}

XmlLong::~XmlLong() {}

bool XmlLong::XmlLongIsBad()
{
  return PROT(bad);
}

void XmlLong::PRINTSELFDECL
{
  if (XmlLongIsBad())
    {
      throw(SchemaInstanceError("long value is bad"));
    }
  XFPRINTF ">%ld", PROT(val));
}

void XmlLong::OPRINTSELFDECL
{
  if (XmlLongIsBad())
    {
      throw(SchemaInstanceError("long value is bad"));
    }
  XFPRINTF "%ld", PROT(val));
}

void XmlLong::printBad(FILE * badFile)
{
  fprintf(badFile, "%ld", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  long XmlLong::GET(val)()
  {return PROT(val);}

  void XmlLong::SET(val)(long valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlLongLisd

*/

XmlLongLisd::XmlLongLisd() {}

XmlLongLisd::XmlLongLisd(
  XmlLong * longIn)
{
  push_back(longIn);
}

XmlLongLisd::XmlLongLisd(
  const XmlLongLisd * longLisdIn)
{
  std::list<XmlLong *>::const_iterator iter;
  for (iter = longLisdIn->begin(); iter != longLisdIn->end(); iter++)
    {
      push_back(new XmlLong(*iter));
    }
}

XmlLongLisd::XmlLongLisd(
 const char * valueString)
{
  XmlLong * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid long list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlLong(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid long list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlLongLisd::~XmlLongLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlLong *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlLongLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlLongLisd");
}

void XmlLongLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlLongLisd::OPRINTSELFDECL
{
  std::list<XmlLong *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlNCName

This is a class for handling XML basic type NCName.

The constructor that takes a char* argument checks that valIn contains a
valid NCName, possibly with leading and trailing white space.  If so,
val (a std::string) is set to the non-white part of valIn and bad is
set to false.  If not, val is set to the empty string and bad is set
to true.

On reading, a valid NCName may have leading and/or trailing white
space characters, but otherwise, it must be a member of [a-zA-Z0-9_.-]+.

This is removing leading and trailing white space since the whitespace
value of NCName is collapse.

*/

XmlNCName::XmlNCName()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlNCName::XmlNCName(
  const char * valIn)
{
  int n;
  int start;
  int end;
  static char buffer[NAMESIZE];

  if (strlen(valIn) > NAMESIZE)
    {
      snprintf(buffer, NAMESIZE, "NCName is too long: %s", valIn);
      throw(SchemaInstanceError(buffer));
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (n=0; isspace(buffer[n]); n++);
  start = n;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white-space character is not allowed
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid NCName\n", valIn);
      return;
    }
  for (n++; ((buffer[n] == '_') ||
             (buffer[n] == '.') ||
             (buffer[n] == '-') ||
             ((buffer[n] >= 'a') && (buffer[n] <= 'z')) ||
             ((buffer[n] >= 'A') && (buffer[n] <= 'Z')) ||
             ((buffer[n] >= '0') && (buffer[n] <= '9'))); n++);
  end = n;
  for ( ; isspace(buffer[n]); n++);
  if (buffer[n])
    { // buffer[n] should be 0 but isn't
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid NCName\n", valIn);
      return;
    }
  buffer[end] = 0;
  PROT(val) = (buffer + start); // automatic write to std::string
  PROT(bad) = false;
}

XmlNCName::XmlNCName(
    const XmlNCName * nameIn)
{
  PROT(val) = nameIn->PROT(val);
  PROT(bad) = nameIn->PROT(bad);
}

XmlNCName::~XmlNCName() {}

// This returns true if there are any bad characters or white space.
bool XmlNCName::XmlNCNameIsBad()
{
  int n;

  if (PROT(bad))
    return true;
  for (n=0; ((PROT(val)[n] == '_') ||
             (PROT(val)[n] == '.') ||
             (PROT(val)[n] == '-') ||
             ((PROT(val)[n] >= 'a') && (PROT(val)[n] <= 'z')) ||
             ((PROT(val)[n] >= 'A') && (PROT(val)[n] <= 'Z')) ||
             ((PROT(val)[n] >= '0') && (PROT(val)[n] <= '9'))); n++);
  if ((n == 0) || PROT(val)[n])
    return true;
  else if ((PROT(val)[0] == '.') || (PROT(val)[0] == '-') ||
	   ((PROT(val)[0] >= '0') && (PROT(val)[0] <= '9')))
    return true;
  else
    return false;
}

void XmlNCName::PRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlNCNameIsBad())
    {
      snprintf(mess, NAMESIZE, "NCName value %s is bad", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlNCName::OPRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlNCNameIsBad())
    {
      snprintf(mess, NAMESIZE, "NCName value %s is bad", PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlNCName::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlNCName::GET(val)()
  {return PROT(val);}

  void XmlNCName::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlNCNameLisd

*/

XmlNCNameLisd::XmlNCNameLisd() {}

XmlNCNameLisd::XmlNCNameLisd(
  XmlNCName * ncNameIn)
{
  push_back(ncNameIn);
}

XmlNCNameLisd::XmlNCNameLisd(
  const XmlNCNameLisd * ncNameLisdIn)
{
  std::list<XmlNCName *>::const_iterator iter;
  for (iter = ncNameLisdIn->begin(); iter != ncNameLisdIn->end(); iter++)
    {
      push_back(new XmlNCName(*iter));
    }
}

XmlNCNameLisd::XmlNCNameLisd(
 const char * valueString)
{
  XmlNCName * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    {
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
        { //skip leading white space and handle empty or white string
          if (valueString[n] == 0)
            break;
        }
      if (valueString[n] == 0)
            break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
        {
          fprintf(stderr, "%s is not a valid NCName list\n", valueString);
          PROT(bad) = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlNCName(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
        {
          fprintf(stderr, "%s is not a valid NCName list\n", valueString);
          PROT(bad) = true;
          break;
        }
      else
        push_back(valu);
      if (valueString[n] == 0)
            break;
    }
}

XmlNCNameLisd::~XmlNCNameLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlNCName *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlNCNameLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlNCNameLisd");
}

void XmlNCNameLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlNCNameLisd::OPRINTSELFDECL
{
  std::list<XmlNCName *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
        XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlNegativeInteger

This is a class for handling XML basic type negativeInteger.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional minus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more white space characters

If that checks, it is checked that sscanf can read the number.
If that checks, it is checked that the value is negative.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlNegativeInteger::XmlNegativeInteger()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlNegativeInteger::XmlNegativeInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '+')
    { // first non-white-space character is a plus sign - not allowed
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  if (valIn[n] == '-')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-minus-sign character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &PROT(val)) == 1)
    {
      if (PROT(val) < 0)
	PROT(bad) = false;
      else
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
    }
}

XmlNegativeInteger::XmlNegativeInteger(
    const XmlNegativeInteger * negIntIn)
{
  PROT(val) = negIntIn->PROT(val);
  PROT(bad) = negIntIn->PROT(bad);
}

XmlNegativeInteger::~XmlNegativeInteger() {}

bool XmlNegativeInteger::XmlNegativeIntegerIsBad()
{
  if (PROT(bad))
    return true;
  else if (PROT(val) > -1)
    return true;
  else
    return false;
}

void XmlNegativeInteger::PRINTSELFDECL
{
  if (XmlNegativeIntegerIsBad())
    {
      throw(SchemaInstanceError("negativeInteger value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlNegativeInteger::OPRINTSELFDECL
{
  if (XmlNegativeIntegerIsBad())
    {
      throw(SchemaInstanceError("negativeInteger value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlNegativeInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlNegativeInteger::GET(val)()
  {return PROT(val);}

  void XmlNegativeInteger::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlNegativeIntegerLisd

*/

XmlNegativeIntegerLisd::XmlNegativeIntegerLisd() {}

XmlNegativeIntegerLisd::XmlNegativeIntegerLisd(
  XmlNegativeInteger * negativeIntegerIn)
{
  push_back(negativeIntegerIn);
}

XmlNegativeIntegerLisd::XmlNegativeIntegerLisd(
  const XmlNegativeIntegerLisd * negIntLisdIn)
{
  std::list<XmlNegativeInteger *>::const_iterator iter;
  for (iter = negIntLisdIn->begin(); iter != negIntLisdIn->end(); iter++)
    {
      push_back(new XmlNegativeInteger(*iter));
    }
}

XmlNegativeIntegerLisd::XmlNegativeIntegerLisd(
 const char * valueString)
{
  XmlNegativeInteger * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid negativeInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlNegativeInteger(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid negativeInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlNegativeIntegerLisd::~XmlNegativeIntegerLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlNegativeInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlNegativeIntegerLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlNegativeIntegerLisd");
}

void XmlNegativeIntegerLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlNegativeIntegerLisd::OPRINTSELFDECL
{
  std::list<XmlNegativeInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlNMTOKEN

This is a class for handling XML basic type NMTOKEN.

The constructor that takes an argument checks that valIn a valid NMTOKEN.
If so, val is set to valIn and bad is set to false.
If not, val is set to the empty string and bad is set to true.

On reading, a valid NMTOKEN may have leading and/or trailing white
space characters, but otherwise, it must be a member of [a-zA-Z0-9:_.-]+.

This is removing leading and trailing white space since the whitespace
value of NMTOKEN is collapse.

*/

XmlNMTOKEN::XmlNMTOKEN()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlNMTOKEN::XmlNMTOKEN(
  const char * valIn)
{
  int n;
  int start;
  int end;
  static char buffer[NAMESIZE];

  if (strlen(valIn) > NAMESIZE)
    {
      snprintf(buffer, NAMESIZE, "NMTOKEN is too long: %s", valIn);
      throw(SchemaInstanceError(buffer));
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (n=0; isspace(buffer[n]); n++);
  start = n;
  if ((buffer[n] != ':') &&
      (buffer[n] != '_') &&
      (buffer[n] != '.') &&
      (buffer[n] != '-') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')) &&
      ((buffer[n] < '0') || (buffer[n] > '9')))
    { // first non-white-space character is not allowed
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid NMTOKEN\n", valIn);
      return;
    }
  for (n++; ((buffer[n] == ':') ||
	     (buffer[n] == '_') ||
	     (buffer[n] == '.') ||
	     (buffer[n] == '-') ||
	     ((buffer[n] >= 'a') && (buffer[n] <= 'z')) ||
	     ((buffer[n] >= 'A') && (buffer[n] <= 'Z')) ||
	     ((buffer[n] >= '0') && (buffer[n] <= '9'))); n++);
  end = n;
  for ( ; isspace(buffer[n]); n++);
  if (buffer[n])
    { // buffer[n] should be 0 but isn't
      PROT(val) = "";
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid NMTOKEN\n", valIn);
      return;
    }
  buffer[end] = 0;
  PROT(val) = (buffer + start); // automatic write to std::string
  PROT(bad) = false;
}

XmlNMTOKEN::XmlNMTOKEN(
    const XmlNMTOKEN * nmTokenIn)
{
  PROT(val) = nmTokenIn->PROT(val);
  PROT(bad) = nmTokenIn->PROT(bad);
}

XmlNMTOKEN::~XmlNMTOKEN() {}

bool XmlNMTOKEN::XmlNMTOKENIsBad()
{
  int n;
  
  if (PROT(bad))
    return true;
  for (n=0; ((PROT(val)[n] == ':') ||
	     (PROT(val)[n] == '_') ||
	     (PROT(val)[n] == '.') ||
	     (PROT(val)[n] == '-') ||
	     ((PROT(val)[n] >= 'a') && (PROT(val)[n] <= 'z')) ||
	     ((PROT(val)[n] >= 'A') && (PROT(val)[n] <= 'Z')) ||
	     ((PROT(val)[n] >= '0') && (PROT(val)[n] <= '9'))); n++);
  if ((n == 0) || PROT(val)[n])
    return true;
  return false;
}

void XmlNMTOKEN::PRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlNMTOKENIsBad())
    {
      snprintf(mess, NAMESIZE, "NMTOKEN value %s is bad\n",
	       PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlNMTOKEN::OPRINTSELFDECL
{
  char mess[NAMESIZE];
  if (XmlNMTOKENIsBad())
    {
      snprintf(mess, NAMESIZE, "NMTOKEN value %s is bad\n",
	       PROT(val).c_str());
      throw(SchemaInstanceError(mess));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlNMTOKEN::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlNMTOKEN::GET(val)()
  {return PROT(val);}

  void XmlNMTOKEN::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlNMTOKENLisd

*/

XmlNMTOKENLisd::XmlNMTOKENLisd() {}

XmlNMTOKENLisd::XmlNMTOKENLisd(
  XmlNMTOKEN * nmtokenIn)
{
  push_back(nmtokenIn);
}

XmlNMTOKENLisd::XmlNMTOKENLisd(
  const XmlNMTOKENLisd * nmtokenLisdIn)
{
  std::list<XmlNMTOKEN *>::const_iterator iter;
  for (iter = nmtokenLisdIn->begin(); iter != nmtokenLisdIn->end(); iter++)
    {
      push_back(new XmlNMTOKEN(*iter));
    }
}

XmlNMTOKENLisd::XmlNMTOKENLisd(
 const char * valueString)
{
  XmlNMTOKEN * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid NMTOKEN list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlNMTOKEN(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid NMTOKEN list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlNMTOKENLisd::~XmlNMTOKENLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlNMTOKEN *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlNMTOKENLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlNMTOKENLisd");
}

void XmlNMTOKENLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlNMTOKENLisd::OPRINTSELFDECL
{
  std::list<XmlNMTOKEN *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlNonNegativeInteger

This is a class for handling XML basic type nonNegativeInteger.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more  white space characters

If that checks, it is checked that sscanf can read the number.
If that checks, it is checked that the value is not negative.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlNonNegativeInteger::XmlNonNegativeInteger()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlNonNegativeInteger::XmlNonNegativeInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '-')
    { // first non-space is a minus sign - not allowed
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  if (valIn[n] == '+')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-plus-sign character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &PROT(val)) == 1)
    {
      if (PROT(val) > -1)
	PROT(bad) = false;
      else
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
    }
}

XmlNonNegativeInteger::XmlNonNegativeInteger(
  const XmlNonNegativeInteger * nonNegIn)
{
  PROT(val) = nonNegIn->PROT(val);
  PROT(bad) = nonNegIn->PROT(bad);
}

XmlNonNegativeInteger::~XmlNonNegativeInteger() {}

bool XmlNonNegativeInteger::XmlNonNegativeIntegerIsBad()
{
  if (PROT(bad))
    return true;
  else if (PROT(val) < 0)
    return true;
  else
    return false;
}

void XmlNonNegativeInteger::PRINTSELFDECL
{
  if (XmlNonNegativeIntegerIsBad())
    {
      throw(SchemaInstanceError("nonNegativeInteger value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlNonNegativeInteger::OPRINTSELFDECL
{
  if (XmlNonNegativeIntegerIsBad())
    {
      throw(SchemaInstanceError("nonNegativeInteger value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlNonNegativeInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlNonNegativeInteger::GET(val)()
  {return PROT(val);}

  void XmlNonNegativeInteger::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlNonNegativeIntegerLisd

*/

XmlNonNegativeIntegerLisd::XmlNonNegativeIntegerLisd() {}

XmlNonNegativeIntegerLisd::XmlNonNegativeIntegerLisd(
  XmlNonNegativeInteger * nonNegativeIntegerIn)
{
  push_back(nonNegativeIntegerIn);
}

XmlNonNegativeIntegerLisd::XmlNonNegativeIntegerLisd(
  const XmlNonNegativeIntegerLisd * nonNegIntLisdIn)
{
  std::list<XmlNonNegativeInteger *>::const_iterator iter;
  for (iter = nonNegIntLisdIn->begin(); iter != nonNegIntLisdIn->end(); iter++)
    {
      push_back(new XmlNonNegativeInteger(*iter));
    }
}

XmlNonNegativeIntegerLisd::XmlNonNegativeIntegerLisd(
 const char * valueString)
{
  XmlNonNegativeInteger * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid nonNegativeInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlNonNegativeInteger(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid nonNegativeInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlNonNegativeIntegerLisd::~XmlNonNegativeIntegerLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlNonNegativeInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlNonNegativeIntegerLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlNonNegativeIntegerLisd");
}

void XmlNonNegativeIntegerLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlNonNegativeIntegerLisd::OPRINTSELFDECL
{
  std::list<XmlNonNegativeInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlNonPositiveInteger

This is a class for handling XML basic type nonPositiveInteger.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional minus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more  white space characters

If that checks, it is checked that sscanf can read the number.
If that checks, it is checked that the value is not positive.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlNonPositiveInteger::XmlNonPositiveInteger()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlNonPositiveInteger::XmlNonPositiveInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '+')
    { // first non-white-space character is a plus sign - not allowed
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  if (valIn[n] == '-')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-minus-sign character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &PROT(val)) == 1)
    {
      if (PROT(val) < 1)
	PROT(bad) = false;
      else
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
    }
}

XmlNonPositiveInteger::XmlNonPositiveInteger(
  const XmlNonPositiveInteger * nonPosIntIn)
{
  PROT(val) = nonPosIntIn->PROT(val);
  PROT(bad) = nonPosIntIn->PROT(bad);
}

XmlNonPositiveInteger::~XmlNonPositiveInteger() {}

bool XmlNonPositiveInteger::XmlNonPositiveIntegerIsBad()
{
  if (PROT(bad))
    return true;
  else if (PROT(val) > 0)
    return true;
  else
    return false;
}

void XmlNonPositiveInteger::PRINTSELFDECL
{
  if (XmlNonPositiveIntegerIsBad())
    {
      throw(SchemaInstanceError("nonPositiveInteger value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlNonPositiveInteger::OPRINTSELFDECL
{
  if (XmlNonPositiveIntegerIsBad())
    {
      throw(SchemaInstanceError("nonPositiveInteger value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlNonPositiveInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlNonPositiveInteger::GET(val)()
  {return PROT(val);}

  void XmlNonPositiveInteger::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlNonPositiveIntegerLisd

*/

XmlNonPositiveIntegerLisd::XmlNonPositiveIntegerLisd() {}

XmlNonPositiveIntegerLisd::XmlNonPositiveIntegerLisd(
  XmlNonPositiveInteger * nonPositiveIntegerIn)
{
  push_back(nonPositiveIntegerIn);
}

XmlNonPositiveIntegerLisd::XmlNonPositiveIntegerLisd(
  const XmlNonPositiveIntegerLisd * nonPosIntLisdIn)
{
  std::list<XmlNonPositiveInteger *>::const_iterator iter;
  for (iter = nonPosIntLisdIn->begin(); iter != nonPosIntLisdIn->end(); iter++)
    {
      push_back(new XmlNonPositiveInteger(*iter));
    }
}

XmlNonPositiveIntegerLisd::XmlNonPositiveIntegerLisd(
 const char * valueString)
{
  XmlNonPositiveInteger * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid nonPositiveInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlNonPositiveInteger(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid nonPositiveInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlNonPositiveIntegerLisd::~XmlNonPositiveIntegerLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlNonPositiveInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlNonPositiveIntegerLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlNonPositiveIntegerLisd");
}

void XmlNonPositiveIntegerLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlNonPositiveIntegerLisd::OPRINTSELFDECL
{
  std::list<XmlNonPositiveInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlOPrintTypeBase

*/

XmlOPrintTypeBase::XmlOPrintTypeBase() {}

XmlOPrintTypeBase::~XmlOPrintTypeBase() {}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  bool XmlOPrintTypeBase::GET(bad)()
  {return PROT(bad);}

  void XmlOPrintTypeBase::SET(bad)(bool badIn)
  {PROT(bad) = badIn;}
#endif


/*********************************************************************/

/* class XmlPositiveInteger

This is a class for handling XML basic type positiveInteger.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus sign followed by
3. a sequence of one or more digits followed by
4. a sequence of zero or more white space characters

If that checks, it is checked that sscanf can read the number.
If that checks, it is checked that the value is positive.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlPositiveInteger::XmlPositiveInteger()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlPositiveInteger::XmlPositiveInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '-')
    { // first non-white-space character is a minus sign - not allowed
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  if (valIn[n] == '+')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &PROT(val)) == 1)
    {
      if (PROT(val) > 0)
	PROT(bad) = false;
      else
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
    }
}

XmlPositiveInteger::XmlPositiveInteger(
  const XmlPositiveInteger * xmlPosIntIn)
{
  PROT(val) = xmlPosIntIn->PROT(val);
  PROT(bad) = xmlPosIntIn->PROT(bad);
}

XmlPositiveInteger::~XmlPositiveInteger() {}

bool XmlPositiveInteger::XmlPositiveIntegerIsBad()
{
  if (PROT(bad))
    return true;
  else if (PROT(val) < 1)
    return true;
  else
    return false;
}

void XmlPositiveInteger::PRINTSELFDECL
{
  if (XmlPositiveIntegerIsBad())
    {
      throw(SchemaInstanceError("positiveInteger value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlPositiveInteger::OPRINTSELFDECL
{
  if (XmlPositiveIntegerIsBad())
    {
      throw(SchemaInstanceError("positiveInteger value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlPositiveInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  int XmlPositiveInteger::GET(val)()
  {return PROT(val);}

  void XmlPositiveInteger::SET(val)(int valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlPositiveIntegerLisd

*/

XmlPositiveIntegerLisd::XmlPositiveIntegerLisd() {}

XmlPositiveIntegerLisd::XmlPositiveIntegerLisd(
  XmlPositiveInteger * positiveIntegerIn)
{
  push_back(positiveIntegerIn);
}

XmlPositiveIntegerLisd::XmlPositiveIntegerLisd(
  const XmlPositiveIntegerLisd * positiveIntegerLisdIn)
{
  *this = *positiveIntegerLisdIn;
}

XmlPositiveIntegerLisd::XmlPositiveIntegerLisd(
 const char * valueString)
{
  XmlPositiveInteger * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid positiveInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlPositiveInteger(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid negativeInteger list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlPositiveIntegerLisd::~XmlPositiveIntegerLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlPositiveInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlPositiveIntegerLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlPositiveIntegerLisd");
}

void XmlPositiveIntegerLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlPositiveIntegerLisd::OPRINTSELFDECL
{
  std::list<XmlPositiveInteger *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlSchemaInstanceBase

*/

XmlSchemaInstanceBase::XmlSchemaInstanceBase() {}

XmlSchemaInstanceBase::~XmlSchemaInstanceBase() {}

void XmlSchemaInstanceBase::doSpaces(int change, FILE * outFile)
{
  static int spaces = 0;
  static int n;

  if (change)
    spaces += change;
  else
    {
      for (n = 0; n < spaces; n++)
        fputc(' ', outFile);
    }
}

/*********************************************************************/

/* class XmlShort

This is a class for handling XML basic type short, which has a value
range of -32768 to 32767. A C++ short is used to represent the value.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. an optional plus or minus sign followed by
3. a sequence of one to 6 digits followed by
4. a sequence of zero or more white space characters

If that checks, it is checked that sscanf can read the number.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlShort::XmlShort()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlShort::XmlShort(
  const char * valIn)
{
  int n;
  int start;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] == '+') || (valIn[n] == '-'))
    n++;
  start = n;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 6)
    { // too many digits
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%hd", &PROT(val)) == 1)
    {
      if ((PROT(val) < -32768) || (PROT(val) > 32767))
	{ // val is out of allowed range
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid short\n", valIn);
	  return;
	}
      else
	PROT(bad) = false;
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
    }
}

XmlShort::XmlShort(
  const XmlShort * shortIn)
{
  PROT(val) = shortIn->PROT(val);
  PROT(bad) = shortIn->PROT(bad);
}

XmlShort::~XmlShort() {}

bool XmlShort::XmlShortIsBad()
{
  return PROT(bad);
}

void XmlShort::PRINTSELFDECL
{
  if (XmlShortIsBad())
    {
      throw(SchemaInstanceError("short value is bad"));
    }
  XFPRINTF ">%d", PROT(val));
}

void XmlShort::OPRINTSELFDECL
{
  if (XmlShortIsBad())
    {
      throw(SchemaInstanceError("short value is bad"));
    }
  XFPRINTF "%d", PROT(val));
}

void XmlShort::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  short XmlShort::GET(val)()
  {return PROT(val);}

  void XmlShort::SET(val)(short valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlShortLisd

*/

XmlShortLisd::XmlShortLisd() {}

XmlShortLisd::XmlShortLisd(
  XmlShort * shortIn)
{
  push_back(shortIn);
}

XmlShortLisd::XmlShortLisd(
  const XmlShortLisd * shortLisdIn)
{
  std::list<XmlShort *>::const_iterator iter;
  for (iter = shortLisdIn->begin(); iter != shortLisdIn->end(); iter++)
    {
      push_back(new XmlShort(*iter));
    }
}

XmlShortLisd::XmlShortLisd(
 const char * valueString)
{
  XmlShort * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid short list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlShort(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid short list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlShortLisd::~XmlShortLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlShort *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlShortLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlShortLisd");
}

void XmlShortLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlShortLisd::OPRINTSELFDECL
{
  std::list<XmlShort *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/
/* class XmlString

This is a class for handling XML basic type string. 

*/

XmlString::XmlString()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlString::XmlString(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlString::XmlString(
  const XmlString * stringIn)
{
  PROT(val) = stringIn->PROT(val);
  PROT(bad) = stringIn->PROT(bad);
}

XmlString::~XmlString() {}

bool XmlString::XmlStringIsBad()
{
  return PROT(bad);
}

void XmlString::PRINTSELFDECL
{
  if (XmlStringIsBad())
    {
      throw(SchemaInstanceError("string value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlString::OPRINTSELFDECL
{
  if (XmlStringIsBad())
    {
      throw(SchemaInstanceError("string value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlString::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlString::GET(val)()
  {return PROT(val);}

  void XmlString::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlStringLisd

It is not a good idea to use this since whitespace is allowed inside
an instance of string.

*/

XmlStringLisd::XmlStringLisd() {}

XmlStringLisd::XmlStringLisd(
  XmlString * stringIn)
{
  push_back(stringIn);
}

XmlStringLisd::XmlStringLisd(
  const XmlStringLisd * stringLisdIn)
{
  std::list<XmlString *>::const_iterator iter;
  for (iter = stringLisdIn->begin(); iter != stringLisdIn->end(); iter++)
    {
      push_back(new XmlString(*iter));
    }
}

XmlStringLisd::~XmlStringLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlString *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlStringLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlStringLisd");
}
 
void XmlStringLisd::PRINTSELFDECL
{
  // This does nothing because it should not be used.
}

void XmlStringLisd::OPRINTSELFDECL
{
  // This does nothing because it should not be used.
}

/*********************************************************************/

/* class XmlTime

This is a class for handling XML basic type time. This is currently
not checking the requirements for a time and is allowing any string.

*/

XmlTime::XmlTime()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlTime::XmlTime(
  const char * valIn)
{
  PROT(val) = valIn; // automatic write to std::string
  PROT(bad) = false;
}

XmlTime::XmlTime(
  const XmlTime * timeIn)
{
  PROT(val) = timeIn->PROT(val);
  PROT(bad) = timeIn->PROT(bad);
}

XmlTime::~XmlTime() {}

bool XmlTime::XmlTimeIsBad()
{
  return PROT(bad);
}

void XmlTime::PRINTSELFDECL
{
  if (XmlTimeIsBad())
    {
      throw(SchemaInstanceError("time value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlTime::OPRINTSELFDECL
{
  if (XmlTimeIsBad())
    {
      throw(SchemaInstanceError("time value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlTime::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlTime::GET(val)()
  {return PROT(val);}

  void XmlTime::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlTimeLisd

*/

XmlTimeLisd::XmlTimeLisd() {}

XmlTimeLisd::XmlTimeLisd(
  XmlTime * TimeIn)
{
  push_back(TimeIn);
}

XmlTimeLisd::XmlTimeLisd(
  const XmlTimeLisd * timeLisdIn)
{
  std::list<XmlTime *>::const_iterator iter;
  for (iter = timeLisdIn->begin(); iter != timeLisdIn->end(); iter++)
    {
      push_back(new XmlTime(*iter));
    }
}

XmlTimeLisd::XmlTimeLisd(
 const char * valueString)
{
  XmlTime * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid time list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlTime(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid time list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlTimeLisd::~XmlTimeLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlTime *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlTimeLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlTimeLisd");
}

void XmlTimeLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlTimeLisd::OPRINTSELFDECL
{
  std::list<XmlTime *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlToken

This is a class for handling XML basic type token.

In the constructor that takes a char array, white space at the front
and back of the char array is removed if there is any, and substrings
of white space inside the char array are replaced by a single space.
It is OK if the valIn in the constructor is an empty string.

*/

XmlToken::XmlToken()
{
  PROT(val) = "";
  PROT(bad) = true;
}

XmlToken::XmlToken(
  const char * valIn)
{
  char * buffer;
  int n;
  int m;

  buffer = new char[strlen(valIn) + 1];
  strcpy(buffer, valIn);
  for (n = 0; ((buffer[n] == 9)  || (buffer[n] == 10) ||
	       (buffer[n] == 13) || (buffer[n] == 32)); n++);
  for (m = 0; buffer[n]; n++)
    {
      if ((buffer[n] == 9)  || (buffer[n] == 10) ||
	  (buffer[n] == 13) || (buffer[n] == 32))
	{
	  buffer[m++] = 32;
	  for (n++; ((buffer[n] == 9)  || (buffer[n] == 10) ||
		     (buffer[n] == 13) || (buffer[n] == 32)); n++);
	  n--;
	}
      else
	{
	  buffer[m++] = buffer[n];
	}
    }
  buffer[m] = 0;
  if ((m > 0) && (buffer[m-1] == 32))
    (buffer[m-1] = 0);
  PROT(val) = buffer; // automatic write to std::string
  PROT(bad) = false;
  delete [] buffer;
}

XmlToken::XmlToken(
  const XmlToken * tokenIn)
{
  PROT(val) = tokenIn->PROT(val);
  PROT(bad) = tokenIn->PROT(bad);
}

XmlToken::~XmlToken() {}

bool XmlToken::XmlTokenIsBad()
{
  return PROT(bad);
}

void XmlToken::PRINTSELFDECL
{
  if (XmlTokenIsBad())
    {
      throw(SchemaInstanceError("token value is bad"));
    }
  XFPRINTF ">%s", PROT(val).c_str());
}

void XmlToken::OPRINTSELFDECL
{
  if (XmlTokenIsBad())
    {
      throw(SchemaInstanceError("token value is bad"));
    }
  XFPRINTF "%s", PROT(val).c_str());
}

void XmlToken::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", PROT(val).c_str());
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  std::string XmlToken::GET(val)()
  {return PROT(val);}

  void XmlToken::SET(val)(std::string valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlTokenLisd

*/

XmlTokenLisd::XmlTokenLisd() {}

XmlTokenLisd::XmlTokenLisd(
  XmlToken * tokenIn)
{
  push_back(tokenIn);
}

XmlTokenLisd::XmlTokenLisd(
  const XmlTokenLisd * tokenLisdIn)
{
  std::list<XmlToken *>::const_iterator iter;
  for (iter = tokenLisdIn->begin(); iter != tokenLisdIn->end(); iter++)
    {
      push_back(new XmlToken(*iter));
    }
}

XmlTokenLisd::XmlTokenLisd(
 const char * valueString)
{
  XmlToken * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid token list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlToken(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid token list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlTokenLisd::~XmlTokenLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlToken *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlTokenLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlTokenLisd");
}

void XmlTokenLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlTokenLisd::OPRINTSELFDECL
{
  std::list<XmlToken *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlTypeBase

*/

XmlTypeBase::XmlTypeBase()
{
  PROT(printElement) = 0;
#ifdef USEXSITYPE
  PROT(printTypp) = 0;
#endif
}

XmlTypeBase::~XmlTypeBase()
{
  if (PROT(printElement))
    {
      free(PROT(printElement));
    }
#ifdef USEXSITYPE
  if (PROT(printTypp))
    {
      free(PROT(printTypp));
    }
#endif
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
char * XmlTypeBase::GET(printElement)()
{return PROT(printElement);}

void XmlTypeBase::SET(printElement)(const char * printElementIn)
{PROT(printElement) = strdup(printElementIn);}
#endif

#ifdef USEXSITYPE 
char * GET(printTypp)()
{return PROT(printType);}

void SET(printTypp)(const char * printTyppIn);
{PROT(printType) = strdup(printTypeIn);}
#endif

/*********************************************************************/

/* class XmlUnsignedByte

This is a class for handling XML basic type unsignedByte.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. a sequence of one to four digits followed by
3. a sequence of zero or more white space characters

It is checked that sscanf can read the number into an unsigned int.
It is checked that the unsigned int is in range for an unsigned byte.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

An XML unsignedByte is represented by a C++ unsigned char. Both are
representable with 8 bits and are in the range 0-255.

This constructor that takes a string reads the number in as an
unsigned int, checks that the unsigned int is less than 256, and then
sets the value by casting the unsigned int to an unsigned byte.

*/

XmlUnsignedByte::XmlUnsignedByte()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlUnsignedByte::XmlUnsignedByte(
  const char * valIn)
{
  int n;
  int start;
  unsigned int intVal;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space character is not a digit
      PROT(val) = 0;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      SET(bad)(true);
#else
      bad = true;
#endif
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 4)
    { // too many digits
      PROT(val) = 0;
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      SET(bad)(true);
#else
      bad = true;
#endif
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%u", &intVal) == 1)
    {
      if (intVal > 255)
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
	}
      else
	{
	  PROT(val) = (unsigned char)intVal;
	  PROT(bad) = false;
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
    }
}

XmlUnsignedByte::XmlUnsignedByte(
  const XmlUnsignedByte * unsignedByteIn)
{
  PROT(val) = unsignedByteIn->PROT(val);
  PROT(bad) = unsignedByteIn->PROT(bad);
}

XmlUnsignedByte::~XmlUnsignedByte() {}

bool XmlUnsignedByte::XmlUnsignedByteIsBad()
{
  return PROT(bad);
}

void XmlUnsignedByte::PRINTSELFDECL
{
  if (XmlUnsignedByteIsBad())
    {
      throw(SchemaInstanceError("unsignedByte value is bad"));
    }
  XFPRINTF ">%u", (unsigned int)PROT(val));
}

void XmlUnsignedByte::OPRINTSELFDECL
{
  if (XmlUnsignedByteIsBad())
    {
      throw(SchemaInstanceError("unsignedByte value is bad"));
    }
  XFPRINTF "%u", (unsigned int)PROT(val));
}

void XmlUnsignedByte::printBad(FILE * badFile)
{
  fprintf(badFile, "%u", (unsigned int)PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned char XmlUnsignedByte::GET(val)()
  {return PROT(val);}

  void XmlUnsignedByte::SET(val)(unsigned char valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlUnsignedByteLisd

*/

XmlUnsignedByteLisd::XmlUnsignedByteLisd() {}

XmlUnsignedByteLisd::XmlUnsignedByteLisd(
  XmlUnsignedByte * unsignedByteIn)
{
  push_back(unsignedByteIn);
}

XmlUnsignedByteLisd::XmlUnsignedByteLisd(
  const XmlUnsignedByteLisd * unsignedByteLisdIn)
{
  std::list<XmlUnsignedByte *>::const_iterator iter;
  for (iter = unsignedByteLisdIn->begin();
       iter != unsignedByteLisdIn->end(); iter++)
    {
      push_back(new XmlUnsignedByte(*iter));
    }
}

XmlUnsignedByteLisd::XmlUnsignedByteLisd(
 const char * valueString)
{
  XmlUnsignedByte * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid unsignedByte list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlUnsignedByte(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedByte list\n", valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlUnsignedByteLisd::~XmlUnsignedByteLisd()
{
#ifndef NODESTRUCT
  std::list<XmlUnsignedByte *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
#endif
}

void XmlUnsignedByteLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlUnsignedByteLisd");
}

void XmlUnsignedByteLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlUnsignedByteLisd::OPRINTSELFDECL
{
  std::list<XmlUnsignedByte *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlUnsignedInt

This is a class for handling XML basic type unsignedInt.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. a sequence of one to 11 digits followed by
3. a sequence of zero or more white space characters

It is checked that sscanf read the number into a long unsigned int.
It is checked that the long unsigned int is in range for an unsigned int.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlUnsignedInt::XmlUnsignedInt()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlUnsignedInt::XmlUnsignedInt(
  const char * valIn)
{
  int n;
  int start;
  unsigned long longVal;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 11)
    { // too many digits
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%lu", &longVal) == 1)
    {
      if (longVal > 4294967295)
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
	}
      else
	{
	  PROT(val) = (unsigned int)longVal;
	  PROT(bad) = false;
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
    }
}

XmlUnsignedInt::XmlUnsignedInt(
  const XmlUnsignedInt * unsignedIntIn)
{
  PROT(val) = unsignedIntIn->PROT(val);
  PROT(bad) = unsignedIntIn->PROT(bad);
}

XmlUnsignedInt::~XmlUnsignedInt() {}

bool XmlUnsignedInt::XmlUnsignedIntIsBad()
{
  return PROT(bad);
}

void XmlUnsignedInt::PRINTSELFDECL
{
  if (XmlUnsignedIntIsBad())
    {
      throw(SchemaInstanceError("unsignedInt value is bad"));
    }
  XFPRINTF ">%u", PROT(val));
}

void XmlUnsignedInt::OPRINTSELFDECL
{
  if (XmlUnsignedIntIsBad())
    {
      throw(SchemaInstanceError("unsignedInt value is bad"));
    }
  XFPRINTF "%u", PROT(val));
}

void XmlUnsignedInt::printBad(FILE * badFile)
{
  fprintf(badFile, "%u", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
unsigned int  XmlUnsignedInt::GET(val)()
{return PROT(val);}

void XmlUnsignedInt::SET(val)(unsigned int valIn)
{PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlUnsignedIntLisd

*/

XmlUnsignedIntLisd::XmlUnsignedIntLisd() {}

XmlUnsignedIntLisd::XmlUnsignedIntLisd(
  XmlUnsignedInt * unsignedIntIn)
{
  push_back(unsignedIntIn);
}

XmlUnsignedIntLisd::XmlUnsignedIntLisd(
  const XmlUnsignedIntLisd * unsignedIntLisdIn)
{
  std::list<XmlUnsignedInt *>::const_iterator iter;
  for (iter = unsignedIntLisdIn->begin();
       iter != unsignedIntLisdIn->end(); iter++)
    {
      push_back(new XmlUnsignedInt(*iter));
    }
}

XmlUnsignedIntLisd::XmlUnsignedIntLisd(
 const char * valueString)
{
  XmlUnsignedInt * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  SET(bad)(false);
#else
  bad = false;
#endif
  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid unsignedInt list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlUnsignedInt(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedInt list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlUnsignedIntLisd::~XmlUnsignedIntLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlUnsignedInt *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlUnsignedIntLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlUnsignedIntLisd");
}

void XmlUnsignedIntLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlUnsignedIntLisd::OPRINTSELFDECL
{
  std::list<XmlUnsignedInt *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlUnsignedLong

This is a class for handling XML basic type unsignedLong.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. a sequence of one or more digits followed by
3. a sequence of zero or more white space characters

If that checks, sscanf is called to read the number.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlUnsignedLong::XmlUnsignedLong()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlUnsignedLong::XmlUnsignedLong(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &PROT(val)) == 1)
    {
      PROT(bad) = false;
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
    }
}

XmlUnsignedLong::XmlUnsignedLong(
  const XmlUnsignedLong * unsignedLongIn)
{
  PROT(val) = unsignedLongIn->PROT(val);
  PROT(bad) = unsignedLongIn->PROT(bad);
}

XmlUnsignedLong::~XmlUnsignedLong() {}

bool XmlUnsignedLong::XmlUnsignedLongIsBad()
{
  return PROT(bad);
}

void XmlUnsignedLong::PRINTSELFDECL
{
  if (XmlUnsignedLongIsBad())
    {
      throw(SchemaInstanceError("unsignedLong value is bad"));
    }
  XFPRINTF ">%lu", PROT(val));
}

void XmlUnsignedLong::OPRINTSELFDECL
{
  if (XmlUnsignedLongIsBad())
    {
      throw(SchemaInstanceError("unsignedLong value is bad"));
    }
  XFPRINTF "%lu", PROT(val));
}

void XmlUnsignedLong::printBad(FILE * badFile)
{
  fprintf(badFile, "%lu", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned long XmlUnsignedLong::GET(val)()
  {return PROT(val);}

  void XmlUnsignedLong::SET(val)(unsigned long valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlUnsignedLongLisd

*/

XmlUnsignedLongLisd::XmlUnsignedLongLisd() {}

XmlUnsignedLongLisd::XmlUnsignedLongLisd(
  XmlUnsignedLong * unsignedLongIn)
{
  push_back(unsignedLongIn);
}

XmlUnsignedLongLisd::XmlUnsignedLongLisd(
  const XmlUnsignedLongLisd * unsignedLongLisdIn)
{
  std::list<XmlUnsignedLong *>::const_iterator iter;
  for (iter = unsignedLongLisdIn->begin();
       iter != unsignedLongLisdIn->end(); iter++)
    {
      push_back(new XmlUnsignedLong(*iter));
    }
}

XmlUnsignedLongLisd::XmlUnsignedLongLisd(
 const char * valueString)
{
  XmlUnsignedLong * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid unsignedLong list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlUnsignedLong(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedLong list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlUnsignedLongLisd::~XmlUnsignedLongLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlUnsignedLong *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlUnsignedLongLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlUnsignedLongLisd");
}

void XmlUnsignedLongLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlUnsignedLongLisd::OPRINTSELFDECL
{
  std::list<XmlUnsignedLong *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlUnsignedShort

This is a class for handling XML basic type unsignedShort.

The constructor that takes an argument checks that valIn consists of
1. a sequence of zero or more white space characters followed by
2. a sequence of one to six digits followed by
3. a sequence of zero or more white space characters

It is checked that sscanf can read the number into an unsigned int.
It is checked that the unsigned int is in range for an unsigned short.
If all checks pass, bad is set to false and val is set to the number read.
If any check fails, bad is set to true and val is set to 0.

*/

XmlUnsignedShort::XmlUnsignedShort()
{
  PROT(val) = 0;
  PROT(bad) = true;
}

XmlUnsignedShort::XmlUnsignedShort(
  const char * valIn)
{
  int n;
  int start;
  unsigned int intVal;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space character is not a digit
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 6)
    { // too many digits
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%u", &intVal) == 1)
    {
      if (intVal > 65535)
	{
	  PROT(val) = 0;
	  PROT(bad) = true;
	  fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
	}
      else
	{
	  PROT(val) = (unsigned short)intVal;
	  PROT(bad) = false;
	}
    }
  else
    {
      PROT(val) = 0;
      PROT(bad) = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
    }
}

XmlUnsignedShort::XmlUnsignedShort(
  const XmlUnsignedShort * unsignedShortIn)
{
  PROT(val) = unsignedShortIn->PROT(val);
  PROT(bad) = unsignedShortIn->PROT(bad);
}

XmlUnsignedShort::~XmlUnsignedShort() {}

bool XmlUnsignedShort::XmlUnsignedShortIsBad()
{
  return PROT(bad);
}

void XmlUnsignedShort::PRINTSELFDECL
{
  if (XmlUnsignedShortIsBad())
    {
      throw(SchemaInstanceError("unsignedShort value is bad"));
    }
  XFPRINTF ">%hu", PROT(val));
}

void XmlUnsignedShort::OPRINTSELFDECL
{
  if (XmlUnsignedShortIsBad())
    {
      throw(SchemaInstanceError("unsignedShort value is bad"));
    }
  XFPRINTF "%hu", PROT(val));
}

void XmlUnsignedShort::printBad(FILE * badFile)
{
  fprintf(badFile, "%hu", PROT(val));
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
  unsigned short XmlUnsignedShort::GET(val)()
  {return PROT(val);}

  void XmlUnsignedShort::SET(val)(unsigned short valIn)
  {PROT(val) = valIn;}
#endif

/*********************************************************************/

/* class XmlUnsignedShortLisd

*/

XmlUnsignedShortLisd::XmlUnsignedShortLisd() {}

XmlUnsignedShortLisd::XmlUnsignedShortLisd(
  XmlUnsignedShort * unsignedShortIn)
{
  push_back(unsignedShortIn);
}

XmlUnsignedShortLisd::XmlUnsignedShortLisd(
  const XmlUnsignedShortLisd * unsignedShortLisdIn)
{
  std::list<XmlUnsignedShort *>::const_iterator iter;
  for (iter = unsignedShortLisdIn->begin();
       iter != unsignedShortLisdIn->end(); iter++)
    {
      push_back(new XmlUnsignedShort(*iter));
    }
}

XmlUnsignedShortLisd::XmlUnsignedShortLisd(
 const char * valueString)
{
  XmlUnsignedShort * valu;
  int n;
  int start;
  char buffer[NAMESIZE];

  for (n = 0; valueString[n]; n++)
    { 
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
	{ //skip leading white space and handle empty or white string
	  if (valueString[n] == 0)
	    break;
	}
      if (valueString[n] == 0)
	    break;
      start = n;
      for (; (valueString[n] != 0) && (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
	{
	  fprintf(stderr, "%s is not a valid unsignedShort list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      valu = new XmlUnsignedShort(buffer);
#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
      if (valu->GET(bad)())
#else
      if (valu->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedShort list\n",
		  valueString);
	  PROT(bad) = true;
	  break;
	}
      else
	push_back(valu);
      if (valueString[n] == 0)
	    break;
    }
}

XmlUnsignedShortLisd::~XmlUnsignedShortLisd()
{
  #ifndef NODESTRUCT
  std::list<XmlUnsignedShort *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void XmlUnsignedShortLisd::PRINTNAMEDECL
{
  XFPRINTF "XmlUnsignedShortLisd");
}

void XmlUnsignedShortLisd::PRINTSELFDECL
{
  XFPRINTF ">");
  OPRINTSELF;
}

void XmlUnsignedShortLisd::OPRINTSELFDECL
{
  std::list<XmlUnsignedShort *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->OPRINTSELF;
      if (*iter != back())
	XFPRINTF " ");
    }
}

/*********************************************************************/

/* class XmlVersion

This allows copying 6 characters from any string into encoding and
standalone, but (1) only prints encoding if it is "UTF-8" or "utf-8"
and (2) only prints standalone if it is "yes" or "no". The value
of standaloneIn in the constructor taking two arguments should not be
the empty string, since that makes valgrind think standalone was never
set.

*/

XmlVersion::XmlVersion()
{
  strncpy(PROT(encoding), "unset", 6);
  strncpy(PROT(standalone), "unset", 6);
}

XmlVersion::XmlVersion(
 const char * encodingIn,
 const char * standaloneIn)
{
  strncpy(PROT(encoding), encodingIn, 6);
  strncpy(PROT(standalone), standaloneIn, 6);
}

XmlVersion::~XmlVersion() {}

void XmlVersion::PRINTSELFDECL
{
  XFPRINTF "<?xml version=\"1.0\"");
  if ((strncmp(PROT(encoding), "UTF-8", 6) == 0) ||
      (strncmp(PROT(encoding), "utf-8", 6) == 0))
    {
      XFPRINTF " encoding=\"%s\"", PROT(encoding));
    }
  if ((strncmp(PROT(standalone), "no", 5) == 0) ||
      (strncmp(PROT(standalone), "yes", 5) == 0))
    {
      XFPRINTF " standalone=\"%s\"", PROT(standalone));
    }
   XFPRINTF "?>\n");
}

#if defined(ACCESSGETSET) || defined(ACCESSOVERLOAD)
char * XmlVersion::GET(encoding)()
{return PROT(encoding);}

void XmlVersion::SET(encoding)(char * encodingIn)
{
  strncpy(PROT(encoding), encodingIn, 9);
  PROT(encoding)[9] = 0;
}

char * XmlVersion::GET(standalone)()
{return PROT(standalone);}

void XmlVersion::SET(standalone)(char * standaloneIn)
{
  strncpy(PROT(standalone), standaloneIn, 9);
  PROT(standalone)[9] = 0;
}

#endif

/*********************************************************************/

