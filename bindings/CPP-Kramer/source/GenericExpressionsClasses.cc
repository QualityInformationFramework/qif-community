/*********************************************************************/

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "ExpressionsClasses.hh"

#define INDENT 2

/*********************************************************************/
/*********************************************************************/

/* class AndType

*/

AndType::AndType() :
  BooleanExpressionBaseType()
{
  n = 0;
  BooleanExpression = 0;
}

AndType::AndType(
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  n = 0;
  BooleanExpression = BooleanExpressionIn;
}

AndType::AndType(
 NaturalType * nIn,
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  n = nIn;
  BooleanExpression = BooleanExpressionIn;
}

AndType::~AndType()
{
  #ifndef NODESTRUCT
  delete n;
  delete BooleanExpression;
  #endif
}

void AndType::printSelf(FILE * outFile)
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
    if (!BooleanExpression)
      {
        fprintf(stderr, "BooleanExpression list is missing\n");
        exit(1);
      }
    if (BooleanExpression->size() == 0)
      {
        fprintf(stderr, "BooleanExpression list is empty\n");
        exit(1);
      }
    std::list<BooleanExpressionBaseType *>::iterator iter;
    for (iter = BooleanExpression->begin();
         iter != BooleanExpression->end(); iter++)
      {
        BooleanExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Not") == 0)
          {
            NotType * typ;
            if ((typ = dynamic_cast<NotType *>(basie)))
              {
                fprintf(outFile, "<Not");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Not>\n");
              }
            else
              {
                fprintf(stderr, "bad Not element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ConstantIs") == 0)
          {
            ConstantIsType * typ;
            if ((typ = dynamic_cast<ConstantIsType *>(basie)))
              {
                fprintf(outFile, "<ConstantIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ConstantIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "And") == 0)
          {
            AndType * typ;
            if ((typ = dynamic_cast<AndType *>(basie)))
              {
                fprintf(outFile, "<And");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</And>\n");
              }
            else
              {
                fprintf(stderr, "bad And element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Or") == 0)
          {
            OrType * typ;
            if ((typ = dynamic_cast<OrType *>(basie)))
              {
                fprintf(outFile, "<Or");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Or>\n");
              }
            else
              {
                fprintf(stderr, "bad Or element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "BooleanEqual") == 0)
          {
            BooleanEqualType * typ;
            if ((typ = dynamic_cast<BooleanEqualType *>(basie)))
              {
                fprintf(outFile, "<BooleanEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BooleanEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad BooleanEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticEqual") == 0)
          {
            ArithmeticEqualType * typ;
            if ((typ = dynamic_cast<ArithmeticEqualType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterThan") == 0)
          {
            GreaterThanType * typ;
            if ((typ = dynamic_cast<GreaterThanType *>(basie)))
              {
                fprintf(outFile, "<GreaterThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterThan>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterOrEqual") == 0)
          {
            GreaterOrEqualType * typ;
            if ((typ = dynamic_cast<GreaterOrEqualType *>(basie)))
              {
                fprintf(outFile, "<GreaterOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessThan") == 0)
          {
            LessThanType * typ;
            if ((typ = dynamic_cast<LessThanType *>(basie)))
              {
                fprintf(outFile, "<LessThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessThan>\n");
              }
            else
              {
                fprintf(stderr, "bad LessThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessOrEqual") == 0)
          {
            LessOrEqualType * typ;
            if ((typ = dynamic_cast<LessOrEqualType *>(basie)))
              {
                fprintf(outFile, "<LessOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad LessOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TokenEqual") == 0)
          {
            TokenEqualType * typ;
            if ((typ = dynamic_cast<TokenEqualType *>(basie)))
              {
                fprintf(outFile, "<TokenEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TokenEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad TokenEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicIs") == 0)
          {
            CharacteristicIsType * typ;
            if ((typ = dynamic_cast<CharacteristicIsType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsDatum") == 0)
          {
            FeatureIsDatumType * typ;
            if ((typ = dynamic_cast<FeatureIsDatumType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsDatum");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsDatum element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsInternal") == 0)
          {
            FeatureIsInternalType * typ;
            if ((typ = dynamic_cast<FeatureIsInternalType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsInternal");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsInternal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureTypeIs") == 0)
          {
            FeatureTypeIsType * typ;
            if ((typ = dynamic_cast<FeatureTypeIsType *>(basie)))
              {
                fprintf(outFile, "<FeatureTypeIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureTypeIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "SamplingCategoryIs") == 0)
          {
            SamplingCategoryIsType * typ;
            if ((typ = dynamic_cast<SamplingCategoryIsType *>(basie)))
              {
                fprintf(outFile, "<SamplingCategoryIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad SamplingCategoryIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ShapeClassIs") == 0)
          {
            ShapeClassIsType * typ;
            if ((typ = dynamic_cast<ShapeClassIsType *>(basie)))
              {
                fprintf(outFile, "<ShapeClassIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ShapeClassIs element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad BooleanExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AndType::badAttributes(
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
              fprintf(stderr, "two values for n in AndType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AndType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AndType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AndType\n");
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

NaturalType * AndType::getn()
{return n;}

void AndType::setn(NaturalType * nIn)
{n = nIn;}

BooleanExpressionBaseTypeLisd * AndType::getBooleanExpression()
{return BooleanExpression;}

void AndType::setBooleanExpression(BooleanExpressionBaseTypeLisd * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

/*********************************************************************/

/* class ArithmeticComparisonBaseType

*/

ArithmeticComparisonBaseType::ArithmeticComparisonBaseType() :
  BooleanExpressionBaseType()
{
  ArithmeticExpression = 0;
}

ArithmeticComparisonBaseType::ArithmeticComparisonBaseType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  BooleanExpressionBaseType()
{
  ArithmeticExpression = ArithmeticExpressionIn;
}

ArithmeticComparisonBaseType::~ArithmeticComparisonBaseType()
{
  #ifndef NODESTRUCT
  delete ArithmeticExpression;
  #endif
}

void ArithmeticComparisonBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

ArithmeticExpressionBaseTypeLisd * ArithmeticComparisonBaseType::getArithmeticExpression()
{return ArithmeticExpression;}

void ArithmeticComparisonBaseType::setArithmeticExpression(ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/*********************************************************************/

/* class ArithmeticConstantType

*/

ArithmeticConstantType::ArithmeticConstantType() :
  ArithmeticExpressionBaseType()
{
  val = 0;
}

ArithmeticConstantType::ArithmeticConstantType(
 XmlDecimal * valIn) :
  ArithmeticExpressionBaseType()
{
  val = valIn;
}

ArithmeticConstantType::~ArithmeticConstantType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void ArithmeticConstantType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
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
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool ArithmeticConstantType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          XmlDecimal * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in ArithmeticConstantType\n");
              returnValue = true;
              break;
            }
          valVal = new XmlDecimal(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in ArithmeticConstantType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArithmeticConstantType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in ArithmeticConstantType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

XmlDecimal * ArithmeticConstantType::getval()
{return val;}

void ArithmeticConstantType::setval(XmlDecimal * valIn)
{val = valIn;}

/*********************************************************************/

/* class ArithmeticEqualType

*/

ArithmeticEqualType::ArithmeticEqualType() :
  ArithmeticComparisonBaseType() {}

ArithmeticEqualType::ArithmeticEqualType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticComparisonBaseType(
    ArithmeticExpressionIn)
{
}

ArithmeticEqualType::~ArithmeticEqualType() {}

void ArithmeticEqualType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class ArithmeticExpressionBaseType

*/

ArithmeticExpressionBaseType::ArithmeticExpressionBaseType()
{}

ArithmeticExpressionBaseType::~ArithmeticExpressionBaseType() {}

void ArithmeticExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class ArithmeticExpressionBaseTypeLisd

*/

ArithmeticExpressionBaseTypeLisd::ArithmeticExpressionBaseTypeLisd() {}

ArithmeticExpressionBaseTypeLisd::ArithmeticExpressionBaseTypeLisd(ArithmeticExpressionBaseType * aArithmeticExpressionBaseType)
{
  push_back(aArithmeticExpressionBaseType);
}

ArithmeticExpressionBaseTypeLisd::~ArithmeticExpressionBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ArithmeticExpressionBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ArithmeticExpressionBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class BinaryArithmeticExpressionBaseType

*/

BinaryArithmeticExpressionBaseType::BinaryArithmeticExpressionBaseType() :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = 0;
}

BinaryArithmeticExpressionBaseType::BinaryArithmeticExpressionBaseType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = ArithmeticExpressionIn;
}

BinaryArithmeticExpressionBaseType::~BinaryArithmeticExpressionBaseType()
{
  #ifndef NODESTRUCT
  delete ArithmeticExpression;
  #endif
}

void BinaryArithmeticExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

ArithmeticExpressionBaseTypeLisd * BinaryArithmeticExpressionBaseType::getArithmeticExpression()
{return ArithmeticExpression;}

void BinaryArithmeticExpressionBaseType::setArithmeticExpression(ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/*********************************************************************/

/* class BinaryBooleanExpressionBaseType

*/

BinaryBooleanExpressionBaseType::BinaryBooleanExpressionBaseType() :
  BooleanExpressionBaseType()
{
  BooleanExpression = 0;
}

BinaryBooleanExpressionBaseType::BinaryBooleanExpressionBaseType(
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  BooleanExpression = BooleanExpressionIn;
}

BinaryBooleanExpressionBaseType::~BinaryBooleanExpressionBaseType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  #endif
}

void BinaryBooleanExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!BooleanExpression)
      {
        fprintf(stderr, "BooleanExpression list is missing\n");
        exit(1);
      }
    if (BooleanExpression->size() == 0)
      {
        fprintf(stderr, "BooleanExpression list is empty\n");
        exit(1);
      }
    std::list<BooleanExpressionBaseType *>::iterator iter;
    for (iter = BooleanExpression->begin();
         iter != BooleanExpression->end(); iter++)
      {
        BooleanExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Not") == 0)
          {
            NotType * typ;
            if ((typ = dynamic_cast<NotType *>(basie)))
              {
                fprintf(outFile, "<Not");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Not>\n");
              }
            else
              {
                fprintf(stderr, "bad Not element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ConstantIs") == 0)
          {
            ConstantIsType * typ;
            if ((typ = dynamic_cast<ConstantIsType *>(basie)))
              {
                fprintf(outFile, "<ConstantIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ConstantIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "And") == 0)
          {
            AndType * typ;
            if ((typ = dynamic_cast<AndType *>(basie)))
              {
                fprintf(outFile, "<And");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</And>\n");
              }
            else
              {
                fprintf(stderr, "bad And element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Or") == 0)
          {
            OrType * typ;
            if ((typ = dynamic_cast<OrType *>(basie)))
              {
                fprintf(outFile, "<Or");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Or>\n");
              }
            else
              {
                fprintf(stderr, "bad Or element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "BooleanEqual") == 0)
          {
            BooleanEqualType * typ;
            if ((typ = dynamic_cast<BooleanEqualType *>(basie)))
              {
                fprintf(outFile, "<BooleanEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BooleanEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad BooleanEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticEqual") == 0)
          {
            ArithmeticEqualType * typ;
            if ((typ = dynamic_cast<ArithmeticEqualType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterThan") == 0)
          {
            GreaterThanType * typ;
            if ((typ = dynamic_cast<GreaterThanType *>(basie)))
              {
                fprintf(outFile, "<GreaterThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterThan>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterOrEqual") == 0)
          {
            GreaterOrEqualType * typ;
            if ((typ = dynamic_cast<GreaterOrEqualType *>(basie)))
              {
                fprintf(outFile, "<GreaterOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessThan") == 0)
          {
            LessThanType * typ;
            if ((typ = dynamic_cast<LessThanType *>(basie)))
              {
                fprintf(outFile, "<LessThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessThan>\n");
              }
            else
              {
                fprintf(stderr, "bad LessThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessOrEqual") == 0)
          {
            LessOrEqualType * typ;
            if ((typ = dynamic_cast<LessOrEqualType *>(basie)))
              {
                fprintf(outFile, "<LessOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad LessOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TokenEqual") == 0)
          {
            TokenEqualType * typ;
            if ((typ = dynamic_cast<TokenEqualType *>(basie)))
              {
                fprintf(outFile, "<TokenEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TokenEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad TokenEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicIs") == 0)
          {
            CharacteristicIsType * typ;
            if ((typ = dynamic_cast<CharacteristicIsType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsDatum") == 0)
          {
            FeatureIsDatumType * typ;
            if ((typ = dynamic_cast<FeatureIsDatumType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsDatum");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsDatum element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsInternal") == 0)
          {
            FeatureIsInternalType * typ;
            if ((typ = dynamic_cast<FeatureIsInternalType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsInternal");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsInternal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureTypeIs") == 0)
          {
            FeatureTypeIsType * typ;
            if ((typ = dynamic_cast<FeatureTypeIsType *>(basie)))
              {
                fprintf(outFile, "<FeatureTypeIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureTypeIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "SamplingCategoryIs") == 0)
          {
            SamplingCategoryIsType * typ;
            if ((typ = dynamic_cast<SamplingCategoryIsType *>(basie)))
              {
                fprintf(outFile, "<SamplingCategoryIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad SamplingCategoryIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ShapeClassIs") == 0)
          {
            ShapeClassIsType * typ;
            if ((typ = dynamic_cast<ShapeClassIsType *>(basie)))
              {
                fprintf(outFile, "<ShapeClassIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ShapeClassIs element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad BooleanExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

BooleanExpressionBaseTypeLisd * BinaryBooleanExpressionBaseType::getBooleanExpression()
{return BooleanExpression;}

void BinaryBooleanExpressionBaseType::setBooleanExpression(BooleanExpressionBaseTypeLisd * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

/*********************************************************************/

/* class BooleanConstantEnumType

*/

BooleanConstantEnumType::BooleanConstantEnumType() :
  XmlNMTOKEN()
{
}

BooleanConstantEnumType::BooleanConstantEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "QIF_TRUE") &&
           strcmp(val.c_str(), "QIF_FALSE"));
}

BooleanConstantEnumType::~BooleanConstantEnumType() {}

bool BooleanConstantEnumType::BooleanConstantEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "QIF_TRUE") &&
          strcmp(val.c_str(), "QIF_FALSE"));
}

void BooleanConstantEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "BooleanConstantEnumType");
}

void BooleanConstantEnumType::printSelf(FILE * outFile)
{
  if (BooleanConstantEnumTypeIsBad())
    {
      fprintf(stderr, "bad BooleanConstantEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void BooleanConstantEnumType::oPrintSelf(FILE * outFile)
{
  if (BooleanConstantEnumTypeIsBad())
    {
      fprintf(stderr, "bad BooleanConstantEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class BooleanEqualType

*/

BooleanEqualType::BooleanEqualType() :
  BinaryBooleanExpressionBaseType() {}

BooleanEqualType::BooleanEqualType(
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BinaryBooleanExpressionBaseType(
    BooleanExpressionIn)
{
}

BooleanEqualType::~BooleanEqualType() {}

void BooleanEqualType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!BooleanExpression)
      {
        fprintf(stderr, "BooleanExpression list is missing\n");
        exit(1);
      }
    if (BooleanExpression->size() == 0)
      {
        fprintf(stderr, "BooleanExpression list is empty\n");
        exit(1);
      }
    std::list<BooleanExpressionBaseType *>::iterator iter;
    for (iter = BooleanExpression->begin();
         iter != BooleanExpression->end(); iter++)
      {
        BooleanExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Not") == 0)
          {
            NotType * typ;
            if ((typ = dynamic_cast<NotType *>(basie)))
              {
                fprintf(outFile, "<Not");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Not>\n");
              }
            else
              {
                fprintf(stderr, "bad Not element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ConstantIs") == 0)
          {
            ConstantIsType * typ;
            if ((typ = dynamic_cast<ConstantIsType *>(basie)))
              {
                fprintf(outFile, "<ConstantIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ConstantIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "And") == 0)
          {
            AndType * typ;
            if ((typ = dynamic_cast<AndType *>(basie)))
              {
                fprintf(outFile, "<And");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</And>\n");
              }
            else
              {
                fprintf(stderr, "bad And element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Or") == 0)
          {
            OrType * typ;
            if ((typ = dynamic_cast<OrType *>(basie)))
              {
                fprintf(outFile, "<Or");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Or>\n");
              }
            else
              {
                fprintf(stderr, "bad Or element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "BooleanEqual") == 0)
          {
            BooleanEqualType * typ;
            if ((typ = dynamic_cast<BooleanEqualType *>(basie)))
              {
                fprintf(outFile, "<BooleanEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BooleanEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad BooleanEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticEqual") == 0)
          {
            ArithmeticEqualType * typ;
            if ((typ = dynamic_cast<ArithmeticEqualType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterThan") == 0)
          {
            GreaterThanType * typ;
            if ((typ = dynamic_cast<GreaterThanType *>(basie)))
              {
                fprintf(outFile, "<GreaterThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterThan>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterOrEqual") == 0)
          {
            GreaterOrEqualType * typ;
            if ((typ = dynamic_cast<GreaterOrEqualType *>(basie)))
              {
                fprintf(outFile, "<GreaterOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessThan") == 0)
          {
            LessThanType * typ;
            if ((typ = dynamic_cast<LessThanType *>(basie)))
              {
                fprintf(outFile, "<LessThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessThan>\n");
              }
            else
              {
                fprintf(stderr, "bad LessThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessOrEqual") == 0)
          {
            LessOrEqualType * typ;
            if ((typ = dynamic_cast<LessOrEqualType *>(basie)))
              {
                fprintf(outFile, "<LessOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad LessOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TokenEqual") == 0)
          {
            TokenEqualType * typ;
            if ((typ = dynamic_cast<TokenEqualType *>(basie)))
              {
                fprintf(outFile, "<TokenEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TokenEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad TokenEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicIs") == 0)
          {
            CharacteristicIsType * typ;
            if ((typ = dynamic_cast<CharacteristicIsType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsDatum") == 0)
          {
            FeatureIsDatumType * typ;
            if ((typ = dynamic_cast<FeatureIsDatumType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsDatum");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsDatum element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsInternal") == 0)
          {
            FeatureIsInternalType * typ;
            if ((typ = dynamic_cast<FeatureIsInternalType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsInternal");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsInternal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureTypeIs") == 0)
          {
            FeatureTypeIsType * typ;
            if ((typ = dynamic_cast<FeatureTypeIsType *>(basie)))
              {
                fprintf(outFile, "<FeatureTypeIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureTypeIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "SamplingCategoryIs") == 0)
          {
            SamplingCategoryIsType * typ;
            if ((typ = dynamic_cast<SamplingCategoryIsType *>(basie)))
              {
                fprintf(outFile, "<SamplingCategoryIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad SamplingCategoryIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ShapeClassIs") == 0)
          {
            ShapeClassIsType * typ;
            if ((typ = dynamic_cast<ShapeClassIsType *>(basie)))
              {
                fprintf(outFile, "<ShapeClassIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ShapeClassIs element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad BooleanExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class BooleanExpressionBaseType

*/

BooleanExpressionBaseType::BooleanExpressionBaseType()
{}

BooleanExpressionBaseType::~BooleanExpressionBaseType() {}

void BooleanExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class BooleanExpressionBaseTypeLisd

*/

BooleanExpressionBaseTypeLisd::BooleanExpressionBaseTypeLisd() {}

BooleanExpressionBaseTypeLisd::BooleanExpressionBaseTypeLisd(BooleanExpressionBaseType * aBooleanExpressionBaseType)
{
  push_back(aBooleanExpressionBaseType);
}

BooleanExpressionBaseTypeLisd::~BooleanExpressionBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<BooleanExpressionBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void BooleanExpressionBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class ConstantIsType

*/

ConstantIsType::ConstantIsType() :
  BooleanExpressionBaseType()
{
  val = 0;
}

ConstantIsType::ConstantIsType(
 BooleanConstantEnumType * valIn) :
  BooleanExpressionBaseType()
{
  val = valIn;
}

ConstantIsType::~ConstantIsType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void ConstantIsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
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
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool ConstantIsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          BooleanConstantEnumType * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in ConstantIsType\n");
              returnValue = true;
              break;
            }
          valVal = new BooleanConstantEnumType(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in ConstantIsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ConstantIsType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in ConstantIsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

BooleanConstantEnumType * ConstantIsType::getval()
{return val;}

void ConstantIsType::setval(BooleanConstantEnumType * valIn)
{val = valIn;}

/*********************************************************************/

/* class DividedByType

*/

DividedByType::DividedByType() :
  BinaryArithmeticExpressionBaseType() {}

DividedByType::DividedByType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  BinaryArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

DividedByType::~DividedByType() {}

void DividedByType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class GreaterOrEqualType

*/

GreaterOrEqualType::GreaterOrEqualType() :
  ArithmeticComparisonBaseType() {}

GreaterOrEqualType::GreaterOrEqualType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticComparisonBaseType(
    ArithmeticExpressionIn)
{
}

GreaterOrEqualType::~GreaterOrEqualType() {}

void GreaterOrEqualType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class GreaterThanType

*/

GreaterThanType::GreaterThanType() :
  ArithmeticComparisonBaseType() {}

GreaterThanType::GreaterThanType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticComparisonBaseType(
    ArithmeticExpressionIn)
{
}

GreaterThanType::~GreaterThanType() {}

void GreaterThanType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class LessOrEqualType

*/

LessOrEqualType::LessOrEqualType() :
  ArithmeticComparisonBaseType() {}

LessOrEqualType::LessOrEqualType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticComparisonBaseType(
    ArithmeticExpressionIn)
{
}

LessOrEqualType::~LessOrEqualType() {}

void LessOrEqualType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class LessThanType

*/

LessThanType::LessThanType() :
  ArithmeticComparisonBaseType() {}

LessThanType::LessThanType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticComparisonBaseType(
    ArithmeticExpressionIn)
{
}

LessThanType::~LessThanType() {}

void LessThanType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class MaxType

*/

MaxType::MaxType() :
  PolyadicArithmeticExpressionBaseType() {}

MaxType::MaxType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

MaxType::~MaxType() {}

void MaxType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class MinType

*/

MinType::MinType() :
  PolyadicArithmeticExpressionBaseType() {}

MinType::MinType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

MinType::~MinType() {}

void MinType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class MinusType

*/

MinusType::MinusType() :
  BinaryArithmeticExpressionBaseType() {}

MinusType::MinusType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  BinaryArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

MinusType::~MinusType() {}

void MinusType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class NegateType

*/

NegateType::NegateType() :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = 0;
}

NegateType::NegateType(
 ArithmeticExpressionBaseType * ArithmeticExpressionIn) :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = ArithmeticExpressionIn;
}

NegateType::~NegateType()
{
  #ifndef NODESTRUCT
  delete ArithmeticExpression;
  #endif
}

void NegateType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (ArithmeticExpression->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticConstant") == 0)
      {
        ArithmeticConstantType * typ;
        if ((typ = dynamic_cast<ArithmeticConstantType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticConstant");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ArithmeticConstant element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Plus") == 0)
      {
        PlusType * typ;
        if ((typ = dynamic_cast<PlusType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Plus");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Plus>\n");
          }
        else
          {
            fprintf(stderr, "bad Plus element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Max") == 0)
      {
        MaxType * typ;
        if ((typ = dynamic_cast<MaxType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Max");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Max>\n");
          }
        else
          {
            fprintf(stderr, "bad Max element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Min") == 0)
      {
        MinType * typ;
        if ((typ = dynamic_cast<MinType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Min");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Min>\n");
          }
        else
          {
            fprintf(stderr, "bad Min element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Minus") == 0)
      {
        MinusType * typ;
        if ((typ = dynamic_cast<MinusType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Minus");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Minus>\n");
          }
        else
          {
            fprintf(stderr, "bad Minus element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Negate") == 0)
      {
        NegateType * typ;
        if ((typ = dynamic_cast<NegateType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Negate");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Negate>\n");
          }
        else
          {
            fprintf(stderr, "bad Negate element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Times") == 0)
      {
        TimesType * typ;
        if ((typ = dynamic_cast<TimesType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Times");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Times>\n");
          }
        else
          {
            fprintf(stderr, "bad Times element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "DividedBy") == 0)
      {
        DividedByType * typ;
        if ((typ = dynamic_cast<DividedByType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<DividedBy");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</DividedBy>\n");
          }
        else
          {
            fprintf(stderr, "bad DividedBy element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticFeatureParameter") == 0)
      {
        ArithmeticFeatureParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticFeatureParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticFeatureParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticCharacteristicParameter") == 0)
      {
        ArithmeticCharacteristicParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticCharacteristicParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticDMEParameter") == 0)
      {
        ArithmeticDMEParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticDMEParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticDMEParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticDMEParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticParameterValue") == 0)
      {
        ArithmeticParameterValueType * typ;
        if ((typ = dynamic_cast<ArithmeticParameterValueType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticParameterValue");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticParameterValue>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticParameterValue element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticPartParameter") == 0)
      {
        ArithmeticPartParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticPartParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticPartParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticPartParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticPartParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "CharacteristicTolerance") == 0)
      {
        CharacteristicToleranceType * typ;
        if ((typ = dynamic_cast<CharacteristicToleranceType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<CharacteristicTolerance");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad CharacteristicTolerance element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureLength") == 0)
      {
        FeatureLengthType * typ;
        if ((typ = dynamic_cast<FeatureLengthType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureLength");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureLength element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureArea") == 0)
      {
        FeatureAreaType * typ;
        if ((typ = dynamic_cast<FeatureAreaType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureArea");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureArea element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureSize") == 0)
      {
        FeatureSizeType * typ;
        if ((typ = dynamic_cast<FeatureSizeType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureSize");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureSize element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "VariableValue") == 0)
      {
        VariableValueType * typ;
        if ((typ = dynamic_cast<VariableValueType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<VariableValue");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableValue>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableValue element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad ArithmeticExpression type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

ArithmeticExpressionBaseType * NegateType::getArithmeticExpression()
{return ArithmeticExpression;}

void NegateType::setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/*********************************************************************/

/* class NotType

*/

NotType::NotType() :
  BooleanExpressionBaseType()
{
  BooleanExpression = 0;
}

NotType::NotType(
 BooleanExpressionBaseType * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  BooleanExpression = BooleanExpressionIn;
}

NotType::~NotType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  #endif
}

void NotType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (BooleanExpression->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(BooleanExpression->printElement, "Not") == 0)
      {
        NotType * typ;
        if ((typ = dynamic_cast<NotType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Not");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Not>\n");
          }
        else
          {
            fprintf(stderr, "bad Not element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ConstantIs") == 0)
      {
        ConstantIsType * typ;
        if ((typ = dynamic_cast<ConstantIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ConstantIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ConstantIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "And") == 0)
      {
        AndType * typ;
        if ((typ = dynamic_cast<AndType *>(BooleanExpression)))
          {
            fprintf(outFile, "<And");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</And>\n");
          }
        else
          {
            fprintf(stderr, "bad And element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "Or") == 0)
      {
        OrType * typ;
        if ((typ = dynamic_cast<OrType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Or");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Or>\n");
          }
        else
          {
            fprintf(stderr, "bad Or element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "BooleanEqual") == 0)
      {
        BooleanEqualType * typ;
        if ((typ = dynamic_cast<BooleanEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<BooleanEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</BooleanEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad BooleanEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ArithmeticEqual") == 0)
      {
        ArithmeticEqualType * typ;
        if ((typ = dynamic_cast<ArithmeticEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ArithmeticEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterThan") == 0)
      {
        GreaterThanType * typ;
        if ((typ = dynamic_cast<GreaterThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterThan>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterOrEqual") == 0)
      {
        GreaterOrEqualType * typ;
        if ((typ = dynamic_cast<GreaterOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessThan") == 0)
      {
        LessThanType * typ;
        if ((typ = dynamic_cast<LessThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessThan>\n");
          }
        else
          {
            fprintf(stderr, "bad LessThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessOrEqual") == 0)
      {
        LessOrEqualType * typ;
        if ((typ = dynamic_cast<LessOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad LessOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "TokenEqual") == 0)
      {
        TokenEqualType * typ;
        if ((typ = dynamic_cast<TokenEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<TokenEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</TokenEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad TokenEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "CharacteristicIs") == 0)
      {
        CharacteristicIsType * typ;
        if ((typ = dynamic_cast<CharacteristicIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<CharacteristicIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad CharacteristicIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsDatum") == 0)
      {
        FeatureIsDatumType * typ;
        if ((typ = dynamic_cast<FeatureIsDatumType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsDatum");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsDatum element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsInternal") == 0)
      {
        FeatureIsInternalType * typ;
        if ((typ = dynamic_cast<FeatureIsInternalType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsInternal");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsInternal element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureTypeIs") == 0)
      {
        FeatureTypeIsType * typ;
        if ((typ = dynamic_cast<FeatureTypeIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureTypeIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureTypeIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "SamplingCategoryIs") == 0)
      {
        SamplingCategoryIsType * typ;
        if ((typ = dynamic_cast<SamplingCategoryIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<SamplingCategoryIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad SamplingCategoryIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ShapeClassIs") == 0)
      {
        ShapeClassIsType * typ;
        if ((typ = dynamic_cast<ShapeClassIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ShapeClassIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ShapeClassIs element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad BooleanExpression type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

BooleanExpressionBaseType * NotType::getBooleanExpression()
{return BooleanExpression;}

void NotType::setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

/*********************************************************************/

/* class OrType

*/

OrType::OrType() :
  BooleanExpressionBaseType()
{
  n = 0;
  BooleanExpression = 0;
}

OrType::OrType(
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  n = 0;
  BooleanExpression = BooleanExpressionIn;
}

OrType::OrType(
 NaturalType * nIn,
 BooleanExpressionBaseTypeLisd * BooleanExpressionIn) :
  BooleanExpressionBaseType()
{
  n = nIn;
  BooleanExpression = BooleanExpressionIn;
}

OrType::~OrType()
{
  #ifndef NODESTRUCT
  delete n;
  delete BooleanExpression;
  #endif
}

void OrType::printSelf(FILE * outFile)
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
    if (!BooleanExpression)
      {
        fprintf(stderr, "BooleanExpression list is missing\n");
        exit(1);
      }
    if (BooleanExpression->size() == 0)
      {
        fprintf(stderr, "BooleanExpression list is empty\n");
        exit(1);
      }
    std::list<BooleanExpressionBaseType *>::iterator iter;
    for (iter = BooleanExpression->begin();
         iter != BooleanExpression->end(); iter++)
      {
        BooleanExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "Not") == 0)
          {
            NotType * typ;
            if ((typ = dynamic_cast<NotType *>(basie)))
              {
                fprintf(outFile, "<Not");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Not>\n");
              }
            else
              {
                fprintf(stderr, "bad Not element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ConstantIs") == 0)
          {
            ConstantIsType * typ;
            if ((typ = dynamic_cast<ConstantIsType *>(basie)))
              {
                fprintf(outFile, "<ConstantIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ConstantIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "And") == 0)
          {
            AndType * typ;
            if ((typ = dynamic_cast<AndType *>(basie)))
              {
                fprintf(outFile, "<And");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</And>\n");
              }
            else
              {
                fprintf(stderr, "bad And element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Or") == 0)
          {
            OrType * typ;
            if ((typ = dynamic_cast<OrType *>(basie)))
              {
                fprintf(outFile, "<Or");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Or>\n");
              }
            else
              {
                fprintf(stderr, "bad Or element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "BooleanEqual") == 0)
          {
            BooleanEqualType * typ;
            if ((typ = dynamic_cast<BooleanEqualType *>(basie)))
              {
                fprintf(outFile, "<BooleanEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BooleanEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad BooleanEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticEqual") == 0)
          {
            ArithmeticEqualType * typ;
            if ((typ = dynamic_cast<ArithmeticEqualType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterThan") == 0)
          {
            GreaterThanType * typ;
            if ((typ = dynamic_cast<GreaterThanType *>(basie)))
              {
                fprintf(outFile, "<GreaterThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterThan>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GreaterOrEqual") == 0)
          {
            GreaterOrEqualType * typ;
            if ((typ = dynamic_cast<GreaterOrEqualType *>(basie)))
              {
                fprintf(outFile, "<GreaterOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GreaterOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad GreaterOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessThan") == 0)
          {
            LessThanType * typ;
            if ((typ = dynamic_cast<LessThanType *>(basie)))
              {
                fprintf(outFile, "<LessThan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessThan>\n");
              }
            else
              {
                fprintf(stderr, "bad LessThan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LessOrEqual") == 0)
          {
            LessOrEqualType * typ;
            if ((typ = dynamic_cast<LessOrEqualType *>(basie)))
              {
                fprintf(outFile, "<LessOrEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LessOrEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad LessOrEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TokenEqual") == 0)
          {
            TokenEqualType * typ;
            if ((typ = dynamic_cast<TokenEqualType *>(basie)))
              {
                fprintf(outFile, "<TokenEqual");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TokenEqual>\n");
              }
            else
              {
                fprintf(stderr, "bad TokenEqual element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicIs") == 0)
          {
            CharacteristicIsType * typ;
            if ((typ = dynamic_cast<CharacteristicIsType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsDatum") == 0)
          {
            FeatureIsDatumType * typ;
            if ((typ = dynamic_cast<FeatureIsDatumType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsDatum");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsDatum element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureIsInternal") == 0)
          {
            FeatureIsInternalType * typ;
            if ((typ = dynamic_cast<FeatureIsInternalType *>(basie)))
              {
                fprintf(outFile, "<FeatureIsInternal");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureIsInternal element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureTypeIs") == 0)
          {
            FeatureTypeIsType * typ;
            if ((typ = dynamic_cast<FeatureTypeIsType *>(basie)))
              {
                fprintf(outFile, "<FeatureTypeIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureTypeIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "SamplingCategoryIs") == 0)
          {
            SamplingCategoryIsType * typ;
            if ((typ = dynamic_cast<SamplingCategoryIsType *>(basie)))
              {
                fprintf(outFile, "<SamplingCategoryIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad SamplingCategoryIs element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ShapeClassIs") == 0)
          {
            ShapeClassIsType * typ;
            if ((typ = dynamic_cast<ShapeClassIsType *>(basie)))
              {
                fprintf(outFile, "<ShapeClassIs");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ShapeClassIs element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad BooleanExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool OrType::badAttributes(
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
              fprintf(stderr, "two values for n in OrType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in OrType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in OrType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in OrType\n");
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

NaturalType * OrType::getn()
{return n;}

void OrType::setn(NaturalType * nIn)
{n = nIn;}

BooleanExpressionBaseTypeLisd * OrType::getBooleanExpression()
{return BooleanExpression;}

void OrType::setBooleanExpression(BooleanExpressionBaseTypeLisd * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

/*********************************************************************/

/* class PlusType

*/

PlusType::PlusType() :
  PolyadicArithmeticExpressionBaseType() {}

PlusType::PlusType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

PlusType::~PlusType() {}

void PlusType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class PolyadicArithmeticExpressionBaseType

*/

PolyadicArithmeticExpressionBaseType::PolyadicArithmeticExpressionBaseType() :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = 0;
}

PolyadicArithmeticExpressionBaseType::PolyadicArithmeticExpressionBaseType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  ArithmeticExpressionBaseType()
{
  ArithmeticExpression = ArithmeticExpressionIn;
}

PolyadicArithmeticExpressionBaseType::~PolyadicArithmeticExpressionBaseType()
{
  #ifndef NODESTRUCT
  delete ArithmeticExpression;
  #endif
}

void PolyadicArithmeticExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

ArithmeticExpressionBaseTypeLisd * PolyadicArithmeticExpressionBaseType::getArithmeticExpression()
{return ArithmeticExpression;}

void PolyadicArithmeticExpressionBaseType::setArithmeticExpression(ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/*********************************************************************/

/* class TimesType

*/

TimesType::TimesType() :
  PolyadicArithmeticExpressionBaseType() {}

TimesType::TimesType(
 ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn) :
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionIn)
{
}

TimesType::~TimesType() {}

void TimesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ArithmeticExpression)
      {
        fprintf(stderr, "ArithmeticExpression list is missing\n");
        exit(1);
      }
    if (ArithmeticExpression->size() == 0)
      {
        fprintf(stderr, "ArithmeticExpression list is empty\n");
        exit(1);
      }
    std::list<ArithmeticExpressionBaseType *>::iterator iter;
    for (iter = ArithmeticExpression->begin();
         iter != ArithmeticExpression->end(); iter++)
      {
        ArithmeticExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "ArithmeticConstant") == 0)
          {
            ArithmeticConstantType * typ;
            if ((typ = dynamic_cast<ArithmeticConstantType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad ArithmeticConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Plus") == 0)
          {
            PlusType * typ;
            if ((typ = dynamic_cast<PlusType *>(basie)))
              {
                fprintf(outFile, "<Plus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Plus>\n");
              }
            else
              {
                fprintf(stderr, "bad Plus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Max") == 0)
          {
            MaxType * typ;
            if ((typ = dynamic_cast<MaxType *>(basie)))
              {
                fprintf(outFile, "<Max");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Max>\n");
              }
            else
              {
                fprintf(stderr, "bad Max element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Min") == 0)
          {
            MinType * typ;
            if ((typ = dynamic_cast<MinType *>(basie)))
              {
                fprintf(outFile, "<Min");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Min>\n");
              }
            else
              {
                fprintf(stderr, "bad Min element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Minus") == 0)
          {
            MinusType * typ;
            if ((typ = dynamic_cast<MinusType *>(basie)))
              {
                fprintf(outFile, "<Minus");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Minus>\n");
              }
            else
              {
                fprintf(stderr, "bad Minus element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Negate") == 0)
          {
            NegateType * typ;
            if ((typ = dynamic_cast<NegateType *>(basie)))
              {
                fprintf(outFile, "<Negate");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Negate>\n");
              }
            else
              {
                fprintf(stderr, "bad Negate element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Times") == 0)
          {
            TimesType * typ;
            if ((typ = dynamic_cast<TimesType *>(basie)))
              {
                fprintf(outFile, "<Times");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Times>\n");
              }
            else
              {
                fprintf(stderr, "bad Times element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DividedBy") == 0)
          {
            DividedByType * typ;
            if ((typ = dynamic_cast<DividedByType *>(basie)))
              {
                fprintf(outFile, "<DividedBy");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DividedBy>\n");
              }
            else
              {
                fprintf(stderr, "bad DividedBy element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticFeatureParameter") == 0)
          {
            ArithmeticFeatureParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticFeatureParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticFeatureParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticCharacteristicParameter") == 0)
          {
            ArithmeticCharacteristicParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticCharacteristicParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticDMEParameter") == 0)
          {
            ArithmeticDMEParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticDMEParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticDMEParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticDMEParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticParameterValue") == 0)
          {
            ArithmeticParameterValueType * typ;
            if ((typ = dynamic_cast<ArithmeticParameterValueType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticParameterValue element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ArithmeticPartParameter") == 0)
          {
            ArithmeticPartParameterType * typ;
            if ((typ = dynamic_cast<ArithmeticPartParameterType *>(basie)))
              {
                fprintf(outFile, "<ArithmeticPartParameter");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ArithmeticPartParameter>\n");
              }
            else
              {
                fprintf(stderr, "bad ArithmeticPartParameter element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CharacteristicTolerance") == 0)
          {
            CharacteristicToleranceType * typ;
            if ((typ = dynamic_cast<CharacteristicToleranceType *>(basie)))
              {
                fprintf(outFile, "<CharacteristicTolerance");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad CharacteristicTolerance element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureLength") == 0)
          {
            FeatureLengthType * typ;
            if ((typ = dynamic_cast<FeatureLengthType *>(basie)))
              {
                fprintf(outFile, "<FeatureLength");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureLength element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureArea") == 0)
          {
            FeatureAreaType * typ;
            if ((typ = dynamic_cast<FeatureAreaType *>(basie)))
              {
                fprintf(outFile, "<FeatureArea");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureArea element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "FeatureSize") == 0)
          {
            FeatureSizeType * typ;
            if ((typ = dynamic_cast<FeatureSizeType *>(basie)))
              {
                fprintf(outFile, "<FeatureSize");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad FeatureSize element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableValue") == 0)
          {
            VariableValueType * typ;
            if ((typ = dynamic_cast<VariableValueType *>(basie)))
              {
                fprintf(outFile, "<VariableValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableValue>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ArithmeticExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class TokenConstantType

*/

TokenConstantType::TokenConstantType() :
  TokenExpressionBaseType()
{
  val = 0;
}

TokenConstantType::TokenConstantType(
 XmlToken * valIn) :
  TokenExpressionBaseType()
{
  val = valIn;
}

TokenConstantType::~TokenConstantType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void TokenConstantType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
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
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool TokenConstantType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          XmlToken * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in TokenConstantType\n");
              returnValue = true;
              break;
            }
          valVal = new XmlToken(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in TokenConstantType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TokenConstantType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in TokenConstantType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

XmlToken * TokenConstantType::getval()
{return val;}

void TokenConstantType::setval(XmlToken * valIn)
{val = valIn;}

/*********************************************************************/

/* class TokenEqualType

*/

TokenEqualType::TokenEqualType() :
  BooleanExpressionBaseType()
{
  TokenExpression = 0;
}

TokenEqualType::TokenEqualType(
 TokenExpressionBaseTypeLisd * TokenExpressionIn) :
  BooleanExpressionBaseType()
{
  TokenExpression = TokenExpressionIn;
}

TokenEqualType::~TokenEqualType()
{
  #ifndef NODESTRUCT
  delete TokenExpression;
  #endif
}

void TokenEqualType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!TokenExpression)
      {
        fprintf(stderr, "TokenExpression list is missing\n");
        exit(1);
      }
    if (TokenExpression->size() == 0)
      {
        fprintf(stderr, "TokenExpression list is empty\n");
        exit(1);
      }
    std::list<TokenExpressionBaseType *>::iterator iter;
    for (iter = TokenExpression->begin();
         iter != TokenExpression->end(); iter++)
      {
        TokenExpressionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "TokenConstant") == 0)
          {
            TokenConstantType * typ;
            if ((typ = dynamic_cast<TokenConstantType *>(basie)))
              {
                fprintf(outFile, "<TokenConstant");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad TokenConstant element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TokenParameterValue") == 0)
          {
            TokenParameterValueType * typ;
            if ((typ = dynamic_cast<TokenParameterValueType *>(basie)))
              {
                fprintf(outFile, "<TokenParameterValue");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TokenParameterValue>\n");
              }
            else
              {
                fprintf(stderr, "bad TokenParameterValue element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad TokenExpression type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

TokenExpressionBaseTypeLisd * TokenEqualType::getTokenExpression()
{return TokenExpression;}

void TokenEqualType::setTokenExpression(TokenExpressionBaseTypeLisd * TokenExpressionIn)
{TokenExpression = TokenExpressionIn;}

/*********************************************************************/

/* class TokenExpressionBaseType

*/

TokenExpressionBaseType::TokenExpressionBaseType()
{}

TokenExpressionBaseType::~TokenExpressionBaseType() {}

void TokenExpressionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class TokenExpressionBaseTypeLisd

*/

TokenExpressionBaseTypeLisd::TokenExpressionBaseTypeLisd() {}

TokenExpressionBaseTypeLisd::TokenExpressionBaseTypeLisd(TokenExpressionBaseType * aTokenExpressionBaseType)
{
  push_back(aTokenExpressionBaseType);
}

TokenExpressionBaseTypeLisd::~TokenExpressionBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TokenExpressionBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TokenExpressionBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class TokenParameterValueType

*/

TokenParameterValueType::TokenParameterValueType() :
  TokenExpressionBaseType()
{
  Parameter = 0;
  ObjectId = 0;
}

TokenParameterValueType::TokenParameterValueType(
 XmlToken * ParameterIn,
 QIFReferenceFullType * ObjectIdIn) :
  TokenExpressionBaseType()
{
  Parameter = ParameterIn;
  ObjectId = ObjectIdIn;
}

TokenParameterValueType::~TokenParameterValueType()
{
  #ifndef NODESTRUCT
  delete Parameter;
  delete ObjectId;
  #endif
}

void TokenParameterValueType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ObjectId");
  ObjectId->printSelf(outFile);
  fprintf(outFile, "</ObjectId>\n");
  doSpaces(-INDENT, outFile);
}

XmlToken * TokenParameterValueType::getParameter()
{return Parameter;}

void TokenParameterValueType::setParameter(XmlToken * ParameterIn)
{Parameter = ParameterIn;}

QIFReferenceFullType * TokenParameterValueType::getObjectId()
{return ObjectId;}

void TokenParameterValueType::setObjectId(QIFReferenceFullType * ObjectIdIn)
{ObjectId = ObjectIdIn;}

/*********************************************************************/

