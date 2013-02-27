 
/*++

Copyright (c) Microsoft Corporation. All rights reserved.
THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND.
THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER.
USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

/**************************************************************************
 *
 * WPXHttpFilt.h -- definitions for Microsoft ISA Server.
 *
 **************************************************************************/


#ifndef __WPXHTTPFILT_H_
#define __WPXHTTPFILT_H_

#include <httpfilt.h>


//
//  Current version of the ISA filter spec is 8.0
//

#define WPX_HTTP_FILTER_REVISION    MAKELONG( 0, 8)


//
//  WPX Specific Notification Flags
//

#define SF_NOTIFY_FORWARD_RAW_DATA                  0x00000100
#define SF_NOTIFY_FORWARD_RAW_DATA_COMPLETED        0x00000200
#define SF_NOTIFY_RECEIVE_RESPONSE_HEADERS          0x00000400
#define SF_NOTIFY_RECEIVE_RESPONSE_RAW_DATA         0x00000800
#define SF_NOTIFY_ROUTING                           0x00001000
#define SF_NOTIFY_POLICY_CHECK_COMPLETED            0x00004000
#define SF_NOTIFY_FLAG_LARGE_SIZE_AWARE             0x00100000

#define TO_WPX_FILTER_CONTEXT( pfc )                 \
    ((pfc->Revision == WPX_HTTP_FILTER_REVISION) ? (PWPX_FILTER_CONTEXT ) pfc : NULL)

// WPX-specific server support functions
enum SF_WPX_REQ_TYPE
{
    SF_REQ_DISABLE_WPX_NOTIFICATIONS = 0x1000,

    //
    // Retreive compression settings for the current request.
    //
    //  pData: pointer to SF_REQ_WPX_COMPRESSION_SETTINGS
    //  ul1: unused
    //  ul2: unused
    //
    // Returns: TRUE if success, LastError is set on failure
    //
    SF_REQ_WPX_COMPRESSION_SETTINGS
};
typedef struct _WPX_FILTER_CONTEXT
{
    DWORD          cbSize;

    //
    //  This is the structure revision level.
    //

    DWORD          Revision;

    //
    //  Private context information for the server.
    //

    PVOID          ServerContext;
    DWORD          ulReserved;

    //
    //  TRUE if this request is coming over a secure port
    //

    BOOL           fIsSecurePort;

    //
    //  A context that can be used by the filter
    //

    PVOID          pFilterContext;

    //
    //  Server callbacks
    //

    BOOL (WINAPI * GetServerVariable) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszVariableName,
        LPVOID                        lpvBuffer,
        LPDWORD                       lpdwSize
        );

    BOOL (WINAPI * AddResponseHeaders) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszHeaders,
        DWORD                         dwReserved
        );

    BOOL (WINAPI * WriteClient)  (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPVOID                        Buffer,
        LPDWORD                       lpdwBytes,
        DWORD                         dwReserved
        );

    VOID * (WINAPI * AllocMem) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        DWORD                         cbSize,
        DWORD                         dwReserved
        );

    BOOL (WINAPI * ServerSupportFunction) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        enum SF_REQ_TYPE              sfReq,
        PVOID                         pData,
        ULONG_PTR                     ul1,
        ULONG_PTR                     ul2
        );

    // Points to the WriteServer function that writes a data buffer to the server
    BOOL (WINAPI * WriteServer)  (
        struct _HTTP_FILTER_CONTEXT *   pfc,        //  in: WPX Filter context
        LPVOID                          Buffer,     //  in: Buffer to write
        LPDWORD                         lpdwBytes,  //  in: count of bytes to send
        DWORD                           dwReserved  //  in: Reserved. must be Zero.
        );

    //  Allocates memory for request life time. Memory is guruanteed to stay
    //  valid while request is processed.
    VOID * (WINAPI * AllocMemoryPerRequest) (
        struct _HTTP_FILTER_CONTEXT *   pfc,        //  in: WPX Filter context
        DWORD                           cbSize,     //  in: Size (in bytes) to allocate
        DWORD                           dwReserved  //  in: Reserved. must be Zero.
        );

    //
    //  provides the status (enabled / disabled)
    //  of a given authentication scheme
    //  on the listener associated with this request
    //

    BOOL (WINAPI * GetAuthSchemeStatus) (
        struct _HTTP_FILTER_CONTEXT *   pfc,                        //  in: WPX Filter context
        LPCSTR                          lpszAuthSchemeNamespace,    // in: The AuthSchemes name spcae
        BOOL *                          lpfStatus                   // out: True if and only if the auth scheme is enabled.
        );

    BOOL (WINAPI * WPXSupportFunction) (
        struct _HTTP_FILTER_CONTEXT *   pfc,
        enum SF_WPX_REQ_TYPE            sfReq,
        PVOID                           pData,
        ULONG_PTR                       ul1,
        ULONG_PTR                       ul2
        );

    VOID * (WINAPI * AllocMemoryPerIO) (
        struct _HTTP_FILTER_CONTEXT   *pfc,             //  in: WPX Filter Context
        DWORD  cbSize
        );

} WPX_FILTER_CONTEXT, *PWPX_FILTER_CONTEXT;




typedef struct _WPX_FILTER_PREPROC_HEADERS
{
    //
    //  For SF_NOTIFY_PREPROC_HEADERS, retrieves the specified header value.
    //  Header names should include the trailing ':'.  The special values
    //  'method', 'url' and 'version' can be used to retrieve the individual
    //  portions of the request line
    //

    BOOL (WINAPI * GetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPVOID                        lpvBuffer,
        LPDWORD                       lpdwSize
        );

    //
    //  Replaces this header value to the specified value.  To delete a header,
    //  specified a value of '\0'.
    //

    BOOL (WINAPI * SetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPSTR                         lpszValue
        );

    //
    //  Adds the specified header and value
    //

    BOOL (WINAPI * AddHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPSTR                         lpszValue
        );

    DWORD HttpStatus;               // New in 4.0, status for SEND_RESPONSE
    DWORD dwReserved;               // New in 4.0

    //
    //  For SF_NOTIFY_PREPROC_HEADERS
    //  For SF_NOTIFY_RECEIVE_RESPONSE_HEADERS
    //

    // Sets the key under which the URL will be cached
    BOOL (WINAPI * SetUserCachingKey) (
        struct _HTTP_FILTER_CONTEXT *   pfc,                //  in: WPX Filter Context
        LPSTR                           lpszCacheKey        //  in: The caching Key to use.
        );

} WPX_FILTER_PREPROC_HEADERS, *PWPX_FILTER_PREPROC_HEADERS;


typedef struct _WPX_HTTP_FILTER_AUTH_COMPLETE_INFO
{

    //
    //  For SF_NOTIFY_AUTH_COMPLETE, retrieves the specified header value.
    //  Header names should include the trailing ':'.  The special values
    //  'method', 'url' and 'version' can be used to retrieve the individual
    //  portions of the request line
    //

    BOOL (WINAPI * GetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPVOID                        lpvBuffer,
        LPDWORD                       lpdwSize
        );

    //
    //  Replaces this header value to the specified value.  To delete a header,
    //  specified a value of '\0'.
    //

    BOOL (WINAPI * SetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPSTR                         lpszValue
        );

    //
    //  Adds the specified header and value
    //

    BOOL (WINAPI * AddHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR                         lpszName,
        LPSTR                         lpszValue
        );

    //
    //  Get the authenticated user impersonation token
    //

    BOOL (WINAPI * GetUserToken) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        HANDLE *                      phToken
        );

    //
    //  Status code to use when sending response
    //

    DWORD HttpStatus;

    //
    //  Determines whether to reset auth if URL changed
    //

    BOOL  fResetAuth;

    //
    //  Reserved
    //

    DWORD dwReserved;

    //
    //  For SF_NOTIFY_AUTH_COMPLETE
    //

    // Sets the key under which the URL will be cached
    BOOL (WINAPI * SetUserCachingKey) (
        struct _HTTP_FILTER_CONTEXT *   pfc,          //  in: WPX Filter context
        LPSTR                           lpszCacheKey        //  in: The caching Key to use.
        );

} WPX_HTTP_FILTER_AUTH_COMPLETE_INFO, *PWPX_HTTP_FILTER_AUTH_COMPLETE_INFO;


// Structure pointed to by the SF_NOTIFY_ROUTING notification
typedef struct _WPX_FILTER_ROUTE
{
    //
    //  For SF_NOTIFY_ROUTING
    //

    CHAR *  pszHost;
    DWORD   cbInHost;
    WORD    wPort;

} WPX_FILTER_ROUTE,*PWPX_FILTER_ROUTE;


typedef struct _WPX_FILTER_AUTHENT_EX
{
    //
    //  For SF_NOTIFY_AUTHENTICATION_EX
    //

    //
    //  Pointer to username and password, empty strings for the anonymous user
    //
    LPSTR  pszUser;
    DWORD  cbUserBuff;

    LPSTR  pszPassword;
    DWORD  cbPasswordBuff;

    BOOL   fAuthIsRequired;

    //
    //  allows associating non-AD-based
    //  authenticated user information
    //  with this request
    //

    BOOL (WINAPI * SetAuthenticatedUser) (
        struct _HTTP_FILTER_CONTEXT *   pfc,          //  in: WPX Filter context
        LPCSTR                          lpszUserName,
        LPCSTR                          lpszNamespace,
        LPCSTR                          lpszUserGroups
        );

    //
    //  allows associating AD-based
    //  authenticated user information
    //  with this request
    //

    BOOL (WINAPI * SetADAuthenticatedUser) (
        struct _HTTP_FILTER_CONTEXT *   pfc,          //  in: WPX Filter context
        LPCSTR                          lpszUserName,
        LPCSTR                          lpszPassword,
        HANDLE                          hToken
        );

} WPX_FILTER_AUTHENT_EX, *PWPX_FILTER_AUTHENT_EX;


typedef struct _WPX_FILTER_LOG
{
    const CHAR * pszClientHostName;
    const CHAR * pszClientUserName;
    const CHAR * pszServerName;
    const CHAR * pszOperation;
    const CHAR * pszTarget;
    const CHAR * pszParameters;

    DWORD  dwHttpStatus;
    DWORD  dwWin32Status;
    DWORD  dwBytesSent;
    DWORD  dwBytesRecvd;
    DWORD  msTimeForProcessing;

    DWORD dwBytesSentHigh;          // TMG 2009 and later
    DWORD dwBytesRecvdHigh;         // TMG 2009 and later
} WPX_FILTER_LOG, *PWPX_FILTER_LOG;



//
// The entry point for WPX-specific notifications.
//

DWORD
WINAPI
HttpWPXFilterProc(
    HTTP_FILTER_CONTEXT *   pfc,                //  in: WPX Filter Context
    DWORD                   NotificationType,__inout    //  in: Notification Type
    VOID *                  pvNotification      //  in/out: Notification Specific Structure
    );

//
// Will be called after GetFilterVersion to get the specific notifications the filter
// is interested in.
//

BOOL
WINAPI
GetWPXFilterVersion(
    PHTTP_FILTER_VERSION pVer                   //  in/out: Points to HTTP_FILTER_VERSION structure
    );

//
// Will be called when the configuration has changed.
//

BOOL
WINAPI
ReloadWPXFilterConfiguration();

#endif // __WPXHTTPFILT_H_

