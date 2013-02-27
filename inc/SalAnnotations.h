/*++

   Copyright (c) Microsoft Corporation. All rights reserved.
   THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. THE ENTIRE 
   RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE 
   USER. USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS 
   HEREBY PERMITTED.

--*/

#ifndef __SAL_ANNOTATIONS
#define __SAL_ANNOTATIONS
//
// SAL Annotation are ignored in case specstrings.h is not included 
// in order to prevent errors while compiling with Visual Studio 2003.
// While compiling with Visual Studio 2005 or latest versions which support SAL
// annotation this file can be removed.
//
#ifndef __specstrings

#define __in
#define __out
#define __inout
#define __in_opt
#define __out_opt
#define __inout_opt
#define __in_bcount(a)
#define __out_bcount(a)
#define __inout_bcount(a)
#define __deref_in_bcount(a)	
#define __deref_out_bcount(a)
#define __deref_inout_bcount(a)
#define __in_ecount(a)
#define __out_ecount(a)
#define __inout_ecount(a)
#define __deref_in_ecount(a)	
#define __deref_out_ecount(a)
#define __deref_inout_ecount(a)

#endif // for __specstrings

#endif // for __SAL_ANNOTATIONS