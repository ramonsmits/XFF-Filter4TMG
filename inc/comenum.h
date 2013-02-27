/*++

Copyright (c) Microsoft Corporation. All rights reserved.
THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND.
THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER.
USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

/**************************************************************************
 *
 * comenum.h -- Constants definitions for Microsoft ISA Server.
 *
 **************************************************************************/


#ifndef __COMENUM_H_
#define __COMENUM_H_



////////////////////////////////////////////////
// FpcPublishProtocolRedirectionType | Protocol used when redirecting a Web request.
typedef enum FpcPublishProtocolRedirectionType
{
    fpcHTTP,                                            // Route request using the HTTP protocol
    fpcFTP,                                             // Route request using the FTP protocol
    fpcSSL                                              // Route request using the HTTP protocol over a secure channel
} FpcPublishProtocolRedirectionType;

////////////////////////////////////////////////
// FpcPublishedServerType | Protocol used when redirecting a Web request.
typedef enum FpcPublishedServerType
{
    fpcWebServerThruHTTP,                               // Route request using the HTTP protocol
    fpcWebServerThruSSL,                                // Route request using the HTTP protocol over a secure channel
    fpcWebServerThruBothHTTPAndSSL,                     // Route HTTP requests using the HTTP protocol and the HTTPS requests over secure channel - using  the HTTP protocol over a secure channel
    fpcFTPServer                                        // Route request using the FTP protocol
} FpcPublishedServerType;

////////////////////////////////////////////////
// FpcLoadBalancingAffinityType | Web publishing load balancing affinity type
typedef enum FpcLoadBalancingAffinityType
{
    fpcSessionAffinity,                                 // Maintain session affinity (cookie based load balancing)
    fpcIPAffinity,                                      // Maintain client ip affinity
} FpcLoadBalancingAffinityType;

////////////////////////////////////////////////
// FpcFBAFormsTypes | Supported FBA Sets
typedef enum FpcFBAFormsTypes
{
    fpcFbaHTML4,                                        // Forms are in HTML 4.01 format
    fpcFbaCHTML,                                        // Forma are in cHTML format
    fpcFbaXHTML_MP,                                     // Forms are in XHTML-MP format
    fpcFbaHTTPBASIC                                     // Perform HTTP Basic auth instead of FBA
} FpcFBAFormsTypes;


////////////////////////////////////////////////
// FpcPrimaryRouteType | Primary routing behavior
typedef enum FpcPrimaryRouteType
{
    fpcPrimaryRouteDirect,                              // Route request to specified destination.
    fpcPrimaryRouteUpstream,                            // Route the request to an upstream ISA server or array.
    fpcPrimaryRouteAlternate,                           // Route to any other server.
} FpcPrimaryRouteType;

////////////////////////////////////////////////
// FpcBackupRouteActionType | Backup routing behavior
typedef enum FpcBackupRouteType
{
    fpcBackupRouteNone,                                 // No action
    fpcBackupRouteDirect,                               // Route the request to Internet.
    fpcBackupRouteUpstream,                             // Route the request to an upstream ISA server or array.
} FpcBackupRouteType;

////////////////////////////////////////////////
// FpcAuthType | Authentication method used for inter-server connections
typedef enum FpcAuthType
{
    fpcUiAuthBasic,                                     // Basic authentication
    fpcUiAuthIntegrated,                                // Integrated authentication
} FpcAuthType;

////////////////////////////////////////////////
// FpcCredentialsDelegationType | Credentials delegation type used for published servers
typedef enum FpcCredentialsDelegationType
{
    fpcDelegationNonePassThrough,                       // Allow credentials to pass-through
    fpcDelegationNoneBlock,                             // Do not allow any delegation
    fpcDelegationSecurID,                               // Allow delegation of RSA SecurID credentials
    fpcDelegationBasic,                                 // Allow delegation of Basic credentials
    fpcDelegationNTLM,                                  // Allow delegation of NTLM credentials
    fpcDelegationSPNEGO,                                // Allow delegation of SPNEGO credentials
    fpcDelegationKerberosConstrained                    // Allow Kerberos Constrained delegation
} FpcCredentialsDelegationType;

// FpcCredentialsDelegationPersistence | Contains values that specify whether the credentials will be delegated to the published server for each request or only once for a connection
typedef enum FpcCredentialsDelegationPersistence
{
    fpcCredentialsDelegationDefault,               // Once for a connection for NTLM, each request for Kerberos and Basic
    fpcCredentialsDelegationOnceForConnection,     // Only on one request for each connection
    fpcCredentialsDelegationForEachRequest         // For each request
} FpcCredentialsDelegationPersistence;

////////////////////////////////////////////////
// FpcUsePersistentCookiesComputerType | FBA Persistent cookies
typedef enum FpcUsePersistentCookiesComputerType
{
    fpcPersistentCookiesDisabled,                       // Persistent cookies are disabled for all client computers
    fpcPersistentCookiesEnabledForTrustedComputers,     // Persistent cookies are enabled for trusted computers
    fpcPersistentCookiesEnabledForAllComputers          // Persistent cookies are enabled for both trusted and public computers
} FpcUsePersistentCookiesComputerType;

////////////////////////////////////////////////
// FpcPreventCachingComputerType | Contains values that specify the types of client computers for which ISA Server will include a Cache-Control:No-Cache header to prevent the caching of protected content
typedef enum FpcPreventCachingComputerType
{
    fpcPreventCachingOnPublicAndTrustedComputers,       // Caching will be prevented on all client computers
    fpcPreventCachingOnPublicComputers,                 // Caching will be prevented on public client computers
    fpcPreventCachingOnNoClientComputers                // Caching will not be prevented on any client computers
} FpcPreventCachingComputerType;

////////////////////////////////////////////////
// FpcFwForwardType | Firewall chaining
typedef enum FpcFwForwardType
{
    fpcPrimaryConnection,                               // Forward requests to primary connection
    fpcChaining                                         // Forward requests to an upstream server
} FpcFwForwardType;


////////////////////////////////////////////////
// FpcClientBackupRouteType |
typedef enum FpcClientBackupRouteType
{
    fpcClientBackupRouteDirectToInternet,
    fpcClientBackupRouteViaProxy
} FpcClientBackupRouteType;


////////////////////////////////////////////////
// FpcActiveCachingPolicy | Active caching policy
typedef enum FpcActiveCachingPolicy
{
    fpcActiveCachingEmphasisOnFewerNetworkAccesses = 1, // Active caching is initiated relatively less frequently.
    fpcActiveCachingNoEmphasis,                         // Balanced active caching
    fpcActiveCachingEmphasisOnFasterUserResponse        // Active caching is initiated relatively more frequently.
} FpcActiveCachingPolicy;


////////////////////////////////////////////////
// FpcIpOptionsAction | IP options Filtering mode
typedef enum FpcIpOptionsAction
{
    fpcAllowPacketsIpOptions,
    fpcDenyPacketsIpOptions ,
    fpcDenyPacketsUnSelectedIpOptions,
    fpcDenyPacketsSelectedIpOptions
} FpcIpOptionsAction;

////////////////////////////////////////////////
// FpcPolicyRuleActions | Actions to perform when a rule criteria is met.
typedef enum FpcPolicyRuleActions
{
    fpcPolicyRuleActionAllow,                           // Allow access to the requeste
    fpcPolicyRuleActionDeny                             // Deny access to the requeste
} FpcPolicyRuleActions;

////////////////////////////////////////////////
// FpcPolicyRuleTypes | Type of policy rule
typedef enum FpcPolicyRuleTypes
{
    fpcPolicyRuleAccess,                                // access rule
    fpcPolicyRuleServerPublishing,                      // server publishing rule
    fpcPolicyRuleWebPublishing,                         // Web publishing rule
    fpcPolicyRuleArrayPolicyPlaceHolder = 0x100         // Array policy place holder
} FpcPolicyRuleTypes;

////////////////////////////////////////////////
// FpcTimeScale | Time ranges used in cache interval units
typedef enum FpcTimeScale
{
    fpcTimeInSeconds = 1,                               // seconds
    fpcTimeInMinutes,                                   // minutes
    fpcTimeInHours,                                     // hours
    fpcTimeInDays,                                      // days
    fpcTimeInWeeks                                      // weeks
} FpcTimeScale;

////////////////////////////////////////////////
// FpcScheduleDays| Days of the week used in schedules
typedef enum FpcScheduleDays
{
    fpcALL_WEEK = -1,                                   // All days in week
    fpcSUN,                                             // fpcSUN
    fpcMON,                                             // fpcMON
    fpcTUE,                                             // fpcTUE
    fpcWED,                                             // fpcWED
    fpcTHU,                                             // fpcTHU
    fpcFRI,                                             // fpcFRI
    fpcSAT                                              // fpcSAT
} FpcScheduleDays;

////////////////////////////////////////////////
// FpcScheduleHours | Hours of the day used in schedules
typedef enum FpcScheduleHours
{
    fpcALL_DAY = -1,                                    // All hours of the day
    fpcAM_12,                                           // Midnight
    fpcAM_1,                                            // 1 AM
    fpcAM_2,                                            // 2 AM
    fpcAM_3,                                            // 3 AM
    fpcAM_4,                                            // 4 AM
    fpcAM_5,                                            // 5 AM
    fpcAM_6,                                            // 6 AM
    fpcAM_7,                                            // 7 AM
    fpcAM_8,                                            // 8 AM
    fpcAM_9,                                            // 9 AM
    fpcAM_10,                                           // 10 AM
    fpcAM_11,                                           // 11 AM
    fpcPM_12,                                           // 12 PM
    fpcPM_1,                                            // 1 PM
    fpcPM_2,                                            // 2 PM
    fpcPM_3,                                            // 3 PM
    fpcPM_4,                                            // 4 PM
    fpcPM_5,                                            // 5 PM
    fpcPM_6,                                            // 6 PM
    fpcPM_7,                                            // 7 PM
    fpcPM_8,                                            // 8 PM
    fpcPM_9,                                            // 9 PM
    fpcPM_10,                                           // 10 PM
    fpcPM_11                                            // 11 PM
} FpcScheduleHours;

////////////////////////////////////////////////
// FpcAlertActionTypes | Action that can be triggered by events
typedef enum FpcAlertActionTypes
{
    fpcAlertActionLogEvent,                             //Log event to System Event Log
    fpcAlertActionCommand,                              //Run command line
    fpcAlertActionSendMail,                             //Send message
    fpcAlertActionStopServices,                         //Stop ISA Server services
    fpcAlertActionStartServices                         //Start ISA Server services
} FpcAlertActionTypes;

////////////////////////////////////////////////
// Accounttypes | NT account types
typedef enum FpcAccountTypes
{
    fpcAccountTypeUser,                                 // A User.
    fpcAccountTypeGroup,                                // A group of users
    fpcAccountTypeDomain,                               // A domain of users.
    fpcAccountTypeAlias,                                // An alias.
    fpcAccountTypeWellKnownGroup,                       // A predefined account (e.g., Everyone)
    fpcAccountTypeUnknown                               // An unknown account type (for example, when DC is unavailable)
} FpcAccountTypes;

////////////////////////////////////////////////
// IncludeStatus | Defines whether a refrence of the item is included or excluded in the list to which a rule applies.
typedef enum FpcIncludeStatus
{
    fpcInclude,                                         // Ref is included.
    fpcExclude                                          // Ref is excluded.
} FpcIncludeStatus;

////////////////////////////////////////////////
// ConnectionProtocoltype | Protocol definition: IP protocol type
typedef enum FpcConnectionProtocolType
{
    fpcRawProtocol0,
    fpcICMP,
    fpcIGMP,
    fpcGGP,
    fpcIP,
    fpcST,
    fpcTCP, //=6
    fpcRawProtocol7,
    fpcRawProtocol8,
    fpcRawProtocol9,
    fpcRawProtocol10,
    fpcRawProtocol11,
    fpcRawProtocol12,
    fpcRawProtocol13,
    fpcRawProtocol14,
    fpcRawProtocol15,
    fpcRawProtocol16,
    fpcUDP, //=17
    fpcRawProtocol18,
    fpcRawProtocol19,
    fpcRawProtocol20,
    fpcRawProtocol21,
    fpcRawProtocol22,
    fpcRawProtocol23,
    fpcRawProtocol24,
    fpcRawProtocol25,
    fpcRawProtocol26,
    fpcRawProtocol27,
    fpcRawProtocol28,
    fpcRawProtocol29,
    fpcRawProtocol30,
    fpcRawProtocol31,
    fpcRawProtocol32,
    fpcRawProtocol33,
    fpcRawProtocol34,
    fpcRawProtocol35,
    fpcRawProtocol36,
    fpcRawProtocol37,
    fpcRawProtocol38,
    fpcRawProtocol39,
    fpcRawProtocol40,
    fpcRawProtocol41,
    fpcRawProtocol42,
    fpcRawProtocol43,
    fpcRawProtocol44,
    fpcRawProtocol45,
    fpcRawProtocol46,
    fpcRawProtocol47,
    fpcRawProtocol48,
    fpcRawProtocol49,
    fpcRawProtocol50,
    fpcRawProtocol51,
    fpcRawProtocol52,
    fpcRawProtocol53,
    fpcRawProtocol54,
    fpcRawProtocol55,
    fpcRawProtocol56,
    fpcRawProtocol57,
    fpcICMPv6,
    fpcRawProtocol59,
    fpcRawProtocol60,
    fpcRawProtocol61,
    fpcRawProtocol62,
    fpcRawProtocol63,
    fpcRawProtocol64,
    fpcRawProtocol65,
    fpcRawProtocol66,
    fpcRawProtocol67,
    fpcRawProtocol68,
    fpcRawProtocol69,
    fpcRawProtocol70,
    fpcRawProtocol71,
    fpcRawProtocol72,
    fpcRawProtocol73,
    fpcRawProtocol74,
    fpcRawProtocol75,
    fpcRawProtocol76,
    fpcRawProtocol77,
    fpcRawProtocol78,
    fpcRawProtocol79,
    fpcRawProtocol80,
    fpcRawProtocol81,
    fpcRawProtocol82,
    fpcRawProtocol83,
    fpcRawProtocol84,
    fpcRawProtocol85,
    fpcRawProtocol86,
    fpcRawProtocol87,
    fpcRawProtocol88,
    fpcRawProtocol89,
    fpcRawProtocol90,
    fpcRawProtocol91,
    fpcRawProtocol92,
    fpcRawProtocol93,
    fpcRawProtocol94,
    fpcRawProtocol95,
    fpcRawProtocol96,
    fpcRawProtocol97,
    fpcRawProtocol98,
    fpcRawProtocol99,
    fpcRawProtocol100,
    fpcRawProtocol101,
    fpcRawProtocol102,
    fpcRawProtocol103,
    fpcRawProtocol104,
    fpcRawProtocol105,
    fpcRawProtocol106,
    fpcRawProtocol107,
    fpcRawProtocol108,
    fpcRawProtocol109,
    fpcRawProtocol110,
    fpcRawProtocol111,
    fpcRawProtocol112,
    fpcRawProtocol113,
    fpcRawProtocol114,
    fpcRawProtocol115,
    fpcRawProtocol116,
    fpcRawProtocol117,
    fpcRawProtocol118,
    fpcRawProtocol119,
    fpcRawProtocol120,
    fpcRawProtocol121,
    fpcRawProtocol122,
    fpcRawProtocol123,
    fpcRawProtocol124,
    fpcRawProtocol125,
    fpcRawProtocol126,
    fpcRawProtocol127,
    fpcRawProtocol128,
    fpcRawProtocol129,
    fpcRawProtocol130,
    fpcRawProtocol131,
    fpcRawProtocol132,
    fpcRawProtocol133,
    fpcRawProtocol134,
    fpcRawProtocol135,
    fpcRawProtocol136,
    fpcRawProtocol137,
    fpcRawProtocol138,
    fpcRawProtocol139,
    fpcRawProtocol140,
    fpcRawProtocol141,
    fpcRawProtocol142,
    fpcRawProtocol143,
    fpcRawProtocol144,
    fpcRawProtocol145,
    fpcRawProtocol146,
    fpcRawProtocol147,
    fpcRawProtocol148,
    fpcRawProtocol149,
    fpcRawProtocol150,
    fpcRawProtocol151,
    fpcRawProtocol152,
    fpcRawProtocol153,
    fpcRawProtocol154,
    fpcRawProtocol155,
    fpcRawProtocol156,
    fpcRawProtocol157,
    fpcRawProtocol158,
    fpcRawProtocol159,
    fpcRawProtocol160,
    fpcRawProtocol161,
    fpcRawProtocol162,
    fpcRawProtocol163,
    fpcRawProtocol164,
    fpcRawProtocol165,
    fpcRawProtocol166,
    fpcRawProtocol167,
    fpcRawProtocol168,
    fpcRawProtocol169,
    fpcRawProtocol170,
    fpcRawProtocol171,
    fpcRawProtocol172,
    fpcRawProtocol173,
    fpcRawProtocol174,
    fpcRawProtocol175,
    fpcRawProtocol176,
    fpcRawProtocol177,
    fpcRawProtocol178,
    fpcRawProtocol179,
    fpcRawProtocol180,
    fpcRawProtocol181,
    fpcRawProtocol182,
    fpcRawProtocol183,
    fpcRawProtocol184,
    fpcRawProtocol185,
    fpcRawProtocol186,
    fpcRawProtocol187,
    fpcRawProtocol188,
    fpcRawProtocol189,
    fpcRawProtocol190,
    fpcRawProtocol191,
    fpcRawProtocol192,
    fpcRawProtocol193,
    fpcRawProtocol194,
    fpcRawProtocol195,
    fpcRawProtocol196,
    fpcRawProtocol197,
    fpcRawProtocol198,
    fpcRawProtocol199,
    fpcRawProtocol200,
    fpcRawProtocol201,
    fpcRawProtocol202,
    fpcRawProtocol203,
    fpcRawProtocol204,
    fpcRawProtocol205,
    fpcRawProtocol206,
    fpcRawProtocol207,
    fpcRawProtocol208,
    fpcRawProtocol209,
    fpcRawProtocol210,
    fpcRawProtocol211,
    fpcRawProtocol212,
    fpcRawProtocol213,
    fpcRawProtocol214,
    fpcRawProtocol215,
    fpcRawProtocol216,
    fpcRawProtocol217,
    fpcRawProtocol218,
    fpcRawProtocol219,
    fpcRawProtocol220,
    fpcRawProtocol221,
    fpcRawProtocol222,
    fpcRawProtocol223,
    fpcRawProtocol224,
    fpcRawProtocol225,
    fpcRawProtocol226,
    fpcRawProtocol227,
    fpcRawProtocol228,
    fpcRawProtocol229,
    fpcRawProtocol230,
    fpcRawProtocol231,
    fpcRawProtocol232,
    fpcRawProtocol233,
    fpcRawProtocol234,
    fpcRawProtocol235,
    fpcRawProtocol236,
    fpcRawProtocol237,
    fpcRawProtocol238,
    fpcRawProtocol239,
    fpcRawProtocol240,
    fpcRawProtocol241,
    fpcRawProtocol242,
    fpcRawProtocol243,
    fpcRawProtocol244,
    fpcRawProtocol245,
    fpcRawProtocol246,
    fpcRawProtocol247,
    fpcRawProtocol248,
    fpcRawProtocol249,
    fpcRawProtocol250,
    fpcRawProtocol251,
    fpcRawProtocol252,
    fpcRawProtocol253,
    fpcRawProtocol254,
} FpcConnectionProtocolType;

////////////////////////////////////////////////
// Connectiondirectiontype | Protocol definition: connection type
typedef enum FpcConnectionDirectionType
{
    fpcInbound,                                         // Inbound connection.
    fpcOutbound                                         // Outbound connection.
} FpcConnectionDirectionType;

////////////////////////////////////////////////
// FpcUDPConnectionDirectionType | Protocol definition: UDP connection direction type
typedef enum FpcUDPConnectionDirectionType
{
    fpcReceiveOnly,                                     // Direction: Receive Only
    fpcSendOnly,                                        // Direction: Send Only
    fpcReceiveSend,                                     // Direction: Recieve (and then send)
    fpcSendReceive                                      // Direction: Send (and then receive)
} FpcUDPConnectionDirectionType;

////////////////////////////////////////////////
// FpcLoggingComponents
typedef enum FpcLoggingComponents
{
    fpcProxyWebLog  = 0x00000001,                       // Web Proxy log.
    fpcProxyFwLog   = 0x00000002,                       // Firewall log
    fpcProxyMailLog = 0x00000004                        // Mail log.
} FpcLoggingComponents;

////////////////////////////////////////////////
// FpcLogFileDirectoryType
typedef enum FpcLogFileDirectoryType
{
    fpcFullPath,                                        // The full path is specified for the log file directory.
    fpcRelativePath                                     // The log file directory is specified relative to ISA Server computer's installation directory.
} FpcLogFileDirectoryType;

////////////////////////////////////////////////
// FpcServices | ISA Server components.
typedef enum FpcServices
{
    fpcNoService    = 0x00000000,                       // empty service
    fpcFwSrvSvc     = 0x00000001,                       // Firewall component
    fpcJobSchedSvc  = 0x00000002,                       // Job Scheduler service
    fpcMSDESvc      = 0x00000004,                       // MSDE service
    fpcAllServices  = 0xFFFFFFFF,                       // All the above components
    fpcIsaDatabaseLogSvc = fpcMSDESvc
} FpcServices;

////////////////////////////////////////////////
// ProtocolSelectiontype | Protocols to which a rule applies
typedef enum FpcProtocolSelectionType
{
    fpcAllIpTraffic,                                    // All IP connections.
    fpcSpecifiedProtocols,                              // Specified protocols
    fpcAllExceptSpecifiedProtocols                      // All protocols except those specified
} FpcProtocolSelectionType;                          // Specified Protocols property

////////////////////////////////////////////////
// FpcLogType |
typedef enum FpcLogType
{
    fpcFile_EXT_Format = 0,                                 //Logging W3C extended format to text log files
    fpcFile_ISA_Format = 1,                                 //Logging ISA format to text log files
    fpcODBC = 2,                                            //Logging to ODBC- deprecated. value = 2 important for upgrade\migration tools
    fpcMSDE = 3,                                            //MSDE is no longer installed with ISA2007 and newer versions. fpcIsaDatabaseLog is an equivalent.
    fpcSQLDirectConnection = 4,                             //Logging to SQL log, using OLEDB
    fpcIsaDatabaseLog = fpcMSDE                             //Logging to a local ISA Log Database data base (replacing the MSDE option)
} FpcLogType;


////////////////////////////////////////////////
// FpcSQLAuthType |
typedef enum FpcSQLAuthType
{
    fpcWinAuth,                                //Windows Authentication
    fpcSQLAuth                                 //SQL server Authentication
} FpcSQLAuthType;


////////////////////////////////////////////////
// ArrayType |
typedef enum FpcArrayType
{
    fpcTypeStandardEdition,                             // stand-alone (registry based) array with single server in standard edition
    fpcTypeEnterpriseEdition                            // server array in enterprise edition
} FpcArrayType;


////////////////////////////////////////////////
// ArrayType |
typedef enum FpcIsaEditionType
{
    fpcIsaStandardEdition    = 0x10,                    // ISA standard edition
    fpcIsaEnterpriseEdition  = 0x20                     // ISA enterprise edition
} FpcIsaEditionType;


////////////////////////////////////////////////
// FpcScheduledJobRunningPeriod | Scheduled jobs running periods
typedef enum FpcScheduledTaskRunningPeriod
{
    fpcRunOnce,                                         //run a scheduled job only once
    fpcRunDaily,                                        //run a scheduled job once per day
    fpcRunOnSpecifiedDaysOfWeek,                        //run a scheduled job on specified days of week
    fpcRunOnSpecifiedDayOfMonth                         //run a scheduled job on specified day of month
} FpcScheduledTaskRunningPeriod;


////////////////////////////////////////////////
// AppliesToContentMethod | Content to which rule is applied
typedef enum FpcAppliesToContentMethodType
{
    fpcAppliesToAllContent,                             //Rule applies to all types of content
    fpcAppliesToSpecifiedContent                        //Rule applies to specified content
} FpcAppliesToContentMethodType;


////////////////////////////////////////////////
// FpcCacheAction | Indicates when object should be returned from ISA Server cache
//
//
typedef enum FpcCacheAction
{
    fpcServeFromCacheIfValidObjectExists,               // Use only valid objects. If no valid object, connect to the Internet.
    fpcServeFromCacheIfObjectExists,                    // Use any object from cache (even if invalid). If object does not exist, connect to the Internet.
    fpcServeFromCacheOnly                               // Use object from cache (even if invalid). If object does not exist, fail.
} FpcCacheAction;

////////////////////////////////////////////////
// FpcCacheContent | these options identify whether the response will be cached.
typedef enum FpcCacheContent
{
    fpcCacheAlways,                                     // Always cache the response
    fpcCacheCacheableAndDynamic,                        // Cache the response only if cacheable or dynamic
    fpcCacheCacheable,                                  // Cache the response only if cacheable
    fpcNeverCache                                       // Never cache the response
} FpcCacheContent;

////////////////////////////////////////////////
// FpcFilterMode | Identify direction used in ISAPI filter
typedef enum FpcFilterDirection
{
    fpcFilterDirectionForward,                          //Filter applies to incoming packets
    fpcFilterDirectionReverse,                          //Filter applies to outgoing packets
    fpcFilterDirectionBoth                              //Filter applies to both incoming and outgoing packets
} FpcFilterDirection;

////////////////////////////////////////////////
// FpcServiceTypes | flags indicating which services can use a given authentication scheme
typedef enum FpcServiceTypes
{
    fpcServiceTypeUnknown         = 0x00000000,         // It is unknown which service can use the given scheme
    fpcServiceTypeWebProxyReverse = 0x00000001,         // The Web Proxy service can use the given scheme for http requests in reverse mode
    fpcServiceTypeWebProxyForward = 0x00000002,         // The Web Proxy service can use the given scheme for http requests in forward mode
    fpcServiceTypeWebProxyBoth    = 0x00000003,         // The Web Proxy service can use the given scheme for http requests
} FpcServiceTypes;

////////////////////////////////////////////////
// FpcAuthenticationSchemeProvides | flags indicating what a give authentication scheme provids
typedef enum FpcAuthenticationSchemeProvides
{
    fpcAuthenticationSchemeProvidesNothing   =  0x00000000, // The authentication scheme provides nothing
    fpcAuthenticationSchemeProvidesNamespace =  0x00000001, // The authentication scheme provides a user namespace
    fpcAuthenticationSchemeProvidesMethod    =  0x00000002, // The authentication scheme provides an authentication method
    fpcAuthenticationSchemeProvidesBoth      =  0x00000003, // The authentication scheme provides both a user namespace and an authentication method
} FpcAuthenticationSchemeProvides;

////////////////////////////////////////////////
// FpcDaysOfWeek |
typedef enum FpcDaysOfWeek
{
    fpcNone         = 0x00000000,
    fpcSundayBit    = 0x00000001,
    fpcMondayBit    = 0x00000002,
    fpcTuesdayBit   = 0x00000004,
    fpcWednesdayBit = 0x00000008,
    fpcThursdayBit  = 0x00000010,
    fpcFridayBit    = 0x00000020,
    fpcSaturdayBit  = 0x00000040
} FpcDaysOfWeek;

////////////////////////////////////////////////
// FpcFetchURLFlags | these flags control FetchUrl behavior
typedef enum FpcFetchURLFlags
{
    fpcFetchTtlIfNone        = 0x00000001,              //TtlInMinutes parameter should be used only if the object does not contain an "Expires" or "Cache-Control: max-age" HTTP header.
    fpcFetchTtlOverride      = 0x00000002,              //TtlInMinutes parameter takes precedence over any HTTP headers in the object.
    fpcFetchSynchronous      = 0x00000004,              //Method will not return until the fetch is completed.
    fpcFetchNoArrayRouting   = 0x00000008,              //Fetch object from target server even if another array member is the prefered location.
    fpcFetchForceCache       = 0x00000010,              //Cache all objects even if object isn't normally cachable.
    fpcFetchDynamicCache     = 0x00000020               //Cache dynamic objects even if object isn't normally cachable.
} FpcFetchURLFlags;


////////////////////////////////////////////////
// FpcSSLRequireSecureChannelMode | Web publishing rule: Specify if SSL connection is required
typedef enum FpcSSLRequireSecureChannelMode
{
    fpcSSLDontRequireSecureChannel,                     // Don't require secure channel
    fpcSSLRequireSecureChannel,                         // Require secure channel
    fpcSSLRequire128bitSecureChannel,                   // Require secure channel using 128 bit encryption
    fpcSSLRequireBoth                                   // Require secure channel and 128 bit encryption
} FpcSSLRequireSecureChannelMode;

////////////////////////////////////////////////
// FpcComponents
typedef enum FpcComponents
{
    fpcNoComponents       = 0x00000000,
    fpcNATComponent       = 0x00000002,
    fpcWEBProxy           = 0x00000004,
    fpcHTTPTransparent    = 0x00000008,
    fpcGenericFwProtocols = 0x00000010,
    fpcFirewallExtensions = 0x00000020,
    fpcAllComponents      = 0xFFFFFFFF
} FpcComponents;

////////////////////////////////////////////////
// FpcNameSystem
typedef enum FpcNameSystem
{
    fpcNameSystem_DNS,
    fpcNameSystem_WINS,
    fpcNameSystem_IP
} FpcNameSystem;

////////////////////////////////////////////////
// FpcFilterPriority
typedef enum FpcFilterPriority
{
    fpcFilterPriority_Low,
    fpcFilterPriority_Medium,
    fpcFilterPriority_High
} FpcFilterPriority;

////////////////////////////////////////////////
// FpcBrowserConfigScriptFlag
typedef enum FpcBrowserConfigScriptFlag
{
    fpcBrowserDefaultScript,
    fpcBrowserCustomScript
} FpcBrowserConfigScriptFlag;

////////////////////////////////////////////////
// FpcSizeUnits
typedef enum FpcSizeUnits
{
    fpcKB = 1,
    fpcMB,
    fpcGB
} FpcSizeUnits;

////////////////////////////////////////////////
// FpcDailyFrequency
typedef enum FpcDailyFrequency
{
    fpcOnce,
    fpcRecurring
} FpcDailyFrequency;

////////////////////////////////////////////////
// FpcNetworkTypes
typedef enum FpcNetworkTypes
{
    fpcStandardNetwork = 0,
    fpcVPNClients,
    fpcLocalHost,
    fpcDefaultExternal,
    fpcInternalNetwork,
    fpcQuarantinedVPNClients
} FpcNetworkTypes;

////////////////////////////////////////////////
// FpcNetworkRoutingTypes
typedef enum FpcNetworkRoutingTypes
{
    fpcRoute = 0,
    fpcNat
} FpcNetworkRoutingTypes;

////////////////////////////////////////////////
// FpcVpnQuarantineMode
typedef enum FpcVpnQuarantineMode
{
    fpcVpnQuarantineDisabled = 0,
    fpcVpnQuarantineEnabled,
    fpcVpnQuarantineEnabledWithRadiusPolicy
} FpcVpnQuarantineMode;

////////////////////////////////////////////////
// FpcVpnProtocol
typedef enum FpcVpnProtocol
{
    fpcVpnL2TP = 0,
    fpcVpnPPTP,
    fpcVpnSSTP
} FpcVpnProtocol;

////////////////////////////////////////////////
// FpcVpnAuthenticationMethod
typedef enum FpcVpnAuthenticationMethod
{
    fpcVpnCertificate = 0,
    fpcVpnPresharedKey
} FpcVpnAuthenticationMethod;

////////////////////////////////////////////////
// FpcVpnEncryptionAlgorithm
typedef enum FpcVpnEncryptionAlgorithm
{
    fpcVpnDES = 0,
    fpcVpn3DES,
    fpcVpnAES128,
    fpcVpnAES192,
    fpcVpnAES256,
    fpcVpnGCMAES128,
    fpcVpnGCMAES192,
    fpcVpnGCMAES256
} FpcVpnEncryptionAlgorithm;

////////////////////////////////////////////////
// FpcVpnIntegrityAlgorithm
typedef enum FpcVpnIntegrityAlgorithm
{
    fpcVpnSHA1 = 0,
    fpcVpnMD5,
    fpcVpnSHA256
} FpcVpnIntegrityAlgorithm;

////////////////////////////////////////////////
// FpcVpnDiffieHellmanGroup
typedef enum FpcVpnDiffieHellmanGroup
{
    fpcVpnDHGroup1 = 0,
    fpcVpnDHGroup2,
    fpcVpnDHGroup2048,
    fpcVpnDHECPGroup256,
    fpcVpnDHECPGroup384
} FpcVpnDiffieHellmanGroup;

////////////////////////////////////////////////
// FpcNetworkConnectionType
typedef enum FpcNetworkConnectionType
{
    fpcAdapter = 0,
    fpcVPNConnection,
    fpcDialupConnection,
    fpcVirtualConnection,
    fpcIPSecConnection
} FpcNetworkConnectionType;

////////////////////////////////////////////////
// FpcNetworkSetType
typedef enum FpcNetworkSetType
{
    fpcSelectedNetworks = 0,
    fpcAllExceptSelectedNetworks
} FpcNetworkSetType;

////////////////////////////////////////////////
// FpcIPSelectionMethods
typedef enum FpcIPSelectionMethods
{
    fpcAllIPAddresses,
    fpcDefaultIPAddress,
    fpcSpecifiedIPAddress
} FpcIPSelectionMethods;

////////////////////////////////////////////////
// FpcExportImportOptionalData
typedef enum FpcExportImportOptionalData
{
    fpcExportImportPasswords        = 0x00000001,
    fpcExportImportUserPermissions  = 0x00000002,
    fpcExportImportServerSpecific   = 0x00000004,
    fpcExportImportEnterpriseSpecific  = 0x00000008,
} FpcExportImportOptionalData;

////////////////////////////////////////////////
// FpcReportJobPeriodType
typedef enum FpcReportJobPeriodType
{
    fpcReportJobPeriodDay,
    fpcReportJobPeriodWeek,
    fpcReportJobPeriodMonth,
    fpcReportJobPeriodYear,
    fpcReportJobPeriodCustom,
    fpcReportJobPeriodImmediate
} FpcReportJobPeriodType;

////////////////////////////////////////////////
// FpcReportParameterDataType
typedef enum FpcReportParameterDataType
{
    FpcReportParameterDataString,
    FpcReportParameterDataInt,
    FpcReportParameterDataCombo
} FpcReportParameterDataType;

////////////////////////////////////////////////
// FpcReportJobCategory
typedef enum FpcReportJobCategory
{
    fpcReportJobCategorySummaryBit                  = 0x00000001,
    fpcReportJobCategoryWebUsageBit                 = 0x00000002,
    fpcReportJobCategoryApplicationUsageBit         = 0x00000004,
    fpcReportJobCategoryTrafficAndUtilizationBit    = 0x00000008,
    fpcReportJobCategorySecurityBit                 = 0x00000010,
    fpcReportJobCategoryMalwareInspectionBit        = 0x00000020,
    fpcReportJobCategoryUrlFilteringBit             = 0x00000040,
    fpcReportJobCategoryIpsBit                      = 0x00000080
} FpcReportJobCategory;

////////////////////////////////////////////////
// FpcAlertCategory
typedef enum FpcAlertCategory
{
    fpcSecurityAlerts = 0,
    fpcCacheAlerts,
    fpcRoutingAlerts,
    fpcFwServiceAlerts,
    fpcOtherAlerts,
    fpcNLBAlerts
} FpcAlertCategory;

////////////////////////////////////////////////
// FpcAlertSeverity
typedef enum FpcAlertSeverity
{
    fpcAlertError = 0,
    fpcAlertWarning,
    fpcAlertInformation
} FpcAlertSeverity;

////////////////////////////////////////////////
// FpcReportStatus
typedef enum FpcReportStatus
{
    fpcReportFailed = 0,
    fpcReportSucceeded,
    fpcReportRunning,
    fpcReportNotRun
} FpcReportStatus;

////////////////////////////////////////////////
// FpcReportSortOrder
typedef enum FpcReportSortOrder
{
    fpcRequestsSortOrder,
    fpcUsersSortOrder,
    fpcBytesInSortOrder,
    fpcBytesOutSortOrder,
    fpcTotalBytesSortOrder
} FpcReportSortOrder;

////////////////////////////////////////////////
// FpcTopSitesReportSortOrder
typedef enum FpcTopSitesReportSortOrder
{
    fpcTopSitesRequests   = fpcRequestsSortOrder,
    fpcTopSitesUsers      = fpcUsersSortOrder,
    fpcTopSitesBytesIn    = fpcBytesInSortOrder,
    fpcTopSitesBytesOut   = fpcBytesOutSortOrder,
    fpcTopSitesTotalBytes = fpcTotalBytesSortOrder
} FpcTopSitesReportSortOrder;

////////////////////////////////////////////////
// FpcTopSitesReportSortOrder
typedef enum FpcTopUsersReportSortOrder
{
    fpcTopUsersRequests   = fpcRequestsSortOrder,
    fpcTopUsersBytesIn    = fpcBytesInSortOrder,
    fpcTopUsersBytesOut   = fpcBytesOutSortOrder,
    fpcTopUsersTotalBytes = fpcTotalBytesSortOrder
} FpcTopUsersReportSortOrder;


////////////////////////////////////////////////
// FpcTopWebProtocolReportSortOrder
typedef enum FpcTopWebProtocolReportSortOrder
{
    fpcWebProtocolRequests   = fpcRequestsSortOrder,
    fpcWebProtocolUsers      = fpcUsersSortOrder,
    fpcWebProtocolBytesIn    = fpcBytesInSortOrder,
    fpcWebProtocolBytesOut   = fpcBytesOutSortOrder,
    fpcWebProtocolTotalBytes = fpcTotalBytesSortOrder
} FpcTopWebProtocolReportSortOrder;

////////////////////////////////////////////////
// FpcTopAppProtocolReportSortOrder
typedef enum FpcTopAppProtocolReportSortOrder
{
    fpcAppProtocolRequests = fpcRequestsSortOrder,
    fpcAppProtocolUsers    = fpcUsersSortOrder
} FpcTopAppProtocolReportSortOrder;

////////////////////////////////////////////////
// FpcCacheReportSortOrder
typedef enum FpcCacheReportSortOrder
{
    fpcCacheRequests = fpcRequestsSortOrder,
    fpcCacheBytes    = fpcTotalBytesSortOrder
} FpcCacheReportSortOrder;


////////////////////////////////////////////////
// FpcTopAppsReportSortOrder
typedef enum FpcTopAppsReportSortOrder
{
    fpcTopAppsRequests = fpcRequestsSortOrder,
    fpcTopAppsUsers    = fpcUsersSortOrder
} FpcTopAppsReportSortOrder;

////////////////////////////////////////////////
// FpcBrowsersReportSortOrder
typedef enum FpcBrowsersReportSortOrder
{
    fpcBrowsersRequests = fpcRequestsSortOrder,
    fpcBrowsersUsers    = fpcUsersSortOrder
} FpcBrowsersReportSortOrder;

////////////////////////////////////////////////
// FpcOperatingSystemsReportSortOrder
typedef enum FpcOperatingSystemsReportSortOrder
{
    fpcOperatingSystemsRequests = fpcRequestsSortOrder,
    fpcOperatingSystemsUsers    = fpcUsersSortOrder
} FpcOperatingSystemsReportSortOrder;


////////////////////////////////////////////////
// FpcObjectTypesReportSortOrder
typedef enum FpcObjectTypesReportSortOrder
{
    fpcObjectTypesRequests = fpcRequestsSortOrder,
    fpcObjectTypesUsers    = fpcUsersSortOrder,
    fpcObjectTypesBytesIn  = fpcBytesInSortOrder
} FpcObjectTypesReportSortOrder;

////////////////////////////////////////////////
// FpcTopDestinationsReportSortOrder
typedef enum FpcTopDestinationsReportSortOrder
{
    fpcTopDestinationsRequests   = fpcRequestsSortOrder,
    fpcTopDestinationsUsers      = fpcUsersSortOrder,
    fpcTopDestinationsBytesIn    = fpcBytesInSortOrder,
    fpcTopDestinationsBytesOut   = fpcBytesOutSortOrder,
    fpcTopDestinationsTotalBytes = fpcTotalBytesSortOrder
} FpcTopDestinationsReportSortOrder;

////////////////////////////////////////////////
// FpcUrlCategoriesReportSortOrder
typedef enum FpcUrlCategoriesReportSortOrder
{
    fpcUrlCategoriesRequests   = fpcRequestsSortOrder,
    fpcUrlCategoriesBytesIn    = fpcBytesInSortOrder,
    fpcUrlCategoriesBytesOut   = fpcBytesOutSortOrder,
    fpcUrlCategoriesTotalBytes = fpcTotalBytesSortOrder
} FpcUrlCategoriesReportSortOrder;

////////////////////////////////////////////////
// FpcIpsProtocolsReportSortOrder
typedef enum FpcIpsProtocolsReportSortOrder
{
    fpcIpsProtocolsRequests   = fpcRequestsSortOrder,
    fpcIpsProtocolsTotalBytes = fpcTotalBytesSortOrder
} FpcIpsProtocolsReportSortOrder;


////////////////////////////////////////////////
// FpcProtocolCategory
typedef enum FpcProtocolCategory
{
    fpcProtocolCategoriesAll                = 0x00000000,  // all protocols
    fpcProtocolCategoryUserDefined          = 0x00000001,
    fpcProtocolCategoryCommon               = 0x00000002,
    fpcProtocolCategoryInfrastructure       = 0x00000004,
    fpcProtocolCategoriesMail               = 0x00000008,
    fpcProtocolCategoriesMessaging          = 0x00000010,
    fpcProtocolCategoriesRemote             = 0x00000020,
    fpcProtocolCategoriesMedia              = 0x00000040,
    fpcProtocolCategoriesVpnIpsec           = 0x00000080,
    fpcProtocolCategoriesWeb                = 0x00000100,
    fpcProtocolCategoriesAuthentication     = 0x00000200,
    fpcProtocolCategoryIPv6Infrastructure   = 0x00000400,
    fpcAllProtocolCategories                = 0xFFFFFFFF
} FpcProtocolCategory;

////////////////////////////////////////////////
// FpcFilterCriteria
typedef enum FpcFilterCriteria
{
    fpcNoFilter,
    fpcFilterByClientIP,
    fpcFilterByClientUserName,
    fpcFilterByClientAgent,
    fpcFilterByAuthenticated,
    fpcFilterByService,
    fpcFilterByServername,
    fpcFilterByReferringServer,
    fpcFilterByDestHost,
    fpcFilterByDestHostIP,
    fpcFilterByProtocol,
    fpcFilterByTransport,
    fpcFilterByOperation,
    fpcFilterByUrl,
    fpcFilterByRule,
    fpcFilterByFilterInfo,
    fpcFilterByMimetype,
    fpcFilterByObjectSource,
    fpcFilterByLogTime,
    fpcFilterByCacheInfo,
    fpcFilterByErrorInfo,
    fpcFilterByDestHostPort,
    fpcFilterBySrcPort,
    fpcFilterByLogType,
    fpcFilterBySessionType,
    fpcFilterByActivation,
    fpcFilterByClientComputerName,
    fpcFilterBySourceNetwork,
    fpcFilterByDestinationNetwork,
    fpcFilterBySourceProxy,
    fpcFilterByDestinationProxy,
    fpcFilterByAction,
    fpcFilterByBidirectional,
    fpcFilterByInterface,
    fpcFilterByHeader,
    fpcFilterByPayload,
    fpcFilterProcessingTime,
    fpcFilterByResultCode,
    fpcFilterByBytesSent,
    fpcFilterByBytesReceived,
    fpcFilterByApplicationName,
    fpcFilterByOriginalClientIP,
    fpcFilterByHTTPCode,
    fpcFilterByGMTLogTime,
    fpcFilterByAuthServer,
    fpcFilterByIpsScanResult,
    fpcFilterByIpsSignature,
    fpcFilterByThreatName,
    fpcFilterByMalwareInspectionAction,
    fpcFilterByMalwareInspectionActionReason,
    fpcFilterByUrlCategory,
    fpcFilterByMalwareInspectionContentDeliveryMethod,
    fpcFilterByUagArrayId,
    fpcFilterByUagVersion,
    fpcFilterByUagModuleId,
    fpcFilterByUagId,
    fpcFilterByUagSeverity,
    fpcFilterByUagType,
    fpcFilterByUagEventName,
    fpcFilterByUagSessionId,
    fpcFilterByUagTrunkName,
    fpcFilterByUagServiceName,
    fpcFilterByUagErrorCode,
    fpcFilterByMalwareInspectionDuration,
    fpcFilterByMalwareInspectionThreatLevel,
    fpcFilterByNATAddress,
    fpcFilterByInternalServiceInfo,
    fpcFilterByFwcAppPath,
    fpcFilterByFwcAppSHA1,
    fpcFilterByFwcAppTrustState,
    fpcFilterByFwcAppInternalName,
    fpcFilterByFwcAppProductName,
    fpcFilterByFwcAppProductVersion,
    fpcFilterByFwcAppFileVersion,
    fpcFilterByFwcAppOrgFileName,
    fpcFilterByFwcClientFQDN,
    fpcFilterByIpsApplicationProtocol,
    fpcFilterByUrlCategorizationReason,
    fpcFilterByFwcVersion,
    fpcFilterByUrlDestHost
} FpcFilterCriteria;

////////////////////////////////////////////////
// FpcFilterCondition
typedef enum FpcFilterCondition
{
    fpcNoCondition      = 0x00000000,
    fpcEqual            = 0x00000001,
    fpcNotEqual         = 0x00000002,
    fpcGreaterOrEqual   = 0x00000004,
    fpcLessOrEqual      = 0x00000008,
    fpcOnOrAfter        = 0x00000010,
    fpcOnOrBefore       = 0x00000020,
    fpcContains         = 0x00000040,
    fpcLiveData         = 0x00000080,
    fpcLastHour         = 0x00000100,
    fpcLast24Hours      = 0x00000200,
    fpcLast7days        = 0x00000400,
    fpcLast30days       = 0x00000800,
    fpcNotContains      = 0x00001000,
    fpcOneOf            = 0x00002000,
    fpcNotOneOf         = 0x00004000
} FpcFilterCondition;

////////////////////////////////////////////////
// FpcFilterValueType
typedef enum FpcFilterValueType
{
    fpcNoValueType,
    fpcNumeric,
    fpcDate,
    fpcString,
    fpcIPAddress,
    fpcEnum,
    fpcMultipleStrings,
    fpcMultipleEnums
} FpcFilterValueType;

////////////////////////////////////////////////
// FpcFilterType
typedef enum FpcFilterType
{
    fpcNoFilterType,
    fpcSessionsFilter,
    fpcLogViewerFilter
} FpcFilterType;

////////////////////////////////////////////////
// FpcSessionType
typedef enum FpcSessionType
{
    fpcNoSessionType,
    fpcSecureNetSession,
    fpcFirewallClientSession,
    fpcProxySession,
    fpcVpnRemoteAccessSession,
    fpcVpnRemoteSiteSession
} FpcSessionType;

////////////////////////////////////////////////
// FpcSessionMonitorEvent
typedef enum FpcSessionMonitorEvent
{
    fpcSessionFound,
    fpcSessionAllFound,
    fpcSessionCreated,
    fpcSessionDisconnected,
    fpcSessionDisconnectedAll,
    fpcSessionNetworkChanged,
    fpcSessionConnectionRestored,
    fpcSessionFilteredOut
} FpcSessionMonitorEvent;

////////////////////////////////////////////////
// FpcSystemPolicyConfigGroup
typedef enum FpcSystemPolicyConfigGroupEnum
{
    fpcSystemPolicyConfigGroup_Unknown = -1,
    fpcSystemPolicyConfigGroup_AD,
    fpcSystemPolicyConfigGroup_Radius,
    fpcSystemPolicyConfigGroup_Passport,
    fpcSystemPolicyConfigGroup_RSASecureId,
    fpcSystemPolicyConfigGroup_DNS,
    fpcSystemPolicyConfigGroup_DHCP,
    fpcSystemPolicyConfigGroup_RemoteMgmt_FWCONTROL,
    fpcSystemPolicyConfigGroup_RemoteMgmt_TS,
    fpcSystemPolicyConfigGroup_RemoteMgmt_ICMP,
    fpcSystemPolicyConfigGroup_RemoteLogging,
    fpcSystemPolicyConfigGroup_RemoteLogging_SQL,
    fpcSystemPolicyConfigGroup_ICMP,
    fpcSystemPolicyConfigGroup_Prefetcher,
    fpcSystemPolicyConfigGroup_ManagementSites,
    fpcSystemPolicyConfigGroup_ClientSetup,
    fpcSystemPolicyConfigGroup_Perfmon,
    fpcSystemPolicyConfigGroup_Diag_WinNet,
    fpcSystemPolicyConfigGroup_Diag_Watson,
    fpcSystemPolicyConfigGroup_MOM,
    fpcSystemPolicyConfigGroup_Diag_Connectivity,
    fpcSystemPolicyConfigGroup_VPN,
    fpcSystemPolicyConfigGroup_NTP,
    fpcSystemPolicyConfigGroup_SMTP,
    fpcSystemPolicyConfigGroup_CRL,
    fpcSystemPolicyConfigGroup_ConfigServer,
    fpcSystemPolicyConfigGroup_ConfigLocalServer,
    fpcSystemPolicyConfigGroup_ReplicateGroup,
    fpcSystemPolicyConfigGroup_IntraArray,
    fpcSystemPolicyConfigGroup_RemoteMgmt_Http,
#ifdef NG_BUILD
    fpcSystemPolicyConfigGroup_IPv6_Infrastructure,
#endif
    fpcSystemPolicyConfigGroup_MicrosoftUpdates,
    fpcSystemPolicyConfigGroup_SMTP_Protection,
    fpcSystemPolicyConfigGroup_Exchange_EdgeSync,
    fpcSystemPolicyConfigGroup_client_notification,
    fpcSystemPolicyConfigGroup_DirectAccess_IPv6_Infrastructure,
    fpcSystemPolicyConfigGroup_DirectAccess_Transition_Technologies,
    fpcSystemPolicyConfigGroup_DirectAccess_IPv6_From_Localhost,    
    fpcSystemPolicyConfigGroup_Stirling_Connectivity,
    fpcSystemPolicyConfigGroup_Stirling_ComputerResponses,
    fpcSystemPolicyConfigGroup_MaxGroups,
} FpcSystemPolicyConfigGroupEnum;

////////////////////////////////////////////////
// FpcRequestType
typedef enum FpcRequestType
{
    fpcHttpRequest,
    fpcPingRequest,
    fpcTcpConnect
} FpcRequestType;

////////////////////////////////////////////////
// FpcConnectivityGroupType
typedef enum FpcConnectivityGroupType
{
    fpcGroupFirst = 0,
    fpcGroupActiveDirectory = fpcGroupFirst,
    fpcGroupDHCP,
    fpcGroupDNS,
    fpcGroupPublishedServer,
    fpcGroupWeb,
    fpcGroupOther,
    fpcGroupLast = fpcGroupOther
} FpcConnectivityGroupType;

////////////////////////////////////////////////
// FpcConnectivityErrorStatus
typedef enum FpcConnectivityErrorCode
{
    fpcConnNoError,
    fpcConnDNSUnreachable,
    fpcConnUnresolvedName,
    fpcConnAuthenticationRequired,
    fpcConnTimeout,
    fpcConnError
} FpcConnectivityErrorCode;

////////////////////////////////////////////////
// FpcAction
typedef enum FpcAction
{
    fpcActionNotLogged = 0,
    fpcActionBind,
    fpcActionListen,
    fpcActionGHBN,
    fpcActionGHBA,
    fpcActionRedirectBind,
    fpcActionEstablish,
    fpcActionTerminate,
    fpcActionDenied,
    fpcActionAllowed,
    fpcActionFailed,
    fpcActionIntermediate,
    fpcActionSuccessfulConnection,
    fpcActionUnsuccessfulConnection,
    fpcActionDisconnection,
    fpcActionUserclearedQuarantine,
    fpcActionQuarantinetimeout,
    fpcActionUserQuarantined
} FpcAction;

////////////////////////////////////////////////
// FpcClientAuthenticatedValues
typedef enum FpcClientAuthenticatedValues
{
    fpcClientAuthenticatedNotLogged = 0,
    fpcClientAuthenticatedYes,
    fpcClientAuthenticatedNo
} FpcClientAuthenticatedValues;

////////////////////////////////////////////////
// FpcLogServiceType
typedef enum FpcLogServiceType
{
    fpcLogServiceUnknown = 0,
    fpcLogServiceProxy,
    fpcLogServiceReverseProxy,
    fpcLogServiceExternalProxy
} FpcLogServiceType;

////////////////////////////////////////////////
// FpcProxyObjSources
typedef enum FpcProxyObjSources
{
    fpcSrcUnknown = 0,
    fpcSrcCache,
    fpcSrcVerifiedCache,                                // cache sent IMS to server and got 304
    fpcSrcNotVerifiedCache,                             // wanted to go to server, but failed, serving from cache
    fpcSrcVerifyFailedInternet,                         // cache sent IMS to server and did not get 304
    fpcSrcInternet,
    fpcSrcMember,
    fpcSrcUpstream,
    fpcSrcNotModified                                  // The client asked for IMS request and the the cahce returns 304

} FpcProxyObjSources;

////////////////////////////////////////////////
// FpcBidirectional
typedef enum FpcBidirectional
{
    fpcBidirectionalNotLogged = 0,
    fpcBidirectionalYes,
    fpcBidirectionalNo
} FpcBidirectional;

typedef enum FpcNLBAffinity
{
    fpcNLBAffinitySingle = 1
} FpcNLBAffinity;

typedef enum FpcNLBOperationMode
{
    fpcNLBOperationModeUnicast = 0,
    fpcNLBOperationModeMulticast = 1,
    fpcNLBOperationModeIGMP = 2
} FpcNLBOperationMode;

typedef enum FpcNLBStatus
{
    fpcStatusUnknown = 0,
    fpcStatusNoNLBConfiguration,
    fpcStatusNLBConfiguring,
    fpcStatusNLBRunning,
    fpcStatusNLBDrainstoppingDueToAdminRequest,
    fpcStatusNLBStoppedDueToAdminRequest,
    fpcStatusNLBStoppedDueToLocalProblem,
    fpcStatusNLBStoppedDueToVpn,
    fpcStatusNLBSuspended
} FpcNLBStatus;

typedef enum FpcItemScope
{
    fpcArrayScope = 0,
    fpcEnterpriseScope
} FpcItemScope;

typedef enum FpcDelegatedAdminType
{
    fpcDelegatedAdminSidValid    = 0x01,
    fpcDelegatedAdminNameValid   = 0x02
} FpcDelegatedAdminType;

typedef enum FpcConfigurationStorageServerConnectionType
{
    fpcConfigurationStorageServerConnectionLDAP,
    fpcConfigurationStorageServerConnectionLDAPS
} FpcConfigurationStorageServerConnectionType;

typedef enum FpcConfigurationStatus
{
    fpcStatusNotSynced = 0,
    fpcStatusUpdating,
    fpcStatusSynced,
    fpcStatusError
} FpcConfigurationStatus;

typedef enum FpcServiceRpcResponsiveness
{
    fpcResponsive = 0,
    fpcNonResponsive,
    fpcValidating
} FpcServiceRpcResponsiveness;

typedef enum FpcRPCServices
{
    fpcRsFwSrv  = 0,
    fpcRsFwCtrl,
    fpcRsFwSched,
    fpcRsIsaStg,
    fpcRsFwMngdCtrl,
    fpcRPCServicesMax
} FpcRPCServices;

typedef enum FpcCopyElementsType
{
    fpcCopySchedules         = 0x001,
    fpcCopyProtocols         = 0x002,
    fpcCopyUrlSets           = 0x004,
    fpcCopyDomainNameSets    = 0x008,
    fpcCopyContentTypeSets   = 0x010,
    fpcCopyUserSets          = 0x020,
    fpcCopyComputers         = 0x040,
    fpcCopyAddressRanges     = 0x080,
    fpcCopySubnets           = 0x100,
    fpcCopyComputerSets      = 0x200,
    fpcCopyNetworks          = 0x400
} FpcCopyElementsType;

typedef enum FpcSpoofDetectionMode
{
    fpcSpoofDetectionDropAll = 0,  // Reserved
    fpcSpoofDetectionStrict,
    fpcSpoofDetectionByRoutingTable,
    fpcSpoofDetectionDisabled
} FpcSpoofDetectionMode;

// FpcCEIPValueType | Enumeration for possible SQM configuration values
typedef enum FpcCEIPValueType
{
   fpcNoValue = 0,
   fpcOptOut  = 1,
   fpcOptIn   = 2
} FpcCEIPValueType;

typedef enum FpcPrivateKeyFailure
{
    fpcNoFailure = 0,
    fpcNoPrivateKey,
    fpcNotIntendedForSessionKeyExchange,
    fpcNoPrivateKeyHandle
} FpcPrivateKeyFailure;

typedef enum FpcCertificateStore
{
    fpcLocalMachinePersonalStore = 0,
    fpcFirewallServicePersonalStore,
    fpcCurrentUserPersonalStore,
    fpcTrustedRootStore,
    fpcIntermediateCertificatesStore
} FpcCertificateStore;

typedef enum FpcLogonTypeEnforcement
{
    fpcNoLogonTypeEnforcement = 0,
    fpcEnforcePublicLogonType
} FpcLogonTypeEnforcement;

typedef enum FpcLinkTranslationMode
{
    fpcLinkTranslationNormal,
    fpcLinkTranslationOwa12Redirection,
    fpcLinkTranslationOffAfterPatternMatch,
    fpcLinkTranslationOnAfterPatternMatch
} FpcLinkTranslationMode;


////////////////////////////////////////////////
// FpcLinkTranslationOptions |
typedef enum FpcLinkTranslationOptions
{
    fpcNoOptionsOn                    = 0x00000000,
    fpcEscapeColon                    = 0x00000001,
    fpcAllowTranslationOfPartialLinks = 0x00000002,
} FpcLinkTranslationOptions;

typedef enum FpcCollectionStatus
{
    fpcStatusNoFailure          = 0x000,
    fpcServiceStoreFailedToOpen = 0x001, // values for a bitmap enumeration.
    fpcUserStoreFailedToOpen    = 0x002
} FpcCollectionStatus;

////////////////////////////////////////////////
// FpcRedirectHTTPAsHTTPS | Contains values that specify whether the Web proxy should redirect HTTP requests as HTTPS requests
typedef enum FpcRedirectHTTPAsHTTPS
{
    FpcRedirectHTTPAsHTTPSDisabled,         // Redirection is disabled
    FpcRedirectHTTPAsHTTPSIfAuthenticated,  // Redirection is enabled only if authentication is required
    FpcRedirectHTTPAsHTTPSAlways            // Redirection is enabled for each request
} FpcRedirectHTTPAsHTTPS;

typedef enum FpcCertificateRestrictionField
{
    fpcCertificateRestrictionIssuer,                // The certificate restriction applies to the Issuer field.
    fpcCertificateRestrictionSubject,               // The certificate restriction applies to the Subject field.
    fpcCertificateRestrictionEnhancedKeyUsage,      // The certificate restriction applies to the Enhanced Key Usage field.
    fpcCertificateRestrictionExtendedProperties     // The certificate restriction applies to the Extended Properties field.
} FpcCertificateRestrictionField;

typedef enum FpcOIDMatchType
{
    fpcMatchAnyOID,                                 // A match can be obtained for any object identifier (OID).
    fpcMatchSpecificOID                             // A match can be obtained only for the specified object identifier (OID).
} FpcOIDMatchType;

typedef enum FpcValueMatchType
{
    fpcMatchAnyValue,                               // A match can be obtained for any value.
    fpcMatchCaseInsensitiveCompare,                 // A match is determined using a case-insensitive comparison.
    fpcMatchCaseInsensitiveSubString                // A match is determined using a case-insensitive search for a substring.
} FpcValueMatchType;

typedef enum FpcCompatibilityVersion
{
    fpcISA2006 = 1,
    fpcISA2008,
    fpcCompatVersionNotApplicable
} FpcCompatibilityVersion;

typedef enum FpcOperationToCheckPermission
{
    fpcCommonOperation,
    fpcAddArrayOperation,
} FpcOperationToCheckPermission;

typedef enum FpcPublishedServerApplication
{
    fpcGeneralWebServer = 0,
    fpcExchangeServer = 1,
    fpcSharePointServer = 2
} FpcPublishedServerApplication;

typedef enum FpcStorageServerConnectionType
{
    fpcRegularStorageConnection,
    fpcSSLStorageConnection,
} FpcStorageServerConnectionType;

////////////////////////////////////////////////
// FpcUpdateAction | Action for updating a service
typedef enum FpcUpdateAction
{
    fpcUpdateActionCheckAndInstall = 0,     // Check for available updates and install them
    fpcUpdateActionCheckOnly = 1,           // Only check for available updates
    fpcUpdateActionDoNothing = 2,           // Do not check for available updates
    fpcUpdateActionOverride = 3,            // Override current updates
} FpcUpdateAction;

////////////////////////////////////////////////
// FpcScheduleType | Schedule Types for update services
typedef enum FpcScheduleType
{
    fpcScheduleTypeEvery15Minutes = 0,    // Every X min/hrs.
    fpcScheduleTypeOnceOnSelectedDay = 1, // On days X
} FpcScheduleType;

typedef enum FpcIspRedundancyPolicy
{
    fpcIspRedundancyDisabled = 0,
    fpcIspRedundancyLoadBalancing,
    fpcIspRedundancyFailover
} FpcIspRedundancyPolicy;

////////////////////////////////////////////////
// FpcDayOfWeek | Days of the week
typedef enum FpcDayOfWeek
{
    fpcDayOfWeekEveryDay = 0,
    fpcDayOfWeekSunday = 1,
    fpcDayOfWeekMonday = 2,
    fpcDayOfWeekTuesday = 3,
    fpcDayOfWeekWednesday = 4,
    fpcDayOfWeekThursday = 5,
    fpcDayOfWeekFriday = 6,
    fpcDayOfWeekSaturday = 7,
} FpcDayOfWeek;

////////////////////////////////////////////////
// FpcDefinitionUpdatesStatus | Definition updates status for an update service
typedef enum FpcDefinitionUpdatesStatus {
    fpcUpdatesStatusStarted=0,
    fpcUpdatesStatusSearching = 1,
    fpcUpdatesStatusSearchCompleted = 2,
    fpcUpdatesStatusDownloading = 3,
    fpcUpdatesStatusDownloadCompleted = 4,
    fpcUpdatesStatusInstalling = 5,
    fpcUpdatesStatusInstallCompleted = 6,
    fpcUpdatesStatusUpToDate = 7,
    fpcUpdatesStatusUpdatesAvailable = 8,
    fpcUpdatesStatusError = 9,
    fpcUpdatesStatusCancelled = 10,
    fpcUpdatesStatusNever = 11,
    fpcUpdatesStatusUnavailable = 12,
    fpcUpdatesStatusFeatureDisabled = 13,
    fpcUpdatesStatusErrorLicenseExpired = 14
} FpcDefinitionUpdatesStatus;

typedef enum FpcIspLinkStatus
{
    fpcIspLinkAutomaticStatus = 0,
    fpcIspLinkManualConnectedStatus,
    fpcIspLinkManualDisconnectedStatus
} FpcIspLinkStatus;

typedef enum FpcLinkStatus
{
    fpcLinkDown = 0,
    fpcLinkLocal,
    fpcLinkInet
}FpcLinkStatus;

typedef enum FpcIspLinkPriority
{
    fpcPrimaryLink = 0,
    fpcSecondaryLink = 1,
    fpcNumberOfLinks = 2
} FpcIspLinkPriority;

typedef enum FpcIspLoadBalancingFactorRange
{
    fpcLoadBalancingFactorMin = 0,
    fpcLoadBalancingFactorMax = 100
} FpcIspLoadBalancingFactorRange;

typedef enum FpcIspLinkResumeTime
{
    fpcIspLinkResumeMinimalTime = 300
} FpcIspLinkResumeTime;

typedef enum FpcKeySizeType
{
    fpcKeySize512          = 9,
    fpcKeySize1024         = 10,
    fpcKeySize2048         = 11,
    fpcKeySize4096         = 12,
    fpcKeySizeMinSupported = fpcKeySize512,
    fpcKeySizeMaxSupported = fpcKeySize4096
} FpcKeySizeType;

////////////////////////////////////////////////
// FpcUrlCategorySetType
typedef enum FpcUrlCategorySetType
{
    fpcSelectedCategories = 0,
    fpcAllExceptSelectedCategories
} FpcUrlCategorySetType;

typedef enum FpcPolicyRuleGroups
{
    fpcGroupNone,
    fpcWebAccessGroup,
    fpcWebPublishingGroup,
    fpcServerPublishingGroup,
    fpcVoIPAccessGroup,
    fpcCustomGroup = 100
} FpcPolicyRuleGroups;


typedef enum FpcAdapterConnectionType
{
    fpcAdapterConnectionDefault,
    fpcAdapterConnectionDialup
} FpcAdapterConnectionType;

typedef enum FpcAdapterState
{
    fpcAdapterStateConnected     = 1, // The network adapter is enabled and is connected to a network.
    fpcAdapterStateDisabled      = 2, // The network adapter is disabled
    fpcAdapterStateDisconnected  = 4  // The network adapter is enabled, but is not connected to a network.
} FpcAdapterState;

////////////////////////////////////////////////
// FpcActivityStatisticsPeriodType | Type of the activity statistics period: daily or monthly
typedef enum FpcActivityStatisticsPeriodType
{
    fpcActivityStatisticsPeriodDaily,                     // Daily activity statistics for up to the last 35 days are included
    fpcActivityStatisticsPeriodMonthly                    // Monthly activity statistics are included
} FpcActivityStatisticsPeriodType;

//
// Edge Malware Protection definitions
//

typedef enum FpcMalwareInspectionAction {
    fpcMalwareInspectionActionNone,
    fpcMalwareInspectionActionAllowed,
    fpcMalwareInspectionActionCleaned,
    fpcMalwareInspectionActionBlocked,
} FpcMalwareInspectionAction;

typedef enum FpcMalwareInspectionActionReason {
    fpcMalwareInspectionActionReasonNone,
    fpcMalwareInspectionActionReasonNoneDetected,
    fpcMalwareInspectionActionReasonLowMediumThreatsAllowed,
    fpcMalwareInspectionActionReasonInfected,
    fpcMalwareInspectionActionReasonSuspiciousFile,
    fpcMalwareInspectionActionReasonEncryptedFile,
    fpcMalwareInspectionActionReasonMaxArchiveNestingExceeded,
    fpcMalwareInspectionActionReasonMaxSizeExceeded,
    fpcMalwareInspectionActionReasonMaxUnpackedSizeExceeded,
    fpcMalwareInspectionActionReasonUnknownEncoding,
    fpcMalwareInspectionActionReasonCorruptedFile,
    fpcMalwareInspectionActionReasonTimeOut,
    fpcMalwareInspectionActionReasonStorageLimitExceeded,
    fpcMalwareInspectionActionReasonUnsupportedFormat,
    fpcMalwareInspectionActionReasonStatusNotRequested,
    fpcMalwareInspectionActionReasonOther,
    fpcMalwareInspectionActionReasonDisabled,
    fpcMalwareInspectionActionReasonDisabledForPolicyRule,
    fpcMalwareInspectionActionReasonDisabledForChainingRule,
    fpcMalwareInspectionActionReasonExceptionList,
    fpcMalwareInspectionActionReasonProxyOriginatedResponse,
    fpcMalwareInspectionActionReasonServedByFilter,
    fpcMalwareInspectionActionReasonStreaming,
    fpcMalwareInspectionActionReasonResponseToConnect,
    fpcMalwareInspectionActionReasonRoutedByCarp,
    fpcMalwareInspectionActionReasonSourceExceptionList,
    fpcMalwareInspectionActionReasonDefinitionsFolderNotSpecified,
    fpcMalwareInspectionActionReasonRangeResponse,
} FpcMalwareInspectionActionReason;

typedef enum FpcMalwareInspectionThreatLevel {
    fpcMalwareInspectionThreatLevelNone,
    fpcMalwareInspectionThreatLevelLow,
    fpcMalwareInspectionThreatLevelMedium,
    fpcMalwareInspectionThreatLevelHigh,
    fpcMalwareInspectionThreatLevelSevere,
} FpcMalwareInspectionThreatLevel;

typedef enum FpcMalwareInspectionContentDeliveryMethod {
    fpcMalwareInspectionContentDeliveryUnchanged,
    fpcMalwareInspectionContentDeliveryStandardTrickling,
    fpcMalwareInspectionContentDeliveryFastTrickling,
    fpcMalwareInspectionContentDeliveryProgressNotification,
} FpcMalwareInspectionContentDeliveryMethod;

typedef enum FpcFastTricklingMode
{
    fpcBestUserExperinceLowPerformance,
    fpcGoodUserExperienceModeratePerformance,
    fpcModerateUserExperienceGoodPerformance,
    fpcPoorUserExperienceBestPerformance,
} FpcFastTricklingMode;

typedef enum FpcProtocolMessageDefinitionTransportProtocol
{
    fpcTransportProtocolUndefined,
    fpcTransportProtocolHttp,
} FpcProtocolMessageDefinitionTransportProtocol;

////////////////////////////////////////////////
// FpcIpsScanResult
typedef enum FpcIpsScanResult
{
    fpcIpsScanResultUnknown = 0,
    fpcIpsScanResultInspected,
    fpcIpsScanResultBlocked,
    fpcIpsScanResultDetected
} FpcIpsScanResult;

typedef enum FpcConfigurationMode
{
    fpcConfigurationStandalone = 0,
    fpcConfigurationEnterprise,
    fpcDisconnected
} FpcConfigurationMode;

typedef enum FpcHttpsInspectionWithCertificateValidationType
{
    fpcHttpsInspectionWithCertificateValidation = 0,
    fpcHttpsInspectionCertificateValidationOnly
} FpcHttpsInspectionWithCertificateValidationType;

////////////////////////////////////////////////
// FpcIpsSpyNetLevel
typedef enum FpcSpyNetLevel
{
    fpcSpyNetNoValue,
    fpcSpyNetDisabled,
    fpcSpyNetBasic,
    fpcSpyNetExtended
} FpcSpyNetLevel;

////////////////////////////////////////////////
// FpcNlmConnectivity
typedef enum FpcNlmConnectivity
{
    fpcNlmConnectivityDISCONNECTED      = 0,
    fpcNlmConnectivityIPV4_NOTRAFFIC    = 0x1,
    fpcNlmConnectivityIPV6_NOTRAFFIC    = 0x2,
    fpcNlmConnectivityIPV4_SUBNET       = 0x10,
    fpcNlmConnectivityIPV4_LOCALNETWORK = 0x20,
    fpcNlmConnectivityIPV4_INTERNET     = 0x40,
    fpcNlmConnectivityIPV6_SUBNET       = 0x100,
    fpcNlmConnectivityIPV6_LOCALNETWORK = 0x200,
    fpcNlmConnectivityIPV6_INTERNET     = 0x400
} FpcNlmConnectivity;

////////////////////////////////////////////////
// FpcMicrosoftUpdateSetting
typedef enum FpcMicrosoftUpdateSetting
{
    fpcMicrosoftUpdateSetting_OptIn  = 0,
    fpcMicrosoftUpdateSetting_OptOut = 1,
} FpcMicrosoftUpdateSetting;

typedef enum FpcSSLTerminationMode
{
    fpcSSLTerminationNone = 0,
    fpcSSLTerminationWithCertificate,
    fpcSSLTerminationWithTLSTrail
} FpcSSLTerminationMode;

typedef enum FpcSSLClientCertificateClaim
{
    fpcSSLClientCertificateIgnored = 0,
    fpcSSLClientCertificateRequired,
    fpcSSLClientCertificateRequested
} FpcSSLClientCertificateClaim;

typedef enum FpcSenderIdCheckAction
{
    fpcSenderIdRejectMessage = 0,
    fpcSenderIdDeleteMessage,
    fpcSenderIdStampMessage,
} FpcSenderIdCheckAction;

typedef enum FpcSenderFilterAction
{
    fpcSenderFilterRejectMessage = 0,
    fpcSenderFilterStampMessage,
} FpcSenderFilterAction;

typedef enum FpcBlockedSenderAddressType
{
    fpcSenderEMailAddress = 0,
    fpcSenderDomainName,
    fpcSenderDomainWithSubdomainName,
} FpcBlockedSenderAddressType;

typedef enum FpcSmtpRouteDirection
{
    fpcInternalMailServers = 0,
    fpcInternetMailServer,
} FpcSmtpRouteDirection;

typedef enum FpcMailForwardingMethod
{
    fpcForwardToSpecificAddress = 0,
    fpcForwardUsingMxRecord,
} FpcMailForwardingMethod;

typedef enum FpcSmtpDestinationAuthenticationMethod
{
    fpcDefaultAuthentication = 0,
    fpcBasicAuthentication,
    fpcExchangeServerAuthentication,
    fpcExternallySecuredAuthentication,
} FpcSmtpDestinationAuthenticationMethod;

typedef enum FpcBlockedProviderErrorMessageType
{
    fpcDefaultMessage = 0,
    fpcCustomMessage,
} FpcBlockedProviderErrorMessageType;

typedef enum FpcMailAntispamFilterListType
{
   fpcMailAntispamFilterListType_File,
   fpcMailAntispamFilterListType_MessageBody
} FpcMailAntispamFilterListType;

typedef enum FpcMailAntivirusEngine
{
    fpcMailAntivirusEngine_None       = 0x00,
    fpcMailAntivirusEngine_Authentium = 0x01,
    fpcMailAntivirusEngine_Kaspersky  = 0x02,
    fpcMailAntivirusEngine_Microsoft  = 0x04,
    fpcMailAntivirusEngine_Norman     = 0x08,
    fpcMailAntivirusEngine_VirusBuster= 0x10,
    // always add antispam engines after antivirus and mark appropriately
    fpcMailAntivirusEngine_LastAntiVirus = fpcMailAntivirusEngine_VirusBuster,
    fpcMailAntivirusEngine_WormList   = 0x20,
    fpcMailAntivirusEngine_CloudMark  = 0x40,
    fpcMailAntivirusEngine_Last       = fpcMailAntivirusEngine_CloudMark,
    fpcMailAntivirusEngine_First      = fpcMailAntivirusEngine_Authentium,
    fpcMailAntivirusEngine_Default    = fpcMailAntivirusEngine_None,
} FpcMailAntivirusEngine;

typedef enum FpcMailAntivirusEngineSelectionPolicy
{
    fpcMailAntivirusEngineSelectionPolicy_All = 0,
    fpcMailAntivirusEngineSelectionPolicy_Available,
    fpcMailAntivirusEngineSelectionPolicy_Dynamic,
    fpcMailAntivirusEngineSelectionPolicy_One,
} FpcMailAntivirusEngineSelectionPolicy;

typedef enum FpcMailAntivirusSenderInfo
{
   fpcMailAntivirusSenderInfo_MimeHeader = 0,
   fpcMailAntivirusSenderInfo_MailFrom,
} FpcMailAntivirusSenderInfo;

typedef enum FpcMailAntivirusAction
{
    fpcMailAntivirusAction_None = 0,
    fpcMailAntivirusAction_Clean,
    fpcMailAntivirusAction_Delete,
} FpcMailAntivirusAction;

typedef enum FpcMailAntivirusErrorAction
{
    fpcMailAntivirusErrorAction_Ignore = 0,
    fpcMailAntivirusErrorAction_SkipDetect,
    fpcMailAntivirusErrorAction_Delete,
} FpcMailAntivirusErrorAction;

typedef enum FpcMailIllegalMimeHeaderAction
{
    fpcMailIllegalMimeHeaderAction_Purge = 0,
    fpcMailIllegalMimeHeaderAction_Ignore,
} FpcMailIllegalMimeHeaderAction;

typedef enum FpcMailAntiSpamFilterAction
{
    fpcMailAntiSpamFilterAction_None = 0,
    fpcMailAntiSpamFilterAction_Delete,
    fpcMailAntiSpamFilterAction_Purge,
    fpcMailAntiSpamFilterAction_Identify,
} FpcMailAntiSpamFilterAction;

typedef enum FpcMailAntiSpamFileType
{
    fpcMailAntiSpamFileType_TEXT         = 0x00000001,
    fpcMailAntiSpamFileType_UNICODE      = 0x00000002,
    fpcMailAntiSpamFileType_EXE          = 0x00000003,
    fpcMailAntiSpamFileType_PIF          = 0x00000004,
    fpcMailAntiSpamFileType_EICAR        = 0x00000005,
    fpcMailAntiSpamFileType_DOC          = 0x00000006,
    fpcMailAntiSpamFileType_MSWORD12     = 0x00000007,
    fpcMailAntiSpamFileType_MSEXCEL1     = 0x00000008,
    fpcMailAntiSpamFileType_WRITE        = 0x00000009,
    fpcMailAntiSpamFileType_ZIP          = 0x0000000A,
    fpcMailAntiSpamFileType_LHA          = 0x0000000B,
    fpcMailAntiSpamFileType_MSCAB        = 0x0000000C,
    fpcMailAntiSpamFileType_ISCAB        = 0x0000000D,
    fpcMailAntiSpamFileType_DATAZ        = 0x0000000E,
    fpcMailAntiSpamFileType_GZIP         = 0x0000000F,
    fpcMailAntiSpamFileType_MSCOMPRESS   = 0x00000010,
    fpcMailAntiSpamFileType_ZOO          = 0x00000011,
    fpcMailAntiSpamFileType_ARJ          = 0x00000012,
    fpcMailAntiSpamFileType_ARC          = 0x00000013,
    fpcMailAntiSpamFileType_GIF          = 0x00000014,
    fpcMailAntiSpamFileType_JPEG         = 0x00000015,
    fpcMailAntiSpamFileType_BMP          = 0x00000016,
    fpcMailAntiSpamFileType_PCX          = 0x00000017,
    fpcMailAntiSpamFileType_PAL          = 0x00000018,
    fpcMailAntiSpamFileType_ICO          = 0x00000019,
    fpcMailAntiSpamFileType_WAV          = 0x0000001A,
    fpcMailAntiSpamFileType_AVI          = 0x0000001B,
    fpcMailAntiSpamFileType_RIF          = 0x0000001C,
    fpcMailAntiSpamFileType_QTMOVIE      = 0x0000001D,
    fpcMailAntiSpamFileType_MPEG1        = 0x0000001E,
    fpcMailAntiSpamFileType_MSLIBRARY    = 0x0000001F,
    fpcMailAntiSpamFileType_OBJ          = 0x00000020,
    fpcMailAntiSpamFileType_SHORTCUT     = 0x00000021,
    fpcMailAntiSpamFileType_CLASS        = 0x00000022,
    fpcMailAntiSpamFileType_IMCMIME      = 0x00000023,
    fpcMailAntiSpamFileType_PDF          = 0x00000024,
    fpcMailAntiSpamFileType_UNINST       = 0x00000025,
    fpcMailAntiSpamFileType_TYPELIB      = 0x00000026,
    fpcMailAntiSpamFileType_HELP         = 0x00000027,
    fpcMailAntiSpamFileType_CHI          = 0x00000028,
    fpcMailAntiSpamFileType_JAR          = 0x00000029,
    fpcMailAntiSpamFileType_UNIXCOMPRESS = 0x0000002A,
    fpcMailAntiSpamFileType_HYPERARC     = 0x0000002B,
    fpcMailAntiSpamFileType_PKLITE       = 0x0000002C,
    fpcMailAntiSpamFileType_TNEF         = 0x0000002D,
    fpcMailAntiSpamFileType_EPS          = 0x0000002E,
    fpcMailAntiSpamFileType_XARA         = 0x0000002F,
    fpcMailAntiSpamFileType_WMF          = 0x00000030,
    fpcMailAntiSpamFileType_WMFVISIO     = 0x00000031,
    fpcMailAntiSpamFileType_PNG          = 0x00000032,
    fpcMailAntiSpamFileType_TIFF         = 0x00000033,
    fpcMailAntiSpamFileType_AUTOCAD      = 0x00000034,
    fpcMailAntiSpamFileType_FONT1        = 0x00000035,
    fpcMailAntiSpamFileType_TRUETYPE     = 0x00000036,
    fpcMailAntiSpamFileType_ANI          = 0x00000037,
    fpcMailAntiSpamFileType_MP3          = 0x00000038,
    fpcMailAntiSpamFileType_NOTESDB      = 0x00000039,
    fpcMailAntiSpamFileType_MDB          = 0x0000003A,
    fpcMailAntiSpamFileType_SFXEXE       = 0x0000003B,
    fpcMailAntiSpamFileType_TAR          = 0x0000003C,
    fpcMailAntiSpamFileType_RAR          = 0x0000003D,
    fpcMailAntiSpamFileType_MACBIN       = 0x0000003E,
    fpcMailAntiSpamFileType_OPENXML      = 0x0000003F
} FpcMailAntiSpamFileType;

typedef enum FpcWAPLicenseType
{
    fpcWAPLicenseType_Evaluation,
    fpcWAPLicenseType_Purchased,
    fpcWAPLicenseType_Disabled,
    fpcWAPLicenseType_NumberOf
} FpcWAPLicenseType;

typedef enum FpcIPSLicenseType
{
    fpcIPSLicenseType_Complementary,
    fpcIPSLicenseType_Disabled,
    fpcIPSLicenseType_NumberOf
} FpcIPSLicenseType;

typedef enum FpcProtectionMechanisms
{
    fpcNoProtectionMechanism        = 0x00,
    fpcNetworkInspectionSystem      = 0x01,
    fpcMalwareInspection            = 0x02,
    fpcEmailAntivirus               = 0x04,
    fpcAllProtectionMechanisms      = 0xFF
} FpcProtectionMechanisms;

typedef enum FpcAutomaticPollingFrequency
{
    fpcAutomaticPollingFrequency_15m  = 0,
    fpcAutomaticPollingFrequency_30m  = 1,
    fpcAutomaticPollingFrequency_45m  = 2,
    fpcAutomaticPollingFrequency_1h   = 3,
    fpcAutomaticPollingFrequency_2h   = 4,
    fpcAutomaticPollingFrequency_3h   = 5,
    fpcAutomaticPollingFrequency_4h   = 6,
    fpcAutomaticPollingFrequency_5h   = 7,
    fpcAutomaticPollingFrequency_6h   = 8,
    fpcAutomaticPollingFrequency_7h   = 9,
    fpcAutomaticPollingFrequency_8h   = 10,
    fpcAutomaticPollingFrequency_9h   = 11,
    fpcAutomaticPollingFrequency_10h  = 12,
    fpcAutomaticPollingFrequency_11h  = 13,
    fpcAutomaticPollingFrequency_12h  = 14,
    fpcAutomaticPollingFrequency_13h  = 15,
    fpcAutomaticPollingFrequency_14h  = 16,
    fpcAutomaticPollingFrequency_15h  = 17,
    fpcAutomaticPollingFrequency_16h  = 18,
    fpcAutomaticPollingFrequency_17h  = 19,
    fpcAutomaticPollingFrequency_18h  = 20,
    fpcAutomaticPollingFrequency_19h  = 21,
    fpcAutomaticPollingFrequency_20h  = 22,
    fpcAutomaticPollingFrequency_21h  = 23,
    fpcAutomaticPollingFrequency_22h  = 24,
    fpcAutomaticPollingFrequency_23h  = 25,
    fpcAutomaticPollingFrequency_24h  = 26
} FpcAutomaticPollingFrequency;

typedef enum FpcSupportedUpdateActions
{
    fpcNoSupportedUpdateAction              = 0x00,
    fpcSupportedUpdateActionCheckOnly       = 0x01,
    fpcSupportedUpdateActionInstall         = 0x02,
    fpcSupportedUpdateActionOverride        = 0x04,
    fpcAllSupportedUpdateActions            = 0x0F
} FpcSupportedUpdateActions;

typedef enum FpcMicrosoftUpdateSource
{
    fpcMicrosoftUpdateSourceDefault        = 0,  // Source used by the operating system
    fpcMicrosoftUpdateSourceDirect,              // Direct connection to Microsoft Update
    fpcMicrosoftUpdateSourceFallbackToDirect     // Source used by the operating system with fallback to direct connection to Microsoft Update
} FpcMicrosoftUpdateSource;

////////////////////////////////////////////////
// FpcFwcClientApplicationTrust
typedef enum FpcFwcClientApplicationTrustState
{
    fpcApplicationNotTrusted = 0,
    fpcApplicationIsTrusted,
    fpcApplicationTrustUnknown
} FpcFwcClientApplicationTrustState;

typedef enum FpcUrlCategorizationProviderUsed
{
    fpcUrlCategorizationProviderUsed_Original,
    fpcUrlCategorizationProviderUsed_Overridden
} FpcUrlCategorizationProviderUsed;

typedef enum FpcUrlCategorizationSourceUsed
{
    fpcUrlCategorizationSourceUsed_OriginalUrl,
    fpcUrlCategorizationSourceUsed_Alias,
    fpcUrlCategorizationSourceUsed_PathOnly,
    fpcUrlCategorizationSourceUsed_IP,
    fpcUrlCategorizationSourceUsed_Invalid
} FpcUrlCategorizationSourceUsed;

typedef enum FpcNisSignatureResponse
{
    fpcNisSignatureResponseBlockAndLog = 0,   // Block and log matched packet
    fpcNisSignatureResponseLogOnly = 1,       // Only log matched packet
} FpcNisSignatureResponse;

typedef enum FpcNisInitialSignatureConfiguration
{
    fpcNisInitialSignatureConfigurationDefault = 0,   // Use MS Defaults for new signatures
    fpcNisInitialSignatureConfigurationLogOnly = 1,      // Configure downloaded signatures to log only
    fpcNisInitialSignatureConfigurationDisabled = 2,     // Configure downloaded signatures to be disabled
} FpcNisInitialSignatureConfiguration;

typedef enum FpcNisCategory
{
    fpcNisCategoryVulnerability,
    fpcNisCategoryExploit,
    fpcNisCategoryPolicy,
    fpcNisCategoryOther
} FpcNisCategory;

typedef enum FpcNisSeverityLevel
{
    fpcNisSeverityLevelLow,
    fpcNisSeverityLevelModerate,
    fpcNisSeverityLevelImportant,
    fpcNisSeverityLevelCritical
} FpcNisSeverityLevel;

typedef enum FpcNisRiskLevel
{
    fpcNisRiskLevelLow,
    fpcNisRiskLevelModerate,
    fpcNisRiskLevelHigh
} FpcNisRiskLevel;

typedef enum FpcNisFidelityLevel
{
    fpcNisFidelityLevelLow,
    fpcNisFidelityLevelMedium,
    fpcNisFidelityLevelHigh,
    fpcNisFidelityLevelPerfect
} FpcNisFidelityLevel;

typedef enum FpcNisBusinessImpactLevel
{
    fpcNisBusinessImpactLevelLow,
    fpcNisBusinessImpactLevelModerate,
    fpcNisBusinessImpactLevelHigh
} FpcNisBusinessImpactLevel;

typedef enum FpcFssUpdateStatus
{
    fpcFssUpdateStatusNever,
    fpcFssUpdateStatusSucceeded,
    fpcFssUpdateStatusFailed,
    fpcFssUpdateStatusUpToDate
} FpcFssUpdateStatus;

////////////////////////////////////////////////
// FpcNisProtocolAnomaliesPolicy
typedef enum FpcNisProtocolAnomaliesPolicy
{
    fpcNisProtocolAnomaliesAllow,
    fpcNisProtocolAnomaliesBlock,
} FpcNisProtocolAnomaliesPolicy;

typedef enum FpcUrlCategorizationReason
{
    fpcUrlCategorizationReasonNone,
    // Success
    fpcUrlCategorizationFromOverrides,
    fpcUrlCategorizationFromCache,
    fpcUrlCategorizationFromWebService,
    // Failure
    fpcUrlCategorizationFailedUrlFilteringDisabled,
    fpcUrlCategorizationFailedUrlNotInDatabase,
    fpcUrlCategorizationFailedWebServiceConnectionError,
    fpcUrlCategorizationFailedWebServiceDown,
    fpcUrlCategorizationFailedLicenseExpired,
} FpcUrlCategorizationReason;

#endif
