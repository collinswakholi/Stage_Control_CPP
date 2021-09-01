
// StageTestNewDlg.h : header file
//
# include "Tango.h"
#pragma once

#include "Prior.h"

// CStageTestNewDlg dialog
class CStageTestNewDlg : public CDialogEx
{
// Construction
public:
	CStageTestNewDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STAGETESTNEW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	afx_msg void displayStatusMsg(CString s);

	int cur_sel = 0;
	CComboBox myStageSelection, mySerialSelection;
	CMFCButton loadBtn, homeBtn;
	CStatic myStatus;
	CTango* pTango;

	IScan* pScan;
	IStage* pStage;
	
public:
	afx_msg void OnCbnSelchangeSelstage();
	afx_msg void OnBnClickedLoadStage();
	char thorSerial[9] = { 0, };
	char prSerial[64], mzSerial[64];
	double posx, posy, posz = 0;
	double velx, vely, velz = 0;
	double accx, accy, accz = 0;

	long prior_port = 3;
	int marz_port = 4;
	int pSesID;

	double thor_pos_factor = 409600.0;
	double thor_vel_factor = 21987328.0;
	double thor_acc_factor = 4506.0;

	//CTango* myMarz;

	//myMarz = new CTango();
	afx_msg void OnBnClickedHome();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedSetVars();
};
