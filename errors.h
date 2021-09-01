#pragma once

/**
 * @file    errors.h
 * @author	Rob Wicker  (rwicker@prior.com)
 * @date    19/7/2018
 * @brief   This file contains a public defines for Prior Scientific SDK
 * @copyright   Copyright (c) 2018- Prior Scientific Instruments Ltd. All rights reserved
 */

/* *************************************************************************************************************************** */

/**
 * @brief SDK ERROR CODES returned directly by the SDk 
 */
#define PRIOR_OK						 0
#define PRIOR_UNRECOGNISED_COMMAND		-10001
#define PRIOR_FAILEDTOOPENPORT			-10002
#define PRIOR_FAILEDTOFINDCONTROLLER	-10003
#define PRIOR_NOTCONNECTED				-10004
#define PRIOR_ALREADYCONNECTED			-10005
#define PRIOR_INVALID_PARAMETERS		-10007
#define PRIOR_UNRECOGNISED_DEVICE		-10008
#define PRIOR_APPDATAPATHERROR			-10009
#define PRIOR_LOADERERROR				-10010
#define PRIOR_CONTROLLERERROR			-10011
#define PRIOR_NOTIMPLEMENTEDYET			-10012
#define PRIOR_COMMS_ERROR				-10013
#define PRIOR_UNEXPECTED_ERROR			-10100
#define PRIOR_SDK_NOT_INITIALISED		-10200
#define PRIOR_SDK_INVALID_SESSION		-10300
#define PRIOR_SDK_NOMORE_SESSIONS		-10301


/* *************************************************************************************************************************** */

/**
 * @brief  CONTROLLER ERROR codes returned by the stage controller being used. 
 */
#define	PRIOR_NO_STAGE				1
#define	PRIOR_NOT_IDLE				2
#define	PRIOR_NO_DRIVE				3
#define	PRIOR_STRING_PARSE			4
#define	PRIOR_COMMAND_NOT_FOUND		5
#define	PRIOR_INVALID_SHUTTER		6
#define	PRIOR_NO_FOCUS	      		7
#define	PRIOR_VALUE_OUT_OF_RANGE	8
#define	PRIOR_INVALID_WHEEL			9
#define	PRIOR_ARG1_OUT_OF_RANGE		10
#define	PRIOR_ARG2_OUT_OF_RANGE		11
#define	PRIOR_ARG3_OUT_OF_RANGE		12
#define	PRIOR_ARG4_OUT_OF_RANGE		13
#define	PRIOR_ARG5_OUT_OF_RANGE		14
#define	PRIOR_ARG6_OUT_OF_RANGE		15
#define	PRIOR_INCORRECT_STATE		16
#define	PRIOR_NO_FILTER_WHEEL		17
#define	PRIOR_QUEUE_FULL			18
#define	PRIOR_COMP_MODE_SET			19
#define	PRIOR_SHUTTER_NOT_FITTED   	20
#define	PRIOR_INVALID_CHECKSUM     	21
#define	PRIOR_NOT_ROTARY			22
#define	PRIOR_NO_FOURTH_AXIS		40
#define	PRIOR_AUTOFOCUS_IN_PROG 	41
#define	PRIOR_NO_VIDEO          	42
#define	PRIOR_NO_ENCODER          	43
#define	PRIOR_SIS_NOT_DONE			44
#define	PRIOR_NO_VACUUM_DETECTOR	45
#define	PRIOR_NO_SHUTTLE			46
#define	PRIOR_VACUUM_QUEUED			47
#define	PRIOR_SIZ_NOT_DONE			48
#define	PRIOR_NOT_SLIDE_LOADER		49
#define	PRIOR_ALREADY_PRELOADED		50
#define	PRIOR_STAGE_NOT_MAPPED     	51
#define	PRIOR_TRIGGER_NOT_FITTED    52
#define	PRIOR_INTERPOLATOR_NOT_FITTED  53
#define PRIOR_THETA_NOT_FITTED		54
#define PRIOR_PIEZO_NOT_FITTED		55
#define	PRIOR_WRITE_FAIL			80
#define	PRIOR_ERASE_FAIL			81
#define	PRIOR_NO_DEVICE				128
#define	PRIOR_NO_PMD_AXIS			129



/**
 * @brief  ODS loader axes defines 
 */

#define ODS_AXISX						1
#define ODS_AXISY						2
#define ODS_AXISZ						3
#define ODS_AXISG						4

/**
 * @brief  ODS loader states  
 */
#define ODS_STATE_STATEMASK					0x000F00000
#define	ODS_STATE_SUBSTATEMASK				0x03F000000
#define	ODS_STATE_UNKNOWN					0x000000000
#define	ODS_STATE_SETUP						0x000100000
#define	ODS_STATE_INITIALISE				0x000200000
#define	ODS_STATE_STOP						0x000300000
#define	ODS_STATE_IDLE						0x000400000
#define ODS_STATE_TXF_TOSTAGE				0x000500000
#define	ODS_STATE_TXF_FROMSTAGE				0x000600000
#define	ODS_STATE_SCANHOTEL					0x000800000


/**
 * @brief  ODS status flags masks
 */
#define ODS_LOADER_ERROR					0x0001
#define	ODS_LOADER_NOTCONNECTED				0x0002
#define ODS_LOADER_NOTINITIALISED			0x0004
#define ODS_LOADER_NOTSETUP					0x0008

#define ODS_LOADER_NOTIDLE					0x0010
#define ODS_LOADER_INVALIDPLATE				0x0020
#define ODS_LOADER_INVALIDHOTEL				0x0040
#define ODS_LOADER_PLATEONARM				0x0080

#define ODS_LOADER_PLATEONSTAGE				0x0100
#define	ODS_LOADER_HOTELNOTSCANNED			0x0800

#define	ODS_LOADER_COMMSERROR				0x1000
#define	ODS_LOADER_PLATESENSORERROR			0x2000
#define	ODS_LOADER_GRIPPERHOMEERROR			0x4000
#define	ODS_LOADER_AXISSTALLED				0x8000


/**
 * @brief ODS getlastError property return values
 */
#define ODS_ERR_OK							 0
#define ODS_ERR_NOTINITIALISED				-1
#define ODS_ERR_NOTSETUP					-2
#define ODS_ERR_GRIPPER_HOMING_FAILED		-3
#define ODS_ERR_INVALIDHOTEL				-4
#define ODS_ERR_INVALIDPLATE				-5
#define ODS_ERR_PLATEINGRIPPER				-7
#define ODS_ERR_PLATEONSTAGE				-8
#define ODS_ERR_INVALIDSTATECHANGE			-9
#define ODS_ERR_HOTELREMOVED				-10
#define ODS_ERR_WRONGPLATESENSORSTATE		-11
#define ODS_ERR_COMMS_ERROR					-13
#define ODS_ERR_AXIS_STALLED				-14




/**
 * @brief  SL160 loader axes defines 
 */

#define SL160_AXISX						1
#define SL160_AXISY						2
#define SL160_AXISZ						3

/* effectively the same axes as above but with TLA's
 * HSM = Hotel Shuttle Mechanism
 * HLM = Hotel Lifting Mechanism
 * STM = Stage Transfer Mechanism
 */
#define SL160_HSM						1
#define SL160_HLM						2
#define SL160_STM						3

/**
 * @brief  SL160 loader states  
 */
#define SL160_STATE_STATEMASK				0x000F00000
#define	SL160_STATE_SUBSTATEMASK			0x03F000000
#define	SL160_STATE_UNKNOWN					0x000000000
#define	SL160_STATE_SETUP					0x000100000
#define	SL160_STATE_INITIALISE				0x000200000
#define	SL160_STATE_STOP					0x000300000
#define	SL160_STATE_IDLE					0x000400000
#define SL160_STATE_TXF_TOSTAGE				0x000500000
#define	SL160_STATE_TXF_FROMSTAGE			0x000600000
#define	SL160_STATE_SCANHOTEL				0x000800000
#define	SL160_STATE_LOAD_HOTELS				0x000900000
#define	SL160_STATE_UNLOAD_HOTELS			0x000A00000


/**
 * @brief  SL160 status flags masks
 */
#define SL160_LOADER_ERROR					0x0001
#define	SL160_LOADER_NOTCONNECTED			0x0002
#define SL160_LOADER_NOTINITIALISED			0x0004
#define SL160_LOADER_NOTSETUP				0x0008

#define SL160_LOADER_NOTIDLE				0x0010
#define SL160_LOADER_INVALIDTRAY			0x0020
#define SL160_LOADER_INVALIDHOTEL			0x0040
#define SL160_LOADER_TRAYONARM				0x0080

#define SL160_LOADER_TRAYONSTAGE			0x0100
#define SL160_LOADER_HOTELEJECTED			0x0200
#define	SL160_LOADER_HOTELNOTSCANNED		0x0800

#define	SL160_LOADER_COMMSERROR				0x1000
#define	SL160_LOADER_TRAYSENSORERROR		0x2000
#define	SL160_LOADER_AXISSTALLED			0x8000


/**
 * @brief SL160 getlastError property return values
 */
#define SL160_ERR_OK						0
#define SL160_ERR_NOTINITIALISED			-1
#define SL160_ERR_NOTSETUP					-2
#define SL160_ERR_GRIPPER_HOMING_FAILED		-3
#define SL160_ERR_INVALIDHOTEL				-4
#define SL160_ERR_INVALIDTRAY				-5
#define SL160_ERR_TRAYINGRIPPER				-7
#define SL160_ERR_TRAYONSTAGE				-8
#define SL160_ERR_INVALIDSTATECHANGE		-9
#define SL160_ERR_HOTELREMOVED				-10
#define SL160_ERR_WRONGTRAYSENSORSTATE		-11
#define SL160_ERR_COMMS_ERROR				-13
#define SL160_ERR_AXIS_STALLED				-14



/**
 * @brief  WASLV2 loader axes defines 
 */

#define WASLV2_AXISX						1
#define WASLV2_AXISY						2
#define WASLV2_AXISZ						3

 
/* effectively the same axes as above but with TLA's
 * HSM = Hotel Shuttle Mechanism
 * HLM = Hotel Lifting Mechanism
 * STM = Stage Transfer Mechanism
 */
#define WASLV2_HSM						1
#define WASLV2_HLM						2
#define WASLV2_STM						3

/**
 * @brief  WASL2 loader states  
 */
#define WASLV2_STATE_STATEMASK				0x000F00000
#define	WASLV2_STATE_SUBSTATEMASK			0x03F000000
#define	WASLV2_STATE_UNKNOWN				0x000000000
#define	WASLV2_STATE_SETUP					0x000100000
#define	WASLV2_STATE_INITIALISE				0x000200000
#define	WASLV2_STATE_STOP					0x000300000
#define	WASLV2_STATE_IDLE					0x000400000
#define WASLV2_STATE_TXF_TOSTAGE			0x000500000
#define	WASLV2_STATE_TXF_FROMSTAGE			0x000600000
#define	WASLV2_STATE_SCANHOTEL				0x000800000
#define	WASLV2_STATE_LOAD_HOTELS			0x000900000
#define	WASLV2_STATE_UNLOAD_HOTELS			0x000A00000


/**
 * @brief  WASL2 status flags masks
 */
#define WASLV2_LOADER_ERROR					0x0001
#define	WASLV2_LOADER_NOTCONNECTED			0x0002
#define WASLV2_LOADER_NOTINITIALISED		0x0004
#define WASLV2_LOADER_NOTSETUP				0x0008

#define WASLV2_LOADER_NOTIDLE				0x0010
#define WASLV2_LOADER_INVALIDTRAY			0x0020
#define WASLV2_LOADER_INVALIDHOTEL			0x0040
#define WASLV2_LOADER_TRAYONARM				0x0080
#define WASLV2_LOADER_TRAYONSTAGE			0x0100
#define WASLV2_LOADER_HOTELEJECTED			0x0200
#define	WASLV2_LOADER_HOTELNOTSCANNED		0x0800

#define	WASLV2_LOADER_COMMSERROR			0x1000
#define	WASLV2_LOADER_TRAYSENSORERROR		0x2000
#define	WASLV2_LOADER_AXISSTALLED			0x8000


/**
 * @brief WASL2 getlastError property return values
 */
#define WASLV2_ERR_OK						0
#define WASLV2_ERR_NOTINITIALISED			-1
#define WASLV2_ERR_NOTSETUP					-2
#define WASLV2_ERR_GRIPPER_HOMING_FAILED	-3
#define WASLV2_ERR_INVALIDHOTEL				-4
#define WASLV2_ERR_INVALIDTRAY				-5
#define WASLV2_ERR_TRAYINGRIPPER			-7
#define WASLV2_ERR_TRAYONSTAGE				-8
#define WASLV2_ERR_INVALIDSTATECHANGE		-9
#define WASLV2_ERR_HOTELREMOVED				-10
#define WASLV2_ERR_WRONGTRAYSENSORSTATE		-11
#define WASLV2_ERR_COMMS_ERROR				-13
#define WASLV2_ERR_AXIS_STALLED				-14

