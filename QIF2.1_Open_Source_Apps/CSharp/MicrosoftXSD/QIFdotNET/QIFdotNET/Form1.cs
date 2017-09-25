using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Serialization;
using qif21;

namespace QifStructureReader1
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        #region function GetDatumDefinitions
        // Populates string datdef with DMIS datum definition(s), e.g., "DATDEF/FA(PLANE1),DAT(A)"
        // Inputs are the QIF Document as qifDoc, the feature nominal QIF id as nomid and the feature label as falabel, e.g., "FA(PLANE1)"
        //
        // The datum definition list is traversed looking for a reference back to the specified feature
        private void GetDatumDefinitions(QIFDocumentType qifDoc, long nomid, string falabel, ref string datdef)
        {
            if (qifDoc.DatumDefinitions != null) // make sure we have (optional) datum definitions
            {
                for (int i = 0; i < qifDoc.DatumDefinitions.DatumDefinition.Length; i++) // walk through the datum definition list
                {
                    if (qifDoc.DatumDefinitions.DatumDefinition[i].FeatureNominalIds != null) // make sure datum definition has (optional) hook(s) to feature nominal(s) via QIF id(s)
                    {
                        for (int j = 0; j < qifDoc.DatumDefinitions.DatumDefinition[i].FeatureNominalIds.Id.Length; j++) // walk through the list of feature nominal ids
                        {
                            if (qifDoc.DatumDefinitions.DatumDefinition[i].FeatureNominalIds.Id[j].Value == nomid) // check for id match
                            {
                                datdef += "DATDEF/" + falabel + ",DAT(" + qifDoc.DatumDefinitions.DatumDefinition[i].DatumLabel + ")" + Environment.NewLine; // compose DMIS datum definition
                            }
                        }
                    }
                }
            }
        }
        #endregion function GetDatumDefinitions


        #region function GetDatumReferenceFrame
        // Populates string drfstr with a DMIS drf representation, e.g. ",DAT(A),DAT(B),MMC,DAT(C),MMC"
        // Inputs are the QIF Document as qifDoc and the QIF id of the drf as drfid
        //
        // The datum reference frame definition list is traversed looking for the specified id, datum precidence and materal condition
        // are found and combined with the datum label found by traversing the datum definition list
        private void GetDatumReferenceFrame(QIFDocumentType qifDoc, long drfid, ref string drfstr)
        {
            if (qifDoc.DatumReferenceFrames != null && // make sure we have (optional) datum definitions and datum reference frame definitions
                qifDoc.DatumDefinitions != null)
            {
                for (int i = 0; i < qifDoc.DatumReferenceFrames.DatumReferenceFrame.Length; i++) // walk through the drf list
                {
                    if (qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].id == drfid) // we found the drf we're looking for
                    {
                        // DMIS supports up to 3 datums
                        string primary = "";
                        string secondary = "";
                        string tertiary = "";
                        // Generic holder until we figure out this datum's precidence
                        string datum = "";
                        if (qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums != null) // make sure this srf has (optional) datum list
                        {
                            for (int j = 0; j < qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum.Length; j++) // walk through the datum list
                            {
                                if (qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Item is DatumType) // is this a simple datum? (as opposed to compound and datum features)
                                {
                                    Type whatAmI = qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Item.GetType();
                                    DatumType simpleDatum = (DatumType)Convert.ChangeType(qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Item, whatAmI); // cast the generic datum to a simple datum
                                    for (int k = 0; k < qifDoc.DatumDefinitions.DatumDefinition.Length; k++) // walk through the datum definition list
                                    {
                                        if (simpleDatum.DatumDefinitionId.Value == qifDoc.DatumDefinitions.DatumDefinition[k].id) // until we find this datum's id
                                        {
                                            datum = ",DAT(" + qifDoc.DatumDefinitions.DatumDefinition[k].DatumLabel + ")"; // and capture the datum label
                                        }
                                    }
                                    switch (simpleDatum.MaterialModifier) // append material consition modifier as appropriate
                                    {
                                        case MaterialModifierEnumType.MAXIMUM:
                                            datum += ",MMC";
                                            break;
                                        case MaterialModifierEnumType.LEAST:
                                            datum += ",LMC";
                                            break;
                                        case MaterialModifierEnumType.REGARDLESS:
                                            datum += ",RFS";
                                            break;
                                    }
                                    if (qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Precedence.Item is PrecedenceEnumType) // determine the precidence of this datum (only handle the enumerated form)
                                    {
                                        whatAmI = qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Precedence.Item.GetType();
                                        PrecedenceEnumType precidence = (PrecedenceEnumType)Convert.ChangeType(qifDoc.DatumReferenceFrames.DatumReferenceFrame[i].Datums.Datum[j].Precedence.Item, whatAmI); // cast generic precidense to enumerated form
                                        switch (precidence) // populate specific datum precidence with holder string
                                        {
                                            case PrecedenceEnumType.PRIMARY:
                                                primary = datum;
                                                break;
                                            case PrecedenceEnumType.SECONDARY:
                                                secondary = datum;
                                                break;
                                            case PrecedenceEnumType.TERTIARY:
                                                tertiary = datum;
                                                break;
                                        }
                                    }
                                }
                            }
                            drfstr = primary + secondary + tertiary; // add the 3 datum together (some or all can be empty strings)
                        }
                    }
                }
            }
        }
        #endregion function GetDatumReferenceFrame

        #region function GetTolerances
        // Populates tlabels and talabels with a list of DMIS tolerance labels applied to the feature actual with specified QIF id, 
        // e.g. tlabels is filled with ",T(DIAM2),T(POSN2)" and talabels is filled with ",TA(DIAM2),TA(POSN2)"
        // Populates tdefs and tadefs with DMIS representations of nominal and actual tolerances respectively
        // e.g. tdefs is filled with:
        // T(DIAM2)=TOL/DIAM,-0.1,0.1
        // T(POSN2)=TOL/POS,3D,0.75,MMC,DAT(A),DAT(B),MMC,DAT(C),MMC
        // and tadefs is filled with:
        // TA(DIAM2)=TOL/DIAM,6.2,OUTOL
        // TA(POSN2)=TOL/POS,3D,0.0618,INTOL,MMC,DAT(A),DAT(B),MMC,DAT(C),MMC

        // Inputs are the QIF Document as qifDoc and the QIF id of the drf as drfid
        //
        // The datum reference frame definition list is traversed looking for the specified id, datum precidence and materal condition
        // are found and combined with the datum label found by traversing the datum definition list
        private void GetTolerances(QIFDocumentType qifDoc, long actfeatid, ref string tlabels, ref string talabels, ref string tdefs, ref string tadefs)
        {
            if (qifDoc.Characteristics != null && // make sure we have(optional) characteristics and measurements
                qifDoc.Characteristics.CharacteristicItems != null && 
                qifDoc.Characteristics.CharacteristicNominals != null &&
                qifDoc.Characteristics.CharacteristicDefinitions != null &&
                qifDoc.MeasurementsResults != null &&
                qifDoc.MeasurementsResults.MeasurementResultsSet != null &&
                qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults != null &&
                qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults.Length > 0)
            {
                // let's just look at the first set of measurement results
                MeasurementResultsType measResults = qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults[0];
                if (measResults.MeasuredFeatures != null && // make sure we have both (optional) actual features and characteristics
                    measResults.MeasuredFeatures.FeatureActuals != null &&
                    measResults.MeasuredCharacteristics != null &&
                    measResults.MeasuredCharacteristics.CharacteristicActuals != null)
                {
                    // walk through actual characteristics to get characteristics applied to this actual feature actfeatid
                    for (int i = 0; i < measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual.Length; i++)
                    {
                        if(measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].FeatureActualIds != null) // characteristics optionally point at features
                        {
                            for (int j = 0; j < measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].FeatureActualIds.Id.Length; j++) // walk through feature references
                            {
                                if (measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].FeatureActualIds.Id[j].Value == actfeatid) // look for a match
                                {
                                    // find the (required) item, nominal and definition for this actual characteristic 
                                    for (int k = 0; k < qifDoc.Characteristics.CharacteristicItems.CharacteristicItem.Length; k++)
                                    {
                                        if (qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].id == measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].CharacteristicItemId.Value)
                                        {
                                            for (int m = 0; m < qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal.Length; m++)
                                            {
                                                if (qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].CharacteristicNominalId.Value == qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].id)
                                                {
                                                    for (int n = 0; n < qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition.Length; n++)
                                                    {
                                                        if (qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].CharacteristicDefinitionId.Value == qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n].id)
                                                        {
                                                            // we have all four aspects, check their types (which should all match)
                                                            if (measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i] is DiameterCharacteristicActualType &&
                                                                qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k] is DiameterCharacteristicItemType &&
                                                                qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m] is DiameterCharacteristicNominalType &&
                                                                qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n] is DiameterCharacteristicDefinitionType)
                                                            {
                                                                DiameterCharacteristicActualType diaAct = (DiameterCharacteristicActualType)Convert.ChangeType(measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i],
                                                                    measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].GetType());
                                                                DiameterCharacteristicItemType diaItem = (DiameterCharacteristicItemType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k],
                                                                    qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].GetType());
                                                                DiameterCharacteristicNominalType diaNom = (DiameterCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m],
                                                                    qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].GetType());
                                                                DiameterCharacteristicDefinitionType diaDef = (DiameterCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n],
                                                                    qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n].GetType());
                                                                if(diaAct != null && diaItem != null && diaNom != null && diaDef != null) // should never fail, so it will
                                                                {
                                                                    if (diaDef.Item is LinearToleranceType)
                                                                    {
                                                                        LinearToleranceType diaTol = (LinearToleranceType)Convert.ChangeType(diaDef.Item, diaDef.Item.GetType());
                                                                        if(diaTol != null)
                                                                        {
                                                                            decimal hitol = 0;
                                                                            decimal lotol = 0;
                                                                            for (int t = 0; t < diaTol.ItemsElementName.Length; t++)
                                                                            {
                                                                                if (diaTol.ItemsElementName[t] == ItemsChoiceType4.MaxValue)
                                                                                {
                                                                                    LinearValueType diaMax = (LinearValueType)Convert.ChangeType(diaTol.Items[t], diaTol.Items[t].GetType());
                                                                                    if (diaMax != null) hitol = diaMax.Value;
                                                                                }
                                                                                else if (diaTol.ItemsElementName[t] == ItemsChoiceType4.MinValue)
                                                                                {
                                                                                    LinearValueType diaMin = (LinearValueType)Convert.ChangeType(diaTol.Items[t], diaTol.Items[t].GetType());
                                                                                    if (diaMin != null) lotol = diaMin.Value;
                                                                                }
                                                                            }
                                                                            if (diaTol.DefinedAsLimit)
                                                                            {
                                                                                if (diaNom.TargetValue != null)
                                                                                {
                                                                                    hitol = hitol - diaNom.TargetValue.Value;
                                                                                    lotol = lotol - diaNom.TargetValue.Value;
                                                                                }
                                                                                else
                                                                                {
                                                                                    decimal diam = (hitol + lotol) / 2;
                                                                                    hitol = hitol - diam;
                                                                                    lotol = lotol - diam;
                                                                                }
                                                                            }
                                                                            tlabels += ",T(" + diaItem.Name + ")";
                                                                            tdefs += "T(" + diaItem.Name + ")=TOL/DIAM," + lotol.ToString() + "," + hitol.ToString() + Environment.NewLine;
                                                                            if (diaAct.Value != null)
                                                                            {
                                                                                talabels += ",TA(" + diaItem.Name + ")";
                                                                                tadefs += "TA(" + diaItem.Name + ")=TOL/DIAM," + diaAct.Value.Value.ToString();
                                                                                if (diaAct.Status.Item is CharacteristicStatusEnumType)
                                                                                {
                                                                                    CharacteristicStatusEnumType status = (CharacteristicStatusEnumType)Convert.ChangeType(diaAct.Status.Item, diaAct.Status.Item.GetType());
                                                                                    if (status == CharacteristicStatusEnumType.PASS) tadefs += ",INTOL";
                                                                                    else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                                }
                                                                                else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                                tadefs += Environment.NewLine;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else if (measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i] is FlatnessCharacteristicActualType &&
                                                                qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k] is FlatnessCharacteristicItemType &&
                                                                qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m] is FlatnessCharacteristicNominalType &&
                                                                qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n] is FlatnessCharacteristicDefinitionType)
                                                            {
                                                                FlatnessCharacteristicActualType flatAct = (FlatnessCharacteristicActualType)Convert.ChangeType(measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i],
                                                                    measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].GetType());
                                                                FlatnessCharacteristicItemType flatItem = (FlatnessCharacteristicItemType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k],
                                                                    qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].GetType());
                                                                FlatnessCharacteristicNominalType flatNom = (FlatnessCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m],
                                                                    qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].GetType());
                                                                FlatnessCharacteristicDefinitionType flatDef = (FlatnessCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n],
                                                                    qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n].GetType());
                                                                if (flatAct != null && flatItem != null && flatNom != null && flatDef != null) // should never fail, so it will
                                                                {
                                                                    // we're going to cheat and just grab the tolerance zone neglecting any per-area requirements
                                                                    tlabels += ",T(" + flatItem.Name + ")";
                                                                    tdefs += "T(" + flatItem.Name + ")=TOL/FLAT,";
                                                                    if (flatDef.Items != null) // this can be zone, or zone + per unit area
                                                                    {
                                                                        for (int t = 0; t < flatDef.Items.Length; t++)
                                                                        {
                                                                            if (flatDef.Items[t] is LinearValueType)
                                                                            {
                                                                                LinearValueType zone = (LinearValueType)Convert.ChangeType(flatDef.Items[t], flatDef.Items[t].GetType());
                                                                                tdefs += zone.Value.ToString();
                                                                            }
                                                                        }
                                                                    }
                                                                    else if (flatDef.Items != null && flatDef.Item is ToleranceZonePerUnitAreaType) // this will be unit area
                                                                    {
                                                                        ToleranceZonePerUnitAreaType areazone = (ToleranceZonePerUnitAreaType)Convert.ChangeType(flatDef.Item, flatDef.Item.GetType());
                                                                        tdefs += areazone.ToleranceValuePerUnit.Value.ToString();
                                                                    }
                                                                    else // should never happen
                                                                    {
                                                                        tdefs += "0";
                                                                    }
                                                                    tdefs += Environment.NewLine;
                                                                    if (flatAct.Value != null)
                                                                    {
                                                                        talabels += ",TA(" + flatItem.Name + ")";
                                                                        tadefs += "TA(" + flatItem.Name + ")=TOL/FLAT," + flatAct.Value.Value.ToString();
                                                                        if (flatAct.Status.Item is CharacteristicStatusEnumType)
                                                                        {
                                                                            CharacteristicStatusEnumType status = (CharacteristicStatusEnumType)Convert.ChangeType(flatAct.Status.Item, flatAct.Status.Item.GetType());
                                                                            if (status == CharacteristicStatusEnumType.PASS) tadefs += ",INTOL";
                                                                            else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        }
                                                                        else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        tadefs += Environment.NewLine;
                                                                    }
                                                                }
                                                            }
                                                            else if (measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i] is PerpendicularityCharacteristicActualType &&
                                                                qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k] is PerpendicularityCharacteristicItemType &&
                                                                qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m] is PerpendicularityCharacteristicNominalType &&
                                                                qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n] is PerpendicularityCharacteristicDefinitionType)
                                                            {
                                                                PerpendicularityCharacteristicActualType perpAct = (PerpendicularityCharacteristicActualType)Convert.ChangeType(measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i],
                                                                    measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].GetType());
                                                                PerpendicularityCharacteristicItemType perpItem = (PerpendicularityCharacteristicItemType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k],
                                                                    qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].GetType());
                                                                PerpendicularityCharacteristicNominalType perpNom = (PerpendicularityCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m],
                                                                    qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].GetType());
                                                                PerpendicularityCharacteristicDefinitionType perpDef = (PerpendicularityCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n],
                                                                    qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n].GetType());
                                                                if (perpAct != null && perpItem != null && perpNom != null && perpDef != null) // should never fail, so it will
                                                                {
                                                                    tlabels += ",T(" + perpItem.Name + ")";
                                                                    tdefs += "T(" + perpItem.Name + ")=TOL/PERP," + perpDef.ToleranceValue.Value.ToString();
                                                                    if (perpDef.MaterialCondition == MaterialModifierEnumType.MAXIMUM) tdefs += ",MMC";
                                                                    else if (perpDef.MaterialCondition == MaterialModifierEnumType.LEAST) tdefs += ",LMC";
                                                                    else if (perpDef.MaterialCondition == MaterialModifierEnumType.REGARDLESS) tdefs += ",RFS";
                                                                    string drfStr = "";
                                                                    if (perpDef.DatumReferenceFrameId != null) GetDatumReferenceFrame(qifDoc, perpDef.DatumReferenceFrameId.Value, ref drfStr);
                                                                    tdefs += drfStr + Environment.NewLine;
                                                                    if (perpAct.Value != null)
                                                                    {
                                                                        talabels += ",TA(" + perpItem.Name + ")";
                                                                        tadefs += "TA(" + perpItem.Name + ")=TOL/PERP," + perpAct.Value.Value.ToString();
                                                                        if (perpAct.Status.Item is CharacteristicStatusEnumType)
                                                                        {
                                                                            CharacteristicStatusEnumType status = (CharacteristicStatusEnumType)Convert.ChangeType(perpAct.Status.Item, perpAct.Status.Item.GetType());
                                                                            if (status == CharacteristicStatusEnumType.PASS) tadefs += ",INTOL";
                                                                            else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        }
                                                                        else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        if (perpDef.MaterialCondition == MaterialModifierEnumType.MAXIMUM) tadefs += ",MMC";
                                                                        else if (perpDef.MaterialCondition == MaterialModifierEnumType.LEAST) tadefs += ",LMC";
                                                                        else if (perpDef.MaterialCondition == MaterialModifierEnumType.REGARDLESS) tadefs += ",RFS";
                                                                        tadefs += drfStr + Environment.NewLine;
                                                                    }
                                                                }
                                                            }
                                                            else if (measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i] is PositionCharacteristicActualType &&
                                                                qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k] is PositionCharacteristicItemType &&
                                                                qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m] is PositionCharacteristicNominalType &&
                                                                qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n] is PositionCharacteristicDefinitionType)
                                                            {
                                                                PositionCharacteristicActualType posAct = (PositionCharacteristicActualType)Convert.ChangeType(measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i],
                                                                    measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i].GetType());
                                                                PositionCharacteristicItemType posItem = (PositionCharacteristicItemType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k],
                                                                    qifDoc.Characteristics.CharacteristicItems.CharacteristicItem[k].GetType());
                                                                PositionCharacteristicNominalType posNom = (PositionCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m],
                                                                    qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[m].GetType());
                                                                PositionCharacteristicDefinitionType posDef = (PositionCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n],
                                                                    qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[n].GetType());
                                                                if (posAct != null && posItem != null && posNom != null && posDef != null) // should never fail, so it will
                                                                {
                                                                    tlabels += ",T(" + posItem.Name + ")";
                                                                    string dim = "3D,";
                                                                    // TODO, determine dimensionality
                                                                    tdefs += "T(" + posItem.Name + ")=TOL/POS," + dim + posDef.ToleranceValue.Value.ToString();
                                                                    if (posDef.MaterialCondition == MaterialModifierEnumType.MAXIMUM) tdefs += ",MMC";
                                                                    else if (posDef.MaterialCondition == MaterialModifierEnumType.LEAST) tdefs += ",LMC";
                                                                    else if (posDef.MaterialCondition == MaterialModifierEnumType.REGARDLESS) tdefs += ",RFS";
                                                                    string drfStr = "";
                                                                    if (posDef.DatumReferenceFrameId != null) GetDatumReferenceFrame(qifDoc, posDef.DatumReferenceFrameId.Value, ref drfStr);
                                                                    tdefs += drfStr + Environment.NewLine;
                                                                    if (posAct.Value != null)
                                                                    {
                                                                        talabels += ",TA(" + posItem.Name + ")";
                                                                        tadefs += "TA(" + posItem.Name + ")=TOL/POS," + dim + posAct.Value.Value.ToString();
                                                                        if (posAct.Status.Item is CharacteristicStatusEnumType)
                                                                        {
                                                                            CharacteristicStatusEnumType status = (CharacteristicStatusEnumType)Convert.ChangeType(posAct.Status.Item, posAct.Status.Item.GetType());
                                                                            if (status == CharacteristicStatusEnumType.PASS) tadefs += ",INTOL";
                                                                            else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        }
                                                                        else tadefs += ",OUTOL"; // if we don't it's in, assume it's out
                                                                        if (posDef.MaterialCondition == MaterialModifierEnumType.MAXIMUM) tadefs += ",MMC";
                                                                        else if (posDef.MaterialCondition == MaterialModifierEnumType.LEAST) tadefs += ",LMC";
                                                                        else if (posDef.MaterialCondition == MaterialModifierEnumType.REGARDLESS) tadefs += ",RFS";
                                                                        tadefs += drfStr + Environment.NewLine;
                                                                    }
                                                                }
                                                            }
                                                            // here's where you add support for other characteristic types
                                                            break; // definition loop
                                                        }
                                                    }
                                                    break; // nominal loop
                                                }
                                            }
                                            break; // item loop
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        #endregion function GetTolerances

        private void QifDocumentTypeCall()
        {
            try
            {
                QIFDocumentType qifDoc;

                bool breakout = false;

                var serializer = new XmlSerializer(typeof(QIFDocumentType));

                OpenFileDialog openFileDialog1 = new OpenFileDialog();
                openFileDialog1.Filter = "QIF Documents|*.qif";
                openFileDialog1.Title = "Open a QIF file:";

                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    // deserialize QIF document
                    using (var stream = new StreamReader(openFileDialog1.FileName, Encoding.UTF8))
                    using (var reader = XmlReader.Create(stream))
                    {
                        qifDoc = (QIFDocumentType)serializer.Deserialize(reader);
                    }
                    // make sure we have all the pieces we need to make a DMIS results document:
                    // features, datums, characteristics, and measured results
                    if (qifDoc.Features != null &&
                        qifDoc.Features.FeatureItems != null &&
                        qifDoc.Features.FeatureNominals != null &&
                        qifDoc.Features.FeatureDefinitions != null &&
                        qifDoc.MeasurementsResults != null &&
                        qifDoc.MeasurementsResults.MeasurementResultsSet != null &&
                        qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults != null &&
                        qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults.Length > 0)
                    {
                        // begin our DMIS results file
                        string dmisoutput = "FILNAM/'";
                        dmisoutput += Path.GetFileNameWithoutExtension(openFileDialog1.FileName) + "',5.3" + Environment.NewLine;
                        // add some application identifying information
                        dmisoutput += "$$ Dimensional Metrology Standards Consortium (DMSC))" + Environment.NewLine;
                        dmisoutput += "$$ This DMIS results file produced from QIF document:" + Environment.NewLine;
                        dmisoutput += "$$   " + openFileDialog1.FileName + Environment.NewLine;
                        dmisoutput += "$$ with DMSC's open source QIFdotNET application written in C#" + Environment.NewLine;
                        dmisoutput += "$$ using XML schema source code bindings created by Microsoft's XSD tool" + Environment.NewLine;
                        // get our units
                        dmisoutput += "UNITS/";
                        string units = "METER"; // QIF units are SI units until we learn differently
                        if(qifDoc.FileUnits != null)
                        {
                            if(qifDoc.FileUnits.PrimaryUnits.LinearUnit != null)
                            {
                                if (qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion != null)
                                {
                                    if (qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion.Factor == 0.001M) units = "MM";
                                    else if (qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion.Factor == 0.0254M) units = "INCH";
                                }
                                else // try the name
                                {
                                    string unitname = qifDoc.FileUnits.PrimaryUnits.LinearUnit.UnitName;
                                    if (unitname.ToUpper() == "MM") units = "MM";
                                    else if (unitname.Substring(0,2).ToUpper() == "IN") units = "INCH";
                                }
                            }
                        }
                        dmisoutput += units;
                        dmisoutput += ",ANGDEC" + Environment.NewLine;
                        // walk through the features and characteristics
                        MeasurementResultsType measResults = qifDoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults[0];
                        if (measResults.MeasuredFeatures != null &&
                           measResults.MeasuredFeatures.FeatureActuals != null)
                        {
                            // walk through the list of feature actuals
                            for (int i = 0; i < measResults.MeasuredFeatures.FeatureActuals.FeatureActual.Length; i++)
                            {
                                // find the associated feature item
                                for (int j = 0; j < qifDoc.Features.FeatureItems.FeatureItem.Length; j++)
                                {
                                    if (qifDoc.Features.FeatureItems.FeatureItem[j].id == measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].FeatureItemId.Value)
                                    {
                                        for (int k = 0; k < qifDoc.Features.FeatureNominals.FeatureNominal.Length; k++)
                                        {
                                            if (qifDoc.Features.FeatureItems.FeatureItem[j].FeatureNominalId != null && qifDoc.Features.FeatureNominals.FeatureNominal[k].id == qifDoc.Features.FeatureItems.FeatureItem[j].FeatureNominalId.Value)
                                            {
                                                for (int n = 0; n < qifDoc.Features.FeatureDefinitions.FeatureDefinition.Length; n++)
                                                {
                                                    if (qifDoc.Features.FeatureDefinitions.FeatureDefinition[n].id == qifDoc.Features.FeatureNominals.FeatureNominal[k].FeatureDefinitionId.Value)
                                                    {
                                                        // we have all 4 aspects: actual, item, nominal and definition, make sure they're all the same type
                                                        if (measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i] is CircleFeatureActualType &&
                                                           qifDoc.Features.FeatureItems.FeatureItem[j] is CircleFeatureItemType &&
                                                           qifDoc.Features.FeatureNominals.FeatureNominal[k] is CircleFeatureNominalType &&
                                                           qifDoc.Features.FeatureDefinitions.FeatureDefinition[n] is CircleFeatureDefinitionType)
                                                        {
                                                            CircleFeatureNominalType circNom = (CircleFeatureNominalType)Convert.ChangeType(qifDoc.Features.FeatureNominals.FeatureNominal[k],
                                                                qifDoc.Features.FeatureNominals.FeatureNominal[k].GetType());
                                                            CircleFeatureDefinitionType circDef = (CircleFeatureDefinitionType)Convert.ChangeType(qifDoc.Features.FeatureDefinitions.FeatureDefinition[n],
                                                                qifDoc.Features.FeatureDefinitions.FeatureDefinition[n].GetType());
                                                            CircleFeatureActualType circAct = (CircleFeatureActualType)Convert.ChangeType(measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i],
                                                                measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].GetType());
                                                            if (circNom != null && circDef != null && circAct != null) // should never happen, so it will
                                                            {
                                                                string flabel = "F(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")"; // F(CIRC1) for example
                                                                string falabel = "FA(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")";
                                                                string f = flabel + "=FEAT/CIRCLE";
                                                                string fa = falabel + "=FEAT/CIRCLE";
                                                                // inner  or outer?
                                                                if (circDef.InternalExternal == InternalExternalEnumType.EXTERNAL)
                                                                {
                                                                    f += ",OUTER";
                                                                    fa += ",OUTER";
                                                                }
                                                                else
                                                                {
                                                                    f += ",INNER";
                                                                    fa += ",INNER";
                                                                }
                                                                // cartesian
                                                                f += ",CART";
                                                                fa += ",CART";
                                                                // xyz location
                                                                double[] location = Array.ConvertAll(circNom.Location.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (location.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString();
                                                                    if (circAct.Location == null) fa += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,0";
                                                                    if (circAct.Location == null) fa += ",0,0,0";
                                                                }
                                                                if (circAct.Location != null)
                                                                {
                                                                    double[] actlocation = Array.ConvertAll(circAct.Location.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actlocation.Length == 3) fa += "," + actlocation[0].ToString() + "," + actlocation[1].ToString() + "," + actlocation[2].ToString();
                                                                    else fa += ",0,0,0";
                                                                }
                                                                // ijk vector
                                                                double[] normal = Array.ConvertAll(circNom.Normal.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (normal.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString();
                                                                    if (circAct.Normal == null) fa += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,1";
                                                                    if (circAct.Normal == null) fa += ",0,0,1";
                                                                }
                                                                if (circAct.Normal != null)
                                                                {
                                                                    double[] actnormal = Array.ConvertAll(circAct.Normal.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actnormal.Length == 3) fa += "," + actnormal[0].ToString() + "," + actnormal[1].ToString() + "," + actnormal[2].ToString();
                                                                    else fa += ",0,0,1";
                                                                }
                                                                // diameter and new line
                                                                f += "," + circDef.Diameter.Value.ToString() + Environment.NewLine;
                                                                if (circAct.Diameter == null) fa += "," + circDef.Diameter.Value.ToString() + Environment.NewLine;
                                                                else fa += "," + circAct.Diameter.Value.ToString() + Environment.NewLine;
                                                                // grab tolerances
                                                                string tlabels = "";
                                                                string talabels = "";
                                                                string tdefs = "";
                                                                string tadefs = "";
                                                                GetTolerances(qifDoc, measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].id, ref tlabels, ref talabels, ref tdefs, ref tadefs);
                                                                // output this feature
                                                                dmisoutput += Environment.NewLine + "$$ Circle nominal " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + flabel + tlabels + Environment.NewLine; // OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
                                                                dmisoutput += f; // F(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
                                                                dmisoutput += tdefs;
                                                                dmisoutput += "$$ Circle actual " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + falabel + talabels + Environment.NewLine; // OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
                                                                dmisoutput += fa; // F(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
                                                                dmisoutput += tadefs;
                                                                // am I a datum?
                                                                string datdef = "";
                                                                GetDatumDefinitions(qifDoc, qifDoc.Features.FeatureNominals.FeatureNominal[k].id, falabel, ref datdef);
                                                                dmisoutput += datdef;
                                                            }
                                                        }
                                                        else if (measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i] is CylinderFeatureActualType &&
                                                           qifDoc.Features.FeatureItems.FeatureItem[j] is CylinderFeatureItemType &&
                                                           qifDoc.Features.FeatureNominals.FeatureNominal[k] is CylinderFeatureNominalType &&
                                                           qifDoc.Features.FeatureDefinitions.FeatureDefinition[n] is CylinderFeatureDefinitionType)
                                                        {
                                                            CylinderFeatureNominalType cylNom = (CylinderFeatureNominalType)Convert.ChangeType(qifDoc.Features.FeatureNominals.FeatureNominal[k],
                                                                qifDoc.Features.FeatureNominals.FeatureNominal[k].GetType());
                                                            CylinderFeatureDefinitionType cylDef = (CylinderFeatureDefinitionType)Convert.ChangeType(qifDoc.Features.FeatureDefinitions.FeatureDefinition[n],
                                                                qifDoc.Features.FeatureDefinitions.FeatureDefinition[n].GetType());
                                                            CylinderFeatureActualType cylAct = (CylinderFeatureActualType)Convert.ChangeType(measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i],
                                                                measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].GetType());
                                                            if (cylNom != null && cylDef != null && cylAct != null) // should never happen, so it will
                                                            {
                                                                string flabel = "F(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")"; // F(CIRC1) for example
                                                                string falabel = "FA(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")";
                                                                string f = flabel + "=FEAT/CYLNDR";
                                                                string fa = falabel + "=FEAT/CYLNDR";
                                                                // inner  or outer?
                                                                if (cylDef.InternalExternal == InternalExternalEnumType.EXTERNAL)
                                                                {
                                                                    f += ",OUTER";
                                                                    fa += ",OUTER";
                                                                }
                                                                else
                                                                {
                                                                    f += ",INNER";
                                                                    fa += ",INNER";
                                                                }
                                                                // cartesian
                                                                f += ",CART";
                                                                fa += ",CART";
                                                                // xyz location
                                                                double[] location = Array.ConvertAll(cylNom.Axis.AxisPoint.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (location.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString();
                                                                    if (cylAct.Axis == null) fa += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,0";
                                                                    if (cylAct.Axis == null) fa += ",0,0,0";
                                                                }
                                                                if (cylAct.Axis != null)
                                                                {
                                                                    double[] actlocation = Array.ConvertAll(cylAct.Axis.AxisPoint.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actlocation.Length == 3) fa += "," + actlocation[0].ToString() + "," + actlocation[1].ToString() + "," + actlocation[2].ToString();
                                                                    else fa += ",0,0,0";
                                                                }
                                                                // ijk vector
                                                                double[] normal = Array.ConvertAll(cylNom.Axis.Direction.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (normal.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString();
                                                                    if (cylAct.Axis == null) fa += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,1";
                                                                    if (cylAct.Axis == null) fa += ",0,0,1";
                                                                }
                                                                if (cylAct.Axis != null)
                                                                {
                                                                    double[] actnormal = Array.ConvertAll(cylAct.Axis.Direction.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actnormal.Length == 3) fa += "," + actnormal[0].ToString() + "," + actnormal[1].ToString() + "," + actnormal[2].ToString();
                                                                    else fa += ",0,0,1";
                                                                }
                                                                // diameter and new line
                                                                f += "," + cylDef.Diameter.Value.ToString() + Environment.NewLine;
                                                                if (cylAct.Diameter == null) fa += "," + cylDef.Diameter.Value.ToString() + Environment.NewLine;
                                                                else fa += "," + cylAct.Diameter.Value.ToString() + Environment.NewLine;
                                                                // grab tolerances
                                                                string tlabels = "";
                                                                string talabels = "";
                                                                string tdefs = "";
                                                                string tadefs = "";
                                                                GetTolerances(qifDoc, measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].id, ref tlabels, ref talabels, ref tdefs, ref tadefs);
                                                                // output this feature
                                                                dmisoutput += Environment.NewLine + "$$ Cylinder nominal " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + flabel + tlabels + Environment.NewLine;
                                                                dmisoutput += f;
                                                                dmisoutput += tdefs;
                                                                dmisoutput += "$$ Cylinder actual " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + falabel + talabels + Environment.NewLine;
                                                                dmisoutput += fa;
                                                                dmisoutput += tadefs;
                                                                // am I a datum?
                                                                string datdef = "";
                                                                GetDatumDefinitions(qifDoc, qifDoc.Features.FeatureNominals.FeatureNominal[k].id, falabel, ref datdef);
                                                                dmisoutput += datdef;
                                                            }
                                                        }
                                                        else if (measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i] is PlaneFeatureActualType &&
                                                                 qifDoc.Features.FeatureItems.FeatureItem[j] is PlaneFeatureItemType &&
                                                                 qifDoc.Features.FeatureNominals.FeatureNominal[k] is PlaneFeatureNominalType &&
                                                                 qifDoc.Features.FeatureDefinitions.FeatureDefinition[n] is PlaneFeatureDefinitionType)
                                                        {
                                                            PlaneFeatureNominalType planNom = (PlaneFeatureNominalType)Convert.ChangeType(qifDoc.Features.FeatureNominals.FeatureNominal[k],
                                                                qifDoc.Features.FeatureNominals.FeatureNominal[k].GetType());
                                                            PlaneFeatureActualType planAct = (PlaneFeatureActualType)Convert.ChangeType(measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i],
                                                                measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].GetType());
                                                            if (planNom != null && planAct != null) // should never happen, so it will
                                                            {
                                                                string flabel = "F(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")";
                                                                string falabel = "FA(" + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + ")";
                                                                string f = flabel + "=FEAT/PLANE";
                                                                string fa = falabel + "=FEAT/PLANE";
                                                                // cartesian
                                                                f += ",CART";
                                                                fa += ",CART";
                                                                // xyz location
                                                                double[] location = Array.ConvertAll(planNom.Location.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (location.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString();
                                                                    if (planAct.Location == null) fa += "," + location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,0";
                                                                    if (planAct.Location == null) fa += ",0,0,0";
                                                                }
                                                                if (planAct.Location != null)
                                                                {
                                                                    double[] actlocation = Array.ConvertAll(planAct.Location.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actlocation.Length == 3) fa += "," + actlocation[0].ToString() + "," + actlocation[1].ToString() + "," + actlocation[2].ToString();
                                                                    else fa += ",0,0,0";
                                                                }
                                                                // ijk vector
                                                                double[] normal = Array.ConvertAll(planNom.Normal.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                if (normal.Length == 3) // should always be 3
                                                                {
                                                                    f += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString();
                                                                    if (planAct.Normal == null) fa += "," + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString(); // no actual, assume nominal
                                                                }
                                                                else
                                                                {
                                                                    f += ",0,0,1";
                                                                    if (planAct.Normal == null) fa += ",0,0,1";
                                                                }
                                                                if (planAct.Normal != null)
                                                                {
                                                                    double[] actnormal = Array.ConvertAll(planAct.Normal.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                                                    if (actnormal.Length == 3) fa += "," + actnormal[0].ToString() + "," + actnormal[1].ToString() + "," + actnormal[2].ToString();
                                                                    else fa += ",0,0,1";
                                                                }
                                                                // new line
                                                                f += Environment.NewLine;
                                                                fa += Environment.NewLine;
                                                                // grab tolerances
                                                                string tlabels = "";
                                                                string talabels = "";
                                                                string tdefs = "";
                                                                string tadefs = "";
                                                                GetTolerances(qifDoc, measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i].id, ref tlabels, ref talabels, ref tdefs, ref tadefs);
                                                                // output this feature
                                                                dmisoutput += Environment.NewLine + "$$ Plane nominal " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + flabel + tlabels + Environment.NewLine;
                                                                dmisoutput += f;
                                                                dmisoutput += tdefs;
                                                                dmisoutput += "$$ Plane actual " + qifDoc.Features.FeatureItems.FeatureItem[j].FeatureName + Environment.NewLine;
                                                                dmisoutput += "OUTPUT/" + falabel + talabels + Environment.NewLine;
                                                                dmisoutput += fa;
                                                                dmisoutput += tadefs;
                                                                // am I a datum?
                                                                string datdef = "";
                                                                GetDatumDefinitions(qifDoc, qifDoc.Features.FeatureNominals.FeatureNominal[k].id, falabel, ref datdef);
                                                                dmisoutput += datdef;
                                                            }
                                                        }
                                                        break; // definition loop
                                                    }                                                    
                                                }
                                                break; // nominal loop
                                            }                                            
                                        }
                                        break; // item loop
                                    }
                                }
                            }
                        }
                        dmisoutput += "ENDFIL";
                        SaveFileDialog saveDMISFileDialog1 = new SaveFileDialog();
                        saveDMISFileDialog1.Filter = "DMIS results file|*.dmo";
                        saveDMISFileDialog1.Title = "Save a DMIS results file:";

                        if (saveDMISFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            // write the document
                            System.IO.File.WriteAllText(saveDMISFileDialog1.FileName, dmisoutput);
                            // lets have a look
                            System.Diagnostics.Process.Start("notepad.exe", saveDMISFileDialog1.FileName);
                        }
                    }
                    else
                    {
                        // otherwise here's some old code that displays some messages (why throw away working code?)
                        #region Characteristics
                        // see if the Characteristics element is present
                        if (qifDoc.Characteristics != null)
                        {
                            uint nNom = qifDoc.Characteristics.CharacteristicNominals.n;
                            // see if there are any CharacteristicNominal substituted elements present
                            if (qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal != null)
                            {
                                // walk through the chracteristic nominals looking for diameter and distance between
                                int k = 0;
                                for (k = 0; k < qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal.Length; k++)
                                {
                                    // this test for diameter characteristic is a bit redundant, i.e., using both GetType and ChangeType
                                    // another, and more elegant, way to handle polymorphism is shown below in feature handling
                                    Type whatAmI = qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[k].GetType();
                                    if (whatAmI.Name == "DiameterCharacteristicNominalType")
                                    {
                                        DiameterCharacteristicNominalType diaNom = (DiameterCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[k], whatAmI);
                                        if (diaNom != null)
                                        {
                                            // go looking for the diameter definition
                                            uint diaDefRef = diaNom.CharacteristicDefinitionId.Value;
                                            if (qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition != null)
                                            {
                                                int j = 0;
                                                for (j = 0; j < qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition.Length; j++)
                                                {
                                                    if (diaDefRef == qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j].id)
                                                    {
                                                        // we found our match
                                                        whatAmI = qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j].GetType();
                                                        if (whatAmI.Name == "DiameterCharacteristicDefinitionType")
                                                        {
                                                            DiameterCharacteristicDefinitionType diaDef = (DiameterCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j], whatAmI);
                                                            if (diaDef != null)
                                                            {
                                                                // we have nominal and definition
                                                                string diaStr = "Diameter ";
                                                                // see if we have a name
                                                                if (diaNom.Name != null) diaStr += "(" + diaNom.Name + ") ";
                                                                // see if we have a target value
                                                                if (diaNom.TargetValue != null) diaStr += diaNom.TargetValue.Value.ToString();
                                                                // see if we have a tolerance
                                                                if (diaDef.Item.GetType().Name == "LinearToleranceType")
                                                                {
                                                                    LinearToleranceType diaTol = (LinearToleranceType)Convert.ChangeType(diaDef.Item, diaDef.Item.GetType());
                                                                    if (diaTol != null)
                                                                    {
                                                                        int t = 0;
                                                                        for (t = 0; t < diaTol.ItemsElementName.Length; t++)
                                                                        {
                                                                            if (diaTol.ItemsElementName[t] == ItemsChoiceType4.MaxValue)
                                                                            {
                                                                                LinearValueType diaMax = (LinearValueType)Convert.ChangeType(diaTol.Items[t], diaTol.Items[t].GetType());
                                                                                if (diaMax != null) diaStr += " +" + diaMax.Value.ToString();
                                                                            }
                                                                            else if (diaTol.ItemsElementName[t] == ItemsChoiceType4.MinValue)
                                                                            {
                                                                                LinearValueType diaMin = (LinearValueType)Convert.ChangeType(diaTol.Items[t], diaTol.Items[t].GetType());
                                                                                if (diaMin != null) diaStr += "/" + diaMin.Value.ToString();
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                // if(diaDef.DimensionType != null) { }
                                                                // doesn't work, use the Specified mechanism
                                                                if (diaDef.DimensionTypeSpecified) { }

                                                                string caption = "Diameter tol info:";
                                                                MessageBoxButtons buttons = MessageBoxButtons.OKCancel;
                                                                DialogResult res = DialogResult.OK;

                                                                // Displays the MessageBox.
                                                                res = MessageBox.Show(diaStr, caption, buttons);
                                                                if (res == DialogResult.Cancel)
                                                                {
                                                                    breakout = true;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                        }
                                    }
                                    if (whatAmI.Name == "DistanceBetweenCharacteristicNominalType")
                                    {
                                        DistanceBetweenCharacteristicNominalType distNom = (DistanceBetweenCharacteristicNominalType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicNominals.CharacteristicNominal[k], whatAmI);
                                        if (distNom != null)
                                        {
                                            // go looking for the DistanceBetween definition
                                            uint distDefRef = distNom.CharacteristicDefinitionId.Value;
                                            if (qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition != null)
                                            {
                                                int j = 0;
                                                for (j = 0; j < qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition.Length; j++)
                                                {
                                                    if (distDefRef == qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j].id)
                                                    {
                                                        // we found our match
                                                        whatAmI = qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j].GetType();
                                                        if (whatAmI.Name == "DistanceBetweenCharacteristicDefinitionType")
                                                        {
                                                            DistanceBetweenCharacteristicDefinitionType distDef = (DistanceBetweenCharacteristicDefinitionType)Convert.ChangeType(qifDoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[j], whatAmI);
                                                            if (distDef != null)
                                                            {
                                                                // we have nominal and definition
                                                                string distStr = "DistanceBetween ";
                                                                // see if we have a name
                                                                if (distNom.Name != null) distStr += "(" + distNom.Name + ") ";
                                                                // see if we have a target value
                                                                if (distNom.TargetValue != null) distStr += distNom.TargetValue.Value.ToString();
                                                                // see if we have a tolerance
                                                                if (distDef.Item.GetType().Name == "LinearToleranceType")
                                                                {
                                                                    LinearToleranceType distTol = (LinearToleranceType)Convert.ChangeType(distDef.Item, distDef.Item.GetType());
                                                                    if (distTol != null)
                                                                    {
                                                                        int t = 0;
                                                                        for (t = 0; t < distTol.ItemsElementName.Length; t++)
                                                                        {
                                                                            if (distTol.ItemsElementName[t] == ItemsChoiceType4.MaxValue)
                                                                            {
                                                                                LinearValueType distMax = (LinearValueType)Convert.ChangeType(distTol.Items[t], distTol.Items[t].GetType());
                                                                                if (distMax != null) distStr += " +" + distMax.Value.ToString();
                                                                            }
                                                                            else if (distTol.ItemsElementName[t] == ItemsChoiceType4.MinValue)
                                                                            {
                                                                                LinearValueType distMin = (LinearValueType)Convert.ChangeType(distTol.Items[t], distTol.Items[t].GetType());
                                                                                if (distMin != null) distStr += "/" + distMin.Value.ToString();
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                string caption = "DistanceBetween tol info:";
                                                                MessageBoxButtons buttons = MessageBoxButtons.OKCancel;
                                                                DialogResult res = DialogResult.OK;

                                                                // Displays the MessageBox.
                                                                res = MessageBox.Show(distStr, caption, buttons);
                                                                if (res == DialogResult.Cancel)
                                                                {
                                                                    breakout = true;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (breakout) break;
                                }
                            }
                        }
                        #endregion

                        #region Features
                        // see if the Features element is present
                        if (qifDoc.Features != null)
                        {
                            uint nNom = qifDoc.Features.FeatureNominals.n;
                            // see if there are any FeatureNominal substituted elements present
                            if (qifDoc.Features.FeatureNominals.FeatureNominal != null)
                            {
                                // walk through the feature nominals looking for circles
                                int k = 0;
                                for (k = 0; k < qifDoc.Features.FeatureNominals.FeatureNominal.Length; k++)
                                {
                                    // test type
                                    if (qifDoc.Features.FeatureNominals.FeatureNominal[k] is CircleFeatureNominalType)
                                    {
                                        // cast
                                        CircleFeatureNominalType circNom = (CircleFeatureNominalType)qifDoc.Features.FeatureNominals.FeatureNominal[k];
                                        if (circNom != null)
                                        {
                                            // display the circle location and vector
                                            String circStr = "Circle location: ";

                                            // this would work because the point list and vector list are strings:
                                            // circStr += circNom.Location.Text + " vector: " + circNom.Normal.Text;

                                            // but let's decompose the text lists into doubles, splitting on the space character delimiter
                                            double[] location = Array.ConvertAll(circNom.Location.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                            if (location.Length == 3) // should always be 3
                                            {
                                                circStr += location[0].ToString() + "," + location[1].ToString() + "," + location[2].ToString();
                                            }
                                            double[] normal = Array.ConvertAll(circNom.Normal.Text.Split(' '), new Converter<string, double>(Double.Parse));
                                            if (normal.Length == 3) // should always be 3
                                            {
                                                circStr += " vector: " + normal[0].ToString() + "," + normal[1].ToString() + "," + normal[2].ToString();
                                            }

                                            // display the circle message box
                                            string caption = "Circle info:";
                                            MessageBoxButtons buttons = MessageBoxButtons.OKCancel;
                                            DialogResult res = DialogResult.OK;

                                            // Displays the MessageBox.
                                            res = MessageBox.Show(circStr, caption, buttons);
                                            if (res == DialogResult.Cancel)
                                            {
                                                breakout = true;
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        #endregion
                    }

                    //#region Test parser
                    //// save off QIF again under a different name to test validy of QIFDocument.cs serializer (no problems found yet)
                    //SaveFileDialog saveFileDialog1 = new SaveFileDialog();
                    //saveFileDialog1.Filter = "QIF Documents|*.qif";
                    //saveFileDialog1.Title = "Save off QIF file?";

                    //if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    //{
                    //    var xmlserializer = new XmlSerializer(typeof(QIFDocumentType));
                    //    TextWriter putstream = new StreamWriter(saveFileDialog1.FileName);
                    //    xmlserializer.Serialize(putstream, qifDoc);
                    //    putstream.Close();
                    //}
                    //#endregion
                }
            }
            catch (Exception ex)
            {
                // place a debug break point here and explore ex in the watch window to debug errors in your implementation
                int i = 1;
            }
        }

        private void QifDocumentCreateCall()
        {
            try
            {
                // Create a QIF document with features, datums, characteristics and measured results

                uint qifid = 1; // QIF id counter, the beating heart of QIF

                #region lists
                /// Define object lists for addition to arrays later

                // lists
                List<MeasurementDeviceType> measDevices = new List<MeasurementDeviceType>();
                List<DatumDefinitionType> datumDefs = new List<DatumDefinitionType>();
                List<DatumReferenceFrameType> drfDefs = new List<DatumReferenceFrameType>();
                List<FeatureDefinitionBaseType> featDefs = new List<FeatureDefinitionBaseType>();
                List<FeatureNominalBaseType> featNoms = new List<FeatureNominalBaseType>();
                List<FeatureItemBaseType> featItems = new List<FeatureItemBaseType>();
                List<FeatureActualBaseType> featActs = new List<FeatureActualBaseType>();
                List<CharacteristicDefinitionBaseType> charDefs = new List<CharacteristicDefinitionBaseType>();
                List<CharacteristicNominalBaseType> charNoms = new List<CharacteristicNominalBaseType>();
                List<CharacteristicItemBaseType> charItems = new List<CharacteristicItemBaseType>();
                List<CharacteristicActualBaseType> charActs = new List<CharacteristicActualBaseType>();
                #endregion

                #region Datum definitions
                /// define ABC datums

                // define datums ABC (as simple datum letters, we'll create hooks to datum features later)
                DatumDefinitionType datA = new DatumDefinitionType();
                datA.id = qifid++; // required id
                datA.DatumLabel = "A";
                datumDefs.Add(datA);
                DatumDefinitionType datB = new DatumDefinitionType();
                datB.id = qifid++; // required id
                datB.DatumLabel = "B";
                datumDefs.Add(datB);
                DatumDefinitionType datC = new DatumDefinitionType();
                datC.id = qifid++; // required id
                datC.DatumLabel = "C";
                datumDefs.Add(datC);
                #endregion

                #region Datum reference frames
                /// define A, AB, and ABC datum reference frames

                #region A
                // make a datum reference frame A
                DatumReferenceFrameType drfA = new DatumReferenceFrameType();
                drfA.id = qifid++; // required id
                // datums container
                drfA.Datums = new DatumsType();
                // array of 1 datum
                drfA.Datums.Datum = new DatumWithPrecedenceType[1];
                drfA.Datums.n = 1;

                // A is simple datum with no material condition modifier
                DatumType dtA_A = new DatumType();
                // reference id of A
                QIFReferenceFullType datA_Aref = new QIFReferenceFullType();
                datA_Aref.Value = datA.id;
                dtA_A.DatumDefinitionId = datA_Aref;
                // no matieral modifier
                dtA_A.MaterialModifier = MaterialModifierEnumType.NONE;
                // use the actual datum feature
                dtA_A.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum A to DRF as primary datum
                DatumWithPrecedenceType dwpA_A = new DatumWithPrecedenceType();
                dwpA_A.Item = dtA_A;
                PrecedenceType prcA_A = new PrecedenceType();
                PrecedenceEnumType prcA_AEnum = new PrecedenceEnumType();
                prcA_AEnum = PrecedenceEnumType.PRIMARY;
                prcA_A.Item = prcA_AEnum;
                dwpA_A.Precedence = prcA_A;
                drfA.Datums.Datum[0] = dwpA_A;

                // add our DRF to the list
                drfDefs.Add(drfA);
                #endregion

                #region A|B
                // make a datum reference frame A|B(m)
                DatumReferenceFrameType drfAB = new DatumReferenceFrameType();
                drfAB.id = qifid++; // required id
                // datums container
                drfAB.Datums = new DatumsType();
                // array of 2 datums
                drfAB.Datums.Datum = new DatumWithPrecedenceType[2];
                drfAB.Datums.n = 2;

                // A is simple datum with no material condition modifier
                DatumType dtA_AB = new DatumType();
                // reference id of A
                QIFReferenceFullType datA_ABref = new QIFReferenceFullType();
                datA_ABref.Value = datA.id;
                dtA_AB.DatumDefinitionId = datA_ABref;
                // no matieral modifier
                dtA_AB.MaterialModifier = MaterialModifierEnumType.NONE;
                // use the actual datum feature
                dtA_AB.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum A to DRF as primary datum
                DatumWithPrecedenceType dwpA_AB = new DatumWithPrecedenceType();
                dwpA_AB.Item = dtA_AB;
                PrecedenceType prcA_AB = new PrecedenceType();
                PrecedenceEnumType prcA_ABEnum = new PrecedenceEnumType();
                prcA_ABEnum = PrecedenceEnumType.PRIMARY;
                prcA_AB.Item = prcA_ABEnum;
                dwpA_AB.Precedence = prcA_AB;
                drfAB.Datums.Datum[0] = dwpA_AB;

                // B is simple datum with MMC material condition modifier
                DatumType dtB_AB = new DatumType();
                // reference id of B
                QIFReferenceFullType datB_ABref = new QIFReferenceFullType();
                datB_ABref.Value = datB.id;
                dtB_AB.DatumDefinitionId = datB_ABref;
                // MMC matieral modifier
                dtB_AB.MaterialModifier = MaterialModifierEnumType.MAXIMUM;
                // use the actual datum feature
                dtB_AB.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum B to DRF as secondary datum
                DatumWithPrecedenceType dwpB_AB = new DatumWithPrecedenceType();
                dwpB_AB.Item = dtB_AB;
                PrecedenceType prcB_AB = new PrecedenceType();
                PrecedenceEnumType prcB_ABEnum = new PrecedenceEnumType();
                prcB_ABEnum = PrecedenceEnumType.SECONDARY;
                prcB_AB.Item = prcB_ABEnum;
                dwpB_AB.Precedence = prcB_AB;
                drfAB.Datums.Datum[1] = dwpB_AB;

                // add our DRF to the list
                drfDefs.Add(drfAB);
                #endregion

                #region A|B|C
                // make a datum reference frame A|B(m)|C(m)
                DatumReferenceFrameType drfABC = new DatumReferenceFrameType();
                drfABC.id = qifid++; // required id
                // datums container
                drfABC.Datums = new DatumsType();
                // array of 3 datums
                drfABC.Datums.Datum = new DatumWithPrecedenceType[3];
                drfABC.Datums.n = 3;

                // A is simple datum with no material condition modifier
                DatumType dtA_ABC = new DatumType();
                // reference id of A
                QIFReferenceFullType datA_ABCref = new QIFReferenceFullType();
                datA_ABCref.Value = datA.id;
                dtA_ABC.DatumDefinitionId = datA_ABCref;
                // no matieral modifier
                dtA_ABC.MaterialModifier = MaterialModifierEnumType.NONE;
                // use the actual datum feature
                dtA_ABC.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum A to DRF as primary datum
                DatumWithPrecedenceType dwpA_ABC = new DatumWithPrecedenceType();
                dwpA_ABC.Item = dtA_ABC;
                PrecedenceType prcA_ABC = new PrecedenceType();
                PrecedenceEnumType prcA_ABCEnum = new PrecedenceEnumType();
                prcA_ABCEnum = PrecedenceEnumType.PRIMARY;
                prcA_ABC.Item = prcA_ABCEnum;
                dwpA_ABC.Precedence = prcA_ABC;
                drfABC.Datums.Datum[0] = dwpA_ABC;

                // B is simple datum with MMC material condition modifier
                DatumType dtB_ABC = new DatumType();
                // reference id of B
                QIFReferenceFullType datB_ABCref = new QIFReferenceFullType();
                datB_ABCref.Value = datB.id;
                dtB_ABC.DatumDefinitionId = datB_ABCref;
                // MMC matieral modifier
                dtB_ABC.MaterialModifier = MaterialModifierEnumType.MAXIMUM;
                // use the actual datum feature
                dtB_ABC.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum B to DRF as secondary datum
                DatumWithPrecedenceType dwpB_ABC = new DatumWithPrecedenceType();
                dwpB_ABC.Item = dtB_ABC;
                PrecedenceType prcB_ABC = new PrecedenceType();
                PrecedenceEnumType prcB_ABCEnum = new PrecedenceEnumType();
                prcB_ABCEnum = PrecedenceEnumType.SECONDARY;
                prcB_ABC.Item = prcB_ABCEnum;
                dwpB_ABC.Precedence = prcB_ABC;
                drfABC.Datums.Datum[1] = dwpB_ABC;

                // C is simple datum with MMC material condition modifier
                DatumType dtC_ABC = new DatumType();
                // reference id of C
                QIFReferenceFullType datC_ABCref = new QIFReferenceFullType();
                datC_ABCref.Value = datC.id;
                dtC_ABC.DatumDefinitionId = datC_ABCref;
                // MMC matieral modifier
                dtC_ABC.MaterialModifier = MaterialModifierEnumType.MAXIMUM;
                // use the actual datum feature
                dtC_ABC.ReferencedComponent = ReferencedComponentEnumType.ACTUAL;
                // add datum C to DRF as teriary datum
                DatumWithPrecedenceType dwpC_ABC = new DatumWithPrecedenceType();
                dwpC_ABC.Item = dtC_ABC;
                PrecedenceType prcC_ABC = new PrecedenceType();
                PrecedenceEnumType prcC_ABCEnum = new PrecedenceEnumType();
                prcC_ABCEnum = PrecedenceEnumType.TERTIARY;
                prcC_ABC.Item = prcC_ABCEnum;
                dwpC_ABC.Precedence = prcC_ABC;
                drfABC.Datums.Datum[2] = dwpC_ABC;

                // add our DRF to the list
                drfDefs.Add(drfABC);
                #endregion
                #endregion

                #region Measurement devices
                // define 2 CMM measurement devices and assign them ids
                MeasurementDeviceType cmm1 = new MeasurementDeviceType();
                cmm1.Name = "CMM1";
                cmm1.id = qifid++; // required id
                // add this device to our list
                measDevices.Add(cmm1);
                // this device will be referenced by its id
                QIFReferenceFullType cmm1Ref = new QIFReferenceFullType();
                cmm1Ref.Value = cmm1.id;
                MeasurementDeviceType cmm2 = new MeasurementDeviceType();
                cmm2.Name = "CMM2";
                cmm2.id = qifid++; // required id
                // add this device to our list
                measDevices.Add(cmm2);
                // this device will be referenced by its id
                QIFReferenceFullType cmm2Ref = new QIFReferenceFullType();
                cmm2Ref.Value = cmm2.id;
                #endregion


                #region Datum A plane
                /// define A datum plane

                // make a plane feature definition
                PlaneFeatureDefinitionType planADef = new PlaneFeatureDefinitionType();
                planADef.id = qifid++; // required id

                // add to list
                featDefs.Add(planADef);

                // make a plane feature nominal
                PlaneFeatureNominalType planANom = new PlaneFeatureNominalType();
                planANom.id = qifid++; // required id

                // reference to definition
                QIFReferenceType planADefRef = new QIFReferenceType();
                planADefRef.Value = planADef.id;
                planANom.FeatureDefinitionId = planADefRef;

                // plane location
                planANom.Location = new PointType();
                double[] pt = new double[3];
                pt[0] = 0.0;
                pt[1] = 0.0;
                pt[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                planANom.Location.Text = pt[0].ToString() + ' ' + pt[1].ToString() + ' ' + pt[2].ToString();

                // plane normal
                planANom.Normal = new UnitVectorType();
                double[] pnor = new double[3];
                pnor[0] = 0.0;
                pnor[1] = 0.0;
                pnor[2] = 1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                planANom.Normal.Text = pnor[0].ToString() + ' ' + pnor[1].ToString() + ' ' + pnor[2].ToString();

                // add to list
                featNoms.Add(planANom);

                // make a plane feature item
                PlaneFeatureItemType planAItem = new PlaneFeatureItemType();
                planAItem.id = qifid++; // required id

                // reference to nominal
                QIFReferenceFullType planANomRef = new QIFReferenceFullType();
                planANomRef.Value = planANom.id;
                planAItem.FeatureNominalId = planANomRef;

                // Give plane a name
                planAItem.FeatureName = "DAT_A";

                // is this plane checked or set?
                PlaneCheckedFeatureType planACheck = new PlaneCheckedFeatureType();
                PlaneActualDeterminationType planAActDet = new PlaneActualDeterminationType();
                planAActDet.Item = planACheck; // this feature is checked, rather than set
                planAItem.DeterminationMode = planAActDet;

                // add to list
                featItems.Add(planAItem);

                // reference to item
                QIFReferenceFullType planAItemRef = new QIFReferenceFullType();
                planAItemRef.Value = planAItem.id;

                // make a plane feature actual
                PlaneFeatureActualType planAAct = new PlaneFeatureActualType();
                planAAct.id = qifid++; // required id

                // reference to item
                planAAct.FeatureItemId = planAItemRef;

                // actual location
                planAAct.Location = new ActualPointType();
                double[] apt = new double[3];
                apt[0] = 0.0; // perfect because it's datum A
                apt[1] = 0.0;
                apt[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                planAAct.Location.Text = apt[0].ToString() + ' ' + apt[1].ToString() + ' ' + apt[2].ToString();

                // plane normal
                planAAct.Normal = new ActualUnitVectorType();
                double[] apnor = new double[3];
                apnor[0] = 0.0; // perfect because it's datum A
                apnor[1] = 0.0;
                apnor[2] = 1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                planAAct.Normal.Text = apnor[0].ToString() + ' ' + apnor[1].ToString() + ' ' + apnor[2].ToString();

                // add to list
                featActs.Add(planAAct);

                // point datum definition at plane nominal
                // array of one reference id
                ArrayReferenceFullType datAfeats = new ArrayReferenceFullType();
                datAfeats.Id = new QIFReferenceFullType[1];
                datAfeats.n = 1;
                datAfeats.Id[0] = planANomRef;
                // hook to datum
                datA.FeatureNominalIds = datAfeats;

                // make a flatness characteristic definition
                FlatnessCharacteristicDefinitionType flatDef = new FlatnessCharacteristicDefinitionType();
                flatDef.id = qifid++; // required id

                // define the tolerance zone
                LinearValueType flatZone = new LinearValueType();
                flatZone.Value = 0.1M;
                // a flatness can be simple, per-unit-area, or both. Items is used to store this hierachy of objects
                flatDef.Items = new object[1];
                flatDef.Items[0] = flatZone;

                // add to list
                charDefs.Add(flatDef);

                // make a flatness characteristic nominal
                FlatnessCharacteristicNominalType flatNom = new FlatnessCharacteristicNominalType();
                flatNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType flatDefRef = new QIFReferenceType();
                flatDefRef.Value = flatDef.id;
                flatNom.CharacteristicDefinitionId = flatDefRef;

                // add to list
                charNoms.Add(flatNom);

                // make a flatness characteristic item
                FlatnessCharacteristicItemType flatItem = new FlatnessCharacteristicItemType();
                flatItem.id = qifid++; // required id

                // required reference to nominal
                QIFReferenceFullType flatNomRef = new QIFReferenceFullType();
                flatNomRef.Value = flatNom.id;
                flatItem.CharacteristicNominalId = flatNomRef;

                // give tolerance a name
                flatItem.Name = "FLAT1";

                // point tolerance at feature
                flatItem.FeatureItemIds = new ArrayReferenceFullType();
                flatItem.FeatureItemIds.n = 1;
                flatItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                flatItem.FeatureItemIds.Id[0] = planAItemRef;

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                flatItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                flatItem.MeasurementDeviceIds.n = 2;
                flatItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                flatItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                flatItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(flatItem);

                // make a flatness characteristic actual
                FlatnessCharacteristicActualType flatAct = new FlatnessCharacteristicActualType();
                flatAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType flatItemRef = new QIFReferenceFullType();
                flatItemRef.Value = flatItem.id;
                flatAct.CharacteristicItemId = flatItemRef;

                // required status
                CharacteristicStatusEnumType flatStatEnum = new CharacteristicStatusEnumType();
                flatStatEnum = CharacteristicStatusEnumType.PASS;
                flatAct.Status = new CharacteristicStatusType();
                flatAct.Status.Item = flatStatEnum;

                // actual value
                ActualLinearValueType flatActVal = new ActualLinearValueType();
                flatActVal.Value = 0.023M;
                flatAct.Value = flatActVal;

                // point actual tolerance at actual feature
                QIFReferenceFullType planAActRef = new QIFReferenceFullType();
                planAActRef.Value = planAAct.id;
                flatAct.FeatureActualIds = new ArrayReferenceFullType();
                flatAct.FeatureActualIds.n = 1;
                flatAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                flatAct.FeatureActualIds.Id[0] = planAActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                flatAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                flatAct.MeasurementDeviceIds.n = 1;
                flatAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                flatAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(flatAct);
                #endregion

                #region datum B cylinder
                // make a cylinder feature definition * SHARED BETWEEN DATUMS B AND C *
                CylinderFeatureDefinitionType cylBCDef = new CylinderFeatureDefinitionType();
                cylBCDef.id = qifid++; // required id

                // feature size
                LinearValueType diaBCSize = new LinearValueType();
                diaBCSize.Value = 12.7M;
                cylBCDef.Diameter = diaBCSize;

                // material side
                cylBCDef.InternalExternal = InternalExternalEnumType.INTERNAL;

                // add to list
                featDefs.Add(cylBCDef);

                // make a cylinder feature nominal
                CylinderFeatureNominalType cylBNom = new CylinderFeatureNominalType();
                cylBNom.id = qifid++; // required id

                // reference to shared definition
                QIFReferenceType cylBCDefRef = new QIFReferenceType();
                cylBCDefRef.Value = cylBCDef.id;
                cylBNom.FeatureDefinitionId = cylBCDefRef;

                // cylinder location
                PointType cylBcen = new PointType();
                double[] cenB = new double[3];
                cenB[0] = 30.0;
                cenB[1] = 0.0;
                cenB[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                cylBcen.Text = cenB[0].ToString() + ' ' + cenB[1].ToString() + ' ' + cenB[2].ToString();

                // cylinder axis
                UnitVectorType cylBvec = new UnitVectorType();
                double[] norB = new double[3];
                norB[0] = 0.0;
                norB[1] = 0.0;
                norB[2] = -1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                cylBvec.Text = norB[0].ToString() + ' ' + norB[1].ToString() + ' ' + norB[2].ToString();

                // cylinder axis
                AxisType cylBaxis = new AxisType();
                cylBaxis.AxisPoint = cylBcen;
                cylBaxis.Direction = cylBvec;
                cylBNom.Axis = cylBaxis;

                // add to list
                featNoms.Add(cylBNom);

                // make a cylinder feature item
                CylinderFeatureItemType cylBItem = new CylinderFeatureItemType();
                cylBItem.id = qifid++; // required id

                // reference to nominal
                QIFReferenceFullType cylBNomRef = new QIFReferenceFullType();
                cylBNomRef.Value = cylBNom.id;
                cylBItem.FeatureNominalId = cylBNomRef;

                // Give cylinder a name
                cylBItem.FeatureName = "DAT_B";

                // is this cylinder checked or set?
                CylinderCheckedFeatureType cylBCheck = new CylinderCheckedFeatureType();
                CylinderActualDeterminationType cylBActDet = new CylinderActualDeterminationType();
                cylBActDet.Item = cylBCheck; // this feature is checked, rather than set
                cylBItem.DeterminationMode = cylBActDet;

                // add to list
                featItems.Add(cylBItem);

                // make a cylinder feature actual
                CylinderFeatureActualType cylBAct = new CylinderFeatureActualType();
                cylBAct.id = qifid++; // required id

                // reference to item
                QIFReferenceFullType cylBItemRef = new QIFReferenceFullType();
                cylBItemRef.Value = cylBItem.id;
                cylBAct.FeatureItemId = cylBItemRef;

                // cylinder location
                ActualPointType acylBcen = new ActualPointType();
                double[] acenB = new double[3];
                acenB[0] = 30.0;
                acenB[1] = 0.0;
                acenB[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                acylBcen.Text = acenB[0].ToString() + ' ' + acenB[1].ToString() + ' ' + acenB[2].ToString();

                // cylinder axis
                ActualUnitVectorType acylBvec = new ActualUnitVectorType();
                double[] anorB = new double[3];
                anorB[0] = 0.051;
                anorB[1] = 0.0;
                anorB[2] = -0.9987;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                acylBvec.Text = anorB[0].ToString() + ' ' + anorB[1].ToString() + ' ' + anorB[2].ToString();

                // cylinder axis
                ActualAxisType acylBaxis = new ActualAxisType();
                acylBaxis.AxisPoint = acylBcen;
                acylBaxis.Direction = acylBvec;
                cylBAct.Axis = acylBaxis;

                // cylinder diameter
                ActualLinearValueType acylBDiam = new ActualLinearValueType();
                acylBDiam.Value = 12.699M;
                cylBAct.Diameter = acylBDiam;

                // add to list
                featActs.Add(cylBAct);

                // array of one reference id
                ArrayReferenceFullType datBfeats = new ArrayReferenceFullType();
                datBfeats.Id = new QIFReferenceFullType[1];
                datBfeats.n = 1;
                datBfeats.Id[0] = cylBNomRef;
                // hook to datum
                datB.FeatureNominalIds = datBfeats;

                // make a diameter characteristic definition to be shared
                DiameterCharacteristicDefinitionType diaBCDef = new DiameterCharacteristicDefinitionType();
                diaBCDef.id = qifid++; // required id

                // tolerance (as opposed to limits and fits, or non-tolerance
                LinearValueType plusTolBC = new LinearValueType();
                plusTolBC.Value = 0.3M;
                LinearValueType minusTolBC = new LinearValueType();
                minusTolBC.Value = -0.3M;
                LinearToleranceType diaBCTol = new LinearToleranceType();
                diaBCTol.DefinedAsLimit = false;
                diaBCTol.Items = new object[2];
                diaBCTol.ItemsElementName = new ItemsChoiceType4[2];
                diaBCTol.Items[0] = plusTolBC;
                diaBCTol.ItemsElementName[0] = ItemsChoiceType4.MaxValue;
                diaBCTol.Items[1] = minusTolBC;
                diaBCTol.ItemsElementName[1] = ItemsChoiceType4.MinValue;
                diaBCDef.Item = diaBCTol;

                // add to list
                charDefs.Add(diaBCDef);

                // make a diameter characteristic nominal
                DiameterCharacteristicNominalType diaBCNom = new DiameterCharacteristicNominalType();
                diaBCNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType diaBCDefRef = new QIFReferenceType();
                diaBCDefRef.Value = diaBCDef.id;
                diaBCNom.CharacteristicDefinitionId = diaBCDefRef;

                // nominal value
                diaBCNom.TargetValue = diaBCSize; // from feature definition above

                // give shared tolerance a name
                diaBCNom.Name = "DIAM1";

                // add to list
                charNoms.Add(diaBCNom);

                // make a diameter characteristic item (this is not sharable)
                DiameterCharacteristicItemType diaBItem = new DiameterCharacteristicItemType();
                diaBItem.id = qifid++; // required id

                // required reference to nominal
                QIFReferenceFullType diaBCNomRef = new QIFReferenceFullType();
                diaBCNomRef.Value = diaBCNom.id;
                diaBItem.CharacteristicNominalId = diaBCNomRef;

                // give tolerance a name
                diaBItem.Name = "DIAM1_B";

                // point tolerance at feature
                diaBItem.FeatureItemIds = new ArrayReferenceFullType();
                diaBItem.FeatureItemIds.n = 1;
                diaBItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                diaBItem.FeatureItemIds.Id[0] = cylBItemRef;

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                diaBItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaBItem.MeasurementDeviceIds.n = 2;
                diaBItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                diaBItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                diaBItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(diaBItem);

                // make a diameter characteristic actual
                DiameterCharacteristicActualType diaBAct = new DiameterCharacteristicActualType();
                diaBAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType diaBItemRef = new QIFReferenceFullType();
                diaBItemRef.Value = diaBItem.id;
                diaBAct.CharacteristicItemId = diaBItemRef;

                // required status
                CharacteristicStatusEnumType diaBStatEnum = new CharacteristicStatusEnumType();
                diaBStatEnum = CharacteristicStatusEnumType.PASS;
                diaBAct.Status = new CharacteristicStatusType();
                diaBAct.Status.Item = diaBStatEnum;

                // actual value
                ActualLinearValueType diaBActVal = new ActualLinearValueType();
                diaBActVal.Value = 12.699M;
                diaBAct.Value = diaBActVal;

                // point actual tolerance at actual feature
                QIFReferenceFullType cylBActRef = new QIFReferenceFullType();
                cylBActRef.Value = cylBAct.id;
                diaBAct.FeatureActualIds = new ArrayReferenceFullType();
                diaBAct.FeatureActualIds.n = 1;
                diaBAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                diaBAct.FeatureActualIds.Id[0] = cylBActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                diaBAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaBAct.MeasurementDeviceIds.n = 1;
                diaBAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                diaBAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(diaBAct);

                // make a perpendicularity characteristic definition
                PerpendicularityCharacteristicDefinitionType perpDef = new PerpendicularityCharacteristicDefinitionType();
                perpDef.id = qifid++; // required id

                // define the tolerance zone
                LinearValueType perpZone = new LinearValueType();
                perpZone.Value = 0.2M;
                perpDef.ToleranceValue = perpZone;
                // define the zone shape
                OrientationDiametricalZoneType perpDiaZone = new OrientationDiametricalZoneType();
                OrientationZoneShapeType perpZoneShape = new OrientationZoneShapeType();
                perpZoneShape.Item = perpDiaZone;
                perpDef.ZoneShape = perpZoneShape; // when there is a choice, use Item
                // define the material condition
                perpDef.MaterialCondition = MaterialModifierEnumType.MAXIMUM;
                // point to DRF
                QIFReferenceFullType ADRFRef = new QIFReferenceFullType();
                ADRFRef.Value = drfA.id;
                perpDef.DatumReferenceFrameId = ADRFRef;

                // add to list
                charDefs.Add(perpDef);

                // make a perpendicularity characteristic nominal
                PerpendicularityCharacteristicNominalType perpNom = new PerpendicularityCharacteristicNominalType();
                perpNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType perpDefRef = new QIFReferenceType();
                perpDefRef.Value = perpDef.id;
                perpNom.CharacteristicDefinitionId = perpDefRef;

                // add to list
                charNoms.Add(perpNom);

                // make a perpendicularity characteristic item
                PerpendicularityCharacteristicItemType perpItem = new PerpendicularityCharacteristicItemType();
                perpItem.id = qifid++; // required id

                // required reference to nominal
                QIFReferenceFullType perpNomRef = new QIFReferenceFullType();
                perpNomRef.Value = perpNom.id;
                perpItem.CharacteristicNominalId = perpNomRef;

                // give tolerance a name
                perpItem.Name = "PERP1";

                // point tolerance at feature
                perpItem.FeatureItemIds = new ArrayReferenceFullType();
                perpItem.FeatureItemIds.n = 1;
                perpItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                perpItem.FeatureItemIds.Id[0] = cylBItemRef; // from hooking to diameter above

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                perpItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                perpItem.MeasurementDeviceIds.n = 2;
                perpItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                perpItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                perpItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(perpItem);

                // make a perpendicularity characteristic actual
                PerpendicularityCharacteristicActualType perpAct = new PerpendicularityCharacteristicActualType();
                perpAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType perpItemRef = new QIFReferenceFullType();
                perpItemRef.Value = perpItem.id;
                perpAct.CharacteristicItemId = perpItemRef;

                // required status
                CharacteristicStatusEnumType perpStatEnum = new CharacteristicStatusEnumType();
                perpStatEnum = CharacteristicStatusEnumType.PASS;
                perpAct.Status = new CharacteristicStatusType();
                perpAct.Status.Item = perpStatEnum;

                // actual value
                ActualLinearValueType perpActVal = new ActualLinearValueType();
                perpActVal.Value = 0.07M;
                perpAct.Value = perpActVal;

                // point actual tolerance at actual feature
                perpAct.FeatureActualIds = new ArrayReferenceFullType();
                perpAct.FeatureActualIds.n = 1;
                perpAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                perpAct.FeatureActualIds.Id[0] = cylBActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                perpAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                perpAct.MeasurementDeviceIds.n = 1;
                perpAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                perpAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(perpAct);

                #endregion

                #region datum C cylinder
                // make a cylinder feature nominal
                CylinderFeatureNominalType cylCNom = new CylinderFeatureNominalType();
                cylCNom.id = qifid++; // required id

                // reference to shared definition
                cylCNom.FeatureDefinitionId = cylBCDefRef;

                // cylinder location
                PointType cylCcen = new PointType();
                double[] cenC = new double[3];
                cenC[0] = 150.0;
                cenC[1] = 0.0;
                cenC[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                cylCcen.Text = cenC[0].ToString() + ' ' + cenC[1].ToString() + ' ' + cenC[2].ToString();

                // cylinder axis
                UnitVectorType cylCvec = new UnitVectorType();
                double[] norC = new double[3];
                norC[0] = 0.0;
                norC[1] = 0.0;
                norC[2] = -1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                cylCvec.Text = norC[0].ToString() + ' ' + norC[1].ToString() + ' ' + norC[2].ToString();

                // cylinder axis
                AxisType cylCaxis = new AxisType();
                cylCaxis.AxisPoint = cylCcen;
                cylCaxis.Direction = cylCvec;
                cylCNom.Axis = cylCaxis;

                // add to list
                featNoms.Add(cylCNom);

                // make a cylinder feature item
                CylinderFeatureItemType cylCItem = new CylinderFeatureItemType();
                cylCItem.id = qifid++; // required id

                // reference to nominal
                QIFReferenceFullType cylCNomRef = new QIFReferenceFullType();
                cylCNomRef.Value = cylCNom.id;
                cylCItem.FeatureNominalId = cylCNomRef;

                // Give cylinder a name
                cylCItem.FeatureName = "DAT_C";

                // is this cylinder checked or set?
                CylinderCheckedFeatureType cylCCheck = new CylinderCheckedFeatureType();
                CylinderActualDeterminationType cylCActDet = new CylinderActualDeterminationType();
                cylCActDet.Item = cylBCheck; // this feature is checked, rather than set
                cylCItem.DeterminationMode = cylCActDet;

                // add to list
                featItems.Add(cylCItem);

                // make a cylinder feature actual
                CylinderFeatureActualType cylCAct = new CylinderFeatureActualType();
                cylCAct.id = qifid++; // required id

                // reference to item
                QIFReferenceFullType cylCItemRef = new QIFReferenceFullType();
                cylCItemRef.Value = cylCItem.id;
                cylCAct.FeatureItemId = cylCItemRef;

                // cylinder location
                ActualPointType acylCcen = new ActualPointType();
                double[] acenC = new double[3];
                acenC[0] = 150.051;
                acenC[1] = 0.0;
                acenC[2] = 0.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                acylCcen.Text = acenC[0].ToString() + ' ' + acenC[1].ToString() + ' ' + acenC[2].ToString();

                // cylinder axis
                ActualUnitVectorType acylCvec = new ActualUnitVectorType();
                double[] anorC = new double[3];
                anorC[0] = -0.0099;
                anorC[1] = 0.0099;
                anorC[2] = -0.9999;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                acylCvec.Text = anorC[0].ToString() + ' ' + anorC[1].ToString() + ' ' + anorC[2].ToString();

                // cylinder axis
                ActualAxisType acylCaxis = new ActualAxisType();
                acylCaxis.AxisPoint = acylCcen;
                acylCaxis.Direction = acylCvec;
                cylCAct.Axis = acylCaxis;

                // cylinder diameter
                ActualLinearValueType acylCDiam = new ActualLinearValueType();
                acylCDiam.Value = 12.72M;
                cylCAct.Diameter = acylCDiam;

                // add to list
                featActs.Add(cylCAct);

                // array of one reference id
                ArrayReferenceFullType datCfeats = new ArrayReferenceFullType();
                datCfeats.Id = new QIFReferenceFullType[1];
                datCfeats.n = 1;
                datCfeats.Id[0] = cylCNomRef;
                // hook to datum
                datC.FeatureNominalIds = datCfeats;

                // make a diameter characteristic item (this is not sharable)
                DiameterCharacteristicItemType diaCItem = new DiameterCharacteristicItemType();
                diaCItem.id = qifid++; // required id

                // required reference to nominal
                diaCItem.CharacteristicNominalId = diaBCNomRef; // shared nominal

                // give tolerance a name
                diaCItem.Name = "DIAM1_C";

                // point tolerance at feature
                diaCItem.FeatureItemIds = new ArrayReferenceFullType();
                diaCItem.FeatureItemIds.n = 1;
                diaCItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                diaCItem.FeatureItemIds.Id[0] = cylCItemRef;

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                diaCItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaCItem.MeasurementDeviceIds.n = 2;
                diaCItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                diaCItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                diaCItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(diaCItem);

                // make a diameter characteristic actual
                DiameterCharacteristicActualType diaCAct = new DiameterCharacteristicActualType();
                diaCAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType diaCItemRef = new QIFReferenceFullType();
                diaCItemRef.Value = diaCItem.id;
                diaCAct.CharacteristicItemId = diaCItemRef;

                // required status
                CharacteristicStatusEnumType diaCStatEnum = new CharacteristicStatusEnumType();
                diaCStatEnum = CharacteristicStatusEnumType.PASS;
                diaCAct.Status = new CharacteristicStatusType();
                diaCAct.Status.Item = diaCStatEnum;

                // actual value
                ActualLinearValueType diaCActVal = new ActualLinearValueType();
                diaCActVal.Value = 12.72M;
                diaCAct.Value = diaCActVal;

                // point actual tolerance at actual feature
                QIFReferenceFullType cylCActRef = new QIFReferenceFullType();
                cylCActRef.Value = cylCAct.id;
                diaCAct.FeatureActualIds = new ArrayReferenceFullType();
                diaCAct.FeatureActualIds.n = 1;
                diaCAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                diaCAct.FeatureActualIds.Id[0] = cylCActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                diaCAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaCAct.MeasurementDeviceIds.n = 1;
                diaCAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                diaCAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(diaCAct);

                // make a position characteristic definition
                PositionCharacteristicDefinitionType posCDef = new PositionCharacteristicDefinitionType();
                posCDef.id = qifid++; // required id

                // define the tolerance zone shape (diametrical)
                PositionDiametricalZoneType zoneCType = new PositionDiametricalZoneType();
                PositionZoneShapeType zoneCShape = new PositionZoneShapeType();
                zoneCShape.Item = zoneCType;
                posCDef.ZoneShape = zoneCShape;

                // define the tolerance zone
                LinearValueType tolCZone = new LinearValueType();
                tolCZone.Value = 0.5M;
                posCDef.ToleranceValue = tolCZone;

                // apply MMC material condition
                posCDef.MaterialCondition = MaterialModifierEnumType.MAXIMUM;

                // reference our DRF
                QIFReferenceFullType drfABDefRef = new QIFReferenceFullType();
                drfABDefRef.Value = drfAB.id;
                posCDef.DatumReferenceFrameId = drfABDefRef;

                // add to list
                charDefs.Add(posCDef);

                // make a position characteristic nominal
                PositionCharacteristicNominalType posCNom = new PositionCharacteristicNominalType();
                posCNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType posCDefRef = new QIFReferenceType();
                posCDefRef.Value = posCDef.id;
                posCNom.CharacteristicDefinitionId = posCDefRef;

                // add to list
                charNoms.Add(posCNom);

                // make a position characteristic item
                PositionCharacteristicItemType posCItem = new PositionCharacteristicItemType();
                posCItem.id = qifid++; // required id

                // required reference to nominal
                QIFReferenceFullType posCNomRef = new QIFReferenceFullType();
                posCNomRef.Value = posCNom.id;
                posCItem.CharacteristicNominalId = posCNomRef;

                // give tolerance a name
                posCItem.Name = "POSN1";

                // point tolerance at feature
                posCItem.FeatureItemIds = new ArrayReferenceFullType();
                posCItem.FeatureItemIds.n = 1;
                posCItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                posCItem.FeatureItemIds.Id[0] = cylCItemRef; // from diameter hook above

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                posCItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                posCItem.MeasurementDeviceIds.n = 2;
                posCItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                posCItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                posCItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(posCItem);

                // make a position characteristic actual
                PositionCharacteristicActualType posCAct = new PositionCharacteristicActualType();
                posCAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType posCItemRef = new QIFReferenceFullType();
                posCItemRef.Value = posCItem.id;
                posCAct.CharacteristicItemId = posCItemRef;

                // required status
                CharacteristicStatusEnumType posCStatEnum = new CharacteristicStatusEnumType();
                posCStatEnum = CharacteristicStatusEnumType.PASS;
                posCAct.Status = new CharacteristicStatusType();
                posCAct.Status.Item = posCStatEnum;

                // actual value
                ActualLinearValueType posCActVal = new ActualLinearValueType();
                posCActVal.Value = 0.102M;
                posCAct.Value = posCActVal;

                // point actual tolerance at actual feature
                posCAct.FeatureActualIds = new ArrayReferenceFullType();
                posCAct.FeatureActualIds.n = 1;
                posCAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                posCAct.FeatureActualIds.Id[0] = cylCActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                posCAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                posCAct.MeasurementDeviceIds.n = 1;
                posCAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                posCAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(posCAct);

                #endregion

                #region circle back to ABC
                // make a circle feature definition
                CircleFeatureDefinitionType circDef = new CircleFeatureDefinitionType();
                circDef.id = qifid++; // required id

                // feature size
                LinearValueType diaSize = new LinearValueType();
                diaSize.Value = 6.35M;
                circDef.Diameter = diaSize;

                // material side
                circDef.InternalExternal = InternalExternalEnumType.INTERNAL;

                // add to list
                featDefs.Add(circDef);

                // make a circle feature nominal
                CircleFeatureNominalType circNom = new CircleFeatureNominalType();
                circNom.id = qifid++; // required id

                // reference to definition
                QIFReferenceType circDefRef = new QIFReferenceType();
                circDefRef.Value = circDef.id;
                circNom.FeatureDefinitionId = circDefRef;

                // circle location
                circNom.Location = new PointType();
                double[] cen = new double[3];
                cen[0] = 90.0;
                cen[1] = 50.0;
                cen[2] = -1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                circNom.Location.Text = cen[0].ToString() + ' ' + cen[1].ToString() + ' ' + cen[2].ToString();

                // circle normal
                circNom.Normal = new UnitVectorType();
                double[] nor = new double[3];
                nor[0] = 0.0;
                nor[1] = 0.0;
                nor[2] = 1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                circNom.Normal.Text = nor[0].ToString() + ' ' + nor[1].ToString() + ' ' + nor[2].ToString();

                // add to list
                featNoms.Add(circNom);

                // make a circle feature item
                CircleFeatureItemType circItem = new CircleFeatureItemType();
                circItem.id = qifid++; // required id

                // reference to definition
                QIFReferenceFullType circNomRef = new QIFReferenceFullType();
                circNomRef.Value = circNom.id;
                circItem.FeatureNominalId = circNomRef;

                // Give circle a name
                circItem.FeatureName = "CIRC1";

                // is this circle checked or set?
                CircleCheckedFeatureType circCheck = new CircleCheckedFeatureType();
                CircleActualDeterminationType circActDet = new CircleActualDeterminationType();
                circActDet.Item = circCheck; // this feature is checked, rather than set
                circItem.DeterminationMode = circActDet;

                // add to list
                featItems.Add(circItem);

                // make a circle feature actual
                CircleFeatureActualType circAct = new CircleFeatureActualType();
                circAct.id = qifid++; // required id

                // reference to item
                QIFReferenceFullType circItemRef = new QIFReferenceFullType();
                circItemRef.Value = circItem.id;
                circAct.FeatureItemId = circItemRef;

                // circle location
                circAct.Location = new ActualPointType();
                double[] acen = new double[3];
                acen[0] = 90.015;
                acen[1] = 49.973;
                acen[2] = -1.0; 
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                circAct.Location.Text = acen[0].ToString() + ' ' + acen[1].ToString() + ' ' + acen[2].ToString();

                // circle normal
                circAct.Normal = new ActualUnitVectorType();
                double[] anor = new double[3];
                anor[0] = 0.0;
                anor[1] = 0.0;
                anor[2] = 1.0;
                // Microsoft XSD.exe limitation requires element of list type to be managed as space delimited string
                circAct.Normal.Text = anor[0].ToString() + ' ' + anor[1].ToString() + ' ' + anor[2].ToString();

                // feature size
                ActualLinearValueType adiaSize = new ActualLinearValueType();
                adiaSize.Value = 6.2M;
                circAct.Diameter = adiaSize;

                // add to list
                featActs.Add(circAct);

                // make a diameter characteristic definition
                DiameterCharacteristicDefinitionType diaDef = new DiameterCharacteristicDefinitionType();
                diaDef.id = qifid++; // required id

                // tolerance (as opposed to limits and fits, or non-tolerance
                LinearValueType highSize = new LinearValueType();
                highSize.Value = 6.5M;
                LinearValueType lowSize = new LinearValueType();
                lowSize.Value = 6.3M;
                LinearToleranceType diaTol = new LinearToleranceType();
                diaTol.DefinedAsLimit = true;
                diaTol.Items = new object[2];
                diaTol.ItemsElementName = new ItemsChoiceType4[2];
                diaTol.Items[0] = highSize;
                diaTol.ItemsElementName[0] = ItemsChoiceType4.MaxValue;
                diaTol.Items[1] = lowSize;
                diaTol.ItemsElementName[1] = ItemsChoiceType4.MinValue;
                diaDef.Item = diaTol;

                // add to list
                charDefs.Add(diaDef);

                // make a diameter characteristic nominal
                DiameterCharacteristicNominalType diaNom = new DiameterCharacteristicNominalType();
                diaNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType diaDefRef = new QIFReferenceType();
                diaDefRef.Value = diaDef.id;
                diaNom.CharacteristicDefinitionId = diaDefRef;

                // nominal value
                //diaNom.TargetValue = diaSize;

                // add to list
                charNoms.Add(diaNom);

                // make a diameter characteristic item
                DiameterCharacteristicItemType diaItem = new DiameterCharacteristicItemType();
                diaItem.id = qifid++; // required id

                // required reference to nominal
                QIFReferenceFullType diaNomRef = new QIFReferenceFullType();
                diaNomRef.Value = diaNom.id;
                diaItem.CharacteristicNominalId = diaNomRef;

                // give tolerance a name
                diaItem.Name = "DIAM2";

                // point tolerance at feature
                diaItem.FeatureItemIds = new ArrayReferenceFullType();
                diaItem.FeatureItemIds.n = 1;
                diaItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                diaItem.FeatureItemIds.Id[0] = circItemRef;

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                diaItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaItem.MeasurementDeviceIds.n = 2;
                diaItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                diaItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                diaItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(diaItem);

                // make a diameter characteristic actual
                DiameterCharacteristicActualType diaAct = new DiameterCharacteristicActualType();
                diaAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType diaItemRef = new QIFReferenceFullType();
                diaItemRef.Value = diaItem.id;
                diaAct.CharacteristicItemId = diaItemRef;

                // required status
                CharacteristicStatusEnumType diaStatEnum = new CharacteristicStatusEnumType();
                diaStatEnum = CharacteristicStatusEnumType.FAIL;
                diaAct.Status = new CharacteristicStatusType();
                diaAct.Status.Item = diaStatEnum;

                // actual value
                ActualLinearValueType diaActVal = new ActualLinearValueType();
                diaActVal.Value = 6.2M;
                diaAct.Value = diaActVal;

                // point tolerance actual at feature actual
                QIFReferenceFullType circActRef = new QIFReferenceFullType();
                circActRef.Value = circAct.id;
                diaAct.FeatureActualIds = new ArrayReferenceFullType();
                diaAct.FeatureActualIds.n = 1;
                diaAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                diaAct.FeatureActualIds.Id[0] = circActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                diaAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                diaAct.MeasurementDeviceIds.n = 1;
                diaAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                diaAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(diaAct);

                // make a position characteristic definition
                PositionCharacteristicDefinitionType posDef = new PositionCharacteristicDefinitionType();
                posDef.id = qifid++; // required id

                // define the tolerance zone shape (diametrical)
                PositionDiametricalZoneType zoneType = new PositionDiametricalZoneType();
                PositionZoneShapeType zoneShape = new PositionZoneShapeType();
                zoneShape.Item = zoneType;
                posDef.ZoneShape = zoneShape;

                // define the tolerance zone
                LinearValueType tolZone = new LinearValueType();
                tolZone.Value = 0.75M;
                posDef.ToleranceValue = tolZone;

                // apply MMC material condition
                posDef.MaterialCondition = MaterialModifierEnumType.MAXIMUM;

                // reference our DRF
                QIFReferenceFullType drfDefRef = new QIFReferenceFullType();
                drfDefRef.Value = drfABC.id;
                posDef.DatumReferenceFrameId = drfDefRef;

                // add to list
                charDefs.Add(posDef);

                // make a position characteristic nominal
                PositionCharacteristicNominalType posNom = new PositionCharacteristicNominalType();
                posNom.id = qifid++; // required id

                // required reference to definition
                QIFReferenceType posDefRef = new QIFReferenceType();
                posDefRef.Value = posDef.id;
                posNom.CharacteristicDefinitionId = posDefRef;

                // add to list
                charNoms.Add(posNom);

                // make a position characteristic item
                PositionCharacteristicItemType posItem = new PositionCharacteristicItemType();
                posItem.id = qifid++; // required id

                //LocationOnDrawingType loc = new LocationOnDrawingType();
                //loc.Items = new object[2];
                //loc.ItemsElementName = new ItemsChoiceType2[2];
                //QIFReferenceFullType drawId = new QIFReferenceFullType();
                //drawId.Value = 1;
                //loc.Items[0] = drawId;
                //loc.ItemsElementName[0] = ItemsChoiceType2.DrawingId;
                //string zone = "{X=648,Y=169,Width=105,Height=55} Image ID = 1";
                //loc.Items[1] = zone;
                //loc.ItemsElementName[1] = ItemsChoiceType2.DrawingZone;

                //posItem.LocationOnDrawing = loc;

                // required reference to nominal
                QIFReferenceFullType posNomRef = new QIFReferenceFullType();
                posNomRef.Value = posNom.id;
                posItem.CharacteristicNominalId = posNomRef;

                // give tolerance a name
                posItem.Name = "POSN2";

                // point tolerance at feature
                posItem.FeatureItemIds = new ArrayReferenceFullType();
                posItem.FeatureItemIds.n = 1;
                posItem.FeatureItemIds.Id = new QIFReferenceFullType[1];
                posItem.FeatureItemIds.Id[0] = circItemRef; // from diameter

                // add our measurement devices (this is a list of devices that could measure the characteristic)
                posItem.MeasurementDeviceIds = new ArrayReferenceFullType();
                posItem.MeasurementDeviceIds.n = 2;
                posItem.MeasurementDeviceIds.Id = new QIFReferenceFullType[2];
                posItem.MeasurementDeviceIds.Id[0] = cmm1Ref;
                posItem.MeasurementDeviceIds.Id[1] = cmm2Ref;

                // add to list
                charItems.Add(posItem);

                // make a position characteristic actual
                PositionCharacteristicActualType posAct = new PositionCharacteristicActualType();
                posAct.id = qifid++; // required id

                // required reference to item
                QIFReferenceFullType posItemRef = new QIFReferenceFullType();
                posItemRef.Value = posItem.id;
                posAct.CharacteristicItemId = posItemRef;

                // required status
                CharacteristicStatusEnumType posStatEnum = new CharacteristicStatusEnumType();
                posStatEnum = CharacteristicStatusEnumType.PASS;
                posAct.Status = new CharacteristicStatusType();
                posAct.Status.Item = posStatEnum;

                // actual value
                ActualLinearValueType posActVal = new ActualLinearValueType();
                posActVal.Value = 0.0025M;
                posAct.Value = posActVal;

                // point actual tolerance at actual feature
                posAct.FeatureActualIds = new ArrayReferenceFullType();
                posAct.FeatureActualIds.n = 1;
                posAct.FeatureActualIds.Id = new QIFReferenceFullType[1];
                posAct.FeatureActualIds.Id[0] = circActRef;

                // add our measurement device (this is the device that actually measured the characteristic)
                posAct.MeasurementDeviceIds = new ArrayReferenceFullType();
                posAct.MeasurementDeviceIds.n = 1;
                posAct.MeasurementDeviceIds.Id = new QIFReferenceFullType[1];
                posAct.MeasurementDeviceIds.Id[0] = cmm2Ref;

                // add to list
                charActs.Add(posAct);

                #endregion

                #region sandbox
                #endregion

                #region QIF document
                /// Assemble the QIF document

                // make a new QIF document
                QIFDocumentType qifdoc = new QIFDocumentType();

                // create and assign the QPId
                Guid g = Guid.NewGuid();
                qifdoc.QPId = g.ToString();

                // add some application identifying information
                qifdoc.Header = new QIFDocumentHeaderType();
                qifdoc.Header.Application = new ApplicationType();
                qifdoc.Header.Application.Name = "QIFdotNet open source QIF application";
                qifdoc.Header.Application.Organization = "Dimensional Metrology Standards Consortium (DMSC)";


                // QIF units are SI units unless otherwise specified
                qifdoc.FileUnits = new FileUnitsType();
                qifdoc.FileUnits.PrimaryUnits = new PrimaryUnitsType();
                qifdoc.FileUnits.PrimaryUnits.LinearUnit = new LinearUnitType();
                qifdoc.FileUnits.PrimaryUnits.LinearUnit.SIUnitName = "meter";
                qifdoc.FileUnits.PrimaryUnits.LinearUnit.UnitName = "mm";
                qifdoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion = new UnitConversionType();
                qifdoc.FileUnits.PrimaryUnits.LinearUnit.UnitConversion.Factor = 0.001M;

                // add our measurement devices
                qifdoc.MeasurementResources = new MeasurementResourcesType();
                qifdoc.MeasurementResources.MeasurementDevices = new MeasurementDevicesType();
                qifdoc.MeasurementResources.MeasurementDevices.n = (uint)measDevices.Count();
                qifdoc.MeasurementResources.MeasurementDevices.MeasurementDevice = new MeasurementDeviceType[measDevices.Count()];
                for (int i = 0; i < measDevices.Count(); i++) qifdoc.MeasurementResources.MeasurementDevices.MeasurementDevice[i] = measDevices[i];

                // Create the datum definitions list
                qifdoc.DatumDefinitions = new DatumDefinitionsType();
                qifdoc.DatumDefinitions.n = (uint)datumDefs.Count();
                qifdoc.DatumDefinitions.DatumDefinition = new DatumDefinitionType[datumDefs.Count()];
                for (int i = 0; i < datumDefs.Count(); i++) qifdoc.DatumDefinitions.DatumDefinition[i] = datumDefs[i];

                // Create the datum reference frame list
                qifdoc.DatumReferenceFrames = new DatumReferenceFramesType();
                qifdoc.DatumReferenceFrames.n = (uint)drfDefs.Count();
                qifdoc.DatumReferenceFrames.DatumReferenceFrame = new DatumReferenceFrameType[drfDefs.Count()];
                for (int i = 0; i < drfDefs.Count(); i++) qifdoc.DatumReferenceFrames.DatumReferenceFrame[i] = drfDefs[i];

                // Create the features aspects element
                qifdoc.Features = new FeatureAspectsListsType();

                // Feature Definitions
                qifdoc.Features.FeatureDefinitions = new FeatureDefinitionsType();
                qifdoc.Features.FeatureDefinitions.n = (uint)featDefs.Count();
                qifdoc.Features.FeatureDefinitions.FeatureDefinition = new FeatureDefinitionBaseType[featDefs.Count()];
                for (int i = 0; i < featDefs.Count(); i++) qifdoc.Features.FeatureDefinitions.FeatureDefinition[i] = featDefs[i];

                // Feature Nominals
                qifdoc.Features.FeatureNominals = new FeatureNominalsType();
                qifdoc.Features.FeatureNominals.n = (uint)featNoms.Count();
                qifdoc.Features.FeatureNominals.FeatureNominal = new FeatureNominalBaseType[featNoms.Count()];
                for (int i = 0; i < featNoms.Count(); i++) qifdoc.Features.FeatureNominals.FeatureNominal[i] = featNoms[i];

                // Feature Items
                qifdoc.Features.FeatureItems = new FeatureItemsType();
                qifdoc.Features.FeatureItems.n = (uint)featItems.Count();
                qifdoc.Features.FeatureItems.FeatureItem = new FeatureItemBaseType[featItems.Count()];
                for (int i = 0; i < featItems.Count(); i++) qifdoc.Features.FeatureItems.FeatureItem[i] = featItems[i];

                // Create the characteristics aspects element
                qifdoc.Characteristics = new CharacteristicAspectsListsType();

                // required GD&T standard
                qifdoc.Characteristics.FormalStandard = new FormalStandardType();
                qifdoc.Characteristics.FormalStandard.Item = FormalStandardEnumType.ASMEY1451994;

                // Characteristic Definitions
                qifdoc.Characteristics.CharacteristicDefinitions = new CharacteristicDefinitionsType();
                qifdoc.Characteristics.CharacteristicDefinitions.n = (uint)charDefs.Count();
                qifdoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition = new CharacteristicDefinitionBaseType[charDefs.Count()];
                for(int i=0;i< charDefs.Count(); i++) qifdoc.Characteristics.CharacteristicDefinitions.CharacteristicDefinition[i] = charDefs[i];

                // Characteristic Nominals
                qifdoc.Characteristics.CharacteristicNominals = new CharacteristicNominalsType();
                qifdoc.Characteristics.CharacteristicNominals.n = (uint)charNoms.Count();
                qifdoc.Characteristics.CharacteristicNominals.CharacteristicNominal = new CharacteristicNominalBaseType[charNoms.Count()];
                for (int i = 0; i < charNoms.Count(); i++) qifdoc.Characteristics.CharacteristicNominals.CharacteristicNominal[i] = charNoms[i];

                // Characteristic Items
                qifdoc.Characteristics.CharacteristicItems = new CharacteristicItemsType();
                qifdoc.Characteristics.CharacteristicItems.n = (uint)charItems.Count();
                qifdoc.Characteristics.CharacteristicItems.CharacteristicItem = new CharacteristicItemBaseType[charItems.Count()];
                for (int i = 0; i < charItems.Count(); i++) qifdoc.Characteristics.CharacteristicItems.CharacteristicItem[i] = charItems[i];

                // create the measurement results
                MeasurementResultsType measResults = new MeasurementResultsType();
                measResults.id = qifid++; // required id

                // overall inspection status
                InspectionStatusEnumType overallStatEnum = new InspectionStatusEnumType();
                overallStatEnum = InspectionStatusEnumType.FAIL;
                measResults.InspectionStatus = new InspectionStatusType();
                measResults.InspectionStatus.Item = overallStatEnum;

                // measured features
                measResults.MeasuredFeatures = new MeasuredFeaturesType();
                measResults.MeasuredFeatures.FeatureActuals = new FeatureActualsType();
                measResults.MeasuredFeatures.FeatureActuals.n = (uint)featActs.Count();
                measResults.MeasuredFeatures.FeatureActuals.FeatureActual = new FeatureActualBaseType[featActs.Count()];
                for (int i = 0; i < featActs.Count(); i++) measResults.MeasuredFeatures.FeatureActuals.FeatureActual[i] = featActs[i];

                // measured characteristics
                measResults.MeasuredCharacteristics = new MeasuredCharacteristicsType();
                measResults.MeasuredCharacteristics.CharacteristicActuals = new CharacteristicActualsType();
                measResults.MeasuredCharacteristics.CharacteristicActuals.n = (uint)charActs.Count();
                measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual = new CharacteristicActualBaseType[charActs.Count()];
                for (int i = 0; i < charActs.Count(); i++) measResults.MeasuredCharacteristics.CharacteristicActuals.CharacteristicActual[i] = charActs[i];

                // add measured results to list of measured results
                qifdoc.MeasurementsResults = new MeasurementsResultsType();
                qifdoc.MeasurementsResults.MeasurementResultsSet = new MeasurementResultsSetType();
                qifdoc.MeasurementsResults.MeasurementResultsSet.n = 1;
                qifdoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults = new MeasurementResultsType[1];
                qifdoc.MeasurementsResults.MeasurementResultsSet.MeasurementResults[0] = measResults;

                // add a plan
                UnorderedActionGroupType planRoot = new UnorderedActionGroupType();
                planRoot.Steps = new UnnumberedPlanElementsType();
                planRoot.Steps.n = 1;
                planRoot.Steps.PlanElement = new PlanElementBaseType[1];
                MeasureEvaluateAllActionType measAll = new MeasureEvaluateAllActionType();
                planRoot.Steps.PlanElement[0] = measAll;
                qifdoc.MeasurementPlan = new MeasurementPlanType();
                qifdoc.MeasurementPlan.PlanRoot = planRoot;

                // write idMax
                qifdoc.idMax = qifid - 1;
                #endregion

                SaveFileDialog saveFileDialog1 = new SaveFileDialog();
                saveFileDialog1.Filter = "QIF Documents|*.qif";
                saveFileDialog1.Title = "Save a QIF file:";

                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    // write the document
                    var xmlserializer = new XmlSerializer(typeof(QIFDocumentType));
                    TextWriter putstream = new StreamWriter(saveFileDialog1.FileName);
                    xmlserializer.Serialize(putstream, qifdoc);
                    putstream.Close();

                    // lets have a look
                    System.Diagnostics.Process.Start("notepad.exe", saveFileDialog1.FileName);
                }
            }
            catch (Exception ex)
            {
                // place a debug break point here and explore ex in the watch window to debug errors in your implementation
                int i = 1;
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            QifDocumentTypeCall();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            QifDocumentCreateCall();
        }
    }
}
