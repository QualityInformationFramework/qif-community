from __future__ import print_function
import pyxb
import QIFDocument
import xml.dom.minidom
import time
import io
import os
import tkinter

#region function GetDatumDefinitions
# Populates string datdef with DMIS datum definition(s), e.g., "DATDEF/FA(PLANE1),DAT(A)"
# Inputs are the QIF Document as qifDoc, the feature nominal QIF id as nomid and the feature label as falabel, e.g., "FA(PLANE1)"
#
# The datum definition list is traversed looking for a reference back to the specified feature
#
def GetDatumDefinitions(qifDoc = QIFDocument.QIFDocumentType(), nomid = 0, falabel = "", datdef = [""]) :
    if qifDoc.DatumDefinitions is not None : # make sure we have (optional) datum definitions
        for datDef in qifDoc.DatumDefinitions.DatumDefinition :
            if datDef.FeatureNominalIds is not None :
                for featId in datDef.FeatureNominalIds.Id :
                    if featId.value() == nomid :
                        datdef[0] += "DATDEF/" + falabel + ",DAT(" + datDef.DatumLabel + ")\n"
#endregion                        

#region function GetDatumReferenceFrame
# Populates string drfstr with a DMIS drf representation, e.g. ",DAT(A),DAT(B),MMC,DAT(C),MMC"
# Inputs are the QIF Document as qifDoc and the QIF id of the drf as drfid
#
# The datum reference frame definition list is traversed looking for the specified id, datum precidence and materal condition
# are found and combined with the datum label found by traversing the datum definition list
def GetDatumReferenceFrame(qifDoc = QIFDocument.QIFDocumentType(), drfid = 0, drfstr = [""]) :
    if (qifDoc.DatumReferenceFrames is not None) & (qifDoc.DatumDefinitions is not None) : # make sure we have (optional) datum definitions and datum reference frame definitions
        for drf in qifDoc.DatumReferenceFrames.DatumReferenceFrame : # walk through the drf list
            if drf.id == drfid : # we found the drf we're looking for
                # DMIS supports up to 3 datums
                primary = ""
                secondary = ""
                tertiary = ""
                # Generic holder until we figure out this datum's precidence
                datum = ""
                if drf.Datums is not None : # make sure this srf has (optional) datum list
                    for dat in drf.Datums.Datum : # walk through the datum list
                        if dat.SimpleDatum is not None : # is this a simple datum? (as opposed to compound and datum features)
                            if qifDoc.DatumDefinitions is not None : # do we have optional datum definition list?
                                for datDef in qifDoc.DatumDefinitions.DatumDefinition :  # walk through the datum definition list
                                    if datDef.id == dat.SimpleDatum.DatumDefinitionId.value() : # do we have an id match?
                                        datum = ",DAT(" + datDef.DatumLabel + ")" # capture the datum label
                            # append material condition modifier as appropriate
                            if dat.SimpleDatum.MaterialModifier == QIFDocument.MaterialModifierEnumType.MAXIMUM :
                                datum += ",MMC"
                            elif dat.SimpleDatum.MaterialModifier == QIFDocument.MaterialModifierEnumType.LEAST :
                                datum += ",LMC"
                            elif dat.SimpleDatum.MaterialModifier == QIFDocument.MaterialModifierEnumType.REGARDLESS :
                                datum += ",RFS"
                            if dat.Precedence.PrecedenceEnum is not None : # we only handle the enumeration, make sure it's there
                                # populate specific datum precidence with holder string
                                if dat.Precedence.PrecedenceEnum == QIFDocument.PrecedenceEnumType.PRIMARY :
                                    primary = datum
                                elif dat.Precedence.PrecedenceEnum == QIFDocument.PrecedenceEnumType.SECONDARY :
                                    secondary = datum
                                elif dat.Precedence.PrecedenceEnum == QIFDocument.PrecedenceEnumType.TERTIARY :
                                    tertiary = datum
                drfstr[0] = primary + secondary + tertiary # add the 3 datum together (some or all can be empty strings)
#endregion                        

#region function GetTolerances
# Populates tlabels and talabels with a list of DMIS tolerance labels applied to the feature actual with specified QIF id, 
# e.g. tlabels is filled with ",T(DIAM2),T(POSN2)" and talabels is filled with ",TA(DIAM2),TA(POSN2)"
# Populates tdefs and tadefs with DMIS representations of nominal and actual tolerances respectively
# e.g. tdefs is filled with:
# T(DIAM2)=TOL/DIAM,-0.1,0.1
# T(POSN2)=TOL/POS,3D,0.75,MMC,DAT(A),DAT(B),MMC,DAT(C),MMC
# and tadefs is filled with:
# TA(DIAM2)=TOL/DIAM,6.2,OUTOL
# TA(POSN2)=TOL/POS,3D,0.0618,INTOL,MMC,DAT(A),DAT(B),MMC,DAT(C),MMC
#
# Inputs are the QIF Document as qifDoc and the QIF id of the drf as drfid
#
# The datum reference frame definition list is traversed looking for the specified id, datum precidence and materal condition
# are found and combined with the datum label found by traversing the datum definition list
def GetTolerances(qifDoc = QIFDocument.QIFDocumentType(), actfeatid = 0, tlabels = [""], talabels = [""], tdefs = [""], tadefs = [""]) :
    if (qifDoc.Characteristics is not None) & \
       (qifDoc.Characteristics.CharacteristicItems is not None) & \
       (qifDoc.MeasurementsResults is not None) :
        measResults = qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults[0]
        if (measResults.MeasuredFeatures is not None) & \
           (measResults.MeasuredFeatures.FeatureActuals is not None) & \
           (measResults.MeasuredCharacteristics is not None) & \
           (measResults.MeasuredCharacteristics.CharacteristicActuals is not None) :
            # walk through actual characteristics to get characteristics applied to this actual feature actfeatid
            for charAct in measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual :
                if charAct.FeatureActualIds is not None : # characteristics optionally point at features
                    for actFeatId in charAct.FeatureActualIds.Id : # walk through feature references
                        if actFeatId.value() == actfeatid : # look for a match
                            # find the item, nominal and definition for this actual characteristic
                            for charItem in qifDoc.Characteristics.CharacteristicItems .CharacteristicItem: # walk through characteristic items
                                if charItem.id == charAct.CharacteristicItemId.value() : # looking for the item referenced by the actual
                                    for charNom in qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal : # walk through characteristic nominals
                                        if charNom.id == charItem.CharacteristicNominalId.value() : # looking for the nominal referenced by the item
                                            for charDef in qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition : # walk through characteristic definitions
                                                if charDef.id == charNom.CharacteristicDefinitionId.value() : # looking for the definition referenced by the nominal
                                                    # we have all four aspects, check their types (which should all match)
                                                    if (type(charAct) is QIFDocument.DiameterCharacteristicActualType) & (type(charItem) is QIFDocument.DiameterCharacteristicItemType) & \
                                                       (type(charNom) is QIFDocument.DiameterCharacteristicNominalType) & (type(charDef) is QIFDocument.DiameterCharacteristicDefinitionType) :
                                                        # we have a set of matched diameter types
                                                        diaAct = charAct
                                                        diaItem = charItem
                                                        diaNom = charNom
                                                        diaDef = charDef
                                                        if diaDef.Tolerance is not None : # this could be a limit&fit or tolerance definition
                                                            # just min, just max, or both min+max may be defined in QIF, DMIS needs both
                                                            hitol = 0
                                                            lotol = 0
                                                            if diaDef.Tolerance.MaxValue is not None :
                                                                hitol = diaDef.Tolerance.MaxValue.value()
                                                            if diaDef.Tolerance.MinValue is not None :
                                                                lotol = diaDef.Tolerance.MinValue.value()
                                                            if diaDef.Tolerance.DefinedAsLimit : # limit specification?
                                                                # DMIS doesn't support limit tolerance for diameter
                                                                if diaNom.TargetValue is not None : # do we have a target value?
                                                                    # convert min and max from limit to +/- tols
                                                                    hitol = hitol - diaNom.TargetValue.value()
                                                                    lotol = lotol - diaNom.TargetValue.value()
                                                                else :
                                                                    # assume target is between limits
                                                                    diam = (hitol + lotol) / 2
                                                                    hitol = hitol - diam
                                                                    lotol = lotol - diam
                                                            # compose the nominal DMIS tolerance label T(DIAM1)
                                                            tlabels[0] += ",T(" + diaItem.Name + ")"
                                                            # compose the nominal DMIS tolerance T(DIAM1)=TOL/DIAM,-.1,.1
                                                            tdefs[0] += "T(" + diaItem.Name + ")=TOL/DIAM," + str(lotol) + "," + str(hitol) + "\n"
                                                            if diaAct.Value is not None : # do we have the optional actual value?
                                                                # compose the actual DMIS tolerance label T(DIAM1)
                                                                talabels[0] += ",TA(" + diaItem.Name + ")"
                                                                # compose the actual DMIS tolerance TA(DIAM1)=TOL/DIAM,-.05,INTOL
                                                                tadefs[0] += "TA(" + diaItem.Name + ")=TOL/DIAM," + str(diaAct.Value.value())
                                                                if diaAct.Status.CharacteristicStatusEnum is not None : # we are only going to handle the enumeration
                                                                    if diaAct.Status.CharacteristicStatusEnum == QIFDocument.CharacteristicStatusEnumType.PASS :
                                                                        tadefs[0] += ",INTOL"
                                                                    else :
                                                                        tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                                else :
                                                                    tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                                tadefs[0] += "\n"
                                                                
                                                    elif (type(charAct) is QIFDocument.FlatnessCharacteristicActualType) & (type(charItem) is QIFDocument.FlatnessCharacteristicItemType) & \
                                                         (type(charNom) is QIFDocument.FlatnessCharacteristicNominalType) & (type(charDef) is QIFDocument.FlatnessCharacteristicDefinitionType) :
                                                        # we have a set of matched flatness types
                                                        flatAct = charAct
                                                        flatItem = charItem
                                                        flatNom = charNom
                                                        flatDef = charDef
                                                        # we're going to cheat and just grab the tolerance zone neglecting any per-area requirements
                                                        # compose the nominal DMIS tolerance label T(FLAT1)
                                                        tlabels[0] += ",T(" + flatItem.Name + ")"
                                                        # compose the nominal DMIS tolerance T(FLAT1)=TOL/FLAT,.1
                                                        tdefs[0] += "T(" + flatItem.Name + ")=TOL/FLAT,"
                                                        if flatDef.ToleranceValue is not None : # this will exist if zone or zone plus per unit area
                                                            tdefs[0] += str(flatDef.ToleranceValue.value())
                                                        elif flatDef.ToleranceZonePerUnit is not None : # this will exist if per unit area only
                                                            tdefs[0] += str(areazone.ToleranceValuePerUnit.value())
                                                        else : # should never happen
                                                            tdefs[0] += "0"
                                                        tdefs[0] += "\n"
                                                        if flatAct.Value is not None : # do we have the optional actual value?
                                                            # compose the actual DMIS tolerance label TA(FLAT1)
                                                            talabels[0] += ",TA(" + flatItem.Name + ")"
                                                            # compose the actual DMIS tolerance TA(FLAT1)=TOL/FLAT,.05,INTOL
                                                            tadefs[0] += "TA(" + flatItem.Name + ")=TOL/FLAT," + str(flatAct.Value.value())
                                                            if flatAct.Status.CharacteristicStatusEnum is not None : # we are only going to handle the enumeration
                                                                if flatAct.Status.CharacteristicStatusEnum == QIFDocument.CharacteristicStatusEnumType.PASS :
                                                                    tadefs[0] += ",INTOL"
                                                                else :
                                                                    tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            else :
                                                                tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            tadefs[0] += "\n"
                                                    elif (type(charAct) is QIFDocument.PerpendicularityCharacteristicActualType) & (type(charItem) is QIFDocument.PerpendicularityCharacteristicItemType) & \
                                                         (type(charNom) is QIFDocument.PerpendicularityCharacteristicNominalType) & (type(charDef) is QIFDocument.PerpendicularityCharacteristicDefinitionType) :
                                                        # we have a set of matched perpendicularity types
                                                        perpAct = charAct
                                                        perpItem = charItem
                                                        perpNom = charNom
                                                        perpDef = charDef
                                                        # compose the nominal DMIS tolerance label T(PERP1)
                                                        tlabels[0] += ",T(" + perpItem.Name + ")"
                                                        # compose the nominal DMIS tolerance T(PERP1)=TOL/PERP,.1,MMC,DAT(A),MMC
                                                        tdefs[0] += "T(" + perpItem.Name + ")=TOL/PERP," + str(perpDef.ToleranceValue.value())
                                                        # material modifier for tolerance value
                                                        if perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.MAXIMUM :
                                                            tdefs[0] += ",MMC"
                                                        elif perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.LEAST :
                                                            tdefs[0] += ",LMC"
                                                        elif perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.REGARDLESS :
                                                            tdefs[0] += ",RFS"
                                                        # get the DRF string
                                                        drfStr = [""] # strings are immutable, lists of strings are not
                                                        if perpDef.DatumReferenceFrameId is not None : # DRF is optional
                                                            GetDatumReferenceFrame(qifDoc, perpDef.DatumReferenceFrameId.value(), drfStr)
                                                        tdefs[0] += drfStr[0] + "\n"
                                                        if perpAct.Value is not None : # do we have the optional actual value?
                                                            # compose the actual DMIS tolerance label TA(PERP1)
                                                            talabels[0] += ",TA(" + perpItem.Name + ")"
                                                            # compose the actual DMIS tolerance TA(PERP1)=TOL/PERP,.05,INTOL,MMC,DAT(A),MMC
                                                            tadefs[0] += "TA(" + perpItem.Name + ")=TOL/PERP," + str(perpAct.Value.value())
                                                            if perpAct.Status.CharacteristicStatusEnum is not None : # we are only going to handle the enumeration
                                                                if perpAct.Status.CharacteristicStatusEnum == QIFDocument.CharacteristicStatusEnumType.PASS :
                                                                    tadefs[0] += ",INTOL"
                                                                else :
                                                                    tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            else :
                                                                tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            # material modifier for tolerance value, again
                                                            if perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.MAXIMUM :
                                                                tadefs[0] += ",MMC"
                                                            elif perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.LEAST :
                                                                tadefs[0] += ",LMC"
                                                            elif perpDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.REGARDLESS :
                                                                tadefs[0] += ",RFS"
                                                            tadefs[0] += drfStr[0] + "\n" # reuse the DRF string
                                                    elif (type(charAct) is QIFDocument.PositionCharacteristicActualType) & (type(charItem) is QIFDocument.PositionCharacteristicItemType) & \
                                                         (type(charNom) is QIFDocument.PositionCharacteristicNominalType) & (type(charDef) is QIFDocument.PositionCharacteristicDefinitionType) :
                                                        # we have a set of matched position types
                                                        posAct = charAct
                                                        posItem = charItem
                                                        posNom = charNom
                                                        posDef = charDef
                                                        # compose the nominal DMIS tolerance label T(POS1)
                                                        tlabels[0] += ",T(" + posItem.Name + ")"
                                                        dim = "3D,"
                                                        # TODO, determine dimensionality
                                                        # compose the nominal DMIS tolerance T(POS1)=TOL/POS,.1,MMC,DAT(A),DAT(B),MMC
                                                        tdefs[0] += "T(" + posItem.Name + ")=TOL/POS," + dim + str(posDef.ToleranceValue.value())
                                                        # material modifier for tolerance value
                                                        if posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.MAXIMUM :
                                                            tdefs[0] += ",MMC"
                                                        elif posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.LEAST :
                                                            tdefs[0] += ",LMC"
                                                        elif posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.REGARDLESS :
                                                            tdefs[0] += ",RFS"
                                                        # get the DRF string
                                                        drfStr = [""]
                                                        if posDef.DatumReferenceFrameId is not None : # DRF is optional
                                                            GetDatumReferenceFrame(qifDoc, posDef.DatumReferenceFrameId.value(), drfStr)
                                                        tdefs[0] += drfStr[0] + "\n"
                                                        if posAct.Value is not None : # do we have the optional actual value?
                                                            # compose the actual DMIS tolerance label TA(POS1)
                                                            talabels[0] += ",TA(" + posItem.Name + ")"
                                                            # compose the actual DMIS tolerance T(POS1)=TOL/POS,.05,INTOL,MMC,DAT(A),DAT(B),MMC
                                                            tadefs[0] += "TA(" + posItem.Name + ")=TOL/POS," + dim + str(posAct.Value.value())
                                                            if posAct.Status.CharacteristicStatusEnum is not None : # we are only going to handle the enumeration
                                                                if posAct.Status.CharacteristicStatusEnum == QIFDocument.CharacteristicStatusEnumType.PASS :
                                                                    tadefs[0] += ",INTOL"
                                                                else :
                                                                    tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            else :
                                                                tadefs[0] += ",OUTOL" # if we don't it's in, assume it's out
                                                            # material modifier for tolerance value, again
                                                            if posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.MAXIMUM :
                                                                tadefs[0] += ",MMC"
                                                            elif posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.LEAST :
                                                                tadefs[0] += ",LMC"
                                                            elif posDef.MaterialCondition == QIFDocument.MaterialModifierEnumType.REGARDLESS :
                                                                tadefs[0] += ",RFS"
                                                            tadefs[0] += drfStr[0] + "\n" # reuse the DRF string
                                                    # here's where you add support for other characteristic types
                                                    break # definition loop
                                            break # nominal loop
                                    break # item loop

#region main program
# This script prompts the user for a QIF document to read.
# The QIF document is mined for units, feature, characteristic, and datum deinfition data.
# This information is output in the form of a DMIS results file which shows
# the relationships among features, characteristics and datums:
# 
# FILNAM/'cpp.qif',5.3
# $$ Dimensional Metrology Standards Consortium (DMSC))
# $$ This DMIS results file produced from QIF document:
# $$   C:\Python34\pyxb-next\QIF21\QIF21\cpp.qif
# $$ with DMSC's open source QIF_CPlusPlus application written in Python
# $$ using XML schema source code bindings created with PyXB (Pyxbgen)
# UNITS/MM,ANGDEC                         <- units
# 
# $$ Plane nominal DAT_A
# OUTPUT/F(DAT_A),T(FLAT1)                <- feature/characteristic relationship
# F(DAT_A)=FEAT/PLANE,CART,0,0,0,0,0,1    <- nominal feature data
# T(FLAT1)=TOL/FLAT,0.1                   <- nominal characteristic data
# $$ Plane actual DAT_A
# OUTPUT/FA(DAT_A),TA(FLAT1)              <- feature/characteristic relationship redux
# FA(DAT_A)=FEAT/PLANE,CART,0,0,0,0,0,1   <- actual feature data
# TA(FLAT1)=TOL/FLAT,0.023,INTOL          <- actual characteristic data
# DATDEF/FA(DAT_A),DAT(A)                 <- datum definition

# prompt user for QIF file to open
root = tkinter.Tk()
root.withdraw()
file_path = tkinter.filedialog.askopenfilename(title = "Select QIF file:", filetypes = (("QIF files","*.qif"),("all files","*.*")))

# read the file
xmld = open(file_path, 'rb').read()

# parse the document into QIF objects
qifDoc = QIFDocument.CreateFromDOM(xml.dom.minidom.parse(io.BytesIO(xmld)).documentElement)

# make sure we have all the pieces we need to make a DMIS results document:
# DMIS is very feature-centric, so at minimum we need features and measured results
if (qifDoc.Features is not None) & \
   (qifDoc.Features.FeatureItems is not None) & \
   (qifDoc.Features.FeatureNominals is not None) & \
   (qifDoc.Features.FeatureDefinitions is not None) & \
   (qifDoc.MeasurementsResults is not None) & \
   (qifDoc.MeasurementsResults.MeasurementResultsSet is not None) & \
   (qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults is not None) :
    # begin our DMIS results file
    dmisoutput = "FILNAM/'" # this needs to be the first statement in a DMIS results file
    dmisoutput += os.path.basename(file_path) + "',5.3\n" # the name of the QIF document we loaded + DMIS version number
    # add some application identifying information
    dmisoutput += "$$ Dimensional Metrology Standards Consortium (DMSC))\n"
    dmisoutput += "$$ This DMIS results file produced from QIF document:\n"
    dmisoutput += "$$   " + file_path + "\n"
    dmisoutput += "$$ with DMSC's open source demoQIFin.py application written in Python\n"
    dmisoutput += "$$ using XML schema source code bindings created with PyXB (Pyxbgen)\n"
    # get our units
    dmisoutput += "UNITS/"
    units = "METER" # QIF units are SI units until we learn differently
    if qifDoc.FileUnits is not None :
        if qifDoc.FileUnits.PrimaryUnits.LinearUnit is not None :
            if qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion is not None : # use the conversion factor if we have it
                if float(qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion.Factor) == 0.001 : # without float() this will fail
                    units = "MM"
                elif float(qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion.Factor) == 0.0254 :
                    units = "INCH"
            else : # otherwise, try the name
                unitname = qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitName
                if unitname.upper() == "MM" :
                    units = "MM"
                elif unitname[0:2].upper() == "IN" :
                    units = "INCH"
    dmisoutput += units
    dmisoutput += ",ANGDEC\n"
    # just look at the first set of measured results
    measResults = qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults[0]
    if (measResults.MeasuredFeatures is not None) & (measResults.MeasuredFeatures.FeatureActuals is not None) :
        # walk through the list of feature actuals (this is the main output loop)
        for featAct in measResults.MeasuredFeatures.FeatureActuals.FeatureActual :
            # walk through the list of feature items...
            for featItem in qifDoc.Features.FeatureItems.FeatureItem :
                # ...to find the associated feature item
                if featItem.id == featAct.FeatureItemId.value() :
                    # walk through the list of feature nominals...
                    for featNom in qifDoc.Features.FeatureNominals.FeatureNominal :
                        # the item->nominal link is optional
                        if featItem.FeatureNominalId is not None :
                            # ...to find the associated feature nominal
                            if featNom.id == featItem.FeatureNominalId.value() :
                                # walk through the list of feature definitions...
                                for featDef in qifDoc.Features.FeatureDefinitions.FeatureDefinition :
                                    # ...to find the associated feature definition
                                    if featDef.id == featNom.FeatureDefinitionId.value() :
                                        # we have all 4 aspects: actual, item, nominal and definition, make sure they're all the same type
                                        if (type(featAct) is QIFDocument.CircleFeatureActualType) & (type(featItem) is QIFDocument.CircleFeatureItemType) & \
                                           (type(featNom) is QIFDocument.CircleFeatureNominalType) & (type(featDef) is QIFDocument.CircleFeatureDefinitionType) :
                                            # we have a matched set of circle aspects
                                            circAct = featAct
                                            circNom = featNom
                                            circDef = featDef
                                            # compose the feature nominal label
                                            flabel = "F(" + featItem.FeatureName + ")" # F(CIRC1) for example
                                            # compose the feature actual label
                                            falabel = "FA(" + featItem.FeatureName + ")" # FA(CIRC1) for example
                                            # begin composing the nominal feature definition F(CIRC1)=FEAT/CIRCLE...
                                            f = flabel + "=FEAT/CIRCLE"
                                            # begin composing the actual feature definition FA(CIRC1)=FEAT/CIRCLE...
                                            fa = falabel + "=FEAT/CIRCLE"
                                            # inner  or outer?
                                            if circDef.InternalExternal == QIFDocument.InternalExternalEnumType.EXTERNAL :
                                                f += ",OUTER"
                                                fa += ",OUTER"
                                            else : # assume INNER, DMIS doesn't have a not-applicable option
                                                f += ",INNER"
                                                fa += ",INNER"
                                            # cartesian
                                            f += ",CART"
                                            fa += ",CART"
                                            # nominal xyz location
                                            f += "," + str(circNom.Location.value()[0]) + "," + str(circNom.Location.value()[1]) + "," + str(circNom.Location.value()[2])
                                            if circAct.Location is not None : # use optional actual if present
                                                fa += "," + str(circAct.Location.value()[0]) + "," + str(circAct.Location.value()[1]) + "," + str(circAct.Location.value()[2])
                                            else : # otherwise actual = nominal
                                                fa += "," + str(circNom.Location.value()[0]) + "," + str(circNom.Location.value()[1]) + "," + str(circNom.Location.value()[2]) # no actual, assume nominal
                                            # nominal ijk vector
                                            f += "," + str(circNom.Normal.value()[0]) + "," + str(circNom.Normal.value()[1]) + "," + str(circNom.Normal.value()[2])
                                            if circAct.Normal is not None : # use optional actual if present
                                                fa += "," + str(circAct.Normal.value()[0]) + "," + str(circAct.Normal.value()[1]) + "," + str(circAct.Normal.value()[2])
                                            else : # otherwise actual = nominal
                                                fa += "," + str(circNom.Normal.value()[0]) + "," + str(circNom.Normal.value()[1]) + "," + str(circNom.Normal.value()[2]) # no actual, assume nominal
                                            # diameter and new line
                                            f += "," + str(circDef.Diameter.value()) + "\n"
                                            if circAct.Diameter is not None : # use optional actual if present
                                                fa += "," + str(circAct.Diameter.value()) + "\n"
                                            else :
                                                fa += "," + str(circDef.Diameter.value()) + "\n" # no actual, assume nominal
                                            # grab tolerances
                                            tlabels = [""]
                                            talabels = [""]
                                            tdefs = [""]
                                            tadefs = [""]
                                            GetTolerances(qifDoc, circAct.id, tlabels, talabels, tdefs, tadefs)
                                            # output this feature
                                            dmisoutput += "\n" + "$$ Circle nominal " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + flabel + tlabels[0] + "\n" # OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
                                            dmisoutput += f # F(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
                                            dmisoutput += tdefs[0]
                                            dmisoutput += "$$ Circle actual " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + falabel + talabels[0] + "\n" # OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
                                            dmisoutput += fa # F(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
                                            dmisoutput += tadefs[0]
                                            # am I a datum?
                                            datdef = [""]
                                            GetDatumDefinitions(qifDoc, circNom.id, falabel, datdef)
                                            dmisoutput += datdef[0]
                                        elif (type(featAct) is QIFDocument.CylinderFeatureActualType) & (type(featItem) is QIFDocument.CylinderFeatureItemType) & \
                                             (type(featNom) is QIFDocument.CylinderFeatureNominalType) & (type(featDef) is QIFDocument.CylinderFeatureDefinitionType) :
                                            # we have a matched set of cylinder aspects
                                            cylAct = featAct
                                            cylNom = featNom
                                            cylDef = featDef
                                            # compose the feature nominal label
                                            flabel = "F(" + featItem.FeatureName + ")" # F(CYL1) for example
                                            # compose the feature actual label
                                            falabel = "FA(" + featItem.FeatureName + ")" # FA(CYL1) for example
                                            # begin composing the nominal feature definition F(CYL1)=FEAT/CYLNDR...
                                            f = flabel + "=FEAT/CYLNDR"
                                            # begin composing the actual feature definition FA(CYL1)=FEAT/CYLNDR...
                                            fa = falabel + "=FEAT/CYLNDR"
                                            # inner  or outer?
                                            if cylDef.InternalExternal == QIFDocument.InternalExternalEnumType.EXTERNAL :
                                                f += ",OUTER"
                                                fa += ",OUTER"
                                            else : # assume INNER, DMIS doesn't have a not-applicable option
                                                f += ",INNER"
                                                fa += ",INNER"
                                            # cartesian
                                            f += ",CART"
                                            fa += ",CART"
                                            # nominal xyz location
                                            f += "," + str(cylNom.Axis.AxisPoint.value()[0]) + "," +  str(cylNom.Axis.AxisPoint.value()[1]) + "," +  str(cylNom.Axis.AxisPoint.value()[2])
                                            if cylAct.Axis is not None : # use optional actual if present
                                                fa += "," +  str(cylAct.Axis.AxisPoint.value()[0]) + "," +  str(cylAct.Axis.AxisPoint.value()[1]) + "," +  str(cylAct.Axis.AxisPoint.value()[2])
                                            else : # no actual, assume nominal
                                                fa += "," +  str(cylNom.Axis.AxisPoint.value()[0]) + "," +  str(cylNom.Axis.AxisPoint.value()[1]) + "," +  str(cylNom.Axis.AxisPoint.value()[2])
                                            # nominal ijk vector
                                            f += "," +  str(cylNom.Axis.Direction.value()[0]) + "," +  str(cylNom.Axis.Direction.value()[1]) + "," +  str(cylNom.Axis.Direction.value()[2])
                                            if cylAct.Axis is not None : # use optional actual if present
                                                fa += "," +  str(cylAct.Axis.Direction.value()[0]) + "," +  str(cylAct.Axis.Direction.value()[1]) + "," +  str(cylAct.Axis.Direction.value()[2])
                                            else : # no actual, assume nominal
                                                fa += "," +  str(cylNom.Axis.Direction.value()[0]) + "," +  str(cylNom.Axis.Direction.value()[1]) + "," +  str(cylNom.Axis.Direction.value()[2])
                                            # diameter and new line
                                            f += "," + str(cylDef.Diameter.value()) + "\n"
                                            if cylAct.Diameter is not None : # use optional actual if present
                                                fa += "," +  str(cylAct.Diameter.value()) + "\n"
                                            else :
                                                fa += "," +  str(cylDef.Diameter.value()) + "\n" # no actual, assume nominal
                                            # grab tolerances
                                            tlabels = [""]
                                            talabels = [""]
                                            tdefs = [""]
                                            tadefs = [""]
                                            GetTolerances(qifDoc, cylAct.id, tlabels, talabels, tdefs, tadefs)
                                            # output this feature
                                            dmisoutput += "\n" + "$$ Cylinder nominal " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + flabel + tlabels[0] + "\n"
                                            dmisoutput += f
                                            dmisoutput += tdefs[0]
                                            dmisoutput += "$$ Cylinder actual " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + falabel + talabels[0] + "\n"
                                            dmisoutput += fa
                                            dmisoutput += tadefs[0]
                                            # am I a datum?
                                            datdef = [""]
                                            GetDatumDefinitions(qifDoc, featNom.id, falabel, datdef)
                                            dmisoutput += datdef[0]
                                        elif (type(featAct) is QIFDocument.PlaneFeatureActualType) & (type(featItem) is QIFDocument.PlaneFeatureItemType) & \
                                             (type(featNom) is QIFDocument.PlaneFeatureNominalType) & (type(featDef) is QIFDocument.PlaneFeatureDefinitionType) :
                                            # we have a matched set of plane aspects
                                            planAct = featAct
                                            planNom = featNom
                                            # compose the feature nominal label
                                            flabel = "F(" + featItem.FeatureName + ")" # F(PLN1) for example
                                            # compose the feature actual label
                                            falabel = "FA(" + featItem.FeatureName + ")" # FA(PLN1) for example
                                            # begin composing the nominal feature definition F(PLN1)=FEAT/PLANE...
                                            f = flabel + "=FEAT/PLANE"
                                            # begin composing the actual feature definition FA(PLN1)=FEAT/PLANE...
                                            fa = falabel + "=FEAT/PLANE"
                                            # cartesian
                                            f += ",CART"
                                            fa += ",CART"
                                            # nominal xyz location
                                            f += "," + str(planNom.Location.value()[0]) + "," + str(planNom.Location.value()[1]) + "," + str(planNom.Location.value()[2])
                                            if planAct.Location is not None : # use optional actual if present
                                                fa += "," + str(planAct.Location.value()[0]) + "," + str(planAct.Location.value()[1]) + "," + str(planAct.Location.value()[2])
                                            else : # no actual, assume nominal
                                                fa += "," + str(planNom.Location.value()[0]) + "," + str(planNom.Location.value()[1]) + "," + str(planNom.Location.value()[2])
                                            # ijk vector
                                            f += "," + str(planNom.Normal.value()[0]) + "," + str(planNom.Normal.value()[1]) + "," + str(planNom.Normal.value()[2])
                                            if planAct.Normal is not None : # use optional actual if present
                                                fa += "," + str(planAct.Normal.value()[0]) + "," + str(planAct.Normal.value()[1]) + "," + str(planAct.Normal.value()[2])
                                            else : # no actual, assume nominal
                                                fa += "," + str(planNom.Normal.value()[0]) + "," + str(planNom.Normal.value()[1]) + "," + str(planNom.Normal.value()[2])
                                            # new line
                                            f += "\n"
                                            fa += "\n"
                                            # grab tolerances
                                            tlabels = [""]
                                            talabels = [""]
                                            tdefs = [""]
                                            tadefs = [""]
                                            GetTolerances(qifDoc, planAct.id, tlabels, talabels, tdefs, tadefs)
                                            # output this feature
                                            dmisoutput += "\n" + "$$ Plane nominal " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + flabel + tlabels[0] + "\n"
                                            dmisoutput += f
                                            dmisoutput += tdefs[0]
                                            dmisoutput += "$$ Plane actual " + featItem.FeatureName + "\n"
                                            dmisoutput += "OUTPUT/" + falabel + talabels[0] + "\n"
                                            dmisoutput += fa
                                            dmisoutput += tadefs[0]
                                            # am I a datum?
                                            datdef = [""]
                                            GetDatumDefinitions(qifDoc, planNom.id, falabel, datdef)
                                            dmisoutput += datdef[0]
                                        break # definition loop
                                break # nominal loop
                    break # item loop
    dmisoutput += "ENDFIL"

    # write the DMIS results file
    root = tkinter.Tk()
    root.withdraw()
    file_path = tkinter.filedialog.asksaveasfilename(title = "Save DMO file:", filetypes = (("DMO files","*.dmo"),("all files","*.*")))
    open(file_path, 'w').write(dmisoutput)

    # lets take a look
    os.system('Notepad.exe '+ file_path )
    
print("Done.")
#endregion

