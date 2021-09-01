/**
 * @file    PriorScientificSDK.h
 * @author	Rob Wicker  (rwicker@prior.com)
 * @date    5/3/21
 * @brief   This file contains a public API for Prior Scientific SDK
 * @copyright   Copyright (c) 2021 Prior Scientific Instruments Ltd. All rights reserved
 */


#ifndef _DLL_PRIORSCIENTIFICSDK_H_
#define _DLL_PRIORSCIENTIFICSDK_H_
 
#if defined PRIORSCIENTIFICSDK_EXPORTS
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

#include "errors.h"

/* *************************************************************************************************************************** */


/**
 * @brief DLL c interfaces 
 */
#ifdef __cplusplus
extern "C" {
#endif

	
/**
 * @brief get version details
 *
 * @param  version, user supplied buffer min 20 chars
 * @return   SDK return status
 */
DECLDIR int PriorScientificSDK_Version(char *const version);


/**
 * @brief initialise sdk. Call first before opening a session and sending commands
 *
 * @return   SDK return status
 */
DECLDIR int PriorScientificSDK_Initialise(void);

/**
 * @brief create a new session. A session contains a stage controller, a slide loader, plate loader etc and
 *        allows for them to work together. 
 *
 * @return   positive integer for session id, else -ve error code.
 */
DECLDIR int PriorScientificSDK_OpenNewSession(void);

/**
 * @brief close a session.
 *
 * @param  sessionID
 * @return   return zero for ok, else -1 for error, ie invalid session id
 */
DECLDIR int PriorScientificSDK_CloseSession(int sessionID);

/**
 * @brief execute a command to one of the devices.
 *
 * @param  sessionID
 * @param   tx    ascii string to transmit
 * @param   rx	  pointer to user supplied receive buffer for response
 * @return   SDK return status
 */
DECLDIR	int PriorScientificSDK_cmd(int sessionID, const char *const tx, char *const rx);

/*
 * End of the C-API
 */

#ifdef __cplusplus
} // end of extern "C"



/**
 * @brief The PriorScientificSDK class.
 *
 * The class is a simple inline C++ wrapper class for a public Prior Scientific SDK.
 * user is free to add to this class header as required or simply use the low-level C interface above
 */
class PriorScientificSDK
{
public:
	/**
     * @brief Constructor
     */
	PriorScientificSDK() {};
	/**
     * @brief Destructor
     */
	virtual ~PriorScientificSDK() {};


	/**
     * @brief dll initialisation. Must be called before any other 
     */
	int Initialise()
	{
		return PriorScientificSDK_Initialise();
	}
	
	/**
	 * @brief get version details
	 *
	 * @param  version, user supplied buffer min 20 chars
	 * @return   SDK return status
	 */
	 int Version(char *const version)
	 {
		 return PriorScientificSDK_Version(version);
	 }

	/**
     * @brief open a new session
     */
	int OpenSession()
	{
		return PriorScientificSDK_OpenNewSession();
	}

	/**
     * @brief close an existing session
     */
	int CloseSession(int sessionID)
	{
		return PriorScientificSDK_CloseSession(sessionID);
	}

	/**
     * @brief a basic command transfer, caller must provide buffers
     */
	int Cmd(int sessionID, const char *const tx, char *const rx)
	{
		return PriorScientificSDK_cmd(sessionID,tx,rx);
	}


	
};

#endif /* C++*/


#endif /* _DLL_PRIORSCIENTIFIC_H_ */
