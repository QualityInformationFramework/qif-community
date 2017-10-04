
// QIF_CPlusPlus.cpp : Defines the class behaviors for the application.
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


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQIF_CPlusPlusApp

BEGIN_MESSAGE_MAP(CQIF_CPlusPlusApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CQIF_CPlusPlusApp construction

CQIF_CPlusPlusApp::CQIF_CPlusPlusApp()
{
	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CQIF_CPlusPlusApp object

CQIF_CPlusPlusApp theApp;


// CQIF_CPlusPlusApp initialization

BOOL CQIF_CPlusPlusApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager *pShellManager = new CShellManager;

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CQIF_CPlusPlusDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Delete the shell manager created above.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

