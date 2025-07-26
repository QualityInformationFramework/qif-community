/*

The parser reads an input file and writes an output file.

The parser is called with one to six arguments as follows
parser <file name> [-n|N <places>] [-f|F <format>] [<times>]
For example (with all optional arguments): parser instances.xml -n 6 -F e 2
In that example
<file name> = instances.xml
[-n|N <places>]  = -n 6
[-f|F <format>]  = -F e
[<times>]        =  2

The [-n|N <places>] and [-f|F <format>] determine how xs:double,
xs:float, and xs:decimal are printed out. In the following text, DFD
means a number of one of those types, and DF means xs:double and
xs:float numbers. <places> is a non-negative integer. <format> is one
of f, e, or E and their meaning is as given for printf in the C++
standard (floating point, exponential with lower case e, exponential
with upper case E).

If -N is used, all DFDs are printed with <places> decimal places.

If -n is used, DFDs are printed out with the same number of decimal
places as they had when they were read in.

If neither -n nor -N is used, DFDs are printed out with the same
number of decimal places as they had when they were read in.

The -f and -F options have no effect on xs:decimal numbers (since
xs:decimal numbers may not use exponential notation).

If -F is used all DFs are printed with the given <format>.

If -f is used, DFs are printed out using exponential notation
(e or E) if they had exponential notation when they were read in,
 but otherwise are printed with the given <format>.

If neither -f nor -F is used, DFs are printed out using exponential
 notation (e or E) if they had exponential notation when they were
 read in, but otherwise are printed with the f format.

The <times> argument gives the number times the file should be parsed.
The argument exists for testing purposes and is not expected to be
useful otherwise.

If this is compiled with STRINGIN defined, it will read the input file
into a string and then parse it from the string. Otherwise it will
parse directly from the file.

If this is compiled with STRINGOUT defined, after the input is parsed,
it will print the parse tree to a string (with line endings but no
other extra whitespace) and then print the string to the output file.
Otherwise, it will pretty print the output file (with extra white space)
directly from the parse tree.

For STRINGOUT, the class file(s) must also be compiled with STRINGOUT
defined, and xmlSchemaInstanceStr.o (xmlSchemaInstance.cc compiled with
STRINGOUT defined) must be linked in.

For STRINGIN, the lex file must also be compiled with STRINGIN defined.

*/

#include <stdio.h>   // fprintf
#include <string.h>  // strlen
#include <stdlib.h>  // exit
#include <map>       // idMap
#include "QIFDocumentClasses.hh"
#if defined(STRINGIN) || defined(STRINGOUT)
#define MAX_SIZE 10000000
#endif

extern QIFDocumentFile * QIFDocumentTree;
extern FILE * yyin;
extern int yyparse();
extern int yylex_destroy();

#ifdef STRINGIN
extern char * yyStringInputPointer;
extern char * yyStringInputEnd;
#endif

int XmlSchemaInstanceBase::format;
int XmlSchemaInstanceBase::places;
int yyStartAnew;
std::map<unsigned int, XmlSchemaInstanceBase *> idMap;

void usageMessage(char * call) /* NO ARGUMENTS */
{
  fprintf(stderr,
     "Usage: %s <file name> [-n|N <places>] [-f|F <format>] [<times>]\n",
          call);
  fprintf(stderr,
          "<places> and <times> are integers; format is f, e or E\n");
  fprintf(stderr, "Example 1: %s dFile.xml\n", call);
  fprintf(stderr, "Example 2: %s dFile.xml 2\n", call);
  fprintf(stderr, "Example 3: %s dFile.xml -n 5 \n", call);
  fprintf(stderr, "Example 4: %s dFile.xml -F e 2\n", call);
  fprintf(stderr, "Example 5: %s dFile.xml -n 6 -F E\n", call);
  exit(1);
}

void readArguments( /* ARGUMENTS                                      */
  int argc,         /* one more than the number of command arguments  */
  char * argv[],    /* array of executable name and command arguments */
  int * times)      /* number of times to parse                       */
{
  int places;

  if (argc % 2 == 1)
    {
      if (!sscanf(argv[argc - 1], "%d", times))
        {
          usageMessage(argv[0]);
        }
    }
  else
    *times = 1;
  if (argc < 2)
     {
      usageMessage(argv[0]);
    }
  else if (argc < 4)
    {
      XmlSchemaInstanceBase::format = 0;
      XmlSchemaInstanceBase::places = 6;
    }
  else if (argc < 6)
    {
      if (strcmp(argv[2], "-n") == 0)
        {
          XmlSchemaInstanceBase::format = 0;
          if (!sscanf(argv[3], "%d", &places))
            usageMessage(argv[0]);
          XmlSchemaInstanceBase::places = places;
        }
      else if (strcmp(argv[2], "-N") == 0)
        {
          XmlSchemaInstanceBase::format = 0;
          XmlSchemaInstanceBase::format = 0;
          if (!sscanf(argv[3], "%d", &places))
            usageMessage(argv[0]);
          XmlSchemaInstanceBase::places = -places;
        }
      else if (strcmp(argv[2], "-f") == 0)
        {
          XmlSchemaInstanceBase::places = 6;
          if (strlen(argv[3]) != 1)
            usageMessage(argv[0]);
          if (argv[3][0] == 'f')
            XmlSchemaInstanceBase::format = 0;
          else if (argv[3][0] == 'e')
            XmlSchemaInstanceBase::format = 1;
          else if (argv[3][0] == 'E')
            XmlSchemaInstanceBase::format = 2;
          else
            usageMessage(argv[0]);
        }
      else if (strcmp(argv[2], "-F") == 0)
        {
          XmlSchemaInstanceBase::places = 6;
          if (strlen(argv[3]) != 1)
            usageMessage(argv[0]);
          if (argv[3][0] == 'f')
            XmlSchemaInstanceBase::format = 3;
          else if (argv[3][0] == 'e')
            XmlSchemaInstanceBase::format = 4;
          else if (argv[3][0] == 'E')
            XmlSchemaInstanceBase::format = 5;
          else
            usageMessage(argv[0]);
        }
      else
        usageMessage(argv[0]);
    }
  else if (argc < 8)
    {
      if (strcmp(argv[2], "-n") == 0)
        {
          XmlSchemaInstanceBase::format = 0;
          if (!sscanf(argv[3], "%d", &places))
            usageMessage(argv[0]);
          XmlSchemaInstanceBase::places = places;
        }
      else if (strcmp(argv[2], "-N") == 0)
        {
          XmlSchemaInstanceBase::format = 0;
          if (!sscanf(argv[3], "%d", &places))
            usageMessage(argv[0]);
          XmlSchemaInstanceBase::places = -places;
        }
      else
        usageMessage(argv[0]);
      if (strcmp(argv[4], "-f") == 0)
        {
          if (strlen(argv[5]) != 1)
            usageMessage(argv[0]);
          if (argv[5][0] == 'f')
            XmlSchemaInstanceBase::format = 0;
          else if (argv[5][0] == 'e')
            XmlSchemaInstanceBase::format = 1;
          else if (argv[5][0] == 'E')
            XmlSchemaInstanceBase::format = 2;
          else
            usageMessage(argv[0]);
        }
      if (strcmp(argv[4], "-F") == 0)
        {
          if (strlen(argv[5]) != 1)
            usageMessage(argv[0]);
          if (argv[5][0] == 'f')
            XmlSchemaInstanceBase::format = 3;
          else if (argv[5][0] == 'e')
            XmlSchemaInstanceBase::format = 4;
          else if (argv[5][0] == 'E')
            XmlSchemaInstanceBase::format = 5;
          else
            usageMessage(argv[0]);
        }
    }
  else
    {
      usageMessage(argv[0]);
    }
}

int main(       /* ARGUMENTS                                      */
 int argc,      /* one more than the number of command arguments  */
 char * argv[]) /* array of executable name and command arguments */
{
  std::string outFileName;
  FILE * inFile;
  FILE * outFile;
  int times;
  int result;
  char buffer[10];
#if defined(STRINGIN) || defined(STRINGOUT)
  char * inString;
  int inStringSize;
  int n;
#endif
#ifdef STRINGOUT
  char * outString;
  size_t outStringSize;
  size_t k;
#endif

  yyStartAnew = 0;
  readArguments(argc, argv, &times);
#if defined(STRINGIN) || defined(STRINGOUT)
  for (inStringSize = 10000; inStringSize <= MAX_SIZE; inStringSize *= 10)
    {
      inString = new char[inStringSize + 1];
      inFile = fopen(argv[1], "r");
      if (inFile == 0)
        {
          fprintf(stderr, "unable to open file %s for reading\n", argv[1]);
          exit(1);
        }
      for (n = 0; (((inString[n] = getc(inFile)) != EOF) &&
                   (n < inStringSize)); n++);
      fclose(inFile);
      if (n < inStringSize)
        break;
      else
        delete [] inString;
    }
  if (inStringSize > MAX_SIZE)
    {
      fprintf(stderr,
              "input file is too large (more than %d bytes), exiting\n",
              MAX_SIZE);
      return 1;
    }
  inString[n] = 0;
#endif
#ifdef STRINGOUT
  outStringSize = (size_t)(inStringSize * 2);
  outString = new char[inStringSize * 2];
#endif
  for (; times > 0; times--)
    {
#ifdef STRINGIN
      yyStringInputPointer = inString;
      yyStringInputEnd = (inString + n);
#else
      inFile = fopen(argv[1], "r");
      if (inFile == 0)
        {
          fprintf(stderr, "unable to open file %s for reading\n", argv[1]);
          exit(1);
        }
      yyin = inFile;
#endif
      yyStartAnew = 1;
      result = yyparse();
#ifndef STRINGIN
      fclose(inFile);
#endif
      if (result == 0)
        {
          outFileName = argv[1];
          sprintf(buffer, "%d", times);
          outFileName.append(buffer);
          outFile = fopen(outFileName.c_str(), "w");
#ifdef STRINGOUT
          k = 0;
          QIFDocumentTree->printSelf(outString, &outStringSize, &k);
          outString[k] = 0;
          fprintf(outFile, "%s", outString);
#else
          QIFDocumentTree->printSelf(outFile);
#endif
          fclose(outFile);
          delete QIFDocumentTree;
        }
    }
#if defined(STRINGIN) || defined(STRINGOUT)
  delete [] inString;
#endif
#ifdef STRINGOUT
  delete [] outString;
#endif
  yylex_destroy();
  return 0;
}
