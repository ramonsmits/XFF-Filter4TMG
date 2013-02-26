
#include <windows.h>
#include <httpfilt.h>
#include <wpxhttpfilt.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <assert.h>
#include <strsafe.h>
#include <SalAnnotations.h>

#define MAX_HVALUE_SIZE 256
#define SIZEOF_CHAR (sizeof(' '))
#define STRING_SIZE(str)   (sizeof(str) - 1)

const char X_FORWARDED_FOR[] = "X-Forwarded-For:";
const char hseparator[] = ", ";

static DWORD OnPreprocHeaders(PHTTP_FILTER_CONTEXT pfc, PHTTP_FILTER_PREPROC_HEADERS pRawData);


BOOL WINAPI TerminateFilter ( DWORD dwFlags )
{
    UNREFERENCED_PARAMETER(dwFlags);
    return TRUE;
}


BOOL WINAPI GetFilterVersion ( PHTTP_FILTER_VERSION pVer )
{
    if (pVer == NULL) 
    {
        SetLastError( ERROR_INVALID_PARAMETER); 
        return FALSE;
    }
    
    pVer->dwFilterVersion = WPX_HTTP_FILTER_REVISION;

    pVer->dwFlags =  SF_NOTIFY_PREPROC_HEADERS;

    return TRUE;
}


DWORD WINAPI HttpFilterProc (
    PHTTP_FILTER_CONTEXT pfc,
    DWORD NotificationType,__inout 
    LPVOID pvNotification
)
{

    DWORD dwRet = SF_STATUS_REQ_NEXT_NOTIFICATION;

    switch (NotificationType)
    {
        case SF_NOTIFY_PREPROC_HEADERS:
            dwRet = OnPreprocHeaders(pfc, (PHTTP_FILTER_PREPROC_HEADERS)pvNotification);
            break;
        default:
            // We cannot reach here, unless Web Filter support has a BAD ERROR.
            SetLastError( ERROR_INVALID_PARAMETER); 
            dwRet = SF_STATUS_REQ_ERROR;
            break;
    }

    return dwRet;
}

/*
 * OnPreprocHeaders():
 */
static DWORD OnPreprocHeaders ( PHTTP_FILTER_CONTEXT pfc, PHTTP_FILTER_PREPROC_HEADERS pReqHeaders )
{

    if ( NULL == pfc || NULL == pReqHeaders)
    {
        SetLastError( ERROR_INVALID_PARAMETER); 
        return SF_STATUS_REQ_ERROR;
    }

	DWORD IPLen;
	char RemoteIP[] = "0123:4567:89ab:cdef:0123:4567:89ab:cdef";

	IPLen = sizeof(RemoteIP);
	if ( !pfc->GetServerVariable( pfc, "REMOTE_ADDR", (LPVOID) RemoteIP, &IPLen ) ) {
	        return SF_STATUS_REQ_ERROR;
	}

	if ( pReqHeaders->AddHeader (pfc, (LPSTR) X_FORWARDED_FOR, (LPSTR) RemoteIP) )
		{
			return SF_STATUS_REQ_NEXT_NOTIFICATION;
		} else {
			return SF_STATUS_REQ_ERROR;
		}

	/*
	DWORD bytesInHeader = MAX_HVALUE_SIZE, 
	char newhvalue[MAX_HVALUE_SIZE], *pch;
	
	if ( pReqHeaders->GetHeader (pfc, (LPSTR) X_FORWARDED_FOR, (LPVOID) newhvalue, &bytesInHeader) )
    {
		while ( bytesInHeader + IPLen + 1 > MAX_HVALUE_SIZE ) {
			pch = (char*) memchr (newhvalue, ';', bytesInHeader);
			if ( pch == NULL ) {
				bytesInHeader = 1;
				newhvalue[0] = 0;
			} else {
				pch++;
				bytesInHeader = sizeof(pch);		
				memcpy(newhvalue,pch,bytesInHeader);
				memcpy(&newhvalue[bytesInHeader-1],hseparator,sizeof(hseparator));
				bytesInHeader+=sizeof(hseparator);
			}
		}
		memcpy(&newhvalue[bytesInHeader-1],RemoteIP,IPLen);
		if ( pReqHeaders->SetHeader (pfc, (LPSTR) X_FORWARDED_FOR, (LPSTR) newhvalue) )
		{
			return SF_STATUS_REQ_NEXT_NOTIFICATION;
		} else {
	        return SF_STATUS_REQ_ERROR;
		}
    }
    else 
    { 
		memcpy(newhvalue,RemoteIP,IPLen);
		if ( pReqHeaders->AddHeader (pfc, (LPSTR) X_FORWARDED_FOR, (LPSTR) newhvalue) )
		{
			return SF_STATUS_REQ_NEXT_NOTIFICATION;
		} else {
			return SF_STATUS_REQ_ERROR;
		}
	} */
}
