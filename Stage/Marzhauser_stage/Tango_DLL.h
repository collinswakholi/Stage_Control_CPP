#ifndef _TANGOLSXAPI_INCLUDED_
#define _TANGOLSXAPI_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif


#define TANGOAPI __declspec (dllimport)
#define TANGOCALL __stdcall


typedef int BOOL;

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif


#pragma pack(1)


struct TLS_ControlInitPar
{
  int Size;
  int InterfaceType;
  char ComNameLength;
  char ComName[32];
  BOOL ShowProt;
  BOOL ShowCmdList;

  int BaudRate;
  int IOAdress;
  int CardIndex;

  int ControlType;
  char VersionStrLength;
  char VersionStr[64];
  int Axes;
  int ErrorCode;
  BOOL NewCmds;
  int Encoder;
  BOOL Display, SpeedPoti, HandWheel, Snapshot, TVR, TriggerOut;
  BOOL DemoMode;
};




#pragma pack(8)

TANGOAPI int TANGOCALL LSX_CreateLSID (int *plLSID);
TANGOAPI int TANGOCALL LSX_FreeLSID (int lLSID);
TANGOAPI int TANGOCALL LSX_Connect (int lLSID);
TANGOAPI int TANGOCALL LSX_ConnectSimple (int lLSID, int lAnInterfaceType, char *pcAComName, int lABaudRate, BOOL bAShowProt);
//TANGOAPI int TANGOCALL LSX_ConnectEx (int lLSID, TLS_ControlInitPar *pAControlInitPar);
TANGOAPI int TANGOCALL LSX_Disconnect (int lLSID);
//TANGOAPI int TANGOCALL LSX_DisconnectPort (CString aPort);
//TANGOAPI int TANGOCALL LSX_ReconnectPort (CString aPort);
TANGOAPI int TANGOCALL LSX_GetDLLVersionString (int lLSID, char *pcVers, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetTangoVersion (int lLSID, char *pcVers, int lMaxLen);
TANGOAPI int TANGOCALL LSX_LoadConfig (int lLSID, char *pcFileName);
TANGOAPI int TANGOCALL LSX_SaveConfig (int lLSID, char *pcFileName);
TANGOAPI int TANGOCALL LSX_ReadControlPars (int lLSID);
TANGOAPI int TANGOCALL LSX_SetCtrlPars (int lLSID);
TANGOAPI int TANGOCALL LSX_GetStageSN (int lLSID, char *pcSN, int lMaxLen);
TANGOAPI int TANGOCALL LSX_IsVel (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_IsVelSingleAxis (int lLSID, int lAxis, double *pdVel);
TANGOAPI int TANGOCALL LSX_MoveAbs (int lLSID, double dX, double dY, double dZ, double dA, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveRel (int lLSID, double dX, double dY, double dZ, double dA, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveEx (int lLSID, double dX, double dY, double dZ, double dR, BOOL bRelative, BOOL bWait, int lAxisCount);
TANGOAPI int TANGOCALL LSX_Go (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_GoSingleAxis (int lLSID, int lAxis, double dValue);
TANGOAPI int TANGOCALL LSX_GoEx (int lLSID, double dX, double dY, double dZ, double dA, int lAxisCount);

TANGOAPI int TANGOCALL LSX_Calibrate (int lLSID);
TANGOAPI int TANGOCALL LSX_RMeasure (int lLSID);
TANGOAPI int TANGOCALL LSX_SetPitch (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetPos (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetActiveAxes (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_SetVel (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetAccel (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetReduction (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetDelay (int lLSID, int lDelay);
TANGOAPI int TANGOCALL LSX_SetSwitchPolarity (int lLSID, int lXP, int lYP, int lZP, int lAP);
TANGOAPI int TANGOCALL LSX_SetSwitchActive (int lLSID, int lXA, int lYA, int lZA, int lAA);
TANGOAPI int TANGOCALL LSX_SetJoystickOn (int lLSID, BOOL bPositionCount, BOOL bEncoder);
TANGOAPI int TANGOCALL LSX_SetJoystickOff (int lLSID);
TANGOAPI int TANGOCALL LSX_SoftwareReset (int lLSID);
TANGOAPI int TANGOCALL LSX_SetDigitalOutput (int lLSID, int lIndex, BOOL bValue);
TANGOAPI int TANGOCALL LSX_SetAuxDigitalOutput (int lLSID, int lIndex, BOOL bValue);
TANGOAPI int TANGOCALL LSX_GetDigitalInputs (int lLSID, int *plValue);
TANGOAPI int TANGOCALL LSX_SetAnalogOutput (int lLSID, int lIndex, int lValue);
TANGOAPI int TANGOCALL LSX_SetLedBright (int lLSID, double dBright);
TANGOAPI int TANGOCALL LSX_GetAnalogInput (int lLSID, int lIndex, int *plValue);
TANGOAPI int TANGOCALL LSX_GetHdiKeys (int lLSID, int *plKey1, int *plKey2, int *plKey3, int *plKey4);
TANGOAPI int TANGOCALL LSX_GetSmHdiButton (int lLSID, int lButtonNr, char *pcFunction, int lMaxLen);
TANGOAPI int TANGOCALL LSX_SetSmHdiButton (int lLSID, int lButtonNr, char *pcFunction);
TANGOAPI int TANGOCALL LSX_SetHdiSpeedIndex (int lLSID, int lX, int lY, int lZ, int lA);
TANGOAPI int TANGOCALL LSX_GetHdiSpeedIndex (int lLSID, int *plX, int *plY, int *plZ, int *plA);
TANGOAPI int TANGOCALL LSX_SetHdiSpeedIndexSingleAxis (int lLSID, int lAxis, int lIndex);
TANGOAPI int TANGOCALL LSX_GetHdiSpeedIndexSingleAxis (int lLSID, int lAxis, int *plIndex);
TANGOAPI int TANGOCALL LSX_SetHwFactor (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetHwFactorB (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_GetHwFactor (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetHwFactorB (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_SetHwFactorSingleAxis (int lLSID, int lAxis, double dFactor);
TANGOAPI int TANGOCALL LSX_SetHwFactorBSingleAxis (int lLSID, int lAxis, double dFactorB);
TANGOAPI int TANGOCALL LSX_GetHwFactorSingleAxis (int lLSID, int lAxis, double *pdFactor);
TANGOAPI int TANGOCALL LSX_GetHwFactorBSingleAxis (int lLSID, int lAxis, double *pdFactorB);
TANGOAPI int TANGOCALL LSX_SetLimit (int lLSID, int lAxis, double dMinRange, double dMaxRange);
TANGOAPI int TANGOCALL LSX_SetLimitControl (int lLSID, int lAxis, BOOL bActive);
TANGOAPI int TANGOCALL LSX_GetPos (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetStatus (int lLSID, char *pcStat, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetEncoderMask (int lLSID, int *plFlags);
TANGOAPI int TANGOCALL LSX_StopAxes (int lLSID);
TANGOAPI int TANGOCALL LSX_StopAxesEx (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_SetAbortFlag (int lLSID);
TANGOAPI int TANGOCALL LSX_MoveRelSingleAxis (int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveAbsSingleAxis (int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_SetControlPars (int lLSID);
TANGOAPI int TANGOCALL LSX_SetMotorCurrent (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetVelSingleAxis (int lLSID, int lAxis, double dVel);
TANGOAPI int TANGOCALL LSX_SetAccelSingleAxis (int lLSID, int lAxis, double dAccel);
TANGOAPI int TANGOCALL LSX_CalibrateEx (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_RMeasureEx (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_SetShowProt (int lLSID, BOOL bShowProt);
TANGOAPI int TANGOCALL LSX_GetAnalogInputs2 (int lLSID, int *plPT100, int *plMV, int *plV24);
TANGOAPI int TANGOCALL LSX_SendString (int lLSID, char *pcStr, char *pcRet, int lMaxLen, BOOL bReadLine, int lTimeOut);
TANGOAPI int TANGOCALL LSX_SetSpeedPoti (int lLSID, BOOL bSpeedPoti);
TANGOAPI int TANGOCALL LSX_SetTVRMode (int lLSID, int lXT, int lYT, int lZT, int lAT);
TANGOAPI int TANGOCALL LSX_SetAutoStatus (int lLSID, int lValue);
TANGOAPI int TANGOCALL LSX_GetStatusAxis (int lLSID, char *pcStatusAxisStr, int lMaxLen);
TANGOAPI int TANGOCALL LSX_SetDigIO_Off (int lLSID, int lIndex);
TANGOAPI int TANGOCALL LSX_SetDigIO_Polarity (int lLSID, int lIndex, BOOL bHigh);
TANGOAPI int TANGOCALL LSX_SetDigIO_EmergencyStop (int lLSID, int lIndex);
TANGOAPI int TANGOCALL LSX_SetDigIO_Distance (int lLSID, int lIndex, BOOL bFkt, double dDist, int lAxis);
TANGOAPI int TANGOCALL LSX_SetDimensions (int lLSID, int lXD, int lYD, int lZD, int lAD);
TANGOAPI int TANGOCALL LSX_MoveRelShort (int lLSID);
TANGOAPI int TANGOCALL LSX_SetEncoderPeriod (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetJoystickDir (int lLSID, int lXD, int lYD, int lZD, int lAD);
TANGOAPI int TANGOCALL LSX_SetEncoderMask (int lLSID, int lValue);
TANGOAPI int TANGOCALL LSX_SetGear (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetHandWheelOn (int lLSID, BOOL bPositionCount, BOOL bEncoder);
TANGOAPI int TANGOCALL LSX_SetHandWheelOff (int lLSID);
TANGOAPI int TANGOCALL LSX_SetFactorTVR (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetTargetWindow (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetController (int lLSID, int lXC, int lYC, int lZC, int lAC);
TANGOAPI int TANGOCALL LSX_SetControllerCall (int lLSID, int lCtrCall);
TANGOAPI int TANGOCALL LSX_SetControllerSteps (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetControllerFactor (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetControllerTWDelay (int lLSID, int lCtrTWDelay);
TANGOAPI int TANGOCALL LSX_SetEncoderRefSignal (int lLSID, int lXR, int lYR, int lZR, int lAR);
TANGOAPI int TANGOCALL LSX_SetEncoderPosition (int lLSID, BOOL bValue);
TANGOAPI int TANGOCALL LSX_GetVersionStr (int lLSID, char *pcVers, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetTangoVersion (int lLSID, char *pcVers, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetError (int lLSID, int *plErrorCode);
TANGOAPI int TANGOCALL LSX_GetPosSingleAxis (int lLSID, int lAxis, double *pdPos);
TANGOAPI int TANGOCALL LSX_SetDistance (int lLSID, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_GetPosEx (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR, BOOL bEncoder);
TANGOAPI int TANGOCALL LSX_SetShowCmdList (int lLSID, BOOL bShowCmdList);
TANGOAPI int TANGOCALL LSX_SetWriteLogText (int lLSID, BOOL bAWriteLogText);
TANGOAPI int TANGOCALL LSX_SetControllerTimeout (int lLSID, int lACtrTimeout);
TANGOAPI int TANGOCALL LSX_SetEncoderActive (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_GetSnapshotCount (int lLSID, int *plSnsCount);
TANGOAPI int TANGOCALL LSX_SetSnapshotCount (int lLSID, int lSnsCount);
TANGOAPI int TANGOCALL LSX_GetSnapshotPos (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_SetCorrTblOff (int lLSID);
TANGOAPI int TANGOCALL LSX_SetCorrTblOn (int lLSID, char *pcAFileName);
TANGOAPI int TANGOCALL LSX_SetFactorMode (int lLSID, BOOL bAFactorMode, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetSnapshot (int lLSID, BOOL bASnapshot);
TANGOAPI int TANGOCALL LSX_SetSnapshotPar (int lLSID, BOOL bHigh, BOOL bAutoMode);
TANGOAPI int TANGOCALL LSX_SetTrigger (int lLSID, BOOL bATrigger);
TANGOAPI int TANGOCALL LSX_SetTriggerPar (int lLSID, int lAxis, int lMode, int lSignal, double dDistance);
TANGOAPI int TANGOCALL LSX_SetTrigCount (int lLSID, int lValue);

TANGOAPI int TANGOCALL LSX_SetTriggerAxis (int lLSID, int lAxis);
TANGOAPI int TANGOCALL LSX_SetTriggerMode (int lLSID, int lMode);
TANGOAPI int TANGOCALL LSX_SetTriggerSignalLength (int lLSID, int lSignal);
TANGOAPI int TANGOCALL LSX_SetTriggerDistance (int lLSID, double dDistance);
TANGOAPI int TANGOCALL LSX_SetTriggerCompensation (int lLSID, int lCompensation);
TANGOAPI int TANGOCALL LSX_SetTriggerEncoder (int lLSID, int lEncoder);
TANGOAPI int TANGOCALL LSX_SetTriggerFrequency (int lLSID, double dFrequency);
TANGOAPI int TANGOCALL LSX_SetTriggerRange (int lLSID, int lAxis, double dStartPos, double dEndPos, int lNumberOfTriggerPulses);
TANGOAPI int TANGOCALL LSX_SetTriggerOutput (int lLSID, int lOutput);
TANGOAPI int TANGOCALL LSX_SetTriggerPositionList (int lLSID, int lIndex, double dPosition);
TANGOAPI int TANGOCALL LSX_SetTriggerPositionListIndex (int lLSID, int lIndex);
TANGOAPI int TANGOCALL LSX_SetTriggerPositionListEntries (int lLSID, int lNumberOfEntries);
TANGOAPI int TANGOCALL LSX_SetTriggerLevel (int lLSID, int lLevel);
TANGOAPI int TANGOCALL LSX_Set2ndTriggerDelay (int lLSID, double dDelay);
TANGOAPI int TANGOCALL LSX_Set2ndTriggerWidth (int lLSID, double dWidth);
TANGOAPI int TANGOCALL LSX_Set2ndTriggerFrequency (int lLSID, double dFrequency);

TANGOAPI int TANGOCALL LSX_SetLanguage (int lLSID, char *pcPLN);
TANGOAPI int TANGOCALL LSX_GetSwitches (int lLSID, int *plFlags);
TANGOAPI int TANGOCALL LSX_GetSerialNr (int lLSID, char *pcSerialNr, int lMaxLen);
TANGOAPI int TANGOCALL LSX_SetCalibOffset (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_SetRMOffset (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetSnapshotPosArray (int lLSID, int lIndex, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_SetAxisDirection (int lLSID, int lXD, int lYD, int lZD, int lAD);
TANGOAPI int TANGOCALL LSX_SetCalibrateDir (int lLSID, int lXD, int lYD, int lZD, int lAD);
TANGOAPI int TANGOCALL LSX_LStepSave (int lLSID);
TANGOAPI int TANGOCALL LSX_SetBPZ (int lLSID, int lAValue);
TANGOAPI int TANGOCALL LSX_SetBPZTrackballFactor (int lLSID, double dAValue);
TANGOAPI int TANGOCALL LSX_SetBPZTrackballBackLash (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_SetBPZJoyspeed (int lLSID, int lAPar, double dAValue);
TANGOAPI int TANGOCALL LSX_SetJoystickWindow (int lLSID, int lAValue);
TANGOAPI int TANGOCALL LSX_SetCurrentDelay (int lLSID, int lX, int lY, int lZ, int lR);
TANGOAPI int TANGOCALL LSX_WaitForAxisStop (int lLSID, int lAFlags, int lATimeoutValue, BOOL *pbATimeout);
TANGOAPI int TANGOCALL LSX_SetProcessMessagesProc (int lLSID, void* pProc);
TANGOAPI int TANGOCALL LSX_SendStringPosCmd (int lLSID, char *pcStr, char *pcRet, int lMaxLen, BOOL bReadLine, int lTimeOut);
TANGOAPI int TANGOCALL LSX_SetDigitalOutputs (int lLSID, int lValue);
TANGOAPI int TANGOCALL LSX_SetWriteLogTextFN (int lLSID, BOOL bAWriteLogText, char *pcALogFN);
TANGOAPI int TANGOCALL LSX_SetDigitalOutputsE (int lLSID, int lValue);
TANGOAPI int TANGOCALL LSX_GetDigitalInputsE (int lLSID, int *plValue);
TANGOAPI int TANGOCALL LSX_EnableCommandRetry (int lLSID, BOOL bAValue);
TANGOAPI int TANGOCALL LSX_SetXYAxisComp (int lLSID, int lValue);
TANGOAPI int TANGOCALL LSX_GetVersionStrDet (int lLSID, char *pcVersDet, int lMaxLen);
TANGOAPI int TANGOCALL LSX_SetCommandTimeout (int lLSID, int lAtoRead, int lAtoMove, int lAtoCalibrate);
TANGOAPI int TANGOCALL LSX_GetCommandTimeout (int lLSID, int *plAtoRead, int *plAtoMove, int *plAtoCalibrate);
TANGOAPI int TANGOCALL LSX_SetExtValue (int lLSID, int lAName, int lAValue);
TANGOAPI int TANGOCALL LSX_FlushBuffer (int lLSID, int lAValue);
//TANGOAPI int TANGOCALL LSX_GetEEPRomValue (int lLSID, byte Offset, byte *pValue);
//TANGOAPI int TANGOCALL LSX_SetEEPRomValue (int lLSID, byte Offset, byte Value);
TANGOAPI int TANGOCALL LSX_GetXYAxisComp (int lLSID, int *plValue);
TANGOAPI int TANGOCALL LSX_GetDimensions (int lLSID, int *plXD, int *plYD, int *plZD, int *plAD);
TANGOAPI int TANGOCALL LSX_GetPitch (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetGear (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetVel (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetAccel (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_SetVelFac (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetVelFac (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetSpeedPoti (int lLSID, BOOL *pbSpePoti);
TANGOAPI int TANGOCALL LSX_GetMotorCurrent (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetReduction (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdA);
TANGOAPI int TANGOCALL LSX_GetCurrentDelay (int lLSID, int *plX, int *plY, int *plZ, int *plR);
TANGOAPI int TANGOCALL LSX_SetOutFuncLev (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetOutFuncLev (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetActiveAxes (int lLSID, int *plFlags);
TANGOAPI int TANGOCALL LSX_GetAxisDirection (int lLSID, int *plXD, int *plYD, int *plZD, int *plAD);
TANGOAPI int TANGOCALL LSX_GetCalibOffset (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetRMOffset (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetCalibrateDir (int lLSID, int *plXD, int *plYD, int *plZD, int *plAD);
TANGOAPI int TANGOCALL LSX_SetCalibBackSpeed (int lLSID, int lSpeed);
TANGOAPI int TANGOCALL LSX_GetCalibBackSpeed (int lLSID, int *plSpeed);
TANGOAPI int TANGOCALL LSX_SetRefSpeed (int lLSID, int lSpeed);
TANGOAPI int TANGOCALL LSX_GetRefSpeed (int lLSID, int *plSpeed);
TANGOAPI int TANGOCALL LSX_SetPowerAmplifier (int lLSID, BOOL bAmplifier);
TANGOAPI int TANGOCALL LSX_GetPowerAmplifier (int lLSID, BOOL *pbAmplifier);
TANGOAPI int TANGOCALL LSX_SetMotorTablePatch (int lLSID, BOOL bActive);
TANGOAPI int TANGOCALL LSX_GetMotorTablePatch (int lLSID, BOOL *pbActive);
TANGOAPI int TANGOCALL LSX_SetJoystickFilter (int lLSID, BOOL bActive);
TANGOAPI int TANGOCALL LSX_GetJoystickFilter (int lLSID, BOOL *pbActive);
TANGOAPI int TANGOCALL LSX_SetStopPolarity (int lLSID, BOOL bHighActiv);
TANGOAPI int TANGOCALL LSX_GetStopPolarity (int lLSID, BOOL *pbHighActiv);
TANGOAPI int TANGOCALL LSX_SetStop (int lLSID, BOOL bActiv);
TANGOAPI int TANGOCALL LSX_GetStop (int lLSID, BOOL *pbActiv);
TANGOAPI int TANGOCALL LSX_SetVLevel (int lLSID, int lVRegion, double dDownLevel, double dUppLevel);
TANGOAPI int TANGOCALL LSX_GetVLevel (int lLSID, int lVRegion, double *pdDownLevel, double *pdUppLevel);
TANGOAPI int TANGOCALL LSX_SetStopAccel (int lLSID, double dXD, double dYD, double dZD, double dAD);
TANGOAPI int TANGOCALL LSX_GetStopAccel (int lLSID, double *pdXD, double *pdYD, double *pdZD, double *pdAD);
TANGOAPI int TANGOCALL LSX_GetVersionStrInfo (int lLSID, char *pcVersInfo, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetStatusLimit (int lLSID, char *pcLimit, int lMaxLen);
//TANGOAPI int TANGOCALL LSX_GetSecurityErr (int lLSID, DWORD *pdwValue);
//TANGOAPI int TANGOCALL LSX_GetSecurityStatus (int lLSID, DWORD *pdwValue);
TANGOAPI int TANGOCALL LSX_GetDelay (int lLSID, int *plDelay);
TANGOAPI int TANGOCALL LSX_GetDistance (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_ClearPos (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_SetDigJoySpeed (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetDigJoySpeed (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetJoystickDir (int lLSID, int *plXD, int *plYD, int *plZD, int *plRD);
TANGOAPI int TANGOCALL LSX_GetJoystick (int lLSID, BOOL *pbJoystickOn, BOOL *pbManual, BOOL *pbPositionCount, BOOL *pbEncoder);
TANGOAPI int TANGOCALL LSX_GetJoystickWindow (int lLSID, int *plAValue);
TANGOAPI int TANGOCALL LSX_GetHandWheel (int lLSID, BOOL *pbHandWheelOn, BOOL *pbPositionCount, BOOL *pbEncoder);
TANGOAPI int TANGOCALL LSX_GetBPZ (int lLSID, int *plAValue);
TANGOAPI int TANGOCALL LSX_GetBPZTrackballFactor (int lLSID, double *pdAValue);
TANGOAPI int TANGOCALL LSX_GetBPZTrackballBackLash (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetBPZJoyspeed (int lLSID, int lAPar, double *pdAValue);
TANGOAPI int TANGOCALL LSX_GetLimitControl (int lLSID, int lAxis, BOOL *pbActive);
TANGOAPI int TANGOCALL LSX_SetAutoLimitAfterCalibRM (int lLSID, int lFlags);
TANGOAPI int TANGOCALL LSX_GetAutoLimitAfterCalibRM (int lLSID, int *plFlags);
TANGOAPI int TANGOCALL LSX_GetSwitchPolarity (int lLSID, int *plXP, int *plYP, int *plZP, int *plRP);
TANGOAPI int TANGOCALL LSX_GetSwitchActive (int lLSID, int *plXA, int *plYA, int *plZA, int *plRA);
TANGOAPI int TANGOCALL LSX_GetTVRMode (int lLSID, int *plXT, int *plYT, int *plZT, int *plRT);
TANGOAPI int TANGOCALL LSX_GetFactorTVR (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_SetTVROutMode (int lLSID, int lXT, int lYT, int lZT, int lRT);
TANGOAPI int TANGOCALL LSX_GetTVROutMode (int lLSID, int *plXT, int *plYT, int *plZT, int *plRT);
TANGOAPI int TANGOCALL LSX_SetTVROutResolution (int lLSID, int lX, int lY, int lZ, int lR);
TANGOAPI int TANGOCALL LSX_GetTVROutResolution (int lLSID, int *plX, int *plY, int *plZ, int *plR);
TANGOAPI int TANGOCALL LSX_SetTVROutPitch (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetTVROutPitch (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_SetVelTVRO (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetVelTVRO (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_SetAccelTVRO (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetAccelTVRO (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_SetVelSingleAxisTVRO (int lLSID, int lAxis, double dVel);
TANGOAPI int TANGOCALL LSX_SetAccelSingleAxisTVRO (int lLSID, int lAxis, double dAccel);
TANGOAPI int TANGOCALL LSX_SetPosTVRO (int lLSID, double dX, double dY, double dZ, double dR);
TANGOAPI int TANGOCALL LSX_GetPosTVRO (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_MoveAbsTVRO (int lLSID, double dX, double dY, double dZ, double dR, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveRelTVRO (int lLSID, double dX, double dY, double dZ, double dR, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveRelTVROSingleAxis (int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_MoveAbsTVROSingleAxis (int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_GetStatusTVRO (int lLSID, char *pcStat, int lMaxLen);
TANGOAPI int TANGOCALL LSX_GetTargetWindow (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetEncoderPeriod (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetEncoderRefSignal (int lLSID, int *plXR, int *plYR, int *plZR, int *plRR);
TANGOAPI int TANGOCALL LSX_GetEncoderPosition (int lLSID, BOOL *pbValue);
TANGOAPI int TANGOCALL LSX_GetEncoderActive (int lLSID, int *plFlags);
TANGOAPI int TANGOCALL LSX_GetController (int lLSID, int *plXC, int *plYC, int *plZC, int *plRC);
TANGOAPI int TANGOCALL LSX_GetControllerCall (int lLSID, int *plCtrCall);
TANGOAPI int TANGOCALL LSX_GetControllerSteps (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetControllerFactor (int lLSID, double *pdX, double *pdY, double *pdZ, double *pdR);
TANGOAPI int TANGOCALL LSX_GetControllerTWDelay (int lLSID, int *plCtrTWDelay);
TANGOAPI int TANGOCALL LSX_GetControllerTimeout (int lLSID, int *plACtrTimeout);
TANGOAPI int TANGOCALL LSX_SetCtrFastMoveOn (int lLSID);
TANGOAPI int TANGOCALL LSX_SetCtrFastMoveOff (int lLSID);
TANGOAPI int TANGOCALL LSX_GetCtrFastMove (int lLSID, BOOL *pbActive);
TANGOAPI int TANGOCALL LSX_ClearCtrFastMoveCounter (int lLSID);
TANGOAPI int TANGOCALL LSX_GetCtrFastMoveCounter (int lLSID, int *plXC, int *plYC, int *plZC, int *plRC);
TANGOAPI int TANGOCALL LSX_ClearEncoder (int lLSID, int lAxis);
TANGOAPI int TANGOCALL LSX_GetEncoder (int lLSID, double *pdXP, double *pdYP, double *pdZP, double *pdRP);
TANGOAPI int TANGOCALL LSX_GetTrigger (int lLSID, BOOL *pbATrigger);
TANGOAPI int TANGOCALL LSX_GetTriggerPar (int lLSID, int *plAxis, int *plMode, int *plSignal, double *pdDistance);
TANGOAPI int TANGOCALL LSX_GetTrigCount (int lLSID, int *plValue);

TANGOAPI int TANGOCALL LSX_GetTriggerAxis (int lLSID, int *plAxis);
TANGOAPI int TANGOCALL LSX_GetTriggerMode (int lLSID, int *plMode);
TANGOAPI int TANGOCALL LSX_GetTriggerSignalLength (int lLSID, int *plSignal);
TANGOAPI int TANGOCALL LSX_GetTriggerDistance (int lLSID, double *pdDistance);
TANGOAPI int TANGOCALL LSX_GetTriggerCompensation (int lLSID, int *plCompensation);
TANGOAPI int TANGOCALL LSX_GetTriggerEncoder (int lLSID, int *plEncoder);
TANGOAPI int TANGOCALL LSX_GetTriggerFrequency (int lLSID, double *pdFrequency);
TANGOAPI int TANGOCALL LSX_GetTriggerRange (int lLSID, double *pdStartPos, double *pdEndPos, int *plNumberOfTriggerPulses);
TANGOAPI int TANGOCALL LSX_GetTriggerOutput (int lLSID, int *plOutput);
TANGOAPI int TANGOCALL LSX_GetTriggerPositionList (int lLSID, int lIndex, double *pdPos);
TANGOAPI int TANGOCALL LSX_GetTriggerPositionListIndex (int lLSID, int *plIndex);
TANGOAPI int TANGOCALL LSX_GetTriggerPositionListEntries (int lLSID, int *plNumberOfEntries);
TANGOAPI int TANGOCALL LSX_GetTriggerLevel (int lLSID, int *plLevel);
TANGOAPI int TANGOCALL LSX_Get2ndTriggerDelay (int lLSID, double *pdDelay);
TANGOAPI int TANGOCALL LSX_Get2ndTriggerWidth (int lLSID, double *pdWidth);
TANGOAPI int TANGOCALL LSX_Get2ndTriggerFrequency (int lLSID, double *pdFrequency);

TANGOAPI int TANGOCALL LSX_SetTVRInPulse (int lLSID, int lAxis, BOOL bDirection);
TANGOAPI int TANGOCALL LSX_GetSnapshot (int lLSID, BOOL *pbASnapshot);
TANGOAPI int TANGOCALL LSX_SetSnapshotFilter (int lLSID, int lTime);
TANGOAPI int TANGOCALL LSX_GetSnapshotFilter (int lLSID, int *plTime);
TANGOAPI int TANGOCALL LSX_GetSnapshotPar (int lLSID, BOOL *pbHigh, BOOL *pbAutoMode);
TANGOAPI int TANGOCALL LSX_GetLimit (int lLSID, int lAxis, double *pdMinRange, double *pdMaxRange);
TANGOAPI int TANGOCALL LSX_JoyChangeAxis (int lLSID, BOOL bValue);
TANGOAPI int TANGOCALL LSX_GetJoyChangeAxis (int lLSID, BOOL *pbValue);
TANGOAPI int TANGOCALL LSX_GetSyncZA (int lLSID, BOOL *pbSyncZA);
TANGOAPI int TANGOCALL LSX_SetSyncZA (int lLSID, BOOL bSync);
TANGOAPI int TANGOCALL LSX_GetSwapZA (int lLSID, BOOL *pbSwapZA);
TANGOAPI int TANGOCALL LSX_SetSwapZA (int lLSID, BOOL bSwap);
TANGOAPI int TANGOCALL LSX_GetKey (int lLSID, BOOL *pbKey1, BOOL *pbKey2, BOOL *pbKey3, BOOL *pbKey4);
TANGOAPI int TANGOCALL LSX_GetKeyLatch (int lLSID, BOOL *pbKey1, BOOL *pbKey2, BOOL *pbKey3, BOOL *pbKey4);
TANGOAPI int TANGOCALL LSX_ClearKeyLatch (int lLSID, int lKey);
TANGOAPI int TANGOCALL LSX_SetZwTravel (int lLSID, int lIndex, double dDistance);
TANGOAPI int TANGOCALL LSX_GetZwTravel (int lLSID, int lIndex, double *pdDistance);

TANGOAPI int TANGOCALL LSX_SetSwitchType (int lLSID, int lXP, int lYP, int lZP, int lAP);
TANGOAPI int TANGOCALL LSX_GetSwitchType (int lLSID, int *plXP, int *plYP, int *plZP, int *plRP);
TANGOAPI int TANGOCALL LSX_SetMotorSteps (int lLSID, int lX, int lY, int lZ, int lR);
TANGOAPI int TANGOCALL LSX_GetMotorSteps (int lLSID, int *lX, int *lY, int *lZ, int *lR);
TANGOAPI int TANGOCALL LSX_SetAccelFunc (int lLSID, int lX, int lY, int lZ, int lR);
TANGOAPI int TANGOCALL LSX_GetAccelFunc (int lLSID, int *lX, int *lY, int *lZ, int *lR);
TANGOAPI int TANGOCALL LSX_ClearSnapshotPosArray (int lLSID);
TANGOAPI int TANGOCALL LSX_SetSnapshotPosArray (int lLSID, int lIndex, double dX, double dY, double dZ, double dA);
TANGOAPI int TANGOCALL LSX_SetSnapshotIndex (int lLSID, int lIndex);
TANGOAPI int TANGOCALL LSX_GetSnapshotIndex (int lLSID, int *plIndex);
TANGOAPI int TANGOCALL LSX_SetSnapshotMode (int lLSID, int lMode);
TANGOAPI int TANGOCALL LSX_GetSnapshotMode (int lLSID, int *plMode);

TANGOAPI int TANGOCALL LSX_Eject (int lLSID, int maga, int keep);
TANGOAPI int TANGOCALL LSX_Insert (int lLSID);
TANGOAPI int TANGOCALL LSX_SlideSeated (int lLSID, int maga, int slot, int *status);
TANGOAPI int TANGOCALL LSX_MagazinSeated (int lLSID, int maga, int *status);
TANGOAPI int TANGOCALL LSX_GetGripper (int lLSID, int *c1, int *s1, int *c2, int *s2);
TANGOAPI int TANGOCALL LSX_SetGripper (int lLSID, int c1, int s1, int c2, int s2);
TANGOAPI int TANGOCALL LSX_GetSlide (int lLSID, int maga, int slot, int mode);
TANGOAPI int TANGOCALL LSX_PutSlide (int lLSID, int maga, int slot);
TANGOAPI int TANGOCALL LSX_SetPrioHandlerPos (int lLSID, int php);
TANGOAPI int TANGOCALL LSX_GetPrioHandlerPos (int lLSID, int *php);

TANGOAPI int TANGOCALL LSX_GetTray (int lLSID, int slot, int mode);
TANGOAPI int TANGOCALL LSX_PutTray (int lLSID, int slot);
TANGOAPI int TANGOCALL LSX_GetRFID (int lLSID, int slot, int bank, int *plRFID);
TANGOAPI int TANGOCALL LSX_GetNumberOfSlots (int lLSID, int *plSlots);
TANGOAPI int TANGOCALL LSX_GetNumberOfMagazins (int lLSID, int *plMagazins);

TANGOAPI int TANGOCALL LSX_SetRFID (int lLSID, int slot, int bank, int lRFID);

TANGOAPI int TANGOCALL LSX_GetNumberOfRows     (int lLSID, int *plRows);
TANGOAPI int TANGOCALL LSX_GetNumberOfColumns  (int lLSID, int *plColumns);

TANGOAPI int TANGOCALL LSX_SetLabelLED (int lLSID, int lOn);
TANGOAPI int TANGOCALL LSX_GetLabelLED (int lLSID, int *plOn);
TANGOAPI int TANGOCALL LSX_SetCabinLED (int lLSID, int lOn);
TANGOAPI int TANGOCALL LSX_GetCabinLED (int lLSID, int *plOn);

TANGOAPI int TANGOCALL LSX_GetLoaderType (int lLSID, int *plLoaderType);
TANGOAPI int TANGOCALL LSX_GetTraySN     (int lLSID, int slot, int *plTraySN);
TANGOAPI int TANGOCALL LSX_GetTrayType   (int lLSID, int slot, int *plTrayType);
TANGOAPI int TANGOCALL LSX_SetTrayType   (int lLSID, int slot, int TrayType);
TANGOAPI int TANGOCALL LSX_GetTrayOnStage(int lLSID, int *plTrayOnSTage);
TANGOAPI int TANGOCALL LSX_Xpos3_MoveAbsSingleAxis(int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_Xpos3_MoveRelSingleAxis(int lLSID, int lAxis, double dValue, BOOL bWait);
TANGOAPI int TANGOCALL LSX_Xpos3_SetPosSingleAxis(int lLSID, int lAxis, double dValue);
TANGOAPI int TANGOCALL LSX_Xpos3_GetPosSingleAxis(int lLSID, int lAxis, double *pdValue);

#ifdef __cplusplus
}
#endif





#endif //_TANGOLSXAPI_INCLUDED_