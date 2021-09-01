
// StageTestNew.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

// CStageTestNewApp:
// See StageTestNew.cpp for the implementation of this class
//

class CStageTestNewApp : public CWinApp
{
public:
	CStageTestNewApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CStageTestNewApp theApp;
