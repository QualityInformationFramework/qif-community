/*
Copyright: Thomas R. Kramer 2020Feb12
License: Boost Software License - Version 1.0 - August 17th, 2003
*/
/*********************************************************************/

#include <stdio.h>              // for fprintf, etc.
#include <stdlib.h>             // for exit
#include <string.h>             // for strcmp
#include "xmlSchemaInstance.hh"

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
value is true (meaning the data is bad), an error message is printed
to stderr, and this exits.

It might be a good idea to have a global "exit" flag that is checked
by the printSelf functions. If the exit flag is set to true, printSelf
will behave as described above. If the exit flag is set to false, the
printSelf will not print anything to the outFile, will print a warning
message to stderr, and will not exit.

The constructors here that take a char * argument read the argument.
It is up to the caller to check that the argument is not 0. The
argument may be the empty string (a pointer to 0), however.

If the argument is valid for the data type, val is set to the value
that is read, and bad is set to false. If the argument is not valid,
bad is set to true and a warning message is printed. The constructor
does not exit if there is an error. It is up to the caller of the
constructor to check the value of bad and decide what to do if bad
is true.

The XXXIsBad functions are necessary even though bad is public and
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
  name = nameIn; // automatic write to std::string
  val = valIn;   // automatic write to std::string
}

AttributePair::~AttributePair() {}

void AttributePair::PRINTSELFDECL
{

}

#ifdef ACCESS
  std::string AttributePair::getname()
  {return name;}

  void AttributePair::setname(std::string nameIn)
  {name = nameIn;}

  std::string AttributePair::getval()
  {return val;}

  void AttributePair::setval(std::string valIn)
  {val = valIn;}
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
  prefix = prefixIn;     // automatic write to std::string
  location = locationIn; // automatic write to std::string
  hasNamespace = hasNamespaceIn;
}

SchemaLocation::~SchemaLocation() {}

void SchemaLocation::PRINTSELFDECL
{
  if (hasNamespace)
    {
      XFPRINTF "  %s:schemaLocation=\n", prefix.c_str());
    }
  else
    {
      XFPRINTF "  %s:noNamespaceSchemaLocation=\n", prefix.c_str());
    }
  XFPRINTF "    \"%s\"", location.c_str());
}

#ifdef ACCESS
  std::string SchemaLocation::getprefix()
  {return prefix;}

  void SchemaLocation::setprefix(std::string prefixIn)
  {prefix = prefixIn;}
  
  std::string SchemaLocation::getlocation()
  {return location;}

  void SchemaLocation::setlocation(std::string locationIn)
  {location = locationIn;}

  bool SchemaLocation::gethasNamespace()
  {return hasNamespace;}

  void SchemaLocation::sethasNamespace(bool hasNamespaceIn)
  {hasNamespace = hasNamespaceIn;}
#endif


/*********************************************************************/

/* class XmlAnyURI

This is a class for handling XML basic type anyURI. 

*/

XmlAnyURI::XmlAnyURI()
{
  val = "";
  bad = true;
}

XmlAnyURI::XmlAnyURI(
  const char * valIn)
{
  val = valIn; // automatic write to std::string
  bad = false;
}

XmlAnyURI::~XmlAnyURI() {}

bool XmlAnyURI::XmlAnyURIIsBad()
{
  return bad;
}

void XmlAnyURI::PRINTSELFDECL
{
  if (XmlAnyURIIsBad())
    {
      fprintf(stderr, "anyURI value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlAnyURI::OPRINTSELFDECL
{
  if (XmlAnyURIIsBad())
    {
      fprintf(stderr, "anyURI value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlAnyURI::getval()
  {return val;}

  void XmlAnyURI::setval(std::string valIn)
  {val = valIn;}

  bool XmlAnyURI::getbad()
  {return bad;}

  void XmlAnyURI::setbad(bool badIn)
  {bad = badIn;}
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
  val = "!";
  bad = true;
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
      val = "!";
      bad = true;
    }
  else
    {
      val = valIn;
      bad = false;
    }
}

XmlBase64Binary::~XmlBase64Binary() {}

bool XmlBase64Binary::XmlBase64BinaryIsBad()
{
  char c;
  size_t n;
  int count;
  
  count = 0;
  if (val.length() == 0)
    { // empty string is legal
      bad = false;
      return false;
    }
  for (n = 0; n < val.length(); n++)
    {
      c = val[n];
      if (isalnum(c) || (c == '+') || (c == '/') || (c == '='))
        count++;
      else if (isspace(c));
      else
	break;
    }
  if ((n != val.length()) || (count % 4))
    {
      bad = true;
      return true;
    }
  else
    {
      bad = false;
      return false;
    }
}

void XmlBase64Binary::PRINTSELFDECL
{
  if (XmlBase64BinaryIsBad())
    {
      fprintf(stderr, "base64Binary value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlBase64Binary::OPRINTSELFDECL
{
  if (XmlBase64BinaryIsBad())
    {
      fprintf(stderr, "base64Binary value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlBase64Binary::getval()
  {return val;}

  void XmlBase64Binary::setval(std::string valIn)
  {val = valIn;}
#endif

/*********************************************************************/

/* class XmlBase64BinaryLisd

It is not a good idea to use this since whitespace is allowed inside
an instance of base64Binary.

*/

XmlBase64BinaryLisd::XmlBase64BinaryLisd() {}

XmlBase64BinaryLisd::XmlBase64BinaryLisd(
  XmlBase64Binary * base64BinaryIn)
{
  push_back(base64BinaryIn);
}

XmlBase64BinaryLisd::XmlBase64BinaryLisd(
  XmlBase64BinaryLisd * base64BinaryLisdIn)
{
  *this = *base64BinaryLisdIn;
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
  fprintf(badFile, "%s", val.c_str());
}

/*********************************************************************/

/* class XmlBasicLisdBase

*/

XmlBasicLisdBase::XmlBasicLisdBase() {}

XmlBasicLisdBase::~XmlBasicLisdBase() {}

#ifdef ACCESS
  const char * XmlBasicLisdBase::getprintElement()
  {return printElement;}

  void XmlBasicLisdBase::setprintElement(const char * printElementIn)
  {printElement = printElementIn;}

  bool XmlBasicLisdBase::getbad()
  {return bad;}

  void XmlBasicLisdBase::setbad(bool badIn)
  {bad = badIn;}

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
  val = true;
  bad = true;
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
      val = true;
      fprintf(stderr, "%s is not a valid boolean\n", valIn);
      bad = true;
      return;
    }
  for (stop = (strlen(valIn) - 1); (isspace(valIn[stop])); stop--);
  if ((stop - start) == 0)
    {
      if (valIn[start] == '1')
	{
	  val = true;
	  bad = false;
	}
      else if (valIn[start] == '0')
	{
	  val = false;
	  bad = false;
	}
      else
	{
	  val = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  bad = true;
	}
    }
  else if ((stop - start) == 3)
    {
      if ((valIn[start] == 't') && (valIn[start+1] == 'r') &&
	  (valIn[start+2] == 'u') && (valIn[start+3] == 'e'))
	{
	  val = true;
	  bad = false;
	}
      else
	{
	  val = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  bad = true;
	}
    }
  else if ((stop - start) == 4)
    {
      if ((valIn[start] == 'f') && (valIn[start+1] == 'a') &&
	  (valIn[start+2] == 'l') && (valIn[start+3] == 's') &&
	  (valIn[start+4] == 'e'))
	{
	  val = false;
	  bad = false;
	}
      else
	{
	  val = true;
	  fprintf(stderr, "%s is not a valid boolean\n", valIn);
	  bad = true;
	}
    }
  else
    {
      val = true;
      fprintf(stderr, "%s is not a valid boolean\n", valIn);
      bad = true;
    }
}

XmlBoolean::~XmlBoolean() {}

bool XmlBoolean::XmlBooleanIsBad()
{
  return bad;
}

void XmlBoolean::PRINTSELFDECL
{
  if (XmlBooleanIsBad())
    {
      fprintf(stderr, "boolean value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", (val ? ">true" : ">false"));
}

void XmlBoolean::OPRINTSELFDECL
{
  if (XmlBooleanIsBad())
    {
      fprintf(stderr, "boolean value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", (val ? "true" : "false"));
}

#ifdef ACCESS
  bool XmlBoolean::getval()
  {return val;}

  void XmlBoolean::setval(bool valIn)
  {val = valIn;}
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
  XmlBooleanLisd * booleanLisdIn)
{
  *this = *booleanLisdIn;
}

XmlBooleanLisd::XmlBooleanLisd(
 const char * valueString)
{
  XmlBoolean * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlBoolean(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid boolean list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
}

XmlDate::XmlDate(
  const char * valIn)
{
  val = valIn; // automatic write to std::string
  bad = false;
}

XmlDate::~XmlDate() {}

bool XmlDate::XmlDateIsBad()
{
  return bad;
}

void XmlDate::PRINTSELFDECL
{
  if (XmlDateIsBad())
    {
      fprintf(stderr, "date value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlDate::OPRINTSELFDECL
{
  if (XmlDateIsBad())
    {
      fprintf(stderr, "date value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlDate::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlDate::getval()
  {return val;}

  void XmlDate::setval(std::string valIn)
  {val = valIn;}
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
  XmlDateLisd * dateLisdIn)
{
  *this = *dateLisdIn;
}

XmlDateLisd::XmlDateLisd(
 const char * valueString)
{
  XmlDate * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlDate(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid date list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
}

XmlDateTime::XmlDateTime(
  const char * valIn)
{
  val = valIn; // automatic write to std::string
  bad = false;
}

XmlDateTime::~XmlDateTime() {}

bool XmlDateTime::XmlDateTimeIsBad()
{
  return bad;
}

void XmlDateTime::PRINTSELFDECL
{
  if (XmlDateTimeIsBad())
    {
      fprintf(stderr, "dateTime value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlDateTime::OPRINTSELFDECL
{
  if (XmlDateTimeIsBad())
    {
      fprintf(stderr, "dateTime value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlDateTime::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlDateTime::getval()
  {return val;}

  void XmlDateTime::setval(std::string valIn)
  {val = valIn;}
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
  XmlDateTimeLisd * dateTimeLisdIn)
{
  *this = *dateTimeLisdIn;
}

XmlDateTimeLisd::XmlDateTimeLisd(
 const char * valueString)
{
  XmlDateTime * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlDateTime(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid dateTime list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
}

XmlDecimal::XmlDecimal(
  const char * valueString)
{
  int n;
  int m; // number of digits after decimal point

  if (sscanf(valueString, "%lf", &val) == 1)
    {
      bad = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid decimal\n", valueString);
      bad = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      places = ((XmlSchemaInstanceBase::places < 0) ?
		-XmlSchemaInstanceBase::places : 0);
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : m);
}

XmlDecimal::XmlDecimal(
  double valIn)
{
  val = valIn;
  bad = false;
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : XmlSchemaInstanceBase::places);
}

XmlDecimal::~XmlDecimal() {}

bool XmlDecimal::XmlDecimalIsBad()
{
  return bad;
}

void XmlDecimal::PRINTSELFDECL
{
  if (XmlDecimalIsBad())
    {
      fprintf(stderr, "decimal value is bad\n");
      exit(1);
    }
  XFPRINTF ">%.*f", places, val);
}

void XmlDecimal::OPRINTSELFDECL
{
  if (XmlDecimalIsBad())
    {
      fprintf(stderr, "decimal value is bad\n");
      exit(1);
    }
  XFPRINTF "%.*f", places, val);
}

void XmlDecimal::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", val);
}

#ifdef ACCESS
  double XmlDecimal::getval()
  {return val;}

  void XmlDecimal::setval(double valIn)
  {val = valIn;}

  short int XmlDecimal::getplaces()
  {return places;}

  void XmlDecimal::setplaces(short int placesIn)
  {places = placesIn;}
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
  XmlDecimalLisd * decimalLisdIn)
{
  *this = *decimalLisdIn;
}

XmlDecimalLisd::XmlDecimalLisd(
 const char * valueString)
{
  XmlDecimal * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlDecimal(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid decimal list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  places = XmlSchemaInstanceBase::places;
  format = formats[XmlSchemaInstanceBase::format];
  bad = true;
}

XmlDouble::XmlDouble(
  const char * valueString)
{
  int n = 0;
  int m; // number of digits after decimal point
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};

  if ((sscanf(valueString, " %lf %n", &val, &n) == 1) &&
      (n == (int)strlen(valueString)))
    { //skip white space around number and require all characters be read
      bad = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid double\n", valueString);
      val = 0;
      bad = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      places = ((XmlSchemaInstanceBase::places < 0) ?
		-XmlSchemaInstanceBase::places : 0);
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : 'f');
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : m);
  if (!valueString[n])
    { // number ended with no exponent 
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : 'f');
    }
  else
    { // number has e or E
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : valueString[n]);
    }
}

XmlDouble::XmlDouble(
  double valIn)
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  val = valIn;
  bad = false;
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : XmlSchemaInstanceBase::places);
  format = formats[XmlSchemaInstanceBase::format];
}

XmlDouble::~XmlDouble() {}

bool XmlDouble::XmlDoubleIsBad()
{
  return bad;
}

void XmlDouble::PRINTSELFDECL
{
  static char printFormat[10];
  if (XmlDoubleIsBad())
    {
      fprintf(stderr, "double value is bad\n");
      exit(1);
    }
  snprintf(printFormat, 10, ">%%.%d%c", places, format);
  XFPRINTF printFormat, val);
}

void XmlDouble::OPRINTSELFDECL
{
  static char printFormat[10];
  if (XmlDoubleIsBad())
    {
      fprintf(stderr, "double value is bad\n");
      exit(1);
    }
  snprintf(printFormat, 10, "%%.%d%c", places, format);
  XFPRINTF printFormat, val);
}

void XmlDouble::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", val);
}

#ifdef ACCESS
  double XmlDouble::getval()
  {return val;}

  void XmlDouble::setval(double valIn)
  {val = valIn;}

  short int XmlDouble::getplaces()
  {return places;}

  void XmlDouble::setplaces(short int placesIn)
  {places = placesIn;}

  char XmlDouble::getformat()
  {return format;}

  void XmlDouble::setformat(char formatIn)
  {format = formatIn;}
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
  XmlDoubleLisd * doubleLisdIn)
{
  *this = *doubleLisdIn;
}

XmlDoubleLisd::XmlDoubleLisd(
 const char * valueString)
{
  XmlDouble * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlDouble(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid double list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  return bad;
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
  val = 0.0;
  places = XmlSchemaInstanceBase::places;
  format = formats[XmlSchemaInstanceBase::format];
  bad = true;
}

XmlFloat::XmlFloat(
  const char * valueString)
{
  int n = 0;
  int m; // number of digits after decimal point
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};

  if ((sscanf(valueString, " %f %n", &val, &n) == 1) &&
      (n == (int)strlen(valueString)))
    { //skip white space around number and require all characters be read
      bad = false;
    }
  else
    {
      fprintf(stderr, "%s is not a valid float\n", valueString);
      val = 0;
      bad = true;
    }
  for (n = 0; (valueString[n] && (valueString[n] != '.')); n++);
  if (!valueString[n])
    { // number ended without a decimal point
      places = ((XmlSchemaInstanceBase::places < 0) ?
		-XmlSchemaInstanceBase::places : 0);
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : 'f');
      return;
    }
  for (m = 0, n++; (valueString[n] && (valueString[n] < 58)); n++, m++);
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : m);
  if (!valueString[n])
    { // number ended with no exponent 
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : 'f');
    }
  else
    { // number has e or E
      format = ((XmlSchemaInstanceBase::format > 2) ?
		formats[XmlSchemaInstanceBase::format] : valueString[n]);
    }
}

XmlFloat::XmlFloat(
  float valIn)
{
  const char formats[] = {'f', 'e', 'E', 'f', 'e', 'E'};
  val = valIn;
  bad = false;
  places = ((XmlSchemaInstanceBase::places < 0) ?
	    -XmlSchemaInstanceBase::places : XmlSchemaInstanceBase::places);
  format = formats[XmlSchemaInstanceBase::format];
}

XmlFloat::~XmlFloat() {}

bool XmlFloat::XmlFloatIsBad()
{
  return bad;
}

void XmlFloat::PRINTSELFDECL
{
  static char printFormat[10];
  if (XmlFloatIsBad())
    {
      fprintf(stderr, "float value is bad\n");
      exit(1);
    }
  snprintf(printFormat, 10, ">%%.%d%c", places, format);
  XFPRINTF printFormat, val);
}

void XmlFloat::OPRINTSELFDECL
{
  static char printFormat[10];
  if (XmlFloatIsBad())
    {
      fprintf(stderr, "float value is bad\n");
      exit(1);
    }
  snprintf(printFormat, 10, "%%.%d%c", places, format);
  XFPRINTF printFormat, val);
}

void XmlFloat::printBad(FILE * badFile)
{
  fprintf(badFile, "%f", val);
}

#ifdef ACCESS
  float XmlFloat::getval()
  {return val;}

  void XmlFloat::setval(float valIn)
  {val = valIn;}

  short int XmlFloat::getplaces()
  {return places;}

  void XmlFloat::setplaces(short int placesIn)
  {places = placesIn;}

  char XmlFloat::getformat()
  {return format;}

  void XmlFloat::setformat(char formatIn)
  {format = formatIn;}
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
  XmlFloatLisd * floatLisdIn)
{
  *this = *floatLisdIn;
}

XmlFloatLisd::XmlFloatLisd(
 const char * valueString)
{
  XmlFloat * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  fprintf(stderr, "%s is not a valid float list\n", valueString);
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlFloat(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid float list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = buffer;
  allIDs.insert(val);
  bad = false;
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
      bad = true;
      return;
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (start=0; isspace(buffer[start]); start++);
  for (n = length - 1; isspace(buffer[n]); n--);
  buffer[n+1] = 0;
  if ((int)strlen(buffer + start) > idSize)
    {
      fprintf(stderr, "the ID %s is too long\n", buffer + start);
      val = "";
      bad = true;
      return;
    }
  n = start;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white character is not allowed
      val = "";
      bad = true;
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
      val = "";
      bad = true;
      fprintf(stderr, "%s is not a valid ID\n", buffer + start);
      return;
    }
   else
    {
      val = buffer + start; // automatic write to std::string
      if (allIDs.find(val) != allIDs.end())
	{
	  fprintf(stderr, "ID value %s is already in use\n", val.c_str());
	  val = "";
	  bad = true;
	}
      else
	{ // everything OK
	  bad = false;
	  allIDs.insert(val);
	}
    }
}

XmlID::~XmlID()
{
  allIDs.erase(val);
}

bool XmlID::XmlIDIsBad()
{
  int n;

  if (bad)
    return true;
  else if ((int)val.size() > idSize)
    return true;
  else if (allIDs.find(val) == allIDs.end())
    return true;
  else if ((val[0] != '_') &&
	   ((val[0] < 'a') || (val[0] > 'z')) &&
	   ((val[0] < 'A') || (val[0] > 'Z')))
    { // first character is not allowed
      val = "";
      return true;
    }
  for (n=1; ((val[n] == '_') ||
	     (val[n] == '.') ||
	     (val[n] == '-') ||
	     ((val[n] >= 'a') && (val[n] <= 'z')) ||
	     ((val[n] >= 'A') && (val[n] <= 'Z')) ||
	     ((val[n] >= '0') && (val[n] <= '9'))); n++);
  if (val[n])
    { // val[n] should be 0 but isn't
      val = "";
      return true;
    }
  return false;
}

void XmlID::PRINTSELFDECL
{
  if (XmlIDIsBad())
    {
      fprintf(stderr, "ID %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlID::OPRINTSELFDECL
{
  if (XmlIDIsBad())
    {
      fprintf(stderr, "ID %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlID::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlID::getval()
  {return val;}

  void XmlID::setval(std::string valIn)
  {val = valIn;}
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
  XmlIDLisd * idLisdIn)
{
  *this = *idLisdIn;
}

XmlIDLisd::XmlIDLisd(
 const char * valueString)
{
  XmlID * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlID(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid ID list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
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
      fprintf(stderr, "IDREF %s is too long", valIn);
      exit(1);
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (start=0; isspace(buffer[start]); start++);
  for (n = length - 1; isspace(buffer[n]); n--);
  buffer[n+1] = 0;
  if ((int)strlen(buffer + start) > idrefSize)
    {
      fprintf(stderr,
	      "the IDREF %s is too long\n", buffer + start);
      val = "";
      bad = true;
      return;
    }
  n = start;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white character is not allowed
      val = "";
      bad = true;
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
      val = "";
      bad = true;
      fprintf(stderr, "%s is not a valid IDREF\n", buffer + start);
      return;
    }
  val = buffer + start; // automatic write to std::string
  bad = false;
  allIDREFs.insert(val);
}

XmlIDREF::~XmlIDREF()
{
  allIDREFs.erase(val);
}

bool XmlIDREF::XmlIDREFIsBad()
{
  int n;

  if (bad)
    return true;
  else if ((int)val.size() > idrefSize)
    return true;
  else if (XmlID::allIDs.find(val) == XmlID::allIDs.end())
    return true;
  else if ((val[0] != '_') &&
	   ((val[0] < 'a') || (val[0] > 'z')) &&
	   ((val[0] < 'A') || (val[0] > 'Z')))
    { // first character is not allowed
      val = "";
      return true;
    }
  for (n=1; ((val[n] == '_') ||
	     (val[n] == '.') ||
	     (val[n] == '-') ||
	     ((val[n] >= 'a') && (val[n] <= 'z')) ||
	     ((val[n] >= 'A') && (val[n] <= 'Z')) ||
	     ((val[n] >= '0') && (val[n] <= '9'))); n++);
  if (val[n])
    { // val[n] should be 0 but isn't
      val = "";
      return true;
    }
  return false;
}

void XmlIDREF::PRINTSELFDECL
{
  if (XmlIDREFIsBad())
    {
      fprintf(stderr, "IDREF %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlIDREF::OPRINTSELFDECL
{
  if (XmlIDREFIsBad())
    {
      fprintf(stderr, "IDREF %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlIDREF::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
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

#ifdef ACCESS
  std::string XmlIDREF::getval()
  {return val;}

  void XmlIDREF::setval(std::string valIn)
  {val = valIn;}
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
  XmlIDREFLisd * idrefLisdIn)
{
  *this = *idrefLisdIn;
}

XmlIDREFLisd::XmlIDREFLisd(
 const char * valueString)
{
  XmlIDREF * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlIDREF(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid IDREF list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 11)
    { // too many digits
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &longVal) == 1)
    {
      if ((longVal < -2147483648) || (longVal > 2147483647))
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid int\n", valIn);
	}      
      else
	{
	  val = (int)longVal;
	  bad = false;
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid int\n", valIn);
    }
}

XmlInt::~XmlInt() {}

bool XmlInt::XmlIntIsBad()
{
  return bad;
}

void XmlInt::PRINTSELFDECL
{
  if (XmlIntIsBad())
    {
      fprintf(stderr, "int value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlInt::OPRINTSELFDECL
{
  if (XmlIntIsBad())
    {
      fprintf(stderr, "int value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlInt::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlInt::getval()
  {return val;}

  void XmlInt::setval(int valIn)
  {val = valIn;}
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
  XmlIntLisd * intLisdIn)
{
  *this = *intLisdIn;
}

XmlIntLisd::XmlIntLisd(
 const char * valueString)
{
  XmlInt * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlInt(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid int list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; valIn[n] && isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      bad = false;
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid integer\n", valIn);
    }
}

XmlInteger::~XmlInteger() {}

bool XmlInteger::XmlIntegerIsBad()
{
  return bad;
}

void XmlInteger::PRINTSELFDECL
{
  if (XmlIntegerIsBad())
    {
      fprintf(stderr, "integer value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlInteger::OPRINTSELFDECL
{
  if (XmlIntegerIsBad())
    {
      fprintf(stderr, "integer value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlInteger::getval()
  {return val;}

  void XmlInteger::setval(int valIn)
  {val = valIn;}
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
  XmlIntegerLisd * integerLisdIn)
{
  *this = *integerLisdIn;
}

XmlIntegerLisd::XmlIntegerLisd(
 const char * valueString)
{
  XmlInteger * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlInteger(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid integer list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &val) == 1)
    {
      bad = false;
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid long\n", valIn);
    }
}

XmlLong::~XmlLong() {}

bool XmlLong::XmlLongIsBad()
{
  return bad;
}

void XmlLong::PRINTSELFDECL
{
  if (XmlLongIsBad())
    {
      fprintf(stderr, "long value is bad\n");
      exit(1);
    }
  XFPRINTF ">%ld", val);
}

void XmlLong::OPRINTSELFDECL
{
  if (XmlLongIsBad())
    {
      fprintf(stderr, "long value is bad\n");
      exit(1);
    }
  XFPRINTF "%ld", val);
}

void XmlLong::printBad(FILE * badFile)
{
  fprintf(badFile, "%ld", val);
}

#ifdef ACCESS
  long XmlLong::getval()
  {return val;}

  void XmlLong::setval(long valIn)
  {val = valIn;}
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
  XmlLongLisd * longLisdIn)
{
  *this = *longLisdIn;
}

XmlLongLisd::XmlLongLisd(
 const char * valueString)
{
  XmlLong * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlLong(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid long list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
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
      fprintf(stderr, "NCName %s is too long", valIn);
      exit(1);
    }
  strncpy(buffer, valIn, NAMESIZE);
  for (n=0; isspace(buffer[n]); n++);
  start = n;
  if ((buffer[n] != '_') &&
      ((buffer[n] < 'a') || (buffer[n] > 'z')) &&
      ((buffer[n] < 'A') || (buffer[n] > 'Z')))
    { // first non-white-space character is not allowed
      val = "";
      bad = true;
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
      val = "";
      bad = true;
      fprintf(stderr, "%s is not a valid NCName\n", valIn);
      return;
    }
  buffer[end] = 0;
  val = (buffer + start); // automatic write to std::string
  bad = false;
}

XmlNCName::~XmlNCName() {}

// This returns true if there are any bad characters or white space.
bool XmlNCName::XmlNCNameIsBad()
{
  int n;

  if (bad)
    return true;
  for (n=0; ((val[n] == '_') ||
             (val[n] == '.') ||
             (val[n] == '-') ||
             ((val[n] >= 'a') && (val[n] <= 'z')) ||
             ((val[n] >= 'A') && (val[n] <= 'Z')) ||
             ((val[n] >= '0') && (val[n] <= '9'))); n++);
  if ((n == 0) || val[n])
    return true;
  else if ((val[0] == '.') || (val[0] == '-') ||
	   ((val[0] >= '0') && (val[0] <= '9')))
    return true;
  else
    return false;
}

void XmlNCName::PRINTSELFDECL
{
  if (XmlNCNameIsBad())
    {
      fprintf(stderr, "NCName value %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlNCName::OPRINTSELFDECL
{
  if (XmlNCNameIsBad())
    {
      fprintf(stderr, "NCName value %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlNCName::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlNCName::getval()
  {return val;}

  void XmlNCName::setval(std::string valIn)
  {val = valIn;}
#endif

/*********************************************************************/

/* class XmlNCNameLisd

*/

XmlNCNameLisd::XmlNCNameLisd() {}

XmlNCNameLisd::XmlNCNameLisd(
  XmlNCName * ncnameIn)
{
  push_back(ncnameIn);
}

XmlNCNameLisd::XmlNCNameLisd(
  XmlNCNameLisd * ncnameLisdIn)
{
  *this = *ncnameLisdIn;
}

XmlNCNameLisd::XmlNCNameLisd(
 const char * valueString)
{
  XmlNCName * val;
  int n;
  int start;
  char buffer[200];

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
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlNCName(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
        {
          fprintf(stderr, "%s is not a valid NCName list\n", valueString);
          bad = true;
          break;
        }
      else
        push_back(val);
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
  val = 0;
  bad = true;
}

XmlNegativeInteger::XmlNegativeInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '+')
    { // first non-white-space character is a plus sign - not allowed
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  if (valIn[n] == '-')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-minus-sign character is not a digit
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      if (val < 0)
	bad = false;
      else
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid negativeInteger\n", valIn);
    }
}

XmlNegativeInteger::~XmlNegativeInteger() {}

bool XmlNegativeInteger::XmlNegativeIntegerIsBad()
{
  if (bad)
    return true;
  else if (val > -1)
    return true;
  else
    return false;
}

void XmlNegativeInteger::PRINTSELFDECL
{
  if (XmlNegativeIntegerIsBad())
    {
      fprintf(stderr, "negativeInteger value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlNegativeInteger::OPRINTSELFDECL
{
  if (XmlNegativeIntegerIsBad())
    {
      fprintf(stderr, "negativeInteger value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlNegativeInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlNegativeInteger::getval()
  {return val;}

  void XmlNegativeInteger::setval(int valIn)
  {val = valIn;}
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
  XmlNegativeIntegerLisd * negativeIntegerLisdIn)
{
  *this = *negativeIntegerLisdIn;
}

XmlNegativeIntegerLisd::XmlNegativeIntegerLisd(
 const char * valueString)
{
  XmlNegativeInteger * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlNegativeInteger(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid negativeInteger list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
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
      fprintf(stderr, "NMTOKEN %s is too long", valIn);
      exit(1);
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
      val = "";
      bad = true;
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
      val = "";
      bad = true;
      fprintf(stderr, "%s is not a valid NMTOKEN\n", valIn);
      return;
    }
  buffer[end] = 0;
  val = (buffer + start); // automatic write to std::string
  bad = false;
}

XmlNMTOKEN::~XmlNMTOKEN() {}

bool XmlNMTOKEN::XmlNMTOKENIsBad()
{
  int n;
  
  if (bad)
    return true;
  for (n=0; ((val[n] == ':') ||
	     (val[n] == '_') ||
	     (val[n] == '.') ||
	     (val[n] == '-') ||
	     ((val[n] >= 'a') && (val[n] <= 'z')) ||
	     ((val[n] >= 'A') && (val[n] <= 'Z')) ||
	     ((val[n] >= '0') && (val[n] <= '9'))); n++);
  if ((n == 0) || val[n])
    return true;
  return false;
}

void XmlNMTOKEN::PRINTSELFDECL
{
  if (XmlNMTOKENIsBad())
    {
      fprintf(stderr, "NMTOKEN value %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlNMTOKEN::OPRINTSELFDECL
{
  if (XmlNMTOKENIsBad())
    {
      fprintf(stderr, "NMTOKEN value %s is bad\n", val.c_str());
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlNMTOKEN::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlNMTOKEN::getval()
  {return val;}

  void XmlNMTOKEN::setval(std::string valIn)
  {val = valIn;}
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
  XmlNMTOKENLisd * nmtokenLisdIn)
{
  *this = *nmtokenLisdIn;
}

XmlNMTOKENLisd::XmlNMTOKENLisd(
 const char * valueString)
{
  XmlNMTOKEN * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlNMTOKEN(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid NMTOKEN list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
}

XmlNonNegativeInteger::XmlNonNegativeInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '-')
    { // first non-space is a minus sign - not allowed
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  if (valIn[n] == '+')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-plus-sign character is not a digit
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      if (val > -1)
	bad = false;
      else
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonNegativeInteger\n", valIn);
    }
}

XmlNonNegativeInteger::~XmlNonNegativeInteger() {}

bool XmlNonNegativeInteger::XmlNonNegativeIntegerIsBad()
{
  if (bad)
    return true;
  else if (val < 0)
    return true;
  else
    return false;
}

void XmlNonNegativeInteger::PRINTSELFDECL
{
  if (XmlNonNegativeIntegerIsBad())
    {
      fprintf(stderr, "nonNegativeInteger value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlNonNegativeInteger::OPRINTSELFDECL
{
  if (XmlNonNegativeIntegerIsBad())
    {
      fprintf(stderr, "nonNegativeInteger value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlNonNegativeInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlNonNegativeInteger::getval()
  {return val;}

  void XmlNonNegativeInteger::setval(int valIn)
  {val = valIn;}
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
  XmlNonNegativeIntegerLisd * nonNegativeIntegerLisdIn)
{
  *this = *nonNegativeIntegerLisdIn;
}

XmlNonNegativeIntegerLisd::XmlNonNegativeIntegerLisd(
 const char * valueString)
{
  XmlNonNegativeInteger * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlNonNegativeInteger(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid nonNegativeInteger list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
}

XmlNonPositiveInteger::XmlNonPositiveInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '+')
    { // first non-white-space character is a plus sign - not allowed
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  if (valIn[n] == '-')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-minus-sign character is not a digit
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      if (val < 1)
	bad = false;
      else
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid nonPositiveInteger\n", valIn);
    }
}

XmlNonPositiveInteger::~XmlNonPositiveInteger() {}

bool XmlNonPositiveInteger::XmlNonPositiveIntegerIsBad()
{
  if (bad)
    return true;
  else if (val > 0)
    return true;
  else
    return false;
}

void XmlNonPositiveInteger::PRINTSELFDECL
{
  if (XmlNonPositiveIntegerIsBad())
    {
      fprintf(stderr, "nonPositiveInteger value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlNonPositiveInteger::OPRINTSELFDECL
{
  if (XmlNonPositiveIntegerIsBad())
    {
      fprintf(stderr, "nonPositiveInteger value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlNonPositiveInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlNonPositiveInteger::getval()
  {return val;}

  void XmlNonPositiveInteger::setval(int valIn)
  {val = valIn;}
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
  XmlNonPositiveIntegerLisd * nonPositiveIntegerLisdIn)
{
  *this = *nonPositiveIntegerLisdIn;
}

XmlNonPositiveIntegerLisd::XmlNonPositiveIntegerLisd(
 const char * valueString)
{
  XmlNonPositiveInteger * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlNonPositiveInteger(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid nonPositiveInteger list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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

#ifdef ACCESS
  bool XmlOPrintTypeBase::getbad()
  {return bad;}

  void XmlOPrintTypeBase::setbad(bool badIn)
  {bad = badIn;}
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
  val = 0;
  bad = true;
}

XmlPositiveInteger::XmlPositiveInteger(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if (valIn[n] == '-')
    { // first non-white-space character is a minus sign - not allowed
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  if (valIn[n] == '+')
    n++;
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space non-one-sign is not a digit
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      if (val > 0)
	bad = false;
      else
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid positiveInteger\n", valIn);
    }
}

XmlPositiveInteger::~XmlPositiveInteger() {}

bool XmlPositiveInteger::XmlPositiveIntegerIsBad()
{
  if (bad)
    return true;
  else if (val < 1)
    return true;
  else
    return false;
}

void XmlPositiveInteger::PRINTSELFDECL
{
  if (XmlPositiveIntegerIsBad())
    {
      fprintf(stderr, "positiveInteger value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlPositiveInteger::OPRINTSELFDECL
{
  if (XmlPositiveIntegerIsBad())
    {
      fprintf(stderr, "positiveInteger value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlPositiveInteger::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlPositiveInteger::getval()
  {return val;}

  void XmlPositiveInteger::setval(int valIn)
  {val = valIn;}
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
  XmlPositiveIntegerLisd * positiveIntegerLisdIn)
{
  *this = *positiveIntegerLisdIn;
}

XmlPositiveIntegerLisd::XmlPositiveIntegerLisd(
 const char * valueString)
{
  XmlPositiveInteger * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlPositiveInteger(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid negativeInteger list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
range of -32768 to 32767. A C++ int is used to represent the value.

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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 6)
    { // too many digits
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%d", &val) == 1)
    {
      if ((val < -32768) || (val > 32767))
	{ // val is out of allowed range
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid short\n", valIn);
	  return;
	}
      else
	bad = false;
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid short\n", valIn);
    }
}

XmlShort::~XmlShort() {}

bool XmlShort::XmlShortIsBad()
{
  return bad;
}

void XmlShort::PRINTSELFDECL
{
  if (XmlShortIsBad())
    {
      fprintf(stderr, "short value is bad\n");
      exit(1);
    }
  XFPRINTF ">%d", val);
}

void XmlShort::OPRINTSELFDECL
{
  if (XmlShortIsBad())
    {
      fprintf(stderr, "short value is bad\n");
      exit(1);
    }
  XFPRINTF "%d", val);
}

void XmlShort::printBad(FILE * badFile)
{
  fprintf(badFile, "%d", val);
}

#ifdef ACCESS
  int XmlShort::getval()
  {return val;}

  void XmlShort::setval(int valIn)
  {val = valIn;}
#endif

/*********************************************************************/

/* class XmlShortLisd

*/

XmlShortLisd::XmlShortLisd() {}

XmlShortLisd::XmlShortLisd(
  XmlShort * intIn)
{
  push_back(intIn);
}

XmlShortLisd::XmlShortLisd(
  XmlShortLisd * intLisdIn)
{
  *this = *intLisdIn;
}

XmlShortLisd::XmlShortLisd(
 const char * valueString)
{
  XmlShort * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlShort(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid short list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
}

XmlString::XmlString(
  const char * valIn)
{
  val = valIn; // automatic write to std::string
  bad = false;
}

XmlString::~XmlString() {}

bool XmlString::XmlStringIsBad()
{
  return bad;
}

void XmlString::PRINTSELFDECL
{
  if (XmlStringIsBad())
    {
      fprintf(stderr, "string value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlString::OPRINTSELFDECL
{
  if (XmlStringIsBad())
    {
      fprintf(stderr, "string value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlString::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlString::getval()
  {return val;}

  void XmlString::setval(std::string valIn)
  {val = valIn;}
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
  XmlStringLisd * stringLisdIn)
{
  *this = *stringLisdIn;
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
  val = "";
  bad = true;
}

XmlTime::XmlTime(
  const char * valIn)
{
  val = valIn; // automatic write to std::string
  bad = false;
}

XmlTime::~XmlTime() {}

bool XmlTime::XmlTimeIsBad()
{
  return bad;
}

void XmlTime::PRINTSELFDECL
{
  if (XmlTimeIsBad())
    {
      fprintf(stderr, "time value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlTime::OPRINTSELFDECL
{
  if (XmlTimeIsBad())
    {
      fprintf(stderr, "time value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlTime::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlTime::getval()
  {return val;}

  void XmlTime::setval(std::string valIn)
  {val = valIn;}
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
  XmlTimeLisd * TimeLisdIn)
{
  *this = *TimeLisdIn;
}

XmlTimeLisd::XmlTimeLisd(
 const char * valueString)
{
  XmlTime * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlTime(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid time list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = "";
  bad = true;
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
  val = buffer; // automatic write to std::string
  bad = false;
  delete [] buffer;
}

XmlToken::~XmlToken() {}

bool XmlToken::XmlTokenIsBad()
{
  return bad;
}

void XmlToken::PRINTSELFDECL
{
  if (XmlTokenIsBad())
    {
      fprintf(stderr, "token value is bad\n");
      exit(1);
    }
  XFPRINTF ">%s", val.c_str());
}

void XmlToken::OPRINTSELFDECL
{
  if (XmlTokenIsBad())
    {
      fprintf(stderr, "token value is bad\n");
      exit(1);
    }
  XFPRINTF "%s", val.c_str());
}

void XmlToken::printBad(FILE * badFile)
{
  fprintf(badFile, "%s", val.c_str());
}

#ifdef ACCESS
  std::string XmlToken::getval()
  {return val;}

  void XmlToken::setval(std::string valIn)
  {val = valIn;}
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
  XmlTokenLisd * tokenLisdIn)
{
  *this = *tokenLisdIn;
}

XmlTokenLisd::XmlTokenLisd(
 const char * valueString)
{
  XmlToken * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlToken(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid token list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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

XmlTypeBase::XmlTypeBase() {}

XmlTypeBase::~XmlTypeBase() {}

#ifdef ACCESS
  const char * XmlTypeBase::getprintElement()
  {return printElement;}

  void XmlTypeBase::setprintElement(const char * printElementIn)
  {printElement = printElementIn;}
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 4)
    { // too many digits
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%u", &intVal) == 1)
    {
      if (intVal > 255)
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
	}
      else
	{
	  val = (unsigned char)intVal;
	  bad = false;
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedByte\n", valIn);
    }
}

XmlUnsignedByte::~XmlUnsignedByte() {}

bool XmlUnsignedByte::XmlUnsignedByteIsBad()
{
  return bad;
}

void XmlUnsignedByte::PRINTSELFDECL
{
  if (XmlUnsignedByteIsBad())
    {
      fprintf(stderr, "unsignedByte value is bad\n");
      exit(1);
    }
  XFPRINTF ">%u", (unsigned int)val);
}

void XmlUnsignedByte::OPRINTSELFDECL
{
  if (XmlUnsignedByteIsBad())
    {
      fprintf(stderr, "unsignedByte value is bad\n");
      exit(1);
    }
  XFPRINTF "%u", (unsigned int)val);
}

void XmlUnsignedByte::printBad(FILE * badFile)
{
  fprintf(badFile, "%u", (unsigned int)val);
}

#ifdef ACCESS
  unsigned char XmlUnsignedByte::getval()
  {return val;}

  void XmlUnsignedByte::setval(unsigned char valIn)
  {val = valIn;}
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
  XmlUnsignedByteLisd * unsignedByteLisdIn)
{
  *this = *unsignedByteLisdIn;
}

XmlUnsignedByteLisd::XmlUnsignedByteLisd(
 const char * valueString)
{
  XmlUnsignedByte * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlUnsignedByte(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedByte list\n", valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 11)
    { // too many digits
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%lu", &longVal) == 1)
    {
      if (longVal > 4294967295)
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
	}
      else
	{
	  val = (unsigned int)longVal;
	  bad = false;
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedInt\n", valIn);
    }
}

XmlUnsignedInt::~XmlUnsignedInt() {}

bool XmlUnsignedInt::XmlUnsignedIntIsBad()
{
  return bad;
}

void XmlUnsignedInt::PRINTSELFDECL
{
  if (XmlUnsignedIntIsBad())
    {
      fprintf(stderr, "unsignedInt value is bad\n");
      exit(1);
    }
  XFPRINTF ">%u", val);
}

void XmlUnsignedInt::OPRINTSELFDECL
{
  if (XmlUnsignedIntIsBad())
    {
      fprintf(stderr, "unsignedInt value is bad\n");
      exit(1);
    }
  XFPRINTF "%u", val);
}

void XmlUnsignedInt::printBad(FILE * badFile)
{
  fprintf(badFile, "%u", val);
}

#ifdef ACCESS
unsigned int  XmlUnsignedInt::getval()
{return val;}

void XmlUnsignedInt::setval(unsigned int valIn)
{val = valIn;}
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
  XmlUnsignedIntLisd * unsignedIntLisdIn)
{
  *this = *unsignedIntLisdIn;
}

XmlUnsignedIntLisd::XmlUnsignedIntLisd(
 const char * valueString)
{
  XmlUnsignedInt * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlUnsignedInt(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedInt list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
}

XmlUnsignedLong::XmlUnsignedLong(
  const char * valIn)
{
  int n;

  for (n=0; isspace(valIn[n]); n++);
  if ((valIn[n] < '0') || (valIn[n] > '9'))
    { // first non-white-space character is not a digit
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
      return;
    }
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%ld", &val) == 1)
    {
      bad = false;
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedLong\n", valIn);
    }
}

XmlUnsignedLong::~XmlUnsignedLong() {}

bool XmlUnsignedLong::XmlUnsignedLongIsBad()
{
  return bad;
}

void XmlUnsignedLong::PRINTSELFDECL
{
  if (XmlUnsignedLongIsBad())
    {
      fprintf(stderr, "unsignedLong value is bad\n");
      exit(1);
    }
  XFPRINTF ">%lu", val);
}

void XmlUnsignedLong::OPRINTSELFDECL
{
  if (XmlUnsignedLongIsBad())
    {
      fprintf(stderr, "unsignedLong value is bad\n");
      exit(1);
    }
  XFPRINTF "%lu", val);
}

void XmlUnsignedLong::printBad(FILE * badFile)
{
  fprintf(badFile, "%lu", val);
}

#ifdef ACCESS
  unsigned long XmlUnsignedLong::getval()
  {return val;}

  void XmlUnsignedLong::setval(unsigned long valIn)
  {val = valIn;}
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
  XmlUnsignedLongLisd * unsignedLongLisdIn)
{
  *this = *unsignedLongLisdIn;
}

XmlUnsignedLongLisd::XmlUnsignedLongLisd(
 const char * valueString)
{
  XmlUnsignedLong * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlUnsignedLong(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedLong list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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
  val = 0;
  bad = true;
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
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  start = n;
  for (n++ ; ((valIn[n] >= '0') && (valIn[n] <= '9')); n++);
  if ((n - start) > 6)
    { // too many digits
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  for ( ; isspace(valIn[n]); n++);
  if (valIn[n])
    { // valIn[n] should be 0 but isn't
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
      return;
    }
  else if (sscanf(valIn, "%u", &intVal) == 1)
    {
      if (intVal > 65535)
	{
	  val = 0;
	  bad = true;
	  fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
	}
      else
	{
	  val = (unsigned short)intVal;
	  bad = false;
	}
    }
  else
    {
      val = 0;
      bad = true;
      fprintf(stderr, "%s is not a valid unsignedShort\n", valIn);
    }
}

XmlUnsignedShort::~XmlUnsignedShort() {}

bool XmlUnsignedShort::XmlUnsignedShortIsBad()
{
  return bad;
}

void XmlUnsignedShort::PRINTSELFDECL
{
  if (XmlUnsignedShortIsBad())
    {
      fprintf(stderr, "unsignedShort value is bad\n");
      exit(1);
    }
  XFPRINTF ">%hu", val);
}

void XmlUnsignedShort::OPRINTSELFDECL
{
  if (XmlUnsignedShortIsBad())
    {
      fprintf(stderr, "unsignedShort value is bad\n");
      exit(1);
    }
  XFPRINTF "%hu", val);
}

void XmlUnsignedShort::printBad(FILE * badFile)
{
  fprintf(badFile, "%hu", val);
}

#ifdef ACCESS
  unsigned short XmlUnsignedShort::getval()
  {return val;}

  void XmlUnsignedShort::setval(unsigned short valIn)
  {val = valIn;}
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
  XmlUnsignedShortLisd * unsignedShortLisdIn)
{
  *this = *unsignedShortLisdIn;
}

XmlUnsignedShortLisd::XmlUnsignedShortLisd(
 const char * valueString)
{
  XmlUnsignedShort * val;
  int n;
  int start;
  char buffer[200];

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
	  bad = true;
	  break;
	}
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new XmlUnsignedShort(buffer);
#ifdef ACCESS
      if (val->getbad())
#else
      if (val->bad)
#endif
	{
	  fprintf(stderr, "%s is not a valid unsignedShort list\n",
		  valueString);
	  bad = true;
	  break;
	}
      else
	push_back(val);
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

*/

XmlVersion::XmlVersion()
{
  encoding[0] = 0;
  standalone[0] = 0;
}

XmlVersion::XmlVersion(
 const char * encodingIn,
 const char * standaloneIn)
{
  if ((strncmp(encodingIn, "UTF-8", 6) == 0) ||
      (strncmp(encodingIn, "utf-8", 6) == 0))
    strncpy(encoding, encodingIn, 6);
  if ((strncmp(standaloneIn, "no", 5) == 0) ||
      (strncmp(standaloneIn, "yes", 5) == 0))
    strncpy(standalone, standaloneIn, 5);
}

XmlVersion::~XmlVersion() {}

void XmlVersion::PRINTSELFDECL
{
  XFPRINTF "<?xml version=\"1.0\"");
  if ((strncmp(encoding, "UTF-8", 6) == 0) ||
      (strncmp(encoding, "utf-8", 6) == 0))
    XFPRINTF " encoding=\"%s\"", encoding);
  if ((strncmp(standalone, "no", 5) == 0) ||
      (strncmp(standalone, "yes", 5) == 0))
    XFPRINTF " standalone=\"%s\"", standalone);
  XFPRINTF "?>\n");
}

#ifdef ACCESS
  char * XmlVersion::getencoding()
  {return encoding;}

  void XmlVersion::setencoding(char * encodingIn)
  {
    strncpy(encoding, encodingIn, 9);
    encoding[9] = 0;
  }

  char * XmlVersion::getstandalone()
  {return standalone;}

  void XmlVersion::setstandalone(char * standaloneIn)
  {
    strncpy(standalone, standaloneIn, 9);
    standalone[9] = 0;
  }

#endif

/*********************************************************************/

