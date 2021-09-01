
#include	"stdafx.h"
#include	"Tango.h"


/////////////////////////////////////////////////////////////////////////////
// Klasse CTango


// Konstruktor: Versucht DLL und alle Zeiger auf Funktionsaufrufe zu laden
CTango::CTango()
{
        m_DLLResultat=0;		// DLL-Zugriff ok

        m_LSID = 0; //F.D.

        // Zeiger auf alle Funktionen Nullsetzen
        m_pConnect=NULL;
        m_pConnectSimple=NULL;
        m_pConnectEx=NULL;
        m_pDisconnect=NULL;
        m_pGetDLLVersionString=NULL;
        m_pLoadConfig=NULL;
        m_pSaveConfig=NULL;
        m_pReadControlPars=NULL;
        m_pSetCtrlPars=NULL;
        m_pGetStageSN=NULL;
        m_pIsVel=NULL;
        m_pIsVelSingleAxis=NULL;
        m_pStopAxesEx=NULL;
        m_pMoveAbs=NULL;
        m_pMoveRel=NULL;
        m_pMoveEx=NULL;
        m_pGo=NULL;
        m_pGoSingleAxis=NULL;
        m_pGoEx=NULL;
        m_pCalibrate=NULL;
        m_pRMeasure=NULL;
        m_pSetPitch=NULL;
        m_pSetPos=NULL;
        m_pSetActiveAxes=NULL;
        m_pSetVel=NULL;
        m_pSetAccel=NULL;
        m_pSetReduction=NULL;
        m_pSetDelay=NULL;
        m_pSetSwitchPolarity=NULL;
        m_pSetSwitchActive=NULL;
        m_pSetJoystickOn=NULL;
        m_pSetJoystickOff=NULL;
        m_pSoftwareReset=NULL;
        m_pSetDigitalOutput=NULL;
		m_pSetAuxDigitalOutput=NULL;
        m_pGetDigitalInputs=NULL;
        m_pSetAnalogOutput=NULL;
		m_pSetLedBright=NULL;
		m_pGetAnalogInput=NULL;
        m_pGetHdiKeys=NULL;
        m_pGetSmHdiButton=NULL;
        m_pSetSmHdiButton=NULL;
        m_pSetHdiSpeedIndex=NULL;
        m_pGetHdiSpeedIndex=NULL;
        m_pSetHdiSpeedIndexSingleAxis=NULL;
        m_pGetHdiSpeedIndexSingleAxis=NULL;
        m_pSetHwFactor=NULL;
        m_pSetHwFactorB=NULL;
        m_pGetHwFactor=NULL;
        m_pGetHwFactorB=NULL;
        m_pSetHwFactorSingleAxis=NULL;
        m_pSetHwFactorBSingleAxis=NULL;
        m_pGetHwFactorSingleAxis=NULL;
        m_pGetHwFactorBSingleAxis=NULL;
        m_pSetLimit=NULL;
        m_pSetLimitControl=NULL;
        m_pGetPos=NULL;
        m_pGetStatus=NULL;
        m_pGetEncoderMask=NULL;
        m_pStopAxes=NULL;
        m_pSetAbortFlag=NULL;
        m_pMoveRelSingleAxis=NULL;
        m_pMoveAbsSingleAxis=NULL;
        m_pSetControlPars=NULL;
        m_pSetMotorCurrent=NULL;
        m_pSetVelSingleAxis=NULL;
        m_pSetAccelSingleAxis=NULL;
        m_pCalibrateEx=NULL;
        m_pRMeasureEx=NULL;
        m_pSetShowProt=NULL;
        m_pGetAnalogInputs2=NULL;
        m_pSendString=NULL;
        m_pSetSpeedPoti=NULL;
        m_pSetTVRMode=NULL;
        m_pSetAutoStatus=NULL;
        m_pGetStatusAxis=NULL;
        m_pSetDigIO_Off=NULL;
        m_pSetDigIO_Polarity=NULL;
        m_pSetDigIO_EmergencyStop=NULL;
        m_pSetDigIO_Distance=NULL;
        m_pSetDimensions=NULL;
        m_pMoveRelShort=NULL;
        m_pSetEncoderPeriod=NULL;
        m_pSetJoystickDir=NULL;
        m_pSetEncoderMask=NULL;
        m_pSetGear=NULL;
        m_pSetHandWheelOn=NULL;
        m_pSetHandWheelOff=NULL;
        m_pSetFactorTVR=NULL;
        m_pSetTargetWindow=NULL;
        m_pSetController=NULL;
        m_pSetControllerCall=NULL;
        m_pSetControllerSteps=NULL;
        m_pSetControllerFactor=NULL;
        m_pSetControllerTWDelay=NULL;
        m_pSetEncoderRefSignal=NULL;
        m_pSetEncoderPosition=NULL;
        m_pGetVersionStr=NULL;
        m_pGetError=NULL;
        m_pGetPosSingleAxis=NULL;
        m_pSetDistance=NULL;
        m_pGetPosEx=NULL;
        m_pSetShowCmdList=NULL;
        m_pSetWriteLogText=NULL;
        m_pSetControllerTimeout=NULL;
        m_pSetEncoderActive=NULL;
        m_pGetSnapshotCount=NULL;
        m_pSetSnapshotCount=NULL;
        m_pGetSnapshotPos=NULL;
        m_pSetCorrTblOff=NULL;
        m_pSetCorrTblOn=NULL;
        m_pSetFactorMode=NULL;
        m_pSetSnapshot=NULL;
        m_pSetSnapshotPar=NULL;
        m_pSetTrigger=NULL;
        m_pSetTriggerPar=NULL;
        m_pSetLanguage=NULL;
        m_pGetSwitches=NULL;
        m_pGetSerialNr=NULL;
        m_pSetCalibOffset=NULL;
        m_pSetRMOffset=NULL;
        m_pGetSnapshotPosArray=NULL;
        m_pSetAxisDirection=NULL;
        m_pSetCalibrateDir=NULL;
        m_pLStepSave=NULL;
        m_pSetBPZ=NULL;
        m_pSetBPZTrackballFactor=NULL;
        m_pSetBPZTrackballBackLash=NULL;
        m_pSetBPZJoyspeed=NULL;
        m_pSetJoystickWindow=NULL;
        m_pSetCurrentDelay=NULL;
        m_pWaitForAxisStop=NULL;
        m_pSetProcessMessagesProc=NULL;
        m_pSendStringPosCmd=NULL;
        m_pSetDigitalOutputs=NULL;
        m_pSetWriteLogTextFN=NULL;
        m_pSetDigitalOutputsE=NULL;
        m_pGetDigitalInputsE=NULL;
        m_pEnableCommandRetry=NULL;
        m_pSetXYAxisComp=NULL;
        m_pGetVersionStrDet=NULL;
		m_pSetDllNumOfAxes=NULL;
        m_pSetCommandTimeout=NULL;
        m_pSetExtValue=NULL;
        m_pFlushBuffer=NULL;
        m_pGetEEPRomValue=NULL;
        m_pSetEEPRomValue=NULL;
        m_pGetXYAxisComp=NULL;
        m_pGetDimensions=NULL;
        m_pGetPitch=NULL;
        m_pGetGear=NULL;
        m_pGetVel=NULL;
        m_pGetAccel=NULL;
        m_pSetVelFac=NULL;
        m_pGetVelFac=NULL;
        m_pGetSpeedPoti=NULL;
        m_pGetMotorCurrent=NULL;
        m_pGetReduction=NULL;
        m_pGetCurrentDelay=NULL;
        m_pSetOutFuncLev=NULL;
        m_pGetOutFuncLev=NULL;
        m_pGetActiveAxes=NULL;
        m_pGetAxisDirection=NULL;
        m_pGetCalibOffset=NULL;
        m_pGetRMOffset=NULL;
        m_pGetCalibrateDir=NULL;
        m_pSetCalibBackSpeed=NULL;
        m_pGetCalibBackSpeed=NULL;
        m_pSetRefSpeed=NULL;
        m_pGetRefSpeed=NULL;
        m_pSetPowerAmplifier=NULL;
        m_pGetPowerAmplifier=NULL;
        m_pSetMotorTablePatch=NULL;
        m_pGetMotorTablePatch=NULL;
        m_pSetJoystickFilter=NULL;
        m_pGetJoystickFilter=NULL;
        m_pSetStopPolarity=NULL;
        m_pGetStopPolarity=NULL;
        m_pSetVLevel=NULL;
        m_pGetVLevel=NULL;
        m_pSetStopAccel=NULL;
        m_pGetStopAccel=NULL;
        m_pGetVersionStrInfo=NULL;
        m_pGetStatusLimit=NULL;
        m_pGetSecurityErr=NULL;
        m_pGetSecurityStatus=NULL;
        m_pGetDelay=NULL;
        m_pGetDistance=NULL;
        m_pClearPos=NULL;
        m_pSetDigJoySpeed=NULL;
        m_pGetDigJoySpeed=NULL;
        m_pGetJoystickDir=NULL;
        m_pGetJoystick=NULL;
        m_pGetJoystickWindow=NULL;
        m_pGetHandWheel=NULL;
        m_pGetBPZ=NULL;
        m_pGetBPZTrackballFactor=NULL;
        m_pGetBPZTrackballBackLash=NULL;
        m_pGetBPZJoyspeed=NULL;
        m_pGetLimitControl=NULL;
        m_pSetAutoLimitAfterCalibRM=NULL;
        m_pGetAutoLimitAfterCalibRM=NULL;
        m_pGetSwitchPolarity=NULL;
        m_pGetSwitchActive=NULL;
        m_pGetTVRMode=NULL;
        m_pGetFactorTVR=NULL;
        m_pSetTVROutMode=NULL;
        m_pGetTVROutMode=NULL;
        m_pSetTVROutResolution=NULL;
        m_pGetTVROutResolution=NULL;
        m_pSetTVROutPitch=NULL;
        m_pGetTVROutPitch=NULL;
        m_pSetVelTVRO=NULL;
        m_pGetVelTVRO=NULL;
        m_pSetAccelTVRO=NULL;
        m_pGetAccelTVRO=NULL;
        m_pSetVelSingleAxisTVRO=NULL;
        m_pSetAccelSingleAxisTVRO=NULL;
        m_pSetPosTVRO=NULL;
        m_pGetPosTVRO=NULL;
        m_pMoveAbsTVRO=NULL;
        m_pMoveRelTVRO=NULL;
        m_pMoveRelTVROSingleAxis=NULL;
        m_pMoveAbsTVROSingleAxis=NULL;
        m_pGetStatusTVRO=NULL;
        m_pGetTargetWindow=NULL;
        m_pGetEncoderPeriod=NULL;
        m_pGetEncoderRefSignal=NULL;
        m_pGetEncoderPosition=NULL;
        m_pGetEncoderActive=NULL;
        m_pGetController=NULL;
        m_pGetControllerCall=NULL;
        m_pGetControllerSteps=NULL;
        m_pGetControllerFactor=NULL;
        m_pGetControllerTWDelay=NULL;
        m_pGetControllerTimeout=NULL;
        m_pSetCtrFastMoveOn=NULL;
        m_pSetCtrFastMoveOff=NULL;
        m_pGetCtrFastMove=NULL;
        m_pClearCtrFastMoveCounter=NULL;
        m_pGetCtrFastMoveCounter=NULL;
        m_pClearEncoder=NULL;
        m_pGetEncoder=NULL;
        m_pGetTrigger=NULL;
        m_pGetTriggerPar=NULL;
        m_pSetTrigCount=NULL;
        m_pGetTrigCount=NULL;
        m_pSetTVRInPulse=NULL;
        m_pGetSnapshot=NULL;
        m_pSetSnapshotFilter=NULL;
        m_pGetSnapshotFilter=NULL;
        m_pGetSnapshotPar=NULL;
        m_pGetLimit=NULL;
        m_pJoyChangeAxis=NULL;
        m_pGetJoyChangeAxis=NULL;
        m_pGetSyncZA=NULL;
        m_pSetSyncZA=NULL;
        m_pGetKey=NULL;
        m_pGetKeyLatch=NULL;
        m_pClearKeyLatch=NULL;
        m_pSetZwTravel=NULL;
        m_pGetZwTravel=NULL;
        m_pSetSwitchType=NULL;
        m_pGetSwitchType=NULL;
        m_pSetMotorSteps=NULL;
        m_pGetMotorSteps=NULL;
        m_pSetAccelFunc=NULL;
        m_pGetAccelFunc=NULL;
		m_pClearSnapshotPosArray=NULL;
		m_pSetSnapshotPosArray=NULL;
		m_pSetSnapshotIndex=NULL;
		m_pGetSnapshotIndex=NULL;
		m_pSetSnapshotMode=NULL;
		m_pGetSnapshotMode=NULL;

        m_pCreateLSID=NULL;
        m_pFreeLSID=NULL;

        m_pEject=NULL;
        m_pInsert=NULL;
        m_pSlideSeated=NULL;
        m_pMagazinSeated=NULL;
        m_pGetGripper=NULL;
        m_pSetGripper=NULL;
        m_pGetSlide=NULL;
        m_pPutSlide=NULL;
        m_pSetPrioHandlerPos=NULL;
        m_pGetPrioHandlerPos=NULL;

        m_pGetTangoVersion=NULL;
        m_pGetRFID=NULL;
		m_pSetRFID = NULL;
		m_pGetTraySN=NULL;
        m_pGetTrayType=NULL;
        m_pSetTrayType=NULL;
        m_pGetLoaderType=NULL;
        m_pGetNumberOfRows=NULL;
        m_pGetNumberOfColumns=NULL;
        m_pGetNumberOfMagazines=NULL;

		m_pXpos3MoveAbsSingleAxis = NULL;
		m_pXpos3MoveRelSingleAxis = NULL;
		m_pXpos3SetPosSingleAxis = NULL;
		m_pXpos3GetPosSingleAxis = NULL;

		m_pSetTriggerAxis = NULL;
		m_pSetTriggerMode = NULL;
		m_pSetTriggerSignalLength = NULL;
		m_pSetTriggerDistance = NULL;
		m_pSetTriggerCompensation = NULL;
		m_pSetTriggerEncoder = NULL;
		m_pSetTriggerFrequency = NULL;
		m_pSetTriggerRange = NULL;
		m_pSetTriggerOutput = NULL;
		m_pSetTriggerPositionList = NULL;
		m_pSetTriggerPositionListIndex = NULL;
		m_pSetTriggerPositionListEntries = NULL;
		m_pSetTriggerLevel = NULL;
		m_pSet2ndTriggerDelay = NULL;
		m_pSet2ndTriggerWidth = NULL;
		m_pSet2ndTriggerFrequency = NULL;

		m_pGetTriggerAxis = NULL;
		m_pGetTriggerMode = NULL;
		m_pGetTriggerSignalLength = NULL;
		m_pGetTriggerDistance = NULL;
		m_pGetTriggerCompensation = NULL;
		m_pGetTriggerEncoder = NULL;
		m_pGetTriggerFrequency = NULL;
		m_pGetTriggerRange = NULL;
		m_pGetTriggerOutput = NULL;
		m_pGetTriggerPositionList = NULL;
		m_pGetTriggerPositionListIndex = NULL;
		m_pGetTriggerPositionListEntries = NULL;
		m_pGetTriggerLevel = NULL;
		m_pGet2ndTriggerDelay = NULL;
		m_pGet2ndTriggerWidth = NULL;
		m_pGet2ndTriggerFrequency = NULL;

		m_pSetLabelLED = NULL;
		m_pGetLabelLED = NULL;
		m_pSetCabinLED = NULL;
		m_pGetCabinLED = NULL;





/*
// Zugriff auf die DLL von verschiedenen Dateipfaden aus ermöglichen
		TCHAR szPathDll[MAX_PATH+1];
        int n = 0;
        if(szDirectory)
        {
            strncpy(szPathDll, szDirectory, MAX_PATH);
            szPathDll[MAX_PATH] = '\0';
            n = strlen(szPathDll);
            if(n>0 && n < MAX_PATH && szPathDll[n-1]!='\\')
            {
                szPathDll[n] = '\\';
                szPathDll[n+1] = '\0';
                n = n+1;
            }
        }
        strncpy(szPathDll +n, _T("Tango_DLL.dll"), MAX_PATH - n);
        szPathDll[MAX_PATH]= '\0';
*/

        if ((m_Tango=::LoadLibrary(_T("Tango_DLL.dll")))==0)
        {
                m_DLLResultat=-1; // DLL konnte nicht geladen werden
        }
        else
        {
			    // Zeiger auf jede Methode der Dll laden und prüfen

                VERIFY(m_pConnect= (PConnect) GetProcAddress(m_Tango,"LSX_Connect"));
                if (!m_pConnect) m_DLLResultat=-2;

                VERIFY(m_pConnectSimple= (PConnectSimple) GetProcAddress(m_Tango,"LSX_ConnectSimple"));
                if (!m_pConnectSimple) m_DLLResultat=-2;

                VERIFY(m_pConnectEx= (PConnectEx) GetProcAddress(m_Tango,"LSX_ConnectEx"));
                if (!m_pConnectEx) m_DLLResultat=-2;

                VERIFY(m_pDisconnect= (PDisconnect) GetProcAddress(m_Tango,"LSX_Disconnect"));
                if (!m_pDisconnect) m_DLLResultat=-2;

                VERIFY(m_pGetDLLVersionString= (PGetDLLVersionString) GetProcAddress(m_Tango,"LSX_GetDLLVersionString"));
                //if (!m_pGetDLLVersionString) m_DLLResultat=-2;

                VERIFY(m_pLoadConfig= (PLoadConfig) GetProcAddress(m_Tango,"LSX_LoadConfig"));
                if (!m_pLoadConfig) m_DLLResultat=-2;

                VERIFY(m_pSaveConfig= (PSaveConfig) GetProcAddress(m_Tango,"LSX_SaveConfig"));
                if (!m_pSaveConfig) m_DLLResultat=-2;

                VERIFY(m_pReadControlPars= (PReadControlPars) GetProcAddress(m_Tango,"LSX_ReadControlPars"));
                if (!m_pReadControlPars) m_DLLResultat=-2;

                VERIFY(m_pSetCtrlPars= (PSetCtrlPars) GetProcAddress(m_Tango,"LSX_SetCtrlPars"));
                if (!m_pSetCtrlPars) m_DLLResultat=-2;

                VERIFY(m_pGetStageSN= (PGetStageSN) GetProcAddress(m_Tango,"LSX_GetStageSN"));
                if (!m_pGetStageSN) m_DLLResultat=-2;

                VERIFY(m_pIsVel= (PIsVel) GetProcAddress(m_Tango,"LSX_IsVel"));
                if (!m_pIsVel) m_DLLResultat=-2;

                VERIFY(m_pIsVelSingleAxis= (PIsVelSingleAxis) GetProcAddress(m_Tango,"LSX_IsVelSingleAxis"));
                if (!m_pIsVelSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pMoveAbs= (PMoveAbs) GetProcAddress(m_Tango,"LSX_MoveAbs"));
                if (!m_pMoveAbs) m_DLLResultat=-2;

                VERIFY(m_pMoveRel= (PMoveRel) GetProcAddress(m_Tango,"LSX_MoveRel"));
                if (!m_pMoveRel) m_DLLResultat=-2;

                VERIFY(m_pMoveEx= (PMoveEx) GetProcAddress(m_Tango,"LSX_MoveEx"));
                if (!m_pMoveEx) m_DLLResultat=-2;

                VERIFY(m_pGo= (PGo) GetProcAddress(m_Tango,"LSX_Go"));
                if (!m_pGo) m_DLLResultat=-2;

                VERIFY(m_pGoSingleAxis= (PGoSingleAxis) GetProcAddress(m_Tango,"LSX_GoSingleAxis"));
                if (!m_pGoSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pGoEx= (PGoEx) GetProcAddress(m_Tango,"LSX_GoEx"));
                if (!m_pGoEx) m_DLLResultat=-2;

                VERIFY(m_pCalibrate= (PCalibrate) GetProcAddress(m_Tango,"LSX_Calibrate"));
                if (!m_pCalibrate) m_DLLResultat=-2;

                VERIFY(m_pRMeasure= (PRMeasure) GetProcAddress(m_Tango,"LSX_RMeasure"));
                if (!m_pRMeasure) m_DLLResultat=-2;

                VERIFY(m_pSetPitch= (PSetPitch) GetProcAddress(m_Tango,"LSX_SetPitch"));
                if (!m_pSetPitch) m_DLLResultat=-2;

                VERIFY(m_pSetPos= (PSetPos) GetProcAddress(m_Tango,"LSX_SetPos"));
                if (!m_pSetPos) m_DLLResultat=-2;

                VERIFY(m_pSetActiveAxes= (PSetActiveAxes) GetProcAddress(m_Tango,"LSX_SetActiveAxes"));
                if (!m_pSetActiveAxes) m_DLLResultat=-2;

                VERIFY(m_pSetVel= (PSetVel) GetProcAddress(m_Tango,"LSX_SetVel"));
                if (!m_pSetVel) m_DLLResultat=-2;

                VERIFY(m_pSetAccel= (PSetAccel) GetProcAddress(m_Tango,"LSX_SetAccel"));
                if (!m_pSetAccel) m_DLLResultat=-2;

                VERIFY(m_pSetReduction= (PSetReduction) GetProcAddress(m_Tango,"LSX_SetReduction"));
                if (!m_pSetReduction) m_DLLResultat=-2;

                VERIFY(m_pSetDelay= (PSetDelay) GetProcAddress(m_Tango,"LSX_SetDelay"));
                if (!m_pSetDelay) m_DLLResultat=-2;

                VERIFY(m_pSetSwitchPolarity= (PSetSwitchPolarity) GetProcAddress(m_Tango,"LSX_SetSwitchPolarity"));
                if (!m_pSetSwitchPolarity) m_DLLResultat=-2;

                VERIFY(m_pSetSwitchActive= (PSetSwitchActive) GetProcAddress(m_Tango,"LSX_SetSwitchActive"));
                if (!m_pSetSwitchActive) m_DLLResultat=-2;

                VERIFY(m_pSetJoystickOn= (PSetJoystickOn) GetProcAddress(m_Tango,"LSX_SetJoystickOn"));
                if (!m_pSetJoystickOn) m_DLLResultat=-2;

                VERIFY(m_pSetJoystickOff= (PSetJoystickOff) GetProcAddress(m_Tango,"LSX_SetJoystickOff"));
                if (!m_pSetJoystickOff) m_DLLResultat=-2;

                VERIFY(m_pSoftwareReset= (PSoftwareReset) GetProcAddress(m_Tango,"LSX_SoftwareReset"));
                if (!m_pSoftwareReset) m_DLLResultat=-2;

                VERIFY(m_pSetDigitalOutput= (PSetDigitalOutput) GetProcAddress(m_Tango,"LSX_SetDigitalOutput"));
                if (!m_pSetDigitalOutput) m_DLLResultat=-2;

                VERIFY(m_pSetAuxDigitalOutput= (PSetAuxDigitalOutput) GetProcAddress(m_Tango,"LSX_SetAuxDigitalOutput"));
                if (!m_pSetAuxDigitalOutput) m_DLLResultat=-2;

                VERIFY(m_pGetDigitalInputs= (PGetDigitalInputs) GetProcAddress(m_Tango,"LSX_GetDigitalInputs"));
                if (!m_pGetDigitalInputs) m_DLLResultat=-2;

                VERIFY(m_pSetAnalogOutput= (PSetAnalogOutput) GetProcAddress(m_Tango,"LSX_SetAnalogOutput"));
                if (!m_pSetAnalogOutput) m_DLLResultat=-2;

                VERIFY(m_pSetLedBright= (PSetLedBright) GetProcAddress(m_Tango,"LSX_SetLedBright"));
                if (!m_pSetLedBright) m_DLLResultat=-2;

                VERIFY(m_pGetAnalogInput= (PGetAnalogInput) GetProcAddress(m_Tango,"LSX_GetAnalogInput"));
                if (!m_pGetAnalogInput) m_DLLResultat=-2;

                VERIFY(m_pGetHdiKeys= (PGetHdiKeys) GetProcAddress(m_Tango,"LSX_GetHdiKeys"));
                //if (!m_pGetHdiKeys) m_DLLResultat=-2;

                VERIFY(m_pGetSmHdiButton= (PGetSmHdiButton) GetProcAddress(m_Tango,"LSX_GetSmHdiButton"));
                if (!m_pGetSmHdiButton) m_DLLResultat=-2;

                VERIFY(m_pSetSmHdiButton= (PSetSmHdiButton) GetProcAddress(m_Tango,"LSX_SetSmHdiButton"));
                if (!m_pSetSmHdiButton) m_DLLResultat=-2;

                VERIFY(m_pSetHdiSpeedIndex= (PSetHdiSpeedIndex) GetProcAddress(m_Tango,"LSX_SetHdiSpeedIndex"));
                if (!m_pSetHdiSpeedIndex) m_DLLResultat=-2;

                VERIFY(m_pGetHdiSpeedIndex= (PGetHdiSpeedIndex) GetProcAddress(m_Tango,"LSX_GetHdiSpeedIndex"));
                if (!m_pGetHdiSpeedIndex) m_DLLResultat=-2;

                VERIFY(m_pSetHdiSpeedIndexSingleAxis= (PSetHdiSpeedIndexSingleAxis) GetProcAddress(m_Tango,"LSX_SetHdiSpeedIndexSingleAxis"));
                if (!m_pSetHdiSpeedIndexSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pGetHdiSpeedIndexSingleAxis= (PGetHdiSpeedIndexSingleAxis) GetProcAddress(m_Tango,"LSX_GetHdiSpeedIndexSingleAxis"));
                if (!m_pGetHdiSpeedIndexSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetHwFactor= (PSetHwFactor) GetProcAddress(m_Tango,"LSX_SetHwFactor"));
                if (!m_pSetHwFactor) m_DLLResultat=-2;

                VERIFY(m_pSetHwFactorB= (PSetHwFactorB) GetProcAddress(m_Tango,"LSX_SetHwFactorB"));
                if (!m_pSetHwFactorB) m_DLLResultat=-2;

                VERIFY(m_pGetHwFactor= (PGetHwFactor) GetProcAddress(m_Tango,"LSX_GetHwFactor"));
                if (!m_pGetHwFactor) m_DLLResultat=-2;

                VERIFY(m_pGetHwFactorB= (PGetHwFactorB) GetProcAddress(m_Tango,"LSX_GetHwFactorB"));
                if (!m_pGetHwFactorB) m_DLLResultat=-2;

                VERIFY(m_pSetHwFactorSingleAxis= (PSetHwFactorSingleAxis) GetProcAddress(m_Tango,"LSX_SetHwFactorSingleAxis"));
                if (!m_pSetHwFactorSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetHwFactorBSingleAxis= (PSetHwFactorBSingleAxis) GetProcAddress(m_Tango,"LSX_SetHwFactorBSingleAxis"));
                if (!m_pSetHwFactorBSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pGetHwFactorSingleAxis= (PGetHwFactorSingleAxis) GetProcAddress(m_Tango,"LSX_GetHwFactorSingleAxis"));
                if (!m_pGetHwFactorSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pGetHwFactorBSingleAxis= (PGetHwFactorBSingleAxis) GetProcAddress(m_Tango,"LSX_GetHwFactorBSingleAxis"));
                if (!m_pGetHwFactorBSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetLimit= (PSetLimit) GetProcAddress(m_Tango,"LSX_SetLimit"));
                if (!m_pSetLimit) m_DLLResultat=-2;

                VERIFY(m_pSetLimitControl= (PSetLimitControl) GetProcAddress(m_Tango,"LSX_SetLimitControl"));
                if (!m_pSetLimitControl) m_DLLResultat=-2;

                VERIFY(m_pGetPos= (PGetPos) GetProcAddress(m_Tango,"LSX_GetPos"));
                if (!m_pGetPos) m_DLLResultat=-2;

                VERIFY(m_pGetStatus= (PGetStatus) GetProcAddress(m_Tango,"LSX_GetStatus"));
                if (!m_pGetStatus) m_DLLResultat=-2;

                VERIFY(m_pGetEncoderMask= (PGetEncoderMask) GetProcAddress(m_Tango,"LSX_GetEncoderMask"));
                if (!m_pGetEncoderMask) m_DLLResultat=-2;

                VERIFY(m_pStopAxes= (PStopAxes) GetProcAddress(m_Tango,"LSX_StopAxes"));
                if (!m_pStopAxes) m_DLLResultat=-2;

                VERIFY(m_pStopAxesEx= (PStopAxesEx) GetProcAddress(m_Tango,"LSX_StopAxesEx"));
                if (!m_pStopAxesEx) m_DLLResultat=-2;

                VERIFY(m_pSetAbortFlag= (PSetAbortFlag) GetProcAddress(m_Tango,"LSX_SetAbortFlag"));
                if (!m_pSetAbortFlag) m_DLLResultat=-2;

                VERIFY(m_pMoveRelSingleAxis= (PMoveRelSingleAxis) GetProcAddress(m_Tango,"LSX_MoveRelSingleAxis"));
                if (!m_pMoveRelSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pMoveAbsSingleAxis= (PMoveAbsSingleAxis) GetProcAddress(m_Tango,"LSX_MoveAbsSingleAxis"));
                if (!m_pMoveAbsSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetControlPars= (PSetControlPars) GetProcAddress(m_Tango,"LSX_SetControlPars"));
                if (!m_pSetControlPars) m_DLLResultat=-2;

                VERIFY(m_pSetMotorCurrent= (PSetMotorCurrent) GetProcAddress(m_Tango,"LSX_SetMotorCurrent"));
                if (!m_pSetMotorCurrent) m_DLLResultat=-2;

                VERIFY(m_pSetVelSingleAxis= (PSetVelSingleAxis) GetProcAddress(m_Tango,"LSX_SetVelSingleAxis"));
                if (!m_pSetVelSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetAccelSingleAxis= (PSetAccelSingleAxis) GetProcAddress(m_Tango,"LSX_SetAccelSingleAxis"));
                if (!m_pSetAccelSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pCalibrateEx= (PCalibrateEx) GetProcAddress(m_Tango,"LSX_CalibrateEx"));
                if (!m_pCalibrateEx) m_DLLResultat=-2;

                VERIFY(m_pRMeasureEx= (PRMeasureEx) GetProcAddress(m_Tango,"LSX_RMeasureEx"));
                if (!m_pRMeasureEx) m_DLLResultat=-2;

                VERIFY(m_pSetShowProt= (PSetShowProt) GetProcAddress(m_Tango,"LSX_SetShowProt"));
                if (!m_pSetShowProt) m_DLLResultat=-2;

                VERIFY(m_pGetAnalogInputs2= (PGetAnalogInputs2) GetProcAddress(m_Tango,"LSX_GetAnalogInputs2"));
                if (!m_pGetAnalogInputs2) m_DLLResultat=-2;

                VERIFY(m_pSendString= (PSendString) GetProcAddress(m_Tango,"LSX_SendString"));
                if (!m_pSendString) m_DLLResultat=-2;

                VERIFY(m_pSetSpeedPoti= (PSetSpeedPoti) GetProcAddress(m_Tango,"LSX_SetSpeedPoti"));
                if (!m_pSetSpeedPoti) m_DLLResultat=-2;

                VERIFY(m_pSetTVRMode= (PSetTVRMode) GetProcAddress(m_Tango,"LSX_SetTVRMode"));
                if (!m_pSetTVRMode) m_DLLResultat=-2;

                VERIFY(m_pSetAutoStatus= (PSetAutoStatus) GetProcAddress(m_Tango,"LSX_SetAutoStatus"));
                if (!m_pSetAutoStatus) m_DLLResultat=-2;

                VERIFY(m_pGetStatusAxis= (PGetStatusAxis) GetProcAddress(m_Tango,"LSX_GetStatusAxis"));
                if (!m_pGetStatusAxis) m_DLLResultat=-2;

                VERIFY(m_pSetDigIO_Off= (PSetDigIO_Off) GetProcAddress(m_Tango,"LSX_SetDigIO_Off"));
                if (!m_pSetDigIO_Off) m_DLLResultat=-2;

                VERIFY(m_pSetDigIO_Polarity= (PSetDigIO_Polarity) GetProcAddress(m_Tango,"LSX_SetDigIO_Polarity"));
                if (!m_pSetDigIO_Polarity) m_DLLResultat=-2;

                VERIFY(m_pSetDigIO_EmergencyStop= (PSetDigIO_EmergencyStop) GetProcAddress(m_Tango,"LSX_SetDigIO_EmergencyStop"));
                if (!m_pSetDigIO_EmergencyStop) m_DLLResultat=-2;

                VERIFY(m_pSetDigIO_Distance= (PSetDigIO_Distance) GetProcAddress(m_Tango,"LSX_SetDigIO_Distance"));
                if (!m_pSetDigIO_Distance) m_DLLResultat=-2;

                VERIFY(m_pSetDimensions= (PSetDimensions) GetProcAddress(m_Tango,"LSX_SetDimensions"));
                if (!m_pSetDimensions) m_DLLResultat=-2;

                VERIFY(m_pMoveRelShort= (PMoveRelShort) GetProcAddress(m_Tango,"LSX_MoveRelShort"));
                if (!m_pMoveRelShort) m_DLLResultat=-2;

                VERIFY(m_pSetEncoderPeriod= (PSetEncoderPeriod) GetProcAddress(m_Tango,"LSX_SetEncoderPeriod"));
                if (!m_pSetEncoderPeriod) m_DLLResultat=-2;

                VERIFY(m_pSetJoystickDir= (PSetJoystickDir) GetProcAddress(m_Tango,"LSX_SetJoystickDir"));
                if (!m_pSetJoystickDir) m_DLLResultat=-2;

                VERIFY(m_pSetEncoderMask= (PSetEncoderMask) GetProcAddress(m_Tango,"LSX_SetEncoderMask"));
                if (!m_pSetEncoderMask) m_DLLResultat=-2;

                VERIFY(m_pSetGear= (PSetGear) GetProcAddress(m_Tango,"LSX_SetGear"));
                if (!m_pSetGear) m_DLLResultat=-2;

                VERIFY(m_pSetHandWheelOn= (PSetHandWheelOn) GetProcAddress(m_Tango,"LSX_SetHandWheelOn"));
                if (!m_pSetHandWheelOn) m_DLLResultat=-2;

                VERIFY(m_pSetHandWheelOff= (PSetHandWheelOff) GetProcAddress(m_Tango,"LSX_SetHandWheelOff"));
                if (!m_pSetHandWheelOff) m_DLLResultat=-2;

                VERIFY(m_pSetFactorTVR= (PSetFactorTVR) GetProcAddress(m_Tango,"LSX_SetFactorTVR"));
                if (!m_pSetFactorTVR) m_DLLResultat=-2;

                VERIFY(m_pSetTargetWindow= (PSetTargetWindow) GetProcAddress(m_Tango,"LSX_SetTargetWindow"));
                if (!m_pSetTargetWindow) m_DLLResultat=-2;

                VERIFY(m_pSetController= (PSetController) GetProcAddress(m_Tango,"LSX_SetController"));
                if (!m_pSetController) m_DLLResultat=-2;

                VERIFY(m_pSetControllerCall= (PSetControllerCall) GetProcAddress(m_Tango,"LSX_SetControllerCall"));
                if (!m_pSetControllerCall) m_DLLResultat=-2;

                VERIFY(m_pSetControllerSteps= (PSetControllerSteps) GetProcAddress(m_Tango,"LSX_SetControllerSteps"));
                if (!m_pSetControllerSteps) m_DLLResultat=-2;

                VERIFY(m_pSetControllerFactor= (PSetControllerFactor) GetProcAddress(m_Tango,"LSX_SetControllerFactor"));
                if (!m_pSetControllerFactor) m_DLLResultat=-2;

                VERIFY(m_pSetControllerTWDelay= (PSetControllerTWDelay) GetProcAddress(m_Tango,"LSX_SetControllerTWDelay"));
                if (!m_pSetControllerTWDelay) m_DLLResultat=-2;

                VERIFY(m_pSetEncoderRefSignal= (PSetEncoderRefSignal) GetProcAddress(m_Tango,"LSX_SetEncoderRefSignal"));
                if (!m_pSetEncoderRefSignal) m_DLLResultat=-2;

                VERIFY(m_pSetEncoderPosition= (PSetEncoderPosition) GetProcAddress(m_Tango,"LSX_SetEncoderPosition"));
                if (!m_pSetEncoderPosition) m_DLLResultat=-2;

                VERIFY(m_pGetVersionStr= (PGetVersionStr) GetProcAddress(m_Tango,"LSX_GetVersionStr"));
                if (!m_pGetVersionStr) m_DLLResultat=-2;

                VERIFY(m_pGetError= (PGetError) GetProcAddress(m_Tango,"LSX_GetError"));
                if (!m_pGetError) m_DLLResultat=-2;

                VERIFY(m_pGetPosSingleAxis= (PGetPosSingleAxis) GetProcAddress(m_Tango,"LSX_GetPosSingleAxis"));
                if (!m_pGetPosSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pSetDistance= (PSetDistance) GetProcAddress(m_Tango,"LSX_SetDistance"));
                if (!m_pSetDistance) m_DLLResultat=-2;

                VERIFY(m_pGetPosEx= (PGetPosEx) GetProcAddress(m_Tango,"LSX_GetPosEx"));
                if (!m_pGetPosEx) m_DLLResultat=-2;

                VERIFY(m_pSetShowCmdList= (PSetShowCmdList) GetProcAddress(m_Tango,"LSX_SetShowCmdList"));
                if (!m_pSetShowCmdList) m_DLLResultat=-2;

                VERIFY(m_pSetWriteLogText= (PSetWriteLogText) GetProcAddress(m_Tango,"LSX_SetWriteLogText"));
                if (!m_pSetWriteLogText) m_DLLResultat=-2;

                VERIFY(m_pSetControllerTimeout= (PSetControllerTimeout) GetProcAddress(m_Tango,"LSX_SetControllerTimeout"));
                if (!m_pSetControllerTimeout) m_DLLResultat=-2;

                VERIFY(m_pSetEncoderActive= (PSetEncoderActive) GetProcAddress(m_Tango,"LSX_SetEncoderActive"));
                if (!m_pSetEncoderActive) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotCount= (PGetSnapshotCount) GetProcAddress(m_Tango,"LSX_GetSnapshotCount"));
                if (!m_pGetSnapshotCount) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotCount= (PSetSnapshotCount) GetProcAddress(m_Tango,"LSX_SetSnapshotCount"));
                if (!m_pSetSnapshotCount) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotPos= (PGetSnapshotPos) GetProcAddress(m_Tango,"LSX_GetSnapshotPos"));
                if (!m_pGetSnapshotPos) m_DLLResultat=-2;

                VERIFY(m_pSetCorrTblOff= (PSetCorrTblOff) GetProcAddress(m_Tango,"LSX_SetCorrTblOff"));
                if (!m_pSetCorrTblOff) m_DLLResultat=-2;

                VERIFY(m_pSetCorrTblOn= (PSetCorrTblOn) GetProcAddress(m_Tango,"LSX_SetCorrTblOn"));
                if (!m_pSetCorrTblOn) m_DLLResultat=-2;

                VERIFY(m_pSetFactorMode= (PSetFactorMode) GetProcAddress(m_Tango,"LSX_SetFactorMode"));
                if (!m_pSetFactorMode) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshot= (PSetSnapshot) GetProcAddress(m_Tango,"LSX_SetSnapshot"));
                if (!m_pSetSnapshot) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotPar= (PSetSnapshotPar) GetProcAddress(m_Tango,"LSX_SetSnapshotPar"));
                if (!m_pSetSnapshotPar) m_DLLResultat=-2;

                VERIFY(m_pSetTrigger= (PSetTrigger) GetProcAddress(m_Tango,"LSX_SetTrigger"));
                if (!m_pSetTrigger) m_DLLResultat=-2;

                VERIFY(m_pSetTriggerPar= (PSetTriggerPar) GetProcAddress(m_Tango,"LSX_SetTriggerPar"));
                if (!m_pSetTriggerPar) m_DLLResultat=-2;

                VERIFY(m_pSetLanguage= (PSetLanguage) GetProcAddress(m_Tango,"LSX_SetLanguage"));
                if (!m_pSetLanguage) m_DLLResultat=-2;

                VERIFY(m_pGetSwitches= (PGetSwitches) GetProcAddress(m_Tango,"LSX_GetSwitches"));
                if (!m_pGetSwitches) m_DLLResultat=-2;

                VERIFY(m_pGetSerialNr= (PGetSerialNr) GetProcAddress(m_Tango,"LSX_GetSerialNr"));
                if (!m_pGetSerialNr) m_DLLResultat=-2;

                VERIFY(m_pSetCalibOffset= (PSetCalibOffset) GetProcAddress(m_Tango,"LSX_SetCalibOffset"));
                if (!m_pSetCalibOffset) m_DLLResultat=-2;

                VERIFY(m_pSetRMOffset= (PSetRMOffset) GetProcAddress(m_Tango,"LSX_SetRMOffset"));
                if (!m_pSetRMOffset) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotPosArray= (PGetSnapshotPosArray) GetProcAddress(m_Tango,"LSX_GetSnapshotPosArray"));
                if (!m_pGetSnapshotPosArray) m_DLLResultat=-2;

                VERIFY(m_pSetAxisDirection= (PSetAxisDirection) GetProcAddress(m_Tango,"LSX_SetAxisDirection"));
                if (!m_pSetAxisDirection) m_DLLResultat=-2;

                VERIFY(m_pSetCalibrateDir= (PSetCalibrateDir) GetProcAddress(m_Tango,"LSX_SetCalibrateDir"));
                if (!m_pSetCalibrateDir) m_DLLResultat=-2;

                VERIFY(m_pLStepSave= (PLStepSave) GetProcAddress(m_Tango,"LSX_LStepSave"));
                if (!m_pLStepSave) m_DLLResultat=-2;

                VERIFY(m_pSetBPZ= (PSetBPZ) GetProcAddress(m_Tango,"LSX_SetBPZ"));
                if (!m_pSetBPZ) m_DLLResultat=-2;

                VERIFY(m_pSetBPZTrackballFactor= (PSetBPZTrackballFactor) GetProcAddress(m_Tango,"LSX_SetBPZTrackballFactor"));
                if (!m_pSetBPZTrackballFactor) m_DLLResultat=-2;

                VERIFY(m_pSetBPZTrackballBackLash= (PSetBPZTrackballBackLash) GetProcAddress(m_Tango,"LSX_SetBPZTrackballBackLash"));
                if (!m_pSetBPZTrackballBackLash) m_DLLResultat=-2;

                VERIFY(m_pSetBPZJoyspeed= (PSetBPZJoyspeed) GetProcAddress(m_Tango,"LSX_SetBPZJoyspeed"));
                if (!m_pSetBPZJoyspeed) m_DLLResultat=-2;

                VERIFY(m_pSetJoystickWindow= (PSetJoystickWindow) GetProcAddress(m_Tango,"LSX_SetJoystickWindow"));
                if (!m_pSetJoystickWindow) m_DLLResultat=-2;

                VERIFY(m_pSetCurrentDelay= (PSetCurrentDelay) GetProcAddress(m_Tango,"LSX_SetCurrentDelay"));
                if (!m_pSetCurrentDelay) m_DLLResultat=-2;

                VERIFY(m_pWaitForAxisStop= (PWaitForAxisStop) GetProcAddress(m_Tango,"LSX_WaitForAxisStop"));
                if (!m_pWaitForAxisStop) m_DLLResultat=-2;

                VERIFY(m_pSetProcessMessagesProc= (PSetProcessMessagesProc) GetProcAddress(m_Tango,"LSX_SetProcessMessagesProc"));
                if (!m_pSetProcessMessagesProc) m_DLLResultat=-2;

                VERIFY(m_pSendStringPosCmd= (PSendStringPosCmd) GetProcAddress(m_Tango,"LSX_SendStringPosCmd"));
                if (!m_pSendStringPosCmd) m_DLLResultat=-2;

                VERIFY(m_pSetDigitalOutputs= (PSetDigitalOutputs) GetProcAddress(m_Tango,"LSX_SetDigitalOutputs"));
                if (!m_pSetDigitalOutputs) m_DLLResultat=-2;

                VERIFY(m_pSetWriteLogTextFN= (PSetWriteLogTextFN) GetProcAddress(m_Tango,"LSX_SetWriteLogTextFN"));
                if (!m_pSetWriteLogTextFN) m_DLLResultat=-2;

                VERIFY(m_pSetDigitalOutputsE= (PSetDigitalOutputsE) GetProcAddress(m_Tango,"LSX_SetDigitalOutputsE"));
                if (!m_pSetDigitalOutputsE) m_DLLResultat=-2;

                VERIFY(m_pGetDigitalInputsE= (PGetDigitalInputsE) GetProcAddress(m_Tango,"LSX_GetDigitalInputsE"));
                if (!m_pGetDigitalInputsE) m_DLLResultat=-2;

                VERIFY(m_pEnableCommandRetry= (PEnableCommandRetry) GetProcAddress(m_Tango,"LSX_EnableCommandRetry"));
                if (!m_pEnableCommandRetry) m_DLLResultat=-2;

                VERIFY(m_pSetXYAxisComp= (PSetXYAxisComp) GetProcAddress(m_Tango,"LSX_SetXYAxisComp"));
                if (!m_pSetXYAxisComp) m_DLLResultat=-2;

                VERIFY(m_pGetVersionStrDet= (PGetVersionStrDet) GetProcAddress(m_Tango,"LSX_GetVersionStrDet"));
                if (!m_pGetVersionStrDet) m_DLLResultat=-2;

                VERIFY(m_pSetDllNumOfAxes= (PSetDllNumOfAxes) GetProcAddress(m_Tango,"LSX_SetDllNumOfAxes"));
                if (!m_pSetDllNumOfAxes) m_DLLResultat=-2;

                VERIFY(m_pSetCommandTimeout= (PSetCommandTimeout) GetProcAddress(m_Tango,"LSX_SetCommandTimeout"));
                if (!m_pSetCommandTimeout) m_DLLResultat=-2;

                VERIFY(m_pSetExtValue= (PSetExtValue) GetProcAddress(m_Tango,"LSX_SetExtValue"));
                if (!m_pSetExtValue) m_DLLResultat=-2;

                VERIFY(m_pFlushBuffer= (PFlushBuffer) GetProcAddress(m_Tango,"LSX_FlushBuffer"));
                if (!m_pFlushBuffer) m_DLLResultat=-2;

                VERIFY(m_pGetEEPRomValue= (PGetEEPRomValue) GetProcAddress(m_Tango,"LSX_GetEEPRomValue"));
                if (!m_pGetEEPRomValue) m_DLLResultat=-2;

                VERIFY(m_pSetEEPRomValue= (PSetEEPRomValue) GetProcAddress(m_Tango,"LSX_SetEEPRomValue"));
                if (!m_pSetEEPRomValue) m_DLLResultat=-2;

                VERIFY(m_pGetXYAxisComp= (PGetXYAxisComp) GetProcAddress(m_Tango,"LSX_GetXYAxisComp"));
                if (!m_pGetXYAxisComp) m_DLLResultat=-2;

                VERIFY(m_pGetDimensions= (PGetDimensions) GetProcAddress(m_Tango,"LSX_GetDimensions"));
                if (!m_pGetDimensions) m_DLLResultat=-2;

                VERIFY(m_pGetPitch= (PGetPitch) GetProcAddress(m_Tango,"LSX_GetPitch"));
                if (!m_pGetPitch) m_DLLResultat=-2;

                VERIFY(m_pGetGear= (PGetGear) GetProcAddress(m_Tango,"LSX_GetGear"));
                if (!m_pGetGear) m_DLLResultat=-2;

                VERIFY(m_pGetVel= (PGetVel) GetProcAddress(m_Tango,"LSX_GetVel"));
                if (!m_pGetVel) m_DLLResultat=-2;

                VERIFY(m_pGetAccel= (PGetAccel) GetProcAddress(m_Tango,"LSX_GetAccel"));
                if (!m_pGetAccel) m_DLLResultat=-2;

                VERIFY(m_pSetVelFac= (PSetVelFac) GetProcAddress(m_Tango,"LSX_SetVelFac"));
                if (!m_pSetVelFac) m_DLLResultat=-2;

                VERIFY(m_pGetVelFac= (PGetVelFac) GetProcAddress(m_Tango,"LSX_GetVelFac"));
                if (!m_pGetVelFac) m_DLLResultat=-2;

                VERIFY(m_pGetSpeedPoti= (PGetSpeedPoti) GetProcAddress(m_Tango,"LSX_GetSpeedPoti"));
                if (!m_pGetSpeedPoti) m_DLLResultat=-2;

                VERIFY(m_pGetMotorCurrent= (PGetMotorCurrent) GetProcAddress(m_Tango,"LSX_GetMotorCurrent"));
                if (!m_pGetMotorCurrent) m_DLLResultat=-2;

                VERIFY(m_pGetReduction= (PGetReduction) GetProcAddress(m_Tango,"LSX_GetReduction"));
                if (!m_pGetReduction) m_DLLResultat=-2;

                VERIFY(m_pGetCurrentDelay= (PGetCurrentDelay) GetProcAddress(m_Tango,"LSX_GetCurrentDelay"));
                if (!m_pGetCurrentDelay) m_DLLResultat=-2;

                VERIFY(m_pSetOutFuncLev= (PSetOutFuncLev) GetProcAddress(m_Tango,"LSX_SetOutFuncLev"));
                if (!m_pSetOutFuncLev) m_DLLResultat=-2;

                VERIFY(m_pGetOutFuncLev= (PGetOutFuncLev) GetProcAddress(m_Tango,"LSX_GetOutFuncLev"));
                if (!m_pGetOutFuncLev) m_DLLResultat=-2;

                VERIFY(m_pGetActiveAxes= (PGetActiveAxes) GetProcAddress(m_Tango,"LSX_GetActiveAxes"));
                if (!m_pGetActiveAxes) m_DLLResultat=-2;

                VERIFY(m_pGetAxisDirection= (PGetAxisDirection) GetProcAddress(m_Tango,"LSX_GetAxisDirection"));
                if (!m_pGetAxisDirection) m_DLLResultat=-2;

                VERIFY(m_pGetCalibOffset= (PGetCalibOffset) GetProcAddress(m_Tango,"LSX_GetCalibOffset"));
                if (!m_pGetCalibOffset) m_DLLResultat=-2;

                VERIFY(m_pGetRMOffset= (PGetRMOffset) GetProcAddress(m_Tango,"LSX_GetRMOffset"));
                if (!m_pGetRMOffset) m_DLLResultat=-2;

                VERIFY(m_pGetCalibrateDir= (PGetCalibrateDir) GetProcAddress(m_Tango,"LSX_GetCalibrateDir"));
                if (!m_pGetCalibrateDir) m_DLLResultat=-2;

                VERIFY(m_pSetCalibBackSpeed= (PSetCalibBackSpeed) GetProcAddress(m_Tango,"LSX_SetCalibBackSpeed"));
                if (!m_pSetCalibBackSpeed) m_DLLResultat=-2;

                VERIFY(m_pGetCalibBackSpeed= (PGetCalibBackSpeed) GetProcAddress(m_Tango,"LSX_GetCalibBackSpeed"));
                if (!m_pGetCalibBackSpeed) m_DLLResultat=-2;

                VERIFY(m_pSetRefSpeed= (PSetRefSpeed) GetProcAddress(m_Tango,"LSX_SetRefSpeed"));
                if (!m_pSetRefSpeed) m_DLLResultat=-2;

                VERIFY(m_pGetRefSpeed= (PGetRefSpeed) GetProcAddress(m_Tango,"LSX_GetRefSpeed"));
                if (!m_pGetRefSpeed) m_DLLResultat=-2;

                VERIFY(m_pSetPowerAmplifier= (PSetPowerAmplifier) GetProcAddress(m_Tango,"LSX_SetPowerAmplifier"));
                if (!m_pSetPowerAmplifier) m_DLLResultat=-2;

                VERIFY(m_pGetPowerAmplifier= (PGetPowerAmplifier) GetProcAddress(m_Tango,"LSX_GetPowerAmplifier"));
                if (!m_pGetPowerAmplifier) m_DLLResultat=-2;

                VERIFY(m_pSetMotorTablePatch= (PSetMotorTablePatch) GetProcAddress(m_Tango,"LSX_SetMotorTablePatch"));
                if (!m_pSetMotorTablePatch) m_DLLResultat=-2;

                VERIFY(m_pGetMotorTablePatch= (PGetMotorTablePatch) GetProcAddress(m_Tango,"LSX_GetMotorTablePatch"));
                if (!m_pGetMotorTablePatch) m_DLLResultat=-2;

                VERIFY(m_pSetJoystickFilter= (PSetJoystickFilter) GetProcAddress(m_Tango,"LSX_SetJoystickFilter"));
                if (!m_pSetJoystickFilter) m_DLLResultat=-2;

                VERIFY(m_pGetJoystickFilter= (PGetJoystickFilter) GetProcAddress(m_Tango,"LSX_GetJoystickFilter"));
                if (!m_pGetJoystickFilter) m_DLLResultat=-2;

                VERIFY(m_pSetStopPolarity= (PSetStopPolarity) GetProcAddress(m_Tango,"LSX_SetStopPolarity"));
                if (!m_pSetStopPolarity) m_DLLResultat=-2;

                VERIFY(m_pGetStopPolarity= (PGetStopPolarity) GetProcAddress(m_Tango,"LSX_GetStopPolarity"));
                if (!m_pGetStopPolarity) m_DLLResultat=-2;

                VERIFY(m_pSetVLevel= (PSetVLevel) GetProcAddress(m_Tango,"LSX_SetVLevel"));
                if (!m_pSetVLevel) m_DLLResultat=-2;

                VERIFY(m_pGetVLevel= (PGetVLevel) GetProcAddress(m_Tango,"LSX_GetVLevel"));
                if (!m_pGetVLevel) m_DLLResultat=-2;

                VERIFY(m_pSetStopAccel= (PSetStopAccel) GetProcAddress(m_Tango,"LSX_SetStopAccel"));
                if (!m_pSetStopAccel) m_DLLResultat=-2;

                VERIFY(m_pGetStopAccel= (PGetStopAccel) GetProcAddress(m_Tango,"LSX_GetStopAccel"));
                if (!m_pGetStopAccel) m_DLLResultat=-2;

                VERIFY(m_pGetVersionStrInfo= (PGetVersionStrInfo) GetProcAddress(m_Tango,"LSX_GetVersionStrInfo"));
                if (!m_pGetVersionStrInfo) m_DLLResultat=-2;

                VERIFY(m_pGetStatusLimit= (PGetStatusLimit) GetProcAddress(m_Tango,"LSX_GetStatusLimit"));
                if (!m_pGetStatusLimit) m_DLLResultat=-2;

                VERIFY(m_pGetSecurityErr= (PGetSecurityErr) GetProcAddress(m_Tango,"LSX_GetSecurityErr"));
                if (!m_pGetSecurityErr) m_DLLResultat=-2;

                VERIFY(m_pGetSecurityStatus= (PGetSecurityStatus) GetProcAddress(m_Tango,"LSX_GetSecurityStatus"));
                if (!m_pGetSecurityStatus) m_DLLResultat=-2;

                VERIFY(m_pGetDelay= (PGetDelay) GetProcAddress(m_Tango,"LSX_GetDelay"));
                if (!m_pGetDelay) m_DLLResultat=-2;

                VERIFY(m_pGetDistance= (PGetDistance) GetProcAddress(m_Tango,"LSX_GetDistance"));
                if (!m_pGetDistance) m_DLLResultat=-2;

                VERIFY(m_pClearPos= (PClearPos) GetProcAddress(m_Tango,"LSX_ClearPos"));
                if (!m_pClearPos) m_DLLResultat=-2;

                VERIFY(m_pSetDigJoySpeed= (PSetDigJoySpeed) GetProcAddress(m_Tango,"LSX_SetDigJoySpeed"));
                if (!m_pSetDigJoySpeed) m_DLLResultat=-2;

                VERIFY(m_pGetDigJoySpeed= (PGetDigJoySpeed) GetProcAddress(m_Tango,"LSX_GetDigJoySpeed"));
                if (!m_pGetDigJoySpeed) m_DLLResultat=-2;

                VERIFY(m_pGetJoystickDir= (PGetJoystickDir) GetProcAddress(m_Tango,"LSX_GetJoystickDir"));
                if (!m_pGetJoystickDir) m_DLLResultat=-2;

                VERIFY(m_pGetJoystick= (PGetJoystick) GetProcAddress(m_Tango,"LSX_GetJoystick"));
                if (!m_pGetJoystick) m_DLLResultat=-2;

                VERIFY(m_pGetJoystickWindow= (PGetJoystickWindow) GetProcAddress(m_Tango,"LSX_GetJoystickWindow"));
                if (!m_pGetJoystickWindow) m_DLLResultat=-2;

                VERIFY(m_pGetHandWheel= (PGetHandWheel) GetProcAddress(m_Tango,"LSX_GetHandWheel"));
                if (!m_pGetHandWheel) m_DLLResultat=-2;

                VERIFY(m_pGetBPZ= (PGetBPZ) GetProcAddress(m_Tango,"LSX_GetBPZ"));
                if (!m_pGetBPZ) m_DLLResultat=-2;

                VERIFY(m_pGetBPZTrackballFactor= (PGetBPZTrackballFactor) GetProcAddress(m_Tango,"LSX_GetBPZTrackballFactor"));
                if (!m_pGetBPZTrackballFactor) m_DLLResultat=-2;

                VERIFY(m_pGetBPZTrackballBackLash= (PGetBPZTrackballBackLash) GetProcAddress(m_Tango,"LSX_GetBPZTrackballBackLash"));
                if (!m_pGetBPZTrackballBackLash) m_DLLResultat=-2;

                VERIFY(m_pGetBPZJoyspeed= (PGetBPZJoyspeed) GetProcAddress(m_Tango,"LSX_GetBPZJoyspeed"));
                if (!m_pGetBPZJoyspeed) m_DLLResultat=-2;

                VERIFY(m_pGetLimitControl= (PGetLimitControl) GetProcAddress(m_Tango,"LSX_GetLimitControl"));
                if (!m_pGetLimitControl) m_DLLResultat=-2;

                VERIFY(m_pSetAutoLimitAfterCalibRM= (PSetAutoLimitAfterCalibRM) GetProcAddress(m_Tango,"LSX_SetAutoLimitAfterCalibRM"));
                if (!m_pSetAutoLimitAfterCalibRM) m_DLLResultat=-2;

                VERIFY(m_pGetAutoLimitAfterCalibRM= (PGetAutoLimitAfterCalibRM) GetProcAddress(m_Tango,"LSX_GetAutoLimitAfterCalibRM"));
                if (!m_pGetAutoLimitAfterCalibRM) m_DLLResultat=-2;

                VERIFY(m_pGetSwitchPolarity= (PGetSwitchPolarity) GetProcAddress(m_Tango,"LSX_GetSwitchPolarity"));
                if (!m_pGetSwitchPolarity) m_DLLResultat=-2;

                VERIFY(m_pGetSwitchActive= (PGetSwitchActive) GetProcAddress(m_Tango,"LSX_GetSwitchActive"));
                if (!m_pGetSwitchActive) m_DLLResultat=-2;

                VERIFY(m_pGetTVRMode= (PGetTVRMode) GetProcAddress(m_Tango,"LSX_GetTVRMode"));
                if (!m_pGetTVRMode) m_DLLResultat=-2;

                VERIFY(m_pGetFactorTVR= (PGetFactorTVR) GetProcAddress(m_Tango,"LSX_GetFactorTVR"));
                if (!m_pGetFactorTVR) m_DLLResultat=-2;

                VERIFY(m_pSetTVROutMode= (PSetTVROutMode) GetProcAddress(m_Tango,"LSX_SetTVROutMode"));
                if (!m_pSetTVROutMode) m_DLLResultat=-2;

                VERIFY(m_pGetTVROutMode= (PGetTVROutMode) GetProcAddress(m_Tango,"LSX_GetTVROutMode"));
                if (!m_pGetTVROutMode) m_DLLResultat=-2;

                VERIFY(m_pSetTVROutResolution= (PSetTVROutResolution) GetProcAddress(m_Tango,"LSX_SetTVROutResolution"));
                if (!m_pSetTVROutResolution) m_DLLResultat=-2;

                VERIFY(m_pGetTVROutResolution= (PGetTVROutResolution) GetProcAddress(m_Tango,"LSX_GetTVROutResolution"));
                if (!m_pGetTVROutResolution) m_DLLResultat=-2;

                VERIFY(m_pSetTVROutPitch= (PSetTVROutPitch) GetProcAddress(m_Tango,"LSX_SetTVROutPitch"));
                if (!m_pSetTVROutPitch) m_DLLResultat=-2;

                VERIFY(m_pGetTVROutPitch= (PGetTVROutPitch) GetProcAddress(m_Tango,"LSX_GetTVROutPitch"));
                if (!m_pGetTVROutPitch) m_DLLResultat=-2;

                VERIFY(m_pSetVelTVRO= (PSetVelTVRO) GetProcAddress(m_Tango,"LSX_SetVelTVRO"));
                if (!m_pSetVelTVRO) m_DLLResultat=-2;

                VERIFY(m_pGetVelTVRO= (PGetVelTVRO) GetProcAddress(m_Tango,"LSX_GetVelTVRO"));
                if (!m_pGetVelTVRO) m_DLLResultat=-2;

                VERIFY(m_pSetAccelTVRO= (PSetAccelTVRO) GetProcAddress(m_Tango,"LSX_SetAccelTVRO"));
                if (!m_pSetAccelTVRO) m_DLLResultat=-2;

                VERIFY(m_pGetAccelTVRO= (PGetAccelTVRO) GetProcAddress(m_Tango,"LSX_GetAccelTVRO"));
                if (!m_pGetAccelTVRO) m_DLLResultat=-2;

                VERIFY(m_pSetVelSingleAxisTVRO= (PSetVelSingleAxisTVRO) GetProcAddress(m_Tango,"LSX_SetVelSingleAxisTVRO"));
                if (!m_pSetVelSingleAxisTVRO) m_DLLResultat=-2;

                VERIFY(m_pSetAccelSingleAxisTVRO= (PSetAccelSingleAxisTVRO) GetProcAddress(m_Tango,"LSX_SetAccelSingleAxisTVRO"));
                if (!m_pSetAccelSingleAxisTVRO) m_DLLResultat=-2;

                VERIFY(m_pSetPosTVRO= (PSetPosTVRO) GetProcAddress(m_Tango,"LSX_SetPosTVRO"));
                if (!m_pSetPosTVRO) m_DLLResultat=-2;

                VERIFY(m_pGetPosTVRO= (PGetPosTVRO) GetProcAddress(m_Tango,"LSX_GetPosTVRO"));
                if (!m_pGetPosTVRO) m_DLLResultat=-2;

                VERIFY(m_pMoveAbsTVRO= (PMoveAbsTVRO) GetProcAddress(m_Tango,"LSX_MoveAbsTVRO"));
                if (!m_pMoveAbsTVRO) m_DLLResultat=-2;

                VERIFY(m_pMoveRelTVRO= (PMoveRelTVRO) GetProcAddress(m_Tango,"LSX_MoveRelTVRO"));
                if (!m_pMoveRelTVRO) m_DLLResultat=-2;

                VERIFY(m_pMoveRelTVROSingleAxis= (PMoveRelTVROSingleAxis) GetProcAddress(m_Tango,"LSX_MoveRelTVROSingleAxis"));
                if (!m_pMoveRelTVROSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pMoveAbsTVROSingleAxis= (PMoveAbsTVROSingleAxis) GetProcAddress(m_Tango,"LSX_MoveAbsTVROSingleAxis"));
                if (!m_pMoveAbsTVROSingleAxis) m_DLLResultat=-2;

                VERIFY(m_pGetStatusTVRO= (PGetStatusTVRO) GetProcAddress(m_Tango,"LSX_GetStatusTVRO"));
                if (!m_pGetStatusTVRO) m_DLLResultat=-2;

                VERIFY(m_pGetTargetWindow= (PGetTargetWindow) GetProcAddress(m_Tango,"LSX_GetTargetWindow"));
                if (!m_pGetTargetWindow) m_DLLResultat=-2;

                VERIFY(m_pGetEncoderPeriod= (PGetEncoderPeriod) GetProcAddress(m_Tango,"LSX_GetEncoderPeriod"));
                if (!m_pGetEncoderPeriod) m_DLLResultat=-2;

                VERIFY(m_pGetEncoderRefSignal= (PGetEncoderRefSignal) GetProcAddress(m_Tango,"LSX_GetEncoderRefSignal"));
                if (!m_pGetEncoderRefSignal) m_DLLResultat=-2;

                VERIFY(m_pGetEncoderPosition= (PGetEncoderPosition) GetProcAddress(m_Tango,"LSX_GetEncoderPosition"));
                if (!m_pGetEncoderPosition) m_DLLResultat=-2;

                VERIFY(m_pGetEncoderActive= (PGetEncoderActive) GetProcAddress(m_Tango,"LSX_GetEncoderActive"));
                if (!m_pGetEncoderActive) m_DLLResultat=-2;

                VERIFY(m_pGetController= (PGetController) GetProcAddress(m_Tango,"LSX_GetController"));
                if (!m_pGetController) m_DLLResultat=-2;

                VERIFY(m_pGetControllerCall= (PGetControllerCall) GetProcAddress(m_Tango,"LSX_GetControllerCall"));
                if (!m_pGetControllerCall) m_DLLResultat=-2;

                VERIFY(m_pGetControllerSteps= (PGetControllerSteps) GetProcAddress(m_Tango,"LSX_GetControllerSteps"));
                if (!m_pGetControllerSteps) m_DLLResultat=-2;

                VERIFY(m_pGetControllerFactor= (PGetControllerFactor) GetProcAddress(m_Tango,"LSX_GetControllerFactor"));
                if (!m_pGetControllerFactor) m_DLLResultat=-2;

                VERIFY(m_pGetControllerTWDelay= (PGetControllerTWDelay) GetProcAddress(m_Tango,"LSX_GetControllerTWDelay"));
                if (!m_pGetControllerTWDelay) m_DLLResultat=-2;

                VERIFY(m_pGetControllerTimeout= (PGetControllerTimeout) GetProcAddress(m_Tango,"LSX_GetControllerTimeout"));
                if (!m_pGetControllerTimeout) m_DLLResultat=-2;

                VERIFY(m_pSetCtrFastMoveOn= (PSetCtrFastMoveOn) GetProcAddress(m_Tango,"LSX_SetCtrFastMoveOn"));
                if (!m_pSetCtrFastMoveOn) m_DLLResultat=-2;

                VERIFY(m_pSetCtrFastMoveOff= (PSetCtrFastMoveOff) GetProcAddress(m_Tango,"LSX_SetCtrFastMoveOff"));
                if (!m_pSetCtrFastMoveOff) m_DLLResultat=-2;

                VERIFY(m_pGetCtrFastMove= (PGetCtrFastMove) GetProcAddress(m_Tango,"LSX_GetCtrFastMove"));
                if (!m_pGetCtrFastMove) m_DLLResultat=-2;

                VERIFY(m_pClearCtrFastMoveCounter= (PClearCtrFastMoveCounter) GetProcAddress(m_Tango,"LSX_ClearCtrFastMoveCounter"));
                if (!m_pClearCtrFastMoveCounter) m_DLLResultat=-2;

                VERIFY(m_pGetCtrFastMoveCounter= (PGetCtrFastMoveCounter) GetProcAddress(m_Tango,"LSX_GetCtrFastMoveCounter"));
                if (!m_pGetCtrFastMoveCounter) m_DLLResultat=-2;

                VERIFY(m_pClearEncoder= (PClearEncoder) GetProcAddress(m_Tango,"LSX_ClearEncoder"));
                if (!m_pClearEncoder) m_DLLResultat=-2;

                VERIFY(m_pGetEncoder= (PGetEncoder) GetProcAddress(m_Tango,"LSX_GetEncoder"));
                if (!m_pGetEncoder) m_DLLResultat=-2;

                VERIFY(m_pGetTrigger= (PGetTrigger) GetProcAddress(m_Tango,"LSX_GetTrigger"));
                if (!m_pGetTrigger) m_DLLResultat=-2;

                VERIFY(m_pGetTriggerPar= (PGetTriggerPar) GetProcAddress(m_Tango,"LSX_GetTriggerPar"));
                if (!m_pGetTriggerPar) m_DLLResultat=-2;

                VERIFY(m_pSetTrigCount= (PSetTrigCount) GetProcAddress(m_Tango,"LSX_SetTrigCount"));
                if (!m_pSetTrigCount) m_DLLResultat=-2;

                VERIFY(m_pGetTrigCount= (PGetTrigCount) GetProcAddress(m_Tango,"LSX_GetTrigCount"));
                if (!m_pGetTrigCount) m_DLLResultat=-2;

                VERIFY(m_pSetTVRInPulse= (PSetTVRInPulse) GetProcAddress(m_Tango,"LSX_SetTVRInPulse"));
                if (!m_pSetTVRInPulse) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshot= (PGetSnapshot) GetProcAddress(m_Tango,"LSX_GetSnapshot"));
                if (!m_pGetSnapshot) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotFilter= (PSetSnapshotFilter) GetProcAddress(m_Tango,"LSX_SetSnapshotFilter"));
                if (!m_pSetSnapshotFilter) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotFilter= (PGetSnapshotFilter) GetProcAddress(m_Tango,"LSX_GetSnapshotFilter"));
                if (!m_pGetSnapshotFilter) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotPar= (PGetSnapshotPar) GetProcAddress(m_Tango,"LSX_GetSnapshotPar"));
                if (!m_pGetSnapshotPar) m_DLLResultat=-2;

                VERIFY(m_pGetLimit= (PGetLimit) GetProcAddress(m_Tango,"LSX_GetLimit"));
                if (!m_pGetLimit) m_DLLResultat=-2;

                VERIFY(m_pJoyChangeAxis= (PJoyChangeAxis) GetProcAddress(m_Tango,"LSX_JoyChangeAxis"));
                if (!m_pJoyChangeAxis) m_DLLResultat=-2;

                VERIFY(m_pGetJoyChangeAxis= (PGetJoyChangeAxis) GetProcAddress(m_Tango,"LSX_GetJoyChangeAxis"));
                if (!m_pGetJoyChangeAxis) m_DLLResultat=-2;

                VERIFY(m_pGetSyncZA= (PGetSyncZA) GetProcAddress(m_Tango,"LSX_GetSyncZA"));
                if (!m_pGetSyncZA) m_DLLResultat=-2;

                VERIFY(m_pSetSyncZA= (PSetSyncZA) GetProcAddress(m_Tango,"LSX_SetSyncZA"));
                if (!m_pSetSyncZA) m_DLLResultat=-2;

                VERIFY(m_pGetKey= (PGetKey) GetProcAddress(m_Tango,"LSX_GetKey"));
                if (!m_pGetKey) m_DLLResultat=-2;

                VERIFY(m_pGetKeyLatch= (PGetKeyLatch) GetProcAddress(m_Tango,"LSX_GetKeyLatch"));
                if (!m_pGetKeyLatch) m_DLLResultat=-2;

                VERIFY(m_pClearKeyLatch= (PClearKeyLatch) GetProcAddress(m_Tango,"LSX_ClearKeyLatch"));
                if (!m_pClearKeyLatch) m_DLLResultat=-2;

                VERIFY(m_pSetZwTravel= (PSetZwTravel) GetProcAddress(m_Tango,"LSX_SetZwTravel"));
                if (!m_pSetZwTravel) m_DLLResultat=-2;

                VERIFY(m_pGetZwTravel= (PGetZwTravel) GetProcAddress(m_Tango,"LSX_GetZwTravel"));
                if (!m_pGetZwTravel) m_DLLResultat=-2;

                VERIFY(m_pSetSwitchType= (PSetSwitchType) GetProcAddress(m_Tango,"LSX_SetSwitchType"));
                if (!m_pSetSwitchType) m_DLLResultat=-2;

                VERIFY(m_pGetSwitchType= (PGetSwitchType) GetProcAddress(m_Tango,"LSX_GetSwitchType"));
                if (!m_pGetSwitchType) m_DLLResultat=-2;

                VERIFY(m_pSetMotorSteps= (PSetMotorSteps) GetProcAddress(m_Tango,"LSX_SetMotorSteps"));
                if (!m_pSetMotorSteps) m_DLLResultat=-2;

                VERIFY(m_pGetMotorSteps= (PGetMotorSteps) GetProcAddress(m_Tango,"LSX_GetMotorSteps"));
                if (!m_pGetMotorSteps) m_DLLResultat=-2;

                VERIFY(m_pSetAccelFunc= (PSetAccelFunc) GetProcAddress(m_Tango,"LSX_SetAccelFunc"));
                if (!m_pSetAccelFunc) m_DLLResultat=-2;

                VERIFY(m_pGetAccelFunc= (PGetAccelFunc) GetProcAddress(m_Tango,"LSX_GetAccelFunc"));
                if (!m_pGetAccelFunc) m_DLLResultat=-2;

                VERIFY(m_pClearSnapshotPosArray= (PClearSnapshotPosArray) GetProcAddress(m_Tango,"LSX_ClearSnapshotPosArray"));
                if (!m_pClearSnapshotPosArray) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotPosArray= (PSetSnapshotPosArray) GetProcAddress(m_Tango,"LSX_SetSnapshotPosArray"));
                if (!m_pSetSnapshotPosArray) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotIndex= (PSetSnapshotIndex) GetProcAddress(m_Tango,"LSX_SetSnapshotIndex"));
                if (!m_pSetSnapshotIndex) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotIndex= (PGetSnapshotIndex) GetProcAddress(m_Tango,"LSX_GetSnapshotIndex"));
                if (!m_pGetSnapshotIndex) m_DLLResultat=-2;

                VERIFY(m_pSetSnapshotMode= (PSetSnapshotMode) GetProcAddress(m_Tango,"LSX_SetSnapshotMode"));
                if (!m_pSetSnapshotMode) m_DLLResultat=-2;

                VERIFY(m_pGetSnapshotMode= (PGetSnapshotMode) GetProcAddress(m_Tango,"LSX_GetSnapshotMode"));
                if (!m_pGetSnapshotMode) m_DLLResultat=-2;


                VERIFY(m_pCreateLSID= (PCreateLSID) GetProcAddress(m_Tango,"LSX_CreateLSID"));
                if (!m_pCreateLSID) m_DLLResultat=-2;

                VERIFY(m_pFreeLSID= (PFreeLSID) GetProcAddress(m_Tango,"LSX_FreeLSID"));
                if (!m_pFreeLSID) m_DLLResultat=-2;


                VERIFY(m_pEject= (PEject) GetProcAddress(m_Tango,"LSX_Eject"));
                if (!m_pEject) m_DLLResultat=-2;

                VERIFY(m_pInsert= (PInsert) GetProcAddress(m_Tango,"LSX_Insert"));
                if (!m_pInsert) m_DLLResultat=-2;

                VERIFY(m_pSlideSeated= (PSlideSeated) GetProcAddress(m_Tango,"LSX_SlideSeated"));
                if (!m_pSlideSeated) m_DLLResultat=-2;

                VERIFY(m_pMagazinSeated= (PMagazinSeated) GetProcAddress(m_Tango,"LSX_MagazinSeated"));
                if (!m_pMagazinSeated) m_DLLResultat=-2;

                VERIFY(m_pGetGripper= (PGetGripper) GetProcAddress(m_Tango,"LSX_GetGripper"));
                if (!m_pGetGripper) m_DLLResultat=-2;

                VERIFY(m_pSetGripper= (PSetGripper) GetProcAddress(m_Tango,"LSX_SetGripper"));
                if (!m_pSetGripper) m_DLLResultat=-2;

                VERIFY(m_pGetSlide= (PGetSlide) GetProcAddress(m_Tango,"LSX_GetSlide"));
                if (!m_pGetSlide) m_DLLResultat=-2;

                VERIFY(m_pPutSlide= (PPutSlide) GetProcAddress(m_Tango,"LSX_PutSlide"));
                if (!m_pPutSlide) m_DLLResultat=-2;

                VERIFY(m_pSetPrioHandlerPos= (PSetPrioHandlerPos) GetProcAddress(m_Tango,"LSX_SetPrioHandlerPos"));
                if (!m_pSetPrioHandlerPos) m_DLLResultat=-2;

                VERIFY(m_pGetPrioHandlerPos= (PGetPrioHandlerPos) GetProcAddress(m_Tango,"LSX_GetPrioHandlerPos"));
                if (!m_pGetPrioHandlerPos) m_DLLResultat=-2;



                VERIFY(m_pGetTangoVersion= (PGetTangoVersion) GetProcAddress(m_Tango,"LSX_GetTangoVersion"));
                if (!m_pGetTangoVersion) m_DLLResultat=-2;

//                VERIFY(m_pGetRFID= (PGetRFID) GetProcAddress(m_Tango,"LSX_GetRFID"));
//                if (m_pGetRFID) m_DLLResultat=-2;

//                VERIFY(m_pSetRFID= (PSetRFID) GetProcAddress(m_Tango,"LSX_SetRFID"));
//                if (!m_pSetRFID) m_DLLResultat=-2;

                VERIFY(m_pGetTraySN= (PGetTraySN) GetProcAddress(m_Tango,"LSX_GetTraySN"));
                if (!m_pGetTraySN) m_DLLResultat=-2;

//                VERIFY(m_pSetTraySN= (PSetTraySN) GetProcAddress(m_Tango,"LSX_SetTraySN"));
//                if (!m_pSetTraySN) m_DLLResultat=-2;

                VERIFY(m_pGetLoaderType= (PGetLoaderType) GetProcAddress(m_Tango,"LSX_GetLoaderType"));
                if (!m_pGetLoaderType) m_DLLResultat=-2;

                VERIFY(m_pGetNumberOfRows= (PGetNumberOfRows) GetProcAddress(m_Tango,"LSX_GetNumberOfRows"));
                if (!m_pGetNumberOfRows) m_DLLResultat=-2;

                VERIFY(m_pGetNumberOfColumns= (PGetNumberOfColumns) GetProcAddress(m_Tango,"LSX_GetNumberOfColumns"));
                if (!m_pGetNumberOfColumns) m_DLLResultat=-2;

//                VERIFY(m_pGetNumberOfMagazines= (PGetNumberOfMagazines) GetProcAddress(m_Tango,"LSX_GetNumberOfMagazines"));
//                if (!m_pGetNumberOfMagazines) m_DLLResultat=-2;

				VERIFY(m_pXpos3MoveAbsSingleAxis = (PXpos3MoveAbsSingleAxis)GetProcAddress(m_Tango, "LSX_Xpos3_MoveAbsSingleAxis"));
				if (!m_pXpos3MoveAbsSingleAxis) m_DLLResultat = -2;

				VERIFY(m_pXpos3MoveRelSingleAxis = (PXpos3MoveRelSingleAxis)GetProcAddress(m_Tango, "LSX_Xpos3_MoveRelSingleAxis"));
				if (!m_pXpos3MoveRelSingleAxis) m_DLLResultat = -2;

				VERIFY(m_pXpos3SetPosSingleAxis = (PXpos3SetPosSingleAxis)GetProcAddress(m_Tango, "LSX_Xpos3_SetPosSingleAxis"));
				if (!m_pXpos3SetPosSingleAxis) m_DLLResultat = -2;

				VERIFY(m_pXpos3GetPosSingleAxis = (PXpos3GetPosSingleAxis)GetProcAddress(m_Tango, "LSX_Xpos3_GetPosSingleAxis"));
				if (!m_pXpos3GetPosSingleAxis) m_DLLResultat = -2;


				if (!m_DLLResultat) m_pCreateLSID(&m_LSID);

        }
}


// Destruktor
CTango::~CTango()
{
	if (m_Tango!=0)
	{
             m_pFreeLSID(m_LSID);
             FreeLibrary(m_Tango); // DLL wieder freigeben
	}
}


// gekapselte Funktionen der DLL

int CTango::Connect ()
{
        if (m_pConnect)
        {
                return m_pConnect (m_LSID);
        }
        else
                return -1;
}

int CTango::ConnectSimple (int lAnInterfaceType, char *pcAComName, int lABaudRate, BOOL bAShowProt)
{
/*   int HelpID;
   
   for(int i=0;i<64;i++)
   {
	   m_pCreateLSID(&HelpID);
   }

	m_pConnectSimple(HelpID, lAnInterfaceType, "COM2", 9600, true);
	m_pConnectSimple(HelpID, lAnInterfaceType, "COM3", 9600, true);
	m_pConnectSimple(HelpID, lAnInterfaceType, "COM4", 9600, true);
*/
	if (m_pConnectSimple)
        {
                return m_pConnectSimple (m_LSID, lAnInterfaceType, pcAComName, lABaudRate, bAShowProt);
        }
        else
                return -1;
}

int CTango::ConnectEx (TLS_ControlInitPar *pAControlInitPar)
{
        if (m_pConnectEx)
        {
                return m_pConnectEx (m_LSID, pAControlInitPar);
        }
        else
                return -1;
}

int CTango::Disconnect ()
{
        if (m_pDisconnect)
        {
                return m_pDisconnect (m_LSID);
        }
        else
                return -1;
}

int CTango::GetDLLVersionString (char *pcVers, int lMaxLen)
{
        if (m_pGetDLLVersionString)
        {
                return m_pGetDLLVersionString (m_LSID, pcVers, lMaxLen);
        }
        else
                return -1;
}

int CTango::LoadConfig (char *pcFileName)
{
        if (m_pLoadConfig)
        {
                return m_pLoadConfig (m_LSID, pcFileName);
        }
        else
                return -1;
}

int CTango::SaveConfig (char *pcFileName)
{
        if (m_pSaveConfig)
        {
                return m_pSaveConfig (m_LSID, pcFileName);
        }
        else
                return -1;
}

int CTango::ReadControlPars (void)
{
        if (m_pReadControlPars)
        {
                return m_pReadControlPars (m_LSID);
        }
        else
                return -1;
}

int CTango::SetCtrlPars (void)
{
        if (m_pSetCtrlPars)
        {
                return m_pSetCtrlPars (m_LSID);
        }
        else
                return -1;
}

int CTango::GetStageSN (char *pcSN, int lMaxLen)
{
        if (m_pGetStageSN)
        {
                return m_pGetStageSN (m_LSID, pcSN, lMaxLen);
        }
        else
                return -1;
}

int CTango::IsVel (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pIsVel)
        {
                return m_pIsVel (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::IsVelSingleAxis (int lAxis, double *pdVel)
{
        if (m_pIsVelSingleAxis)
        {
                return m_pIsVelSingleAxis (m_LSID, lAxis, pdVel);
        }
        else
                return -1;
}

int CTango::MoveAbs (double dX, double dY, double dZ, double dA, BOOL bWait)
{
        if (m_pMoveAbs)
        {
                return m_pMoveAbs (m_LSID, dX, dY, dZ, dA, bWait);
        }
        else
                return -1;
}

int CTango::MoveRel (double dX, double dY, double dZ, double dA, BOOL bWait)
{
        if (m_pMoveRel)
        {
                return m_pMoveRel (m_LSID, dX, dY, dZ, dA, bWait);
        }
        else
                return -1;
}

int CTango::MoveEx (double dX, double dY, double dZ, double dR, BOOL bRelative, BOOL bWait, int lAxisCount)
{
        if (m_pMoveEx)
        {
                return m_pMoveEx (m_LSID, dX, dY, dZ, dR, bRelative, bWait, lAxisCount);
        }
        else
                return -1;
}

int CTango::Go (double dX, double dY, double dZ, double dA)
{
        if (m_pGo)
        {
                return m_pGo (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::GoSingleAxis (int lAxis, double dValue)
{
        if (m_pGoSingleAxis)
        {
                return m_pGoSingleAxis (m_LSID, lAxis, dValue);
        }
        else
                return -1;
}

int CTango::GoEx (double dX, double dY, double dZ, double dA, int lAxisCount)
{
        if (m_pGoEx)
        {
                return m_pGoEx (m_LSID, dX, dY, dZ, dA, lAxisCount);
        }
        else
                return -1;
}

int CTango::Calibrate ()
{
        if (m_pCalibrate)
        {
                return m_pCalibrate (m_LSID);
        }
        else
                return -1;
}

int CTango::RMeasure ()
{
        if (m_pRMeasure)
        {
                return m_pRMeasure (m_LSID);
        }
        else
                return -1;
}

int CTango::SetPitch (double dX, double dY, double dZ, double dA)
{
        if (m_pSetPitch)
        {
                return m_pSetPitch (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetPos (double dX, double dY, double dZ, double dA)
{
        if (m_pSetPos)
        {
                return m_pSetPos (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetActiveAxes (int lFlags)
{
        if (m_pSetActiveAxes)
        {
                return m_pSetActiveAxes (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::SetVel (double dX, double dY, double dZ, double dA)
{
        if (m_pSetVel)
        {
                return m_pSetVel (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetAccel (double dX, double dY, double dZ, double dA)
{
        if (m_pSetAccel)
        {
                return m_pSetAccel (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetReduction (double dX, double dY, double dZ, double dA)
{
        if (m_pSetReduction)
        {
                return m_pSetReduction (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetDelay (int lDelay)
{
        if (m_pSetDelay)
        {
                return m_pSetDelay (m_LSID, lDelay);
        }
        else
                return -1;
}

int CTango::SetSwitchPolarity (int lXP, int lYP, int lZP, int lAP)
{
        if (m_pSetSwitchPolarity)
        {
                return m_pSetSwitchPolarity (m_LSID, lXP, lYP, lZP, lAP);
        }
        else
                return -1;
}

int CTango::SetSwitchActive (int lXA, int lYA, int lZA, int lAA)
{
        if (m_pSetSwitchActive)
        {
                return m_pSetSwitchActive (m_LSID, lXA, lYA, lZA, lAA);
        }
        else
                return -1;
}

int CTango::SetJoystickOn (BOOL bPositionCount, BOOL bEncoder)
{
        if (m_pSetJoystickOn)
        {
                return m_pSetJoystickOn (m_LSID, bPositionCount, bEncoder);
        }
        else
                return -1;
}

int CTango::SetJoystickOff ()
{
        if (m_pSetJoystickOff)
        {
                return m_pSetJoystickOff (m_LSID);
        }
        else
                return -1;
}

int CTango::SoftwareReset ()
{
        if (m_pSoftwareReset)
        {
                return m_pSoftwareReset (m_LSID);
        }
        else
                return -1;
}

int CTango::SetDigitalOutput (int lIndex, BOOL bValue)
{
        if (m_pSetDigitalOutput)
        {
                return m_pSetDigitalOutput (m_LSID, lIndex, bValue);
        }
        else
                return -1;
}

int CTango::SetAuxDigitalOutput (int lIndex, BOOL bValue)
{
        if (m_pSetAuxDigitalOutput)
        {
                return m_pSetAuxDigitalOutput (m_LSID, lIndex, bValue);
        }
        else
                return -1;
}

int CTango::GetDigitalInputs (int *plValue)
{
        if (m_pGetDigitalInputs)
        {
                return m_pGetDigitalInputs (m_LSID, plValue);
        }
        else
                return -1;
}

int CTango::SetAnalogOutput (int lIndex, int lValue)
{
        if (m_pSetAnalogOutput)
        {
                return m_pSetAnalogOutput (m_LSID, lIndex, lValue);
        }
        else
                return -1;
}

int CTango::SetLedBright (double dBright)
{
        if (m_pSetLedBright)
        {
                return m_pSetLedBright (m_LSID, dBright);
        }
        else
                return -1;
}

int CTango::GetAnalogInput (int lIndex, int *plValue)
{
        if (m_pGetAnalogInput)
        {
                return m_pGetAnalogInput (m_LSID, lIndex, plValue);
        }
        else
                return -1;
}

int CTango::GetHdiKeys(int *plKey1, int *plKey2, int *plKey3, int *plKey4)
{
	if (m_pGetHdiKeys)
	{
		return m_pGetHdiKeys(m_LSID, plKey1, plKey2, plKey3, plKey4);
	}
	else
		return -1;
}


int CTango::GetSmHdiButton (int lButtonNr, char *pcFunction, int lMaxLen)
{
        if (m_pGetSmHdiButton)
        {
                return m_pGetSmHdiButton (m_LSID, lButtonNr, pcFunction, lMaxLen);
        }
        else
                return -1;
}

int CTango::SetSmHdiButton (int lButtonNr, char *pcFunction)
{
        if (m_pSetSmHdiButton)
        {
                return m_pSetSmHdiButton (m_LSID, lButtonNr, pcFunction);
        }
        else
                return -1;
}

int CTango::SetHdiSpeedIndex (int lX, int lY, int lZ, int lA)
{
        if (m_pSetHdiSpeedIndex)
        {
                return m_pSetHdiSpeedIndex (m_LSID, lX, lY, lZ, lA);
        }
        else
                return -1;
}

int CTango::GetHdiSpeedIndex (int *plX, int *plY, int *plZ, int *plA)
{
        if (m_pGetHdiSpeedIndex)
        {
                return m_pGetHdiSpeedIndex (m_LSID, plX, plY, plZ, plA);
        }
        else
                return -1;
}

int CTango::SetHdiSpeedIndexSingleAxis (int lAxis, int lIndex)
{
        if (m_pSetHdiSpeedIndexSingleAxis)
        {
                return m_pSetHdiSpeedIndexSingleAxis (m_LSID, lAxis, lIndex);
        }
        else
                return -1;
}

int CTango::GetHdiSpeedIndexSingleAxis (int lAxis, int *plIndex)
{
        if (m_pGetHdiSpeedIndexSingleAxis)
        {
                return m_pGetHdiSpeedIndexSingleAxis (m_LSID, lAxis, plIndex);
        }
        else
                return -1;
}

int CTango::SetHwFactor (double dX, double dY, double dZ, double dA)
{
        if (m_pSetHwFactor)
        {
                return m_pSetHwFactor (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::GetHwFactor (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetHwFactor)
        {
                return m_pGetHwFactor (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::SetHwFactorSingleAxis (int lAxis, double dFactor)
{
        if (m_pSetHwFactorSingleAxis)
        {
                return m_pSetHwFactorSingleAxis (m_LSID, lAxis, dFactor);
        }
        else
                return -1;
}

int CTango::GetHwFactorSingleAxis (int lAxis, double *pdFactor)
{
        if (m_pGetHwFactorSingleAxis)
        {
                return m_pGetHwFactorSingleAxis (m_LSID, lAxis, pdFactor);
        }
        else
                return -1;
}

int CTango::SetHwFactorB (double dX, double dY, double dZ, double dA)
{
        if (m_pSetHwFactorB)
        {
                return m_pSetHwFactorB (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::GetHwFactorB (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetHwFactorB)
        {
                return m_pGetHwFactorB (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::SetHwFactorBSingleAxis (int lAxis, double dFactorB)
{
        if (m_pSetHwFactorBSingleAxis)
        {
                return m_pSetHwFactorBSingleAxis (m_LSID, lAxis, dFactorB);
        }
        else
                return -1;
}

int CTango::GetHwFactorBSingleAxis (int lAxis, double *pdFactorB)
{
        if (m_pGetHwFactorBSingleAxis)
        {
                return m_pGetHwFactorBSingleAxis (m_LSID, lAxis, pdFactorB);
        }
        else
                return -1;
}

int CTango::SetLimit (int lAxis, double dMinRange, double dMaxRange)
{
        if (m_pSetLimit)
        {
                return m_pSetLimit (m_LSID, lAxis, dMinRange, dMaxRange);
        }
        else
                return -1;
}

int CTango::SetLimitControl (int lAxis, BOOL bActive)
{
        if (m_pSetLimitControl)
        {
                return m_pSetLimitControl (m_LSID, lAxis, bActive);
        }
        else
                return -1;
}

int CTango::GetPos (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetPos)
        {
                return m_pGetPos (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetStatus (char *pcStat, int lMaxLen)
{
        if (m_pGetStatus)
        {
                return m_pGetStatus (m_LSID, pcStat, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetEncoderMask (int *plFlags)
{
        if (m_pGetEncoderMask)
        {
                return m_pGetEncoderMask (m_LSID, plFlags);
        }
        else
                return -1;
}

int CTango::StopAxes ()
{
        if (m_pStopAxes)
        {
                return m_pStopAxes (m_LSID);
        }
        else
                return -1;
}

int CTango::StopAxesEx (int lFlags)
{
        if (m_pStopAxesEx)
        {
                return m_pStopAxesEx (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::SetAbortFlag ()
{
        if (m_pSetAbortFlag)
        {
                return m_pSetAbortFlag (m_LSID);
        }
        else
                return -1;
}

int CTango::MoveRelSingleAxis (int lAxis, double dValue, BOOL bWait)
{
        if (m_pMoveRelSingleAxis)
        {
                return m_pMoveRelSingleAxis (m_LSID, lAxis, dValue, bWait);
        }
        else
                return -1;
}

int CTango::MoveAbsSingleAxis (int lAxis, double dValue, BOOL bWait)
{
        if (m_pMoveAbsSingleAxis)
        {
                return m_pMoveAbsSingleAxis (m_LSID, lAxis, dValue, bWait);
        }
        else
                return -1;
}

int CTango::SetControlPars ()
{
        if (m_pSetControlPars)
        {
                return m_pSetControlPars (m_LSID);
        }
        else
                return -1;
}

int CTango::SetMotorCurrent (double dX, double dY, double dZ, double dA)
{
        if (m_pSetMotorCurrent)
        {
                return m_pSetMotorCurrent (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetVelSingleAxis (int lAxis, double dVel)
{
        if (m_pSetVelSingleAxis)
        {
                return m_pSetVelSingleAxis (m_LSID, lAxis, dVel);
        }
        else
                return -1;
}

int CTango::SetAccelSingleAxis (int lAxis, double dAccel)
{
        if (m_pSetAccelSingleAxis)
        {
                return m_pSetAccelSingleAxis (m_LSID, lAxis, dAccel);
        }
        else
                return -1;
}

int CTango::CalibrateEx (int lFlags)
{
        if (m_pCalibrateEx)
        {
                return m_pCalibrateEx (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::RMeasureEx (int lFlags)
{
        if (m_pRMeasureEx)
        {
                return m_pRMeasureEx (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::SetShowProt (BOOL bShowProt)
{
        if (m_pSetShowProt)
        {
                return m_pSetShowProt (m_LSID, bShowProt);
        }
        else
                return -1;
}

int CTango::GetAnalogInputs2 (int *plPT100, int *plMV, int *plV24)
{
        if (m_pGetAnalogInputs2)
        {
                return m_pGetAnalogInputs2 (m_LSID, plPT100, plMV, plV24);
        }
        else
                return -1;
}

int CTango::SendString (char *pcStr, char *pcRet, int lMaxLen, BOOL bReadLine, int lTimeOut)
{
        if (m_pSendString)
        {
                return m_pSendString (m_LSID, pcStr, pcRet, lMaxLen, bReadLine, lTimeOut);
        }
        else
                return -1;
}

int CTango::SetSpeedPoti (BOOL bSpeedPoti)
{
        if (m_pSetSpeedPoti)
        {
                return m_pSetSpeedPoti (m_LSID, bSpeedPoti);
        }
        else
                return -1;
}

int CTango::SetTVRMode (int lXT, int lYT, int lZT, int lAT)
{
        if (m_pSetTVRMode)
        {
                return m_pSetTVRMode (m_LSID, lXT, lYT, lZT, lAT);
        }
        else
                return -1;
}

int CTango::SetAutoStatus (int lValue)
{
        if (m_pSetAutoStatus)
        {
                return m_pSetAutoStatus (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::GetStatusAxis (char *pcStatusAxisStr, int lMaxLen)
{
        if (m_pGetStatusAxis)
        {
                return m_pGetStatusAxis (m_LSID, pcStatusAxisStr, lMaxLen);
        }
        else
                return -1;
}

int CTango::SetDigIO_Off (int lIndex)
{
        if (m_pSetDigIO_Off)
        {
                return m_pSetDigIO_Off (m_LSID, lIndex);
        }
        else
                return -1;
}

int CTango::SetDigIO_Polarity (int lIndex, BOOL bHigh)
{
        if (m_pSetDigIO_Polarity)
        {
                return m_pSetDigIO_Polarity (m_LSID, lIndex, bHigh);
        }
        else
                return -1;
}

int CTango::SetDigIO_EmergencyStop (int lIndex)
{
        if (m_pSetDigIO_EmergencyStop)
        {
                return m_pSetDigIO_EmergencyStop (m_LSID, lIndex);
        }
        else
                return -1;
}

int CTango::SetDigIO_Distance (int lIndex, BOOL bFkt, double dDist, int lAxis)
{
        if (m_pSetDigIO_Distance)
        {
                return m_pSetDigIO_Distance (m_LSID, lIndex, bFkt, dDist, lAxis);
        }
        else
                return -1;
}

int CTango::SetDimensions (int lXD, int lYD, int lZD, int lAD)
{
        if (m_pSetDimensions)
        {
                return m_pSetDimensions (m_LSID, lXD, lYD, lZD, lAD);
        }
        else
                return -1;
}

int CTango::MoveRelShort ()
{
        if (m_pMoveRelShort)
        {
                return m_pMoveRelShort (m_LSID);
        }
        else
                return -1;
}

int CTango::SetEncoderPeriod (double dX, double dY, double dZ, double dA)
{
        if (m_pSetEncoderPeriod)
        {
                return m_pSetEncoderPeriod (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetJoystickDir (int lXD, int lYD, int lZD, int lAD)
{
        if (m_pSetJoystickDir)
        {
                return m_pSetJoystickDir (m_LSID, lXD, lYD, lZD, lAD);
        }
        else
                return -1;
}

int CTango::SetEncoderMask (int lValue)
{
        if (m_pSetEncoderMask)
        {
                return m_pSetEncoderMask (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::SetGear (double dX, double dY, double dZ, double dA)
{
        if (m_pSetGear)
        {
                return m_pSetGear (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetHandWheelOn (BOOL bPositionCount, BOOL bEncoder)
{
        if (m_pSetHandWheelOn)
        {
                return m_pSetHandWheelOn (m_LSID, bPositionCount, bEncoder);
        }
        else
                return -1;
}

int CTango::SetHandWheelOff ()
{
        if (m_pSetHandWheelOff)
        {
                return m_pSetHandWheelOff (m_LSID);
        }
        else
                return -1;
}

int CTango::SetFactorTVR (double dX, double dY, double dZ, double dA)
{
        if (m_pSetFactorTVR)
        {
                return m_pSetFactorTVR (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetTargetWindow (double dX, double dY, double dZ, double dA)
{
        if (m_pSetTargetWindow)
        {
                return m_pSetTargetWindow (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetController (int lXC, int lYC, int lZC, int lAC)
{
        if (m_pSetController)
        {
                return m_pSetController (m_LSID, lXC, lYC, lZC, lAC);
        }
        else
                return -1;
}

int CTango::SetControllerCall (int lCtrCall)
{
        if (m_pSetControllerCall)
        {
                return m_pSetControllerCall (m_LSID, lCtrCall);
        }
        else
                return -1;
}

int CTango::SetControllerSteps (double dX, double dY, double dZ, double dA)
{
        if (m_pSetControllerSteps)
        {
                return m_pSetControllerSteps (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetControllerFactor (double dX, double dY, double dZ, double dA)
{
        if (m_pSetControllerFactor)
        {
                return m_pSetControllerFactor (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetControllerTWDelay (int lCtrTWDelay)
{
        if (m_pSetControllerTWDelay)
        {
                return m_pSetControllerTWDelay (m_LSID, lCtrTWDelay);
        }
        else
                return -1;
}

int CTango::SetEncoderRefSignal (int lXR, int lYR, int lZR, int lAR)
{
        if (m_pSetEncoderRefSignal)
        {
                return m_pSetEncoderRefSignal (m_LSID, lXR, lYR, lZR, lAR);
        }
        else
                return -1;
}

int CTango::SetEncoderPosition (BOOL bValue)
{
        if (m_pSetEncoderPosition)
        {
                return m_pSetEncoderPosition (m_LSID, bValue);
        }
        else
                return -1;
}

int CTango::GetVersionStr (char *pcVers, int lMaxLen)
{
        if (m_pGetVersionStr)
        {
                return m_pGetVersionStr (m_LSID, pcVers, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetError (int *plErrorCode)
{
        if (m_pGetError)
        {
                return m_pGetError (m_LSID, plErrorCode);
        }
        else
                return -1;
}

int CTango::GetPosSingleAxis (int lAxis, double *pdPos)
{
        if (m_pGetPosSingleAxis)
        {
                return m_pGetPosSingleAxis (m_LSID, lAxis, pdPos);
        }
        else
                return -1;
}

int CTango::SetDistance (double dX, double dY, double dZ, double dA)
{
        if (m_pSetDistance)
        {
                return m_pSetDistance (m_LSID, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::GetPosEx (double *pdX, double *pdY, double *pdZ, double *pdR, BOOL bEncoder)
{
        if (m_pGetPosEx)
        {
                return m_pGetPosEx (m_LSID, pdX, pdY, pdZ, pdR, bEncoder);
        }
        else
                return -1;
}

int CTango::SetShowCmdList (BOOL bShowCmdList)
{
        if (m_pSetShowCmdList)
        {
                return m_pSetShowCmdList (m_LSID, bShowCmdList);
        }
        else
                return -1;
}

int CTango::SetWriteLogText (BOOL bAWriteLogText)
{
        if (m_pSetWriteLogText)
        {
                return m_pSetWriteLogText (m_LSID, bAWriteLogText);
        }
        else
                return -1;
}

int CTango::SetControllerTimeout (int lACtrTimeout)
{
        if (m_pSetControllerTimeout)
        {
                return m_pSetControllerTimeout (m_LSID, lACtrTimeout);
        }
        else
                return -1;
}

int CTango::SetEncoderActive (int lFlags)
{
        if (m_pSetEncoderActive)
        {
                return m_pSetEncoderActive (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::GetSnapshotCount (int *plSnsCount)
{
        if (m_pGetSnapshotCount)
        {
                return m_pGetSnapshotCount (m_LSID, plSnsCount);
        }
        else
                return -1;
}

int CTango::SetSnapshotCount (int lSnsCount)
{
        if (m_pSetSnapshotCount)
        {
                return m_pSetSnapshotCount (m_LSID, lSnsCount);
        }
        else
                return -1;
}

int CTango::GetSnapshotPos (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetSnapshotPos)
        {
                return m_pGetSnapshotPos (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::SetCorrTblOff ()
{
        if (m_pSetCorrTblOff)
        {
                return m_pSetCorrTblOff (m_LSID);
        }
        else
                return -1;
}

int CTango::SetCorrTblOn (char *pcAFileName)
{
        if (m_pSetCorrTblOn)
        {
                return m_pSetCorrTblOn (m_LSID, pcAFileName);
        }
        else
                return -1;
}

int CTango::SetFactorMode (BOOL bAFactorMode, double dX, double dY, double dZ, double dA)
{
        if (m_pSetFactorMode)
        {
                return m_pSetFactorMode (m_LSID, bAFactorMode, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetSnapshot (BOOL bASnapshot)
{
        if (m_pSetSnapshot)
        {
                return m_pSetSnapshot (m_LSID, bASnapshot);
        }
        else
                return -1;
}

int CTango::SetSnapshotPar (BOOL bHigh, BOOL bAutoMode)
{
        if (m_pSetSnapshotPar)
        {
                return m_pSetSnapshotPar (m_LSID, bHigh, bAutoMode);
        }
        else
                return -1;
}

int CTango::SetTrigger (BOOL bATrigger)
{
        if (m_pSetTrigger)
        {
                return m_pSetTrigger (m_LSID, bATrigger);
        }
        else
                return -1;
}

int CTango::SetTriggerPar (int lAxis, int lMode, int lSignal, double dDistance)
{
        if (m_pSetTriggerPar)
        {
                return m_pSetTriggerPar (m_LSID, lAxis, lMode, lSignal, dDistance);
        }
        else
                return -1;
}

int CTango::SetLanguage (char *pcPLN)
{
        if (m_pSetLanguage)
        {
                return m_pSetLanguage (m_LSID, pcPLN);
        }
        else
                return -1;
}

int CTango::GetSwitches (int *plFlags)
{
        if (m_pGetSwitches)
        {
                return m_pGetSwitches (m_LSID, plFlags);
        }
        else
                return -1;
}

int CTango::GetSerialNr (char *pcSerialNr, int lMaxLen)
{
        if (m_pGetSerialNr)
        {
                return m_pGetSerialNr (m_LSID, pcSerialNr, lMaxLen);
        }
        else
                return -1;
}

int CTango::SetCalibOffset (double dX, double dY, double dZ, double dR)
{
        if (m_pSetCalibOffset)
        {
                return m_pSetCalibOffset (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::SetRMOffset (double dX, double dY, double dZ, double dR)
{
        if (m_pSetRMOffset)
        {
                return m_pSetRMOffset (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetSnapshotPosArray (int lIndex, double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetSnapshotPosArray)
        {
                return m_pGetSnapshotPosArray (m_LSID, lIndex, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::SetAxisDirection (int lXD, int lYD, int lZD, int lAD)
{
        if (m_pSetAxisDirection)
        {
                return m_pSetAxisDirection (m_LSID, lXD, lYD, lZD, lAD);
        }
        else
                return -1;
}

int CTango::SetCalibrateDir (int lXD, int lYD, int lZD, int lAD)
{
        if (m_pSetCalibrateDir)
        {
                return m_pSetCalibrateDir (m_LSID, lXD, lYD, lZD, lAD);
        }
        else
                return -1;
}

int CTango::LStepSave ()
{
        if (m_pLStepSave)
        {
                return m_pLStepSave (m_LSID);
        }
        else
                return -1;
}

int CTango::SetBPZ (int lAValue)
{
        if (m_pSetBPZ)
        {
                return m_pSetBPZ (m_LSID, lAValue);
        }
        else
                return -1;
}

int CTango::SetBPZTrackballFactor (double dAValue)
{
        if (m_pSetBPZTrackballFactor)
        {
                return m_pSetBPZTrackballFactor (m_LSID, dAValue);
        }
        else
                return -1;
}

int CTango::SetBPZTrackballBackLash (double dX, double dY, double dZ, double dR)
{
        if (m_pSetBPZTrackballBackLash)
        {
                return m_pSetBPZTrackballBackLash (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::SetBPZJoyspeed (int lAPar, double dAValue)
{
        if (m_pSetBPZJoyspeed)
        {
                return m_pSetBPZJoyspeed (m_LSID, lAPar, dAValue);
        }
        else
                return -1;
}

int CTango::SetJoystickWindow (int lAValue)
{
        if (m_pSetJoystickWindow)
        {
                return m_pSetJoystickWindow (m_LSID, lAValue);
        }
        else
                return -1;
}

int CTango::SetCurrentDelay (int lX, int lY, int lZ, int lR)
{
        if (m_pSetCurrentDelay)
        {
                return m_pSetCurrentDelay (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}

int CTango::WaitForAxisStop (int lAFlags, int lATimeoutValue, BOOL *pbATimeout)
{
        if (m_pWaitForAxisStop)
        {
                return m_pWaitForAxisStop (m_LSID, lAFlags, lATimeoutValue, pbATimeout);
        }
        else
                return -1;
}

int CTango::SetProcessMessagesProc (void* pProc)
{
        if (m_pSetProcessMessagesProc)
        {
                return m_pSetProcessMessagesProc (m_LSID, pProc);
        }
        else
                return -1;
}

int CTango::SendStringPosCmd (char *pcStr, char *pcRet, int lMaxLen, BOOL bReadLine, int lTimeOut)
{
        if (m_pSendStringPosCmd)
        {
                return m_pSendStringPosCmd (m_LSID, pcStr, pcRet, lMaxLen, bReadLine, lTimeOut);
        }
        else
                return -1;
}

int CTango::SetDigitalOutputs (int lValue)
{
        if (m_pSetDigitalOutputs)
        {
                return m_pSetDigitalOutputs (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::SetWriteLogTextFN (BOOL bAWriteLogText, char *pcALogFN)
{
        if (m_pSetWriteLogTextFN)
        {
                return m_pSetWriteLogTextFN (m_LSID, bAWriteLogText, pcALogFN);
        }
        else
                return -1;
}

int CTango::SetDigitalOutputsE (int lValue)
{
        if (m_pSetDigitalOutputsE)
        {
                return m_pSetDigitalOutputsE (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::GetDigitalInputsE (int *plValue)
{
        if (m_pGetDigitalInputsE)
        {
                return m_pGetDigitalInputsE (m_LSID, plValue);
        }
        else
                return -1;
}

int CTango::EnableCommandRetry (BOOL bAValue)
{
        if (m_pEnableCommandRetry)
        {
                return m_pEnableCommandRetry (m_LSID, bAValue);
        }
        else
                return -1;
}

int CTango::SetXYAxisComp (int lValue)
{
        if (m_pSetXYAxisComp)
        {
                return m_pSetXYAxisComp (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::GetVersionStrDet (char *pcVersDet, int lMaxLen)
{
        if (m_pGetVersionStrDet)
        {
                return m_pGetVersionStrDet (m_LSID, pcVersDet, lMaxLen);
        }
        else
                return -1;
}

int CTango::SetDllNumOfAxes (int lNumOfAxes)
{
        if (m_pSetDllNumOfAxes)
        {
                return m_pSetDllNumOfAxes (m_LSID, lNumOfAxes);
        }
        else
                return -1;
}

int CTango::SetCommandTimeout (int lAtoRead, int lAtoMove, int lAtoCalibrate)
{
        if (m_pSetCommandTimeout)
        {
                return m_pSetCommandTimeout (m_LSID, lAtoRead, lAtoMove, lAtoCalibrate);
        }
        else
                return -1;
}

int CTango::SetExtValue (int lAName, int lAValue)
{
        if (m_pSetExtValue)
        {
                return m_pSetExtValue (m_LSID, lAName, lAValue);
        }
        else
                return -1;
}

int CTango::FlushBuffer (int lAValue)
{
        if (m_pFlushBuffer)
        {
                return m_pFlushBuffer (m_LSID, lAValue);
        }
        else
                return -1;
}

int CTango::GetEEPRomValue (byte Offset, byte *pValue)
{
        if (m_pGetEEPRomValue)
        {
                return m_pGetEEPRomValue (m_LSID, Offset, pValue);
        }
        else
                return -1;
}

int CTango::SetEEPRomValue (byte Offset, byte Value)
{
        if (m_pSetEEPRomValue)
        {
                return m_pSetEEPRomValue (m_LSID, Offset, Value);
        }
        else
                return -1;
}

int CTango::GetXYAxisComp (int *plValue)
{
        if (m_pGetXYAxisComp)
        {
                return m_pGetXYAxisComp (m_LSID, plValue);
        }
        else
                return -1;
}

int CTango::GetDimensions (int *plXD, int *plYD, int *plZD, int *plAD)
{
        if (m_pGetDimensions)
        {
                return m_pGetDimensions (m_LSID, plXD, plYD, plZD, plAD);
        }
        else
                return -1;
}

int CTango::GetPitch (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetPitch)
        {
                return m_pGetPitch (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetGear (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetGear)
        {
                return m_pGetGear (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetVel (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetVel)
        {
                return m_pGetVel (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetAccel (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetAccel)
        {
                return m_pGetAccel (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::SetVelFac (double dX, double dY, double dZ, double dR)
{
        if (m_pSetVelFac)
        {
                return m_pSetVelFac (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetVelFac (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetVelFac)
        {
                return m_pGetVelFac (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetSpeedPoti (BOOL *pbSpePoti)
{
        if (m_pGetSpeedPoti)
        {
                return m_pGetSpeedPoti (m_LSID, pbSpePoti);
        }
        else
                return -1;
}

int CTango::GetMotorCurrent (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetMotorCurrent)
        {
                return m_pGetMotorCurrent (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetReduction (double *pdX, double *pdY, double *pdZ, double *pdA)
{
        if (m_pGetReduction)
        {
                return m_pGetReduction (m_LSID, pdX, pdY, pdZ, pdA);
        }
        else
                return -1;
}

int CTango::GetCurrentDelay (int *plX, int *plY, int *plZ, int *plR)
{
        if (m_pGetCurrentDelay)
        {
                return m_pGetCurrentDelay (m_LSID, plX, plY, plZ, plR);
        }
        else
                return -1;
}

int CTango::SetOutFuncLev (double dX, double dY, double dZ, double dR)
{
        if (m_pSetOutFuncLev)
        {
                return m_pSetOutFuncLev (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetOutFuncLev (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetOutFuncLev)
        {
                return m_pGetOutFuncLev (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetActiveAxes (int *plFlags)
{
        if (m_pGetActiveAxes)
        {
                return m_pGetActiveAxes (m_LSID, plFlags);
        }
        else
                return -1;
}

int CTango::GetAxisDirection (int *plXD, int *plYD, int *plZD, int *plAD)
{
        if (m_pGetAxisDirection)
        {
                return m_pGetAxisDirection (m_LSID, plXD, plYD, plZD, plAD);
        }
        else
                return -1;
}

int CTango::GetCalibOffset (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetCalibOffset)
        {
                return m_pGetCalibOffset (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetRMOffset (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetRMOffset)
        {
                return m_pGetRMOffset (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetCalibrateDir (int *plXD, int *plYD, int *plZD, int *plAD)
{
        if (m_pGetCalibrateDir)
        {
                return m_pGetCalibrateDir (m_LSID, plXD, plYD, plZD, plAD);
        }
        else
                return -1;
}

int CTango::SetCalibBackSpeed (int lSpeed)
{
        if (m_pSetCalibBackSpeed)
        {
                return m_pSetCalibBackSpeed (m_LSID, lSpeed);
        }
        else
                return -1;
}

int CTango::GetCalibBackSpeed (int *plSpeed)
{
        if (m_pGetCalibBackSpeed)
        {
                return m_pGetCalibBackSpeed (m_LSID, plSpeed);
        }
        else
                return -1;
}

int CTango::SetRefSpeed (int lSpeed)
{
        if (m_pSetRefSpeed)
        {
                return m_pSetRefSpeed (m_LSID, lSpeed);
        }
        else
                return -1;
}

int CTango::GetRefSpeed (int *plSpeed)
{
        if (m_pGetRefSpeed)
        {
                return m_pGetRefSpeed (m_LSID, plSpeed);
        }
        else
                return -1;
}

int CTango::SetPowerAmplifier (BOOL bAmplifier)
{
        if (m_pSetPowerAmplifier)
        {
                return m_pSetPowerAmplifier (m_LSID, bAmplifier);
        }
        else
                return -1;
}

int CTango::GetPowerAmplifier (BOOL *pbAmplifier)
{
        if (m_pGetPowerAmplifier)
        {
                return m_pGetPowerAmplifier (m_LSID, pbAmplifier);
        }
        else
                return -1;
}

int CTango::SetMotorTablePatch (BOOL bActive)
{
        if (m_pSetMotorTablePatch)
        {
                return m_pSetMotorTablePatch (m_LSID, bActive);
        }
        else
                return -1;
}

int CTango::GetMotorTablePatch (BOOL *pbActive)
{
        if (m_pGetMotorTablePatch)
        {
                return m_pGetMotorTablePatch (m_LSID, pbActive);
        }
        else
                return -1;
}

int CTango::SetJoystickFilter (BOOL bActive)
{
        if (m_pSetJoystickFilter)
        {
                return m_pSetJoystickFilter (m_LSID, bActive);
        }
        else
                return -1;
}

int CTango::GetJoystickFilter (BOOL *pbActive)
{
        if (m_pGetJoystickFilter)
        {
                return m_pGetJoystickFilter (m_LSID, pbActive);
        }
        else
                return -1;
}

int CTango::SetStopPolarity (BOOL bHighActiv)
{
        if (m_pSetStopPolarity)
        {
                return m_pSetStopPolarity (m_LSID, bHighActiv);
        }
        else
                return -1;
}

int CTango::GetStopPolarity (BOOL *pbHighActiv)
{
        if (m_pGetStopPolarity)
        {
                return m_pGetStopPolarity (m_LSID, pbHighActiv);
        }
        else
                return -1;
}

int CTango::SetVLevel (int lVRegion, double dDownLevel, double dUppLevel)
{
        if (m_pSetVLevel)
        {
                return m_pSetVLevel (m_LSID, lVRegion, dDownLevel, dUppLevel);
        }
        else
                return -1;
}

int CTango::GetVLevel (int lVRegion, double *pdDownLevel, double *pdUppLevel)
{
        if (m_pGetVLevel)
        {
                return m_pGetVLevel (m_LSID, lVRegion, pdDownLevel, pdUppLevel);
        }
        else
                return -1;
}

int CTango::SetStopAccel (double dXD, double dYD, double dZD, double dAD)
{
        if (m_pSetStopAccel)
        {
                return m_pSetStopAccel (m_LSID, dXD, dYD, dZD, dAD);
        }
        else
                return -1;
}

int CTango::GetStopAccel (double *pdXD, double *pdYD, double *pdZD, double *pdAD)
{
        if (m_pGetStopAccel)
        {
                return m_pGetStopAccel (m_LSID, pdXD, pdYD, pdZD, pdAD);
        }
        else
                return -1;
}

int CTango::GetVersionStrInfo (char *pcVersInfo, int lMaxLen)
{
        if (m_pGetVersionStrInfo)
        {
                return m_pGetVersionStrInfo (m_LSID, pcVersInfo, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetStatusLimit (char *pcLimit, int lMaxLen)
{
        if (m_pGetStatusLimit)
        {
                return m_pGetStatusLimit (m_LSID, pcLimit, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetSecurityErr (DWORD *pdwValue)
{
        if (m_pGetSecurityErr)
        {
                return m_pGetSecurityErr (m_LSID, pdwValue);
        }
        else
                return -1;
}

int CTango::GetSecurityStatus (DWORD *pdwValue)
{
        if (m_pGetSecurityStatus)
        {
                return m_pGetSecurityStatus (m_LSID, pdwValue);
        }
        else
                return -1;
}

int CTango::GetDelay (int *plDelay)
{
        if (m_pGetDelay)
        {
                return m_pGetDelay (m_LSID, plDelay);
        }
        else
                return -1;
}

int CTango::GetDistance (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetDistance)
        {
                return m_pGetDistance (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::ClearPos (int lFlags)
{
        if (m_pClearPos)
        {
                return m_pClearPos (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::SetDigJoySpeed (double dX, double dY, double dZ, double dR)
{
        if (m_pSetDigJoySpeed)
        {
                return m_pSetDigJoySpeed (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetDigJoySpeed (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetDigJoySpeed)
        {
                return m_pGetDigJoySpeed (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetJoystickDir (int *plXD, int *plYD, int *plZD, int *plRD)
{
        if (m_pGetJoystickDir)
        {
                return m_pGetJoystickDir (m_LSID, plXD, plYD, plZD, plRD);
        }
        else
                return -1;
}

int CTango::GetJoystick (BOOL *pbJoystickOn, BOOL *pbManual, BOOL *pbPositionCount, BOOL *pbEncoder)
{
        if (m_pGetJoystick)
        {
                return m_pGetJoystick (m_LSID, pbJoystickOn, pbManual, pbPositionCount, pbEncoder);
        }
        else
                return -1;
}

int CTango::GetJoystickWindow (int *plAValue)
{
        if (m_pGetJoystickWindow)
        {
                return m_pGetJoystickWindow (m_LSID, plAValue);
        }
        else
                return -1;
}

int CTango::GetHandWheel (BOOL *pbHandWheelOn, BOOL *pbPositionCount, BOOL *pbEncoder)
{
        if (m_pGetHandWheel)
        {
                return m_pGetHandWheel (m_LSID, pbHandWheelOn, pbPositionCount, pbEncoder);
        }
        else
                return -1;
}

int CTango::GetBPZ (int *plAValue)
{
        if (m_pGetBPZ)
        {
                return m_pGetBPZ (m_LSID, plAValue);
        }
        else
                return -1;
}

int CTango::GetBPZTrackballFactor (double *pdAValue)
{
        if (m_pGetBPZTrackballFactor)
        {
                return m_pGetBPZTrackballFactor (m_LSID, pdAValue);
        }
        else
                return -1;
}

int CTango::GetBPZTrackballBackLash (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetBPZTrackballBackLash)
        {
                return m_pGetBPZTrackballBackLash (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetBPZJoyspeed (int lAPar, double *pdAValue)
{
        if (m_pGetBPZJoyspeed)
        {
                return m_pGetBPZJoyspeed (m_LSID, lAPar, pdAValue);
        }
        else
                return -1;
}

int CTango::GetLimitControl (int lAxis, BOOL *pbActive)
{
        if (m_pGetLimitControl)
        {
                return m_pGetLimitControl (m_LSID, lAxis, pbActive);
        }
        else
                return -1;
}

int CTango::SetAutoLimitAfterCalibRM (int lFlags)
{
        if (m_pSetAutoLimitAfterCalibRM)
        {
                return m_pSetAutoLimitAfterCalibRM (m_LSID, lFlags);
        }
        else
                return -1;
}

int CTango::GetAutoLimitAfterCalibRM (int *plFlags)
{
        if (m_pGetAutoLimitAfterCalibRM)
        {
                return m_pGetAutoLimitAfterCalibRM (m_LSID, plFlags);
        }
        else
                return -1;
}

int CTango::GetSwitchPolarity (int *plXP, int *plYP, int *plZP, int *plRP)
{
        if (m_pGetSwitchPolarity)
        {
                return m_pGetSwitchPolarity (m_LSID, plXP, plYP, plZP, plRP);
        }
        else
                return -1;
}

int CTango::GetSwitchActive (int *plXA, int *plYA, int *plZA, int *plRA)
{
        if (m_pGetSwitchActive)
        {
                return m_pGetSwitchActive (m_LSID, plXA, plYA, plZA, plRA);
        }
        else
                return -1;
}

int CTango::GetTVRMode (int *plXT, int *plYT, int *plZT, int *plRT)
{
        if (m_pGetTVRMode)
        {
                return m_pGetTVRMode (m_LSID, plXT, plYT, plZT, plRT);
        }
        else
                return -1;
}

int CTango::GetFactorTVR (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetFactorTVR)
        {
                return m_pGetFactorTVR (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::SetTVROutMode (int lXT, int lYT, int lZT, int lRT)
{
        if (m_pSetTVROutMode)
        {
                return m_pSetTVROutMode (m_LSID, lXT, lYT, lZT, lRT);
        }
        else
                return -1;
}

int CTango::GetTVROutMode (int *plXT, int *plYT, int *plZT, int *plRT)
{
        if (m_pGetTVROutMode)
        {
                return m_pGetTVROutMode (m_LSID, plXT, plYT, plZT, plRT);
        }
        else
                return -1;
}

int CTango::SetTVROutResolution (int lX, int lY, int lZ, int lR)
{
        if (m_pSetTVROutResolution)
        {
                return m_pSetTVROutResolution (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}

int CTango::GetTVROutResolution (int *plX, int *plY, int *plZ, int *plR)
{
        if (m_pGetTVROutResolution)
        {
                return m_pGetTVROutResolution (m_LSID, plX, plY, plZ, plR);
        }
        else
                return -1;
}

int CTango::SetTVROutPitch (double dX, double dY, double dZ, double dR)
{
        if (m_pSetTVROutPitch)
        {
                return m_pSetTVROutPitch (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetTVROutPitch (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetTVROutPitch)
        {
                return m_pGetTVROutPitch (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::SetVelTVRO (double dX, double dY, double dZ, double dR)
{
        if (m_pSetVelTVRO)
        {
                return m_pSetVelTVRO (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetVelTVRO (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetVelTVRO)
        {
                return m_pGetVelTVRO (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::SetAccelTVRO (double dX, double dY, double dZ, double dR)
{
        if (m_pSetAccelTVRO)
        {
                return m_pSetAccelTVRO (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetAccelTVRO (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetAccelTVRO)
        {
                return m_pGetAccelTVRO (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::SetVelSingleAxisTVRO (int lAxis, double dVel)
{
        if (m_pSetVelSingleAxisTVRO)
        {
                return m_pSetVelSingleAxisTVRO (m_LSID, lAxis, dVel);
        }
        else
                return -1;
}

int CTango::SetAccelSingleAxisTVRO (int lAxis, double dAccel)
{
        if (m_pSetAccelSingleAxisTVRO)
        {
                return m_pSetAccelSingleAxisTVRO (m_LSID, lAxis, dAccel);
        }
        else
                return -1;
}

int CTango::SetPosTVRO (double dX, double dY, double dZ, double dR)
{
        if (m_pSetPosTVRO)
        {
                return m_pSetPosTVRO (m_LSID, dX, dY, dZ, dR);
        }
        else
                return -1;
}

int CTango::GetPosTVRO (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetPosTVRO)
        {
                return m_pGetPosTVRO (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::MoveAbsTVRO (double dX, double dY, double dZ, double dR, BOOL bWait)
{
        if (m_pMoveAbsTVRO)
        {
                return m_pMoveAbsTVRO (m_LSID, dX, dY, dZ, dR, bWait);
        }
        else
                return -1;
}

int CTango::MoveRelTVRO (double dX, double dY, double dZ, double dR, BOOL bWait)
{
        if (m_pMoveRelTVRO)
        {
                return m_pMoveRelTVRO (m_LSID, dX, dY, dZ, dR, bWait);
        }
        else
                return -1;
}

int CTango::MoveRelTVROSingleAxis (int lAxis, double dValue, BOOL bWait)
{
        if (m_pMoveRelTVROSingleAxis)
        {
                return m_pMoveRelTVROSingleAxis (m_LSID, lAxis, dValue, bWait);
        }
        else
                return -1;
}

int CTango::MoveAbsTVROSingleAxis (int lAxis, double dValue, BOOL bWait)
{
        if (m_pMoveAbsTVROSingleAxis)
        {
                return m_pMoveAbsTVROSingleAxis (m_LSID, lAxis, dValue, bWait);
        }
        else
                return -1;
}

int CTango::GetStatusTVRO (char *pcStat, int lMaxLen)
{
        if (m_pGetStatusTVRO)
        {
                return m_pGetStatusTVRO (m_LSID, pcStat, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetTargetWindow (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetTargetWindow)
        {
                return m_pGetTargetWindow (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetEncoderPeriod (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetEncoderPeriod)
        {
                return m_pGetEncoderPeriod (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetEncoderRefSignal (int *plXR, int *plYR, int *plZR, int *plRR)
{
        if (m_pGetEncoderRefSignal)
        {
                return m_pGetEncoderRefSignal (m_LSID, plXR, plYR, plZR, plRR);
        }
        else
                return -1;
}

int CTango::GetEncoderPosition (BOOL *pbValue)
{
        if (m_pGetEncoderPosition)
        {
                return m_pGetEncoderPosition (m_LSID, pbValue);
        }
        else
                return -1;
}

int CTango::GetEncoderActive (int *plFlags)
{
        if (m_pGetEncoderActive)
        {
                return m_pGetEncoderActive (m_LSID, plFlags);
        }
        else
                return -1;
}

int CTango::GetController (int *plXC, int *plYC, int *plZC, int *plRC)
{
        if (m_pGetController)
        {
                return m_pGetController (m_LSID, plXC, plYC, plZC, plRC);
        }
        else
                return -1;
}

int CTango::GetControllerCall (int *plCtrCall)
{
        if (m_pGetControllerCall)
        {
                return m_pGetControllerCall (m_LSID, plCtrCall);
        }
        else
                return -1;
}

int CTango::GetControllerSteps (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetControllerSteps)
        {
                return m_pGetControllerSteps (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetControllerFactor (double *pdX, double *pdY, double *pdZ, double *pdR)
{
        if (m_pGetControllerFactor)
        {
                return m_pGetControllerFactor (m_LSID, pdX, pdY, pdZ, pdR);
        }
        else
                return -1;
}

int CTango::GetControllerTWDelay (int *plCtrTWDelay)
{
        if (m_pGetControllerTWDelay)
        {
                return m_pGetControllerTWDelay (m_LSID, plCtrTWDelay);
        }
        else
                return -1;
}

int CTango::GetControllerTimeout (int *plACtrTimeout)
{
        if (m_pGetControllerTimeout)
        {
                return m_pGetControllerTimeout (m_LSID, plACtrTimeout);
        }
        else
                return -1;
}

int CTango::SetCtrFastMoveOn ()
{
        if (m_pSetCtrFastMoveOn)
        {
                return m_pSetCtrFastMoveOn (m_LSID);
        }
        else
                return -1;
}

int CTango::SetCtrFastMoveOff ()
{
        if (m_pSetCtrFastMoveOff)
        {
                return m_pSetCtrFastMoveOff (m_LSID);
        }
        else
                return -1;
}

int CTango::GetCtrFastMove (BOOL *pbActive)
{
        if (m_pGetCtrFastMove)
        {
                return m_pGetCtrFastMove (m_LSID, pbActive);
        }
        else
                return -1;
}

int CTango::ClearCtrFastMoveCounter ()
{
        if (m_pClearCtrFastMoveCounter)
        {
                return m_pClearCtrFastMoveCounter (m_LSID);
        }
        else
                return -1;
}

int CTango::GetCtrFastMoveCounter (int *plXC, int *plYC, int *plZC, int *plRC)
{
        if (m_pGetCtrFastMoveCounter)
        {
                return m_pGetCtrFastMoveCounter (m_LSID, plXC, plYC, plZC, plRC);
        }
        else
                return -1;
}

int CTango::ClearEncoder (int lAxis)
{
        if (m_pClearEncoder)
        {
                return m_pClearEncoder (m_LSID, lAxis);
        }
        else
                return -1;
}

int CTango::GetEncoder (double *pdXP, double *pdYP, double *pdZP, double *pdRP)
{
        if (m_pGetEncoder)
        {
                return m_pGetEncoder (m_LSID, pdXP, pdYP, pdZP, pdRP);
        }
        else
                return -1;
}

int CTango::GetTrigger (BOOL *pbATrigger)
{
        if (m_pGetTrigger)
        {
                return m_pGetTrigger (m_LSID, pbATrigger);
        }
        else
                return -1;
}

int CTango::GetTriggerPar (int *plAxis, int *plMode, int *plSignal, double *pdDistance)
{
        if (m_pGetTriggerPar)
        {
                return m_pGetTriggerPar (m_LSID, plAxis, plMode, plSignal, pdDistance);
        }
        else
                return -1;
}

int CTango::SetTrigCount (int lValue)
{
        if (m_pSetTrigCount)
        {
                return m_pSetTrigCount (m_LSID, lValue);
        }
        else
                return -1;
}

int CTango::GetTrigCount (int *plValue)
{
        if (m_pGetTrigCount)
        {
                return m_pGetTrigCount (m_LSID, plValue);
        }
        else
                return -1;
}

int CTango::SetTVRInPulse (int lAxis, BOOL bDirection)
{
        if (m_pSetTVRInPulse)
        {
                return m_pSetTVRInPulse (m_LSID, lAxis, bDirection);
        }
        else
                return -1;
}

int CTango::GetSnapshot (BOOL *pbASnapshot)
{
        if (m_pGetSnapshot)
        {
                return m_pGetSnapshot (m_LSID, pbASnapshot);
        }
        else
                return -1;
}

int CTango::SetSnapshotFilter (int lTime)
{
        if (m_pSetSnapshotFilter)
        {
                return m_pSetSnapshotFilter (m_LSID, lTime);
        }
        else
                return -1;
}

int CTango::GetSnapshotFilter (int *plTime)
{
        if (m_pGetSnapshotFilter)
        {
                return m_pGetSnapshotFilter (m_LSID, plTime);
        }
        else
                return -1;
}

int CTango::GetSnapshotPar (BOOL *pbHigh, BOOL *pbAutoMode)
{
        if (m_pGetSnapshotPar)
        {
                return m_pGetSnapshotPar (m_LSID, pbHigh, pbAutoMode);
        }
        else
                return -1;
}

int CTango::GetLimit (int lAxis, double *pdMinRange, double *pdMaxRange)
{
        if (m_pGetLimit)
        {
                return m_pGetLimit (m_LSID, lAxis, pdMinRange, pdMaxRange);
        }
        else
                return -1;
}

int CTango::JoyChangeAxis (BOOL bValue)
{
        if (m_pJoyChangeAxis)
        {
                return m_pJoyChangeAxis (m_LSID, bValue);
        }
        else
                return -1;
}

int CTango::GetJoyChangeAxis (BOOL *pbValue)
{
        if (m_pGetJoyChangeAxis)
        {
                return m_pGetJoyChangeAxis (m_LSID, pbValue);
        }
        else
                return -1;
}

int CTango::GetSyncZA (BOOL *pbValue)
{
        if (m_pGetSyncZA)
        {
                return m_pGetSyncZA (m_LSID, pbValue);
        }
        else
                return -1;
}


int CTango::SetSyncZA (BOOL bValue)
{
        if (m_pSetSyncZA)
        {
                return m_pSetSyncZA (m_LSID, bValue);
        }
        else
                return -1;
}

int CTango::GetKey (BOOL *pbKey1, BOOL *pbKey2, BOOL *pbKey3, BOOL *pbKey4)
{
        if (m_pGetKey)
        {
                return m_pGetKey (m_LSID, pbKey1, pbKey2, pbKey3, pbKey4);
        }
        else
                return -1;
}

int CTango::GetKeyLatch (BOOL *pbKey1, BOOL *pbKey2, BOOL *pbKey3, BOOL *pbKey4)
{
        if (m_pGetKeyLatch)
        {
                return m_pGetKeyLatch (m_LSID, pbKey1, pbKey2, pbKey3, pbKey4);
        }
        else
                return -1;
}

int CTango::ClearKeyLatch (int lKey)
{
        if (m_pClearKeyLatch)
        {
                return m_pClearKeyLatch (m_LSID, lKey);
        }
        else
                return -1;
}

int CTango::SetZwTravel (int lIndex, double dDistance)
{
        if (m_pSetZwTravel)
        {
                return m_pSetZwTravel (m_LSID, lIndex, dDistance);
        }
        else
                return -1;
}

int CTango::GetZwTravel (int lIndex, double *pdDistance)
{
        if (m_pGetZwTravel)
        {
                return m_pGetZwTravel (m_LSID, lIndex, pdDistance);
        }
        else
                return -1;
}

int CTango::SetSwitchType (int lXP, int lYP, int lZP, int lAP)
{
        if (m_pSetSwitchType)
        {
                return m_pSetSwitchType (m_LSID, lXP, lYP, lZP, lAP);
        }
        else
                return -1;
}

int CTango::GetSwitchType (int *plXP, int *plYP, int *plZP, int *plRP)
{
        if (m_pGetSwitchType)
        {
                return m_pGetSwitchType (m_LSID, plXP, plYP, plZP, plRP);
        }
        else
                return -1;
}

int CTango::SetMotorSteps (int lX, int lY, int lZ, int lR)
{
        if (m_pSetMotorSteps)
        {
                return m_pSetMotorSteps (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}

int CTango::GetMotorSteps (int *lX, int *lY, int *lZ, int *lR)
{
        if (m_pGetMotorSteps)
        {
                return m_pGetMotorSteps (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}

int CTango::SetAccelFunc (int lX, int lY, int lZ, int lR)
{
        if (m_pSetAccelFunc)
        {
                return m_pSetAccelFunc (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}

int CTango::GetAccelFunc (int *lX, int *lY, int *lZ, int *lR)
{
        if (m_pGetAccelFunc)
        {
                return m_pGetAccelFunc (m_LSID, lX, lY, lZ, lR);
        }
        else
                return -1;
}
int CTango::ClearSnapshotPosArray (void)
{
        if (m_pClearSnapshotPosArray)
        {
                return m_pClearSnapshotPosArray (m_LSID);
        }
        else
                return -1;
}

int CTango::SetSnapshotPosArray (int lIndex, double dX, double dY, double dZ, double dA)
{
        if (m_pSetSnapshotPosArray)
        {
                return m_pSetSnapshotPosArray (m_LSID, lIndex, dX, dY, dZ, dA);
        }
        else
                return -1;
}

int CTango::SetSnapshotIndex (int lIndex)
{
        if (m_pSetSnapshotIndex)
        {
                return m_pSetSnapshotIndex (m_LSID, lIndex);
        }
        else
                return -1;
}

int CTango::GetSnapshotIndex ( int *plIndex)
{
        if (m_pGetSnapshotIndex)
        {
                return m_pGetSnapshotIndex (m_LSID, plIndex);
        }
        else
                return -1;
}

int CTango::SetSnapshotMode (int lMode)
{
        if (m_pSetSnapshotMode)
        {
                return m_pSetSnapshotMode (m_LSID, lMode);
        }
        else
                return -1;
}

int CTango::GetSnapshotMode (int *plMode)
{
        if (m_pGetSnapshotMode)
        {
                return m_pGetSnapshotMode (m_LSID, plMode);
        }
        else
                return -1;
}

int CTango::Eject (int maga, int keep)
{
        if (m_pEject)
        {
                return m_pEject (m_LSID, maga, keep);
        }
        else
                return -1;
}

int CTango::Insert (void)
{
        if (m_pInsert)
        {
                return m_pInsert (m_LSID);
        }
        else
                return -1;
}

int CTango::SlideSeated (int maga, int slot, int *status)
{
        if (m_pSlideSeated)
        {
                return m_pSlideSeated (m_LSID, maga, slot, status);
        }
        else
                return -1;
}

int CTango::MagazinSeated (int maga, int *status)
{
        if (m_pMagazinSeated)
        {
                return m_pMagazinSeated (m_LSID, maga, status);
        }
        else
                return -1;
}

int CTango::GetGripper (int *c1, int *s1, int *c2, int *s2)
{
        if (m_pGetGripper)
        {
                return m_pGetGripper (m_LSID, c1, s1, c2, s2);
        }
        else
                return -1;
}

int CTango::SetGripper (int c1, int s1, int c2, int s2)
{
        if (m_pSetGripper)
        {
                return m_pSetGripper (m_LSID, c1, s1, c2, s2);
        }
        else
                return -1;
}

int CTango::GetSlide (int maga, int slot, int mode)
{
        if (m_pGetSlide)
        {
                return m_pGetSlide (m_LSID, maga, slot, mode);
        }
        else
                return -1;
}

int CTango::PutSlide (int maga, int slot)
{
        if (m_pPutSlide)
        {
                return m_pPutSlide (m_LSID, maga, slot);
        }
        else
                return -1;
}

int CTango::SetPrioHandlerPos (int php)
{
        if (m_pSetPrioHandlerPos)
        {
                return m_pSetPrioHandlerPos (m_LSID, php);
        }
        else
                return -1;
}

int CTango::GetPrioHandlerPos (int *php)
{
        if (m_pGetPrioHandlerPos)
        {
                return m_pGetPrioHandlerPos (m_LSID, php);
        }
        else
                return -1;
}



int CTango::GetTangoVersion (char *pcVers, int lMaxLen)
{
        if (m_pGetTangoVersion)
        {
                return m_pGetTangoVersion (m_LSID, pcVers, lMaxLen);
        }
        else
                return -1;
}

int CTango::GetRFID (int slot, int bank, int *pRFcode)
{
        if (m_pGetRFID)
        {
                return m_pGetRFID (m_LSID, slot, bank, pRFcode);
        }
        else
                return -1;
}

int CTango::SetRFID (int slot, int bank, int RFcode)
{
        if (m_pSetRFID)
        {
                return m_pSetRFID (m_LSID, slot, bank, RFcode);
        }
        else
                return -1;
}

int CTango::GetTraySN (int slot, int *pTraySN)
{
        if (m_pGetTraySN)
        {
                return m_pGetTraySN (m_LSID, slot, pTraySN);
        }
        else
                return -1;
}

int CTango::GetTrayType (int slot, int *pTrayType)
{
        if (m_pGetTrayType)
        {
                return m_pGetTrayType (m_LSID, slot, pTrayType);
        }
        else
                return -1;
}

int CTango::SetTrayType (int slot, int lTrayType)
{
        if (m_pSetTrayType)
        {
                return m_pSetTrayType (m_LSID, slot, lTrayType);
        }
        else
                return -1;
}

int CTango::GetLoaderType (int *pLoaderType)
{
        if (m_pGetLoaderType)
        {
                return m_pGetLoaderType (m_LSID, pLoaderType);
        }
        else
                return -1;
}

int CTango::GetNumberOfRows (int *pNumberOfRows)
{
        if (m_pGetNumberOfRows)
        {
                return m_pGetNumberOfRows (m_LSID, pNumberOfRows);
        }
        else
                return -1;
}

int CTango::GetNumberOfColumns (int *pNumberOfColumns)
{
        if (m_pGetNumberOfColumns)
        {
                return m_pGetNumberOfColumns (m_LSID, pNumberOfColumns);
        }
        else
                return -1;
}

int CTango::GetNumberOfMagazines (int *pNumberOfMagazines)
{
        if (m_pGetNumberOfMagazines)
        {
                return m_pGetNumberOfMagazines (m_LSID, pNumberOfMagazines);
        }
        else
                return -1;
}

int CTango::Xpos3MoveAbsSingleAxis(int lAxis, double dValue, BOOL bWait)
{
	if (m_pXpos3MoveAbsSingleAxis)
	{
		return m_pXpos3MoveAbsSingleAxis(m_LSID, lAxis, dValue, bWait);
	}
	else
		return -1;
}

int CTango::Xpos3MoveRelSingleAxis(int lAxis, double dValue, BOOL bWait)
{
	if (m_pXpos3MoveRelSingleAxis)
	{
		return m_pXpos3MoveRelSingleAxis(m_LSID, lAxis, dValue, bWait);
	}
	else
		return -1;
}


int CTango::Xpos3SetPosSingleAxis(int lAxis, double dValue)
{
	if (m_pXpos3SetPosSingleAxis)
	{
		return m_pXpos3SetPosSingleAxis(m_LSID, lAxis, dValue);
	}
	else
		return -1;
}

int CTango::Xpos3GetPosSingleAxis(int lAxis, double *pdValue)
{
	if (m_pXpos3GetPosSingleAxis)
	{
		return m_pXpos3GetPosSingleAxis(m_LSID, lAxis, pdValue);
	}
	else
		return -1;
}

int CTango::SetLabelLED(int lOn)
{
	if (m_pSetLabelLED)
	{
		return m_pSetLabelLED(m_LSID, lOn);
	}
	else
		return -1;
}

int CTango::GetLabelLED(int *plOn)
{
	if (m_pGetLabelLED)
	{
		return m_pGetLabelLED(m_LSID, plOn);
	}
	else
		return -1;
}

int CTango::SetCabinLED(int lOn)
{
	if (m_pSetCabinLED)
	{
		return m_pSetCabinLED(m_LSID, lOn);
	}
	else
		return -1;
}

int CTango::GetCabinLED(int *plOn)
{
	if (m_pGetCabinLED)
	{
		return m_pGetCabinLED(m_LSID, plOn);
	}
	else
		return -1;
}

int CTango::SetTriggerAxis(int lAxis)
{
	if (m_pSetTriggerAxis)
	{
		return m_pSetTriggerAxis(m_LSID, lAxis);
	}
	else
		return -1;
}

int CTango::GetTriggerAxis(int *plAxis)
{
	if (m_pGetTriggerAxis)
	{
		return m_pGetTriggerAxis(m_LSID, plAxis);
	}
	else
		return -1;
}

int CTango::SetTriggerMode(int lMode)
{
	if (m_pSetTriggerMode)
	{
		return m_pSetTriggerMode(m_LSID, lMode);
	}
	else
		return -1;
}

int CTango::GetTriggerMode(int *plMode)
{
	if (m_pGetTriggerMode)
	{
		return m_pGetTriggerMode(m_LSID, plMode);
	}
	else
		return -1;
}

int CTango::SetTriggerSignalLength(int lSignal)
{
	if (m_pSetTriggerSignalLength)
	{
		return m_pSetTriggerSignalLength(m_LSID, lSignal);
	}
	else
		return -1;
}

int CTango::GetTriggerSignalLength(int *plSignal)
{
	if (m_pGetTriggerSignalLength)
	{
		return m_pGetTriggerSignalLength(m_LSID, plSignal);
	}
	else
		return -1;
}

int CTango::SetTriggerEncoder(int lEncoder)
{
	if (m_pSetTriggerEncoder)
	{
		return m_pSetTriggerEncoder(m_LSID, lEncoder);
	}
	else
		return -1;
}

int CTango::GetTriggerEncoder(int *plEncoder)
{
	if (m_pGetTriggerEncoder)
	{
		return m_pGetTriggerEncoder(m_LSID, plEncoder);
	}
	else
		return -1;
}

int CTango::SetTriggerCompensation(int lCompensation)
{
	if (m_pSetTriggerCompensation)
	{
		return m_pSetTriggerCompensation(m_LSID, lCompensation);
	}
	else
		return -1;
}

int CTango::GetTriggerCompensation(int *plCompensation)
{
	if (m_pGetTriggerCompensation)
	{
		return m_pGetTriggerCompensation(m_LSID, plCompensation);
	}
	else
		return -1;
}


int CTango::SetTriggerOutput(int lOutput)
{
	if (m_pSetTriggerOutput)
	{
		return m_pSetTriggerOutput(m_LSID, lOutput);
	}
	else
		return -1;
}

int CTango::GetTriggerOutput(int *plOutput)
{
	if (m_pGetTriggerOutput)
	{
		return m_pGetTriggerOutput(m_LSID, plOutput);
	}
	else
		return -1;
}

int CTango::SetTriggerLevel(int lLevel)
{
	if (m_pSetTriggerLevel)
	{
		return m_pSetTriggerLevel(m_LSID, lLevel);
	}
	else
		return -1;
}

int CTango::GetTriggerLevel(int *plLevel)
{
	if (m_pGetTriggerLevel)
	{
		return m_pGetTriggerOutput(m_LSID, plLevel);
	}
	else
		return -1;
}

int CTango::SetTriggerPositionListIndex(int lIndex)
{
	if (m_pSetTriggerPositionListIndex)
	{
		return m_pSetTriggerPositionListIndex(m_LSID, lIndex);
	}
	else
		return -1;
}

int CTango::GetTriggerPositionListIndex(int *plIndex)
{
	if (m_pGetTriggerPositionListIndex)
	{
		return m_pGetTriggerPositionListIndex(m_LSID, plIndex);
	}
	else
		return -1;
}


int CTango::SetTriggerPositionListEntries(int lNumberOfEntries)
{
	if (m_pSetTriggerPositionListEntries)
	{
		return m_pSetTriggerPositionListEntries(m_LSID, lNumberOfEntries);
	}
	else
		return -1;
}

int CTango::GetTriggerPositionListEntries(int *plNumberOfEntries)
{
	if (m_pGetTriggerPositionListEntries)
	{
		return m_pGetTriggerPositionListEntries(m_LSID, plNumberOfEntries);
	}
	else
		return -1;
}


int CTango::SetTriggerPositionList(int lIndex, double dPosition)
{
	if (m_pSetTriggerPositionList)
	{
		return m_pSetTriggerPositionList(m_LSID, lIndex, dPosition);
	}
	else
		return -1;
}

int CTango::GetTriggerPositionList(int lIndex, double *pdPos)
{
	if (m_pGetTriggerPositionList)
	{
		return m_pGetTriggerPositionList(m_LSID, lIndex, pdPos);
	}
	else
		return -1;
}

int CTango::SetTriggerDistance(double dDistance)
{
	if (m_pSetTriggerDistance)
	{
		return m_pSetTriggerDistance(m_LSID, dDistance);
	}
	else
		return -1;
}

int CTango::GetTriggerDistance(double *pdDistance)
{
	if (m_pGetTriggerDistance)
	{
		return m_pGetTriggerDistance(m_LSID, pdDistance);
	}
	else
		return -1;
}

int CTango::SetTriggerFrequency(double dFrequency)
{
	if (m_pSetTriggerFrequency)
	{
		return m_pSetTriggerFrequency(m_LSID, dFrequency);
	}
	else
		return -1;
}

int CTango::GetTriggerFrequency(double *pdFrequency)
{
	if (m_pGetTriggerFrequency)
	{
		return m_pGetTriggerFrequency(m_LSID, pdFrequency);
	}
	else
		return -1;
}

int CTango::Set2ndTriggerDelay(double dDelay)
{
	if (m_pSet2ndTriggerDelay)
	{
		return m_pSet2ndTriggerDelay(m_LSID, dDelay);
	}
	else
		return -1;
}

int CTango::Get2ndTriggerDelay(double *pdDelay)
{
	if (m_pGet2ndTriggerDelay)
	{
		return m_pGet2ndTriggerDelay(m_LSID, pdDelay);
	}
	else
		return -1;
}

int CTango::Set2ndTriggerWidth(double dWidth)
{
	if (m_pSet2ndTriggerWidth)
	{
		return m_pSet2ndTriggerDelay(m_LSID, dWidth);
	}
	else
		return -1;
}

int CTango::Get2ndTriggerWidth(double *pdWidth)
{
	if (m_pGet2ndTriggerWidth)
	{
		return m_pGet2ndTriggerWidth(m_LSID, pdWidth);
	}
	else
		return -1;
}


int CTango::Set2ndTriggerFrequency(double dFrequency)
{
	if (m_pSet2ndTriggerFrequency)
	{
		return m_pSet2ndTriggerFrequency(m_LSID, dFrequency);
	}
	else
		return -1;
}

int CTango::Get2ndTriggerFrequency(double *pdFrequency)
{
	if (m_pGet2ndTriggerFrequency)
	{
		return m_pGet2ndTriggerFrequency(m_LSID, pdFrequency);
	}
	else
		return -1;
}


int CTango::SetTriggerRange(int lAxis, double dStartPos, double dEndPos, int lNumberOfTriggerPulses)
{
	if (m_pSetTriggerRange)
	{
		return m_pSetTriggerRange(m_LSID, lAxis, dStartPos, dEndPos, lNumberOfTriggerPulses);
	}
	else
		return -1;
}

int CTango::GetTriggerRange(int *plAxis, double *pdStartPos, double *pdEndPos, int *plNumberOfTriggerPulses)
{
	if (m_pGetTriggerRange)
	{
		return m_pGetTriggerRange(m_LSID, plAxis, pdStartPos, pdEndPos, plNumberOfTriggerPulses);
	}
	else
		return -1;
}



