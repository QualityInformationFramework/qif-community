/* ***************************************************************** */

#ifndef GENERICEXPRESSIONS_HH
#define GENERICEXPRESSIONS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesClasses.hh"

/* ***************************************************************** */

class AndType;
class ArithmeticComparisonBaseType;
class ArithmeticConstantType;
class ArithmeticEqualType;
class ArithmeticExpressionBaseType;
class ArithmeticExpressionBaseTypeLisd;
class BinaryArithmeticExpressionBaseType;
class BinaryBooleanExpressionBaseType;
class BooleanConstantEnumType;
class BooleanEqualType;
class BooleanExpressionBaseType;
class BooleanExpressionBaseTypeLisd;
class ConstantIsType;
class DividedByType;
class GreaterOrEqualType;
class GreaterThanType;
class LessOrEqualType;
class LessThanType;
class MaxType;
class MinType;
class MinusType;
class NegateType;
class NotType;
class OrType;
class PlusType;
class PolyadicArithmeticExpressionBaseType;
class TimesType;
class TokenConstantType;
class TokenEqualType;
class TokenExpressionBaseType;
class TokenExpressionBaseTypeLisd;
class TokenParameterValueType;

/* ***************************************************************** */
/* ***************************************************************** */

class ArithmeticExpressionBaseType :
  public XmlTypeBase
{
public:
  ArithmeticExpressionBaseType();
  ~ArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ArithmeticExpressionBaseTypeLisd :
  public std::list<ArithmeticExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  ArithmeticExpressionBaseTypeLisd();
  ArithmeticExpressionBaseTypeLisd(
    ArithmeticExpressionBaseType * aArithmeticExpressionBaseType);
  ~ArithmeticExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BinaryArithmeticExpressionBaseType :
  public ArithmeticExpressionBaseType
{
public:
  BinaryArithmeticExpressionBaseType();
  BinaryArithmeticExpressionBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~BinaryArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class BooleanConstantEnumType :
  public XmlNMTOKEN
{
public:
  BooleanConstantEnumType();
  BooleanConstantEnumType(
    const char * valIn);
  ~BooleanConstantEnumType();
  bool BooleanConstantEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class BooleanExpressionBaseType :
  public XmlTypeBase
{
public:
  BooleanExpressionBaseType();
  ~BooleanExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BooleanExpressionBaseTypeLisd :
  public std::list<BooleanExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  BooleanExpressionBaseTypeLisd();
  BooleanExpressionBaseTypeLisd(
    BooleanExpressionBaseType * aBooleanExpressionBaseType);
  ~BooleanExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ConstantIsType :
  public BooleanExpressionBaseType
{
public:
  ConstantIsType();
  ConstantIsType(
    BooleanConstantEnumType * valIn);
  ~ConstantIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  BooleanConstantEnumType * getval();
  void setval(BooleanConstantEnumType * valIn);

protected:
  BooleanConstantEnumType * val;
};

/* ***************************************************************** */

class DividedByType :
  public BinaryArithmeticExpressionBaseType
{
public:
  DividedByType();
  DividedByType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~DividedByType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MinusType :
  public BinaryArithmeticExpressionBaseType
{
public:
  MinusType();
  MinusType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MinusType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NegateType :
  public ArithmeticExpressionBaseType
{
public:
  NegateType();
  NegateType(
    ArithmeticExpressionBaseType * ArithmeticExpressionIn);
  ~NegateType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseType * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn);

protected:
  ArithmeticExpressionBaseType * ArithmeticExpression;
};

/* ***************************************************************** */

class NotType :
  public BooleanExpressionBaseType
{
public:
  NotType();
  NotType(
    BooleanExpressionBaseType * BooleanExpressionIn);
  ~NotType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
};

/* ***************************************************************** */

class OrType :
  public BooleanExpressionBaseType
{
public:
  OrType();
  OrType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  OrType(
    NaturalType * nIn,
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~OrType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  NaturalType * n;
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class PolyadicArithmeticExpressionBaseType :
  public ArithmeticExpressionBaseType
{
public:
  PolyadicArithmeticExpressionBaseType();
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~PolyadicArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class TimesType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  TimesType();
  TimesType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~TimesType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenEqualType :
  public BooleanExpressionBaseType
{
public:
  TokenEqualType();
  TokenEqualType(
    TokenExpressionBaseTypeLisd * TokenExpressionIn);
  ~TokenEqualType();
  void printSelf(FILE * outFile);

  TokenExpressionBaseTypeLisd * getTokenExpression();
  void setTokenExpression(TokenExpressionBaseTypeLisd *);

protected:
  TokenExpressionBaseTypeLisd * TokenExpression;
};

/* ***************************************************************** */

class TokenExpressionBaseType :
  public XmlTypeBase
{
public:
  TokenExpressionBaseType();
  ~TokenExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenExpressionBaseTypeLisd :
  public std::list<TokenExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  TokenExpressionBaseTypeLisd();
  TokenExpressionBaseTypeLisd(
    TokenExpressionBaseType * aTokenExpressionBaseType);
  ~TokenExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenParameterValueType :
  public TokenExpressionBaseType
{
public:
  TokenParameterValueType();
  TokenParameterValueType(
    XmlToken * ParameterIn,
    QIFReferenceFullType * ObjectIdIn);
  ~TokenParameterValueType();
  void printSelf(FILE * outFile);

  XmlToken * getParameter();
  void setParameter(XmlToken * ParameterIn);
  QIFReferenceFullType * getObjectId();
  void setObjectId(QIFReferenceFullType * ObjectIdIn);

protected:
  XmlToken * Parameter;
  QIFReferenceFullType * ObjectId;
};

/* ***************************************************************** */

class AndType :
  public BooleanExpressionBaseType
{
public:
  AndType();
  AndType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  AndType(
    NaturalType * nIn,
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~AndType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  NaturalType * n;
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class ArithmeticComparisonBaseType :
  public BooleanExpressionBaseType
{
public:
  ArithmeticComparisonBaseType();
  ArithmeticComparisonBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~ArithmeticComparisonBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class ArithmeticConstantType :
  public ArithmeticExpressionBaseType
{
public:
  ArithmeticConstantType();
  ArithmeticConstantType(
    XmlDecimal * valIn);
  ~ArithmeticConstantType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getval();
  void setval(XmlDecimal * valIn);

protected:
  XmlDecimal * val;
};

/* ***************************************************************** */

class ArithmeticEqualType :
  public ArithmeticComparisonBaseType
{
public:
  ArithmeticEqualType();
  ArithmeticEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~ArithmeticEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BinaryBooleanExpressionBaseType :
  public BooleanExpressionBaseType
{
public:
  BinaryBooleanExpressionBaseType();
  BinaryBooleanExpressionBaseType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~BinaryBooleanExpressionBaseType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class BooleanEqualType :
  public BinaryBooleanExpressionBaseType
{
public:
  BooleanEqualType();
  BooleanEqualType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~BooleanEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class GreaterOrEqualType :
  public ArithmeticComparisonBaseType
{
public:
  GreaterOrEqualType();
  GreaterOrEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~GreaterOrEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class GreaterThanType :
  public ArithmeticComparisonBaseType
{
public:
  GreaterThanType();
  GreaterThanType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~GreaterThanType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LessOrEqualType :
  public ArithmeticComparisonBaseType
{
public:
  LessOrEqualType();
  LessOrEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~LessOrEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LessThanType :
  public ArithmeticComparisonBaseType
{
public:
  LessThanType();
  LessThanType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~LessThanType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MaxType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  MaxType();
  MaxType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MaxType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MinType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  MinType();
  MinType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MinType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PlusType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  PlusType();
  PlusType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~PlusType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenConstantType :
  public TokenExpressionBaseType
{
public:
  TokenConstantType();
  TokenConstantType(
    XmlToken * valIn);
  ~TokenConstantType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getval();
  void setval(XmlToken * valIn);

protected:
  XmlToken * val;
};

/* ***************************************************************** */

#endif // GENERICEXPRESSIONS_HH
