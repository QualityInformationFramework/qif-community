/* ***************************************************************** */

#ifndef UNITS_HH
#define UNITS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesClasses.hh"

/* ***************************************************************** */

class AngularUnitType;
class AngularUnitTypeLisd;
class AngularValueType;
class AreaUnitType;
class AreaUnitTypeLisd;
class AreaValueType;
class FileUnitsType;
class ForceUnitType;
class ForceUnitTypeLisd;
class ForceValueType;
class LinearDualValueType;
class LinearUnitType;
class LinearUnitTypeLisd;
class LinearValueType;
class LinearValueTypeLisd;
class MassUnitType;
class MassUnitTypeLisd;
class MassValueType;
class MeasuredAngularValueType;
class MeasuredAreaValueType;
class MeasuredDecimalType;
class MeasuredForceValueType;
class MeasuredLinearValueType;
class MeasuredMassValueType;
class MeasuredPressureValueType;
class MeasuredSpeedValueType;
class MeasuredTemperatureValueType;
class MeasuredTimeValueType;
class MeasuredUserDefinedUnitValueType;
class MeasuredUserDefinedUnitValueTypeLisd;
class NonNegativeDecimalType;
class OtherUnitsType;
class PositiveDecimalType;
class PressureUnitType;
class PressureUnitTypeLisd;
class PressureValueType;
class PrimaryUnitsType;
class SpecifiedDecimalType;
class SpeedUnitType;
class SpeedUnitTypeLisd;
class SpeedValueType;
class TemperatureUnitType;
class TemperatureUnitTypeLisd;
class TemperatureValueType;
class TimeUnitType;
class TimeUnitTypeLisd;
class TimeValueType;
class UnitConversionType;
class UserDefinedUnitType;
class UserDefinedUnitTypeLisd;
class UserDefinedUnitValueType;
class UserDefinedUnitValueTypeLisd;
class UserDefinedUnitsType;

/* ***************************************************************** */
/* ***************************************************************** */

class AngularUnitType :
  public XmlTypeBase
{
public:
  AngularUnitType();
  AngularUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~AngularUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class AngularUnitTypeLisd :
  public std::list<AngularUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  AngularUnitTypeLisd();
  AngularUnitTypeLisd(
    AngularUnitType * aAngularUnitType);
  ~AngularUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AreaUnitType :
  public XmlTypeBase
{
public:
  AreaUnitType();
  AreaUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~AreaUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class AreaUnitTypeLisd :
  public std::list<AreaUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  AreaUnitTypeLisd();
  AreaUnitTypeLisd(
    AreaUnitType * aAreaUnitType);
  ~AreaUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FileUnitsType :
  public XmlTypeBase
{
public:
  FileUnitsType();
  FileUnitsType(
    PrimaryUnitsType * PrimaryUnitsIn,
    OtherUnitsType * OtherUnitsIn,
    UserDefinedUnitsType * UserDefinedUnitsIn);
  ~FileUnitsType();
  void printSelf(FILE * outFile);

  PrimaryUnitsType * getPrimaryUnits();
  void setPrimaryUnits(PrimaryUnitsType * PrimaryUnitsIn);
  OtherUnitsType * getOtherUnits();
  void setOtherUnits(OtherUnitsType * OtherUnitsIn);
  UserDefinedUnitsType * getUserDefinedUnits();
  void setUserDefinedUnits(UserDefinedUnitsType * UserDefinedUnitsIn);

protected:
  PrimaryUnitsType * PrimaryUnits;
  OtherUnitsType * OtherUnits;
  UserDefinedUnitsType * UserDefinedUnits;
};

/* ***************************************************************** */

class ForceUnitType :
  public XmlTypeBase
{
public:
  ForceUnitType();
  ForceUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~ForceUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class ForceUnitTypeLisd :
  public std::list<ForceUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  ForceUnitTypeLisd();
  ForceUnitTypeLisd(
    ForceUnitType * aForceUnitType);
  ~ForceUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LinearUnitType :
  public XmlTypeBase
{
public:
  LinearUnitType();
  LinearUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~LinearUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class LinearUnitTypeLisd :
  public std::list<LinearUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  LinearUnitTypeLisd();
  LinearUnitTypeLisd(
    LinearUnitType * aLinearUnitType);
  ~LinearUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MassUnitType :
  public XmlTypeBase
{
public:
  MassUnitType();
  MassUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~MassUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class MassUnitTypeLisd :
  public std::list<MassUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  MassUnitTypeLisd();
  MassUnitTypeLisd(
    MassUnitType * aMassUnitType);
  ~MassUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NonNegativeDecimalType :
  public XmlDecimal
{
public:
  NonNegativeDecimalType();
  NonNegativeDecimalType(
    const char * valIn);
  ~NonNegativeDecimalType();
  bool NonNegativeDecimalTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class OtherUnitsType :
  public XmlTypeBase
{
public:
  OtherUnitsType();
  OtherUnitsType(
    AreaUnitTypeLisd * AreaUnitIn,
    AngularUnitTypeLisd * AngularUnitIn,
    ForceUnitTypeLisd * ForceUnitIn,
    LinearUnitTypeLisd * LinearUnitIn,
    MassUnitTypeLisd * MassUnitIn,
    PressureUnitTypeLisd * PressureUnitIn,
    SpeedUnitTypeLisd * SpeedUnitIn,
    TemperatureUnitTypeLisd * TemperatureUnitIn,
    TimeUnitTypeLisd * TimeUnitIn);
  OtherUnitsType(
    NaturalType * nIn,
    AreaUnitTypeLisd * AreaUnitIn,
    AngularUnitTypeLisd * AngularUnitIn,
    ForceUnitTypeLisd * ForceUnitIn,
    LinearUnitTypeLisd * LinearUnitIn,
    MassUnitTypeLisd * MassUnitIn,
    PressureUnitTypeLisd * PressureUnitIn,
    SpeedUnitTypeLisd * SpeedUnitIn,
    TemperatureUnitTypeLisd * TemperatureUnitIn,
    TimeUnitTypeLisd * TimeUnitIn);
  ~OtherUnitsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AreaUnitTypeLisd * getAreaUnit();
  void setAreaUnit(AreaUnitTypeLisd *);
  AngularUnitTypeLisd * getAngularUnit();
  void setAngularUnit(AngularUnitTypeLisd *);
  ForceUnitTypeLisd * getForceUnit();
  void setForceUnit(ForceUnitTypeLisd *);
  LinearUnitTypeLisd * getLinearUnit();
  void setLinearUnit(LinearUnitTypeLisd *);
  MassUnitTypeLisd * getMassUnit();
  void setMassUnit(MassUnitTypeLisd *);
  PressureUnitTypeLisd * getPressureUnit();
  void setPressureUnit(PressureUnitTypeLisd *);
  SpeedUnitTypeLisd * getSpeedUnit();
  void setSpeedUnit(SpeedUnitTypeLisd *);
  TemperatureUnitTypeLisd * getTemperatureUnit();
  void setTemperatureUnit(TemperatureUnitTypeLisd *);
  TimeUnitTypeLisd * getTimeUnit();
  void setTimeUnit(TimeUnitTypeLisd *);

protected:
  NaturalType * n;
  AreaUnitTypeLisd * AreaUnit;
  AngularUnitTypeLisd * AngularUnit;
  ForceUnitTypeLisd * ForceUnit;
  LinearUnitTypeLisd * LinearUnit;
  MassUnitTypeLisd * MassUnit;
  PressureUnitTypeLisd * PressureUnit;
  SpeedUnitTypeLisd * SpeedUnit;
  TemperatureUnitTypeLisd * TemperatureUnit;
  TimeUnitTypeLisd * TimeUnit;
};

/* ***************************************************************** */

class PositiveDecimalType :
  public XmlDecimal
{
public:
  PositiveDecimalType();
  PositiveDecimalType(
    const char * valIn);
  ~PositiveDecimalType();
  bool PositiveDecimalTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class PressureUnitType :
  public XmlTypeBase
{
public:
  PressureUnitType();
  PressureUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~PressureUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class PressureUnitTypeLisd :
  public std::list<PressureUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  PressureUnitTypeLisd();
  PressureUnitTypeLisd(
    PressureUnitType * aPressureUnitType);
  ~PressureUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PrimaryUnitsType :
  public XmlTypeBase
{
public:
  PrimaryUnitsType();
  PrimaryUnitsType(
    AreaUnitType * AreaUnitIn,
    AreaUnitType * PMIAreaUnitIn,
    AngularUnitType * AngularUnitIn,
    AngularUnitType * PMIAngularUnitIn,
    ForceUnitType * ForceUnitIn,
    LinearUnitType * LinearUnitIn,
    LinearUnitType * PMILinearUnitIn,
    MassUnitType * MassUnitIn,
    PressureUnitType * PressureUnitIn,
    SpeedUnitType * SpeedUnitIn,
    TemperatureUnitType * TemperatureUnitIn,
    TimeUnitType * TimeUnitIn);
  ~PrimaryUnitsType();
  void printSelf(FILE * outFile);

  AreaUnitType * getAreaUnit();
  void setAreaUnit(AreaUnitType * AreaUnitIn);
  AreaUnitType * getPMIAreaUnit();
  void setPMIAreaUnit(AreaUnitType * PMIAreaUnitIn);
  AngularUnitType * getAngularUnit();
  void setAngularUnit(AngularUnitType * AngularUnitIn);
  AngularUnitType * getPMIAngularUnit();
  void setPMIAngularUnit(AngularUnitType * PMIAngularUnitIn);
  ForceUnitType * getForceUnit();
  void setForceUnit(ForceUnitType * ForceUnitIn);
  LinearUnitType * getLinearUnit();
  void setLinearUnit(LinearUnitType * LinearUnitIn);
  LinearUnitType * getPMILinearUnit();
  void setPMILinearUnit(LinearUnitType * PMILinearUnitIn);
  MassUnitType * getMassUnit();
  void setMassUnit(MassUnitType * MassUnitIn);
  PressureUnitType * getPressureUnit();
  void setPressureUnit(PressureUnitType * PressureUnitIn);
  SpeedUnitType * getSpeedUnit();
  void setSpeedUnit(SpeedUnitType * SpeedUnitIn);
  TemperatureUnitType * getTemperatureUnit();
  void setTemperatureUnit(TemperatureUnitType * TemperatureUnitIn);
  TimeUnitType * getTimeUnit();
  void setTimeUnit(TimeUnitType * TimeUnitIn);

protected:
  AreaUnitType * AreaUnit;
  AreaUnitType * PMIAreaUnit;
  AngularUnitType * AngularUnit;
  AngularUnitType * PMIAngularUnit;
  ForceUnitType * ForceUnit;
  LinearUnitType * LinearUnit;
  LinearUnitType * PMILinearUnit;
  MassUnitType * MassUnit;
  PressureUnitType * PressureUnit;
  SpeedUnitType * SpeedUnit;
  TemperatureUnitType * TemperatureUnit;
  TimeUnitType * TimeUnit;
};

/* ***************************************************************** */

class SpecifiedDecimalType :
  public XmlDecimal
{
public:
  SpecifiedDecimalType();
  SpecifiedDecimalType(
    const char * valStringIn);
  SpecifiedDecimalType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~SpecifiedDecimalType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlNonNegativeInteger * significantFigures;
};

/* ***************************************************************** */

class SpeedUnitType :
  public XmlTypeBase
{
public:
  SpeedUnitType();
  SpeedUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~SpeedUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class SpeedUnitTypeLisd :
  public std::list<SpeedUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  SpeedUnitTypeLisd();
  SpeedUnitTypeLisd(
    SpeedUnitType * aSpeedUnitType);
  ~SpeedUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SpeedValueType :
  public SpecifiedDecimalType
{
public:
  SpeedValueType();
  SpeedValueType(
    const char * valStringIn);
  SpeedValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * speedUnitIn,
    const char * valStringIn);
  ~SpeedValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class TemperatureUnitType :
  public XmlTypeBase
{
public:
  TemperatureUnitType();
  TemperatureUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~TemperatureUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class TemperatureUnitTypeLisd :
  public std::list<TemperatureUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  TemperatureUnitTypeLisd();
  TemperatureUnitTypeLisd(
    TemperatureUnitType * aTemperatureUnitType);
  ~TemperatureUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TemperatureValueType :
  public SpecifiedDecimalType
{
public:
  TemperatureValueType();
  TemperatureValueType(
    const char * valStringIn);
  TemperatureValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * temperatureUnitIn,
    const char * valStringIn);
  ~TemperatureValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class TimeUnitType :
  public XmlTypeBase
{
public:
  TimeUnitType();
  TimeUnitType(
    XmlToken * SIUnitNameIn,
    XmlToken * UnitNameIn,
    UnitConversionType * UnitConversionIn);
  ~TimeUnitType();
  void printSelf(FILE * outFile);

  XmlToken * getSIUnitName();
  void setSIUnitName(XmlToken * SIUnitNameIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  UnitConversionType * getUnitConversion();
  void setUnitConversion(UnitConversionType * UnitConversionIn);

protected:
  XmlToken * SIUnitName;
  XmlToken * UnitName;
  UnitConversionType * UnitConversion;
};

/* ***************************************************************** */

class TimeUnitTypeLisd :
  public std::list<TimeUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  TimeUnitTypeLisd();
  TimeUnitTypeLisd(
    TimeUnitType * aTimeUnitType);
  ~TimeUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TimeValueType :
  public SpecifiedDecimalType
{
public:
  TimeValueType();
  TimeValueType(
    const char * valStringIn);
  TimeValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * timeUnitIn,
    const char * valStringIn);
  ~TimeValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class UnitConversionType :
  public XmlTypeBase
{
public:
  UnitConversionType();
  UnitConversionType(
    PositiveDecimalType * FactorIn,
    XmlDecimal * OffsetIn);
  ~UnitConversionType();
  void printSelf(FILE * outFile);

  PositiveDecimalType * getFactor();
  void setFactor(PositiveDecimalType * FactorIn);
  XmlDecimal * getOffset();
  void setOffset(XmlDecimal * OffsetIn);

protected:
  PositiveDecimalType * Factor;
  XmlDecimal * Offset;
};

/* ***************************************************************** */

class UserDefinedUnitType :
  public XmlTypeBase
{
public:
  UserDefinedUnitType();
  UserDefinedUnitType(
    XmlString * WhatIsMeasuredIn,
    XmlToken * UnitNameIn,
    XmlString * StandardNameIn);
  ~UserDefinedUnitType();
  void printSelf(FILE * outFile);

  XmlString * getWhatIsMeasured();
  void setWhatIsMeasured(XmlString * WhatIsMeasuredIn);
  XmlToken * getUnitName();
  void setUnitName(XmlToken * UnitNameIn);
  XmlString * getStandardName();
  void setStandardName(XmlString * StandardNameIn);

protected:
  XmlString * WhatIsMeasured;
  XmlToken * UnitName;
  XmlString * StandardName;
};

/* ***************************************************************** */

class UserDefinedUnitTypeLisd :
  public std::list<UserDefinedUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  UserDefinedUnitTypeLisd();
  UserDefinedUnitTypeLisd(
    UserDefinedUnitType * aUserDefinedUnitType);
  ~UserDefinedUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class UserDefinedUnitValueType :
  public SpecifiedDecimalType
{
public:
  UserDefinedUnitValueType();
  UserDefinedUnitValueType(
    const char * valStringIn);
  UserDefinedUnitValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * unitNameIn,
    const char * valStringIn);
  ~UserDefinedUnitValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class UserDefinedUnitValueTypeLisd :
  public std::list<UserDefinedUnitValueType *>,
  public XmlSchemaInstanceBase
{
public:
  UserDefinedUnitValueTypeLisd();
  UserDefinedUnitValueTypeLisd(
    UserDefinedUnitValueType * aUserDefinedUnitValueType);
  ~UserDefinedUnitValueTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class UserDefinedUnitsType :
  public XmlTypeBase
{
public:
  UserDefinedUnitsType();
  UserDefinedUnitsType(
    UserDefinedUnitTypeLisd * UserDefinedUnitIn);
  UserDefinedUnitsType(
    NaturalType * nIn,
    UserDefinedUnitTypeLisd * UserDefinedUnitIn);
  ~UserDefinedUnitsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  UserDefinedUnitTypeLisd * getUserDefinedUnit();
  void setUserDefinedUnit(UserDefinedUnitTypeLisd *);

protected:
  NaturalType * n;
  UserDefinedUnitTypeLisd * UserDefinedUnit;
};

/* ***************************************************************** */

class AngularValueType :
  public SpecifiedDecimalType
{
public:
  AngularValueType();
  AngularValueType(
    const char * valStringIn);
  AngularValueType(
    XmlToken * angularUnitIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~AngularValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class AreaValueType :
  public SpecifiedDecimalType
{
public:
  AreaValueType();
  AreaValueType(
    const char * valStringIn);
  AreaValueType(
    XmlToken * areaUnitIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~AreaValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

class ForceValueType :
  public SpecifiedDecimalType
{
public:
  ForceValueType();
  ForceValueType(
    const char * valStringIn);
  ForceValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * forceUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~ForceValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class LinearDualValueType :
  public SpecifiedDecimalType
{
public:
  LinearDualValueType();
  LinearDualValueType(
    const char * valStringIn);
  LinearDualValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~LinearDualValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class LinearValueType :
  public SpecifiedDecimalType
{
public:
  LinearValueType();
  LinearValueType(
    const char * valStringIn);
  LinearValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~LinearValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class LinearValueTypeLisd :
  public std::list<LinearValueType *>,
  public XmlSchemaInstanceBase
{
public:
  LinearValueTypeLisd();
  LinearValueTypeLisd(
    LinearValueType * aLinearValueType);
  ~LinearValueTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MassValueType :
  public SpecifiedDecimalType
{
public:
  MassValueType();
  MassValueType(
    const char * valStringIn);
  MassValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * massUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MassValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class MeasuredDecimalType :
  public SpecifiedDecimalType
{
public:
  MeasuredDecimalType();
  MeasuredDecimalType(
    const char * valStringIn);
  MeasuredDecimalType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredDecimalType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NonNegativeDecimalType * getcombinedUncertainty();
  void setcombinedUncertainty(NonNegativeDecimalType * combinedUncertaintyIn);
  NonNegativeDecimalType * getmeanError();
  void setmeanError(NonNegativeDecimalType * meanErrorIn);

protected:
  NonNegativeDecimalType * combinedUncertainty;
  NonNegativeDecimalType * meanError;
};

/* ***************************************************************** */

class MeasuredForceValueType :
  public MeasuredDecimalType
{
public:
  MeasuredForceValueType();
  MeasuredForceValueType(
    const char * valStringIn);
  MeasuredForceValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * forceUnitIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredForceValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class MeasuredLinearValueType :
  public MeasuredDecimalType
{
public:
  MeasuredLinearValueType();
  MeasuredLinearValueType(
    const char * valStringIn);
  MeasuredLinearValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredLinearValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class MeasuredMassValueType :
  public MeasuredDecimalType
{
public:
  MeasuredMassValueType();
  MeasuredMassValueType(
    const char * valStringIn);
  MeasuredMassValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * massUnitIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredMassValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class MeasuredPressureValueType :
  public MeasuredDecimalType
{
public:
  MeasuredPressureValueType();
  MeasuredPressureValueType(
    const char * valStringIn);
  MeasuredPressureValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlToken * pressureUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredPressureValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class MeasuredSpeedValueType :
  public MeasuredDecimalType
{
public:
  MeasuredSpeedValueType();
  MeasuredSpeedValueType(
    const char * valStringIn);
  MeasuredSpeedValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * speedUnitIn,
    const char * valStringIn);
  ~MeasuredSpeedValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class MeasuredTemperatureValueType :
  public MeasuredDecimalType
{
public:
  MeasuredTemperatureValueType();
  MeasuredTemperatureValueType(
    const char * valStringIn);
  MeasuredTemperatureValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * temperatureUnitIn,
    const char * valStringIn);
  ~MeasuredTemperatureValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class MeasuredTimeValueType :
  public MeasuredDecimalType
{
public:
  MeasuredTimeValueType();
  MeasuredTimeValueType(
    const char * valStringIn);
  MeasuredTimeValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * timeUnitIn,
    const char * valStringIn);
  ~MeasuredTimeValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class MeasuredUserDefinedUnitValueType :
  public MeasuredDecimalType
{
public:
  MeasuredUserDefinedUnitValueType();
  MeasuredUserDefinedUnitValueType(
    const char * valStringIn);
  MeasuredUserDefinedUnitValueType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    XmlToken * unitNameIn,
    const char * valStringIn);
  ~MeasuredUserDefinedUnitValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class MeasuredUserDefinedUnitValueTypeLisd :
  public std::list<MeasuredUserDefinedUnitValueType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasuredUserDefinedUnitValueTypeLisd();
  MeasuredUserDefinedUnitValueTypeLisd(
    MeasuredUserDefinedUnitValueType * aMeasuredUserDefinedUnitValueType);
  ~MeasuredUserDefinedUnitValueTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PressureValueType :
  public SpecifiedDecimalType
{
public:
  PressureValueType();
  PressureValueType(
    const char * valStringIn);
  PressureValueType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * pressureUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~PressureValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class MeasuredAngularValueType :
  public MeasuredDecimalType
{
public:
  MeasuredAngularValueType();
  MeasuredAngularValueType(
    const char * valStringIn);
  MeasuredAngularValueType(
    XmlToken * angularUnitIn,
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredAngularValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class MeasuredAreaValueType :
  public MeasuredDecimalType
{
public:
  MeasuredAreaValueType();
  MeasuredAreaValueType(
    const char * valStringIn);
  MeasuredAreaValueType(
    XmlToken * areaUnitIn,
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    const char * valStringIn);
  ~MeasuredAreaValueType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

#endif // UNITS_HH
