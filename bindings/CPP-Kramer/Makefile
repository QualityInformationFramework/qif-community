LINCOMPILE = g++ -c -v -g -Wall
LINLINK = g++ -v
INCLUD = -Isource

all: bin/QIFDocumentParser     \
     bin/QIF_CPlusPlusDlg      \
     bin/QIF_CPlusPlusDlgNoDup \
     bin/QIF_CPlusPlusDlgAuto

libqif.a : ofiles/QIFDocumentClasses.o             \
           ofiles/QIFMeasurementResourcesClasses.o \
           ofiles/QIFPlanClasses.o                 \
           ofiles/QIFProductClasses.o              \
           ofiles/QIFResultsClasses.o              \
           ofiles/QIFRulesClasses.o                \
           ofiles/QIFStatisticsClasses.o           \
           ofiles/AuxiliaryClasses.o               \
           ofiles/CharacteristicsClasses.o         \
           ofiles/ExpressionsClasses.o             \
           ofiles/FeaturesClasses.o                \
           ofiles/GeometryClasses.o                \
           ofiles/IntermediatesPMIClasses.o        \
           ofiles/PrimitivesClasses.o              \
           ofiles/PrimitivesPDClasses.o            \
           ofiles/PrimitivesPMIClasses.o           \
           ofiles/StatisticsClasses.o              \
           ofiles/TopologyClasses.o                \
           ofiles/TraceabilityClasses.o            \
           ofiles/UnitsClasses.o                   \
           ofiles/VisualizationClasses.o
	ar rcs libqif.a ofiles/QIFDocumentClasses.o             \
                        ofiles/QIFMeasurementResourcesClasses.o \
                        ofiles/QIFPlanClasses.o                 \
                        ofiles/QIFProductClasses.o              \
                        ofiles/QIFResultsClasses.o              \
                        ofiles/QIFRulesClasses.o                \
                        ofiles/QIFStatisticsClasses.o           \
                        ofiles/AuxiliaryClasses.o               \
                        ofiles/CharacteristicsClasses.o         \
                        ofiles/ExpressionsClasses.o             \
                        ofiles/FeaturesClasses.o                \
                        ofiles/GeometryClasses.o                \
                        ofiles/IntermediatesPMIClasses.o        \
                        ofiles/PrimitivesClasses.o              \
                        ofiles/PrimitivesPDClasses.o            \
                        ofiles/PrimitivesPMIClasses.o           \
                        ofiles/StatisticsClasses.o              \
                        ofiles/TopologyClasses.o                \
                        ofiles/TraceabilityClasses.o            \
                        ofiles/UnitsClasses.o                   \
                        ofiles/VisualizationClasses.o

libqifNoDest.a : ofiles/QIFDocumentClassesNoDest.o       \
           ofiles/QIFMeasurementResourcesClassesNoDest.o \
           ofiles/QIFPlanClassesNoDest.o                 \
           ofiles/QIFProductClassesNoDest.o              \
           ofiles/QIFResultsClassesNoDest.o              \
           ofiles/QIFRulesClassesNoDest.o                \
           ofiles/QIFStatisticsClassesNoDest.o           \
           ofiles/AuxiliaryClassesNoDest.o               \
           ofiles/CharacteristicsClassesNoDest.o         \
           ofiles/ExpressionsClassesNoDest.o             \
           ofiles/FeaturesClassesNoDest.o                \
           ofiles/GeometryClassesNoDest.o                \
           ofiles/IntermediatesPMIClassesNoDest.o        \
           ofiles/PrimitivesClassesNoDest.o              \
           ofiles/PrimitivesPDClassesNoDest.o            \
           ofiles/PrimitivesPMIClassesNoDest.o           \
           ofiles/StatisticsClassesNoDest.o              \
           ofiles/TopologyClassesNoDest.o                \
           ofiles/TraceabilityClassesNoDest.o            \
           ofiles/UnitsClassesNoDest.o                   \
           ofiles/VisualizationClassesNoDest.o
	ar rcs libqifNoDest.a ofiles/QIFDocumentClassesNoDest.o       \
                        ofiles/QIFMeasurementResourcesClassesNoDest.o \
                        ofiles/QIFPlanClassesNoDest.o                 \
                        ofiles/QIFProductClassesNoDest.o              \
                        ofiles/QIFResultsClassesNoDest.o              \
                        ofiles/QIFRulesClassesNoDest.o                \
                        ofiles/QIFStatisticsClassesNoDest.o           \
                        ofiles/AuxiliaryClassesNoDest.o               \
                        ofiles/CharacteristicsClassesNoDest.o         \
                        ofiles/ExpressionsClassesNoDest.o             \
                        ofiles/FeaturesClassesNoDest.o                \
                        ofiles/GeometryClassesNoDest.o                \
                        ofiles/IntermediatesPMIClassesNoDest.o        \
                        ofiles/PrimitivesClassesNoDest.o              \
                        ofiles/PrimitivesPDClassesNoDest.o            \
                        ofiles/PrimitivesPMIClassesNoDest.o           \
                        ofiles/StatisticsClassesNoDest.o              \
                        ofiles/TopologyClassesNoDest.o                \
                        ofiles/TraceabilityClassesNoDest.o            \
                        ofiles/UnitsClassesNoDest.o                   \
                        ofiles/VisualizationClassesNoDest.o

bin/QIFDocumentParser : libqif.a                    \
                        ofiles/QIFDocumentParser.o  \
                        ofiles/QIFDocumentLex.o     \
                        ofiles/QIFDocumentYACC.o    \
                        ofiles/xmlSchemaInstance.o
	$(LINLINK) -o $@ ofiles/QIFDocumentParser.o  \
                         ofiles/QIFDocumentLex.o     \
                         ofiles/QIFDocumentYACC.o    \
                         ofiles/xmlSchemaInstance.o  \
                         -L. -lqif -L/usr/lib -lboost_regex

bin/QIF_CPlusPlusDlg : libqif.a                   \
                       ofiles/QIF_CPlusPlusDlg.o  \
                       ofiles/xmlSchemaInstance.o
	$(LINLINK) -o $@ ofiles/QIF_CPlusPlusDlg.o  \
                         ofiles/xmlSchemaInstance.o \
                         -L. -lqif -L/usr/lib -lboost_regex

bin/QIF_CPlusPlusDlgNoDup : libqif.a                        \
                            ofiles/QIF_CPlusPlusDlgNoDup.o  \
                            ofiles/xmlSchemaInstance.o
	$(LINLINK) -o $@ ofiles/QIF_CPlusPlusDlgNoDup.o  \
                         ofiles/xmlSchemaInstance.o      \
                         -L. -lqif -L/usr/lib -lboost_regex

bin/QIF_CPlusPlusDlgAuto : libqifNoDest.a                \
                           ofiles/QIF_CPlusPlusDlgAuto.o \
                           ofiles/xmlSchemaInstanceNoDest.o
	$(LINLINK) -o $@ ofiles/QIF_CPlusPlusDlgAuto.o    \
                         ofiles/xmlSchemaInstanceNoDest.o \
                         -L. -lqifNoDest -L/usr/lib -lboost_regex

ofiles/QIFDocumentClasses.o : source/QIFDocumentClasses.hh             \
                              source/QIFMeasurementResourcesClasses.hh \
                              source/QIFPlanClasses.hh                 \
                              source/QIFProductClasses.hh              \
                              source/QIFResultsClasses.hh              \
                              source/QIFRulesClasses.hh                \
                              source/QIFStatisticsClasses.hh           \
                              source/AuxiliaryClasses.hh               \
                              source/CharacteristicsClasses.hh         \
                              source/ExpressionsClasses.hh             \
                              source/FeaturesClasses.hh                \
                              source/GeometryClasses.hh                \
                              source/IntermediatesPMIClasses.hh        \
                              source/PrimitivesClasses.hh              \
                              source/PrimitivesPDClasses.hh            \
                              source/PrimitivesPMIClasses.hh           \
                              source/StatisticsClasses.hh              \
                              source/TopologyClasses.hh                \
                              source/TraceabilityClasses.hh            \
                              source/UnitsClasses.hh                   \
                              source/VisualizationClasses.hh           \
                              source/QIFDocumentYACC.hh                \
                              source/xmlSchemaInstance.hh              \
                              source/QIFDocumentClasses.cc
	$(LINCOMPILE) -o $@  -DACCESSGETSET $(INCLUD) source/QIFDocumentClasses.cc

ofiles/QIFDocumentClassesNoDest.o : source/QIFDocumentClasses.hh       \
                              source/QIFMeasurementResourcesClasses.hh \
                              source/QIFPlanClasses.hh                 \
                              source/QIFProductClasses.hh              \
                              source/QIFResultsClasses.hh              \
                              source/QIFRulesClasses.hh                \
                              source/QIFStatisticsClasses.hh           \
                              source/AuxiliaryClasses.hh               \
                              source/CharacteristicsClasses.hh         \
                              source/ExpressionsClasses.hh             \
                              source/FeaturesClasses.hh                \
                              source/GeometryClasses.hh                \
                              source/IntermediatesPMIClasses.hh        \
                              source/PrimitivesClasses.hh              \
                              source/PrimitivesPDClasses.hh            \
                              source/PrimitivesPMIClasses.hh           \
                              source/StatisticsClasses.hh              \
                              source/TopologyClasses.hh                \
                              source/TraceabilityClasses.hh            \
                              source/UnitsClasses.hh                   \
                              source/VisualizationClasses.hh           \
                              source/QIFDocumentYACC.hh                \
                              source/xmlSchemaInstance.hh              \
                              source/QIFDocumentClasses.cc
	$(LINCOMPILE) -o $@  -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFDocumentClasses.cc

ofiles/QIF_CPlusPlusDlg.o :source/QIFDocumentClasses.hh             \
                           source/QIFMeasurementResourcesClasses.hh \
                           source/QIFPlanClasses.hh                 \
                           source/QIFProductClasses.hh              \
                           source/QIFResultsClasses.hh              \
                           source/QIFRulesClasses.hh                \
                           source/QIFStatisticsClasses.hh           \
                           source/AuxiliaryClasses.hh               \
                           source/CharacteristicsClasses.hh         \
                           source/ExpressionsClasses.hh             \
                           source/FeaturesClasses.hh                \
                           source/GeometryClasses.hh                \
                           source/IntermediatesPMIClasses.hh        \
                           source/PrimitivesClasses.hh              \
                           source/PrimitivesPDClasses.hh            \
                           source/PrimitivesPMIClasses.hh           \
                           source/StatisticsClasses.hh              \
                           source/TopologyClasses.hh                \
                           source/TraceabilityClasses.hh            \
                           source/UnitsClasses.hh                   \
                           source/VisualizationClasses.hh           \
                           source/QIFDocumentYACC.hh                \
                           source/xmlSchemaInstance.hh              \
                           source/QIF_CPlusPlusDlg.cc
	$(LINCOMPILE) -DACCESSGETSET -o $@ $(INCLUD) source/QIF_CPlusPlusDlg.cc

ofiles/QIF_CPlusPlusDlgNoDup.o :source/QIFDocumentClasses.hh             \
                                source/QIFMeasurementResourcesClasses.hh \
                                source/QIFPlanClasses.hh                 \
                                source/QIFProductClasses.hh              \
                                source/QIFResultsClasses.hh              \
                                source/QIFRulesClasses.hh                \
                                source/QIFStatisticsClasses.hh           \
                                source/AuxiliaryClasses.hh               \
                                source/CharacteristicsClasses.hh         \
                                source/ExpressionsClasses.hh             \
                                source/FeaturesClasses.hh                \
                                source/GeometryClasses.hh                \
                                source/IntermediatesPMIClasses.hh        \
                                source/PrimitivesClasses.hh              \
                                source/PrimitivesPDClasses.hh            \
                                source/PrimitivesPMIClasses.hh           \
                                source/StatisticsClasses.hh              \
                                source/TopologyClasses.hh                \
                                source/TraceabilityClasses.hh            \
                                source/UnitsClasses.hh                   \
                                source/VisualizationClasses.hh           \
                                source/QIFDocumentYACC.hh                \
                                source/xmlSchemaInstance.hh              \
                                source/QIF_CPlusPlusDlgNoDup.cc
	$(LINCOMPILE) -DACCESSGETSET -o $@ $(INCLUD) source/QIF_CPlusPlusDlgNoDup.cc

ofiles/QIF_CPlusPlusDlgAuto.o :source/QIFDocumentClasses.hh         \
                           source/QIFMeasurementResourcesClasses.hh \
                           source/QIFPlanClasses.hh                 \
                           source/QIFProductClasses.hh              \
                           source/QIFResultsClasses.hh              \
                           source/QIFRulesClasses.hh                \
                           source/QIFStatisticsClasses.hh           \
                           source/AuxiliaryClasses.hh               \
                           source/CharacteristicsClasses.hh         \
                           source/ExpressionsClasses.hh             \
                           source/FeaturesClasses.hh                \
                           source/GeometryClasses.hh                \
                           source/IntermediatesPMIClasses.hh        \
                           source/PrimitivesClasses.hh              \
                           source/PrimitivesPDClasses.hh            \
                           source/PrimitivesPMIClasses.hh           \
                           source/StatisticsClasses.hh              \
                           source/TopologyClasses.hh                \
                           source/TraceabilityClasses.hh            \
                           source/UnitsClasses.hh                   \
                           source/VisualizationClasses.hh           \
                           source/QIFDocumentYACC.hh                \
                           source/xmlSchemaInstance.hh              \
                           source/QIF_CPlusPlusDlgAuto.cc
	$(LINCOMPILE) -DACCESSGETSET -o $@ -DNODESTRUCT $(INCLUD) source/QIF_CPlusPlusDlgAuto.cc


ofiles/QIFMeasurementResourcesClasses.o :                        \
                        source/QIFMeasurementResourcesClasses.hh \
                        source/PrimitivesClasses.hh              \
                        source/PrimitivesPDClasses.hh            \
                        source/PrimitivesPMIClasses.hh           \
                        source/UnitsClasses.hh                   \
                        source/IntermediatesPMIClasses.hh        \
                        source/TopologyClasses.hh                \
                        source/GeometryClasses.hh                \
                        source/xmlSchemaInstance.hh              \
                        source/QIFMeasurementResourcesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFMeasurementResourcesClasses.cc

ofiles/QIFMeasurementResourcesClassesNoDest.o :                  \
                        source/QIFMeasurementResourcesClasses.hh \
                        source/PrimitivesClasses.hh              \
                        source/PrimitivesPDClasses.hh            \
                        source/PrimitivesPMIClasses.hh           \
                        source/UnitsClasses.hh                   \
                        source/IntermediatesPMIClasses.hh        \
                        source/TopologyClasses.hh                \
                        source/GeometryClasses.hh                \
                        source/xmlSchemaInstance.hh              \
                        source/QIFMeasurementResourcesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFMeasurementResourcesClasses.cc

ofiles/QIFPlanClasses.o : source/QIFPlanClasses.hh            \
                          source/ExpressionsClasses.hh        \
                          source/IntermediatesPMIClasses.hh   \
                          source/xmlSchemaInstance.hh         \
                          source/QIFPlanClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFPlanClasses.cc

ofiles/QIFPlanClassesNoDest.o : source/QIFPlanClasses.hh      \
                          source/ExpressionsClasses.hh        \
                          source/IntermediatesPMIClasses.hh   \
                          source/xmlSchemaInstance.hh         \
                          source/QIFPlanClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFPlanClasses.cc

ofiles/QIFProductClasses.o : source/QIFProductClasses.hh     \
                             source/AuxiliaryClasses.hh      \
                             source/GeometryClasses.hh       \
                             source/TopologyClasses.hh       \
                             source/TraceabilityClasses.hh   \
                             source/VisualizationClasses.hh  \
                             source/xmlSchemaInstance.hh     \
                             source/QIFProductClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFProductClasses.cc

ofiles/QIFProductClassesNoDest.o : source/QIFProductClasses.hh \
                             source/AuxiliaryClasses.hh        \
                             source/GeometryClasses.hh         \
                             source/TopologyClasses.hh         \
                             source/TraceabilityClasses.hh     \
                             source/VisualizationClasses.hh    \
                             source/xmlSchemaInstance.hh       \
                             source/QIFProductClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFProductClasses.cc

ofiles/QIFResultsClasses.o : source/QIFResultsClasses.hh      \
                             source/CharacteristicsClasses.hh \
                             source/FeaturesClasses.hh        \
                             source/TraceabilityClasses.hh    \
                             source/xmlSchemaInstance.hh      \
                             source/QIFResultsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFResultsClasses.cc


ofiles/QIFResultsClassesNoDest.o : source/QIFResultsClasses.hh \
                             source/CharacteristicsClasses.hh  \
                             source/FeaturesClasses.hh         \
                             source/TraceabilityClasses.hh     \
                             source/xmlSchemaInstance.hh       \
                             source/QIFResultsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFResultsClasses.cc


ofiles/QIFRulesClasses.o : source/QIFRulesClasses.hh     \
                           source/QIFPlanClasses.hh      \
                           source/ExpressionsClasses.hh  \
                           source/xmlSchemaInstance.hh   \
                           source/QIFRulesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFRulesClasses.cc


ofiles/QIFRulesClassesNoDest.o : source/QIFRulesClasses.hh     \
                           source/QIFPlanClasses.hh      \
                           source/ExpressionsClasses.hh  \
                           source/xmlSchemaInstance.hh   \
                           source/QIFRulesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFRulesClasses.cc


ofiles/QIFStatisticsClasses.o : source/QIFStatisticsClasses.hh     \
                                source/PrimitivesClasses.hh        \
                                source/PrimitivesPMIClasses.hh     \
                                source/UnitsClasses.hh             \
                                source/IntermediatesPMIClasses.hh  \
                                source/StatisticsClasses.hh        \
                                source/TraceabilityClasses.hh      \
                                source/xmlSchemaInstance.hh        \
                                source/QIFStatisticsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFStatisticsClasses.cc

ofiles/QIFStatisticsClassesNoDest.o : source/QIFStatisticsClasses.hh \
                                source/PrimitivesClasses.hh          \
                                source/PrimitivesPMIClasses.hh       \
                                source/UnitsClasses.hh               \
                                source/IntermediatesPMIClasses.hh    \
                                source/StatisticsClasses.hh          \
                                source/TraceabilityClasses.hh        \
                                source/xmlSchemaInstance.hh          \
                                source/QIFStatisticsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/QIFStatisticsClasses.cc

ofiles/AuxiliaryClasses.o : source/AuxiliaryClasses.hh     \
                            source/PrimitivesClasses.hh    \
                            source/PrimitivesPDClasses.hh  \
                            source/xmlSchemaInstance.hh    \
                            source/AuxiliaryClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/AuxiliaryClasses.cc

ofiles/AuxiliaryClassesNoDest.o : source/AuxiliaryClasses.hh \
                            source/PrimitivesClasses.hh      \
                            source/PrimitivesPDClasses.hh    \
                            source/xmlSchemaInstance.hh      \
                            source/AuxiliaryClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/AuxiliaryClasses.cc

ofiles/CharacteristicsClasses.o : source/CharacteristicsClasses.hh  \
                                  source/IntermediatesPMIClasses.hh \
                                  source/PrimitivesClasses.hh       \
                                  source/PrimitivesPMIClasses.hh    \
                                  source/UnitsClasses.hh            \
                                  source/xmlSchemaInstance.hh       \
                                  source/CharacteristicsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/CharacteristicsClasses.cc

ofiles/CharacteristicsClassesNoDest.o : source/CharacteristicsClasses.hh \
                                  source/IntermediatesPMIClasses.hh      \
                                  source/PrimitivesClasses.hh            \
                                  source/PrimitivesPMIClasses.hh         \
                                  source/UnitsClasses.hh                 \
                                  source/xmlSchemaInstance.hh            \
                                  source/CharacteristicsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/CharacteristicsClasses.cc

ofiles/ExpressionsClasses.o : source/ExpressionsClasses.hh        \
                              source/xmlSchemaInstance.hh         \
                              source/ExpressionsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/ExpressionsClasses.cc

ofiles/ExpressionsClassesNoDest.o : source/ExpressionsClasses.hh  \
                              source/xmlSchemaInstance.hh         \
                              source/ExpressionsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/ExpressionsClasses.cc

ofiles/FeaturesClasses.o : source/FeaturesClasses.hh      \
                           source/PrimitivesClasses.hh    \
                           source/PrimitivesPMIClasses.hh \
                           source/xmlSchemaInstance.hh    \
                           source/FeaturesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/FeaturesClasses.cc

ofiles/FeaturesClassesNoDest.o : source/FeaturesClasses.hh \
                           source/PrimitivesClasses.hh     \
                           source/PrimitivesPMIClasses.hh  \
                           source/xmlSchemaInstance.hh     \
                           source/FeaturesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/FeaturesClasses.cc

ofiles/GeometryClasses.o : source/GeometryClasses.hh     \
                           source/PrimitivesClasses.hh   \
                           source/PrimitivesPDClasses.hh \
                           source/xmlSchemaInstance.hh   \
                           source/GeometryClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/GeometryClasses.cc

ofiles/GeometryClassesNoDest.o : source/GeometryClasses.hh \
                           source/PrimitivesClasses.hh     \
                           source/PrimitivesPDClasses.hh   \
                           source/xmlSchemaInstance.hh     \
                           source/GeometryClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/GeometryClasses.cc

ofiles/IntermediatesPMIClasses.o : source/IntermediatesPMIClasses.hh \
                                   source/PrimitivesClasses.hh       \
                                   source/PrimitivesPMIClasses.hh    \
                                   source/UnitsClasses.hh            \
                                   source/xmlSchemaInstance.hh       \
                                   source/IntermediatesPMIClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/IntermediatesPMIClasses.cc

ofiles/IntermediatesPMIClassesNoDest.o : source/IntermediatesPMIClasses.hh \
                                   source/PrimitivesClasses.hh             \
                                   source/PrimitivesPMIClasses.hh          \
                                   source/UnitsClasses.hh                  \
                                   source/xmlSchemaInstance.hh             \
                                   source/IntermediatesPMIClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/IntermediatesPMIClasses.cc

ofiles/PrimitivesClasses.o : source/PrimitivesClasses.hh \
                             source/xmlSchemaInstance.hh \
                             source/PrimitivesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/PrimitivesClasses.cc

ofiles/PrimitivesClassesNoDest.o : source/PrimitivesClasses.hh \
                             source/xmlSchemaInstance.hh       \
                             source/PrimitivesClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/PrimitivesClasses.cc

ofiles/PrimitivesPDClasses.o : source/PrimitivesClasses.hh   \
                               source/PrimitivesPDClasses.hh \
                               source/UnitsClasses.hh        \
                               source/xmlSchemaInstance.hh   \
                               source/PrimitivesPDClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/PrimitivesPDClasses.cc

ofiles/PrimitivesPDClassesNoDest.o : source/PrimitivesClasses.hh \
                               source/PrimitivesPDClasses.hh     \
                               source/UnitsClasses.hh            \
                               source/xmlSchemaInstance.hh       \
                               source/PrimitivesPDClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/PrimitivesPDClasses.cc

ofiles/PrimitivesPMIClasses.o : source/PrimitivesClasses.hh     \
                                source/PrimitivesPMIClasses.hh  \
                                source/UnitsClasses.hh          \
                                source/xmlSchemaInstance.hh     \
                                source/PrimitivesPMIClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/PrimitivesPMIClasses.cc

ofiles/PrimitivesPMIClassesNoDest.o : source/PrimitivesClasses.hh \
                                source/PrimitivesPMIClasses.hh    \
                                source/UnitsClasses.hh            \
                                source/xmlSchemaInstance.hh       \
                                source/PrimitivesPMIClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/PrimitivesPMIClasses.cc

ofiles/StatisticsClasses.o : source/FeaturesClasses.hh         \
                             source/IntermediatesPMIClasses.hh \
                             source/PrimitivesClasses.hh       \
                             source/PrimitivesPMIClasses.hh    \
                             source/StatisticsClasses.hh       \
                             source/TraceabilityClasses.hh     \
                             source/UnitsClasses.hh            \
                             source/xmlSchemaInstance.hh       \
                             source/StatisticsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/StatisticsClasses.cc

ofiles/StatisticsClassesNoDest.o : source/FeaturesClasses.hh   \
                             source/IntermediatesPMIClasses.hh \
                             source/PrimitivesClasses.hh       \
                             source/PrimitivesPMIClasses.hh    \
                             source/StatisticsClasses.hh       \
                             source/TraceabilityClasses.hh     \
                             source/UnitsClasses.hh            \
                             source/xmlSchemaInstance.hh       \
                             source/StatisticsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/StatisticsClasses.cc

ofiles/TopologyClasses.o : source/PrimitivesClasses.hh   \
                           source/PrimitivesPDClasses.hh \
                           source/TopologyClasses.hh     \
                           source/xmlSchemaInstance.hh   \
                           source/TopologyClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/TopologyClasses.cc

ofiles/TopologyClassesNoDest.o : source/PrimitivesClasses.hh \
                           source/PrimitivesPDClasses.hh     \
                           source/TopologyClasses.hh         \
                           source/xmlSchemaInstance.hh       \
                           source/TopologyClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/TopologyClasses.cc

ofiles/TraceabilityClasses.o : source/PrimitivesClasses.hh     \
                               source/PrimitivesPMIClasses.hh  \
                               source/TraceabilityClasses.hh   \
                               source/xmlSchemaInstance.hh     \
                               source/TraceabilityClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/TraceabilityClasses.cc

ofiles/TraceabilityClassesNoDest.o : source/PrimitivesClasses.hh \
                               source/PrimitivesPMIClasses.hh    \
                               source/TraceabilityClasses.hh     \
                               source/xmlSchemaInstance.hh       \
                               source/TraceabilityClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/TraceabilityClasses.cc

ofiles/UnitsClasses.o : source/PrimitivesClasses.hh  \
                        source/UnitsClasses.hh       \
                        source/xmlSchemaInstance.hh  \
                        source/UnitsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/UnitsClasses.cc

ofiles/UnitsClassesNoDest.o : source/PrimitivesClasses.hh \
                        source/UnitsClasses.hh            \
                        source/xmlSchemaInstance.hh       \
                        source/UnitsClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/UnitsClasses.cc

ofiles/VisualizationClasses.o : source/CharacteristicsClasses.hh  \
                                source/PrimitivesClasses.hh       \
                                source/PrimitivesPDClasses.hh     \
                                source/VisualizationClasses.hh    \
                                source/xmlSchemaInstance.hh       \
                                source/VisualizationClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/VisualizationClasses.cc

ofiles/VisualizationClassesNoDest.o : source/CharacteristicsClasses.hh \
                                source/PrimitivesClasses.hh            \
                                source/PrimitivesPDClasses.hh          \
                                source/VisualizationClasses.hh         \
                                source/xmlSchemaInstance.hh            \
                                source/VisualizationClasses.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET -DNODESTRUCT $(INCLUD) source/VisualizationClasses.cc

ofiles/QIFDocumentLex.o : source/QIFDocumentLex.cc  \
                          source/QIFDocumentYACC.hh
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFDocumentLex.cc

ofiles/QIFDocumentParser.o : source/QIFDocumentParser.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFDocumentParser.cc

ofiles/QIFDocumentYACC.o : source/QIFDocumentClasses.hh             \
                           source/QIFMeasurementResourcesClasses.hh \
                           source/QIFPlanClasses.hh                 \
                           source/QIFProductClasses.hh              \
                           source/QIFResultsClasses.hh              \
                           source/QIFRulesClasses.hh                \
                           source/QIFStatisticsClasses.hh           \
                           source/AuxiliaryClasses.hh               \
                           source/CharacteristicsClasses.hh         \
                           source/ExpressionsClasses.hh             \
                           source/FeaturesClasses.hh                \
                           source/GeometryClasses.hh                \
                           source/IntermediatesPMIClasses.hh        \
                           source/PrimitivesClasses.hh              \
                           source/PrimitivesPDClasses.hh            \
                           source/PrimitivesPMIClasses.hh           \
                           source/StatisticsClasses.hh              \
                           source/TopologyClasses.hh                \
                           source/TraceabilityClasses.hh            \
                           source/UnitsClasses.hh                   \
                           source/VisualizationClasses.hh           \
                           source/QIFDocumentYACC.hh                \
                           source/xmlSchemaInstance.hh              \
                           source/QIFDocumentYACC.cc
	$(LINCOMPILE) -o $@ -DACCESSGETSET $(INCLUD) source/QIFDocumentYACC.cc

ofiles/xmlSchemaInstance.o : source/xmlSchemaInstance.cc \
                             source/xmlSchemaInstance.hh
	$(LINCOMPILE) -DACCESSGETSET $(INCLUD) -o $@ source/xmlSchemaInstance.cc

ofiles/xmlSchemaInstanceNoDest.o : source/xmlSchemaInstance.cc \
                                   source/xmlSchemaInstance.hh
	$(LINCOMPILE) -DACCESSGETSET -DNODESTRUCT $(INCLUD) -o $@ source/xmlSchemaInstance.cc

source/QIFDocumentYACC.hh : source/QIFDocumentYACC.cc

source/QIFDocumentYACC.cc : source/QIFDocument.y
	bison -d -o $@ source/QIFDocument.y

source/QIFDocumentLex.cc : source/QIFDocument.lex \
                           source/QIFDocumentYACC.hh
	flex -Ca -L -t source/QIFDocument.lex > source/QIFDocumentLex.cc
