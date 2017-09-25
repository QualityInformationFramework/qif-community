
// QIF_CPlusPlus.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CQIF_CPlusPlusApp:
// See QIF_CPlusPlus.cpp for the implementation of this class
//

class CQIF_CPlusPlusApp : public CWinApp
{
public:
	CQIF_CPlusPlusApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CQIF_CPlusPlusApp theApp;