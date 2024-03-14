/* ***************************************************************** */

#ifndef QIFPRODUCT_HH
#define QIFPRODUCT_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "GeometryClasses.hh"
#include "TopologyClasses.hh"
#include "AuxiliaryClasses.hh"
#include "VisualizationClasses.hh"
#include "TraceabilityClasses.hh"

/* ***************************************************************** */

class AsmPathType;
class AsmPathTypeLisd;
class AsmPathsType;
class AssemblySetType;
class AssemblyType;
class AssemblyTypeLisd;
class ComponentSetType;
class ComponentType;
class ComponentTypeLisd;
class DefinitionExternalType;
class DefinitionExternalTypeChoicePair;
class DefinitionExternalTypeChoicePairLisd;
class DigitalDrawingType;
class DigitalModelType;
class FileInternalType;
class FolderAssemblyType;
class FolderAssemblyTypeLisd;
class FolderPartAssemblyBaseType;
class FolderPartType;
class FolderPartTypeLisd;
class FoldersAssemblyType;
class FoldersPartType;
class GDTEnumType;
class LayerSetType;
class LayerType;
class LayerTypeLisd;
class NoteFlagSetType;
class NoteFlagType;
class NoteFlagTypeLisd;
class NoteFormEnumType;
class NoteSetType;
class NoteType;
class NoteTypeLisd;
class PartAssemblyBaseType;
class PartAssemblyHeaderType;
class PartFamilyType;
class PartNoteSetType;
class PartNoteType;
class PartNoteTypeLisd;
class PartSetType;
class PartType;
class PartTypeLisd;
class PhysicalModelType;
class PrintedDrawingType;
class ProductHeaderType;
class ProductType;
class TopologyEnumType;
class ValidationPartAssemblyInstanceType;
class ValidationPartAssemblyInstanceTypeLisd;
class ValidationPartAssemblyInstancesType;
class ValidationPartAssemblyType;
class ComponentType_1193_Type;
class ComponentType_1193_TypeChoicePair;
class ProductType_1194_Type;
class ProductType_1194_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class AsmPathType :
  public XmlTypeBase
{
public:
  AsmPathType();
  AsmPathType(
    ArrayReferenceType * ComponentIdsIn);
  AsmPathType(
    QIFIdType * idIn,
    ArrayReferenceType * ComponentIdsIn);
  ~AsmPathType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  ArrayReferenceType * getComponentIds();
  void setComponentIds(ArrayReferenceType * ComponentIdsIn);

protected:
  QIFIdType * id;
  ArrayReferenceType * ComponentIds;
};

/* ***************************************************************** */

class AsmPathTypeLisd :
  public std::list<AsmPathType *>,
  public XmlSchemaInstanceBase
{
public:
  AsmPathTypeLisd();
  AsmPathTypeLisd(
    AsmPathType * aAsmPathType);
  ~AsmPathTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AsmPathsType :
  public XmlTypeBase
{
public:
  AsmPathsType();
  AsmPathsType(
    AsmPathTypeLisd * AsmPathIn);
  AsmPathsType(
    NaturalType * nIn,
    AsmPathTypeLisd * AsmPathIn);
  ~AsmPathsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AsmPathTypeLisd * getAsmPath();
  void setAsmPath(AsmPathTypeLisd *);

protected:
  NaturalType * n;
  AsmPathTypeLisd * AsmPath;
};

/* ***************************************************************** */

class AssemblySetType :
  public XmlTypeBase
{
public:
  AssemblySetType();
  AssemblySetType(
    AssemblyTypeLisd * AssemblyIn);
  AssemblySetType(
    NaturalType * nIn,
    AssemblyTypeLisd * AssemblyIn);
  ~AssemblySetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AssemblyTypeLisd * getAssembly();
  void setAssembly(AssemblyTypeLisd *);

protected:
  NaturalType * n;
  AssemblyTypeLisd * Assembly;
};

/* ***************************************************************** */

class ComponentSetType :
  public XmlTypeBase
{
public:
  ComponentSetType();
  ComponentSetType(
    ComponentTypeLisd * ComponentIn);
  ComponentSetType(
    NaturalType * nIn,
    ComponentTypeLisd * ComponentIn);
  ~ComponentSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ComponentTypeLisd * getComponent();
  void setComponent(ComponentTypeLisd *);

protected:
  NaturalType * n;
  ComponentTypeLisd * Component;
};

/* ***************************************************************** */

class ComponentType :
  public DrawableBaseType
{
public:
  ComponentType();
  ComponentType(
    AttributesType * AttributesIn,
    ElementReferenceType * TransformIn,
    QPIdType * UUIDIn,
    ProductTraceabilityType * TraceabilityIn,
    ComponentType_1193_Type * ComponentType_1193In);
  ComponentType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    ElementReferenceType * TransformIn,
    QPIdType * UUIDIn,
    ProductTraceabilityType * TraceabilityIn,
    ComponentType_1193_Type * ComponentType_1193In);
  ~ComponentType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);
  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);
  ProductTraceabilityType * getTraceability();
  void setTraceability(ProductTraceabilityType * TraceabilityIn);
  ComponentType_1193_Type * getComponentType_1193();
  void setComponentType_1193(ComponentType_1193_Type * ComponentType_1193In);

protected:
  ElementReferenceType * Transform;
  QPIdType * UUID;
  ProductTraceabilityType * Traceability;
  ComponentType_1193_Type * ComponentType_1193;
};

/* ***************************************************************** */

class ComponentTypeLisd :
  public std::list<ComponentType *>,
  public XmlSchemaInstanceBase
{
public:
  ComponentTypeLisd();
  ComponentTypeLisd(
    ComponentType * aComponentType);
  ~ComponentTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DefinitionExternalType :
  public XmlTypeBase
{
public:
  DefinitionExternalType();
  DefinitionExternalType(
    DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn);
  DefinitionExternalType(
    QIFIdType * idIn,
    NaturalType * nIn,
    DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn);
  ~DefinitionExternalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);

  DefinitionExternalTypeChoicePairLisd * getDefinitionExternalTypePairs();
  void setDefinitionExternalTypePairs(DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn);

protected:
  QIFIdType * id;
  NaturalType * n;
  DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairs;
};

/* ***************************************************************** */

union DefinitionExternalTypeVal
{
  PrintedDrawingType * PrintedDrawing;
  DigitalDrawingType * DigitalDrawing;
  DigitalModelType * DigitalModel;
  PhysicalModelType * PhysicalModel;
};

/* ***************************************************************** */

class DefinitionExternalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PrintedDrawingE,
    DigitalDrawingE,
    DigitalModelE,
    PhysicalModelE };
  DefinitionExternalTypeChoicePair();
  DefinitionExternalTypeChoicePair(
    whichOne DefinitionExternalTypeTypeIn,
    DefinitionExternalTypeVal DefinitionExternalTypeValueIn);
  ~DefinitionExternalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DefinitionExternalTypeType;
  DefinitionExternalTypeVal DefinitionExternalTypeValue;
};

/* ***************************************************************** */

class DefinitionExternalTypeChoicePairLisd :
  public std::list<DefinitionExternalTypeChoicePair *>,
  public XmlSchemaInstanceBase
{
public:
  DefinitionExternalTypeChoicePairLisd();
  DefinitionExternalTypeChoicePairLisd
    (DefinitionExternalTypeChoicePair * aDefinitionExternalTypeChoicePair);
  ~DefinitionExternalTypeChoicePairLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DigitalDrawingType :
  public XmlTypeBase
{
public:
  DigitalDrawingType();
  DigitalDrawingType(
    XmlString * NameIn,
    FileType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    EntitiesExternalType * EntitiesIn);
  DigitalDrawingType(
    QIFIdType * idIn,
    XmlString * NameIn,
    FileType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    EntitiesExternalType * EntitiesIn);
  ~DigitalDrawingType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getName();
  void setName(XmlString * NameIn);
  FileType * getFile();
  void setFile(FileType * FileIn);
  ApplicationType * getApplication();
  void setApplication(ApplicationType * ApplicationIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  ApplicationType * getApplicationSource();
  void setApplicationSource(ApplicationType * ApplicationSourceIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  EntitiesExternalType * getEntities();
  void setEntities(EntitiesExternalType * EntitiesIn);

protected:
  QIFIdType * id;
  XmlString * Name;
  FileType * File;
  ApplicationType * Application;
  AuthorType * Author;
  ApplicationType * ApplicationSource;
  XmlString * Description;
  EntitiesExternalType * Entities;
};

/* ***************************************************************** */

class DigitalModelType :
  public XmlTypeBase
{
public:
  DigitalModelType();
  DigitalModelType(
    XmlString * NameIn,
    FileType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    OtherUnitsType * UnitsIn,
    GDTEnumType * GDTIn,
    TopologyEnumType * TopologyIn,
    EntitiesExternalType * EntitiesIn);
  DigitalModelType(
    QIFIdType * idIn,
    XmlString * NameIn,
    FileType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    OtherUnitsType * UnitsIn,
    GDTEnumType * GDTIn,
    TopologyEnumType * TopologyIn,
    EntitiesExternalType * EntitiesIn);
  ~DigitalModelType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getName();
  void setName(XmlString * NameIn);
  FileType * getFile();
  void setFile(FileType * FileIn);
  ApplicationType * getApplication();
  void setApplication(ApplicationType * ApplicationIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  ApplicationType * getApplicationSource();
  void setApplicationSource(ApplicationType * ApplicationSourceIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  OtherUnitsType * getUnits();
  void setUnits(OtherUnitsType * UnitsIn);
  GDTEnumType * getGDT();
  void setGDT(GDTEnumType * GDTIn);
  TopologyEnumType * getTopology();
  void setTopology(TopologyEnumType * TopologyIn);
  EntitiesExternalType * getEntities();
  void setEntities(EntitiesExternalType * EntitiesIn);

protected:
  QIFIdType * id;
  XmlString * Name;
  FileType * File;
  ApplicationType * Application;
  AuthorType * Author;
  ApplicationType * ApplicationSource;
  XmlString * Description;
  OtherUnitsType * Units;
  GDTEnumType * GDT;
  TopologyEnumType * Topology;
  EntitiesExternalType * Entities;
};

/* ***************************************************************** */

class FileInternalType :
  public XmlTypeBase
{
public:
  FileInternalType();
  FileInternalType(
    XmlString * NameIn,
    VersionType * VersionIn);
  ~FileInternalType();
  void printSelf(FILE * outFile);

  XmlString * getName();
  void setName(XmlString * NameIn);
  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);

protected:
  XmlString * Name;
  VersionType * Version;
};

/* ***************************************************************** */

class FolderPartAssemblyBaseType :
  public DrawableBaseType
{
public:
  FolderPartAssemblyBaseType();
  FolderPartAssemblyBaseType(
    AttributesType * AttributesIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  FolderPartAssemblyBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  ~FolderPartAssemblyBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getFolderIds();
  void setFolderIds(ArrayReferenceType * FolderIdsIn);
  ArrayReferenceFullType * getFeatureNominalIds();
  void setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn);
  ArrayReferenceFullType * getFeatureZoneIds();
  void setFeatureZoneIds(ArrayReferenceFullType * FeatureZoneIdsIn);
  ArrayReferenceFullType * getCharacteristicNominalIds();
  void setCharacteristicNominalIds(ArrayReferenceFullType * CharacteristicNominalIdsIn);
  ArrayReferenceFullType * getNoteIds();
  void setNoteIds(ArrayReferenceFullType * NoteIdsIn);
  ArrayReferenceFullType * getPartNoteIds();
  void setPartNoteIds(ArrayReferenceFullType * PartNoteIdsIn);
  ArrayReferenceFullType * getDatumDefinitionIds();
  void setDatumDefinitionIds(ArrayReferenceFullType * DatumDefinitionIdsIn);
  ArrayReferenceFullType * getDatumTargetDefinitionIds();
  void setDatumTargetDefinitionIds(ArrayReferenceFullType * DatumTargetDefinitionIdsIn);
  ArrayReferenceFullType * getDatumReferenceFrameIds();
  void setDatumReferenceFrameIds(ArrayReferenceFullType * DatumReferenceFrameIdsIn);
  ArrayReferenceType * getBodyIds();
  void setBodyIds(ArrayReferenceType * BodyIdsIn);
  ArrayReferenceType * getCoordinateSystemIds();
  void setCoordinateSystemIds(ArrayReferenceType * CoordinateSystemIdsIn);
  ArrayReferenceType * getAuxiliaryIds();
  void setAuxiliaryIds(ArrayReferenceType * AuxiliaryIdsIn);
  ArrayReferenceType * getViewIds();
  void setViewIds(ArrayReferenceType * ViewIdsIn);
  ArrayReferenceType * getPointCloudIds();
  void setPointCloudIds(ArrayReferenceType * PointCloudIdsIn);

protected:
  ArrayReferenceType * FolderIds;
  ArrayReferenceFullType * FeatureNominalIds;
  ArrayReferenceFullType * FeatureZoneIds;
  ArrayReferenceFullType * CharacteristicNominalIds;
  ArrayReferenceFullType * NoteIds;
  ArrayReferenceFullType * PartNoteIds;
  ArrayReferenceFullType * DatumDefinitionIds;
  ArrayReferenceFullType * DatumTargetDefinitionIds;
  ArrayReferenceFullType * DatumReferenceFrameIds;
  ArrayReferenceType * BodyIds;
  ArrayReferenceType * CoordinateSystemIds;
  ArrayReferenceType * AuxiliaryIds;
  ArrayReferenceType * ViewIds;
  ArrayReferenceType * PointCloudIds;
};

/* ***************************************************************** */

class FolderPartType :
  public FolderPartAssemblyBaseType
{
public:
  FolderPartType();
  FolderPartType(
    AttributesType * AttributesIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  FolderPartType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  ~FolderPartType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class FolderPartTypeLisd :
  public std::list<FolderPartType *>,
  public XmlSchemaInstanceBase
{
public:
  FolderPartTypeLisd();
  FolderPartTypeLisd(
    FolderPartType * aFolderPartType);
  ~FolderPartTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FoldersAssemblyType :
  public XmlTypeBase
{
public:
  FoldersAssemblyType();
  FoldersAssemblyType(
    FolderAssemblyTypeLisd * FolderAssemblyIn);
  FoldersAssemblyType(
    NaturalType * nIn,
    FolderAssemblyTypeLisd * FolderAssemblyIn);
  ~FoldersAssemblyType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FolderAssemblyTypeLisd * getFolderAssembly();
  void setFolderAssembly(FolderAssemblyTypeLisd *);

protected:
  NaturalType * n;
  FolderAssemblyTypeLisd * FolderAssembly;
};

/* ***************************************************************** */

class FoldersPartType :
  public XmlTypeBase
{
public:
  FoldersPartType();
  FoldersPartType(
    FolderPartTypeLisd * FolderPartIn);
  FoldersPartType(
    NaturalType * nIn,
    FolderPartTypeLisd * FolderPartIn);
  ~FoldersPartType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FolderPartTypeLisd * getFolderPart();
  void setFolderPart(FolderPartTypeLisd *);

protected:
  NaturalType * n;
  FolderPartTypeLisd * FolderPart;
};

/* ***************************************************************** */

class GDTEnumType :
  public XmlString
{
public:
  GDTEnumType();
  GDTEnumType(
    const char * valIn);
  ~GDTEnumType();
  bool GDTEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LayerSetType :
  public XmlTypeBase
{
public:
  LayerSetType();
  LayerSetType(
    LayerTypeLisd * LayerIn);
  LayerSetType(
    NaturalType * nIn,
    LayerTypeLisd * LayerIn);
  ~LayerSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LayerTypeLisd * getLayer();
  void setLayer(LayerTypeLisd *);

protected:
  NaturalType * n;
  LayerTypeLisd * Layer;
};

/* ***************************************************************** */

class LayerType :
  public DrawableBaseType
{
public:
  LayerType();
  LayerType(
    AttributesType * AttributesIn,
    ArrayReferenceFullType * ElementIdsIn);
  LayerType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlBoolean * applyColorIn,
    XmlUnsignedInt * indexIn,
    ArrayReferenceFullType * ElementIdsIn);
  ~LayerType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getapplyColor();
  void setapplyColor(XmlBoolean * applyColorIn);
  XmlUnsignedInt * getindex();
  void setindex(XmlUnsignedInt * indexIn);

  ArrayReferenceFullType * getElementIds();
  void setElementIds(ArrayReferenceFullType * ElementIdsIn);

protected:
  XmlBoolean * applyColor;
  XmlUnsignedInt * index;
  ArrayReferenceFullType * ElementIds;
};

/* ***************************************************************** */

class LayerTypeLisd :
  public std::list<LayerType *>,
  public XmlSchemaInstanceBase
{
public:
  LayerTypeLisd();
  LayerTypeLisd(
    LayerType * aLayerType);
  ~LayerTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NoteFlagSetType :
  public XmlTypeBase
{
public:
  NoteFlagSetType();
  NoteFlagSetType(
    NoteFlagTypeLisd * NoteFlagIn);
  NoteFlagSetType(
    NaturalType * nIn,
    NoteFlagTypeLisd * NoteFlagIn);
  ~NoteFlagSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NoteFlagTypeLisd * getNoteFlag();
  void setNoteFlag(NoteFlagTypeLisd *);

protected:
  NaturalType * n;
  NoteFlagTypeLisd * NoteFlag;
};

/* ***************************************************************** */

class NoteFormEnumType :
  public XmlString
{
public:
  NoteFormEnumType();
  NoteFormEnumType(
    const char * valIn);
  ~NoteFormEnumType();
  bool NoteFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class NoteSetType :
  public XmlTypeBase
{
public:
  NoteSetType();
  NoteSetType(
    NoteTypeLisd * NoteIn);
  NoteSetType(
    NaturalType * nIn,
    NoteTypeLisd * NoteIn);
  ~NoteSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NoteTypeLisd * getNote();
  void setNote(NoteTypeLisd *);

protected:
  NaturalType * n;
  NoteTypeLisd * Note;
};

/* ***************************************************************** */

class NoteType :
  public DrawableBaseType
{
public:
  NoteType();
  NoteType(
    AttributesType * AttributesIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlString * TextIn);
  NoteType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    NoteFormEnumType * formIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlString * TextIn);
  ~NoteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NoteFormEnumType * getform();
  void setform(NoteFormEnumType * formIn);

  ArrayReferenceFullType * getEntityInternalIds();
  void setEntityInternalIds(ArrayReferenceFullType * EntityInternalIdsIn);
  ArrayReferenceFullType * getEntityExternalIds();
  void setEntityExternalIds(ArrayReferenceFullType * EntityExternalIdsIn);
  XmlString * getText();
  void setText(XmlString * TextIn);

protected:
  NoteFormEnumType * form;
  ArrayReferenceFullType * EntityInternalIds;
  ArrayReferenceFullType * EntityExternalIds;
  XmlString * Text;
};

/* ***************************************************************** */

class NoteTypeLisd :
  public std::list<NoteType *>,
  public XmlSchemaInstanceBase
{
public:
  NoteTypeLisd();
  NoteTypeLisd(
    NoteType * aNoteType);
  ~NoteTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PartAssemblyBaseType :
  public DrawableBaseType
{
public:
  PartAssemblyBaseType();
  PartAssemblyBaseType(
    AttributesType * AttributesIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  PartAssemblyBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    NaturalType * materialIndexIn,
    PointSimpleType * originMassPropertyIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn);
  ~PartAssemblyBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getmaterialIndex();
  void setmaterialIndex(NaturalType * materialIndexIn);
  PointSimpleType * getoriginMassProperty();
  void setoriginMassProperty(PointSimpleType * originMassPropertyIn);

  ValidationPartAssemblyType * getValidation();
  void setValidation(ValidationPartAssemblyType * ValidationIn);
  PartAssemblyHeaderType * getHeader();
  void setHeader(PartAssemblyHeaderType * HeaderIn);
  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);
  XmlString * getModelNumber();
  void setModelNumber(XmlString * ModelNumberIn);
  XmlString * getVersion();
  void setVersion(XmlString * VersionIn);
  SecurityClassificationType * getSecurityClassification();
  void setSecurityClassification(SecurityClassificationType * SecurityClassificationIn);
  XmlString * getExportControlClassification();
  void setExportControlClassification(XmlString * ExportControlClassificationIn);
  ArrayReferenceType * getFeatureNominalIds();
  void setFeatureNominalIds(ArrayReferenceType * FeatureNominalIdsIn);
  ArrayReferenceType * getFeatureZoneIds();
  void setFeatureZoneIds(ArrayReferenceType * FeatureZoneIdsIn);
  ArrayReferenceType * getCharacteristicNominalIds();
  void setCharacteristicNominalIds(ArrayReferenceType * CharacteristicNominalIdsIn);
  ArrayReferenceType * getNoteIds();
  void setNoteIds(ArrayReferenceType * NoteIdsIn);
  ArrayReferenceType * getPartNoteIds();
  void setPartNoteIds(ArrayReferenceType * PartNoteIdsIn);
  ArrayReferenceType * getDatumDefinitionIds();
  void setDatumDefinitionIds(ArrayReferenceType * DatumDefinitionIdsIn);
  ArrayReferenceType * getDatumTargetDefinitionIds();
  void setDatumTargetDefinitionIds(ArrayReferenceType * DatumTargetDefinitionIdsIn);
  ArrayReferenceType * getDatumReferenceFrameIds();
  void setDatumReferenceFrameIds(ArrayReferenceType * DatumReferenceFrameIdsIn);
  ArrayReferenceType * getBodyIds();
  void setBodyIds(ArrayReferenceType * BodyIdsIn);
  ArrayReferenceType * getCoordinateSystemIds();
  void setCoordinateSystemIds(ArrayReferenceType * CoordinateSystemIdsIn);
  ArrayReferenceType * getAuxiliaryIds();
  void setAuxiliaryIds(ArrayReferenceType * AuxiliaryIdsIn);
  ArrayReferenceType * getViewIds();
  void setViewIds(ArrayReferenceType * ViewIdsIn);
  ArrayReferenceType * getPointCloudIds();
  void setPointCloudIds(ArrayReferenceType * PointCloudIdsIn);

protected:
  NaturalType * materialIndex;
  PointSimpleType * originMassProperty;
  ValidationPartAssemblyType * Validation;
  PartAssemblyHeaderType * Header;
  QPIdType * UUID;
  XmlString * ModelNumber;
  XmlString * Version;
  SecurityClassificationType * SecurityClassification;
  XmlString * ExportControlClassification;
  ArrayReferenceType * FeatureNominalIds;
  ArrayReferenceType * FeatureZoneIds;
  ArrayReferenceType * CharacteristicNominalIds;
  ArrayReferenceType * NoteIds;
  ArrayReferenceType * PartNoteIds;
  ArrayReferenceType * DatumDefinitionIds;
  ArrayReferenceType * DatumTargetDefinitionIds;
  ArrayReferenceType * DatumReferenceFrameIds;
  ArrayReferenceType * BodyIds;
  ArrayReferenceType * CoordinateSystemIds;
  ArrayReferenceType * AuxiliaryIds;
  ArrayReferenceType * ViewIds;
  ArrayReferenceType * PointCloudIds;
};

/* ***************************************************************** */

class PartAssemblyHeaderType :
  public XmlTypeBase
{
public:
  PartAssemblyHeaderType();
  PartAssemblyHeaderType(
    XmlString * NameIn,
    FileInternalType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn);
  ~PartAssemblyHeaderType();
  void printSelf(FILE * outFile);

  XmlString * getName();
  void setName(XmlString * NameIn);
  FileInternalType * getFile();
  void setFile(FileInternalType * FileIn);
  ApplicationType * getApplication();
  void setApplication(ApplicationType * ApplicationIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  ApplicationType * getApplicationSource();
  void setApplicationSource(ApplicationType * ApplicationSourceIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  XmlString * Name;
  FileInternalType * File;
  ApplicationType * Application;
  AuthorType * Author;
  ApplicationType * ApplicationSource;
  XmlString * Description;
};

/* ***************************************************************** */

class PartFamilyType :
  public XmlTypeBase
{
public:
  PartFamilyType();
  PartFamilyType(
    ShapeClassType * PrimaryShapeClassIn,
    LinearValueType * MinimumToleranceIn,
    BoundingBoxType * MinimumBoundingBoxIn,
    ManufacturingMethodType * PrimaryManufacturingMethodIn);
  ~PartFamilyType();
  void printSelf(FILE * outFile);

  ShapeClassType * getPrimaryShapeClass();
  void setPrimaryShapeClass(ShapeClassType * PrimaryShapeClassIn);
  LinearValueType * getMinimumTolerance();
  void setMinimumTolerance(LinearValueType * MinimumToleranceIn);
  BoundingBoxType * getMinimumBoundingBox();
  void setMinimumBoundingBox(BoundingBoxType * MinimumBoundingBoxIn);
  ManufacturingMethodType * getPrimaryManufacturingMethod();
  void setPrimaryManufacturingMethod(ManufacturingMethodType * PrimaryManufacturingMethodIn);

protected:
  ShapeClassType * PrimaryShapeClass;
  LinearValueType * MinimumTolerance;
  BoundingBoxType * MinimumBoundingBox;
  ManufacturingMethodType * PrimaryManufacturingMethod;
};

/* ***************************************************************** */

class PartNoteSetType :
  public XmlTypeBase
{
public:
  PartNoteSetType();
  PartNoteSetType(
    PartNoteTypeLisd * PartNoteIn);
  PartNoteSetType(
    NaturalType * nIn,
    PartNoteTypeLisd * PartNoteIn);
  ~PartNoteSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PartNoteTypeLisd * getPartNote();
  void setPartNote(PartNoteTypeLisd *);

protected:
  NaturalType * n;
  PartNoteTypeLisd * PartNote;
};

/* ***************************************************************** */

class PartNoteType :
  public DrawableBaseType
{
public:
  PartNoteType();
  PartNoteType(
    AttributesType * AttributesIn,
    XmlString * TextIn,
    ArrayReferenceType * PartNoteIdsIn);
  PartNoteType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlString * TextIn,
    ArrayReferenceType * PartNoteIdsIn);
  ~PartNoteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getText();
  void setText(XmlString * TextIn);
  ArrayReferenceType * getPartNoteIds();
  void setPartNoteIds(ArrayReferenceType * PartNoteIdsIn);

protected:
  XmlString * Text;
  ArrayReferenceType * PartNoteIds;
};

/* ***************************************************************** */

class PartNoteTypeLisd :
  public std::list<PartNoteType *>,
  public XmlSchemaInstanceBase
{
public:
  PartNoteTypeLisd();
  PartNoteTypeLisd(
    PartNoteType * aPartNoteType);
  ~PartNoteTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PartSetType :
  public XmlTypeBase
{
public:
  PartSetType();
  PartSetType(
    PartTypeLisd * PartIn);
  PartSetType(
    NaturalType * nIn,
    PartTypeLisd * PartIn);
  ~PartSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PartTypeLisd * getPart();
  void setPart(PartTypeLisd *);

protected:
  NaturalType * n;
  PartTypeLisd * Part;
};

/* ***************************************************************** */

class PartType :
  public PartAssemblyBaseType
{
public:
  PartType();
  PartType(
    AttributesType * AttributesIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    DefinitionExternalType * DefinitionExternalIn,
    PartFamilyType * PartFamilyIn,
    FoldersPartType * FoldersPartIn);
  PartType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    NaturalType * materialIndexIn,
    PointSimpleType * originMassPropertyIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    DefinitionExternalType * DefinitionExternalIn,
    PartFamilyType * PartFamilyIn,
    FoldersPartType * FoldersPartIn);
  ~PartType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DefinitionExternalType * getDefinitionExternal();
  void setDefinitionExternal(DefinitionExternalType * DefinitionExternalIn);
  PartFamilyType * getPartFamily();
  void setPartFamily(PartFamilyType * PartFamilyIn);
  FoldersPartType * getFoldersPart();
  void setFoldersPart(FoldersPartType * FoldersPartIn);

protected:
  DefinitionExternalType * DefinitionExternal;
  PartFamilyType * PartFamily;
  FoldersPartType * FoldersPart;
};

/* ***************************************************************** */

class PartTypeLisd :
  public std::list<PartType *>,
  public XmlSchemaInstanceBase
{
public:
  PartTypeLisd();
  PartTypeLisd(
    PartType * aPartType);
  ~PartTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PhysicalModelType :
  public XmlTypeBase
{
public:
  PhysicalModelType();
  PhysicalModelType(
    XmlString * NameIn,
    XmlString * VersionIn,
    XmlString * DescriptionIn,
    AuthorType * AuthorIn,
    XmlString * LocationIn,
    XmlString * ModelNumberIn);
  PhysicalModelType(
    QIFIdType * idIn,
    XmlString * NameIn,
    XmlString * VersionIn,
    XmlString * DescriptionIn,
    AuthorType * AuthorIn,
    XmlString * LocationIn,
    XmlString * ModelNumberIn);
  ~PhysicalModelType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getVersion();
  void setVersion(XmlString * VersionIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  XmlString * getLocation();
  void setLocation(XmlString * LocationIn);
  XmlString * getModelNumber();
  void setModelNumber(XmlString * ModelNumberIn);

protected:
  QIFIdType * id;
  XmlString * Name;
  XmlString * Version;
  XmlString * Description;
  AuthorType * Author;
  XmlString * Location;
  XmlString * ModelNumber;
};

/* ***************************************************************** */

class PrintedDrawingType :
  public XmlTypeBase
{
public:
  PrintedDrawingType();
  PrintedDrawingType(
    XmlString * NameIn,
    XmlString * VersionIn,
    XmlString * DescriptionIn,
    AuthorType * AuthorIn,
    XmlString * DrawingNumberIn,
    XmlString * AdditionalChangesIn,
    XmlString * LocationIn);
  PrintedDrawingType(
    QIFIdType * idIn,
    XmlString * NameIn,
    XmlString * VersionIn,
    XmlString * DescriptionIn,
    AuthorType * AuthorIn,
    XmlString * DrawingNumberIn,
    XmlString * AdditionalChangesIn,
    XmlString * LocationIn);
  ~PrintedDrawingType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getVersion();
  void setVersion(XmlString * VersionIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  XmlString * getDrawingNumber();
  void setDrawingNumber(XmlString * DrawingNumberIn);
  XmlString * getAdditionalChanges();
  void setAdditionalChanges(XmlString * AdditionalChangesIn);
  XmlString * getLocation();
  void setLocation(XmlString * LocationIn);

protected:
  QIFIdType * id;
  XmlString * Name;
  XmlString * Version;
  XmlString * Description;
  AuthorType * Author;
  XmlString * DrawingNumber;
  XmlString * AdditionalChanges;
  XmlString * Location;
};

/* ***************************************************************** */

class ProductHeaderType :
  public PartAssemblyHeaderType
{
public:
  ProductHeaderType();
  ProductHeaderType(
    XmlString * NameIn,
    FileInternalType * FileIn,
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    XmlDouble * ScaleCoefficientIn,
    XmlDouble * ModelToleranceIn,
    XmlDouble * MassPropertyToleranceIn);
  ~ProductHeaderType();
  void printSelf(FILE * outFile);

  XmlDouble * getScaleCoefficient();
  void setScaleCoefficient(XmlDouble * ScaleCoefficientIn);
  XmlDouble * getModelTolerance();
  void setModelTolerance(XmlDouble * ModelToleranceIn);
  XmlDouble * getMassPropertyTolerance();
  void setMassPropertyTolerance(XmlDouble * MassPropertyToleranceIn);

protected:
  XmlDouble * ScaleCoefficient;
  XmlDouble * ModelTolerance;
  XmlDouble * MassPropertyTolerance;
};

/* ***************************************************************** */

class ProductType :
  public XmlTypeBase
{
public:
  ProductType();
  ProductType(
    ProductHeaderType * HeaderIn,
    GeometrySetType * GeometrySetIn,
    TopologySetType * TopologySetIn,
    NoteSetType * NoteSetIn,
    NoteFlagSetType * NoteFlagSetIn,
    PartNoteSetType * PartNoteSetIn,
    ViewSetType * ViewSetIn,
    LayerSetType * LayerSetIn,
    CoordinateSystemSetType * CoordinateSystemSetIn,
    VisualizationSetType * VisualizationSetIn,
    AuxiliarySetType * AuxiliarySetIn,
    PartSetType * PartSetIn,
    AssemblySetType * AssemblySetIn,
    ComponentSetType * ComponentSetIn,
    ProductType_1194_Type * ProductType_1194In,
    AsmPathsType * AsmPathsIn,
    MaterialsType * MaterialLibraryIn);
  ~ProductType();
  void printSelf(FILE * outFile);

  ProductHeaderType * getHeader();
  void setHeader(ProductHeaderType * HeaderIn);
  GeometrySetType * getGeometrySet();
  void setGeometrySet(GeometrySetType * GeometrySetIn);
  TopologySetType * getTopologySet();
  void setTopologySet(TopologySetType * TopologySetIn);
  NoteSetType * getNoteSet();
  void setNoteSet(NoteSetType * NoteSetIn);
  NoteFlagSetType * getNoteFlagSet();
  void setNoteFlagSet(NoteFlagSetType * NoteFlagSetIn);
  PartNoteSetType * getPartNoteSet();
  void setPartNoteSet(PartNoteSetType * PartNoteSetIn);
  ViewSetType * getViewSet();
  void setViewSet(ViewSetType * ViewSetIn);
  LayerSetType * getLayerSet();
  void setLayerSet(LayerSetType * LayerSetIn);
  CoordinateSystemSetType * getCoordinateSystemSet();
  void setCoordinateSystemSet(CoordinateSystemSetType * CoordinateSystemSetIn);
  VisualizationSetType * getVisualizationSet();
  void setVisualizationSet(VisualizationSetType * VisualizationSetIn);
  AuxiliarySetType * getAuxiliarySet();
  void setAuxiliarySet(AuxiliarySetType * AuxiliarySetIn);
  PartSetType * getPartSet();
  void setPartSet(PartSetType * PartSetIn);
  AssemblySetType * getAssemblySet();
  void setAssemblySet(AssemblySetType * AssemblySetIn);
  ComponentSetType * getComponentSet();
  void setComponentSet(ComponentSetType * ComponentSetIn);
  ProductType_1194_Type * getProductType_1194();
  void setProductType_1194(ProductType_1194_Type * ProductType_1194In);
  AsmPathsType * getAsmPaths();
  void setAsmPaths(AsmPathsType * AsmPathsIn);
  MaterialsType * getMaterialLibrary();
  void setMaterialLibrary(MaterialsType * MaterialLibraryIn);

protected:
  ProductHeaderType * Header;
  GeometrySetType * GeometrySet;
  TopologySetType * TopologySet;
  NoteSetType * NoteSet;
  NoteFlagSetType * NoteFlagSet;
  PartNoteSetType * PartNoteSet;
  ViewSetType * ViewSet;
  LayerSetType * LayerSet;
  CoordinateSystemSetType * CoordinateSystemSet;
  VisualizationSetType * VisualizationSet;
  AuxiliarySetType * AuxiliarySet;
  PartSetType * PartSet;
  AssemblySetType * AssemblySet;
  ComponentSetType * ComponentSet;
  ProductType_1194_Type * ProductType_1194;
  AsmPathsType * AsmPaths;
  MaterialsType * MaterialLibrary;
};

/* ***************************************************************** */

class TopologyEnumType :
  public XmlString
{
public:
  TopologyEnumType();
  TopologyEnumType(
    const char * valIn);
  ~TopologyEnumType();
  bool TopologyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ValidationPartAssemblyInstanceType :
  public XmlTypeBase
{
public:
  ValidationPartAssemblyInstanceType();
  ValidationPartAssemblyInstanceType(
    QIFReferenceType * AsmPathIdIn,
    PointSimpleType * CentroidIn,
    BoundingBoxAxisAlignedType * BoxIn);
  ~ValidationPartAssemblyInstanceType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getAsmPathId();
  void setAsmPathId(QIFReferenceType * AsmPathIdIn);
  PointSimpleType * getCentroid();
  void setCentroid(PointSimpleType * CentroidIn);
  BoundingBoxAxisAlignedType * getBox();
  void setBox(BoundingBoxAxisAlignedType * BoxIn);

protected:
  QIFReferenceType * AsmPathId;
  PointSimpleType * Centroid;
  BoundingBoxAxisAlignedType * Box;
};

/* ***************************************************************** */

class ValidationPartAssemblyInstanceTypeLisd :
  public std::list<ValidationPartAssemblyInstanceType *>,
  public XmlSchemaInstanceBase
{
public:
  ValidationPartAssemblyInstanceTypeLisd();
  ValidationPartAssemblyInstanceTypeLisd(
    ValidationPartAssemblyInstanceType * aValidationPartAssemblyInstanceType);
  ~ValidationPartAssemblyInstanceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ValidationPartAssemblyInstancesType :
  public XmlTypeBase
{
public:
  ValidationPartAssemblyInstancesType();
  ValidationPartAssemblyInstancesType(
    ValidationPartAssemblyInstanceTypeLisd * InstanceIn);
  ValidationPartAssemblyInstancesType(
    NaturalType * nIn,
    ValidationPartAssemblyInstanceTypeLisd * InstanceIn);
  ~ValidationPartAssemblyInstancesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ValidationPartAssemblyInstanceTypeLisd * getInstance();
  void setInstance(ValidationPartAssemblyInstanceTypeLisd *);

protected:
  NaturalType * n;
  ValidationPartAssemblyInstanceTypeLisd * Instance;
};

/* ***************************************************************** */

class ValidationPartAssemblyType :
  public XmlTypeBase
{
public:
  ValidationPartAssemblyType();
  ValidationPartAssemblyType(
    XmlDouble * AreaIn,
    PointSimpleType * CentroidIn,
    XmlDouble * VolumeIn,
    BoundingBoxAxisAlignedType * BoxIn,
    ValidationPointsType * FacePointsIn,
    ValidationPointsType * EdgePointsIn,
    ValidationPartAssemblyInstancesType * InstancesIn);
  ~ValidationPartAssemblyType();
  void printSelf(FILE * outFile);

  XmlDouble * getArea();
  void setArea(XmlDouble * AreaIn);
  PointSimpleType * getCentroid();
  void setCentroid(PointSimpleType * CentroidIn);
  XmlDouble * getVolume();
  void setVolume(XmlDouble * VolumeIn);
  BoundingBoxAxisAlignedType * getBox();
  void setBox(BoundingBoxAxisAlignedType * BoxIn);
  ValidationPointsType * getFacePoints();
  void setFacePoints(ValidationPointsType * FacePointsIn);
  ValidationPointsType * getEdgePoints();
  void setEdgePoints(ValidationPointsType * EdgePointsIn);
  ValidationPartAssemblyInstancesType * getInstances();
  void setInstances(ValidationPartAssemblyInstancesType * InstancesIn);

protected:
  XmlDouble * Area;
  PointSimpleType * Centroid;
  XmlDouble * Volume;
  BoundingBoxAxisAlignedType * Box;
  ValidationPointsType * FacePoints;
  ValidationPointsType * EdgePoints;
  ValidationPartAssemblyInstancesType * Instances;
};

/* ***************************************************************** */

class ComponentType_1193_Type :
  public XmlTypeBase
{
public:
  ComponentType_1193_Type();
  ComponentType_1193_Type(
    ComponentType_1193_TypeChoicePair * ComponentType_1193_TypePairIn);
  ~ComponentType_1193_Type();
  void printSelf(FILE * outFile);

  ComponentType_1193_TypeChoicePair * getComponentType_1193_TypePair();
  void setComponentType_1193_TypePair(ComponentType_1193_TypeChoicePair * ComponentType_1193_TypePairIn);

protected:
  ComponentType_1193_TypeChoicePair * ComponentType_1193_TypePair;
};

/* ***************************************************************** */

union ComponentType_1193_TypeVal
{
  ElementReferenceType * Part;
  ElementReferenceType * Assembly;
};

/* ***************************************************************** */

class ComponentType_1193_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PartE,
    AssemblyE };
  ComponentType_1193_TypeChoicePair();
  ComponentType_1193_TypeChoicePair(
    whichOne ComponentType_1193_TypeTypeIn,
    ComponentType_1193_TypeVal ComponentType_1193_TypeValueIn);
  ~ComponentType_1193_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ComponentType_1193_TypeType;
  ComponentType_1193_TypeVal ComponentType_1193_TypeValue;
};

/* ***************************************************************** */

class ProductType_1194_Type :
  public XmlTypeBase
{
public:
  ProductType_1194_Type();
  ProductType_1194_Type(
    ProductType_1194_TypeChoicePair * ProductType_1194_TypePairIn);
  ~ProductType_1194_Type();
  void printSelf(FILE * outFile);

  ProductType_1194_TypeChoicePair * getProductType_1194_TypePair();
  void setProductType_1194_TypePair(ProductType_1194_TypeChoicePair * ProductType_1194_TypePairIn);

protected:
  ProductType_1194_TypeChoicePair * ProductType_1194_TypePair;
};

/* ***************************************************************** */

union ProductType_1194_TypeVal
{
  ElementReferenceType * RootPart;
  ElementReferenceType * RootAssembly;
  ElementReferenceType * RootComponent;
};

/* ***************************************************************** */

class ProductType_1194_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    RootPartE,
    RootAssemblyE,
    RootComponentE };
  ProductType_1194_TypeChoicePair();
  ProductType_1194_TypeChoicePair(
    whichOne ProductType_1194_TypeTypeIn,
    ProductType_1194_TypeVal ProductType_1194_TypeValueIn);
  ~ProductType_1194_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProductType_1194_TypeType;
  ProductType_1194_TypeVal ProductType_1194_TypeValue;
};

/* ***************************************************************** */

class AssemblyType :
  public PartAssemblyBaseType
{
public:
  AssemblyType();
  AssemblyType(
    AttributesType * AttributesIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    ArrayReferenceType * ComponentIdsIn,
    DefinitionExternalType * DefinitionExternalIn,
    FoldersAssemblyType * FoldersAssemblyIn);
  AssemblyType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    NaturalType * materialIndexIn,
    PointSimpleType * originMassPropertyIn,
    ValidationPartAssemblyType * ValidationIn,
    PartAssemblyHeaderType * HeaderIn,
    QPIdType * UUIDIn,
    XmlString * ModelNumberIn,
    XmlString * VersionIn,
    SecurityClassificationType * SecurityClassificationIn,
    XmlString * ExportControlClassificationIn,
    ArrayReferenceType * FeatureNominalIdsIn,
    ArrayReferenceType * FeatureZoneIdsIn,
    ArrayReferenceType * CharacteristicNominalIdsIn,
    ArrayReferenceType * NoteIdsIn,
    ArrayReferenceType * PartNoteIdsIn,
    ArrayReferenceType * DatumDefinitionIdsIn,
    ArrayReferenceType * DatumTargetDefinitionIdsIn,
    ArrayReferenceType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    ArrayReferenceType * ComponentIdsIn,
    DefinitionExternalType * DefinitionExternalIn,
    FoldersAssemblyType * FoldersAssemblyIn);
  ~AssemblyType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getComponentIds();
  void setComponentIds(ArrayReferenceType * ComponentIdsIn);
  DefinitionExternalType * getDefinitionExternal();
  void setDefinitionExternal(DefinitionExternalType * DefinitionExternalIn);
  FoldersAssemblyType * getFoldersAssembly();
  void setFoldersAssembly(FoldersAssemblyType * FoldersAssemblyIn);

protected:
  ArrayReferenceType * ComponentIds;
  DefinitionExternalType * DefinitionExternal;
  FoldersAssemblyType * FoldersAssembly;
};

/* ***************************************************************** */

class AssemblyTypeLisd :
  public std::list<AssemblyType *>,
  public XmlSchemaInstanceBase
{
public:
  AssemblyTypeLisd();
  AssemblyTypeLisd(
    AssemblyType * aAssemblyType);
  ~AssemblyTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FolderAssemblyType :
  public FolderPartAssemblyBaseType
{
public:
  FolderAssemblyType();
  FolderAssemblyType(
    AttributesType * AttributesIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    ArrayReferenceType * ComponentIdsIn);
  FolderAssemblyType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    ArrayReferenceType * FolderIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * CharacteristicNominalIdsIn,
    ArrayReferenceFullType * NoteIdsIn,
    ArrayReferenceFullType * PartNoteIdsIn,
    ArrayReferenceFullType * DatumDefinitionIdsIn,
    ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
    ArrayReferenceFullType * DatumReferenceFrameIdsIn,
    ArrayReferenceType * BodyIdsIn,
    ArrayReferenceType * CoordinateSystemIdsIn,
    ArrayReferenceType * AuxiliaryIdsIn,
    ArrayReferenceType * ViewIdsIn,
    ArrayReferenceType * PointCloudIdsIn,
    ArrayReferenceType * ComponentIdsIn);
  ~FolderAssemblyType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getComponentIds();
  void setComponentIds(ArrayReferenceType * ComponentIdsIn);

protected:
  ArrayReferenceType * ComponentIds;
};

/* ***************************************************************** */

class FolderAssemblyTypeLisd :
  public std::list<FolderAssemblyType *>,
  public XmlSchemaInstanceBase
{
public:
  FolderAssemblyTypeLisd();
  FolderAssemblyTypeLisd(
    FolderAssemblyType * aFolderAssemblyType);
  ~FolderAssemblyTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NoteFlagType :
  public NoteType
{
public:
  NoteFlagType();
  NoteFlagType(
    AttributesType * AttributesIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlString * TextIn,
    XmlString * TextHiddenIn,
    XmlAnyURI * URIIn);
  NoteFlagType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    NoteFormEnumType * formIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlString * TextIn,
    XmlString * TextHiddenIn,
    XmlAnyURI * URIIn);
  ~NoteFlagType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getTextHidden();
  void setTextHidden(XmlString * TextHiddenIn);
  XmlAnyURI * getURI();
  void setURI(XmlAnyURI * URIIn);

protected:
  XmlString * TextHidden;
  XmlAnyURI * URI;
};

/* ***************************************************************** */

class NoteFlagTypeLisd :
  public std::list<NoteFlagType *>,
  public XmlSchemaInstanceBase
{
public:
  NoteFlagTypeLisd();
  NoteFlagTypeLisd(
    NoteFlagType * aNoteFlagType);
  ~NoteFlagTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

#endif // QIFPRODUCT_HH
