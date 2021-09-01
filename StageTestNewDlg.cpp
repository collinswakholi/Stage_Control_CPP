
// StageTestNewDlg.cpp : implementation file

#include "pch.h"
#include "framework.h"
#include "StageTestNew.h"
#include "StageTestNewDlg.h"
#include "afxdialogex.h"
#include <iostream>
#include <string>

#pragma warning(disable : 4996)

// include thorlabs libraries
#include "Thorlabs.MotionControl.IntegratedStepperMotors.h"
#include "exception"

// include Prior libraries
#include "Prior.h"
#pragma warning(push)
#pragma warning(disable:4146)

#pragma warning(pop)

// include Marzhauser libraries
# include "Tango.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//using namespace std;

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// CStageTestNewDlg dialog

CStageTestNewDlg::CStageTestNewDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_STAGETESTNEW_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CStageTestNewDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SELSTAGE, myStageSelection);
	DDX_Control(pDX, IDC_SELSERIAL, mySerialSelection);
	DDX_Control(pDX, IDC_STATUS, myStatus);
	DDX_Control(pDX, IDC_LOAD_STAGE, loadBtn);
	DDX_Control(pDX, IDC_HOME, homeBtn);
}

BEGIN_MESSAGE_MAP(CStageTestNewDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_SELSTAGE, &CStageTestNewDlg::OnCbnSelchangeSelstage)
	ON_BN_CLICKED(IDC_LOAD_STAGE, &CStageTestNewDlg::OnBnClickedLoadStage)
	ON_BN_CLICKED(IDC_HOME, &CStageTestNewDlg::OnBnClickedHome)
	ON_BN_CLICKED(IDCANCEL, &CStageTestNewDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_SET_VARS, &CStageTestNewDlg::OnBnClickedSetVars)
END_MESSAGE_MAP()

// CStageTestNewDlg message handlers

BOOL CStageTestNewDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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
	CString s;

	pTango = new CTango();

	this->myStageSelection.SetCurSel(this->cur_sel);
	this->myStageSelection.GetLBText(this->cur_sel, s);

	//enable serial selection if thorlabs selected
	if (this->cur_sel == 0)
	{
		mySerialSelection.EnableWindow(TRUE);
	}

	s.Format(_T("%s Currently selected"), s);
	displayStatusMsg(s);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CStageTestNewDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CStageTestNewDlg::OnPaint()
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
HCURSOR CStageTestNewDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CStageTestNewDlg::displayStatusMsg(CString s) {
	s.Format(_T(R"(Status: %s)"), s);
	this->myStatus.SetWindowTextW(s);
}


void CStageTestNewDlg::OnCbnSelchangeSelstage()
{
	// TODO: Add your control notification handler code here
	
	UpdateData();

	this->loadBtn.EnableWindow(TRUE);

	CString s, msg;

	msg.Format(_T("Please wait..."), msg);
	displayStatusMsg(msg);
	msg.Format(_T(""));

	this->cur_sel = this->myStageSelection.GetCurSel();
	int err_code, Inits;

	switch (this->cur_sel)
	{
		case 0:
			this->myStageSelection.GetLBText(this->cur_sel, s);
			mySerialSelection.EnableWindow(TRUE);
			
			if (TLI_BuildDeviceList() == 0) {
				short n = TLI_GetDeviceListSize();
				char serialNos[100];
				TLI_GetDeviceListByTypeExt(serialNos, 100, 45);

				// output list of matching devices
				{
					char* searchContext = nullptr;
					char* p = strtok_s(serialNos, ",", &searchContext);

					while (p != nullptr) {
						TLI_DeviceInfo deviceInfo; // get device info from device
						TLI_GetDeviceInfo(p, &deviceInfo);// get strings from device info structure
						char desc[65];
						strncpy_s(desc, deviceInfo.description, 64);
						desc[64] = '\0';

						char serialNo[9];

						strncpy_s(serialNo, deviceInfo.serialNo, 8);
						serialNo[8] = '\0';

						// set to combo
						wchar_t wcs_p[100], wcs_desc[65], wcs_serialNo[9];
						mbstowcs(wcs_p, p, 100);
						mbstowcs(wcs_desc, desc, 65);
						mbstowcs(wcs_serialNo, serialNo, 9);
						this->mySerialSelection.AddString(wcs_serialNo);

						// output
						p = strtok_s(nullptr, ",", &searchContext);
					}
				}
			}

			msg.Format(_T("%s "), s);
			break;

		case 1:

			this->myStageSelection.GetLBText(this->cur_sel, s);
			mySerialSelection.EnableWindow(FALSE);

			// initialize
			long pserial;

			// find serial number

			this->pScan->get_SerialNumber(&pserial);
			//err_code = PriorScientificSDK_cmd(this->pSesID, "controller.serialnumber.get", this->prSerial);

			msg.Format(_T("%s, SN = '%l'"), s, pserial);

			break;

		case 2:

			//this->myMarz = new CTango();

			this->myStageSelection.GetLBText(this->cur_sel, s);
			mySerialSelection.EnableWindow(FALSE);
			
			// get Tango serial number
			pTango->EnableCommandRetry(TRUE); // enables/disables repeated sending of commands in case of errors
			pTango->GetSerialNr(this->mzSerial, 64);

			msg.Format(_T("%s SN = '%s'"), s, this->mzSerial);
			break;
	}
	
	msg.Format(_T("%s Currently selected"),s);
	displayStatusMsg(msg);

	s.Format(_T(""));
	UpdateData();
}


void CStageTestNewDlg::OnBnClickedLoadStage()
{
	// TODO: Add your control notification handler code here
	this->homeBtn.EnableWindow(TRUE);


	CString msg;
	msg.Format(_T("Laoding Stage..."));
	displayStatusMsg(msg);

	UpdateData();

	int err_code, x_units, y_units, z_units;
	CString s, status_msg;

	switch (this->cur_sel)
	{

	case 0:
		this->mySerialSelection.GetLBText(this->mySerialSelection.GetCurSel(), s);
		wcstombs(this->thorSerial, s.GetBuffer(), 9);

		GetDlgItem(IDC_EDIT_POSX)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT_VELX)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT_ACCX)->EnableWindow(TRUE);

		GetDlgItem(IDC_SET_VARS)->EnableWindow(TRUE);
		GetDlgItem(IDC_RESET)->EnableWindow(TRUE);

		status_msg.Format(_T("SN '%s' is Loading..."), CString(this->thorSerial));
		Sleep(10);
		displayStatusMsg(status_msg);

		// load stage
		if (ISC_Open(this->thorSerial) == 0 && ISC_EnableChannel(this->thorSerial) == 0) {
			//Sleep(5000);
			ISC_StartPolling(this->thorSerial, 200);
			Sleep(1000);

			//ISC_LoadNamedSettings(this->thorSerial, "HS LTS300 300mm Stage");
			//Sleep(300);

			status_msg.Format(_T("Homing Device..."));
			displayStatusMsg(status_msg);
			Sleep(30);

			ISC_Home(this->thorSerial); // home device

			WORD messageType;
			WORD messageId;
			DWORD messageData;
			ISC_WaitForMessage(this->thorSerial, &messageType, &messageId, &messageData);

			while (messageType != 2 || messageId != 0)
			{
				ISC_WaitForMessage(this->thorSerial, &messageType, &messageId, &messageData);
			}

			status_msg.Format(_T("LTS300 Device '%s' Homed Successfully"), CString(this->thorSerial));
			displayStatusMsg(status_msg);
			Sleep(30);

			this->posx = ISC_GetPosition(this->thorSerial); // in mm
			Sleep(500);
			this->posx = this->posx / this->thor_pos_factor;

			ISC_RequestVelParams(this->thorSerial);
			Sleep(250);

			int my_acc, my_vel;
			ISC_GetVelParams(this->thorSerial, &my_acc, &my_vel);// in DeviceUnits
			Sleep(250);

			//ISC_GetRealValueFromDeviceUnit(this->thorSerial, my_acc, &this->accx, 2); // 0: distance, 1: velocity, 2:acceleration
			//ISC_GetRealValueFromDeviceUnit(this->thorSerial, my_vel, &this->velx, 1); // 0: distance, 1: velocity, 2:acceleration

			this->accx = my_acc / this->thor_acc_factor;
			this->velx = my_vel / this->thor_vel_factor;

			// display
			CString val;
			val.Format(_T("%f"), this->posx);
			GetDlgItem(IDC_EDIT_POSX)->SetWindowTextW(val);

			val.Format(_T("%f"), this->velx);
			GetDlgItem(IDC_EDIT_VELX)->SetWindowTextW(val);

			val.Format(_T("%f"), this->accx);
			GetDlgItem(IDC_EDIT_ACCX)->SetWindowTextW(val);

		}
		break;

	case 1: // prior scientific
		//sprintf(my_cmd, "controller.connect COM%d", this->prior_port);
		long ret, pserial;
		this->pScan->Connect(&this->prior_port, &ret);


		//err_code = PriorScientificSDK_cmd(this->pSesID, my_cmd, res); // Connect --> return error code should be "0"
		if (ret) {
			//not connected
			status_msg.Format(_T("Couldnt connect to Prior Device..."));
			displayStatusMsg(status_msg);
			Sleep(30);
		}
		else
		{
			// connected
			this->pScan->RestoreDefaults(&ret); // restore stage defaults
			this->pStage->put_CorrectionEnable(TRUE); // enable stage correction

			this->pStage->put_JoystickEnable(true); // enable jotystick


			// get velocity params
			double posx, posy, vel, acc;

			this->pStage->GetPosition(&posx, &posy, &ret); // in microns
			this->pStage->get_MaxAcceleration(&acc); // in microns/second squared
			this->pStage->get_MaxSpeed(&vel); // in microns/second

			this->velx = vel;
			this->vely = vel;

			this->accx = acc;
			this->accy = acc;

			this->posx = posx;
			this->posy = posy;

			// display
			CString val;
			val.Format(_T("%f"), this->posx);
			GetDlgItem(IDC_EDIT_POSX)->SetWindowTextW(val);

			val.Format(_T("%f"), this->velx);
			GetDlgItem(IDC_EDIT_VELX)->SetWindowTextW(val);

			val.Format(_T("%f"), this->accx);
			GetDlgItem(IDC_EDIT_ACCX)->SetWindowTextW(val);


			val.Format(_T("%f"), this->posy);
			GetDlgItem(IDC_EDIT_POSY)->SetWindowTextW(val);

			val.Format(_T("%f"), this->vely);
			GetDlgItem(IDC_EDIT_VELY)->SetWindowTextW(val);

			val.Format(_T("%f"), this->accy);
			GetDlgItem(IDC_EDIT_ACCY)->SetWindowTextW(val);

			status_msg.Format(_T("Prior Stage Connected Successfully"));
			displayStatusMsg(status_msg);
			Sleep(30);
		
		}

		break;
		// 
	case 2:
		char comPort;
		char str[5];
		comPort = 'COM' + sprintf(str, "%d", this->marz_port);
		int interType = 1; // interface type is always 1 for RS232, PCI and USB
		int baudRate = 57600;
		pTango->ConnectSimple(interType, &comPort, baudRate, TRUE); // Connect to Tango 

		// calibrate stage // Home stage
		int xflag, yflag;
		xflag = 0;
		yflag = 1;

		pTango->CalibrateEx(xflag); // calibrate x axis
		pTango->CalibrateEx(yflag); // calibrate y axis

		// set stage units to um
		x_units = 1;
		y_units = 1;
		z_units = 1;
		pTango->SetDimensions(x_units, y_units, z_units, 1);
		pTango->SetTVROutResolution(5, 5, 4, 3); // set resolution to 10nm in X and Y, 0.1um in z and 1um in r axis

		// enable limit switch
		pTango->SetSwitchActive(7, 7, 7, 0);

		pTango->SetJoystickOn(true, true); // joystick, for moving stage in x,y direction
		pTango->SetHandWheelOn(true, true); // handwheel, for moving stage in z direction

		// get x, y, z params
		double dummy_azi;
		pTango->GetVel(&this->velx, &this->vely, &this->velz, &dummy_azi);
		pTango->GetAccel(&this->accx, &this->accy, &this->accz, &dummy_azi);

		// get position in x, y and z coordinates
		pTango->GetPos(&this->posx, &this->posy, &this->posz, &dummy_azi);

		status_msg.Format(_T("Marz Stage Homed Successfully"));
		displayStatusMsg(status_msg);
		Sleep(30);

		// display
		CString val;
		val.Format(_T("%f"), this->posx);
		GetDlgItem(IDC_EDIT_POSX)->SetWindowTextW(val);

		val.Format(_T("%f"), this->velx);
		GetDlgItem(IDC_EDIT_VELX)->SetWindowTextW(val);

		val.Format(_T("%f"), this->accx);
		GetDlgItem(IDC_EDIT_ACCX)->SetWindowTextW(val);


		val.Format(_T("%f"), this->posy);
		GetDlgItem(IDC_EDIT_POSY)->SetWindowTextW(val);

		val.Format(_T("%f"), this->vely);
		GetDlgItem(IDC_EDIT_VELY)->SetWindowTextW(val);

		val.Format(_T("%f"), this->accy);
		GetDlgItem(IDC_EDIT_ACCY)->SetWindowTextW(val);


		val.Format(_T("%f"), this->posz);
		GetDlgItem(IDC_EDIT_POSZ)->SetWindowTextW(val);

		val.Format(_T("%f"), this->velz);
		GetDlgItem(IDC_EDIT_VELZ)->SetWindowTextW(val);

		val.Format(_T("%f"), this->accz);
		GetDlgItem(IDC_EDIT_ACCZ)->SetWindowTextW(val);

		break;

	}

	msg.Format(_T("Loading Complete"));
	displayStatusMsg(msg);
}


void CStageTestNewDlg::OnBnClickedHome()
{
	// TODO: Add your control notification handler code here
	CString status_msg;
	int x_units, y_units, z_units;

	switch (this->cur_sel)
	{
	case 0:
		status_msg.Format(_T("Homing Device..."));
		displayStatusMsg(status_msg);
		Sleep(30);

		ISC_Home(this->thorSerial); // home device

		WORD messageType;
		WORD messageId;
		DWORD messageData;
		ISC_WaitForMessage(this->thorSerial, &messageType, &messageId, &messageData);

		while (messageType != 2 || messageId != 0)
		{
			ISC_WaitForMessage(this->thorSerial, &messageType, &messageId, &messageData);
		}

		status_msg.Format(_T("Device '%s' Homed Successfully"), CString(this->thorSerial));
		displayStatusMsg(status_msg);
		Sleep(30);
		break;

	case 1:
		char res[64];
		status_msg.Format(_T("Homing Device..."));
		displayStatusMsg(status_msg);
		Sleep(30);

		// 

		status_msg.Format(_T("Prior Stage Homed Successfully"));
		displayStatusMsg(status_msg);
		Sleep(30);
		break;

	case 2:
		// calibrate stage // Home stage
		int xflag, yflag;
		xflag = 0;
		yflag = 1;

		pTango->CalibrateEx(xflag); // calibrate x axis
		pTango->CalibrateEx(yflag); // calibrate y axis

		// set stage units to um
		x_units = 1;
		y_units = 1;
		z_units = 1;
		pTango->SetDimensions(x_units, y_units, z_units, 1);
		pTango->SetTVROutResolution(5, 5, 4, 3); // set resolution to 10nm in X and Y, 0.1um in z and 1um in r axis

		// enable limit switch
		pTango->SetSwitchActive(7, 7, 7, 0);

		status_msg.Format(_T("Marz Stage Homed/Calibrated Successfully"));
		displayStatusMsg(status_msg);
		Sleep(30);
		break;

	default:
		break;
	}
}


void CStageTestNewDlg::OnBnClickedCancel()
{
	CString msg;
	msg.Format(_T("Exiting App..."));
	displayStatusMsg(msg);

	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
	

	switch (this->cur_sel) {

	case 0:
		ISC_ClearMessageQueue(this->thorSerial);
		ISC_StopImmediate(this->thorSerial);//stop motion
		ISC_StopPolling(this->thorSerial);// stop stage polling
		ISC_Close(this->thorSerial); // close stage object

		break;

	case 1:
		long ret;
		this->pScan->InterruptAllMotion(&ret);
		this->pStage->put_JoystickEnable(false);
		this->pScan->DisConnect(&ret);

		break;
	case 2:
		pTango->Disconnect();
		delete pTango;
		break;
	}
}


void CStageTestNewDlg::OnBnClickedSetVars()
{
	// TODO: Add your control notification handler code here
	UpdateData();

	CString msg;

	msg.Format(_T("Please wait..."));
	displayStatusMsg(msg);
	Sleep(30);

	CString posx_str, posy_str, posz_str;
	CString velx_str, vely_str, velz_str;
	CString accx_str, accy_str, accz_str;
	int my_dev_vel = 0;
	int my_dev_acc = 0;
	int my_dev_pos = 0;

	GetDlgItem(IDC_EDIT_POSX)->GetWindowTextW(posx_str);
	GetDlgItem(IDC_EDIT_VELX)->GetWindowTextW(velx_str);
	GetDlgItem(IDC_EDIT_ACCX)->GetWindowTextW(accx_str);

	GetDlgItem(IDC_EDIT_POSY)->GetWindowTextW(posy_str);
	GetDlgItem(IDC_EDIT_VELY)->GetWindowTextW(vely_str);
	GetDlgItem(IDC_EDIT_ACCY)->GetWindowTextW(accy_str);

	GetDlgItem(IDC_EDIT_POSZ)->GetWindowTextW(posz_str);
	GetDlgItem(IDC_EDIT_VELZ)->GetWindowTextW(velz_str);
	GetDlgItem(IDC_EDIT_ACCZ)->GetWindowTextW(accz_str);

	if (!posx_str.IsEmpty() || !velx_str.IsEmpty() || !accx_str.IsEmpty() ||
		!posy_str.IsEmpty() || !vely_str.IsEmpty() || !accy_str.IsEmpty() || 
		!posz_str.IsEmpty() || !velz_str.IsEmpty() || !accz_str.IsEmpty())
	{
		this->posx = _wtof(posx_str);
		this->velx = _wtof(velx_str);
		this->accx = _wtof(accx_str);

		this->posy = _wtof(posy_str);
		this->vely = _wtof(vely_str);
		this->accy = _wtof(accy_str);

		this->posz = _wtof(posz_str);
		this->velz = _wtof(velz_str);
		this->accz = _wtof(accz_str);
	}

	switch (this->cur_sel) {

	case 0: // thorlabs stage

		//ISC_GetDeviceUnitFromRealValue(this->thorSerial, this->posx, &my_dev_pos, 0);
		//ISC_GetDeviceUnitFromRealValue(this->thorSerial, this->velx, &my_dev_vel, 1);
		//ISC_GetDeviceUnitFromRealValue(this->thorSerial, this->accx, &my_dev_acc, 2);

		my_dev_acc = this->accx * this->thor_acc_factor;
		my_dev_vel = this->velx * this->thor_vel_factor;
		my_dev_pos = this->posx * this->thor_pos_factor;

		ISC_SetVelParams(this->thorSerial, my_dev_acc, my_dev_vel);
		ISC_MoveToPosition(this->thorSerial, my_dev_pos);

		break;

	case 1: // prior scientific stage

		long ret;

		// set vel and acc
		this->pStage->put_MaxAcceleration(this->accx);
		this->pStage->put_MaxSpeed(this->velx);

		// set position
		this->pStage->MoveToAbsolute(this->posx, this->posy, &ret);

		break;

	case 2: // marzhauser stage

		// set velocity and acceleration
		this->vely = this->velx;
		this->accy = this->accx;

		pTango->SetVel(this->velx, this->vely, this->velz, 0);
		pTango->SetAccel(this->accx, this->accy, this->accz, 0);

		// move to absolute position
		pTango->SetPos(this->posx, this->posy, this->posz, 0);

		break;
	}

	msg.Format(_T("Set/Move is complete"));
	displayStatusMsg(msg);
}
