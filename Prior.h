

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Thu Nov 07 16:10:23 2019
 */
/* Compiler settings for .\Prior.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __Prior_h__
#define __Prior_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITrigger_FWD_DEFINED__
#define __ITrigger_FWD_DEFINED__
typedef interface ITrigger ITrigger;
#endif 	/* __ITrigger_FWD_DEFINED__ */


#ifndef __IOEM_FWD_DEFINED__
#define __IOEM_FWD_DEFINED__
typedef interface IOEM IOEM;
#endif 	/* __IOEM_FWD_DEFINED__ */


#ifndef ___IScanEvents_FWD_DEFINED__
#define ___IScanEvents_FWD_DEFINED__
typedef interface _IScanEvents _IScanEvents;
#endif 	/* ___IScanEvents_FWD_DEFINED__ */


#ifndef __IScan_FWD_DEFINED__
#define __IScan_FWD_DEFINED__
typedef interface IScan IScan;
#endif 	/* __IScan_FWD_DEFINED__ */


#ifndef __ILed_FWD_DEFINED__
#define __ILed_FWD_DEFINED__
typedef interface ILed ILed;
#endif 	/* __ILed_FWD_DEFINED__ */


#ifndef __IEncoders_FWD_DEFINED__
#define __IEncoders_FWD_DEFINED__
typedef interface IEncoders IEncoders;
#endif 	/* __IEncoders_FWD_DEFINED__ */


#ifndef __IStage_FWD_DEFINED__
#define __IStage_FWD_DEFINED__
typedef interface IStage IStage;
#endif 	/* __IStage_FWD_DEFINED__ */


#ifndef __IZ_FWD_DEFINED__
#define __IZ_FWD_DEFINED__
typedef interface IZ IZ;
#endif 	/* __IZ_FWD_DEFINED__ */


#ifndef __IFilter_FWD_DEFINED__
#define __IFilter_FWD_DEFINED__
typedef interface IFilter IFilter;
#endif 	/* __IFilter_FWD_DEFINED__ */


#ifndef __ITTL_FWD_DEFINED__
#define __ITTL_FWD_DEFINED__
typedef interface ITTL ITTL;
#endif 	/* __ITTL_FWD_DEFINED__ */


#ifndef __IPiezo_FWD_DEFINED__
#define __IPiezo_FWD_DEFINED__
typedef interface IPiezo IPiezo;
#endif 	/* __IPiezo_FWD_DEFINED__ */


#ifndef __ITheta_FWD_DEFINED__
#define __ITheta_FWD_DEFINED__
typedef interface ITheta ITheta;
#endif 	/* __ITheta_FWD_DEFINED__ */


#ifndef __IShuttle_FWD_DEFINED__
#define __IShuttle_FWD_DEFINED__
typedef interface IShuttle IShuttle;
#endif 	/* __IShuttle_FWD_DEFINED__ */


#ifndef __ISlideLoader_FWD_DEFINED__
#define __ISlideLoader_FWD_DEFINED__
typedef interface ISlideLoader ISlideLoader;
#endif 	/* __ISlideLoader_FWD_DEFINED__ */


#ifndef __IWellPlateLoader_FWD_DEFINED__
#define __IWellPlateLoader_FWD_DEFINED__
typedef interface IWellPlateLoader IWellPlateLoader;
#endif 	/* __IWellPlateLoader_FWD_DEFINED__ */


#ifndef __Scan_FWD_DEFINED__
#define __Scan_FWD_DEFINED__

#ifdef __cplusplus
typedef class Scan Scan;
#else
typedef struct Scan Scan;
#endif /* __cplusplus */

#endif 	/* __Scan_FWD_DEFINED__ */


#ifndef __Encoders_FWD_DEFINED__
#define __Encoders_FWD_DEFINED__

#ifdef __cplusplus
typedef class Encoders Encoders;
#else
typedef struct Encoders Encoders;
#endif /* __cplusplus */

#endif 	/* __Encoders_FWD_DEFINED__ */


#ifndef __Stage_FWD_DEFINED__
#define __Stage_FWD_DEFINED__

#ifdef __cplusplus
typedef class Stage Stage;
#else
typedef struct Stage Stage;
#endif /* __cplusplus */

#endif 	/* __Stage_FWD_DEFINED__ */


#ifndef __Z_FWD_DEFINED__
#define __Z_FWD_DEFINED__

#ifdef __cplusplus
typedef class Z Z;
#else
typedef struct Z Z;
#endif /* __cplusplus */

#endif 	/* __Z_FWD_DEFINED__ */


#ifndef __Filter_FWD_DEFINED__
#define __Filter_FWD_DEFINED__

#ifdef __cplusplus
typedef class Filter Filter;
#else
typedef struct Filter Filter;
#endif /* __cplusplus */

#endif 	/* __Filter_FWD_DEFINED__ */


#ifndef __TTL_FWD_DEFINED__
#define __TTL_FWD_DEFINED__

#ifdef __cplusplus
typedef class TTL TTL;
#else
typedef struct TTL TTL;
#endif /* __cplusplus */

#endif 	/* __TTL_FWD_DEFINED__ */


#ifndef __Piezo_FWD_DEFINED__
#define __Piezo_FWD_DEFINED__

#ifdef __cplusplus
typedef class Piezo Piezo;
#else
typedef struct Piezo Piezo;
#endif /* __cplusplus */

#endif 	/* __Piezo_FWD_DEFINED__ */


#ifndef __Theta_FWD_DEFINED__
#define __Theta_FWD_DEFINED__

#ifdef __cplusplus
typedef class Theta Theta;
#else
typedef struct Theta Theta;
#endif /* __cplusplus */

#endif 	/* __Theta_FWD_DEFINED__ */


#ifndef __Shuttle_FWD_DEFINED__
#define __Shuttle_FWD_DEFINED__

#ifdef __cplusplus
typedef class Shuttle Shuttle;
#else
typedef struct Shuttle Shuttle;
#endif /* __cplusplus */

#endif 	/* __Shuttle_FWD_DEFINED__ */


#ifndef __SlideLoader_FWD_DEFINED__
#define __SlideLoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class SlideLoader SlideLoader;
#else
typedef struct SlideLoader SlideLoader;
#endif /* __cplusplus */

#endif 	/* __SlideLoader_FWD_DEFINED__ */


#ifndef __Led_FWD_DEFINED__
#define __Led_FWD_DEFINED__

#ifdef __cplusplus
typedef class Led Led;
#else
typedef struct Led Led;
#endif /* __cplusplus */

#endif 	/* __Led_FWD_DEFINED__ */


#ifndef __WellPlateLoader_FWD_DEFINED__
#define __WellPlateLoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class WellPlateLoader WellPlateLoader;
#else
typedef struct WellPlateLoader WellPlateLoader;
#endif /* __cplusplus */

#endif 	/* __WellPlateLoader_FWD_DEFINED__ */


#ifndef __Trigger_FWD_DEFINED__
#define __Trigger_FWD_DEFINED__

#ifdef __cplusplus
typedef class Trigger Trigger;
#else
typedef struct Trigger Trigger;
#endif /* __cplusplus */

#endif 	/* __Trigger_FWD_DEFINED__ */


#ifndef __OEM_FWD_DEFINED__
#define __OEM_FWD_DEFINED__

#ifdef __cplusplus
typedef class OEM OEM;
#else
typedef struct OEM OEM;
#endif /* __cplusplus */

#endif 	/* __OEM_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PRIORLib_LIBRARY_DEFINED__
#define __PRIORLib_LIBRARY_DEFINED__

/* library PRIORLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_PRIORLib;

#ifndef __ITrigger_INTERFACE_DEFINED__
#define __ITrigger_INTERFACE_DEFINED__

/* interface ITrigger */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3585EB91-9407-4B51-A094-292B371C83AB")
    ITrigger : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_encoderCountsPerMicron( 
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArmTrigger( 
            /* [in] */ LONG startPosition,
            /* [in] */ LONG distanceBetweenTriggers,
            /* [in] */ LONG axis,
            /* [in] */ LONG numberOfTriggers,
            /* [in] */ LONG polarity,
            /* [in] */ LONG pulseDuration,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrigger * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrigger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrigger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrigger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrigger * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_encoderCountsPerMicron )( 
            ITrigger * This,
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArmTrigger )( 
            ITrigger * This,
            /* [in] */ LONG startPosition,
            /* [in] */ LONG distanceBetweenTriggers,
            /* [in] */ LONG axis,
            /* [in] */ LONG numberOfTriggers,
            /* [in] */ LONG polarity,
            /* [in] */ LONG pulseDuration,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            ITrigger * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ITriggerVtbl;

    interface ITrigger
    {
        CONST_VTBL struct ITriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrigger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrigger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrigger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrigger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrigger_get_encoderCountsPerMicron(This,axis,pVal)	\
    ( (This)->lpVtbl -> get_encoderCountsPerMicron(This,axis,pVal) ) 

#define ITrigger_ArmTrigger(This,startPosition,distanceBetweenTriggers,axis,numberOfTriggers,polarity,pulseDuration,retVal)	\
    ( (This)->lpVtbl -> ArmTrigger(This,startPosition,distanceBetweenTriggers,axis,numberOfTriggers,polarity,pulseDuration,retVal) ) 

#define ITrigger_get_IsFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrigger_INTERFACE_DEFINED__ */


#ifndef __IOEM_INTERFACE_DEFINED__
#define __IOEM_INTERFACE_DEFINED__

/* interface IOEM */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IOEM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48D981C7-D016-4D9A-9634-492BF535CC73")
    IOEM : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ LONG devID,
            /* [in] */ BSTR devName,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Home( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToPosition( 
            /* [in] */ LONG devID,
            /* [in] */ LONG pos,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAtVelocity( 
            /* [in] */ LONG devID,
            /* [in] */ LONG velocity,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KillMotion( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Speed( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Speed( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Acceleration( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Acceleration( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Curve( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Curve( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Limits( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Limits( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Servo( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Servo( 
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsMoving( 
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOEMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOEM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOEM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOEM * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOEM * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOEM * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOEM * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOEM * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ BSTR devName,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Home )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToPosition )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG pos,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAtVelocity )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG velocity,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *KillMotion )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Speed )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Speed )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acceleration )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Acceleration )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Curve )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Curve )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Limits )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Limits )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Servo )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Servo )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMoving )( 
            IOEM * This,
            /* [in] */ LONG devID,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IOEMVtbl;

    interface IOEM
    {
        CONST_VTBL struct IOEMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOEM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOEM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOEM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOEM_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOEM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOEM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOEM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOEM_Configure(This,devID,devName,RetValue)	\
    ( (This)->lpVtbl -> Configure(This,devID,devName,RetValue) ) 

#define IOEM_Home(This,devID,retVal)	\
    ( (This)->lpVtbl -> Home(This,devID,retVal) ) 

#define IOEM_MoveToPosition(This,devID,pos,retVal)	\
    ( (This)->lpVtbl -> MoveToPosition(This,devID,pos,retVal) ) 

#define IOEM_get_Position(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,devID,pVal) ) 

#define IOEM_put_Position(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,devID,newVal) ) 

#define IOEM_MoveAtVelocity(This,devID,velocity,retVal)	\
    ( (This)->lpVtbl -> MoveAtVelocity(This,devID,velocity,retVal) ) 

#define IOEM_KillMotion(This,devID,retVal)	\
    ( (This)->lpVtbl -> KillMotion(This,devID,retVal) ) 

#define IOEM_get_Speed(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Speed(This,devID,pVal) ) 

#define IOEM_put_Speed(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Speed(This,devID,newVal) ) 

#define IOEM_get_Acceleration(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Acceleration(This,devID,pVal) ) 

#define IOEM_put_Acceleration(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Acceleration(This,devID,newVal) ) 

#define IOEM_get_Curve(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Curve(This,devID,pVal) ) 

#define IOEM_put_Curve(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Curve(This,devID,newVal) ) 

#define IOEM_get_Limits(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Limits(This,devID,pVal) ) 

#define IOEM_put_Limits(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Limits(This,devID,newVal) ) 

#define IOEM_get_Servo(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_Servo(This,devID,pVal) ) 

#define IOEM_put_Servo(This,devID,newVal)	\
    ( (This)->lpVtbl -> put_Servo(This,devID,newVal) ) 

#define IOEM_get_IsMoving(This,devID,pVal)	\
    ( (This)->lpVtbl -> get_IsMoving(This,devID,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOEM_INTERFACE_DEFINED__ */


#ifndef ___IScanEvents_DISPINTERFACE_DEFINED__
#define ___IScanEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IScanEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IScanEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("44420EC2-BBCC-11D5-BC62-00C0F0527D82")
    _IScanEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IScanEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IScanEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IScanEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IScanEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IScanEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IScanEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IScanEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IScanEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IScanEventsVtbl;

    interface _IScanEvents
    {
        CONST_VTBL struct _IScanEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IScanEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IScanEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IScanEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IScanEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IScanEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IScanEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IScanEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IScanEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IScan_INTERFACE_DEFINED__
#define __IScan_INTERFACE_DEFINED__

/* interface IScan */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IScan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44420EC0-BBCC-11D5-BC62-00C0F0527D82")
    IScan : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [out][in] */ long *Port,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsMoving( 
            /* [out] */ long *Status,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveXYZtoAbsolute( 
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveXYZRelative( 
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KillAllMotion( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InterruptAllMotion( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPowerSupplyVoltage( 
            /* [out] */ long *Voltage,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBoardTemperature( 
            /* [out] */ float *Temperature,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenShutter( 
            /* [in] */ long Shutter,
            /* [in] */ BOOL OpenNotClose,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Revision( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAtLimits( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsShutterOpen( 
            /* [in] */ long Shutter,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsShutterOpen( 
            /* [in] */ long Shutter,
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFourthParams( 
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFocusParams( 
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QuerySystem( 
            /* [out] */ BSTR *Controller,
            /* [out] */ BSTR *Stage,
            /* [out] */ BSTR *Focus,
            /* [out] */ BSTR *Fourth,
            /* [out] */ BSTR *Filter1,
            /* [out] */ BSTR *Filter2,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RestoreDefaults( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetShuttersPresent( 
            /* [out] */ BOOL *Shutter_1,
            /* [out] */ BOOL *Shutter_2,
            /* [out] */ BOOL *Shutter_3,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisConnect( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryEeprom( 
            /* [out] */ BSTR *content,
            /* [retval][out] */ long *Retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SyncAndWait( 
            /* [in] */ long Delay,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LumenLightLevel( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LumenLightLevel( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LumenLightReset( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LumenPower( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LumenPower( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControllerFirmwareVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE JoystickButtonFunction( 
            /* [in] */ BSTR str,
            /* [retval][out] */ long *RetVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ISError( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsShutterFitted( 
            /* [in] */ long shutter,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserFlag( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserFlag( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LockCommPort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnlockCommPort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TxCommand( 
            /* [in] */ BSTR cmd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RxResponse( 
            /* [out] */ BSTR *response) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IjoyFitted( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControllerVariant( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IScanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScan * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScan * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScan * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScan * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScan * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IScan * This,
            /* [out][in] */ long *Port,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsMoving )( 
            IScan * This,
            /* [out] */ long *Status,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveXYZtoAbsolute )( 
            IScan * This,
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveXYZRelative )( 
            IScan * This,
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *KillAllMotion )( 
            IScan * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InterruptAllMotion )( 
            IScan * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPowerSupplyVoltage )( 
            IScan * This,
            /* [out] */ long *Voltage,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBoardTemperature )( 
            IScan * This,
            /* [out] */ float *Temperature,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenShutter )( 
            IScan * This,
            /* [in] */ long Shutter,
            /* [in] */ BOOL OpenNotClose,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IScan * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Revision )( 
            IScan * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAtLimits )( 
            IScan * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsShutterOpen )( 
            IScan * This,
            /* [in] */ long Shutter,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsShutterOpen )( 
            IScan * This,
            /* [in] */ long Shutter,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            IScan * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFourthParams )( 
            IScan * This,
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFocusParams )( 
            IScan * This,
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QuerySystem )( 
            IScan * This,
            /* [out] */ BSTR *Controller,
            /* [out] */ BSTR *Stage,
            /* [out] */ BSTR *Focus,
            /* [out] */ BSTR *Fourth,
            /* [out] */ BSTR *Filter1,
            /* [out] */ BSTR *Filter2,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RestoreDefaults )( 
            IScan * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetShuttersPresent )( 
            IScan * This,
            /* [out] */ BOOL *Shutter_1,
            /* [out] */ BOOL *Shutter_2,
            /* [out] */ BOOL *Shutter_3,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisConnect )( 
            IScan * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QueryEeprom )( 
            IScan * This,
            /* [out] */ BSTR *content,
            /* [retval][out] */ long *Retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SyncAndWait )( 
            IScan * This,
            /* [in] */ long Delay,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LumenLightLevel )( 
            IScan * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LumenLightLevel )( 
            IScan * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LumenLightReset )( 
            IScan * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LumenPower )( 
            IScan * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LumenPower )( 
            IScan * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControllerFirmwareVersion )( 
            IScan * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *JoystickButtonFunction )( 
            IScan * This,
            /* [in] */ BSTR str,
            /* [retval][out] */ long *RetVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IScan * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ISError )( 
            IScan * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsShutterFitted )( 
            IScan * This,
            /* [in] */ long shutter,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserFlag )( 
            IScan * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserFlag )( 
            IScan * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LockCommPort )( 
            IScan * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnlockCommPort )( 
            IScan * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TxCommand )( 
            IScan * This,
            /* [in] */ BSTR cmd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RxResponse )( 
            IScan * This,
            /* [out] */ BSTR *response);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IjoyFitted )( 
            IScan * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControllerVariant )( 
            IScan * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IScanVtbl;

    interface IScan
    {
        CONST_VTBL struct IScanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScan_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScan_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScan_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScan_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScan_Connect(This,Port,RetValue)	\
    ( (This)->lpVtbl -> Connect(This,Port,RetValue) ) 

#define IScan_IsMoving(This,Status,RetValue)	\
    ( (This)->lpVtbl -> IsMoving(This,Status,RetValue) ) 

#define IScan_MoveXYZtoAbsolute(This,XPos,YPos,ZPos,RetValue)	\
    ( (This)->lpVtbl -> MoveXYZtoAbsolute(This,XPos,YPos,ZPos,RetValue) ) 

#define IScan_MoveXYZRelative(This,XPos,YPos,ZPos,RetValue)	\
    ( (This)->lpVtbl -> MoveXYZRelative(This,XPos,YPos,ZPos,RetValue) ) 

#define IScan_KillAllMotion(This,RetValue)	\
    ( (This)->lpVtbl -> KillAllMotion(This,RetValue) ) 

#define IScan_InterruptAllMotion(This,RetValue)	\
    ( (This)->lpVtbl -> InterruptAllMotion(This,RetValue) ) 

#define IScan_GetPowerSupplyVoltage(This,Voltage,RetValue)	\
    ( (This)->lpVtbl -> GetPowerSupplyVoltage(This,Voltage,RetValue) ) 

#define IScan_GetBoardTemperature(This,Temperature,RetValue)	\
    ( (This)->lpVtbl -> GetBoardTemperature(This,Temperature,RetValue) ) 

#define IScan_OpenShutter(This,Shutter,OpenNotClose,RetValue)	\
    ( (This)->lpVtbl -> OpenShutter(This,Shutter,OpenNotClose,RetValue) ) 

#define IScan_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IScan_get_Revision(This,pVal)	\
    ( (This)->lpVtbl -> get_Revision(This,pVal) ) 

#define IScan_get_IsAtLimits(This,pVal)	\
    ( (This)->lpVtbl -> get_IsAtLimits(This,pVal) ) 

#define IScan_get_IsShutterOpen(This,Shutter,pVal)	\
    ( (This)->lpVtbl -> get_IsShutterOpen(This,Shutter,pVal) ) 

#define IScan_put_IsShutterOpen(This,Shutter,newVal)	\
    ( (This)->lpVtbl -> put_IsShutterOpen(This,Shutter,newVal) ) 

#define IScan_get_SerialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,pVal) ) 

#define IScan_GetFourthParams(This,type,Description,RetValue)	\
    ( (This)->lpVtbl -> GetFourthParams(This,type,Description,RetValue) ) 

#define IScan_GetFocusParams(This,type,Description,RetValue)	\
    ( (This)->lpVtbl -> GetFocusParams(This,type,Description,RetValue) ) 

#define IScan_QuerySystem(This,Controller,Stage,Focus,Fourth,Filter1,Filter2,RetValue)	\
    ( (This)->lpVtbl -> QuerySystem(This,Controller,Stage,Focus,Fourth,Filter1,Filter2,RetValue) ) 

#define IScan_RestoreDefaults(This,RetValue)	\
    ( (This)->lpVtbl -> RestoreDefaults(This,RetValue) ) 

#define IScan_GetShuttersPresent(This,Shutter_1,Shutter_2,Shutter_3,RetValue)	\
    ( (This)->lpVtbl -> GetShuttersPresent(This,Shutter_1,Shutter_2,Shutter_3,RetValue) ) 

#define IScan_DisConnect(This,RetValue)	\
    ( (This)->lpVtbl -> DisConnect(This,RetValue) ) 

#define IScan_QueryEeprom(This,content,Retval)	\
    ( (This)->lpVtbl -> QueryEeprom(This,content,Retval) ) 

#define IScan_SyncAndWait(This,Delay,RetValue)	\
    ( (This)->lpVtbl -> SyncAndWait(This,Delay,RetValue) ) 

#define IScan_get_LumenLightLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_LumenLightLevel(This,pVal) ) 

#define IScan_put_LumenLightLevel(This,newVal)	\
    ( (This)->lpVtbl -> put_LumenLightLevel(This,newVal) ) 

#define IScan_LumenLightReset(This,RetValue)	\
    ( (This)->lpVtbl -> LumenLightReset(This,RetValue) ) 

#define IScan_get_LumenPower(This,pVal)	\
    ( (This)->lpVtbl -> get_LumenPower(This,pVal) ) 

#define IScan_put_LumenPower(This,newVal)	\
    ( (This)->lpVtbl -> put_LumenPower(This,newVal) ) 

#define IScan_get_ControllerFirmwareVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ControllerFirmwareVersion(This,pVal) ) 

#define IScan_JoystickButtonFunction(This,str,RetVal)	\
    ( (This)->lpVtbl -> JoystickButtonFunction(This,str,RetVal) ) 

#define IScan_get_IsConnected(This,pVal)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pVal) ) 

#define IScan_get_ISError(This,pVal)	\
    ( (This)->lpVtbl -> get_ISError(This,pVal) ) 

#define IScan_get_IsShutterFitted(This,shutter,pVal)	\
    ( (This)->lpVtbl -> get_IsShutterFitted(This,shutter,pVal) ) 

#define IScan_get_UserFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_UserFlag(This,pVal) ) 

#define IScan_put_UserFlag(This,newVal)	\
    ( (This)->lpVtbl -> put_UserFlag(This,newVal) ) 

#define IScan_LockCommPort(This)	\
    ( (This)->lpVtbl -> LockCommPort(This) ) 

#define IScan_UnlockCommPort(This)	\
    ( (This)->lpVtbl -> UnlockCommPort(This) ) 

#define IScan_TxCommand(This,cmd)	\
    ( (This)->lpVtbl -> TxCommand(This,cmd) ) 

#define IScan_RxResponse(This,response)	\
    ( (This)->lpVtbl -> RxResponse(This,response) ) 

#define IScan_get_IjoyFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IjoyFitted(This,pVal) ) 

#define IScan_get_ControllerVariant(This,pVal)	\
    ( (This)->lpVtbl -> get_ControllerVariant(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScan_INTERFACE_DEFINED__ */


#ifndef __ILed_INTERFACE_DEFINED__
#define __ILed_INTERFACE_DEFINED__

/* interface ILed */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILed;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C38156B-01FA-446E-A3A3-D740E4C94788")
    ILed : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxPower( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Power( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Power( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lambda( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Compatability( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Compatability( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PulseTime( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PulseTime( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxPulseTime( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerType( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerType( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Trigger( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_boardType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FanState( 
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FanState( 
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILed * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILed * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILed * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILed * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILed * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILed * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILed * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPower )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Power )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Power )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lambda )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compatability )( 
            ILed * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compatability )( 
            ILed * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PulseTime )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PulseTime )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPulseTime )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerType )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerType )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Trigger )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_boardType )( 
            ILed * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FanState )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FanState )( 
            ILed * This,
            /* [in] */ LONG LedId,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ILedVtbl;

    interface ILed
    {
        CONST_VTBL struct ILedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILed_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILed_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILed_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILed_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILed_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILed_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILed_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILed_get_MaxPower(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_MaxPower(This,LedId,pVal) ) 

#define ILed_get_Power(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_Power(This,LedId,pVal) ) 

#define ILed_put_Power(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_Power(This,LedId,newVal) ) 

#define ILed_get_Lambda(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_Lambda(This,LedId,pVal) ) 

#define ILed_get_SerialNumber(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,LedId,pVal) ) 

#define ILed_get_State(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_State(This,LedId,pVal) ) 

#define ILed_put_State(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_State(This,LedId,newVal) ) 

#define ILed_get_IsFitted(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,LedId,pVal) ) 

#define ILed_get_Mode(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_Mode(This,LedId,pVal) ) 

#define ILed_put_Mode(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_Mode(This,LedId,newVal) ) 

#define ILed_get_Compatability(This,pVal)	\
    ( (This)->lpVtbl -> get_Compatability(This,pVal) ) 

#define ILed_put_Compatability(This,newVal)	\
    ( (This)->lpVtbl -> put_Compatability(This,newVal) ) 

#define ILed_get_PulseTime(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_PulseTime(This,LedId,pVal) ) 

#define ILed_put_PulseTime(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_PulseTime(This,LedId,newVal) ) 

#define ILed_get_MaxPulseTime(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_MaxPulseTime(This,LedId,pVal) ) 

#define ILed_get_TriggerType(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_TriggerType(This,LedId,pVal) ) 

#define ILed_put_TriggerType(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_TriggerType(This,LedId,newVal) ) 

#define ILed_get_Trigger(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,LedId,pVal) ) 

#define ILed_put_Trigger(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_Trigger(This,LedId,newVal) ) 

#define ILed_get_Name(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,LedId,pVal) ) 

#define ILed_get_boardType(This,pVal)	\
    ( (This)->lpVtbl -> get_boardType(This,pVal) ) 

#define ILed_get_FanState(This,LedId,pVal)	\
    ( (This)->lpVtbl -> get_FanState(This,LedId,pVal) ) 

#define ILed_put_FanState(This,LedId,newVal)	\
    ( (This)->lpVtbl -> put_FanState(This,LedId,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILed_INTERFACE_DEFINED__ */


#ifndef __IEncoders_INTERFACE_DEFINED__
#define __IEncoders_INTERFACE_DEFINED__

/* interface IEncoders */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IEncoders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("722ADAF8-DAB0-463F-8004-91F15F188607")
    IEncoders : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XResolution( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XResolution( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YResolution( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YResolution( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZResolution( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZResolution( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsXFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsYFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsZFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EncoderXPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EncoderYPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EncoderZPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MotorXPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MotorYPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MotorZPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZServoWindow( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZServoWindow( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StageServoWindow( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StageServoWindow( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZServoEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZServoEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StageServoEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StageServoEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XEncoderWindow( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XEncoderWindow( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YEncoderWindow( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YEncoderWindow( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZEncoderWindow( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZEncoderWindow( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEncodersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEncoders * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEncoders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEncoders * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEncoders * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEncoders * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEncoders * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEncoders * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XResolution )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XResolution )( 
            IEncoders * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YResolution )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YResolution )( 
            IEncoders * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZResolution )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZResolution )( 
            IEncoders * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsXFitted )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsYFitted )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsZFitted )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XEnable )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XEnable )( 
            IEncoders * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YEnable )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YEnable )( 
            IEncoders * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZEnable )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZEnable )( 
            IEncoders * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncoderXPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncoderYPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncoderZPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MotorXPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MotorYPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MotorZPosition )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZServoWindow )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZServoWindow )( 
            IEncoders * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StageServoWindow )( 
            IEncoders * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StageServoWindow )( 
            IEncoders * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZServoEnable )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZServoEnable )( 
            IEncoders * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StageServoEnable )( 
            IEncoders * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StageServoEnable )( 
            IEncoders * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XEncoderWindow )( 
            IEncoders * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XEncoderWindow )( 
            IEncoders * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YEncoderWindow )( 
            IEncoders * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YEncoderWindow )( 
            IEncoders * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZEncoderWindow )( 
            IEncoders * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZEncoderWindow )( 
            IEncoders * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IEncodersVtbl;

    interface IEncoders
    {
        CONST_VTBL struct IEncodersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEncoders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEncoders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEncoders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEncoders_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEncoders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEncoders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEncoders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEncoders_get_XResolution(This,pVal)	\
    ( (This)->lpVtbl -> get_XResolution(This,pVal) ) 

#define IEncoders_put_XResolution(This,newVal)	\
    ( (This)->lpVtbl -> put_XResolution(This,newVal) ) 

#define IEncoders_get_YResolution(This,pVal)	\
    ( (This)->lpVtbl -> get_YResolution(This,pVal) ) 

#define IEncoders_put_YResolution(This,newVal)	\
    ( (This)->lpVtbl -> put_YResolution(This,newVal) ) 

#define IEncoders_get_ZResolution(This,pVal)	\
    ( (This)->lpVtbl -> get_ZResolution(This,pVal) ) 

#define IEncoders_put_ZResolution(This,newVal)	\
    ( (This)->lpVtbl -> put_ZResolution(This,newVal) ) 

#define IEncoders_get_IsXFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsXFitted(This,pVal) ) 

#define IEncoders_get_IsYFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsYFitted(This,pVal) ) 

#define IEncoders_get_IsZFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsZFitted(This,pVal) ) 

#define IEncoders_get_XEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_XEnable(This,pVal) ) 

#define IEncoders_put_XEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_XEnable(This,newVal) ) 

#define IEncoders_get_YEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_YEnable(This,pVal) ) 

#define IEncoders_put_YEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_YEnable(This,newVal) ) 

#define IEncoders_get_ZEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_ZEnable(This,pVal) ) 

#define IEncoders_put_ZEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_ZEnable(This,newVal) ) 

#define IEncoders_get_EncoderXPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_EncoderXPosition(This,pVal) ) 

#define IEncoders_get_EncoderYPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_EncoderYPosition(This,pVal) ) 

#define IEncoders_get_EncoderZPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_EncoderZPosition(This,pVal) ) 

#define IEncoders_get_MotorXPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_MotorXPosition(This,pVal) ) 

#define IEncoders_get_MotorYPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_MotorYPosition(This,pVal) ) 

#define IEncoders_get_MotorZPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_MotorZPosition(This,pVal) ) 

#define IEncoders_get_ZServoWindow(This,pVal)	\
    ( (This)->lpVtbl -> get_ZServoWindow(This,pVal) ) 

#define IEncoders_put_ZServoWindow(This,newVal)	\
    ( (This)->lpVtbl -> put_ZServoWindow(This,newVal) ) 

#define IEncoders_get_StageServoWindow(This,pVal)	\
    ( (This)->lpVtbl -> get_StageServoWindow(This,pVal) ) 

#define IEncoders_put_StageServoWindow(This,newVal)	\
    ( (This)->lpVtbl -> put_StageServoWindow(This,newVal) ) 

#define IEncoders_get_ZServoEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_ZServoEnable(This,pVal) ) 

#define IEncoders_put_ZServoEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_ZServoEnable(This,newVal) ) 

#define IEncoders_get_StageServoEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_StageServoEnable(This,pVal) ) 

#define IEncoders_put_StageServoEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_StageServoEnable(This,newVal) ) 

#define IEncoders_get_XEncoderWindow(This,pVal)	\
    ( (This)->lpVtbl -> get_XEncoderWindow(This,pVal) ) 

#define IEncoders_put_XEncoderWindow(This,newVal)	\
    ( (This)->lpVtbl -> put_XEncoderWindow(This,newVal) ) 

#define IEncoders_get_YEncoderWindow(This,pVal)	\
    ( (This)->lpVtbl -> get_YEncoderWindow(This,pVal) ) 

#define IEncoders_put_YEncoderWindow(This,newVal)	\
    ( (This)->lpVtbl -> put_YEncoderWindow(This,newVal) ) 

#define IEncoders_get_ZEncoderWindow(This,pVal)	\
    ( (This)->lpVtbl -> get_ZEncoderWindow(This,pVal) ) 

#define IEncoders_put_ZEncoderWindow(This,newVal)	\
    ( (This)->lpVtbl -> put_ZEncoderWindow(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEncoders_INTERFACE_DEFINED__ */


#ifndef __IStage_INTERFACE_DEFINED__
#define __IStage_INTERFACE_DEFINED__

/* interface IStage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C484416-A3D0-4231-8795-692BB3372990")
    IStage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Curve( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Curve( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostBackLashDistance( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostBackLashDistance( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostBackLashEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostBackLashEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickBackLashDistance( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickBackLashDistance( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickBacklashEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickBacklashEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxAcceleration( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxAcceleration( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaximumJoystickSpeed( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaximumJoystickSpeed( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSpeed( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSpeed( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunningCurrent( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunningCurrent( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StandbyCurrent( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StandbyCurrent( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XHostDirection( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XHostDirection( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YHostDirection( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YHostDirection( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XJoystickDirection( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XJoystickDirection( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YJoystickDirection( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YJoystickDirection( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XPosition( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YPosition( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParams( 
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [out] */ long *X_Size,
            /* [out] */ long *Y_Size,
            /* [out] */ long *uStepsPerMicron,
            /* [out] */ BOOL *OpenLimits,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetParams( 
            /* [in] */ BSTR Description,
            /* [in] */ long X_Size,
            /* [in] */ long Y_Size,
            /* [in] */ long uStepsPerMicron,
            /* [in] */ BOOL OpenLimits,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [out] */ double *XPos,
            /* [out] */ double *YPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAtVelocity( 
            /* [in] */ double XSpeed,
            /* [in] */ double YSpeed,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveBack( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveForward( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveLeft( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveRelative( 
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveRight( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToAbsolute( 
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveXToAbsolute( 
            /* [in] */ double Position,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveYToAbsolute( 
            /* [in] */ double Position,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCorrection( 
            /* [in] */ double a,
            /* [in] */ double b,
            /* [in] */ double c,
            /* [in] */ double d,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CorrectionEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CorrectionEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveXAtVelocityUntilEncoderReference( 
            /* [in] */ double Speed,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveYAtVelocityUntilEncoderReference( 
            /* [in] */ double Speed,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetReference( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RestoreReference( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SkewAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SkewAngle( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SkewEnabled( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SkewEnabled( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MappingEnabled( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MappingEnabled( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkewAbout( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkewSecond( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceDone( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickState( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickState( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RotateStageSlideHolder( 
            /* [in] */ LONG direction,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotateStageSlideHolderStatus( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickEnable )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickEnable )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Curve )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Curve )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostBackLashDistance )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostBackLashDistance )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostBackLashEnable )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostBackLashEnable )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickBackLashDistance )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickBackLashDistance )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickBacklashEnable )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickBacklashEnable )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAcceleration )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxAcceleration )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximumJoystickSpeed )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximumJoystickSpeed )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSpeed )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSpeed )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunningCurrent )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunningCurrent )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandbyCurrent )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StandbyCurrent )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XHostDirection )( 
            IStage * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XHostDirection )( 
            IStage * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YHostDirection )( 
            IStage * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YHostDirection )( 
            IStage * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XJoystickDirection )( 
            IStage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XJoystickDirection )( 
            IStage * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YJoystickDirection )( 
            IStage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YJoystickDirection )( 
            IStage * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XPosition )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XPosition )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YPosition )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YPosition )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParams )( 
            IStage * This,
            /* [out] */ long *type,
            /* [out] */ BSTR *Description,
            /* [out] */ long *X_Size,
            /* [out] */ long *Y_Size,
            /* [out] */ long *uStepsPerMicron,
            /* [out] */ BOOL *OpenLimits,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetParams )( 
            IStage * This,
            /* [in] */ BSTR Description,
            /* [in] */ long X_Size,
            /* [in] */ long Y_Size,
            /* [in] */ long uStepsPerMicron,
            /* [in] */ BOOL OpenLimits,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            IStage * This,
            /* [out] */ double *XPos,
            /* [out] */ double *YPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAtVelocity )( 
            IStage * This,
            /* [in] */ double XSpeed,
            /* [in] */ double YSpeed,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveBack )( 
            IStage * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveForward )( 
            IStage * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveLeft )( 
            IStage * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveRelative )( 
            IStage * This,
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveRight )( 
            IStage * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToAbsolute )( 
            IStage * This,
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveXToAbsolute )( 
            IStage * This,
            /* [in] */ double Position,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveYToAbsolute )( 
            IStage * This,
            /* [in] */ double Position,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            IStage * This,
            /* [in] */ double XPos,
            /* [in] */ double YPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCorrection )( 
            IStage * This,
            /* [in] */ double a,
            /* [in] */ double b,
            /* [in] */ double c,
            /* [in] */ double d,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CorrectionEnable )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CorrectionEnable )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveXAtVelocityUntilEncoderReference )( 
            IStage * This,
            /* [in] */ double Speed,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveYAtVelocityUntilEncoderReference )( 
            IStage * This,
            /* [in] */ double Speed,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetReference )( 
            IStage * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RestoreReference )( 
            IStage * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SkewAngle )( 
            IStage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SkewAngle )( 
            IStage * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SkewEnabled )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SkewEnabled )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MappingEnabled )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MappingEnabled )( 
            IStage * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkewAbout )( 
            IStage * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkewSecond )( 
            IStage * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceDone )( 
            IStage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickState )( 
            IStage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickState )( 
            IStage * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RotateStageSlideHolder )( 
            IStage * This,
            /* [in] */ LONG direction,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RotateStageSlideHolderStatus )( 
            IStage * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IStageVtbl;

    interface IStage
    {
        CONST_VTBL struct IStageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStage_get_JoystickEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickEnable(This,pVal) ) 

#define IStage_put_JoystickEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickEnable(This,newVal) ) 

#define IStage_get_Curve(This,pVal)	\
    ( (This)->lpVtbl -> get_Curve(This,pVal) ) 

#define IStage_put_Curve(This,newVal)	\
    ( (This)->lpVtbl -> put_Curve(This,newVal) ) 

#define IStage_get_HostBackLashDistance(This,pVal)	\
    ( (This)->lpVtbl -> get_HostBackLashDistance(This,pVal) ) 

#define IStage_put_HostBackLashDistance(This,newVal)	\
    ( (This)->lpVtbl -> put_HostBackLashDistance(This,newVal) ) 

#define IStage_get_HostBackLashEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_HostBackLashEnable(This,pVal) ) 

#define IStage_put_HostBackLashEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_HostBackLashEnable(This,newVal) ) 

#define IStage_get_JoystickBackLashDistance(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickBackLashDistance(This,pVal) ) 

#define IStage_put_JoystickBackLashDistance(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickBackLashDistance(This,newVal) ) 

#define IStage_get_JoystickBacklashEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickBacklashEnable(This,pVal) ) 

#define IStage_put_JoystickBacklashEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickBacklashEnable(This,newVal) ) 

#define IStage_get_MaxAcceleration(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxAcceleration(This,pVal) ) 

#define IStage_put_MaxAcceleration(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxAcceleration(This,newVal) ) 

#define IStage_get_MaximumJoystickSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_MaximumJoystickSpeed(This,pVal) ) 

#define IStage_put_MaximumJoystickSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_MaximumJoystickSpeed(This,newVal) ) 

#define IStage_get_MaxSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxSpeed(This,pVal) ) 

#define IStage_put_MaxSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSpeed(This,newVal) ) 

#define IStage_get_RunningCurrent(This,pVal)	\
    ( (This)->lpVtbl -> get_RunningCurrent(This,pVal) ) 

#define IStage_put_RunningCurrent(This,newVal)	\
    ( (This)->lpVtbl -> put_RunningCurrent(This,newVal) ) 

#define IStage_get_StandbyCurrent(This,pVal)	\
    ( (This)->lpVtbl -> get_StandbyCurrent(This,pVal) ) 

#define IStage_put_StandbyCurrent(This,newVal)	\
    ( (This)->lpVtbl -> put_StandbyCurrent(This,newVal) ) 

#define IStage_get_XHostDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_XHostDirection(This,pVal) ) 

#define IStage_put_XHostDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_XHostDirection(This,newVal) ) 

#define IStage_get_YHostDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_YHostDirection(This,pVal) ) 

#define IStage_put_YHostDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_YHostDirection(This,newVal) ) 

#define IStage_get_XJoystickDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_XJoystickDirection(This,pVal) ) 

#define IStage_put_XJoystickDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_XJoystickDirection(This,newVal) ) 

#define IStage_get_YJoystickDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_YJoystickDirection(This,pVal) ) 

#define IStage_put_YJoystickDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_YJoystickDirection(This,newVal) ) 

#define IStage_get_XPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_XPosition(This,pVal) ) 

#define IStage_put_XPosition(This,newVal)	\
    ( (This)->lpVtbl -> put_XPosition(This,newVal) ) 

#define IStage_get_YPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_YPosition(This,pVal) ) 

#define IStage_put_YPosition(This,newVal)	\
    ( (This)->lpVtbl -> put_YPosition(This,newVal) ) 

#define IStage_GetParams(This,type,Description,X_Size,Y_Size,uStepsPerMicron,OpenLimits,RetValue)	\
    ( (This)->lpVtbl -> GetParams(This,type,Description,X_Size,Y_Size,uStepsPerMicron,OpenLimits,RetValue) ) 

#define IStage_SetParams(This,Description,X_Size,Y_Size,uStepsPerMicron,OpenLimits,RetValue)	\
    ( (This)->lpVtbl -> SetParams(This,Description,X_Size,Y_Size,uStepsPerMicron,OpenLimits,RetValue) ) 

#define IStage_GetPosition(This,XPos,YPos,RetValue)	\
    ( (This)->lpVtbl -> GetPosition(This,XPos,YPos,RetValue) ) 

#define IStage_MoveAtVelocity(This,XSpeed,YSpeed,RetValue)	\
    ( (This)->lpVtbl -> MoveAtVelocity(This,XSpeed,YSpeed,RetValue) ) 

#define IStage_MoveBack(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveBack(This,Distance,RetValue) ) 

#define IStage_MoveForward(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveForward(This,Distance,RetValue) ) 

#define IStage_MoveLeft(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveLeft(This,Distance,RetValue) ) 

#define IStage_MoveRelative(This,XPos,YPos,RetValue)	\
    ( (This)->lpVtbl -> MoveRelative(This,XPos,YPos,RetValue) ) 

#define IStage_MoveRight(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveRight(This,Distance,RetValue) ) 

#define IStage_MoveToAbsolute(This,XPos,YPos,RetValue)	\
    ( (This)->lpVtbl -> MoveToAbsolute(This,XPos,YPos,RetValue) ) 

#define IStage_MoveXToAbsolute(This,Position,RetValue)	\
    ( (This)->lpVtbl -> MoveXToAbsolute(This,Position,RetValue) ) 

#define IStage_MoveYToAbsolute(This,Position,RetValue)	\
    ( (This)->lpVtbl -> MoveYToAbsolute(This,Position,RetValue) ) 

#define IStage_SetPosition(This,XPos,YPos,RetValue)	\
    ( (This)->lpVtbl -> SetPosition(This,XPos,YPos,RetValue) ) 

#define IStage_SetCorrection(This,a,b,c,d,RetValue)	\
    ( (This)->lpVtbl -> SetCorrection(This,a,b,c,d,RetValue) ) 

#define IStage_get_CorrectionEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_CorrectionEnable(This,pVal) ) 

#define IStage_put_CorrectionEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_CorrectionEnable(This,newVal) ) 

#define IStage_MoveXAtVelocityUntilEncoderReference(This,Speed,RetValue)	\
    ( (This)->lpVtbl -> MoveXAtVelocityUntilEncoderReference(This,Speed,RetValue) ) 

#define IStage_MoveYAtVelocityUntilEncoderReference(This,Speed,RetValue)	\
    ( (This)->lpVtbl -> MoveYAtVelocityUntilEncoderReference(This,Speed,RetValue) ) 

#define IStage_SetReference(This,RetValue)	\
    ( (This)->lpVtbl -> SetReference(This,RetValue) ) 

#define IStage_RestoreReference(This,RetValue)	\
    ( (This)->lpVtbl -> RestoreReference(This,RetValue) ) 

#define IStage_get_SkewAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_SkewAngle(This,pVal) ) 

#define IStage_put_SkewAngle(This,newVal)	\
    ( (This)->lpVtbl -> put_SkewAngle(This,newVal) ) 

#define IStage_get_SkewEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SkewEnabled(This,pVal) ) 

#define IStage_put_SkewEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SkewEnabled(This,newVal) ) 

#define IStage_get_MappingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_MappingEnabled(This,pVal) ) 

#define IStage_put_MappingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_MappingEnabled(This,newVal) ) 

#define IStage_SkewAbout(This,RetValue)	\
    ( (This)->lpVtbl -> SkewAbout(This,RetValue) ) 

#define IStage_SkewSecond(This,RetValue)	\
    ( (This)->lpVtbl -> SkewSecond(This,RetValue) ) 

#define IStage_get_ReferenceDone(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceDone(This,pVal) ) 

#define IStage_get_JoystickState(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickState(This,pVal) ) 

#define IStage_put_JoystickState(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickState(This,newVal) ) 

#define IStage_RotateStageSlideHolder(This,direction,RetValue)	\
    ( (This)->lpVtbl -> RotateStageSlideHolder(This,direction,RetValue) ) 

#define IStage_get_RotateStageSlideHolderStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_RotateStageSlideHolderStatus(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStage_INTERFACE_DEFINED__ */


#ifndef __IZ_INTERFACE_DEFINED__
#define __IZ_INTERFACE_DEFINED__

/* interface IZ */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IZ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14A5E454-5289-46C0-BC94-DA7BC30C3077")
    IZ : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Curve( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Curve( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostBackLashDistance( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostBackLashDistance( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostBackLashEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostBackLashEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostDirection( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostDirection( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickBacklashDistance( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickBacklashDistance( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickBacklashEnable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickBacklashEnable( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoystickDirection( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JoystickDirection( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxAcceleration( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxAcceleration( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaximumJoystickSpeed( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaximumJoystickSpeed( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSpeed( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSpeed( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MicronsPerMotorRevolution( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MicronsPerMotorRevolution( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunningCurrent( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunningCurrent( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StandbyCurrent( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StandbyCurrent( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAtVelocity( 
            /* [in] */ double ZSpeed,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveDown( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveUp( 
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToAbsolute( 
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAtVelocityUntilEncoderReference( 
            /* [in] */ double ZSpeed,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetReference( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RestoreReference( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartAutoFocus( 
            /* [in] */ long range,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetActiveAutoFocusArea( 
            /* [in] */ long area,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUserActiveArea( 
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartUserDefinedAutoFocus( 
            /* [in] */ long delay,
            /* [in] */ long number,
            /* [in] */ long stepSize,
            /* [in] */ long divisor,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GreyInactiveArea( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GreyInactiveArea( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoFocusScore( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoFocusScore( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GreyIntensity( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GreyIntensity( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultRangeForFireButton( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultRangeForFireButton( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFocusScore( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentFocusScore( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReferenceMark( 
            /* [out] */ LONG *found,
            /* [out] */ DOUBLE *position,
            /* [retval][out] */ LONG *RetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetZPlanePoint( 
            /* [in] */ LONG point,
            /* [retval][out] */ LONG *RetVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZPlaneEnabled( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZPlaneEnabled( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IZVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZ * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZ * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZ * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZ * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZ * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZ * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZ * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Curve )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Curve )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostBackLashDistance )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostBackLashDistance )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostBackLashEnable )( 
            IZ * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostBackLashEnable )( 
            IZ * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostDirection )( 
            IZ * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostDirection )( 
            IZ * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickBacklashDistance )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickBacklashDistance )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickBacklashEnable )( 
            IZ * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickBacklashEnable )( 
            IZ * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JoystickDirection )( 
            IZ * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JoystickDirection )( 
            IZ * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAcceleration )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxAcceleration )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximumJoystickSpeed )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximumJoystickSpeed )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSpeed )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSpeed )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MicronsPerMotorRevolution )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MicronsPerMotorRevolution )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunningCurrent )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunningCurrent )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandbyCurrent )( 
            IZ * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StandbyCurrent )( 
            IZ * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAtVelocity )( 
            IZ * This,
            /* [in] */ double ZSpeed,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveDown )( 
            IZ * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveUp )( 
            IZ * This,
            /* [in] */ double Distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToAbsolute )( 
            IZ * This,
            /* [in] */ double ZPos,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAtVelocityUntilEncoderReference )( 
            IZ * This,
            /* [in] */ double ZSpeed,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetReference )( 
            IZ * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RestoreReference )( 
            IZ * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartAutoFocus )( 
            IZ * This,
            /* [in] */ long range,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetActiveAutoFocusArea )( 
            IZ * This,
            /* [in] */ long area,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUserActiveArea )( 
            IZ * This,
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartUserDefinedAutoFocus )( 
            IZ * This,
            /* [in] */ long delay,
            /* [in] */ long number,
            /* [in] */ long stepSize,
            /* [in] */ long divisor,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GreyInactiveArea )( 
            IZ * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GreyInactiveArea )( 
            IZ * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoFocusScore )( 
            IZ * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoFocusScore )( 
            IZ * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GreyIntensity )( 
            IZ * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GreyIntensity )( 
            IZ * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultRangeForFireButton )( 
            IZ * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultRangeForFireButton )( 
            IZ * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFocusScore )( 
            IZ * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentFocusScore )( 
            IZ * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReferenceMark )( 
            IZ * This,
            /* [out] */ LONG *found,
            /* [out] */ DOUBLE *position,
            /* [retval][out] */ LONG *RetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetZPlanePoint )( 
            IZ * This,
            /* [in] */ LONG point,
            /* [retval][out] */ LONG *RetVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZPlaneEnabled )( 
            IZ * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZPlaneEnabled )( 
            IZ * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IZVtbl;

    interface IZ
    {
        CONST_VTBL struct IZVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZ_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZ_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZ_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZ_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZ_get_Curve(This,pVal)	\
    ( (This)->lpVtbl -> get_Curve(This,pVal) ) 

#define IZ_put_Curve(This,newVal)	\
    ( (This)->lpVtbl -> put_Curve(This,newVal) ) 

#define IZ_get_HostBackLashDistance(This,pVal)	\
    ( (This)->lpVtbl -> get_HostBackLashDistance(This,pVal) ) 

#define IZ_put_HostBackLashDistance(This,newVal)	\
    ( (This)->lpVtbl -> put_HostBackLashDistance(This,newVal) ) 

#define IZ_get_HostBackLashEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_HostBackLashEnable(This,pVal) ) 

#define IZ_put_HostBackLashEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_HostBackLashEnable(This,newVal) ) 

#define IZ_get_HostDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_HostDirection(This,pVal) ) 

#define IZ_put_HostDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_HostDirection(This,newVal) ) 

#define IZ_get_JoystickBacklashDistance(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickBacklashDistance(This,pVal) ) 

#define IZ_put_JoystickBacklashDistance(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickBacklashDistance(This,newVal) ) 

#define IZ_get_JoystickBacklashEnable(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickBacklashEnable(This,pVal) ) 

#define IZ_put_JoystickBacklashEnable(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickBacklashEnable(This,newVal) ) 

#define IZ_get_JoystickDirection(This,pVal)	\
    ( (This)->lpVtbl -> get_JoystickDirection(This,pVal) ) 

#define IZ_put_JoystickDirection(This,newVal)	\
    ( (This)->lpVtbl -> put_JoystickDirection(This,newVal) ) 

#define IZ_get_MaxAcceleration(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxAcceleration(This,pVal) ) 

#define IZ_put_MaxAcceleration(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxAcceleration(This,newVal) ) 

#define IZ_get_MaximumJoystickSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_MaximumJoystickSpeed(This,pVal) ) 

#define IZ_put_MaximumJoystickSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_MaximumJoystickSpeed(This,newVal) ) 

#define IZ_get_MaxSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxSpeed(This,pVal) ) 

#define IZ_put_MaxSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSpeed(This,newVal) ) 

#define IZ_get_MicronsPerMotorRevolution(This,pVal)	\
    ( (This)->lpVtbl -> get_MicronsPerMotorRevolution(This,pVal) ) 

#define IZ_put_MicronsPerMotorRevolution(This,newVal)	\
    ( (This)->lpVtbl -> put_MicronsPerMotorRevolution(This,newVal) ) 

#define IZ_get_Position(This,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,pVal) ) 

#define IZ_put_Position(This,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,newVal) ) 

#define IZ_get_RunningCurrent(This,pVal)	\
    ( (This)->lpVtbl -> get_RunningCurrent(This,pVal) ) 

#define IZ_put_RunningCurrent(This,newVal)	\
    ( (This)->lpVtbl -> put_RunningCurrent(This,newVal) ) 

#define IZ_get_StandbyCurrent(This,pVal)	\
    ( (This)->lpVtbl -> get_StandbyCurrent(This,pVal) ) 

#define IZ_put_StandbyCurrent(This,newVal)	\
    ( (This)->lpVtbl -> put_StandbyCurrent(This,newVal) ) 

#define IZ_MoveAtVelocity(This,ZSpeed,RetValue)	\
    ( (This)->lpVtbl -> MoveAtVelocity(This,ZSpeed,RetValue) ) 

#define IZ_MoveDown(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveDown(This,Distance,RetValue) ) 

#define IZ_MoveUp(This,Distance,RetValue)	\
    ( (This)->lpVtbl -> MoveUp(This,Distance,RetValue) ) 

#define IZ_MoveToAbsolute(This,ZPos,RetValue)	\
    ( (This)->lpVtbl -> MoveToAbsolute(This,ZPos,RetValue) ) 

#define IZ_MoveAtVelocityUntilEncoderReference(This,ZSpeed,RetValue)	\
    ( (This)->lpVtbl -> MoveAtVelocityUntilEncoderReference(This,ZSpeed,RetValue) ) 

#define IZ_SetReference(This,RetValue)	\
    ( (This)->lpVtbl -> SetReference(This,RetValue) ) 

#define IZ_RestoreReference(This,RetValue)	\
    ( (This)->lpVtbl -> RestoreReference(This,RetValue) ) 

#define IZ_StartAutoFocus(This,range,RetValue)	\
    ( (This)->lpVtbl -> StartAutoFocus(This,range,RetValue) ) 

#define IZ_SetActiveAutoFocusArea(This,area,RetValue)	\
    ( (This)->lpVtbl -> SetActiveAutoFocusArea(This,area,RetValue) ) 

#define IZ_SetUserActiveArea(This,left,top,right,bottom,RetValue)	\
    ( (This)->lpVtbl -> SetUserActiveArea(This,left,top,right,bottom,RetValue) ) 

#define IZ_StartUserDefinedAutoFocus(This,delay,number,stepSize,divisor,RetValue)	\
    ( (This)->lpVtbl -> StartUserDefinedAutoFocus(This,delay,number,stepSize,divisor,RetValue) ) 

#define IZ_get_GreyInactiveArea(This,pVal)	\
    ( (This)->lpVtbl -> get_GreyInactiveArea(This,pVal) ) 

#define IZ_put_GreyInactiveArea(This,newVal)	\
    ( (This)->lpVtbl -> put_GreyInactiveArea(This,newVal) ) 

#define IZ_get_AutoFocusScore(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoFocusScore(This,pVal) ) 

#define IZ_put_AutoFocusScore(This,newVal)	\
    ( (This)->lpVtbl -> put_AutoFocusScore(This,newVal) ) 

#define IZ_get_GreyIntensity(This,pVal)	\
    ( (This)->lpVtbl -> get_GreyIntensity(This,pVal) ) 

#define IZ_put_GreyIntensity(This,newVal)	\
    ( (This)->lpVtbl -> put_GreyIntensity(This,newVal) ) 

#define IZ_get_DefaultRangeForFireButton(This,pVal)	\
    ( (This)->lpVtbl -> get_DefaultRangeForFireButton(This,pVal) ) 

#define IZ_put_DefaultRangeForFireButton(This,newVal)	\
    ( (This)->lpVtbl -> put_DefaultRangeForFireButton(This,newVal) ) 

#define IZ_get_CurrentFocusScore(This,pVal)	\
    ( (This)->lpVtbl -> get_CurrentFocusScore(This,pVal) ) 

#define IZ_put_CurrentFocusScore(This,newVal)	\
    ( (This)->lpVtbl -> put_CurrentFocusScore(This,newVal) ) 

#define IZ_ReferenceMark(This,found,position,RetVal)	\
    ( (This)->lpVtbl -> ReferenceMark(This,found,position,RetVal) ) 

#define IZ_SetZPlanePoint(This,point,RetVal)	\
    ( (This)->lpVtbl -> SetZPlanePoint(This,point,RetVal) ) 

#define IZ_get_ZPlaneEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_ZPlaneEnabled(This,pVal) ) 

#define IZ_put_ZPlaneEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_ZPlaneEnabled(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZ_INTERFACE_DEFINED__ */


#ifndef __IFilter_INTERFACE_DEFINED__
#define __IFilter_INTERFACE_DEFINED__

/* interface IFilter */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DE4C57E-41C9-45FE-8CC1-FA7E637506C6")
    IFilter : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Curve( 
            long Wheel,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Curve( 
            long Wheel,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxAcceleration( 
            long Wheel,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxAcceleration( 
            long Wheel,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSpeed( 
            long Wheel,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSpeed( 
            long Wheel,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunningCurrent( 
            long Wheel,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunningCurrent( 
            long Wheel,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StandbyCurrent( 
            long Wheel,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StandbyCurrent( 
            long Wheel,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            long Wheel,
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            long Wheel,
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionsPerWheel( 
            long Wheel,
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionsPerWheel( 
            long Wheel,
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToNext( 
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToPrevious( 
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToPosition( 
            /* [in] */ long Wheel,
            /* [in] */ long Filter,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Home( 
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetYaxisAsFilter( 
            /* [in] */ int FilterType,
            /* [in] */ double FilterPulsesPerRev,
            /* [in] */ short NumberFiltersPerWheel,
            /* [in] */ double PositionOneOffset,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeOnStart( 
            long Wheel,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HomeOnStart( 
            long Wheel,
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAllToPosition( 
            /* [in] */ long fp1,
            /* [in] */ long fp2,
            /* [in] */ long fp3,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CloseShutterDuringMove( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CloseShutterDuringMove( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterTag( 
            /* [in] */ LONG wheel,
            /* [in] */ LONG filter,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterTag( 
            /* [in] */ LONG wheel,
            /* [in] */ LONG filter,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [in] */ LONG filter,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG wheel,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFilter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFilter * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Curve )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Curve )( 
            IFilter * This,
            long Wheel,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAcceleration )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxAcceleration )( 
            IFilter * This,
            long Wheel,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSpeed )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSpeed )( 
            IFilter * This,
            long Wheel,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunningCurrent )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunningCurrent )( 
            IFilter * This,
            long Wheel,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandbyCurrent )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StandbyCurrent )( 
            IFilter * This,
            long Wheel,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IFilter * This,
            long Wheel,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionsPerWheel )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionsPerWheel )( 
            IFilter * This,
            long Wheel,
            /* [in] */ short newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToNext )( 
            IFilter * This,
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToPrevious )( 
            IFilter * This,
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToPosition )( 
            IFilter * This,
            /* [in] */ long Wheel,
            /* [in] */ long Filter,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Home )( 
            IFilter * This,
            /* [in] */ long Wheel,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetYaxisAsFilter )( 
            IFilter * This,
            /* [in] */ int FilterType,
            /* [in] */ double FilterPulsesPerRev,
            /* [in] */ short NumberFiltersPerWheel,
            /* [in] */ double PositionOneOffset,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeOnStart )( 
            IFilter * This,
            long Wheel,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeOnStart )( 
            IFilter * This,
            long Wheel,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAllToPosition )( 
            IFilter * This,
            /* [in] */ long fp1,
            /* [in] */ long fp2,
            /* [in] */ long fp3,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CloseShutterDuringMove )( 
            IFilter * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CloseShutterDuringMove )( 
            IFilter * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterTag )( 
            IFilter * This,
            /* [in] */ LONG wheel,
            /* [in] */ LONG filter,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterTag )( 
            IFilter * This,
            /* [in] */ LONG wheel,
            /* [in] */ LONG filter,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            IFilter * This,
            /* [in] */ LONG filter,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFilter * This,
            /* [in] */ LONG wheel,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IFilterVtbl;

    interface IFilter
    {
        CONST_VTBL struct IFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFilter_get_Curve(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_Curve(This,Wheel,pVal) ) 

#define IFilter_put_Curve(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_Curve(This,Wheel,newVal) ) 

#define IFilter_get_MaxAcceleration(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_MaxAcceleration(This,Wheel,pVal) ) 

#define IFilter_put_MaxAcceleration(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_MaxAcceleration(This,Wheel,newVal) ) 

#define IFilter_get_MaxSpeed(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_MaxSpeed(This,Wheel,pVal) ) 

#define IFilter_put_MaxSpeed(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_MaxSpeed(This,Wheel,newVal) ) 

#define IFilter_get_RunningCurrent(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_RunningCurrent(This,Wheel,pVal) ) 

#define IFilter_put_RunningCurrent(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_RunningCurrent(This,Wheel,newVal) ) 

#define IFilter_get_StandbyCurrent(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_StandbyCurrent(This,Wheel,pVal) ) 

#define IFilter_put_StandbyCurrent(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_StandbyCurrent(This,Wheel,newVal) ) 

#define IFilter_get_Position(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,Wheel,pVal) ) 

#define IFilter_put_Position(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,Wheel,newVal) ) 

#define IFilter_get_PositionsPerWheel(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_PositionsPerWheel(This,Wheel,pVal) ) 

#define IFilter_put_PositionsPerWheel(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_PositionsPerWheel(This,Wheel,newVal) ) 

#define IFilter_MoveToNext(This,Wheel,RetValue)	\
    ( (This)->lpVtbl -> MoveToNext(This,Wheel,RetValue) ) 

#define IFilter_MoveToPrevious(This,Wheel,RetValue)	\
    ( (This)->lpVtbl -> MoveToPrevious(This,Wheel,RetValue) ) 

#define IFilter_MoveToPosition(This,Wheel,Filter,RetValue)	\
    ( (This)->lpVtbl -> MoveToPosition(This,Wheel,Filter,RetValue) ) 

#define IFilter_Home(This,Wheel,RetValue)	\
    ( (This)->lpVtbl -> Home(This,Wheel,RetValue) ) 

#define IFilter_SetYaxisAsFilter(This,FilterType,FilterPulsesPerRev,NumberFiltersPerWheel,PositionOneOffset,RetValue)	\
    ( (This)->lpVtbl -> SetYaxisAsFilter(This,FilterType,FilterPulsesPerRev,NumberFiltersPerWheel,PositionOneOffset,RetValue) ) 

#define IFilter_get_HomeOnStart(This,Wheel,pVal)	\
    ( (This)->lpVtbl -> get_HomeOnStart(This,Wheel,pVal) ) 

#define IFilter_put_HomeOnStart(This,Wheel,newVal)	\
    ( (This)->lpVtbl -> put_HomeOnStart(This,Wheel,newVal) ) 

#define IFilter_MoveAllToPosition(This,fp1,fp2,fp3,RetValue)	\
    ( (This)->lpVtbl -> MoveAllToPosition(This,fp1,fp2,fp3,RetValue) ) 

#define IFilter_get_CloseShutterDuringMove(This,pVal)	\
    ( (This)->lpVtbl -> get_CloseShutterDuringMove(This,pVal) ) 

#define IFilter_put_CloseShutterDuringMove(This,newVal)	\
    ( (This)->lpVtbl -> put_CloseShutterDuringMove(This,newVal) ) 

#define IFilter_get_FilterTag(This,wheel,filter,pVal)	\
    ( (This)->lpVtbl -> get_FilterTag(This,wheel,filter,pVal) ) 

#define IFilter_put_FilterTag(This,wheel,filter,newVal)	\
    ( (This)->lpVtbl -> put_FilterTag(This,wheel,filter,newVal) ) 

#define IFilter_get_IsFitted(This,filter,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,filter,pVal) ) 

#define IFilter_get_Name(This,wheel,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,wheel,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilter_INTERFACE_DEFINED__ */


#ifndef __ITTL_INTERFACE_DEFINED__
#define __ITTL_INTERFACE_DEFINED__

/* interface ITTL */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITTL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9124A2AE-6C1F-4331-8851-407C4C9D5335")
    ITTL : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Input( 
            short Bit,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            short Bit,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Output( 
            short Bit,
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteTriggers( 
            short Bit,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RestartTriggers( 
            short Bit,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAction( 
            short Bit,
            long CMD,
            double data1,
            double data2,
            double data3,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrigger( 
            short Bit,
            long HiLo,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InMotionTTL( 
            short Bit,
            long HiLo,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Trigger( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITTLVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITTL * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITTL * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITTL * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITTL * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITTL * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITTL * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITTL * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Input )( 
            ITTL * This,
            short Bit,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            ITTL * This,
            short Bit,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Output )( 
            ITTL * This,
            short Bit,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteTriggers )( 
            ITTL * This,
            short Bit,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RestartTriggers )( 
            ITTL * This,
            short Bit,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAction )( 
            ITTL * This,
            short Bit,
            long CMD,
            double data1,
            double data2,
            double data3,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrigger )( 
            ITTL * This,
            short Bit,
            long HiLo,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InMotionTTL )( 
            ITTL * This,
            short Bit,
            long HiLo,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            ITTL * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Trigger )( 
            ITTL * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ITTLVtbl;

    interface ITTL
    {
        CONST_VTBL struct ITTLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITTL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITTL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITTL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITTL_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITTL_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITTL_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITTL_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITTL_get_Input(This,Bit,pVal)	\
    ( (This)->lpVtbl -> get_Input(This,Bit,pVal) ) 

#define ITTL_get_Output(This,Bit,pVal)	\
    ( (This)->lpVtbl -> get_Output(This,Bit,pVal) ) 

#define ITTL_put_Output(This,Bit,newVal)	\
    ( (This)->lpVtbl -> put_Output(This,Bit,newVal) ) 

#define ITTL_DeleteTriggers(This,Bit,RetValue)	\
    ( (This)->lpVtbl -> DeleteTriggers(This,Bit,RetValue) ) 

#define ITTL_RestartTriggers(This,Bit,RetValue)	\
    ( (This)->lpVtbl -> RestartTriggers(This,Bit,RetValue) ) 

#define ITTL_AddAction(This,Bit,CMD,data1,data2,data3,RetValue)	\
    ( (This)->lpVtbl -> AddAction(This,Bit,CMD,data1,data2,data3,RetValue) ) 

#define ITTL_AddTrigger(This,Bit,HiLo,RetValue)	\
    ( (This)->lpVtbl -> AddTrigger(This,Bit,HiLo,RetValue) ) 

#define ITTL_InMotionTTL(This,Bit,HiLo,RetValue)	\
    ( (This)->lpVtbl -> InMotionTTL(This,Bit,HiLo,RetValue) ) 

#define ITTL_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#define ITTL_put_Trigger(This,newVal)	\
    ( (This)->lpVtbl -> put_Trigger(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITTL_INTERFACE_DEFINED__ */


#ifndef __IPiezo_INTERFACE_DEFINED__
#define __IPiezo_INTERFACE_DEFINED__

/* interface IPiezo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPiezo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0052387E-D36C-4AAE-8E15-61EFC47768B9")
    IPiezo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StepSize( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StepSize( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToAbsolute( 
            double position,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveUp( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveDown( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsMoving( 
            /* [out] */ long *Status,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveRelative( 
            double distance,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UseCommPort( 
            long *port,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PiezoRange( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PiezoRange( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPiezoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPiezo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPiezo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPiezo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPiezo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPiezo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPiezo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPiezo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StepSize )( 
            IPiezo * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StepSize )( 
            IPiezo * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IPiezo * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IPiezo * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToAbsolute )( 
            IPiezo * This,
            double position,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveUp )( 
            IPiezo * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveDown )( 
            IPiezo * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsMoving )( 
            IPiezo * This,
            /* [out] */ long *Status,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveRelative )( 
            IPiezo * This,
            double distance,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UseCommPort )( 
            IPiezo * This,
            long *port,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            IPiezo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PiezoRange )( 
            IPiezo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PiezoRange )( 
            IPiezo * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IPiezoVtbl;

    interface IPiezo
    {
        CONST_VTBL struct IPiezoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPiezo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPiezo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPiezo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPiezo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPiezo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPiezo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPiezo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPiezo_get_StepSize(This,pVal)	\
    ( (This)->lpVtbl -> get_StepSize(This,pVal) ) 

#define IPiezo_put_StepSize(This,newVal)	\
    ( (This)->lpVtbl -> put_StepSize(This,newVal) ) 

#define IPiezo_get_Position(This,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,pVal) ) 

#define IPiezo_put_Position(This,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,newVal) ) 

#define IPiezo_MoveToAbsolute(This,position,RetValue)	\
    ( (This)->lpVtbl -> MoveToAbsolute(This,position,RetValue) ) 

#define IPiezo_MoveUp(This,RetValue)	\
    ( (This)->lpVtbl -> MoveUp(This,RetValue) ) 

#define IPiezo_MoveDown(This,RetValue)	\
    ( (This)->lpVtbl -> MoveDown(This,RetValue) ) 

#define IPiezo_IsMoving(This,Status,RetValue)	\
    ( (This)->lpVtbl -> IsMoving(This,Status,RetValue) ) 

#define IPiezo_MoveRelative(This,distance,RetValue)	\
    ( (This)->lpVtbl -> MoveRelative(This,distance,RetValue) ) 

#define IPiezo_UseCommPort(This,port,RetValue)	\
    ( (This)->lpVtbl -> UseCommPort(This,port,RetValue) ) 

#define IPiezo_get_IsFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,pVal) ) 

#define IPiezo_get_PiezoRange(This,pVal)	\
    ( (This)->lpVtbl -> get_PiezoRange(This,pVal) ) 

#define IPiezo_put_PiezoRange(This,newVal)	\
    ( (This)->lpVtbl -> put_PiezoRange(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPiezo_INTERFACE_DEFINED__ */


#ifndef __ITheta_INTERFACE_DEFINED__
#define __ITheta_INTERFACE_DEFINED__

/* interface ITheta */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITheta;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44B71E3E-58E9-440C-A324-5D008813C774")
    ITheta : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFitted( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Angle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Angle( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseYjoystickAsTheta( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseYjoystickAsTheta( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToAngle( 
            double angle,
            /* [retval][out] */ long *RetValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThetaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITheta * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITheta * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITheta * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITheta * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITheta * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITheta * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITheta * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            ITheta * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFitted )( 
            ITheta * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Angle )( 
            ITheta * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Angle )( 
            ITheta * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseYjoystickAsTheta )( 
            ITheta * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseYjoystickAsTheta )( 
            ITheta * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToAngle )( 
            ITheta * This,
            double angle,
            /* [retval][out] */ long *RetValue);
        
        END_INTERFACE
    } IThetaVtbl;

    interface ITheta
    {
        CONST_VTBL struct IThetaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITheta_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITheta_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITheta_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITheta_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITheta_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITheta_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITheta_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITheta_get_IsFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,pVal) ) 

#define ITheta_put_IsFitted(This,newVal)	\
    ( (This)->lpVtbl -> put_IsFitted(This,newVal) ) 

#define ITheta_get_Angle(This,pVal)	\
    ( (This)->lpVtbl -> get_Angle(This,pVal) ) 

#define ITheta_put_Angle(This,newVal)	\
    ( (This)->lpVtbl -> put_Angle(This,newVal) ) 

#define ITheta_get_UseYjoystickAsTheta(This,pVal)	\
    ( (This)->lpVtbl -> get_UseYjoystickAsTheta(This,pVal) ) 

#define ITheta_put_UseYjoystickAsTheta(This,newVal)	\
    ( (This)->lpVtbl -> put_UseYjoystickAsTheta(This,newVal) ) 

#define ITheta_MoveToAngle(This,angle,RetValue)	\
    ( (This)->lpVtbl -> MoveToAngle(This,angle,RetValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITheta_INTERFACE_DEFINED__ */


#ifndef __IShuttle_INTERFACE_DEFINED__
#define __IShuttle_INTERFACE_DEFINED__

/* interface IShuttle */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IShuttle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27FAFF98-C324-4BC5-92E0-43481CCB1E3A")
    IShuttle : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VacuumDetected( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VacuumState( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VacuumState( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsInline( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSpeed( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSpeed( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHomePosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RecordHomePosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLoadPosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RecordLoadPosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToHomePosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToLoadPosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VacuumWait( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VacuumWait( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShuttleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShuttle * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShuttle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShuttle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShuttle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShuttle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShuttle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShuttle * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFitted )( 
            IShuttle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VacuumDetected )( 
            IShuttle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VacuumState )( 
            IShuttle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VacuumState )( 
            IShuttle * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInline )( 
            IShuttle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSpeed )( 
            IShuttle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSpeed )( 
            IShuttle * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHomePosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RecordHomePosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLoadPosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RecordLoadPosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToHomePosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToLoadPosition )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            IShuttle * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VacuumWait )( 
            IShuttle * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VacuumWait )( 
            IShuttle * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IShuttleVtbl;

    interface IShuttle
    {
        CONST_VTBL struct IShuttleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShuttle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShuttle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShuttle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShuttle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShuttle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShuttle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShuttle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShuttle_get_IsFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFitted(This,pVal) ) 

#define IShuttle_get_VacuumDetected(This,pVal)	\
    ( (This)->lpVtbl -> get_VacuumDetected(This,pVal) ) 

#define IShuttle_get_VacuumState(This,pVal)	\
    ( (This)->lpVtbl -> get_VacuumState(This,pVal) ) 

#define IShuttle_put_VacuumState(This,newVal)	\
    ( (This)->lpVtbl -> put_VacuumState(This,newVal) ) 

#define IShuttle_get_IsInline(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInline(This,pVal) ) 

#define IShuttle_get_MaxSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxSpeed(This,pVal) ) 

#define IShuttle_put_MaxSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSpeed(This,newVal) ) 

#define IShuttle_SetHomePosition(This,RetValue)	\
    ( (This)->lpVtbl -> SetHomePosition(This,RetValue) ) 

#define IShuttle_RecordHomePosition(This,RetValue)	\
    ( (This)->lpVtbl -> RecordHomePosition(This,RetValue) ) 

#define IShuttle_SetLoadPosition(This,RetValue)	\
    ( (This)->lpVtbl -> SetLoadPosition(This,RetValue) ) 

#define IShuttle_RecordLoadPosition(This,RetValue)	\
    ( (This)->lpVtbl -> RecordLoadPosition(This,RetValue) ) 

#define IShuttle_MoveToHomePosition(This,RetValue)	\
    ( (This)->lpVtbl -> MoveToHomePosition(This,RetValue) ) 

#define IShuttle_MoveToLoadPosition(This,RetValue)	\
    ( (This)->lpVtbl -> MoveToLoadPosition(This,RetValue) ) 

#define IShuttle_Initialise(This,RetValue)	\
    ( (This)->lpVtbl -> Initialise(This,RetValue) ) 

#define IShuttle_get_VacuumWait(This,pVal)	\
    ( (This)->lpVtbl -> get_VacuumWait(This,pVal) ) 

#define IShuttle_put_VacuumWait(This,newVal)	\
    ( (This)->lpVtbl -> put_VacuumWait(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShuttle_INTERFACE_DEFINED__ */


#ifndef __ISlideLoader_INTERFACE_DEFINED__
#define __ISlideLoader_INTERFACE_DEFINED__

/* interface ISlideLoader */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISlideLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B0676AF-198B-4150-AEFF-9E58DA91D460")
    ISlideLoader : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [out][in] */ long *Port,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisConnect( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScanCassette( 
            long Cassette,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToStage( 
            long fromCassette,
            long fromSlide,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFromStage( 
            long toCassette,
            long toSlide,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFromTo( 
            long fromCassette,
            long fromSlide,
            long toCassette,
            long toSlide,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CassettesFitted( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupCassette1Slide1Position( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupStageLoadPosition( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupComplete( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlideFitted( 
            long Cassette,
            long Slide,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveXAtVelocity( 
            long velocity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveYAtVelocity( 
            long velocity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveZAtVelocity( 
            long velocity) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarCode( 
            long Cassette,
            long Slide,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlideUsed( 
            long Cassette,
            long Slide,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScanBarCode( 
            long Cassette,
            long Slide,
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DecoupleStageFromLoader( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DecoupleStageFromLoader( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepDebugMode( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepDebugMode( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SingleStepDebug( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepDebugModeSpeed( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepDebugModeSpeed( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDirectoryToBeUsedForIniFile( 
            BSTR InifilePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ForceSlideAsFitted( 
            /* [in] */ long Cassette,
            /* [in] */ long slide,
            /* [retval][out] */ long *RetVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StalledAxis( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupCassette2Slide1Position( 
            /* [retval][out] */ long *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupCassette3Slide1Position( 
            /* [retval][out] */ long *RetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupCassette4Slide1Position( 
            /* [retval][out] */ long *RetVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarCodeReaderFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControllerFirmwareVersion( 
            long Axis,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MechanicalNotOpticalSlideScanning( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MechanicalNotOpticalSlideScanning( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PollInMotionStatus( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PollInMotionStatus( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CassettesScanned( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParkOption( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ParkOption( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkipCassette1Slide1Position( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkipCassette2Slide1Position( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkipCassette3Slide1Position( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SkipCassette4Slide1Position( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_wayPointState( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_wayPointState( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LastError( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReloadSetup( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAsWayPoint( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CALI( 
            /* [in] */ LONG offset,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CALI( 
            /* [in] */ LONG offset,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AxisPosition( 
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MotorOnOff( 
            LONG axis,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MotorOnOff( 
            LONG axis,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YaxisHallEffectPosition( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YaxisHallEffectPosition( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveTo( 
            /* [in] */ LONG axis,
            /* [in] */ LONG pos) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsBusy( 
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_robotType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_robotType( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISlideLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISlideLoader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISlideLoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISlideLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISlideLoader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISlideLoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISlideLoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISlideLoader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISlideLoader * This,
            /* [out][in] */ long *Port,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisConnect )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ISlideLoader * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanCassette )( 
            ISlideLoader * This,
            long Cassette,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToStage )( 
            ISlideLoader * This,
            long fromCassette,
            long fromSlide,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFromStage )( 
            ISlideLoader * This,
            long toCassette,
            long toSlide,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFromTo )( 
            ISlideLoader * This,
            long fromCassette,
            long fromSlide,
            long toCassette,
            long toSlide,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CassettesFitted )( 
            ISlideLoader * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupCassette1Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupStageLoadPosition )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupComplete )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SlideFitted )( 
            ISlideLoader * This,
            long Cassette,
            long Slide,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveXAtVelocity )( 
            ISlideLoader * This,
            long velocity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveYAtVelocity )( 
            ISlideLoader * This,
            long velocity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveZAtVelocity )( 
            ISlideLoader * This,
            long velocity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BarCode )( 
            ISlideLoader * This,
            long Cassette,
            long Slide,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SlideUsed )( 
            ISlideLoader * This,
            long Cassette,
            long Slide,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanBarCode )( 
            ISlideLoader * This,
            long Cassette,
            long Slide,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DecoupleStageFromLoader )( 
            ISlideLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DecoupleStageFromLoader )( 
            ISlideLoader * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepDebugMode )( 
            ISlideLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepDebugMode )( 
            ISlideLoader * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SingleStepDebug )( 
            ISlideLoader * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepDebugModeSpeed )( 
            ISlideLoader * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepDebugModeSpeed )( 
            ISlideLoader * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDirectoryToBeUsedForIniFile )( 
            ISlideLoader * This,
            BSTR InifilePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ForceSlideAsFitted )( 
            ISlideLoader * This,
            /* [in] */ long Cassette,
            /* [in] */ long slide,
            /* [retval][out] */ long *RetVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StalledAxis )( 
            ISlideLoader * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupCassette2Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupCassette3Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupCassette4Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ long *RetVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BarCodeReaderFitted )( 
            ISlideLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControllerFirmwareVersion )( 
            ISlideLoader * This,
            long Axis,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MechanicalNotOpticalSlideScanning )( 
            ISlideLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MechanicalNotOpticalSlideScanning )( 
            ISlideLoader * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PollInMotionStatus )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PollInMotionStatus )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CassettesScanned )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParkOption )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParkOption )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkipCassette1Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkipCassette2Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkipCassette3Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SkipCassette4Slide1Position )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wayPointState )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_wayPointState )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastError )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReloadSetup )( 
            ISlideLoader * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAsWayPoint )( 
            ISlideLoader * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CALI )( 
            ISlideLoader * This,
            /* [in] */ LONG offset,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CALI )( 
            ISlideLoader * This,
            /* [in] */ LONG offset,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AxisPosition )( 
            ISlideLoader * This,
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MotorOnOff )( 
            ISlideLoader * This,
            LONG axis,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MotorOnOff )( 
            ISlideLoader * This,
            LONG axis,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YaxisHallEffectPosition )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YaxisHallEffectPosition )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveTo )( 
            ISlideLoader * This,
            /* [in] */ LONG axis,
            /* [in] */ LONG pos);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsBusy )( 
            ISlideLoader * This,
            /* [in] */ LONG axis,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_robotType )( 
            ISlideLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_robotType )( 
            ISlideLoader * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISlideLoaderVtbl;

    interface ISlideLoader
    {
        CONST_VTBL struct ISlideLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISlideLoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISlideLoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISlideLoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISlideLoader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISlideLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISlideLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISlideLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISlideLoader_Connect(This,Port,RetValue)	\
    ( (This)->lpVtbl -> Connect(This,Port,RetValue) ) 

#define ISlideLoader_DisConnect(This,RetValue)	\
    ( (This)->lpVtbl -> DisConnect(This,RetValue) ) 

#define ISlideLoader_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define ISlideLoader_ScanCassette(This,Cassette,RetValue)	\
    ( (This)->lpVtbl -> ScanCassette(This,Cassette,RetValue) ) 

#define ISlideLoader_MoveToStage(This,fromCassette,fromSlide,RetValue)	\
    ( (This)->lpVtbl -> MoveToStage(This,fromCassette,fromSlide,RetValue) ) 

#define ISlideLoader_MoveFromStage(This,toCassette,toSlide,RetValue)	\
    ( (This)->lpVtbl -> MoveFromStage(This,toCassette,toSlide,RetValue) ) 

#define ISlideLoader_MoveFromTo(This,fromCassette,fromSlide,toCassette,toSlide,RetValue)	\
    ( (This)->lpVtbl -> MoveFromTo(This,fromCassette,fromSlide,toCassette,toSlide,RetValue) ) 

#define ISlideLoader_Stop(This,RetValue)	\
    ( (This)->lpVtbl -> Stop(This,RetValue) ) 

#define ISlideLoader_Initialise(This,RetValue)	\
    ( (This)->lpVtbl -> Initialise(This,RetValue) ) 

#define ISlideLoader_get_CassettesFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_CassettesFitted(This,pVal) ) 

#define ISlideLoader_SetupCassette1Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SetupCassette1Slide1Position(This,RetValue) ) 

#define ISlideLoader_SetupStageLoadPosition(This,RetValue)	\
    ( (This)->lpVtbl -> SetupStageLoadPosition(This,RetValue) ) 

#define ISlideLoader_SetupComplete(This,RetValue)	\
    ( (This)->lpVtbl -> SetupComplete(This,RetValue) ) 

#define ISlideLoader_get_SlideFitted(This,Cassette,Slide,pVal)	\
    ( (This)->lpVtbl -> get_SlideFitted(This,Cassette,Slide,pVal) ) 

#define ISlideLoader_MoveXAtVelocity(This,velocity)	\
    ( (This)->lpVtbl -> MoveXAtVelocity(This,velocity) ) 

#define ISlideLoader_MoveYAtVelocity(This,velocity)	\
    ( (This)->lpVtbl -> MoveYAtVelocity(This,velocity) ) 

#define ISlideLoader_MoveZAtVelocity(This,velocity)	\
    ( (This)->lpVtbl -> MoveZAtVelocity(This,velocity) ) 

#define ISlideLoader_get_BarCode(This,Cassette,Slide,pVal)	\
    ( (This)->lpVtbl -> get_BarCode(This,Cassette,Slide,pVal) ) 

#define ISlideLoader_get_SlideUsed(This,Cassette,Slide,pVal)	\
    ( (This)->lpVtbl -> get_SlideUsed(This,Cassette,Slide,pVal) ) 

#define ISlideLoader_ScanBarCode(This,Cassette,Slide,RetValue)	\
    ( (This)->lpVtbl -> ScanBarCode(This,Cassette,Slide,RetValue) ) 

#define ISlideLoader_get_DecoupleStageFromLoader(This,pVal)	\
    ( (This)->lpVtbl -> get_DecoupleStageFromLoader(This,pVal) ) 

#define ISlideLoader_put_DecoupleStageFromLoader(This,newVal)	\
    ( (This)->lpVtbl -> put_DecoupleStageFromLoader(This,newVal) ) 

#define ISlideLoader_get_SingleStepDebugMode(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepDebugMode(This,pVal) ) 

#define ISlideLoader_put_SingleStepDebugMode(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepDebugMode(This,newVal) ) 

#define ISlideLoader_SingleStepDebug(This)	\
    ( (This)->lpVtbl -> SingleStepDebug(This) ) 

#define ISlideLoader_get_SingleStepDebugModeSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepDebugModeSpeed(This,pVal) ) 

#define ISlideLoader_put_SingleStepDebugModeSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepDebugModeSpeed(This,newVal) ) 

#define ISlideLoader_SetDirectoryToBeUsedForIniFile(This,InifilePath)	\
    ( (This)->lpVtbl -> SetDirectoryToBeUsedForIniFile(This,InifilePath) ) 

#define ISlideLoader_ForceSlideAsFitted(This,Cassette,slide,RetVal)	\
    ( (This)->lpVtbl -> ForceSlideAsFitted(This,Cassette,slide,RetVal) ) 

#define ISlideLoader_get_StalledAxis(This,pVal)	\
    ( (This)->lpVtbl -> get_StalledAxis(This,pVal) ) 

#define ISlideLoader_SetupCassette2Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SetupCassette2Slide1Position(This,RetValue) ) 

#define ISlideLoader_SetupCassette3Slide1Position(This,RetVal)	\
    ( (This)->lpVtbl -> SetupCassette3Slide1Position(This,RetVal) ) 

#define ISlideLoader_SetupCassette4Slide1Position(This,RetVal)	\
    ( (This)->lpVtbl -> SetupCassette4Slide1Position(This,RetVal) ) 

#define ISlideLoader_get_BarCodeReaderFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_BarCodeReaderFitted(This,pVal) ) 

#define ISlideLoader_get_ControllerFirmwareVersion(This,Axis,pVal)	\
    ( (This)->lpVtbl -> get_ControllerFirmwareVersion(This,Axis,pVal) ) 

#define ISlideLoader_get_MechanicalNotOpticalSlideScanning(This,pVal)	\
    ( (This)->lpVtbl -> get_MechanicalNotOpticalSlideScanning(This,pVal) ) 

#define ISlideLoader_put_MechanicalNotOpticalSlideScanning(This,newVal)	\
    ( (This)->lpVtbl -> put_MechanicalNotOpticalSlideScanning(This,newVal) ) 

#define ISlideLoader_get_PollInMotionStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_PollInMotionStatus(This,pVal) ) 

#define ISlideLoader_put_PollInMotionStatus(This,newVal)	\
    ( (This)->lpVtbl -> put_PollInMotionStatus(This,newVal) ) 

#define ISlideLoader_get_CassettesScanned(This,pVal)	\
    ( (This)->lpVtbl -> get_CassettesScanned(This,pVal) ) 

#define ISlideLoader_get_ParkOption(This,pVal)	\
    ( (This)->lpVtbl -> get_ParkOption(This,pVal) ) 

#define ISlideLoader_put_ParkOption(This,newVal)	\
    ( (This)->lpVtbl -> put_ParkOption(This,newVal) ) 

#define ISlideLoader_SkipCassette1Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SkipCassette1Slide1Position(This,RetValue) ) 

#define ISlideLoader_SkipCassette2Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SkipCassette2Slide1Position(This,RetValue) ) 

#define ISlideLoader_SkipCassette3Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SkipCassette3Slide1Position(This,RetValue) ) 

#define ISlideLoader_SkipCassette4Slide1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SkipCassette4Slide1Position(This,RetValue) ) 

#define ISlideLoader_get_wayPointState(This,pVal)	\
    ( (This)->lpVtbl -> get_wayPointState(This,pVal) ) 

#define ISlideLoader_put_wayPointState(This,newVal)	\
    ( (This)->lpVtbl -> put_wayPointState(This,newVal) ) 

#define ISlideLoader_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISlideLoader_put_LastError(This,newVal)	\
    ( (This)->lpVtbl -> put_LastError(This,newVal) ) 

#define ISlideLoader_ReloadSetup(This)	\
    ( (This)->lpVtbl -> ReloadSetup(This) ) 

#define ISlideLoader_SetAsWayPoint(This)	\
    ( (This)->lpVtbl -> SetAsWayPoint(This) ) 

#define ISlideLoader_get_CALI(This,offset,pVal)	\
    ( (This)->lpVtbl -> get_CALI(This,offset,pVal) ) 

#define ISlideLoader_put_CALI(This,offset,newVal)	\
    ( (This)->lpVtbl -> put_CALI(This,offset,newVal) ) 

#define ISlideLoader_get_AxisPosition(This,axis,pVal)	\
    ( (This)->lpVtbl -> get_AxisPosition(This,axis,pVal) ) 

#define ISlideLoader_get_MotorOnOff(This,axis,pVal)	\
    ( (This)->lpVtbl -> get_MotorOnOff(This,axis,pVal) ) 

#define ISlideLoader_put_MotorOnOff(This,axis,newVal)	\
    ( (This)->lpVtbl -> put_MotorOnOff(This,axis,newVal) ) 

#define ISlideLoader_get_YaxisHallEffectPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_YaxisHallEffectPosition(This,pVal) ) 

#define ISlideLoader_put_YaxisHallEffectPosition(This,newVal)	\
    ( (This)->lpVtbl -> put_YaxisHallEffectPosition(This,newVal) ) 

#define ISlideLoader_MoveTo(This,axis,pos)	\
    ( (This)->lpVtbl -> MoveTo(This,axis,pos) ) 

#define ISlideLoader_get_IsBusy(This,axis,pVal)	\
    ( (This)->lpVtbl -> get_IsBusy(This,axis,pVal) ) 

#define ISlideLoader_get_robotType(This,pVal)	\
    ( (This)->lpVtbl -> get_robotType(This,pVal) ) 

#define ISlideLoader_put_robotType(This,newVal)	\
    ( (This)->lpVtbl -> put_robotType(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISlideLoader_INTERFACE_DEFINED__ */


#ifndef __IWellPlateLoader_INTERFACE_DEFINED__
#define __IWellPlateLoader_INTERFACE_DEFINED__

/* interface IWellPlateLoader */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWellPlateLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F62F70C2-53B9-4FDF-8E07-16E1C4D341D6")
    IWellPlateLoader : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [out][in] */ LONG *Port,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisConnect( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToStage( 
            /* [in] */ LONG FromHotel,
            /* [in] */ LONG FromWellPlate,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFromStage( 
            /* [in] */ LONG ToHotel,
            /* [in] */ LONG ToWellPlate,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFromTo( 
            /* [in] */ LONG FromHotel,
            /* [in] */ LONG FromWellPlate,
            /* [in] */ LONG ToHotel,
            /* [in] */ LONG ToWellPlate,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScanHotel( 
            /* [in] */ LONG Hotel,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HotelFitted( 
            /* [in] */ LONG Hotel,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHotel1Position( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetStagePosition( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupComplete( 
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WellPlateFitted( 
            /* [in] */ LONG HOtel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarCode( 
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WellPlateUsed( 
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepDebugMode( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepDebugMode( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SingleStepDebug( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StalledAxis( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarCodeReaderFitted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControllerFirmwareVersion( 
            /* [in] */ LONG Axis,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveAtVelocity( 
            /* [in] */ LONG Axis,
            /* [in] */ LONG Velocity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Jog( 
            /* [in] */ LONG Axis,
            /* [in] */ LONG EncoderCounts) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Continue( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LastError( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_setupTransferFlag( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_setupTransferFlag( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DecoupleStageFromLoader( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DecoupleStageFromLoader( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ForceWellPlateAsFitted( 
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHotelPosition( 
            /* [in] */ LONG hotel,
            /* [retval][out] */ LONG *RetValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SerialNumber( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReloadSetup( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWellPlateLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWellPlateLoader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWellPlateLoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWellPlateLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWellPlateLoader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWellPlateLoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWellPlateLoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWellPlateLoader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IWellPlateLoader * This,
            /* [out][in] */ LONG *Port,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisConnect )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveToStage )( 
            IWellPlateLoader * This,
            /* [in] */ LONG FromHotel,
            /* [in] */ LONG FromWellPlate,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFromStage )( 
            IWellPlateLoader * This,
            /* [in] */ LONG ToHotel,
            /* [in] */ LONG ToWellPlate,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFromTo )( 
            IWellPlateLoader * This,
            /* [in] */ LONG FromHotel,
            /* [in] */ LONG FromWellPlate,
            /* [in] */ LONG ToHotel,
            /* [in] */ LONG ToWellPlate,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanHotel )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Hotel,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotelFitted )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Hotel,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHotel1Position )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetStagePosition )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupComplete )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WellPlateFitted )( 
            IWellPlateLoader * This,
            /* [in] */ LONG HOtel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BarCode )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WellPlateUsed )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepDebugMode )( 
            IWellPlateLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepDebugMode )( 
            IWellPlateLoader * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SingleStepDebug )( 
            IWellPlateLoader * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StalledAxis )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BarCodeReaderFitted )( 
            IWellPlateLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControllerFirmwareVersion )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Axis,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveAtVelocity )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Axis,
            /* [in] */ LONG Velocity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Jog )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Axis,
            /* [in] */ LONG EncoderCounts);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Continue )( 
            IWellPlateLoader * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastError )( 
            IWellPlateLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_setupTransferFlag )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_setupTransferFlag )( 
            IWellPlateLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DecoupleStageFromLoader )( 
            IWellPlateLoader * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DecoupleStageFromLoader )( 
            IWellPlateLoader * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ForceWellPlateAsFitted )( 
            IWellPlateLoader * This,
            /* [in] */ LONG Hotel,
            /* [in] */ LONG WellPlate,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHotelPosition )( 
            IWellPlateLoader * This,
            /* [in] */ LONG hotel,
            /* [retval][out] */ LONG *RetValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            IWellPlateLoader * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )( 
            IWellPlateLoader * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReloadSetup )( 
            IWellPlateLoader * This);
        
        END_INTERFACE
    } IWellPlateLoaderVtbl;

    interface IWellPlateLoader
    {
        CONST_VTBL struct IWellPlateLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWellPlateLoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWellPlateLoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWellPlateLoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWellPlateLoader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWellPlateLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWellPlateLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWellPlateLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWellPlateLoader_Connect(This,Port,RetValue)	\
    ( (This)->lpVtbl -> Connect(This,Port,RetValue) ) 

#define IWellPlateLoader_DisConnect(This,RetValue)	\
    ( (This)->lpVtbl -> DisConnect(This,RetValue) ) 

#define IWellPlateLoader_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define IWellPlateLoader_MoveToStage(This,FromHotel,FromWellPlate,RetValue)	\
    ( (This)->lpVtbl -> MoveToStage(This,FromHotel,FromWellPlate,RetValue) ) 

#define IWellPlateLoader_MoveFromStage(This,ToHotel,ToWellPlate,RetValue)	\
    ( (This)->lpVtbl -> MoveFromStage(This,ToHotel,ToWellPlate,RetValue) ) 

#define IWellPlateLoader_MoveFromTo(This,FromHotel,FromWellPlate,ToHotel,ToWellPlate,RetValue)	\
    ( (This)->lpVtbl -> MoveFromTo(This,FromHotel,FromWellPlate,ToHotel,ToWellPlate,RetValue) ) 

#define IWellPlateLoader_ScanHotel(This,Hotel,RetValue)	\
    ( (This)->lpVtbl -> ScanHotel(This,Hotel,RetValue) ) 

#define IWellPlateLoader_Initialise(This,RetValue)	\
    ( (This)->lpVtbl -> Initialise(This,RetValue) ) 

#define IWellPlateLoader_Stop(This,RetValue)	\
    ( (This)->lpVtbl -> Stop(This,RetValue) ) 

#define IWellPlateLoader_get_HotelFitted(This,Hotel,pVal)	\
    ( (This)->lpVtbl -> get_HotelFitted(This,Hotel,pVal) ) 

#define IWellPlateLoader_SetHotel1Position(This,RetValue)	\
    ( (This)->lpVtbl -> SetHotel1Position(This,RetValue) ) 

#define IWellPlateLoader_SetStagePosition(This,RetValue)	\
    ( (This)->lpVtbl -> SetStagePosition(This,RetValue) ) 

#define IWellPlateLoader_SetupComplete(This,RetValue)	\
    ( (This)->lpVtbl -> SetupComplete(This,RetValue) ) 

#define IWellPlateLoader_get_WellPlateFitted(This,HOtel,WellPlate,pVal)	\
    ( (This)->lpVtbl -> get_WellPlateFitted(This,HOtel,WellPlate,pVal) ) 

#define IWellPlateLoader_get_BarCode(This,Hotel,WellPlate,pVal)	\
    ( (This)->lpVtbl -> get_BarCode(This,Hotel,WellPlate,pVal) ) 

#define IWellPlateLoader_get_WellPlateUsed(This,Hotel,WellPlate,pVal)	\
    ( (This)->lpVtbl -> get_WellPlateUsed(This,Hotel,WellPlate,pVal) ) 

#define IWellPlateLoader_get_SingleStepDebugMode(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepDebugMode(This,pVal) ) 

#define IWellPlateLoader_put_SingleStepDebugMode(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepDebugMode(This,newVal) ) 

#define IWellPlateLoader_SingleStepDebug(This)	\
    ( (This)->lpVtbl -> SingleStepDebug(This) ) 

#define IWellPlateLoader_get_StalledAxis(This,pVal)	\
    ( (This)->lpVtbl -> get_StalledAxis(This,pVal) ) 

#define IWellPlateLoader_get_BarCodeReaderFitted(This,pVal)	\
    ( (This)->lpVtbl -> get_BarCodeReaderFitted(This,pVal) ) 

#define IWellPlateLoader_get_ControllerFirmwareVersion(This,Axis,pVal)	\
    ( (This)->lpVtbl -> get_ControllerFirmwareVersion(This,Axis,pVal) ) 

#define IWellPlateLoader_MoveAtVelocity(This,Axis,Velocity)	\
    ( (This)->lpVtbl -> MoveAtVelocity(This,Axis,Velocity) ) 

#define IWellPlateLoader_Jog(This,Axis,EncoderCounts)	\
    ( (This)->lpVtbl -> Jog(This,Axis,EncoderCounts) ) 

#define IWellPlateLoader_Continue(This)	\
    ( (This)->lpVtbl -> Continue(This) ) 

#define IWellPlateLoader_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IWellPlateLoader_put_LastError(This,newVal)	\
    ( (This)->lpVtbl -> put_LastError(This,newVal) ) 

#define IWellPlateLoader_get_setupTransferFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_setupTransferFlag(This,pVal) ) 

#define IWellPlateLoader_put_setupTransferFlag(This,newVal)	\
    ( (This)->lpVtbl -> put_setupTransferFlag(This,newVal) ) 

#define IWellPlateLoader_get_DecoupleStageFromLoader(This,pVal)	\
    ( (This)->lpVtbl -> get_DecoupleStageFromLoader(This,pVal) ) 

#define IWellPlateLoader_put_DecoupleStageFromLoader(This,newVal)	\
    ( (This)->lpVtbl -> put_DecoupleStageFromLoader(This,newVal) ) 

#define IWellPlateLoader_ForceWellPlateAsFitted(This,Hotel,WellPlate,retVal)	\
    ( (This)->lpVtbl -> ForceWellPlateAsFitted(This,Hotel,WellPlate,retVal) ) 

#define IWellPlateLoader_SetHotelPosition(This,hotel,RetValue)	\
    ( (This)->lpVtbl -> SetHotelPosition(This,hotel,RetValue) ) 

#define IWellPlateLoader_get_SerialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,pVal) ) 

#define IWellPlateLoader_put_SerialNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_SerialNumber(This,newVal) ) 

#define IWellPlateLoader_ReloadSetup(This)	\
    ( (This)->lpVtbl -> ReloadSetup(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWellPlateLoader_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Scan;

#ifdef __cplusplus

class DECLSPEC_UUID("44420EC1-BBCC-11D5-BC62-00C0F0527D82")
Scan;
#endif

EXTERN_C const CLSID CLSID_Encoders;

#ifdef __cplusplus

class DECLSPEC_UUID("0D6F4D39-619F-4DFE-874D-8DFCE6BA99C2")
Encoders;
#endif

EXTERN_C const CLSID CLSID_Stage;

#ifdef __cplusplus

class DECLSPEC_UUID("68E26092-4FA8-4DE7-BD9C-DD7A7353E377")
Stage;
#endif

EXTERN_C const CLSID CLSID_Z;

#ifdef __cplusplus

class DECLSPEC_UUID("C33A23AD-B45E-43D8-A31F-9B76070D566E")
Z;
#endif

EXTERN_C const CLSID CLSID_Filter;

#ifdef __cplusplus

class DECLSPEC_UUID("856D4F4C-8FF2-41A8-8635-50DEDD305AF7")
Filter;
#endif

EXTERN_C const CLSID CLSID_TTL;

#ifdef __cplusplus

class DECLSPEC_UUID("F54820B4-F933-4F64-AA4E-929F03D44FFC")
TTL;
#endif

EXTERN_C const CLSID CLSID_Piezo;

#ifdef __cplusplus

class DECLSPEC_UUID("8F9683E8-89B5-4E04-9674-40DC5925B544")
Piezo;
#endif

EXTERN_C const CLSID CLSID_Theta;

#ifdef __cplusplus

class DECLSPEC_UUID("24C33A0B-5662-4F11-B073-D21F12FB0BD6")
Theta;
#endif

EXTERN_C const CLSID CLSID_Shuttle;

#ifdef __cplusplus

class DECLSPEC_UUID("2274E2C6-8108-4BD9-8346-8FBBF2CB33A0")
Shuttle;
#endif


#ifndef __Constants_MODULE_DEFINED__
#define __Constants_MODULE_DEFINED__


/* module Constants */


const long PRIOR_OK	=	0;

const long PRIOR_FAILEDTOOPENPORT	=	-1;

const long PRIOR_FAILEDTOFINDCONTROLLER	=	-2;

const long PRIOR_FAILEDTOFINDPCICARD	=	-3;

const long PRIOR_NOTCONNECTED	=	-4;

const long PRIOR_ALREADYCONNECTED	=	-5;

const long PRIOR_NOTSUPPORTED	=	-6;

const long PRIOR_LOADERERROR	=	-7;

const long PRIOR_APPDATAPATHERROR	=	-8;

const long PRIOR_LOWVOLTAGE	=	-9;

const long PRIOR_DEVICENOTFITTED	=	-10;

const long PRIOR_INVALIDPARAMETER	=	-11;

const long PRIOR_DEVICEINUSE	=	-12;

const long PriorFW1	=	1;

const long PriorFW1_NEXT	=	2;

const long PriorFW1_PREV	=	3;

const long PriorFW1_HOME	=	4;

const long PriorFW2	=	5;

const long PriorFW2_NEXT	=	6;

const long PriorFW2_PREV	=	7;

const long PriorFW2_HOME	=	8;

const long PriorFW3	=	9;

const long PriorFW3_NEXT	=	10;

const long PriorFW3_PREV	=	11;

const long PriorFW3_HOME	=	12;

const long PriorLIGHT	=	20;

const long PriorZREL	=	30;

const long PriorZABS	=	31;

const long PriorXYREL	=	40;

const long PriorXYABS	=	41;

const long PriorXYZREL	=	50;

const long PriorXYZABS	=	51;

const long PriorSH1Open	=	60;

const long PriorSH1Close	=	61;

const long PriorSH2Open	=	62;

const long PriorSH2Close	=	63;

const long PriorSH3Open	=	64;

const long PriorSH3Close	=	65;

const long PriorStop	=	70;

const long PriorPiezoRel	=	80;

const long PriorPiezoAbs	=	81;

const long PriorShutterOpen	=	1;

const long PriorShutterClose	=	0;

const long PriorTrigLow	=	0;

const long PriorTrigHi	=	1;

const long PriorTrigDisarmed	=	0;

const long PriorTrigArmed	=	1;

const long JoystickStateEnabled	=	0;

const long JoystickStateDisabled	=	1;

const long JoystickStateXYDisabled	=	2;

const long JoystickStateZDisabled	=	3;

const long PriorLed1	=	1;

const long PriorLed2	=	2;

const long PriorLed3	=	3;

const long PriorLed4	=	4;

const long PriorLed5	=	5;

const long PriorLed6	=	6;

const long PriorLed7	=	7;

const long PriorLed8	=	8;

const long PriorLedOff	=	0;

const long PriorLedOn	=	1;

const long PriorLedNotFitted	=	0;

const long PriorLedFitted	=	1;

const long PriorLedTriggerDisabled	=	0;

const long PriorLedTriggerEnabled	=	1;

const long PriorLedTriggerHigh	=	0;

const long PriorLedTriggerLow	=	1;

const long PriorLedTriggerRising	=	2;

const long PriorLedTriggerFalling	=	3;

const long PriorLedLightMode	=	0;

const long PriorLedCurrentMode	=	1;

const long PriorLedNormalOperation	=	0;

const long PriorLedCompabilityOperation	=	1;

const long PriorOff	=	0;

const long PriorOn	=	1;

const long PriorFalse	=	0;

const long PriorTrue	=	1;

const long Prior_LED	=	0;

const long Prior_MD_LED	=	1;

const long MAX_NUMBER_OF_LEDS	=	4;

const long MAX_NUMBER_OF_MD_LEDS	=	8;

const long LOADER_ERROR	=	0x1;

const long LOADER_NOTCONNECTED	=	0x2;

const long LOADER_NOTINITIALISED	=	0x4;

const long LOADER_NOTSETUP	=	0x8;

const long LOADER_NOTIDLE	=	0x10;

const long LOADER_INVALIDSLIDE	=	0x20;

const long LOADER_INVALIDWELLPLATE	=	0x20;

const long LOADER_INVALIDCASSETTE	=	0x40;

const long LOADER_INVALIDHOTEL	=	0x40;

const long LOADER_SLIDEONARM	=	0x80;

const long LOADER_WELLPLATEONARM	=	0x80;

const long LOADER_SLIDEONSTAGE	=	0x100;

const long LOADER_WELLPLATEONSTAGE	=	0x100;

const long LOADER_STAGENOTATLOAD	=	0x200;

const long LOADER_BARCODEERROR	=	0x400;

const long LOADER_CASSETTENOTSCANNED	=	0x800;

const long LOADER_HOTELNOTSCANNED	=	0x800;

const long LOADER_COMMSERROR	=	0x1000;

const long LOADER_SLIDESENSORERROR	=	0x2000;

const long LOADER_WELLPLATESENSORERROR	=	0x2000;

const long LOADER_HALLEFFECTERROR	=	0x4000;

const long LOADER_GRIPPERHOMEERROR	=	0x4000;

const long LOADER_AXISSTALLED	=	0x8000;

const long LOADER_XAXISINMOTION	=	( long  )( unsigned long  )0x80000000;

const long LOADER_YAXISINMOTION	=	0x40000000;

const long LOADER_ZAXISINMOTION	=	0x20000000;

const long ERR_LOADER_OK	=	0;

const long ERR_LOADER_NOTINITIALISED	=	-1;

const long ERR_LOADER_NOTSETUP	=	-2;

const long ERR_LOADER_INVALIDCASSETTE	=	-4;

const long ERR_LOADER_INVALIDSLIDE	=	-5;

const long ERR_LOADER_STAGENOTATLOAD	=	-6;

const long ERR_LOADER_SLIDEINGRIPPER	=	-7;

const long ERR_LOADER_WRONGSLIDEINGRIPPERSTATUS	=	-8;

const long ERR_LOADER_INVALIDSTATECHANGE	=	-9;

const long ERR_LOADER_CASSETEREMOVED	=	-10;

const long ERR_LOADER_STAGEMOVEDDURINGTRANSFER	=	-12;

const long ERR_LOADER_COMMS_ERROR	=	-13;

const long ERR_LOADER_AXIS_STALLED	=	-14;

const long ERR_LOADER_SLIDE_SENSOR_OFFSET	=	-15;

const long ERR_LOADER_NO_HALL_EFFECT	=	-16;

const long ERR_LOADER_WRONGSLIDEONSTAGESTATUS	=	-17;

const long STATE_STATEMASK	=	0xf00000;

const long STATE_SUBSTATEMASK	=	0x3f000000;

const long STATE_UNKNOWN	=	0;

const long STATE_SETUP	=	0x100000;

const long STATE_INITIALISE	=	0x200000;

const long STATE_STOP	=	0x300000;

const long STATE_IDLE	=	0x400000;

const long STATE_TXF_TOSTAGE	=	0x500000;

const long STATE_TXF_FROMSTAGE	=	0x600000;

const long STATE_TXF_FROMSLIDETOSLIDE	=	0x700000;

const long STATE_TXF_FROMWELLPLATETOWELLPLATE	=	0x700000;

const long STATE_SCANCASSETTE	=	0x800000;

const long STATE_SCANHOTEL	=	0x800000;

const long STATE_SCANBARCODE	=	0x900000;

const long MAX_WELLPLATES_PER_HOTEL	=	10;

const long MAX_NUMBER_OF_WELLPLATEHOTELS	=	2;

const long MAX_SLIDES_PER_CASSETTE	=	50;

const long MAX_NUMBER_OF_CASSETTES	=	4;

const long LOADER_AXISX	=	1;

const long LOADER_AXISY	=	2;

const long LOADER_AXISZ	=	3;

const long LOADER_AXISG	=	4;

const long LOADER_AXISGRIPPER	=	4;

const long LOADER_PARK_NORMAL	=	0;

const long LOADER_PARK_BY_CASSETTE	=	1;

const long LOADER_WAYPOINT_INACTIVE	=	0;

const long LOADER_WAYPOINT_ACTIVE	=	1;

const long LOADER_WAYPOINT_WAITING	=	2;

const long LOADER_WAYPOINT_PREVIEW	=	3;

const long ERR_WELLPLATE_OK	=	0;

const long ERR_WELLPLATE_NOTINITIALISED	=	-1;

const long ERR_WELLPLATE_NOTSETUP	=	-2;

const long ERR_WELLPLATE_GRIPPER_HOMING_FAILED	=	-3;

const long ERR_WELLPLATE_INVALIDHOTEL	=	-4;

const long ERR_WELLPLATE_INVALIDWELLPLATE	=	-5;

const long ERR_WELLPLATE_STAGENOTATLOAD	=	-6;

const long ERR_WELLPLATE_WELLPLATEINGRIPPER	=	-7;

const long ERR_WELLPLATE_WELLPLATESTAGECLAMPCLOSED	=	-8;

const long ERR_WELLPLATE_INVALIDSTATECHANGE	=	-9;

const long ERR_WELLPLATE_HOTELREMOVED	=	-10;

const long ERR_WELLPLATE_WRONGWELLPLATESENSORSTATE	=	-11;

const long ERR_WELLPLATE_STAGEMOVEDDURINGTRANSFER	=	-12;

const long ERR_WELLPLATE_COMMS_ERROR	=	-13;

const long ERR_WELLPLATE_AXIS_STALLED	=	-14;

const long TRIGGERX	=	1;

const long TRIGGERY	=	2;

const long TRIGGERZ	=	3;

const long TRIGGER_POS	=	1;

const long TRIGGER_NEG	=	-1;

const long RSH_NOT_ACTIVE_STAGE_IDLE	=	0;

const long RSH_NOT_ACTIVE_STAGE_ACTIVE	=	1;

const long RSH_ACTIVE	=	2;

const long RSH_ANTICLOCKWISE	=	-1;

const long RSH_CLOCKWISE	=	1;

#endif /* __Constants_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_SlideLoader;

#ifdef __cplusplus

class DECLSPEC_UUID("F2A7152D-2F8F-49D7-A819-CD5FD6243DA3")
SlideLoader;
#endif

EXTERN_C const CLSID CLSID_Led;

#ifdef __cplusplus

class DECLSPEC_UUID("360AF255-89D4-48C0-9786-0BC6432B4536")
Led;
#endif

EXTERN_C const CLSID CLSID_WellPlateLoader;

#ifdef __cplusplus

class DECLSPEC_UUID("5EA15287-2C95-4B44-91F8-7220F94876A2")
WellPlateLoader;
#endif

EXTERN_C const CLSID CLSID_Trigger;

#ifdef __cplusplus

class DECLSPEC_UUID("FF4E2BEA-DEF4-4D92-A32B-725A42E1E283")
Trigger;
#endif

EXTERN_C const CLSID CLSID_OEM;

#ifdef __cplusplus

class DECLSPEC_UUID("6BA12DD8-D5A9-4696-9533-5CF8D59BE5F9")
OEM;
#endif
#endif /* __PRIORLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


