
// QIF_CPlusPlusDlg.cpp : implementation file
//

#include "stdafx.h"

// set up QIF macros and includes
#define QIF_STATIC_LIBS // we're using a static library
#include "QIFDocument.hxx" // include the CodeSynthesis generated QIF bindings

// set up QIF namespaces
using namespace std;
using namespace xsd;
using namespace xsd::qif21;

#include "QIF_CPlusPlus.h"
#include "QIF_CPlusPlusDlg.h"
#include "afxdialogex.h"

#include <memory>   // std::auto_ptr
#include <iostream>
#include <fstream>

#pragma region Auto-generated boiler plate (mostly)

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CQIF_CPlusPlusDlg dialog




CQIF_CPlusPlusDlg::CQIF_CPlusPlusDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CQIF_CPlusPlusDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CQIF_CPlusPlusDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CQIF_CPlusPlusDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_READQIF, &CQIF_CPlusPlusDlg::OnBnClickedReadqif)
	ON_BN_CLICKED(IDC_WRITEQIF, &CQIF_CPlusPlusDlg::OnBnClickedWriteqif)
END_MESSAGE_MAP()


// CQIF_CPlusPlusDlg message handlers

BOOL CQIF_CPlusPlusDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CQIF_CPlusPlusDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CQIF_CPlusPlusDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CQIF_CPlusPlusDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

#pragma endregion Auto-generated boiler plate (mostly)

#pragma region function GetDatumDefinitions
// Populates string datdef with DMIS datum definition(s), e.g., "DATDEF/FA(PLANE1),DAT(A)"
// Inputs are the QIF Document as qifDoc, the feature nominal QIF id as nomid and the feature label as falabel, e.g., "FA(PLANE1)"
//
// The datum definition list is traversed looking for a reference back to the specified feature
void CQIF_CPlusPlusDlg::GetDatumDefinitions(QIFDocumentType &qifDoc, long nomid, CString &falabel, CString &datdef)
{
	if (qifDoc.DatumDefinitions() != NULL) // make sure we have (optional) datum definitions
	{
		for(DatumDefinitionsType::DatumDefinition_iterator datIter(qifDoc.DatumDefinitions()->DatumDefinition().begin()); datIter != qifDoc.DatumDefinitions()->DatumDefinition().end(); ++datIter) // walk through the datum definition list (demonstrates iterator method)
		{
			if (datIter->FeatureNominalIds() != NULL) // make sure datum definition has (optional) hook(s) to feature nominal(s) via QIF id(s)
			{
				for(ArrayReferenceFullType::Id_iterator idIter(datIter->FeatureNominalIds()->Id().begin()); idIter != datIter->FeatureNominalIds()->Id().end(); ++idIter) // walk through the list of feature nominal ids
				{
					if (*idIter == nomid) // check for id match
					{
						// compose DMIS datum definition
						datdef += _T("DATDEF/");
						datdef += falabel;
						datdef += _T(",DAT(");
						datdef += datIter->DatumLabel().c_str();
						datdef += _T(")\n");
					}
				}
			}
		}
	}
}
#pragma endregion function GetDatumDefinitions

#pragma region function GetDatumReferenceFrame
// Populates string drfstr with a DMIS drf representation, e.g. ",DAT(A),DAT(B),MMC,DAT(C),MMC"
// Inputs are the QIF Document as qifDoc and the QIF id of the drf as drfid
//
// The datum reference frame definition list is traversed looking for the specified id, datum precidence and materal condition
// are found and combined with the datum label found by traversing the datum definition list
void CQIF_CPlusPlusDlg::GetDatumReferenceFrame(QIFDocumentType &qifDoc, long drfid, CString &drfstr)
{
	if (qifDoc.DatumReferenceFrames() != NULL && // make sure we have (optional) datum definitions and datum reference frame definitions
		  qifDoc.DatumDefinitions() != NULL)
	{
		for(DatumReferenceFramesType::DatumReferenceFrame_iterator drfIter(qifDoc.DatumReferenceFrames()->DatumReferenceFrame().begin()); drfIter != qifDoc.DatumReferenceFrames()->DatumReferenceFrame().end(); ++drfIter) // walk through the drf list
		{
			if (drfIter->id() == drfid) // we found the drf we're looking for
			{
				// DMIS supports up to 3 datums
				CString primary = _T("");
				CString secondary = _T("");
				CString tertiary = _T("");
				// Generic holder until we figure out this datum's precidence
				CString datum = _T("");
				if (drfIter->Datums() != NULL) // make sure this srf has (optional) datum list
				{
					for(int i=0;i<(int)drfIter->Datums()->Datum().size();i++) // walk through the datum list (demonstrates index method)
					{
						DatumWithPrecedenceType dwp(drfIter->Datums()->Datum().at(i));
						if (dwp.SimpleDatum() != NULL) // is this a simple datum? (as opposed to compound and datum features)
						{
							if(qifDoc.DatumDefinitions() != NULL) { // do we have optional datum definition list?
								for(DatumDefinitionsType::DatumDefinition_iterator datIter(qifDoc.DatumDefinitions()->DatumDefinition().begin()); datIter != qifDoc.DatumDefinitions()->DatumDefinition().end(); ++datIter) // walk through the datum definition list
								{
									if (dwp.SimpleDatum()->DatumDefinitionId() == datIter->id()) // do we have an id match?
									{
										datum = _T(",DAT(");
										datum += datIter->DatumLabel().c_str(); // capture the datum label
										datum += _T(")");
									}
								}
								switch (dwp.SimpleDatum()->MaterialModifier()) // append material condition modifier as appropriate
								{
								case MaterialModifierEnumType::MAXIMUM:
									datum += _T(",MMC");
									break;
								case MaterialModifierEnumType::LEAST:
									datum += _T(",LMC");
									break;
								case MaterialModifierEnumType::REGARDLESS:
									datum += _T(",RFS");
									break;
								}
								if (dwp.Precedence().PrecedenceEnum() != NULL) // we only handle the enumeration, make sure it's there
								{
									switch (*dwp.Precedence().PrecedenceEnum()) // populate specific datum precidence with holder string
									{
									case PrecedenceEnumType::PRIMARY:
										primary = datum;
										break;
									case PrecedenceEnumType::SECONDARY:
										secondary = datum;
										break;
									case PrecedenceEnumType::TERTIARY:
										tertiary = datum;
										break;
									}
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
#pragma endregion function GetDatumReferenceFrame

#pragma region function GetTolerances
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
void CQIF_CPlusPlusDlg::GetTolerances(QIFDocumentType &qifDoc, long actfeatid, CString &tlabels, CString &talabels, CString &tdefs, CString &tadefs)
{
	CString wrkstr;
	if (qifDoc.Characteristics() != NULL && // make sure we have(optional) characteristics and measurements
		qifDoc.Characteristics()->CharacteristicItems() != NULL &&
		qifDoc.MeasurementsResults() != NULL &&
		qifDoc.MeasurementsResults()->MeasurementResultsSet().MeasurementResults().size() > 0)
	{
		// let's just look at the first set of measurement results
		MeasurementResultsType measResults = qifDoc.MeasurementsResults()->MeasurementResultsSet().MeasurementResults()[0];
		if (measResults.MeasuredFeatures() != NULL &&
			  measResults.MeasuredCharacteristics() != NULL)
		{
			// walk through actual characteristics to get characteristics applied to this actual feature actfeatid
			for (int i = 0; i < measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual().size(); i++)
			{
				if(measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i].FeatureActualIds() != NULL) // characteristics optionally point at features
				{
					for (int j = 0; j < measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i].FeatureActualIds()->Id().size(); j++) // walk through feature references
					{
						if (measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i].FeatureActualIds()->Id()[j] == actfeatid) // look for a match
						{
							// find the item, nominal and definition for this actual characteristic
							for (int k = 0; k < qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem().size(); k++) // walk through characteristic items
							{
								if (qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k].id() == measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i].CharacteristicItemId()) // looking for the item referenced by the actual
								{
									for (int m = 0; m < qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal().size(); m++) // walk through characteristic nominals
									{
										if (qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k].CharacteristicNominalId() == qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m].id()) // looking for the nominal referenced by the item
										{
											for (int n = 0; n < qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition().size(); n++) // walk through characteristic definitions
											{
												if (qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m].CharacteristicDefinitionId() == qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition()[n].id()) // looking for the definition referenced by the nominal
												{
													// we have all four aspects, check their types (which should all match)
													if(DiameterCharacteristicActualType *diaAct = dynamic_cast<DiameterCharacteristicActualType *> (&(measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i])))
													{
													  DiameterCharacteristicItemType *diaItem = dynamic_cast<DiameterCharacteristicItemType *> (&(qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k]));
													  DiameterCharacteristicNominalType *diaNom = dynamic_cast<DiameterCharacteristicNominalType *> (&(qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m]));
													  DiameterCharacteristicDefinitionType *diaDef = dynamic_cast<DiameterCharacteristicDefinitionType *> (&(qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition()[n]));
														if(diaItem != NULL && diaNom != NULL && diaDef != NULL)
														{
															// we have a set of matched diameter types
															if (diaDef->Tolerance() != NULL) // this could be a limit&fit or tolerance definition
															{
																// just min, just max, or both min+max may be defined in QIF, DMIS needs both
																double hitol = 0;
																double lotol = 0;
																if(diaDef->Tolerance()->MaxValue()) hitol = *diaDef->Tolerance()->MaxValue();
																if(diaDef->Tolerance()->MinValue()) lotol = *diaDef->Tolerance()->MinValue();
																if (diaDef->Tolerance()->DefinedAsLimit()) // limit specification?
																{
																	// DMIS doesn't support limit tolerance for diameter
																	if (diaNom->TargetValue() != NULL) // do we have a target value?
																	{
																		// convert min and max from limit to +/- tols
																		hitol = hitol - *diaNom->TargetValue();
																		lotol = lotol - *diaNom->TargetValue();
																	}
																	else
																	{
																		// assume target is between limits
																		double diam = (hitol + lotol) / 2;
																		hitol = hitol - diam;
																		lotol = lotol - diam;
																	}
																}
																// compose the nominal DMIS tolerance label T(DIAM1)
																wrkstr.Format(_T(",T(%s)"), diaItem->Name().c_str());
																tlabels += wrkstr;
																// compose the nominal DMIS tolerance T(DIAM1)=TOL/DIAM,-.1,.1
																wrkstr.Format(_T("T(%s)=TOL/DIAM,%g,%g\n"), diaItem->Name().c_str(), lotol, hitol);
																tdefs += wrkstr;
																if (diaAct->Value() != NULL) // do we have the optional actual value?
																	{
																	// compose the actual DMIS tolerance label TA(DIAM1)
																	wrkstr.Format(_T(",TA(%s)"), diaItem->Name().c_str());
																	talabels += wrkstr;
																	// compose the actual DMIS tolerance TA(DIAM1)=TOL/DIAM,-.05,INTOL
																	wrkstr.Format(_T("TA(%s)=TOL/DIAM,%g"), diaItem->Name().c_str(), (double)*diaAct->Value());
																	tadefs += wrkstr;
																	if (diaAct->Status().CharacteristicStatusEnum() != NULL) // we are only going to handle the enumeration
																	{
																		if (*diaAct->Status().CharacteristicStatusEnum() == CharacteristicStatusEnumType::PASS) tadefs += _T(",INTOL");
																		else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																	}
																	else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																	tadefs += _T("\n");
																}
															}
														}
													}
													else if(FlatnessCharacteristicActualType *flatAct = dynamic_cast<FlatnessCharacteristicActualType *> (&(measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i])))
													{
													  FlatnessCharacteristicItemType *flatItem = dynamic_cast<FlatnessCharacteristicItemType *> (&(qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k]));
													  FlatnessCharacteristicNominalType *flatNom = dynamic_cast<FlatnessCharacteristicNominalType *> (&(qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m]));
													  FlatnessCharacteristicDefinitionType *flatDef = dynamic_cast<FlatnessCharacteristicDefinitionType *> (&(qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition()[n]));
														if(flatItem != NULL && flatNom != NULL && flatDef != NULL)
														{
															// we have a set of matched flatness types
															// we're going to cheat and just grab the tolerance zone neglecting any per-area requirements
															// compose the nominal DMIS tolerance label T(FLAT1)
															wrkstr.Format(_T(",T(%s)"), flatItem->Name().c_str());
															tlabels += wrkstr;
															// compose the nominal DMIS tolerance T(FLAT1)=TOL/FLAT,.1
															wrkstr.Format(_T("T(%s)=TOL/FLAT,"), flatItem->Name().c_str());
															tdefs += wrkstr;
															if (flatDef->ToleranceValue() != NULL) // this can be zone, or zone + per unit area
															{
																wrkstr.Format(_T("%g\n"), (double)*flatDef->ToleranceValue());
																tdefs += wrkstr;
															}
															else if (flatDef->ToleranceZonePerUnitArea()) // this will be per unit area
															{
																wrkstr.Format(_T("%g\n"), (double)flatDef->ToleranceZonePerUnitArea()->ToleranceValuePerUnit());
																tdefs += wrkstr;
															}
															else // should never happen
															{
																tdefs += _T("0\n");
															}
															if (flatAct->Value() != NULL) // do we have the optional actual value?
															{
																// compose the actual DMIS tolerance label TA(FLAT1)
																wrkstr.Format(_T(",TA(%s)"), flatItem->Name().c_str());
																talabels += wrkstr;
																// compose the actual DMIS tolerance TA(FLAT1)=TOL/FLAT,.05,INTOL
																wrkstr.Format(_T("TA(%s)=TOL/FLAT,%g"), flatItem->Name().c_str(), (double)*flatAct->Value());
																tadefs += wrkstr;
																if (flatAct->Status().CharacteristicStatusEnum() != NULL) // we are only going to handle the enumeration
																{
																	if(*flatAct->Status().CharacteristicStatusEnum() == CharacteristicStatusEnumType::PASS) tadefs += _T(",INTOL");
																	else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																}
																else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																tadefs += _T("\n");
															}
														}
													}
													if(PerpendicularityCharacteristicActualType *perpAct = dynamic_cast<PerpendicularityCharacteristicActualType *> (&(measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i])))
													{
													  PerpendicularityCharacteristicItemType *perpItem = dynamic_cast<PerpendicularityCharacteristicItemType *> (&(qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k]));
													  PerpendicularityCharacteristicNominalType *perpNom = dynamic_cast<PerpendicularityCharacteristicNominalType *> (&(qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m]));
													  PerpendicularityCharacteristicDefinitionType *perpDef = dynamic_cast<PerpendicularityCharacteristicDefinitionType *> (&(qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition()[n]));
														if (perpItem != NULL && perpNom != NULL && perpDef != NULL)
														{
															// we have a set of matched perpendicularity types
															// compose the nominal DMIS tolerance label T(PERP1)
															wrkstr.Format(_T(",T(%s)"), perpItem->Name().c_str());
															tlabels += wrkstr;
															// compose the nominal DMIS tolerance T(PERP1)=TOL/PERP,.1,MMC,DAT(A)
															wrkstr.Format(_T("T(%s)=TOL/PERP,%g"), perpItem->Name().c_str(), (double)perpDef->ToleranceValue());
															tdefs += wrkstr;
															// material modifier for tolerance value
															if (perpDef->MaterialCondition() == MaterialModifierEnumType::MAXIMUM) tdefs += _T(",MMC");
															else if (perpDef->MaterialCondition() == MaterialModifierEnumType::LEAST) tdefs += _T(",LMC");
															else if (perpDef->MaterialCondition() == MaterialModifierEnumType::REGARDLESS) tdefs += _T(",RFS");
															// get the DRF string
															CString drfStr = _T("");
															if (perpDef->DatumReferenceFrameId() != NULL) // DRF is optional
																GetDatumReferenceFrame(qifDoc, *perpDef->DatumReferenceFrameId(), drfStr);
															tdefs += drfStr;
															tdefs += _T("\n");
															if (perpAct->Value() != NULL) // do we have the optional actual value?
															{
																// compose the actual DMIS tolerance label TA(PERP1)
																wrkstr.Format(_T(",TA(%s)"), perpItem->Name().c_str());
																talabels += wrkstr;
																// compose the actual DMIS tolerance TA(PERP1)=TOL/PERP,.05,INTOL,MMC,DAT(A)
																wrkstr.Format(_T("TA(%s)=TOL/PERP,%g"), perpItem->Name().c_str(), (double)*perpAct->Value());
																tadefs += wrkstr;
																if (perpAct->Status().CharacteristicStatusEnum() != NULL) // we are only going to handle the enumeration
																{
																	if (*perpAct->Status().CharacteristicStatusEnum() == CharacteristicStatusEnumType::PASS) tadefs += _T(",INTOL");
																	else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																}
																else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																// material modifier for tolerance value, again
																if (perpDef->MaterialCondition() == MaterialModifierEnumType::MAXIMUM) tadefs += _T(",MMC");
																else if (perpDef->MaterialCondition() == MaterialModifierEnumType::LEAST) tadefs += _T(",LMC");
																else if (perpDef->MaterialCondition() == MaterialModifierEnumType::REGARDLESS) tadefs += _T(",RFS");
																tadefs += drfStr; // reuse the DRF string
																tadefs += _T("\n");
															}
														}
													}
													else if(PositionCharacteristicActualType *posAct = dynamic_cast<PositionCharacteristicActualType *> (&(measResults.MeasuredCharacteristics()->CharacteristicActuals().CharacteristicActual()[i])))
													{
													  PositionCharacteristicItemType *posItem = dynamic_cast<PositionCharacteristicItemType *> (&(qifDoc.Characteristics()->CharacteristicItems()->CharacteristicItem()[k]));
													  PositionCharacteristicNominalType *posNom = dynamic_cast<PositionCharacteristicNominalType *> (&(qifDoc.Characteristics()->CharacteristicNominals().CharacteristicNominal()[m]));
													  PositionCharacteristicDefinitionType *posDef = dynamic_cast<PositionCharacteristicDefinitionType *> (&(qifDoc.Characteristics()->CharacteristicDefinitions().CharacteristicDefinition()[n]));
														if (posAct != NULL && posItem != NULL && posNom != NULL && posDef != NULL)
														{
															// we have a set of matched position types
															// compose the nominal DMIS tolerance label T(POS1)
															wrkstr.Format(_T(",T(%s)"), posItem->Name().c_str());
															tlabels += wrkstr;
															// compose the nominal DMIS tolerance T(POS1)=TOL/POS,.1,MMC,DAT(A),DAT(B),MMC
															wrkstr.Format(_T("T(%s)=TOL/POS,3D,%g"), posItem->Name().c_str(), (double)posDef->ToleranceValue()); // TODO, determine dimensionality
															tdefs += wrkstr;
															// material modifier for tolerance value
															if (posDef->MaterialCondition() == MaterialModifierEnumType::MAXIMUM) tdefs += _T(",MMC");
															else if (posDef->MaterialCondition() == MaterialModifierEnumType::LEAST) tdefs += _T(",LMC");
															else if (posDef->MaterialCondition() == MaterialModifierEnumType::REGARDLESS) tdefs += _T(",RFS");
															// get the DRF string
															CString drfStr = _T("");
															if (posDef->DatumReferenceFrameId() != NULL) // DRF is optional
																GetDatumReferenceFrame(qifDoc, *posDef->DatumReferenceFrameId(), drfStr);
															tdefs += drfStr;
															tdefs += _T("\n");
															if (posAct->Value() != NULL) // do we have the optional actual value?
															{
																// compose the actual DMIS tolerance label TA(POS1)
																wrkstr.Format(_T(",TA(%s)"), posItem->Name().c_str());
																talabels += wrkstr;
																// compose the actual DMIS tolerance T(POS1)=TOL/POS,.05,INTOL,MMC,DAT(A),DAT(B),MMC
																wrkstr.Format(_T("TA(%s)=TOL/POS,3D,%g"), posItem->Name().c_str(), (double)*posAct->Value());
																tadefs += wrkstr;
																if (posAct->Status().CharacteristicStatusEnum() != NULL) // we are only going to handle the enumeration
																{
																	if (*posAct->Status().CharacteristicStatusEnum() == CharacteristicStatusEnumType::PASS) tadefs += _T(",INTOL");
																	else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																}
																else tadefs += _T(",OUTOL"); // if we don't it's in, assume it's out
																// material modifier for tolerance value, again
																if (posDef->MaterialCondition() == MaterialModifierEnumType::MAXIMUM) tadefs += _T(",MMC");
																else if (posDef->MaterialCondition() == MaterialModifierEnumType::LEAST) tadefs += _T(",LMC");
																else if (posDef->MaterialCondition() == MaterialModifierEnumType::REGARDLESS) tadefs += _T(",RFS");
																tadefs += drfStr; // reuse the DRF string
																tadefs += _T("\n");
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
#pragma endregion function GetTolerances

#pragma region read QIF
/*
This call back prompts the user for a QIF document to read.
The QIF document is mined for units, feature, characteristic, and datum deinfition data.
This information is output in the form of a DMIS results file which shows
the relationships among features, characteristics and datums:

FILNAM/'cpp.qif',5.3
$$ Dimensional Metrology Standards Consortium (DMSC))
$$ This DMIS results file produced from QIF document:
$$   C:\Python34\pyxb-next\QIF21\QIF21\cpp.qif
$$ with DMSC's open source QIF_CPlusPlus application written in native C++
$$ using XML schema source code bindings created by CodeSynthesis' XSD tool
UNITS/MM,ANGDEC                         <- units

$$ Plane nominal DAT_A
OUTPUT/F(DAT_A),T(FLAT1)                <- feature/characteristic relationship
F(DAT_A)=FEAT/PLANE,CART,0,0,0,0,0,1    <- nominal feature data
T(FLAT1)=TOL/FLAT,0.1                   <- nominal characteristic data
$$ Plane actual DAT_A
OUTPUT/FA(DAT_A),TA(FLAT1)              <- feature/characteristic relationship redux
FA(DAT_A)=FEAT/PLANE,CART,0,0,0,0,0,1   <- actual feature data
TA(FLAT1)=TOL/FLAT,0.023,INTOL          <- actual characteristic data
DATDEF/FA(DAT_A),DAT(A)                 <- datum definition
*/
void CQIF_CPlusPlusDlg::OnBnClickedReadqif()
{
	CString wrkstr;
	::std::auto_ptr< ::QIFDocumentType > qifDoc; // QIF objects (eventually)

	// set up file open dialog
	CFileDialog InDlg(TRUE, _T("QIF"), NULL, OFN_HIDEREADONLY, _T("QIF documents files (*.QIF)|*.qif|All files (*.*)|*.*||"));

	// launch the dialog box
	if(InDlg.DoModal() != IDOK ) return;

	// read the file into the QIF document
	try
	{
		qifDoc = QIFDocument((LPCTSTR)InDlg.GetPathName(), xml_schema::flags::dont_validate);
	}
	// what could go wrong?
	catch (const xml_schema::expected_element& ee)
	{
		if(!ee.name().c_str()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Expected element \"%s\" reading QIF document"), ee.name().c_str());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}
	catch (const xml_schema::unexpected_element& ue)
	{
		if(!ue.encountered_name().c_str()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Unexpected element \"%s\" reading QIF document"), ue.encountered_name().c_str());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}
	catch (const xml_schema::expected_attribute& ea)
	{
		if(!ea.name().c_str()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Expected attribute \"%s\" reading QIF document"), ea.name().c_str());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}
	catch (const xml_schema::unexpected_enumerator& ue)
	{
		if(!ue.enumerator().c_str()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Unexpected enumerator \"%s\" reading QIF document"), ue.enumerator().c_str());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}
	catch (const xml_schema::not_derived& nd)
	{
		if(!nd.derived_type_name().c_str()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Not derived type \"%s\" reading QIF document"), nd.derived_type_name().c_str());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}
	catch (const xml_schema::exception& e)
	{
		if(!e.what()[0] != 0)
		{
			CString msg;
			msg.Format(_T("ERROR: Error \"%S\" reading QIF document"), e.what());
			::MessageBox(NULL, msg, _T("QIF parsing error"), MB_OK);
			return;
		}
	}

	// make sure we have all the pieces we need to make a DMIS results document:
	// DMIS is very feature-centric, so at minimum we need features and measured results
	if (qifDoc->Features() != NULL &&
			qifDoc->Features()->FeatureItems() != NULL &&
			qifDoc->Features()->FeatureNominals() != NULL &&
			qifDoc->Features()->FeatureDefinitions() != NULL &&
			qifDoc->MeasurementsResults() != NULL)
	{
		// begin our DMIS results file
		CString dmisoutput = _T("FILNAM/'"); // this needs to be the first statement in a DMIS results file
		dmisoutput += (LPCTSTR)InDlg.GetFileName(); // the name of the QIF document we loaded
		dmisoutput += _T("',5.3\n"); // DMIS version number

		// add some application identifying information
		dmisoutput += _T("$$ Dimensional Metrology Standards Consortium (DMSC))\n");
		dmisoutput += _T("$$ This DMIS results file produced from QIF document:\n");
		dmisoutput += _T("$$   ");
		dmisoutput += (LPCTSTR)InDlg.GetPathName();
		dmisoutput += _T("\n");
		dmisoutput += _T("$$ with DMSC\'s open source QIF_CPlusPlus application written in native C++\n");
		dmisoutput += _T("$$ using XML schema source code bindings created by CodeSynthesis' XSD tool\n");

		// get our units
		dmisoutput += _T("UNITS/");
		CString units = _T("METER"); // QIF units are SI units until we learn differently
		if(qifDoc->FileUnits() != NULL)
		{
				if(qifDoc->FileUnits()->PrimaryUnits().LinearUnit() != NULL)
				{
						if (qifDoc->FileUnits()->PrimaryUnits().LinearUnit()->UnitConversion() != NULL) // use the conversion factor if we have it
						{
								if (qifDoc->FileUnits()->PrimaryUnits().LinearUnit()->UnitConversion()->Factor() == 0.001) units = _T("MM");
								else if (qifDoc->FileUnits()->PrimaryUnits().LinearUnit()->UnitConversion()->Factor() == 0.0254) units = _T("INCH");
						}
						else // otherwise, try the name
						{
								CString unitname = qifDoc->FileUnits()->PrimaryUnits().LinearUnit()->UnitName().c_str();
								if (unitname.MakeUpper() == _T("MM")) units = _T("MM");
								else if (unitname.Left(2).MakeUpper() == _T("IN")) units = _T("INCH");
						}
				}
		}
		dmisoutput += units;
		dmisoutput += _T(",ANGDEC\n");

		// just look at the first set of measured results
		MeasurementResultsType measResults = qifDoc->MeasurementsResults()->MeasurementResultsSet().MeasurementResults()[0];
		if (measResults.MeasuredFeatures() != NULL)
		{
			// walk through the list of feature actuals (this is the main output loop)
			for (int i = 0; i < measResults.MeasuredFeatures()->FeatureActuals().FeatureActual().size(); i++)
			{
				// walk through the list of feature items...
				for (int j = 0; j < qifDoc->Features()->FeatureItems()->FeatureItem().size(); j++)
				{
					// ...to find the associated feature item
					if (qifDoc->Features()->FeatureItems()->FeatureItem()[j].id() == measResults.MeasuredFeatures()->FeatureActuals().FeatureActual()[i].FeatureItemId())
					{
						// walk through the list of feature nominals...
						for (int k = 0; k < qifDoc->Features()->FeatureNominals()->FeatureNominal().size(); k++)
						{
							// ...to find the associated feature nominal (the item->nominal link is optional)
							if (qifDoc->Features()->FeatureItems()->FeatureItem()[j].FeatureNominalId() != NULL &&
								  qifDoc->Features()->FeatureNominals()->FeatureNominal()[k].id() == *qifDoc->Features()->FeatureItems()->FeatureItem()[j].FeatureNominalId())
							{
								// walk through the list of feature definitions...
								for (int n = 0; n < qifDoc->Features()->FeatureDefinitions()->FeatureDefinition().size(); n++)
								{
									// ...to find the associated feature definition
									if (qifDoc->Features()->FeatureDefinitions()->FeatureDefinition()[n].id() == qifDoc->Features()->FeatureNominals()->FeatureNominal()[k].FeatureDefinitionId())
									{
										// we have all 4 aspects: actual, item, nominal and definition, make sure they're all the same type
										if(CircleFeatureActualType *circAct = dynamic_cast<CircleFeatureActualType *> (&(measResults.MeasuredFeatures()->FeatureActuals().FeatureActual()[i])))
										{
											CircleFeatureItemType *circItem = dynamic_cast<CircleFeatureItemType *> (&(qifDoc->Features()->FeatureItems()->FeatureItem()[j]));
											CircleFeatureNominalType *circNom = dynamic_cast<CircleFeatureNominalType *> (&(qifDoc->Features()->FeatureNominals()->FeatureNominal()[k]));
											CircleFeatureDefinitionType *circDef = dynamic_cast<CircleFeatureDefinitionType *> (&(qifDoc->Features()->FeatureDefinitions()->FeatureDefinition()[n]));
											if (circNom != NULL && circDef != NULL && circItem != NULL)
											{
												// we have a matched set of circle aspects
												// compose the feature nominal label
												CString flabel;
												flabel.Format(_T("F(%s)"), circItem->FeatureName().c_str()); // F(CIRC1) for example
												// compose the feature actual label
												CString falabel;
												falabel.Format(_T("FA(%s)"), circItem->FeatureName().c_str()); // FA(CIRC1) for example
												// begin composing the nominal feature definition F(CIRC1)=FEAT/CIRCLE...
												CString f = flabel;
												f += _T("=FEAT/CIRCLE");
												// begin composing the actual feature definition FA(CIRC1)=FEAT/CIRCLE...
												CString fa = falabel;
												fa += _T("=FEAT/CIRCLE");
												// inner  or outer?
												if (circDef->InternalExternal() == InternalExternalEnumType::EXTERNAL)
												{
													f += _T(",OUTER");
													fa += _T(",OUTER");
												}
												else // assume INNER, DMIS doesn't have a not-applicable option
												{
													f += _T(",INNER");
													fa += _T(",INNER");
												}
												// cartesian
												f += _T(",CART");
												fa += _T(",CART");
												// nominal xyz location, not optional so accessed directly as circNom->Location()[0]
												wrkstr.Format(_T(",%g,%g,%g"), circNom->Location()[0], circNom->Location()[1], circNom->Location()[2]);
												f += wrkstr;
												if (circAct->Location() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													// actual xyz location, optional so accessed indirectly as *circAct->Location()[0]
													wrkstr.Format(_T(",%g,%g,%g"), (*circAct->Location())[0], (*circAct->Location())[1], (*circAct->Location())[2]);
													fa += wrkstr;
												}
												// nominal ijk vector
												wrkstr.Format(_T(",%g,%g,%g"), circNom->Normal()[0], circNom->Normal()[1], circNom->Normal()[2]);
												f += wrkstr;
												if (circAct->Normal() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													// actual ijk vector
													wrkstr.Format(_T(",%g,%g,%g"), (*circAct->Normal())[0], (*circAct->Normal())[1], (*circAct->Normal())[2]);
													fa += wrkstr;
												}
												// diameter and new line
												wrkstr.Format(_T(",%g\n"),(double)circDef->Diameter());
												f += wrkstr;
												if (circAct->Diameter() == NULL) fa += wrkstr; // no actual, assume nominal
												else 
												{
													wrkstr.Format(_T(",%g\n"),(double)*circAct->Diameter());
													fa += wrkstr;
												}
												// grab tolerances
												CString tlabels = _T("");
												CString talabels = _T("");
												CString tdefs = _T("");
												CString tadefs = _T("");
												GetTolerances(*qifDoc, circAct->id(), tlabels, talabels, tdefs, tadefs);
												// output this feature
												dmisoutput += _T("\n$$ Circle nominal ");
												dmisoutput += circItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += flabel + tlabels;
												dmisoutput += _T("\n"); // OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
												dmisoutput += f; // F(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
												dmisoutput += tdefs;
												dmisoutput += _T("$$ Circle actual ");
												dmisoutput += circItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += falabel + talabels; // OUTPUT/FA(CIRC1),TA(DIAM1),TA(POS1)
												dmisoutput += _T("\n");
												dmisoutput += fa; // FA(CIRC1)=FEAT/CIRCLE,INNER,CART,0,0,0,0,0,1,12
												dmisoutput += tadefs;
												// am I a datum?
												CString datdef = _T("");
												GetDatumDefinitions(*qifDoc, circNom->id(), falabel, datdef);
												dmisoutput += datdef;
											}
										}
										else if(CylinderFeatureActualType *cylAct = dynamic_cast<CylinderFeatureActualType *> (&(measResults.MeasuredFeatures()->FeatureActuals().FeatureActual()[i])))
										{
											CylinderFeatureItemType *cylItem = dynamic_cast<CylinderFeatureItemType *> (&(qifDoc->Features()->FeatureItems()->FeatureItem()[j]));
											CylinderFeatureNominalType *cylNom = dynamic_cast<CylinderFeatureNominalType *> (&(qifDoc->Features()->FeatureNominals()->FeatureNominal()[k]));
											CylinderFeatureDefinitionType *cylDef = dynamic_cast<CylinderFeatureDefinitionType *> (&(qifDoc->Features()->FeatureDefinitions()->FeatureDefinition()[n]));
											if (cylItem != NULL && cylNom != NULL && cylDef != NULL)
											{
												// we have a matched set of cylinder aspects
												// compose the feature nominal label
												CString flabel;
												flabel.Format(_T("F(%s)"), cylItem->FeatureName().c_str()); // F(CYL1) for example
												// compose the feature actual label
												CString falabel;
												falabel.Format(_T("FA(%s)"), cylItem->FeatureName().c_str()); // FA(CYL1) for example
												// begin composing the nominal feature definition F(CYL1)=FEAT/CYLNDR...
												CString f = flabel;
												f += _T("=FEAT/CYLNDR");
												// begin composing the actual feature definition FA(CYL1)=FEAT/CYLNDR...
												CString fa = falabel;
												fa += _T("=FEAT/CYLNDR");
												// inner  or outer?
												if (cylDef->InternalExternal() == InternalExternalEnumType::EXTERNAL)
												{
													f += _T(",OUTER");
													fa += _T(",OUTER");
												}
												else // assume INNER, DMIS doesn't have a not-applicable option
												{
													f += _T(",INNER");
													fa += _T(",INNER");
												}
												// cartesian
												f += _T(",CART");
												fa += _T(",CART");
												//                                                                          | (dot)
												// nominal xyz location, not optional so accessed directly as cylNom->Axis().AxisPoint()[0]
												wrkstr.Format(_T(",%g,%g,%g"), cylNom->Axis().AxisPoint()[0], cylNom->Axis().AxisPoint()[1], cylNom->Axis().AxisPoint()[2]);
												f += wrkstr;
												if (cylAct->Axis() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													//                                                                       | (arrow)
													// actual xyz location, optional so accessed indirectly as cylAct->Axis()->AxisPoint()[0]
													wrkstr.Format(_T(",%g,%g,%g"), cylAct->Axis()->AxisPoint()[0], cylAct->Axis()->AxisPoint()[1], cylAct->Axis()->AxisPoint()[2]);
													fa += wrkstr;
												}
												// nominal ijk vector
												wrkstr.Format(_T(",%g,%g,%g"), cylNom->Axis().Direction()[0], cylNom->Axis().Direction()[1], cylNom->Axis().Direction()[2]);
												f += wrkstr;
												if (cylAct->Axis() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													// actual ijk vector
													wrkstr.Format(_T(",%g,%g,%g"), cylAct->Axis()->Direction()[0], cylAct->Axis()->Direction()[1], cylAct->Axis()->Direction()[2]);
													fa += wrkstr;
												}
												// diameter and new line
												wrkstr.Format(_T(",%g\n"),(double)cylDef->Diameter());
												f += wrkstr;
												if (cylAct->Diameter() == NULL) fa += wrkstr; // no actual, assume nominal
												else 
												{
													wrkstr.Format(_T(",%g\n"),(double)*cylAct->Diameter());
													fa += wrkstr;
												}
												// grab tolerances
												CString tlabels = _T("");
												CString talabels = _T("");
												CString tdefs = _T("");
												CString tadefs = _T("");
												GetTolerances(*qifDoc, cylAct->id(), tlabels, talabels, tdefs, tadefs);
												// output this feature
												dmisoutput += _T("\n$$ Cylinder nominal ");
												dmisoutput += cylItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += flabel + tlabels;
												dmisoutput += _T("\n"); 
												dmisoutput += f;
												dmisoutput += tdefs;
												dmisoutput += _T("$$ Cylinder actual ");
												dmisoutput += cylItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += falabel + talabels;
												dmisoutput += _T("\n");
												dmisoutput += fa;
												dmisoutput += tadefs;
												// am I a datum?
												CString datdef = _T("");
												GetDatumDefinitions(*qifDoc, cylNom->id(), falabel, datdef);
												dmisoutput += datdef;
											}
										}
										else if(PlaneFeatureActualType *planAct = dynamic_cast<PlaneFeatureActualType *> (&(measResults.MeasuredFeatures()->FeatureActuals().FeatureActual()[i])))
										{
											PlaneFeatureItemType *planItem = dynamic_cast<PlaneFeatureItemType *> (&(qifDoc->Features()->FeatureItems()->FeatureItem()[j]));
											PlaneFeatureNominalType *planNom = dynamic_cast<PlaneFeatureNominalType *> (&(qifDoc->Features()->FeatureNominals()->FeatureNominal()[k]));
											PlaneFeatureDefinitionType *planDef = dynamic_cast<PlaneFeatureDefinitionType *> (&(qifDoc->Features()->FeatureDefinitions()->FeatureDefinition()[n]));
											if (planItem != NULL && planNom != NULL && planDef != NULL)
											{
												// we have a matched set of plane aspects
												// compose the feature nominal label
												CString flabel;
												flabel.Format(_T("F(%s)"), planItem->FeatureName().c_str()); // F(PLN1) for example
												// compose the feature actual label
												CString falabel;
												falabel.Format(_T("FA(%s)"), planItem->FeatureName().c_str()); // FA(PLN1) for example
												// begin composing the nominal feature definition F(PLN1)=FEAT/PLANE...
												CString f = flabel;
												f += _T("=FEAT/PLANE");
												// begin composing the actual feature definition FA(PLN1)=FEAT/PLANE...
												CString fa = falabel;
												fa += _T("=FEAT/PLANE");
												// cartesian
												f += _T(",CART");
												fa += _T(",CART");
												// nominal xyz location, not optional so accessed directly as planNom->Location()[0]
												wrkstr.Format(_T(",%g,%g,%g"), planNom->Location()[0], planNom->Location()[1], planNom->Location()[2]);
												f += wrkstr;
												if (planAct->Location() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													// actual xyz location, optional so accessed indirectly as *planAct->Location()[0]
													wrkstr.Format(_T(",%g,%g,%g"), (*planAct->Location())[0], (*planAct->Location())[1], (*planAct->Location())[2]);
													fa += wrkstr;
												}
												// nominal ijk vector
												wrkstr.Format(_T(",%g,%g,%g"), planNom->Normal()[0], planNom->Normal()[1], planNom->Normal()[2]);
												f += wrkstr;
												if (planAct->Normal() == NULL) fa += wrkstr; // no actual, assume nominal
												else
												{
													// actual ijk vector
													wrkstr.Format(_T(",%g,%g,%g"), (*planAct->Normal())[0], (*planAct->Normal())[1], (*planAct->Normal())[2]);
													fa += wrkstr;
												}
												// new line
												f += _T("\n");
												fa += _T("\n");
												// grab tolerances
												CString tlabels = _T("");
												CString talabels = _T("");
												CString tdefs = _T("");
												CString tadefs = _T("");
												GetTolerances(*qifDoc, planAct->id(), tlabels, talabels, tdefs, tadefs);
												// output this feature
												dmisoutput += _T("\n$$ Plane nominal ");
												dmisoutput += planItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += flabel + tlabels;
												dmisoutput += _T("\n");
												dmisoutput += f;
												dmisoutput += tdefs;
												dmisoutput += _T("$$ Plane actual ");
												dmisoutput += planItem->FeatureName().c_str();
												dmisoutput += _T("\n");
												dmisoutput += _T("OUTPUT/");
												dmisoutput += falabel + talabels;
												dmisoutput += _T("\n");
												dmisoutput += fa;
												dmisoutput += tadefs;
												// am I a datum?
												CString datdef = _T("");
												GetDatumDefinitions(*qifDoc, planNom->id(), falabel, datdef);
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
		dmisoutput += "ENDFIL"; // required at the end of a DMIS file

		// set up file save dialog
		CFileDialog OutDlg(FALSE, _T("DMO"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("DMO results files (*.DMO)|*.dmo|All files (*.*)|*.*||")); // FALSE = save file dialog
		// launch the dialog box
		if(OutDlg.DoModal() != IDOK ) return;

		// write out DMIS results file
		CStdioFile file;
		if(file.Open(OutDlg.GetPathName(), CFile::modeCreate|CFile::modeWrite))
		{
			file.WriteString(dmisoutput);
			file.Close();

			// open it in NotePad
			ShellExecute(NULL, _T("Edit"), OutDlg.GetPathName(), NULL, NULL, SW_SHOW);
		}
	}
}
#pragma endregion read QIF


#pragma region write QIF
/*
This call back prompts the user for the name of a QIF document.
This new QIF document is populated with feature, characteristic,
datum, measurement resource, and measured results information
in a top-down, hard-coded fashion.

Where you see hard-coded data like:
	// plane location
	PointType planLoc;
	planLoc.push_back(0.0); // x
	planLoc.push_back(0.0); // y
	planLoc.push_back(0.0); // z
	planANom.Location(planLoc);
	                    ^
	YOUR DATA GOES HERE |
*/
void CQIF_CPlusPlusDlg::OnBnClickedWriteqif()
{
	unsigned long qifid = 1; // the ever incrementing QIF id counter, the beating heart of QIF

#pragma region lists
	/// Define object lists

	// lists
	MeasurementDevicesType measDevices;
	measDevices.n(0); // this is an illegal value for n but we'll increment it later
	DatumDefinitionsType datumDefs;
	datumDefs.n(0);
	DatumReferenceFramesType drfDefs;
	drfDefs.n(0);
	FeatureDefinitionsType featDefs;
	featDefs.n(0);
	FeatureNominalsType featNoms;
	featNoms.n(0);
	FeatureItemsType featItems;
	featItems.n(0);
	FeatureActualsType featActs;
	featActs.n(0);
	CharacteristicDefinitionsType charDefs;
	charDefs.n(0);
	CharacteristicNominalsType charNoms;
	charNoms.n(0);
	CharacteristicItemsType charItems;
	charItems.n(0);
	CharacteristicActualsType charActs;
	charActs.n(0);
#pragma endregion lists

#pragma region Datum definitions
	/// define ABC datums

	// define datums ABC (as simple datum letters, we'll create hooks to datum features later)
	DatumDefinitionType datA;
	datA.id(qifid++); // required id
	datA.DatumLabel(_T("A"));
	//datumDefs.DatumDefinition().push_back(datA); // this is a deep clone so we really don't want to do this until datA is finished (i.e., the feature reference id is added)
	//datumDefs.n(datumDefs.n() + 1); // increment the n counter
	DatumDefinitionType datB;
	datB.id(qifid++); // required id
	datB.DatumLabel(_T("B"));
	//datumDefs.DatumDefinition().push_back(datB); // ditto
	//datumDefs.n(datumDefs.n() + 1); // increment the n counter
	DatumDefinitionType datC;
	datC.id(qifid++); // required id
	datC.DatumLabel(_T("C"));
	//datumDefs.DatumDefinition().push_back(datC); // what she said
	//datumDefs.n(datumDefs.n() + 1); // increment the n counter
#pragma endregion Datum definitions

#pragma region Datum reference frames
	/// define A, AB, and ABC datum reference frames

#pragma region A
	// make a datum reference frame A
	DatumReferenceFrameType drfA;
	drfA.id(qifid++); // required id
	// datums list
	DatumsType drfAdats;
	drfAdats.n(0);

	// A is simple datum with no material condition modifier
	DatumType dtA_A;
	// reference id of A
	QIFReferenceFullType datA_Aref(datA.id());
	dtA_A.DatumDefinitionId(datA_Aref);
	// no matieral modifier
	dtA_A.MaterialModifier(MaterialModifierEnumType::NONE);
	// use the actual datum feature
	dtA_A.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum A to DRF as primary datum
	DatumWithPrecedenceType dwpA_A;
	dwpA_A.SimpleDatum(dtA_A);
	PrecedenceType prcA_A;
	prcA_A.PrecedenceEnum(PrecedenceEnumType::PRIMARY);
	dwpA_A.Precedence(prcA_A);
	// add simple primary datum A to the datums list
	drfAdats.Datum().push_back(dwpA_A);
	drfAdats.n(drfAdats.n() + 1); // increment the n counter

	// add our datums list to the DRF
	drfA.Datums(drfAdats);
	// add our DRF to the DRF list
	drfDefs.DatumReferenceFrame().push_back(drfA);
	drfDefs.n(drfDefs.n() + 1); // increment the n counter
#pragma endregion A

#pragma region A|B
	// make a datum reference frame A|B(m)
	DatumReferenceFrameType drfAB;
	drfAB.id(qifid++); // required id
	// datums list
	DatumsType drfABdats;
	drfABdats.n(0);

	// A is simple datum with no material condition modifier
	DatumType dtA_AB;
	// reference id of A
	QIFReferenceFullType datA_ABref(datA.id());
	dtA_AB.DatumDefinitionId(datA_ABref);
	// no matieral modifier
	dtA_AB.MaterialModifier(MaterialModifierEnumType::NONE);
	// use the actual datum feature
	dtA_AB.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum A to DRF as primary datum
	DatumWithPrecedenceType dwpA_AB;
	dwpA_AB.SimpleDatum(dtA_AB);
	PrecedenceType prcA_AB;
	prcA_AB.PrecedenceEnum(PrecedenceEnumType::PRIMARY);
	dwpA_AB.Precedence(prcA_AB);
	// add simple primary datum A to the datums list
	drfABdats.Datum().push_back(dwpA_AB);
	drfABdats.n(drfABdats.n() + 1); // increment the n counter

	// B is simple datum with MMC material condition modifier
	DatumType dtB_AB;
	// reference id of B
	QIFReferenceFullType datB_ABref(datB.id());
	dtB_AB.DatumDefinitionId(datB_ABref);
	// MMC matieral modifier
	dtB_AB.MaterialModifier(MaterialModifierEnumType::MAXIMUM);
	// use the actual datum feature
	dtB_AB.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum B to DRF as secondary datum
	DatumWithPrecedenceType dwpB_AB;
	dwpB_AB.SimpleDatum(dtB_AB);
	PrecedenceType prcB_AB;
	prcB_AB.PrecedenceEnum(PrecedenceEnumType::SECONDARY);
	dwpB_AB.Precedence(prcB_AB);
	// add simple primary datum B to the datums list
	drfABdats.Datum().push_back(dwpB_AB);
	drfABdats.n(drfABdats.n() + 1); // increment the n counter

	// add our datums list to the DRF
	drfAB.Datums(drfABdats);
	// add our DRF to the DRF list
	drfDefs.DatumReferenceFrame().push_back(drfAB);
	drfDefs.n(drfDefs.n() + 1); // increment the n counter
#pragma endregion A|B

#pragma region A|B|C
	// make a datum reference frame A|B(m)|C(m)
	DatumReferenceFrameType drfABC;
	drfABC.id(qifid++); // required id
	// datums list
	DatumsType drfABCdats;
	drfABCdats.n(0);

	// A is simple datum with no material condition modifier
	DatumType dtA_ABC;
	// reference id of A
	QIFReferenceFullType datA_ABCref(datA.id());
	dtA_ABC.DatumDefinitionId(datA_ABCref);
	// no matieral modifier
	dtA_ABC.MaterialModifier(MaterialModifierEnumType::NONE);
	// use the actual datum feature
	dtA_ABC.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum A to DRF as primary datum
	DatumWithPrecedenceType dwpA_ABC;
	dwpA_ABC.SimpleDatum(dtA_ABC);
	PrecedenceType prcA_ABC;
	prcA_ABC.PrecedenceEnum(PrecedenceEnumType::PRIMARY);
	dwpA_ABC.Precedence(prcA_ABC);
	// add simple primary datum A to the datums list
	drfABCdats.Datum().push_back(dwpA_ABC);
	drfABCdats.n(drfABCdats.n() + 1); // increment the n counter

	// B is simple datum with MMC material condition modifier
	DatumType dtB_ABC;
	// reference id of B
	QIFReferenceFullType datB_ABCref(datB.id());
	dtB_ABC.DatumDefinitionId(datB_ABCref);
	// MMC matieral modifier
	dtB_ABC.MaterialModifier(MaterialModifierEnumType::MAXIMUM);
	// use the actual datum feature
	dtB_ABC.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum B to DRF as secondary datum
	DatumWithPrecedenceType dwpB_ABC;
	dwpB_ABC.SimpleDatum(dtB_ABC);
	PrecedenceType prcB_ABC;
	prcB_ABC.PrecedenceEnum(PrecedenceEnumType::SECONDARY);
	dwpB_ABC.Precedence(prcB_ABC);
	// add simple primary datum B to the datums list
	drfABCdats.Datum().push_back(dwpB_ABC);
	drfABCdats.n(drfABCdats.n() + 1); // increment the n counter

	// C is simple datum with MMC material condition modifier
	DatumType dtC_ABC;
	// reference id of C
	QIFReferenceFullType datC_ABCref(datC.id());
	dtC_ABC.DatumDefinitionId(datC_ABCref);
	// MMC matieral modifier
	dtC_ABC.MaterialModifier(MaterialModifierEnumType::MAXIMUM);
	// use the actual datum feature
	dtC_ABC.ReferencedComponent(ReferencedComponentEnumType::ACTUAL);
	// add datum C to DRF as tertiary datum
	DatumWithPrecedenceType dwpC_ABC;
	dwpC_ABC.SimpleDatum(dtC_ABC);
	PrecedenceType prcC_ABC;
	prcC_ABC.PrecedenceEnum(PrecedenceEnumType::TERTIARY);
	dwpC_ABC.Precedence(prcC_ABC);
	// add simple primary datum B to the datums list
	drfABCdats.Datum().push_back(dwpC_ABC);
	drfABCdats.n(drfABCdats.n() + 1); // increment the n counter

	// add our datums list to the DRF
	drfABC.Datums(drfABCdats);
	// add our DRF to the DRF list
	drfDefs.DatumReferenceFrame().push_back(drfABC);
	drfDefs.n(drfDefs.n() + 1); // increment the n counter
#pragma endregion A|B|C

#pragma endregion Datum reference frames

#pragma region Measurement devices
	// define 2 CMM measurement devices and assign them ids
	MeasurementDeviceType cmm1;
	cmm1.Name(_T("CMM1"));
	cmm1.id(qifid++); // required id
	// add this device to our list
	measDevices.MeasurementDevice().push_back(cmm1);
	measDevices.n(measDevices.n() + 1); // increment the n counter
	// this device will be referenced by its id
	QIFReferenceFullType cmm1Ref(cmm1.id());
	MeasurementDeviceType cmm2;
	cmm2.Name(_T("CMM2"));
	cmm2.id(qifid++); // required id
	// add this device to our list
	measDevices.MeasurementDevice().push_back(cmm2);
	measDevices.n(measDevices.n() + 1); // increment the n counter
	// this device will be referenced by its id
	QIFReferenceFullType cmm2Ref(cmm2.id());
#pragma endregion Measurement devices

#pragma region Datum A plane
	/// define A datum plane

	// make a plane feature definition
	PlaneFeatureDefinitionType planADef;
	planADef.id(qifid++); // required id

	// add to list
	featDefs.FeatureDefinition().push_back(planADef);
	featDefs.n(featDefs.n() + 1); // increment the n counter

	// make a plane feature nominal
	PlaneFeatureNominalType planANom;
	planANom.id(qifid++); // required id

	// reference to definition
	QIFReferenceType planADefRef(planADef.id());
	planANom.FeatureDefinitionId(planADefRef);

	// plane location
	PointType planLoc;
	planLoc.push_back(0.0); // x
	planLoc.push_back(0.0); // y
	planLoc.push_back(0.0); // z
	planANom.Location(planLoc);

	// plane normal
	UnitVectorType planNor;
	planNor.push_back(0.0); // i
	planNor.push_back(0.0); // j
	planNor.push_back(1.0); // k
	planANom.Normal(planNor);

	// add to list
	featNoms.FeatureNominal().push_back(planANom);
	featNoms.n(featNoms.n() + 1); // increment the n counter

	// make a plane feature item
	PlaneFeatureItemType planAItem;
	planAItem.id(qifid++); // required id

	// reference to nominal
	QIFReferenceFullType planANomRef(planANom.id());
	planAItem.FeatureNominalId(planANomRef);

	// Give plane a name
	planAItem.FeatureName(_T("DAT_A"));

	// is this plane checked or set?
	PlaneCheckedFeatureType planACheck;
	PlaneActualDeterminationType planAActDet;
	planAActDet.Checked(planACheck); // this feature is checked, rather than set
	planAItem.DeterminationMode(planAActDet);

	// add to list
	featItems.FeatureItem().push_back(planAItem);
	featItems.n(featItems.n() + 1); // increment the n counter

	// reference to item
	QIFReferenceFullType planAItemRef(planAItem.id());

	// make a plane feature actual
	PlaneFeatureActualType planAAct;
	planAAct.id(qifid++); // required id

	// reference to item
	planAAct.FeatureItemId(planAItemRef);

	// actual location
	ActualPointType planAActLoc;
	planAActLoc.push_back(0.0); // perfect because it's datum A
	planAActLoc.push_back(0.0);
	planAActLoc.push_back(0.0);
	planAAct.Location(planAActLoc);

	// plane normal
	ActualUnitVectorType planAActNor;
	planAActNor.push_back(0.0); // perfect because it's datum A
	planAActNor.push_back(0.0);
	planAActNor.push_back(1.0);
	planAAct.Normal(planAActNor);

	// add to list
	featActs.FeatureActual().push_back(planAAct);
	featActs.n(featActs.n() + 1); // increment the n counter

	// point datum definition at plane nominal
	// array of one reference id
	ArrayReferenceFullType datAfeats;
	datAfeats.Id().push_back(planANomRef);
	datAfeats.n(1);
	// hook to datum
	datA.FeatureNominalIds(datAfeats);
	// Now that our datum definition is done, we can add it to the list
	datumDefs.DatumDefinition().push_back(datA); // this is a deep clone
	datumDefs.n(datumDefs.n() + 1); // increment the n counter

	// make a flatness characteristic definition
	FlatnessCharacteristicDefinitionType flatDef;
	flatDef.id(qifid++); // required id

	// define the tolerance zone
	LinearValueType flatZone(0.1);
	// a flatness can be simple, per-unit-area, or both. Items is used to store this hierachy of objects
	flatDef.ToleranceValue(flatZone);

	// add to list
	charDefs.CharacteristicDefinition().push_back(flatDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a flatness characteristic nominal
	FlatnessCharacteristicNominalType flatNom;
	flatNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType flatDefRef(flatDef.id());
	flatNom.CharacteristicDefinitionId(flatDefRef);

	// add to list
	charNoms.CharacteristicNominal().push_back(flatNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a flatness characteristic item
	FlatnessCharacteristicItemType flatItem;
	flatItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType flatNomRef(flatNom.id());
	flatItem.CharacteristicNominalId(flatNomRef);

	// give tolerance a name
	flatItem.Name(_T("FLAT1"));

	// point tolerance at feature
	ArrayReferenceFullType flatItemFeatIds;
	flatItemFeatIds.Id().push_back(planAItemRef);
	flatItemFeatIds.n(1);
	flatItem.FeatureItemIds(flatItemFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType flatItemDevIds;
	flatItemDevIds.Id().push_back(cmm1Ref);
	flatItemDevIds.Id().push_back(cmm2Ref);
	flatItemDevIds.n(2);
	flatItem.MeasurementDeviceIds(flatItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(flatItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a flatness characteristic actual
	FlatnessCharacteristicActualType flatAct;
	flatAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType flatItemRef(flatItem.id());
	flatAct.CharacteristicItemId(flatItemRef);

	// required status
	CharacteristicStatusEnumType flatStatEnum(CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType flatStat;
	flatStat.CharacteristicStatusEnum(flatStatEnum);
	flatAct.Status(flatStat);

	// actual value
	ActualLinearValueType flatActVal(0.023);
	flatAct.Value(flatActVal);

	// point actual tolerance at actual feature
	QIFReferenceFullType planAActRef(planAAct.id());
	ArrayReferenceFullType flatActFeatIds;
	flatActFeatIds.Id().push_back(planAActRef);
	flatActFeatIds.n(1);
	flatAct.FeatureActualIds(flatActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType flatActDevIds;
	flatActDevIds.Id().push_back(cmm2Ref);
	flatActDevIds.n(1);
	flatAct.MeasurementDeviceIds(flatActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(flatAct);
	charActs.n(charActs.n() + 1); // increment the n counter
#pragma endregion Datum A plane

#pragma region datum B cylinder
	// make a cylinder feature definition * SHARED BETWEEN DATUMS B AND C *
	CylinderFeatureDefinitionType cylBCDef;
	cylBCDef.id(qifid++); // required id

	// feature size
	LinearValueType diaBCSize(12.7);
	cylBCDef.Diameter(diaBCSize);

	// material side
	cylBCDef.InternalExternal(InternalExternalEnumType::INTERNAL);

	// add to list
	featDefs.FeatureDefinition().push_back(cylBCDef);
	featDefs.n(featDefs.n() + 1); // increment the n counter

	// make a cylinder feature nominal (not sharable)
	CylinderFeatureNominalType cylBNom;
	cylBNom.id(qifid++); // required id

	// reference to shared definition
	QIFReferenceType cylBCDefRef(cylBCDef.id());
	cylBNom.FeatureDefinitionId(cylBCDefRef);

	// cylinder location
	PointType cylBcen;
	cylBcen.push_back(30.0);
	cylBcen.push_back(0.0);
	cylBcen.push_back(0.0);

	// cylinder axis
	UnitVectorType cylBvec;
	cylBvec.push_back(0.0);
	cylBvec.push_back(0.0);
	cylBvec.push_back(-1.0);

	// cylinder axis
	AxisType cylBaxis;
	cylBaxis.AxisPoint(cylBcen);
	cylBaxis.Direction(cylBvec);
	cylBNom.Axis(cylBaxis);

	// add to list
	featNoms.FeatureNominal().push_back(cylBNom);
	featNoms.n(featNoms.n() + 1); // increment the n counter

	// make a cylinder feature item
	CylinderFeatureItemType cylBItem;
	cylBItem.id(qifid++); // required id

	// reference to nominal
	QIFReferenceFullType cylBNomRef(cylBNom.id());
	cylBItem.FeatureNominalId(cylBNomRef);

	// Give cylinder a name
	cylBItem.FeatureName(_T("DAT_B"));

	// is this cylinder checked or set?
	CylinderCheckedFeatureType cylBCheck;
	CylinderActualDeterminationType cylBActDet;
	cylBActDet.Checked(cylBCheck); // this feature is checked, rather than set
	cylBItem.DeterminationMode(cylBActDet);

	// add to list
	featItems.FeatureItem().push_back(cylBItem);
	featItems.n(featItems.n() + 1); // increment the n counter

	// make a cylinder feature actual
	CylinderFeatureActualType cylBAct;
	cylBAct.id(qifid++); // required id

	// reference to item
	QIFReferenceFullType cylBItemRef(cylBItem.id());
	cylBAct.FeatureItemId(cylBItemRef);

	// cylinder location
	ActualPointType acylBcen;
	acylBcen.push_back(30.0);
	acylBcen.push_back(0.0);
	acylBcen.push_back(0.0);

	// cylinder axis
	ActualUnitVectorType acylBvec;
	acylBvec.push_back(0.051);
	acylBvec.push_back(0.0);
	acylBvec.push_back(-.9987);

	// cylinder axis
	ActualAxisType acylBaxis;
	acylBaxis.AxisPoint(acylBcen);
	acylBaxis.Direction(acylBvec);
	cylBAct.Axis(acylBaxis);

	// cylinder diameter
	ActualLinearValueType acylBdia(12.699);
	cylBAct.Diameter(acylBdia);

	// add to list
	featActs.FeatureActual().push_back(cylBAct);
	featActs.n(featActs.n() + 1); // increment the n counter

	// array of one reference id
	ArrayReferenceFullType datBfeats;
	datBfeats.Id().push_back(cylBNomRef);
	datBfeats.n(1);
	// hook to datum
	datB.FeatureNominalIds(datBfeats);
	// now add (finished) datum definition to list
	datumDefs.DatumDefinition().push_back(datB);
	datumDefs.n(datumDefs.n() + 1); // increment the n counter

	// make a diameter characteristic definition to be shared
	DiameterCharacteristicDefinitionType diaBCDef;
	diaBCDef.id(qifid++); // required id

	// tolerance (as opposed to limits and fits, or non-tolerance
	LinearValueType plusTolBC(0.3);
	LinearValueType minusTolBC(-0.3);
	LinearToleranceType diaBCTol;
	diaBCTol.DefinedAsLimit(0);
	diaBCTol.MaxValue(plusTolBC);
	diaBCTol.MinValue(minusTolBC);
	diaBCDef.Tolerance(diaBCTol);

	// add to list
	charDefs.CharacteristicDefinition().push_back(diaBCDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a diameter characteristic nominal
	DiameterCharacteristicNominalType diaBCNom;
	diaBCNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType diaBCDefRef(diaBCDef.id());
	diaBCNom.CharacteristicDefinitionId(diaBCDefRef);

	// nominal value
	diaBCNom.TargetValue(diaBCSize); // from feature definition above

	// give shared tolerance a name
	diaBCNom.Name(_T("DIAM1"));

	// add to list
	charNoms.CharacteristicNominal().push_back(diaBCNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a diameter characteristic item (this is not sharable)
	DiameterCharacteristicItemType diaBItem;
	diaBItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType diaBCNomRef(diaBCNom.id());
	diaBItem.CharacteristicNominalId(diaBCNomRef);

	// give tolerance a name
	diaBItem.Name(_T("DIAM1_B"));

	// point tolerance at feature
	ArrayReferenceFullType diaBFeatIds;
	diaBFeatIds.Id().push_back(cylBItemRef);
	diaBFeatIds.n(1);
	diaBItem.FeatureItemIds(diaBFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType diaBDevIds;
	diaBDevIds.Id().push_back(cmm1Ref);
	diaBDevIds.Id().push_back(cmm2Ref);
	diaBDevIds.n(2);
	diaBItem.MeasurementDeviceIds(diaBDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(diaBItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a diameter characteristic actual
	DiameterCharacteristicActualType diaBAct;
	diaBAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType diaBItemRef(diaBItem.id());
	diaBAct.CharacteristicItemId(diaBItemRef);

	// required status
	CharacteristicStatusEnumType diaBStatEnum(CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType diaBStat;
	diaBStat.CharacteristicStatusEnum(diaBStatEnum);
	diaBAct.Status(diaBStat);

	// actual value
	ActualLinearValueType diaBActVal(12.699);
	diaBAct.Value(diaBActVal);

	// point actual tolerance at actual feature
	QIFReferenceFullType cylBActRef(cylBAct.id());
	ArrayReferenceFullType diaBFeatActIds;
	diaBFeatActIds.n(1);
	diaBFeatActIds.Id().push_back(cylBActRef);
	diaBAct.FeatureActualIds(diaBFeatActIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType diaBActDevIds;
	diaBActDevIds.n(1);
	diaBActDevIds.Id().push_back(cmm2Ref);
	diaBAct.MeasurementDeviceIds(diaBActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(diaBAct);
	charActs.n(charActs.n() + 1); // increment the n counter

	// make a perpendicularity characteristic definition
	PerpendicularityCharacteristicDefinitionType perpDef;
	perpDef.id(qifid++); // required id

	// define the tolerance zone
	LinearValueType perpZone(0.2);
	perpDef.ToleranceValue(perpZone);
	// define the zone shape
	OrientationDiametricalZoneType perpDiaZone;
	OrientationZoneShapeType perpZoneShape;
	perpZoneShape.DiametricalZone(perpDiaZone);
	perpDef.ZoneShape(perpZoneShape);
	// define the material condition
	perpDef.MaterialCondition(MaterialModifierEnumType::MAXIMUM);
	// point to DRF
	QIFReferenceFullType ADRFRef(drfA.id());
	perpDef.DatumReferenceFrameId(ADRFRef);

	// add to list
	charDefs.CharacteristicDefinition().push_back(perpDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a perpendicularity characteristic nominal
	PerpendicularityCharacteristicNominalType perpNom;
	perpNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType perpDefRef(perpDef.id());
	perpNom.CharacteristicDefinitionId(perpDefRef);

	// add to list
	charNoms.CharacteristicNominal().push_back(perpNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a perpendicularity characteristic item
	PerpendicularityCharacteristicItemType perpItem;
	perpItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType perpNomRef(perpNom.id());
	perpItem.CharacteristicNominalId(perpNomRef);

	// give tolerance a name
	perpItem.Name(_T("PERP1"));

	// point tolerance at feature
	ArrayReferenceFullType perpItemIds;
	perpItemIds.n(1);
	perpItemIds.Id().push_back(cylBItemRef); // from hooking to diameter above
	perpItem.FeatureItemIds(perpItemIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType perpItemDevIds;
	perpItemDevIds.n(2);
	perpItemDevIds.Id().push_back(cmm1Ref);
	perpItemDevIds.Id().push_back(cmm2Ref);
	perpItem.MeasurementDeviceIds(perpItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(perpItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a perpendicularity characteristic actual
	PerpendicularityCharacteristicActualType perpAct;
	perpAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType perpItemRef(perpItem.id());
	perpAct.CharacteristicItemId(perpItemRef);

	// required status
	CharacteristicStatusEnumType perpStatEnum(CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType perpStat;
	perpStat.CharacteristicStatusEnum(perpStatEnum);
	perpAct.Status(perpStat);

	// actual value
	ActualLinearValueType perpActVal(0.07);
	perpAct.Value(perpActVal);

	// point actual tolerance at actual feature
	ArrayReferenceFullType perpActFeatIds;
	perpActFeatIds.n(1);
	perpActFeatIds.Id().push_back(cylBActRef);
	perpAct.FeatureActualIds(perpActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType perpActDevIds;
	perpActDevIds.n(1);
	perpActDevIds.Id().push_back(cmm2Ref);
	perpAct.MeasurementDeviceIds(perpActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(perpAct);
	charActs.n(charActs.n() + 1); // increment the n counter
#pragma endregion datum B cylinder

#pragma region datum C cylinder
	// make a cylinder feature nominal
	CylinderFeatureNominalType cylCNom;
	cylCNom.id(qifid++); // required id

	// reference to shared definition
	cylCNom.FeatureDefinitionId(cylBCDefRef);

	// cylinder location
	PointType cylCcen;
	cylCcen.push_back(150.0);
	cylCcen.push_back(0.0);
	cylCcen.push_back(0.0);

	// cylinder axis
	UnitVectorType cylCvec;
	cylCvec.push_back(0.0);
	cylCvec.push_back(0.0);
	cylCvec.push_back(-1.0);

	// cylinder axis
	AxisType cylCaxis;
	cylCaxis.AxisPoint(cylCcen);
	cylCaxis.Direction(cylCvec);
	cylCNom.Axis(cylCaxis);

	// add to list
	featNoms.FeatureNominal().push_back(cylCNom);
	featNoms.n(featNoms.n() + 1); // increment the n counter

	// make a cylinder feature item
	CylinderFeatureItemType cylCItem;
	cylCItem.id(qifid++); // required id

	// reference to nominal
	QIFReferenceFullType cylCNomRef(cylCNom.id());
	cylCItem.FeatureNominalId(cylCNomRef);

	// Give cylinder a name
	cylCItem.FeatureName(_T("DAT_C"));

	// is this cylinder checked or set?
	CylinderCheckedFeatureType cylCCheck;
	CylinderActualDeterminationType cylCActDet;
	cylCActDet.Checked(cylBCheck); // this feature is checked, rather than set
	cylCItem.DeterminationMode(cylCActDet);

	// add to list
	featItems.FeatureItem().push_back(cylCItem);
	featItems.n(featItems.n() + 1); // increment the n counter

	// make a cylinder feature actual
	CylinderFeatureActualType cylCAct;
	cylCAct.id(qifid++); // required id

	// reference to item
	QIFReferenceFullType cylCItemRef(cylCItem.id());
	cylCAct.FeatureItemId(cylCItemRef);

	// cylinder location
	ActualPointType acylCcen ;
	acylCcen.push_back(150.0);
	acylCcen.push_back(0.0);
	acylCcen.push_back(0.0);

	// cylinder axis
	ActualUnitVectorType acylCvec;
	acylCvec.push_back(-0.0099);
	acylCvec.push_back(0.0099);
	acylCvec.push_back(-0.9999);

	// cylinder axis
	ActualAxisType acylCaxis;
	acylCaxis.AxisPoint(acylCcen);
	acylCaxis.Direction(acylCvec);
	cylCAct.Axis(acylCaxis);

	// cylinder diameter
	ActualLinearValueType acylCdia(12.72);
	cylCAct.Diameter(acylCdia);

	// add to list
	featActs.FeatureActual().push_back(cylCAct);
	featActs.n(featActs.n() + 1); // increment the n counter

	// array of one reference id
	ArrayReferenceFullType datCfeats;
	datCfeats.n(1);
	datCfeats.Id().push_back(cylCNomRef);
	// hook to datum
	datC.FeatureNominalIds(datCfeats);
	// now add (finished) datum definition to list
	datumDefs.DatumDefinition().push_back(datC);
	datumDefs.n(datumDefs.n() + 1); // increment the n counter

	// make a diameter characteristic item (this is not sharable)
	DiameterCharacteristicItemType diaCItem;
	diaCItem.id(qifid++); // required id

	// required reference to nominal
	diaCItem.CharacteristicNominalId(diaBCNomRef); // shared nominal

	// give tolerance a name
	diaCItem.Name(_T("DIAM1_C"));

	// point tolerance at feature
	ArrayReferenceFullType diaCItemFeatIds;
	diaCItemFeatIds.n(1);
	diaCItemFeatIds.Id().push_back(cylCItemRef);
	diaCItem.FeatureItemIds(diaCItemFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType diaCItemDevIds;
	diaCItemDevIds.n(2);
	diaCItemDevIds.Id().push_back(cmm1Ref);
	diaCItemDevIds.Id().push_back(cmm2Ref);
	diaCItem.MeasurementDeviceIds(diaCItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(diaCItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a diameter characteristic actual
	DiameterCharacteristicActualType diaCAct;
	diaCAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType diaCItemRef(diaCItem.id());
	diaCAct.CharacteristicItemId(diaCItemRef);

	// required status
	CharacteristicStatusEnumType diaCStatEnum(CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType diaCStat;
	diaCStat.CharacteristicStatusEnum(diaCStatEnum);
	diaCAct.Status(diaCStat);

	// actual value
	ActualLinearValueType diaCActVal(12.72);
	diaCAct.Value(diaCActVal);

	// point actual tolerance at actual feature
	QIFReferenceFullType cylCActRef(cylCAct.id());
	ArrayReferenceFullType diaCActFeatIds;
	diaCActFeatIds.n(1);
	diaCActFeatIds.Id().push_back(cylCActRef);
	diaCAct.FeatureActualIds(diaCActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType diaCActDevIds;
	diaCActDevIds.n(1);
	diaCActDevIds.Id().push_back(cmm2Ref);
	diaCAct.MeasurementDeviceIds(diaCActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(diaCAct);
	charActs.n(charActs.n() + 1); // increment the n counter

	// make a position characteristic definition
	PositionCharacteristicDefinitionType posCDef;
	posCDef.id(qifid++); // required id

	// define the tolerance zone shape (diametrical)
	PositionDiametricalZoneType zoneCType;
	PositionZoneShapeType zoneCShape;
	zoneCShape.DiametricalZone(zoneCType);
	posCDef.ZoneShape(zoneCShape);

	// define the tolerance zone
	LinearValueType tolCZone(0.5);
	posCDef.ToleranceValue(tolCZone);

	// apply MMC material condition
	posCDef.MaterialCondition(MaterialModifierEnumType::MAXIMUM);

	// reference our DRF
	QIFReferenceFullType drfABDefRef(drfAB.id());
	posCDef.DatumReferenceFrameId(drfABDefRef);

	// add to list
	charDefs.CharacteristicDefinition().push_back(posCDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a position characteristic nominal
	PositionCharacteristicNominalType posCNom;
	posCNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType posCDefRef(posCDef.id());
	posCNom.CharacteristicDefinitionId(posCDefRef);

	// add to list
	charNoms.CharacteristicNominal().push_back(posCNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a position characteristic item
	PositionCharacteristicItemType posCItem;
	posCItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType posCNomRef(posCNom.id());
	posCItem.CharacteristicNominalId(posCNomRef);

	// give tolerance a name
	posCItem.Name(_T("POSN1"));

	// point tolerance at feature
	ArrayReferenceFullType posCItemFeatIds;
	posCItemFeatIds.n(1);
	posCItemFeatIds.Id().push_back(cylCItemRef); // from diameter hook above
	posCItem.FeatureItemIds(posCItemFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType posCItemDevIds;
	posCItemDevIds.n(2);
	posCItemDevIds.Id().push_back(cmm1Ref);
	posCItemDevIds.Id().push_back(cmm2Ref);
	posCItem.MeasurementDeviceIds(posCItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(posCItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a position characteristic actual
	PositionCharacteristicActualType posCAct;
	posCAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType posCItemRef(posCItem.id());
	posCAct.CharacteristicItemId(posCItemRef);

	// required status
	CharacteristicStatusEnumType posCStatEnum (CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType posCStat;
	posCStat.CharacteristicStatusEnum(posCStatEnum);
	posCAct.Status(posCStat);

	// actual value
	ActualLinearValueType posCActVal(0.102);
	posCAct.Value(posCActVal);

	// point actual tolerance at actual feature
	ArrayReferenceFullType posCActFeatIds;
	posCActFeatIds.n(1);
	posCActFeatIds.Id().push_back(cylCActRef);
	posCAct.FeatureActualIds(posCActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType posCActDevIds;
	posCActDevIds.n(1);
	posCActDevIds.Id().push_back(cmm2Ref);
	posCAct.MeasurementDeviceIds(posCActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(posCAct);
	charActs.n(charActs.n() + 1); // increment the n counter
#pragma endregion datum C cylinder

#pragma region circle back to ABC
	// make a circle feature definition
	CircleFeatureDefinitionType circDef;
	circDef.id(qifid++); // required id

	// feature size
	LinearValueType diaSize(6.35);
	circDef.Diameter(diaSize);

	// material side
	circDef.InternalExternal(InternalExternalEnumType::INTERNAL);

	// add to list
	featDefs.FeatureDefinition().push_back(circDef);
	featDefs.n(featDefs.n() + 1); // increment the n counter

	// make a circle feature nominal
	CircleFeatureNominalType circNom;
	circNom.id(qifid++); // required id

	// reference to definition
	QIFReferenceType circDefRef(circDef.id());
	circNom.FeatureDefinitionId(circDefRef);

	// circle location
	PointType circLoc;
	circLoc.push_back(90.0);
	circLoc.push_back(50.0);
	circLoc.push_back(-1.0);
	circNom.Location(circLoc);

	// circle normal
	UnitVectorType circNor;
	circNor.push_back(0.0);
	circNor.push_back(0.0);
	circNor.push_back(1.0);
	circNom.Normal(circNor);

	// add to list
	featNoms.FeatureNominal().push_back(circNom);
	featNoms.n(featNoms.n() + 1); // increment the n counter

	// make a circle feature item
	CircleFeatureItemType circItem;
	circItem.id(qifid++); // required id

	// reference to definition
	QIFReferenceFullType circNomRef(circNom.id());
	circItem.FeatureNominalId(circNomRef);

	// Give circle a name
	circItem.FeatureName(_T("CIRC1"));

	// is this circle checked or set?
	CircleCheckedFeatureType circCheck;
	CircleActualDeterminationType circActDet;
	circActDet.Checked(circCheck); // this feature is checked, rather than set
	circItem.DeterminationMode(circActDet);

	// add to list
	featItems.FeatureItem().push_back(circItem);
	featItems.n(featItems.n() + 1); // increment the n counter

	// make a circle feature actual
	CircleFeatureActualType circAct;
	circAct.id(qifid++); // required id

	// reference to item
	QIFReferenceFullType circItemRef(circItem.id());
	circAct.FeatureItemId(circItemRef);

	// circle location
	ActualPointType circActLoc;
	circActLoc.push_back(90.015);
	circActLoc.push_back(49.973);
	circActLoc.push_back(-1.0);
	circAct.Location(circActLoc);

	// circle normal
	ActualUnitVectorType circActNor;
	circActNor.push_back(0.0);
	circActNor.push_back(0.0);
	circActNor.push_back(1.0);
	circAct.Normal(circActNor);

	// feature size
	ActualLinearValueType adiaSize(6.2);
	circAct.Diameter(adiaSize);

	// add to list
	featActs.FeatureActual().push_back(circAct);
	featActs.n(featActs.n() + 1); // increment the n counter

	// make a diameter characteristic definition
	DiameterCharacteristicDefinitionType diaDef;
	diaDef.id(qifid++); // required id

	// tolerance (as opposed to limits and fits, or non-tolerance)
	LinearValueType highSize(6.5);
	LinearValueType lowSize(6.3);
	LinearToleranceType diaTol;
	diaTol.DefinedAsLimit(1);
	diaTol.MaxValue(highSize);
	diaTol.MinValue(lowSize);
	diaDef.Tolerance(diaTol);

	// add to list
	charDefs.CharacteristicDefinition().push_back(diaDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a diameter characteristic nominal
	DiameterCharacteristicNominalType diaNom;
	diaNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType diaDefRef(diaDef.id());
	diaNom.CharacteristicDefinitionId(diaDefRef);

	// nominal value
	//diaNom.TargetValue(diaSize);

	// add to list
	charNoms.CharacteristicNominal().push_back(diaNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a diameter characteristic item
	DiameterCharacteristicItemType diaItem;
	diaItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType diaNomRef(diaNom.id());
	diaItem.CharacteristicNominalId(diaNomRef);

	// give tolerance a name
	diaItem.Name(_T("DIAM2"));

	// point tolerance at feature
	ArrayReferenceFullType diaItemFeatIds;
	diaItemFeatIds.n(1);
	diaItemFeatIds.Id().push_back(circItemRef);
	diaItem.FeatureItemIds(diaItemFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType diaItemDevIds;
	diaItemDevIds.n(2);
	diaItemDevIds.Id().push_back(cmm1Ref);
	diaItemDevIds.Id().push_back(cmm2Ref);
	diaItem.MeasurementDeviceIds(diaItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(diaItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a diameter characteristic actual
	DiameterCharacteristicActualType diaAct;
	diaAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType diaItemRef(diaItem.id());
	diaAct.CharacteristicItemId(diaItemRef);

	// required status
	CharacteristicStatusEnumType diaStatEnum(CharacteristicStatusEnumType::FAIL);
	CharacteristicStatusType diaStat;
	diaStat.CharacteristicStatusEnum(diaStatEnum);
	diaAct.Status(diaStat);

	// actual value
	ActualLinearValueType diaActVal(6.2);
	diaAct.Value(diaActVal);

	// point tolerance actual at feature actual
	QIFReferenceFullType circActRef(circAct.id());
	ArrayReferenceFullType diaActFeatIds;
	diaActFeatIds.n(1);
	diaActFeatIds.Id().push_back(circActRef);
	diaAct.FeatureActualIds(diaActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType diaActDevIds;
	diaActDevIds.n(1);
	diaActDevIds.Id().push_back(cmm2Ref);
	diaAct.MeasurementDeviceIds(diaActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(diaAct);
	charActs.n(charActs.n() + 1); // increment the n counter

	// make a position characteristic definition
	PositionCharacteristicDefinitionType posDef;
	posDef.id(qifid++); // required id

	// define the tolerance zone shape (diametrical)
	PositionDiametricalZoneType zoneType;
	PositionZoneShapeType zoneShape;
	zoneShape.DiametricalZone(zoneType);
	posDef.ZoneShape(zoneShape);

	// define the tolerance zone
	LinearValueType tolZone(0.75);
	posDef.ToleranceValue(tolZone);

	// apply MMC material condition
	posDef.MaterialCondition(MaterialModifierEnumType::MAXIMUM);

	// reference our DRF
	QIFReferenceFullType drfDefRef(drfABC.id());
	posDef.DatumReferenceFrameId(drfDefRef);

	// add to list
	charDefs.CharacteristicDefinition().push_back(posDef);
	charDefs.n(charDefs.n() + 1); // increment the n counter

	// make a position characteristic nominal
	PositionCharacteristicNominalType posNom;
	posNom.id(qifid++); // required id

	// required reference to definition
	QIFReferenceType posDefRef(posDef.id());
	posNom.CharacteristicDefinitionId(posDefRef);

	// add to list
	charNoms.CharacteristicNominal().push_back(posNom);
	charNoms.n(charNoms.n() + 1); // increment the n counter

	// make a position characteristic item
	PositionCharacteristicItemType posItem;
	posItem.id(qifid++); // required id

	// required reference to nominal
	QIFReferenceFullType posNomRef(posNom.id());
	posItem.CharacteristicNominalId(posNomRef);

	// give tolerance a name
	posItem.Name(_T("POSN2"));

	// point tolerance at feature
	ArrayReferenceFullType posItemFeatIds;
	posItemFeatIds.n(1);
	posItemFeatIds.Id().push_back(circItemRef); // from diameter
	posItem.FeatureItemIds(posItemFeatIds);

	// add our measurement devices (this is a list of devices that could measure the characteristic)
	ArrayReferenceFullType posItemDevIds;
	posItemDevIds.n(2);
	posItemDevIds.Id().push_back(cmm1Ref);
	posItemDevIds.Id().push_back(cmm2Ref);
	posItem.MeasurementDeviceIds(posItemDevIds);

	// add to list
	charItems.CharacteristicItem().push_back(posItem);
	charItems.n(charItems.n() + 1); // increment the n counter

	// make a position characteristic actual
	PositionCharacteristicActualType posAct;
	posAct.id(qifid++); // required id

	// required reference to item
	QIFReferenceFullType posItemRef(posItem.id());
	posAct.CharacteristicItemId(posItemRef);

	// required status
	CharacteristicStatusEnumType posStatEnum(CharacteristicStatusEnumType::PASS);
	CharacteristicStatusType posStat;
	posStat.CharacteristicStatusEnum(posStatEnum);
	posAct.Status(posStat);

	// actual value
	ActualLinearValueType posActVal(0.0618);
	posAct.Value(posActVal);

	// point actual tolerance at actual feature
	ArrayReferenceFullType posActFeatIds;
	posActFeatIds.n(1);
	posActFeatIds.Id().push_back(circActRef);
	posAct.FeatureActualIds(posActFeatIds);

	// add our measurement device (this is the device that actually measured the characteristic)
	ArrayReferenceFullType posActDevIds;
	posActDevIds.n(1);
	posActDevIds.Id().push_back(cmm2Ref);
	posAct.MeasurementDeviceIds(posActDevIds);

	// add to list
	charActs.CharacteristicActual().push_back(posAct);
	charActs.n(charActs.n() + 1); // increment the n counter
#pragma endregion circle back to ABC

#pragma region QIF document
	/// Assemble the QIF document

	// make a new QIF document
	QIFDocumentType qifdoc;

	// create and assign the QPId
	CString qpidstr;
	UUID myuuid;
	UuidCreate(&myuuid);
	qpidstr.Format(_T("%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x"),
		myuuid.Data1,
		myuuid.Data2,
		myuuid.Data3,
		myuuid.Data4[0],
		myuuid.Data4[1],
		myuuid.Data4[2],
		myuuid.Data4[3],
		myuuid.Data4[4],
		myuuid.Data4[5],
		myuuid.Data4[6],
		myuuid.Data4[7]);
	qifdoc.QPId(LPCTSTR(qpidstr));

	// add some application identifying information
	xsd::qif21::ApplicationType app; // there is a namespace conflict with this type so it must be prefixed with xsd::qif2::
	app.Name(_T("QIF_CPlusPlus open source QIF application"));
	app.Organization(_T("Dimensional Metrology Standards Consortium (DMSC)"));
	QIFDocumentHeaderType header;
	header.Application(app);
	qifdoc.Header(header);

	// QIF units are SI units unless otherwise specified
	LinearUnitType linearUnit;
	linearUnit.SIUnitName(_T("meter"));
	linearUnit.UnitName(_T("mm"));
	UnitConversionType unitConversion;
	unitConversion.Factor(0.001);
	linearUnit.UnitConversion(unitConversion);
	PrimaryUnitsType primaryUnits;
	primaryUnits.LinearUnit(linearUnit);
	FileUnitsType fileUnits;
	fileUnits.PrimaryUnits(primaryUnits);
	qifdoc.FileUnits(fileUnits);

	// add our measurement devices
	MeasurementResourcesType measResources;
	measResources.MeasurementDevices(measDevices);
	qifdoc.MeasurementResources(measResources);

	// add the datum definitions list
	qifdoc.DatumDefinitions(datumDefs);

	// add the datum reference frame list
	qifdoc.DatumReferenceFrames(drfDefs);

	// Create the features aspects element
	FeatureAspectsListsType featAspects;

	// Feature Definitions
	featAspects.FeatureDefinitions(featDefs);

	// Feature Nominals
	featAspects.FeatureNominals(featNoms);

	// Feature Items
	featAspects.FeatureItems(featItems);

	// add feature aspects to document
	qifdoc.Features(featAspects);

	// Create the characteristics aspects element
	CharacteristicAspectsListsType charAspects;

	// required GD&T standard
	FormalStandardEnumType standardEnum(FormalStandardEnumType::ASME_Y14_5_1994);
	FormalStandardType standard;
	standard.FormalStandardEnum(standardEnum);
	charAspects.FormalStandard(standard);

	// Characteristic Definitions
	charAspects.CharacteristicDefinitions(charDefs);

	// Characteristic Nominals
	charAspects.CharacteristicNominals(charNoms);

	// Characteristic Items
	charAspects.CharacteristicItems(charItems);

	// add characteristic aspects to document
	qifdoc.Characteristics(charAspects);

	// create the measurement results
	MeasurementResultsType measResults;
	measResults.id(qifid++); // required id

	// overall inspection status
	InspectionStatusEnumType overallStatEnum(InspectionStatusEnumType::FAIL);
	InspectionStatusType overallStat;
	overallStat.InspectionStatusEnum(overallStatEnum);
	measResults.InspectionStatus(overallStat);

	// measured features
	MeasuredFeaturesType measuredFeatures;
	measuredFeatures.FeatureActuals(featActs);
	measResults.MeasuredFeatures(measuredFeatures);

	// measured characteristics
	MeasuredCharacteristicsType measuredCharacteristics;
	measuredCharacteristics.CharacteristicActuals(charActs);
	measResults.MeasuredCharacteristics(measuredCharacteristics);

	// add measured results to list of measured results
	MeasurementResultsSetType measurementResultsSet;
	measurementResultsSet.MeasurementResults().push_back(measResults);
	measurementResultsSet.n(1);
	MeasurementsResultsType measurementsResults;
	measurementsResults.MeasurementResultsSet(measurementResultsSet);
	// add measured results to document
	qifdoc.MeasurementsResults(measurementsResults);

	// add a (trivial) plan
	MeasureEvaluateAllActionType measAll;
	UnnumberedPlanElementsType steps;
	steps.PlanElement().push_back(measAll);
	steps.n(1);
	UnorderedActionGroupType planRoot;
	planRoot.Steps(steps);
	MeasurementPlanType measurementPlan;
	measurementPlan.PlanRoot(planRoot);
	qifdoc.MeasurementPlan(measurementPlan);

	// set idMax
	qifdoc.idMax(qifid - 1);

	// needed to validate
	xml_schema::namespace_infomap map;
	map[_T("")].name = _T("http://qifstandards.org/xsd/qif2");
	map[_T("")].schema = _T("../QIFApplications/QIFDocument.xsd");

	// set up file save dialog
	CFileDialog OutDlg(FALSE, _T("QIF"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("QIF document files (*.QIF)|*.qif|All files (*.*)|*.*||")); // FALSE = save file dialog
	// launch the dialog box
	if(OutDlg.DoModal() != IDOK ) return;
	{ // this ensures "os" will go out of scope before ShellExecute
		ofstream os(OutDlg.GetPathName());

		// write the document (can't see it until "os" goes out of scope)
		try
		{
			QIFDocument(os, qifdoc, map);
		}
		catch (const xml_schema::exception& e)
		{
			const char *what_went_wrong = e.what();
			int break_here = 1;
		}
	}
	ShellExecute(NULL, _T("Open"), OutDlg.GetPathName(), NULL, NULL, SW_SHOW);

#pragma endregion QIF document

}
#pragma endregion write QIF
