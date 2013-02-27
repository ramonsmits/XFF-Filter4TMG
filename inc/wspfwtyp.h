/*++

Copyright (c) Microsoft Corporation. All rights reserved.  
THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. 
THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER. 
USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

/*++

Module Name:

    wspfwtyp.h

Abstract:

    This file defines windows and winsock structure for the midl compiler.
    It would have been nice if it was possible to import winsock2.h
    alas this does not compile.

--*/


/*
 * Define constant based on rfc883, used by gethostbyxxxx() calls.
 */
#define MAXGETHOSTSTRUCT        1024

typedef struct _RemHOSTENT {
    BYTE SerializedHostEnt[MAXGETHOSTSTRUCT];
    BOOL IsNULL;
} RemHOSTENT;


#ifdef __midl

#define FAR

/*
 * Basic system type definitions, taken from the BSD file sys/types.h.
 */
typedef unsigned char   u_char;
typedef unsigned short  u_short;
typedef unsigned int    u_int;
typedef unsigned long   u_long;



/*
 * Structure used by kernel to store most
 * addresses.
 */
struct sockaddr {
        u_short sa_family;              /* address family */
        char    sa_data[14];            /* up to 14 bytes of direct address */
};

struct sockaddr_in {
        short   sin_family;
        u_short sin_port;
        struct  in_addr sin_addr;
        char    sin_zero[8];
};

/*
 * Internet address (old style... should be updated)
 */
struct in_addr {
        struct {
                u_long S_addr;
        } S_un;
};


/*
 * Structures returned by network data base library, taken from the
 * BSD file netdb.h.  All addresses are supplied in host order, and
 * returned in network order (suitable for use in system calls).
 */

struct  hostent {
        char    FAR * h_name;           /* official name of host */
        char    FAR * FAR * h_aliases;  /* alias list */
        short   h_addrtype;             /* host address type */
        short   h_length;               /* length of address */
        char    FAR * FAR * h_addr_list; /* list of addresses */
#define h_addr  h_addr_list[0]          /* address, for backward compat */
};

typedef struct __WSABUF {
  u_long     len;
  char FAR    *buf;
} WSABUF, *LPWSABUF;



/* Microsoft Windows Extended data types */
typedef struct sockaddr SOCKADDR;
typedef struct sockaddr *PSOCKADDR;
typedef struct sockaddr FAR *LPSOCKADDR;
typedef struct sockaddr_in SOCKADDR_IN;

typedef struct in_addr IN_ADDR;
typedef struct in_addr *PIN_ADDR;
typedef struct in_addr FAR *LPIN_ADDR;

typedef struct hostent HOSTENT;
typedef struct hostent *PHOSTENT;
typedef [transmit_as(RemHOSTENT)] struct hostent FAR *LPHOSTENT;



//
//  File structures
//

typedef struct _OVERLAPPED {
    DWORD   Internal;
    DWORD   InternalHigh;
    DWORD   Offset;
    DWORD   OffsetHigh;
    DWORD   hEvent;                     /* Was HANDLE */
} OVERLAPPED, *LPOVERLAPPED;

typedef int FAR*        LPINT;


//
// IPv6 related structures
//

struct in6_addr {
        u_char Byte[16];
};

/* IPv6 socket address structure, RFC 2553 */

struct sockaddr_in6 {
    short   sin6_family;        /* AF_INET6 */
    u_short sin6_port;          /* Transport level port number */
    u_long  sin6_flowinfo;      /* IPv6 flow information */
    struct in6_addr sin6_addr;  /* IPv6 address */
    u_long sin6_scope_id;       /* set of interfaces for a scope */
};

typedef struct sockaddr_in6 SOCKADDR_IN6;

//
// Structure big enough to hold both IPv4 and IPv6 sockaddrs
//
struct sockaddr_inx
{
    SOCKADDR_IN6  sain6;
};


typedef struct sockaddr_inx     SOCKADDR_INX;

//
// port
//
typedef USHORT CPort;

//
// address
//
struct in_addrx
{
    BYTE    m_Address[16];
};

typedef struct in_addrx IN_ADDRX;

#endif //__midl


