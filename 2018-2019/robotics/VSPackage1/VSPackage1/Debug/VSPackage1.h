

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for VSPackage1.idl:
    Oicf, W0, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data , no_format_optimization
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __VSPackage1_h__
#define __VSPackage1_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __VSPackage1Package_FWD_DEFINED__
#define __VSPackage1Package_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSPackage1Package VSPackage1Package;
#else
typedef struct VSPackage1Package VSPackage1Package;
#endif /* __cplusplus */

#endif 	/* __VSPackage1Package_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vsshell.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSPackage1_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_VSPackage1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSPackage1_0000_0000_v0_0_s_ifspec;


#ifndef __VSPackage1Lib_LIBRARY_DEFINED__
#define __VSPackage1Lib_LIBRARY_DEFINED__

/* library VSPackage1Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_VSPackage1Lib;

EXTERN_C const CLSID CLSID_VSPackage1Package;

#ifdef __cplusplus

class DECLSPEC_UUID("14632b7a-aa53-4b45-be0e-8a8e7dc1dbd3")
VSPackage1Package;
#endif
#endif /* __VSPackage1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


