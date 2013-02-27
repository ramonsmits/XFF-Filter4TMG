/************************************************************************
*                                                                       *
*   fpcerrorcodes.h --  error code definitions for the COM API's        *
*                                                                       *
*   Copyright (c) Microsoft Corporation. All rights reserved.    *
*   THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND.    *
*   THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE *
*   REMAINS WITH THE USER. USE AND REDISTRIBUTION OF THIS CODE, WITH    *
*   OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.                       *
*                                                                       *
************************************************************************/

#ifndef _FPCERRORCODES_H_
#define _FPCERRORCODES_H_

//
//    NOTE: All message ids in this file are limited to 10000 - 19999
//

//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define FACILITY_FPC_COM                 0x4


//
// Define the severity codes
//


//
// MessageId: S_FPCLOG_BAD_COLUMN_SELECTION
//
// MessageText:
//
// An invalid set of log fields was selected. Any required log field that was not selected will also be logged.
//
#define S_FPCLOG_BAD_COLUMN_SELECTION    ((HRESULT)0x00040200L)

//
// MessageId: S_FPC_ALERTSRV_ALERT_NOT_FOUND
//
// MessageText:
//
// The specified alert was not found.
//
#define S_FPC_ALERTSRV_ALERT_NOT_FOUND   ((HRESULT)0x00040201L)

//
// MessageId: S_FPC_SERVICE_INACCESSIBLE
//
// MessageText:
//
// The service is inaccessible.
//
#define S_FPC_SERVICE_INACCESSIBLE       ((HRESULT)0x00040202L)

//
// MessageId: E_FPC_CERTIFICATE_NOT_INSTALLED
//
// MessageText:
//
// The specified certificate cannot be located.
//
#define E_FPC_CERTIFICATE_NOT_INSTALLED  ((HRESULT)0xC0040300L)

//
// MessageId: E_FPC_CROSS_PRIORITY_BOUNDARY
//
// MessageText:
//
// A Web filter can be moved only into the positions of filters that have the same priority.
//
#define E_FPC_CROSS_PRIORITY_BOUNDARY    ((HRESULT)0xC0040301L)

//
// MessageId: E_FPC_DEST_NOT_IP
//
// MessageText:
//
// This destination object is not defined using an IP address.
//
#define E_FPC_DEST_NOT_IP                ((HRESULT)0xC0040302L)

//
// MessageId: E_FPC_NO_STORAGE
//
// MessageText:
//
// The object cannot be written to persistent storage before its containing object is saved.
//
#define E_FPC_NO_STORAGE                 ((HRESULT)0xC0040303L)

//
// MessageId: E_FPC_OBJECT_INVALID
//
// MessageText:
//
// The object is not valid.
//
#define E_FPC_OBJECT_INVALID             ((HRESULT)0xC0040304L)

//
// MessageId: E_FPC_STRING_BAD
//
// MessageText:
//
// The string is empty or invalid.
//
#define E_FPC_STRING_BAD                 ((HRESULT)0xC0040305L)

//
// MessageId: E_FPC_EVENT_NOT_DEFINED
//
// MessageText:
//
// The event GUID specified in the alert cannot be found in the events collection.
//
#define E_FPC_EVENT_NOT_DEFINED          ((HRESULT)0xC0040306L)

//
// MessageId: E_FPC_NON_REMOVAL_EVENT
//
// MessageText:
//
// Forefront TMG predefined events cannot be removed.
//
#define E_FPC_NON_REMOVAL_EVENT          ((HRESULT)0xC0040307L)

//
// MessageId: E_FPC_ALERT_KEY_INVALID
//
// MessageText:
//
// The additional key specified is outside of the range of possible values.
//
#define E_FPC_ALERT_KEY_INVALID          ((HRESULT)0xC0040308L)

//
// MessageId: E_FPC_CANNOT_DEL_DEFAULT_RULE
//
// MessageText:
//
// The default rule cannot be removed.
//
#define E_FPC_CANNOT_DEL_DEFAULT_RULE    ((HRESULT)0xC0040309L)

//
// MessageId: E_FPC_CANNOT_MOVE_DEFAULT_RULE
//
// MessageText:
//
// The order of application of the default rule cannot be modified. It will always be applied last.
//
#define E_FPC_CANNOT_MOVE_DEFAULT_RULE   ((HRESULT)0xC004030AL)

//
// MessageId: E_FPC_CORRUPTED_OBJECT_DATA
//
// MessageText:
//
// The object's data is corrupted.
//
#define E_FPC_CORRUPTED_OBJECT_DATA      ((HRESULT)0xC004030BL)

//
// MessageId: E_DOMAIN_CANT_BE_IP_ADDR
//
// MessageText:
//
// An IP address cannot be used for a domain name in a domain name set.
//
#define E_DOMAIN_CANT_BE_IP_ADDR         ((HRESULT)0xC004030CL)

//
// MessageId: E_FPC_QUERY_BUFFER_FULL
//
// MessageText:
//
// There are too many records in the query result.
//
#define E_FPC_QUERY_BUFFER_FULL          ((HRESULT)0xC004030DL)

//
// MessageId: E_FPC_THRESHOLD_OUT_OF_RANGE
//
// MessageText:
//
// The threshold set is not in the range of permissible values from 1 through 65535.
//
#define E_FPC_THRESHOLD_OUT_OF_RANGE     ((HRESULT)0xC004030EL)

//
// MessageId: E_FPC_OLD_DAILYSUMMARY_VERSION
//
// MessageText:
//
// A daily summary file is corrupted, or was generated with a previous version of the product. It cannot be used to generate the report.
//
#define E_FPC_OLD_DAILYSUMMARY_VERSION   ((HRESULT)0xC004030FL)

//
// MessageId: E_FPC_INVALID_SERVER_NAME
//
// MessageText:
//
// The server name has not been specified or is invalid. Enter a valid server name.
//
#define E_FPC_INVALID_SERVER_NAME        ((HRESULT)0xC0040310L)

//
// MessageId: E_FPC_STRING_CONTAINS_INVALID_CHARACTERS
//
// MessageText:
//
// The server name contains invalid characters. Enter a valid server name.
//
#define E_FPC_STRING_CONTAINS_INVALID_CHARACTERS ((HRESULT)0xC0040311L)

//
// MessageId: E_FPC_EMPTY_STRING
//
// MessageText:
//
// The string is empty or invalid.
//
#define E_FPC_EMPTY_STRING               ((HRESULT)0xC0040312L)

//
// MessageId: E_FPC_VALUE_TOO_LARGE
//
// MessageText:
//
// The new value %1 for the property %2 is greater than the maximum allowed value %3.
//
#define E_FPC_VALUE_TOO_LARGE            ((HRESULT)0xC0040313L)

//
// MessageId: E_FPC_VALUE_TOO_SMALL
//
// MessageText:
//
// The new value %1 for the property %2 is less than the minimum allowed value %3.
//
#define E_FPC_VALUE_TOO_SMALL            ((HRESULT)0xC0040314L)

//
// MessageId: E_FPC_COMPONENT_NOT_INSTALLED
//
// MessageText:
//
// The Forefront TMG component is not installed.
//
#define E_FPC_COMPONENT_NOT_INSTALLED    ((HRESULT)0xC0040315L)

//
// MessageId: E_FPC_BAD_IP_FORMAT
//
// MessageText:
//
// A valid IP address must be provided.
//
#define E_FPC_BAD_IP_FORMAT              ((HRESULT)0xC0040316L)

//
// MessageId: E_FPC_IP_FROM_MORE_THAN_TO
//
// MessageText:
//
// The value in the From box must be lower than the value in the To box.
//
#define E_FPC_IP_FROM_MORE_THAN_TO       ((HRESULT)0xC0040317L)

//
// MessageId: E_FPC_IP_PAIR_ALREADY_EXISTS
//
// MessageText:
//
// The IP address range specified already exists in the list.
//
#define E_FPC_IP_PAIR_ALREADY_EXISTS     ((HRESULT)0xC0040318L)

//
// MessageId: E_FPC_ALERT_MUST_HAVE_ACTIONS
//
// MessageText:
//
// The alert %1 must have at least one action enabled.
//
#define E_FPC_ALERT_MUST_HAVE_ACTIONS    ((HRESULT)0xC0040319L)

//
// MessageId: E_FPC_DEFAULT_RULE_IS_READ_ONLY
//
// MessageText:
//
// This property cannot be modified for the default rule.
//
#define E_FPC_DEFAULT_RULE_IS_READ_ONLY  ((HRESULT)0xC004031AL)

//
// MessageId: E_FPC_PROTOCOL_IS_READ_ONLY
//
// MessageText:
//
// The protocol definition cannot be removed or modified.
//
#define E_FPC_PROTOCOL_IS_READ_ONLY      ((HRESULT)0xC004031BL)

//
// MessageId: E_FPC_ALERT_ALREADY_DEFINED
//
// MessageText:
//
// An alert with the event GUID, server name, and additional key specified already exists.
//
#define E_FPC_ALERT_ALREADY_DEFINED      ((HRESULT)0xC004031CL)

//
// MessageId: E_FPC_FAILED_TO_READ_DISK_SIZE_AND_TYPE
//
// MessageText:
//
// The disk size and type properties cannot be read.
//
#define E_FPC_FAILED_TO_READ_DISK_SIZE_AND_TYPE ((HRESULT)0xC004031DL)

//
// MessageId: E_FPC_EVENT_IN_USE
//
// MessageText:
//
// The event definition %1 cannot be removed because it is used by the alert %2.
//
#define E_FPC_EVENT_IN_USE               ((HRESULT)0xC004031EL)

//
// MessageId: E_FPC_PNAT_PROTOCOL_NOT_INBOUND
//
// MessageText:
//
// The protocol specified is not a server (inbound) protocol.
//
#define E_FPC_PNAT_PROTOCOL_NOT_INBOUND  ((HRESULT)0xC004031FL)

//
// MessageId: E_FPC_ITEM_IN_USE
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in the %3 %4 %5.
//
#define E_FPC_ITEM_IN_USE                ((HRESULT)0xC0040320L)

//
// MessageId: E_FPC_LOW_RANGE_MORE_THAN_HIGH_RANGE
//
// MessageText:
//
// The lower port value must be less than or equal to the upper port value in the %1 %2.
//
#define E_FPC_LOW_RANGE_MORE_THAN_HIGH_RANGE ((HRESULT)0xC0040321L)

//
// MessageId: E_FPC_PORT_OUT_OF_RANGE
//
// MessageText:
//
// The lower and upper ports defining a port range must be between 1 and 65535.
//
#define E_FPC_PORT_OUT_OF_RANGE          ((HRESULT)0xC0040322L)

//
// MessageId: E_FPC_IDENTICAL_STORAGE_NAME
//
// MessageText:
//
// An item with an identical storage name already exists in this collection. Each item added to the collection must have a unique storage name.
//
#define E_FPC_IDENTICAL_STORAGE_NAME     ((HRESULT)0xC0040323L)

//
// MessageId: E_FPC_NOT_COMMON_NETWORK_DIALUP_CONNECTION
//
// MessageText:
//
// The specified network dial-up connection cannot be found on the computer.
//
#define E_FPC_NOT_COMMON_NETWORK_DIALUP_CONNECTION ((HRESULT)0xC0040324L)

//
// MessageId: E_FPC_NOT_FULL_URL
//
// MessageText:
//
// The URL must start with http:// or https://.
//
#define E_FPC_NOT_FULL_URL               ((HRESULT)0xC0040325L)

//
// MessageId: E_FPC_NO_CREDENTIALS
//
// MessageText:
//
// No credentials were provided.
//
#define E_FPC_NO_CREDENTIALS             ((HRESULT)0xC0040326L)

//
// MessageId: E_FPC_NO_DIALUP_AVAILABLE
//
// MessageText:
//
// Automatic dialing cannot be used. There are no dial-up connection entries configured.
//
#define E_FPC_NO_DIALUP_AVAILABLE        ((HRESULT)0xC0040327L)

//
// MessageId: E_FPC_INVALID_NETWORK_CHOSEN_FOR_AUTODIAL
//
// MessageText:
//
// Automatic dialing cannot be enabled for this type of network.
//
#define E_FPC_INVALID_NETWORK_CHOSEN_FOR_AUTODIAL ((HRESULT)0xC0040328L)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_STANDARD_EDITION
//
// MessageText:
//
// The method or property %1 is not available in Forefront TMG Standard Edition.
//
#define E_FPC_NOT_SUPPORTED_IN_STANDARD_EDITION ((HRESULT)0xC0040329L)

//
// MessageId: E_FPC_BAD_LDT_DOMAIN_NAME_FORMAT
//
// MessageText:
//
// The string is not a valid Local Domain Table (LDT) domain name.
//
#define E_FPC_BAD_LDT_DOMAIN_NAME_FORMAT ((HRESULT)0xC004032AL)

//
// MessageId: E_FPC_TCP_UDP_MISMATCH
//
// MessageText:
//
// An invalid API was used for the specified protocol.
//
#define E_FPC_TCP_UDP_MISMATCH           ((HRESULT)0xC004032BL)

//
// MessageId: E_FPC_HTTP_CACHE_MIN_MUST_BE_LESS_THAN_MAX
//
// MessageText:
//
// The minimum time for content expiration in the cache rule %1 must be less than or equal to the maximum time.
//
#define E_FPC_HTTP_CACHE_MIN_MUST_BE_LESS_THAN_MAX ((HRESULT)0xC004032CL)

//
// MessageId: E_FPC_NEED_SERVER_FOR_CREDENTIALS
//
// MessageText:
//
// Credentials cannot be added when no server is available.
//
#define E_FPC_NEED_SERVER_FOR_CREDENTIALS ((HRESULT)0xC004032DL)

//
// MessageId: E_FPC_INVALID_PORT
//
// MessageText:
//
// A port number between 1 and 65535 must be provided.
//
#define E_FPC_INVALID_PORT               ((HRESULT)0xC004032EL)

//
// MessageId: E_FPC_INVALID_PORT_INC_0
//
// MessageText:
//
// A port number between 0 and 65535 must be provided.
//
#define E_FPC_INVALID_PORT_INC_0         ((HRESULT)0xC004032FL)

//
// MessageId: E_FPC_INVALID_PERIODICAL_RUN_ARGUMENTS
//
// MessageText:
//
// The repetition time is longer than the specified interval.
//
#define E_FPC_INVALID_PERIODICAL_RUN_ARGUMENTS ((HRESULT)0xC0040330L)

//
// MessageId: E_FPC_INVALID_ICMP_CODE
//
// MessageText:
//
// An ICMP code between 0 and 255 must be provided.
//
#define E_FPC_INVALID_ICMP_CODE          ((HRESULT)0xC0040331L)

//
// MessageId: E_FPC_INVALID_ICMP_TYPE
//
// MessageText:
//
// An ICMP type between 0 and 255 must be provided.
//
#define E_FPC_INVALID_ICMP_TYPE          ((HRESULT)0xC0040332L)

//
// MessageId: E_FPC_INVALID_PROTOCOL
//
// MessageText:
//
// A communication protocol number between 0 and 255 must be provided.
//
#define E_FPC_INVALID_PROTOCOL           ((HRESULT)0xC0040333L)

//
// MessageId: E_FPC_PREDEFINED_ITEM_IS_READ_ONLY
//
// MessageText:
//
// This property cannot be modified for the predefined item.
//
#define E_FPC_PREDEFINED_ITEM_IS_READ_ONLY ((HRESULT)0xC0040334L)

//
// MessageId: E_FPC_CAN_NOT_DELETE_PREDEFINED
//
// MessageText:
//
// The item cannot be deleted. It is part of the static configuration.
//
#define E_FPC_CAN_NOT_DELETE_PREDEFINED  ((HRESULT)0xC0040335L)

//
// MessageId: E_FPC_IP_RANGE_SET_NOT_ALLOWED
//
// MessageText:
//
// This network type cannot have an IP range set.
//
#define E_FPC_IP_RANGE_SET_NOT_ALLOWED   ((HRESULT)0xC0040336L)

//
// MessageId: E_FPC_XML_PASSWORD_REQUIRED
//
// MessageText:
//
// A password containing at least eight characters must be specified in the EncryptionPassword parameter when the fpcExportImportPasswords flag is set.
//
#define E_FPC_XML_PASSWORD_REQUIRED      ((HRESULT)0xC0040337L)

//
// MessageId: E_FPC_XML_MISMATCH_IMPORT_OBJECT
//
// MessageText:
//
// The file cannot be imported. The exported file contains an object of type %1 which cannot be imported into an object of type %2.
//
#define E_FPC_XML_MISMATCH_IMPORT_OBJECT ((HRESULT)0xC0040338L)

//
// MessageId: E_FPC_XML_SCHEMA_VALIDATION_FAILED
//
// MessageText:
//
// Schema validation failed on the exported XML document. For more details see the XMLParseError property.
//
#define E_FPC_XML_SCHEMA_VALIDATION_FAILED ((HRESULT)0xC0040339L)

//
// MessageId: E_FPC_XML_NO_SERVER_AVAILABLE_FOR_EXPORT_PASSWORD
//
// MessageText:
//
// There is no available Forefront TMG computer to decrypt the exported password. Verify that services are running on at least one Forefront TMG computer.
//
#define E_FPC_XML_NO_SERVER_AVAILABLE_FOR_EXPORT_PASSWORD ((HRESULT)0xC004033AL)

//
// MessageId: E_FPC_XML_IMPORTED_OBJECT_NOT_PERSISTENT
//
// MessageText:
//
// The object cannot be imported with the specified import options. Verify that the specified import options match the object being imported.
//
#define E_FPC_XML_IMPORTED_OBJECT_NOT_PERSISTENT ((HRESULT)0xC004033BL)

//
// MessageId: E_FPC_XML_IMPORT_CANNOT_USE_CLEAN_COLLECTIONS
//
// MessageText:
//
// Only an array object can be imported with the CleanCollections parameter set to True.
//
#define E_FPC_XML_IMPORT_CANNOT_USE_CLEAN_COLLECTIONS ((HRESULT)0xC004033CL)

//
// MessageId: E_FPC_XML_MISMATCH_IMPORT_EDITION
//
// MessageText:
//
// Enterprise Edition settings cannot be imported into Standard Edition, and Standard Edition settings cannot be imported into Enterprise Edition.
//
#define E_FPC_XML_MISMATCH_IMPORT_EDITION ((HRESULT)0xC004033DL)

//
// MessageId: E_FPC_XML_MISMATCH_BUILD
//
// MessageText:
//
// An XML DOM document object cannot be imported from a newer build.
//
#define E_FPC_XML_MISMATCH_BUILD         ((HRESULT)0xC004033EL)

//
// MessageId: E_FPC_XML_WITH_PASSWORDS_REQUIRED
//
// MessageText:
//
// An XML DOM document object that was exported without the fpcExportImportPasswords flag set cannot be imported with the fpcExportImportPasswords flag set.
//
#define E_FPC_XML_WITH_PASSWORDS_REQUIRED ((HRESULT)0xC004033FL)

//
// MessageId: E_FPC_XML_WITH_SECURITY_DESCRIPTOR_REQUIRED
//
// MessageText:
//
// An XML DOM document object that was exported without the fpcExportImportUserPermissions flag set cannot be imported with the fpcExportImportUserPermissions flag set.
//
#define E_FPC_XML_WITH_SECURITY_DESCRIPTOR_REQUIRED ((HRESULT)0xC0040340L)

//
// MessageId: E_FPC_XML_WITH_SERVER_SPECIFIC_INFO_REQUIRED
//
// MessageText:
//
// An XML DOM document object that was exported without the fpcExportImportServerSpecific flag set cannot be imported with the fpcExportImportServerSpecific flag set.
//
#define E_FPC_XML_WITH_SERVER_SPECIFIC_INFO_REQUIRED ((HRESULT)0xC0040341L)

//
// MessageId: E_FPC_XML_INVALID_OPTIONAL_DATA_VALUE
//
// MessageText:
//
// The value of the OptionalData parameter must be a bitwise combination of FpcExportImportOptionalData values.
//
#define E_FPC_XML_INVALID_OPTIONAL_DATA_VALUE ((HRESULT)0xC0040342L)

//
// MessageId: E_FPC_XML_WRONG_PASSWORD
//
// MessageText:
//
// The password that you provided for the XML import is incorrect. Verify that the password matches the password provided during the export.
//
#define E_FPC_XML_WRONG_PASSWORD         ((HRESULT)0xC0040343L)

//
// MessageId: E_FPC_NO_VPN_CONNECTION_FOR_THE_NETWORK
//
// MessageText:
//
// The VPN properties cannot be configured for non-VPN networks.
//
#define E_FPC_NO_VPN_CONNECTION_FOR_THE_NETWORK ((HRESULT)0xC0040344L)

//
// MessageId: E_FPC_CAN_NOT_CHANGE_CONNECTION_TYPE
//
// MessageText:
//
// The connection type cannot be set for the network specified.
//
#define E_FPC_CAN_NOT_CHANGE_CONNECTION_TYPE ((HRESULT)0xC0040345L)

//
// MessageId: E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LOCAL_NETWORK
//
// MessageText:
//
// The %1 network includes IP addresses in the range %2-%3. Networks cannot contain IP address ranges that overlap another network.
//
#define E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LOCAL_NETWORK ((HRESULT)0xC0040346L)

//
// MessageId: E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LIMITED_BROADCAST
//
// MessageText:
//
// The specified address range contains the limited broadcast IP address (255.255.255.255). Change the IP range so that it does not contain 255.255.255.255.
//
#define E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LIMITED_BROADCAST ((HRESULT)0xC0040347L)

//
// MessageId: E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LOCAL_VPN_CONFIG
//
// MessageText:
//
// The static address pool of the VPN configuration includes IP addresses the range %1-%2. Networks cannot contain IP address ranges that overlap the static address pool of the VPN configuration.
//
#define E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_LOCAL_VPN_CONFIG ((HRESULT)0xC0040348L)

//
// MessageId: E_FPC_INVALID_NETWORK_CONNECTION_TYPE
//
// MessageText:
//
// The connection type is not valid for this network type.
//
#define E_FPC_INVALID_NETWORK_CONNECTION_TYPE ((HRESULT)0xC0040349L)

//
// MessageId: E_FPC_VPN_STATIC_ADDRESS_POOL_RAN_OUT_OF_ADDRESSES
//
// MessageText:
//
// There are not enough IP addresses available for VPN connections. For each server, the number of IP addresses in the static address pool must be at least one greater than the sum of the maximum number of connections allowed in the VPN configuration and the number of VPN networks."
//
#define E_FPC_VPN_STATIC_ADDRESS_POOL_RAN_OUT_OF_ADDRESSES ((HRESULT)0xC004034AL)

//
// MessageId: E_FPC_PREDEFINED_NETWORK_IS_READ_ONLY
//
// MessageText:
//
// This property cannot be modified for a predefined network.
//
#define E_FPC_PREDEFINED_NETWORK_IS_READ_ONLY ((HRESULT)0xC004034BL)

//
// MessageId: E_FPC_STORAGE_VER_MISMATCH
//
// MessageText:
//
// The Forefront TMG storage version is incompatible.
//
#define E_FPC_STORAGE_VER_MISMATCH       ((HRESULT)0xC004034CL)

//
// MessageId: E_FPC_BAD_ADMIN_VERSION
//
// MessageText:
//
// The version of the MMC management console in the remote Forefront TMG computer is incompatible. Upgrade either the local computer or the remote Forefront TMG computer.
//
#define E_FPC_BAD_ADMIN_VERSION          ((HRESULT)0xC004034DL)

//
// MessageId: E_FPC_ALERTSRV_UNKNOWN_EVENT
//
// MessageText:
//
// The event signaled cannot be found.
//
#define E_FPC_ALERTSRV_UNKNOWN_EVENT     ((HRESULT)0xC004034EL)

//
// MessageId: E_FPC_ALERTSRV_BAD_EVENT_GUID
//
// MessageText:
//
// The event GUID is not a valid GUID.
//
#define E_FPC_ALERTSRV_BAD_EVENT_GUID    ((HRESULT)0xC004034FL)

//
// MessageId: E_FPC_ALERTSRV_DUPLICATED_ALERT
//
// MessageText:
//
// An alert with the same event condition, server name, and additional key is already defined.
//
#define E_FPC_ALERTSRV_DUPLICATED_ALERT  ((HRESULT)0xC0040350L)

//
// MessageId: E_FPC_PROTOCOL_NOT_OUTBOUND
//
// MessageText:
//
// The specified protocol is a server (inbound) protocol. Inbound protocols can only be used in server publishing rules.
//
#define E_FPC_PROTOCOL_NOT_OUTBOUND      ((HRESULT)0xC0040351L)

//
// MessageId: E_FPC_VIP_IS_NOT_IN_RELATED_NETWORK
//
// MessageText:
//
// The specified Virtual IP address (VIP) %1 is not contained in the %2 network, in which the Network Load Balancing cluster resides.
//
#define E_FPC_VIP_IS_NOT_IN_RELATED_NETWORK ((HRESULT)0xC0040352L)

//
// MessageId: E_FPC_NLB_NIC_IDNETIFIER_IS_NOT_UNIQUE
//
// MessageText:
//
// The specified network adapter (%1) in the Network Load Balancing configuration of the %2 network is already used for Network Load Balancing of the %3 network on this server.
//
#define E_FPC_NLB_NIC_IDNETIFIER_IS_NOT_UNIQUE ((HRESULT)0xC0040353L)

//
// MessageId: E_FPC_NO_ACCESS_PROPERTIES_FOR_THE_RULE
//
// MessageText:
//
// Access rule properties can only be configured for access rules, and not for other rules such as Web publishing and server publishing rules.
//
#define E_FPC_NO_ACCESS_PROPERTIES_FOR_THE_RULE ((HRESULT)0xC0040354L)

//
// MessageId: E_FPC_NO_SERVER_PBLISHING_PROPERTIES_FOR_THE_RULE
//
// MessageText:
//
// Server publishing properties can be configured only for server publishing rules.
//
#define E_FPC_NO_SERVER_PBLISHING_PROPERTIES_FOR_THE_RULE ((HRESULT)0xC0040355L)

//
// MessageId: E_FPC_NO_WEB_PBLISHING_PROPERTIES_FOR_THE_RULE
//
// MessageText:
//
// Web publishing properties can only be configured for Web publishing rules.
//
#define E_FPC_NO_WEB_PBLISHING_PROPERTIES_FOR_THE_RULE ((HRESULT)0xC0040356L)

//
// MessageId: E_FPC_BAD_ITEM_NAME
//
// MessageText:
//
// The %1 referenced by %2 %3 does not exist.
//
#define E_FPC_BAD_ITEM_NAME              ((HRESULT)0xC0040357L)

//
// MessageId: E_FPC_AUTHENTICATION_SCHEME_FORWARD_ONLY
//
// MessageText:
//
// The authentication method selected cannot be used to authenticate Web publishing requests. Only outgoing Web requests can be authenticated using this method.
//
#define E_FPC_AUTHENTICATION_SCHEME_FORWARD_ONLY ((HRESULT)0xC0040358L)

//
// MessageId: E_FPC_AUTHENTICATION_SCHEME_REVERSE_ONLY
//
// MessageText:
//
// The authentication method selected cannot be used to authenticate outgoing Web requests. Only Web Publishing rules can use this authentication method.
//
#define E_FPC_AUTHENTICATION_SCHEME_REVERSE_ONLY ((HRESULT)0xC0040359L)

//
// MessageId: E_FPC_AUTHENTICATION_DOESNT_PROVIDE_NAMESPACE
//
// MessageText:
//
// The selected user namespace is not supported by an authentication method.
//
#define E_FPC_AUTHENTICATION_DOESNT_PROVIDE_NAMESPACE ((HRESULT)0xC004035AL)

//
// MessageId: E_FPC_AUTHENTICATION_SCHEME_EXCLUSIVE
//
// MessageText:
//
// %1 authentication cannot be used together with any other authentication method.
//
#define E_FPC_AUTHENTICATION_SCHEME_EXCLUSIVE ((HRESULT)0xC004035BL)

//
// MessageId: E_FPC_SECONDARY_CONNECTIONS_ARE_NOT_APPLICABLE
//
// MessageText:
//
// The specified protocol contains references to application filters. The secondary connections are not applicable.
//
#define E_FPC_SECONDARY_CONNECTIONS_ARE_NOT_APPLICABLE ((HRESULT)0xC004035CL)

//
// MessageId: E_FPC_INVALID_DIRECTORY
//
// MessageText:
//
// The directory is invalid.
//
#define E_FPC_INVALID_DIRECTORY          ((HRESULT)0xC004035DL)

//
// MessageId: E_FPC_INVALID_DATE
//
// MessageText:
//
// The date is invalid.
//
#define E_FPC_INVALID_DATE               ((HRESULT)0xC004035EL)

//
// MessageId: E_FPC_INVALID_DAYS_OF_WEEK
//
// MessageText:
//
// At least one day of the week must be specified.
//
#define E_FPC_INVALID_DAYS_OF_WEEK       ((HRESULT)0xC004035FL)

//
// MessageId: E_FPC_INVALID_DAY_OF_MONTH
//
// MessageText:
//
// The day of the month must be a number from 1 through 31.
//
#define E_FPC_INVALID_DAY_OF_MONTH       ((HRESULT)0xC0040360L)

//
// MessageId: E_FPC_ADD_LINK_WITHOUT_PUBLISHING
//
// MessageText:
//
// To add a link to a report, publishing must be enabled for the report.
//
#define E_FPC_ADD_LINK_WITHOUT_PUBLISHING ((HRESULT)0xC0040361L)

//
// MessageId: E_FPC_INVALID_EMAIL_CONFIGURATION
//
// MessageText:
//
// To send an e-mail, specify a valid SMTP server name, From line, and To line (or Cc line).
//
#define E_FPC_INVALID_EMAIL_CONFIGURATION ((HRESULT)0xC0040362L)

//
// MessageId: E_FPC_INVALID_PUBLISHING_CONFIGURATION
//
// MessageText:
//
// When publishing a report you must specify a valid publishing folder.
//
#define E_FPC_INVALID_PUBLISHING_CONFIGURATION ((HRESULT)0xC0040363L)

//
// MessageId: E_FPC_INVALID_CATEGORIES
//
// MessageText:
//
// The report must include one or more valid report categories.
//
#define E_FPC_INVALID_CATEGORIES         ((HRESULT)0xC0040364L)

//
// MessageId: E_FPC_VPN_STATIC_ADDRESS_POOL_INVALID_RANGE
//
// MessageText:
//
// IP address ranges in the static address pool must be between 1.0.0.0 and 223.255.255.255.
//
#define E_FPC_VPN_STATIC_ADDRESS_POOL_INVALID_RANGE ((HRESULT)0xC0040365L)

//
// MessageId: E_FPC_VPN_STATIC_ADDRESS_POOL_RANGE_TOO_SMALL
//
// MessageText:
//
// The IP address range is not valid. An IP address range must contain at least two IP addresses.
//
#define E_FPC_VPN_STATIC_ADDRESS_POOL_RANGE_TOO_SMALL ((HRESULT)0xC0040366L)

//
// MessageId: E_FPC_VPN_MAXIMUM_CONNECTION
//
// MessageText:
//
// The value specified for the maximum number of connections must be between %1 and %2.
//
#define E_FPC_VPN_MAXIMUM_CONNECTION     ((HRESULT)0xC0040367L)

//
// MessageId: E_FPC_VPN_INVALID_IP
//
// MessageText:
//
// An IP address must be either 0.0.0.0 or belong to the range from 1.0.0.0 to 223.255.255.255.
//
#define E_FPC_VPN_INVALID_IP             ((HRESULT)0xC0040368L)

//
// MessageId: E_FPC_VPN_INVALID_VALUE_IPS
//
// MessageText:
//
// The IP address of the primary server must be specified, or the option of using a DHCP server must be selected.
//
#define E_FPC_VPN_INVALID_VALUE_IPS      ((HRESULT)0xC0040369L)

//
// MessageId: E_FPC_INVALID_SAVEASHTML_CALL
//
// MessageText:
//
// Only reports that have been generated successfully can be saved in HTML format.
//
#define E_FPC_INVALID_SAVEASHTML_CALL    ((HRESULT)0xC004036AL)

//
// MessageId: E_FPC_SERVER_PUBLISHING_HAS_NO_NETWORKS
//
// MessageText:
//
// At least one network or network set must be specified for the server publishing rule %1.
//
#define E_FPC_SERVER_PUBLISHING_HAS_NO_NETWORKS ((HRESULT)0xC004036BL)

//
// MessageId: E_FPC_VPN_NETWORK_LISTENER_LIST_EMPTY
//
// MessageText:
//
// At least one network must be selected for VPN client access.
//
#define E_FPC_VPN_NETWORK_LISTENER_LIST_EMPTY ((HRESULT)0xC004036CL)

//
// MessageId: E_FPC_VPN_PROTOCOL_NOT_CHOSEN
//
// MessageText:
//
// At least one protocol must be selected for VPN remote client access.
//
#define E_FPC_VPN_PROTOCOL_NOT_CHOSEN    ((HRESULT)0xC004036DL)

//
// MessageId: E_FPC_NO_FULL_ADMINISTRATORS_LEFT
//
// MessageText:
//
// Forefront TMG cannot delete the specified user. A Forefront TMG configuration must include at least one user who is delegated the role of Forefront TMG Full Administrator.
//
#define E_FPC_NO_FULL_ADMINISTRATORS_LEFT ((HRESULT)0xC004036EL)

//
// MessageId: E_FPC_PROTOCOL_RAW_CAN_NOT_HAVE_AN_APPLICATION_FILTER
//
// MessageText:
//
// A protocol definition that has a raw or ICMP protocol cannot have an application filter associated with it.
//
#define E_FPC_PROTOCOL_RAW_CAN_NOT_HAVE_AN_APPLICATION_FILTER ((HRESULT)0xC004036FL)

//
// MessageId: E_FPC_PROTOCOL_ONLY_ONE_RAW_CONNECTION_ALLOWED
//
// MessageText:
//
// A protocol definition can have only one raw connection.
//
#define E_FPC_PROTOCOL_ONLY_ONE_RAW_CONNECTION_ALLOWED ((HRESULT)0xC0040370L)

//
// MessageId: E_FPC_NO_LOCALHOST_IN_NETWORK_RULE
//
// MessageText:
//
// The Local Host network cannot be included in a network rule.
//
#define E_FPC_NO_LOCALHOST_IN_NETWORK_RULE ((HRESULT)0xC0040371L)

//
// MessageId: E_FPC_WEB_PUB_RULE_MUST_HAVE_SPECIFIC_PUBLIC_NAMES
//
// MessageText:
//
// The Web publishing rule %1 can apply only to public names which do not include an asterisk (*). When link translation is enabled, the public name cannot include wildcard characters, and must be explicit.
//
#define E_FPC_WEB_PUB_RULE_MUST_HAVE_SPECIFIC_PUBLIC_NAMES ((HRESULT)0xC0040372L)

//
// MessageId: E_FPC_PROTOCOL_MUST_HAVE_PRIMARY_CONNECTION
//
// MessageText:
//
// The protocol definition must include at least one primary connection.
//
#define E_FPC_PROTOCOL_MUST_HAVE_PRIMARY_CONNECTION ((HRESULT)0xC0040373L)

//
// MessageId: E_FPC_PROTOCOL_ONLY_SAME_DIRECTION_CONNECTION_ALLOWED
//
// MessageText:
//
// Primary connections for the protocol definition must be configured for either outbound or inbound traffic, but not both.
//
#define E_FPC_PROTOCOL_ONLY_SAME_DIRECTION_CONNECTION_ALLOWED ((HRESULT)0xC0040374L)

//
// MessageId: E_FPC_REPORT_RUN_REQUIRES_SCHEDULER_RUNNING
//
// MessageText:
//
// The Microsoft Forefront TMG Job Scheduler Service must be running to create a report.
//
#define E_FPC_REPORT_RUN_REQUIRES_SCHEDULER_RUNNING ((HRESULT)0xC0040375L)

//
// MessageId: E_FPC_WEB_PUBLISHING_RULE_NO_LISTENER
//
// MessageText:
//
// No Web listener is specified for the Web publishing rule %1.
//
#define E_FPC_WEB_PUBLISHING_RULE_NO_LISTENER ((HRESULT)0xC0040376L)

//
// MessageId: E_FPC_VPN_IPSEC_PRESHARED_SECRET_NOT_SUPPORTED
//
// MessageText:
//
// The use of a preshared IPsec key is not supported on this version of Windows.
//
#define E_FPC_VPN_IPSEC_PRESHARED_SECRET_NOT_SUPPORTED ((HRESULT)0xC0040377L)

//
// MessageId: E_FPC_RADIUS_QUARANTINE_NOT_SUPPORTED
//
// MessageText:
//
// VPN quarantine based on RADIUS policies is not supported on this version of Windows.
//
#define E_FPC_RADIUS_QUARANTINE_NOT_SUPPORTED ((HRESULT)0xC0040378L)

//
// MessageId: E_FPC_BACKUP_ROUTE_MISSING_SERVER_NAME
//
// MessageText:
//
// A server name must be specified for the backup route in the chaining rule %1.
//
#define E_FPC_BACKUP_ROUTE_MISSING_SERVER_NAME ((HRESULT)0xC0040379L)

//
// MessageId: E_FPC_PRIMARY_ROUTE_MISSING_SERVER_NAME
//
// MessageText:
//
// A server name must be specified for the primary route in the chaining rule %1.
//
#define E_FPC_PRIMARY_ROUTE_MISSING_SERVER_NAME ((HRESULT)0xC004037AL)

//
// MessageId: E_FPC_WEB_BROWSER_CUSTOM_SCRIPT_MISSING
//
// MessageText:
//
// The URL or file name of a custom script for configuring Firewall client Web browsers must be specified for the %1 network.
//
#define E_FPC_WEB_BROWSER_CUSTOM_SCRIPT_MISSING ((HRESULT)0xC004037BL)

//
// MessageId: E_FPC_DIALUP_MISSING_USER_NAME
//
// MessageText:
//
// No user name was specified for the automatic dialing configuration.
//
#define E_FPC_DIALUP_MISSING_USER_NAME   ((HRESULT)0xC004037CL)

//
// MessageId: E_FPC_VPN_IPSEC_NETWORK_NOT_SUPPORTED
//
// MessageText:
//
// Retrieval of the IPsec VPN network settings is not supported for networks that do not have an IPsec connection.
//
#define E_FPC_VPN_IPSEC_NETWORK_NOT_SUPPORTED ((HRESULT)0xC004037DL)

//
// MessageId: E_FPC_VPN_L2TPPPTP_NETWORK_NOT_SUPPORTED
//
// MessageText:
//
// Retrieval of the L2TP/PPTP VPN network settings is not supported for networks that do not have a VPN connection.
//
#define E_FPC_VPN_L2TPPPTP_NETWORK_NOT_SUPPORTED ((HRESULT)0xC004037EL)

//
// MessageId: E_FPC_VPN_INVALID_PRESHARED_SECRET
//
// MessageText:
//
// A non-empty string must be specified for the preshared secret.
//
#define E_FPC_VPN_INVALID_PRESHARED_SECRET ((HRESULT)0xC004037FL)

//
// MessageId: E_FPC_VPN_IPSEC_NETWORK_REMOTE_SERVER_INVALID
//
// MessageText:
//
// The name specified for the remote server is not a valid IP address.
//
#define E_FPC_VPN_IPSEC_NETWORK_REMOTE_SERVER_INVALID ((HRESULT)0xC0040380L)

//
// MessageId: E_FPC_VPN_IPSEC_NETWORK_LOCAL_SERVER_INVALID
//
// MessageText:
//
// The name specified for the local server is not a valid IP address.
//
#define E_FPC_VPN_IPSEC_NETWORK_LOCAL_SERVER_INVALID ((HRESULT)0xC0040381L)

//
// MessageId: E_FPC_ITEM_IN_USE_NOT_IN_COLLECTION
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in an %3 %4.
//
#define E_FPC_ITEM_IN_USE_NOT_IN_COLLECTION ((HRESULT)0xC0040382L)

//
// MessageId: E_FPC_ISASCHED_DOWN
//
// MessageText:
//
// The job cannot be started because the Microsoft Forefront TMG Job Scheduler Service is not running. Check the status of the service.
//
#define E_FPC_ISASCHED_DOWN              ((HRESULT)0xC0040383L)

//
// MessageId: E_FPC_VPN_S2S_AUTHENTICATION_METHOD_EMPTY
//
// MessageText:
//
// At least one authentication method must be selected for site-to-site VPN access.
//
#define E_FPC_VPN_S2S_AUTHENTICATION_METHOD_EMPTY ((HRESULT)0xC0040384L)

//
// MessageId: E_FPC_WEB_PUB_RULE_NO_PUBLIC_NAMES
//
// MessageText:
//
// No public domain name or site name is specified for the Web publishing rule %1.
//
#define E_FPC_WEB_PUB_RULE_NO_PUBLIC_NAMES ((HRESULT)0xC0040385L)

//
// MessageId: E_FPC_VPN_NET_INVALID_CERTIFICATE_AUTHORITY
//
// MessageText:
//
// The certificate authority name must contain between %1 and %2 characters.
//
#define E_FPC_VPN_NET_INVALID_CERTIFICATE_AUTHORITY ((HRESULT)0xC0040386L)

//
// MessageId: E_FPC_VPN_NET_INVALID_PRESHARED_KEY
//
// MessageText:
//
// The preshared key must contain between %1 and %2 characters.
//
#define E_FPC_VPN_NET_INVALID_PRESHARED_KEY ((HRESULT)0xC0040387L)

//
// MessageId: E_FPC_SERVER_NOT_JOINED_TO_DOMAIN
//
// MessageText:
//
// The server is not joined to a domain.
//
#define E_FPC_SERVER_NOT_JOINED_TO_DOMAIN ((HRESULT)0xC0040388L)

//
// MessageId: E_FPC_DENY_SRV_PUB_NOT_ALLOWED
//
// MessageText:
//
// Server publishing rules cannot be configured as “deny” rules. By design, server publishing rules allow access to specified servers for which access is denied by default.
//
#define E_FPC_DENY_SRV_PUB_NOT_ALLOWED   ((HRESULT)0xC0040389L)

//
// MessageId: E_FPC_VPN_NET_CONFLICTING_AUTH_PROTOCOLS
//
// MessageText:
//
// For VPN site-to-site authentication, you can specify EAP authentication, or any combination of the alternative authentication protocols (PAP, SPAP, CHAP, MS-CHAP, MS-CHAP v2). EAP cannot be enabled together with any other authentication protocol.
//
#define E_FPC_VPN_NET_CONFLICTING_AUTH_PROTOCOLS ((HRESULT)0xC004038AL)

//
// MessageId: E_FPC_ISASTG_SERVICE_UNAVAILABLE
//
// MessageText:
//
// The Microsoft Forefront TMG Storage Service is unavailable.
//
#define E_FPC_ISASTG_SERVICE_UNAVAILABLE ((HRESULT)0xC004038BL)

//
// MessageId: E_NO_SITE_OR_DOMIAN_DEFINED
//
// MessageText:
//
// The URL specified does not contain a domain or site name. If you want to specify a folder, the folder prefix (“/”) must come after the domain name.
//
#define E_NO_SITE_OR_DOMIAN_DEFINED      ((HRESULT)0xC004038CL)

//
// MessageId: E_PORT_NUMBER_IN_WEB_SITE_NAME
//
// MessageText:
//
// The Web server name cannot contain a port number. The port numbers to be used for redirecting requests to this Web server can be specified in the HTTPRedirectPort and SSLRedirectPort properties for the rule.
//
#define E_PORT_NUMBER_IN_WEB_SITE_NAME   ((HRESULT)0xC004038DL)

//
// MessageId: E_DISCONNECT_CONTAINING_ARRAY
//
// MessageText:
//
// The server cannot be disconnected from the containing array.
//
#define E_DISCONNECT_CONTAINING_ARRAY    ((HRESULT)0xC004038EL)

//
// MessageId: E_FPC_MSDE_NOT_INSTALLED
//
// MessageText:
//
// The SQL Express feature is currently not installed. To install SQL Express, in the Add/Remove Programs applet, select Microsoft Forefront TMG and click Change. Then, in the Microsoft Forefront TMG Installation Wizard use the Modify option to add SQL Express to the installation.
//
#define E_FPC_MSDE_NOT_INSTALLED         ((HRESULT)0xC004038FL)

//
// MessageId: E_FPC_LISTENER_WITH_SAME_IP_AND_PORT_IN_USE
//
// MessageText:
//
// A Web listener configured to listen on the same IP address and port is already being used by the rule %1.
//
#define E_FPC_LISTENER_WITH_SAME_IP_AND_PORT_IN_USE ((HRESULT)0xC0040390L)

//
// MessageId: E_FPC_2_LISTENERS_WITH_SAME_IP_AND_PORT_IN_USE
//
// MessageText:
//
// The Web listeners used in the rule %1 and in the rule %2 specify identical IP addresses and ports. Web listener IP addresses and ports used by different rules cannot overlap.
//
#define E_FPC_2_LISTENERS_WITH_SAME_IP_AND_PORT_IN_USE ((HRESULT)0xC0040391L)

//
// MessageId: E_FPC_INVALID_PUBLISHING_CREDENTIALS_CONFIGURATION
//
// MessageText:
//
// The user account does not have the required permissions to publish the report.
//
#define E_FPC_INVALID_PUBLISHING_CREDENTIALS_CONFIGURATION ((HRESULT)0xC0040392L)

//
// MessageId: E_FPC_UPLOAD_NEW_CONFIGURATION
//
// MessageText:
//
// Some configuration changes were not applied. See the Windows event viewer for more details.
//
#define E_FPC_UPLOAD_NEW_CONFIGURATION   ((HRESULT)0xC0040393L)

//
// MessageId: E_FPC_INVALID_LOG_DIRECTORY_AND_TYPE
//
// MessageText:
//
// The full path option is selected for the log file path, but the log directory is specified by an empty string.
//
#define E_FPC_INVALID_LOG_DIRECTORY_AND_TYPE ((HRESULT)0xC0040394L)

//
// MessageId: E_FPC_PROTOCOL_NOT_SERVER_PROTOCOL
//
// MessageText:
//
// The specified protocol is not an inbound (server) protocol and cannot be used in the server publishing rule %1.
//
#define E_FPC_PROTOCOL_NOT_SERVER_PROTOCOL ((HRESULT)0xC0040395L)

//
// MessageId: E_FPC_SSL_MUST_HAVE_CERTIFICATE
//
// MessageText:
//
// SSL is enabled for the %1 %2. You must specify a certificate to use for SSL authentication. The changes cannot be applied.
//
#define E_FPC_SSL_MUST_HAVE_CERTIFICATE  ((HRESULT)0xC0040396L)

//
// MessageId: E_FPC_CORRUPTED_ITEM_OBJECT_ATTRIBUTE
//
// MessageText:
//
// Attribute %1 of object type %2 is corrupted. You should delete the object owner %3 of type %4, fix the corrupted attribute, or import a valid configuration.
//
#define E_FPC_CORRUPTED_ITEM_OBJECT_ATTRIBUTE ((HRESULT)0xC0040397L)

//
// MessageId: E_FPC_CORRUPTED_OBJECT_ATTRIBUTE
//
// MessageText:
//
// Attribute %1 of object type %2 is corrupted. You should delete the object, fix the corrupted attribute, or import a valid configuration.
//
#define E_FPC_CORRUPTED_OBJECT_ATTRIBUTE ((HRESULT)0xC0040398L)

//
// MessageId: E_FPC_XML_VERSION_MISMATCH
//
// MessageText:
//
// The XML file cannot be imported to this version of Forefront TMG. Install the latest version of Forefront TMG updates and then try importing the XML file again.
//
#define E_FPC_XML_VERSION_MISMATCH       ((HRESULT)0xC0040399L)

//
// MessageId: E_FPC_CANNOT_IMPORT_SYSTEM_POLICY_RULE
//
// MessageText:
//
// System policy rules cannot be imported individually.
//
#define E_FPC_CANNOT_IMPORT_SYSTEM_POLICY_RULE ((HRESULT)0xC004039AL)

//
// MessageId: E_FPC_CANNOT_EXPORT_SYSTEM_POLICY_RULE
//
// MessageText:
//
// System policy rules cannot be exported individually.
//
#define E_FPC_CANNOT_EXPORT_SYSTEM_POLICY_RULE ((HRESULT)0xC004039BL)

//
// MessageId: E_FPC_CANNOT_SAVE_CACHEDRIVE_WHEN_ISACTRL_SERVICE_DOWN
//
// MessageText:
//
// The Forefront TMG Control service is currently stopped. As a result, the changes made to the configuration cannot be saved. To save the changes, you must either start the Forefront TMG Control service, or disable the changed cache drive setting by resetting it back to 0.
//
#define E_FPC_CANNOT_SAVE_CACHEDRIVE_WHEN_ISACTRL_SERVICE_DOWN ((HRESULT)0xC004039CL)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_ARRAY_SCOPE
//
// MessageText:
//
// The property or method %1 is not supported in array scope.
//
#define E_FPC_NOT_SUPPORTED_IN_ARRAY_SCOPE ((HRESULT)0xC004039DL)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_ENTERPRISE_SCOPE
//
// MessageText:
//
// The property or method %1 is not supported in enterprise scope.
//
#define E_FPC_NOT_SUPPORTED_IN_ENTERPRISE_SCOPE ((HRESULT)0xC004039EL)

//
// MessageId: E_FPC_CANNOT_JOIN_JOINED_SERVER
//
// MessageText:
//
// Join array is only supported on standalone single server.
//
#define E_FPC_CANNOT_JOIN_JOINED_SERVER  ((HRESULT)0xC004039FL)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_EE_CENTRAL_MODE
//
// MessageText:
//
// The property or method %1 is not supported when a Configuration Storage server is used.
//
#define E_FPC_NOT_SUPPORTED_IN_EE_CENTRAL_MODE ((HRESULT)0xC00403A0L)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_EE_LOCAL_MODE
//
// MessageText:
//
// The property or method %1 is not supported when the configuration is stored only on the local computer.
//
#define E_FPC_NOT_SUPPORTED_IN_EE_LOCAL_MODE ((HRESULT)0xC00403A1L)

//
// MessageId: E_FPC_ENTERPRISE_ITEM_CANNOT_REFERENCE_ARRAY_ITEM
//
// MessageText:
//
// An enterprise item cannot reference an array-level item.
//
#define E_FPC_ENTERPRISE_ITEM_CANNOT_REFERENCE_ARRAY_ITEM ((HRESULT)0xC00403A2L)

//
// MessageId: E_FPC_XML_IMPORT_ARRAY_OR_POLICY_NOT_IN_XML
//
// MessageText:
//
// The exported enterprise XML file does not include data for the importing object. The file cannot be imported into this object.
//
#define E_FPC_XML_IMPORT_ARRAY_OR_POLICY_NOT_IN_XML ((HRESULT)0xC00403A3L)

//
// MessageId: E_FPC_XML_IMPORT_FROM_NON_VALID_XML
//
// MessageText:
//
// The XML file cannot be imported into this object. Verify that the exported file is valid and that it contains an appropriate object type.
//
#define E_FPC_XML_IMPORT_FROM_NON_VALID_XML ((HRESULT)0xC00403A4L)

//
// MessageId: E_FPC_XML_IMPORT_CROSS_SCOPE
//
// MessageText:
//
// The file cannot be imported. The file contains an %2 %1, which cannot be imported into an %4 %3.
//
#define E_FPC_XML_IMPORT_CROSS_SCOPE     ((HRESULT)0xC00403A5L)

//
// MessageId: E_FPC_NOT_CONNECTED_TO_ENTERPRISE
//
// MessageText:
//
// The property or method %1 is not supported when the Forefront TMG computer is not connected to a Configuration Storage server.
//
#define E_FPC_NOT_CONNECTED_TO_ENTERPRISE ((HRESULT)0xC00403A6L)

//
// MessageId: E_FPC_CARP_IS_NOT_SUPPORTED_IN_WEB_PUBLISHING
//
// MessageText:
//
// CARP is not supported in a Web publishing scenario.
//
#define E_FPC_CARP_IS_NOT_SUPPORTED_IN_WEB_PUBLISHING ((HRESULT)0xC00403A7L)

//
// MessageId: E_FPC_METHOD_SUPPORTED_ONLY_ON_MANAGEMENT_SERVER
//
// MessageText:
//
// This method is supported only on a management server.
//
#define E_FPC_METHOD_SUPPORTED_ONLY_ON_MANAGEMENT_SERVER ((HRESULT)0xC00403A8L)

//
// MessageId: E_FPC_PUBLISHING_RULES_NOT_SUPPORTED_IN_ENTERPRISE_POLICY
//
// MessageText:
//
// Publishing rules are not supported in an enterprise policy.
//
#define E_FPC_PUBLISHING_RULES_NOT_SUPPORTED_IN_ENTERPRISE_POLICY ((HRESULT)0xC00403A9L)

//
// MessageId: E_FPC_ALLOW_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED
//
// MessageText:
//
// Access rules that allow traffic cannot be added to the array's Firewall policy.
//
#define E_FPC_ALLOW_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED ((HRESULT)0xC00403AAL)

//
// MessageId: E_FPC_DENY_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED
//
// MessageText:
//
// Access rules that deny traffic cannot be added to the array's Firewall policy.
//
#define E_FPC_DENY_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED ((HRESULT)0xC00403ABL)

//
// MessageId: E_FPC_PUBLISHING_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED
//
// MessageText:
//
// Server publishing rules or Web publishing rules cannot be added to the array's Firewall policy.
//
#define E_FPC_PUBLISHING_POLICY_RULES_IN_ARRAY_POLICY_BLOCKED ((HRESULT)0xC00403ACL)

//
// MessageId: E_FPC_POLICY_RULES_EXISTS_IN_ARRAY_POLICY
//
// MessageText:
//
// The array policy placeholder cannot be disabled because the array %1 contains policy rules.
//
#define E_FPC_POLICY_RULES_EXISTS_IN_ARRAY_POLICY ((HRESULT)0xC00403ADL)

//
// MessageId: E_FPC_DENY_POLICY_RULES_EXISTS_IN_ARRAY_POLICY
//
// MessageText:
//
// The firewall policy for this array already includes deny rules. To block deny rules for this array, you must first delete all existing deny rules from the firewall policy.
//
#define E_FPC_DENY_POLICY_RULES_EXISTS_IN_ARRAY_POLICY ((HRESULT)0xC00403AEL)

//
// MessageId: E_FPC_ALLOW_POLICY_RULES_EXISTS_IN_ARRAY_POLICY
//
// MessageText:
//
// The firewall policy for this array already includes allow rules. To block allow rules for this array, you must first delete all existing allow rules from the firewall policy.
//
#define E_FPC_ALLOW_POLICY_RULES_EXISTS_IN_ARRAY_POLICY ((HRESULT)0xC00403AFL)

//
// MessageId: E_FPC_PUBLISHING_POLICY_RULES_EXISTS_IN_ARRAY_POLICY
//
// MessageText:
//
// The firewall policy for this array already includes publishing rules. To block publishing rules for this array, you must first delete all existing publishing rules from the firewall policy.
//
#define E_FPC_PUBLISHING_POLICY_RULES_EXISTS_IN_ARRAY_POLICY ((HRESULT)0xC00403B0L)

//
// MessageId: E_FPC_NOT_SUPPORTED_FOR_ARRAY_POLICY_PLACE_HOLDER
//
// MessageText:
//
// The property or method is not supported for an array policy placeholder rule.
//
#define E_FPC_NOT_SUPPORTED_FOR_ARRAY_POLICY_PLACE_HOLDER ((HRESULT)0xC00403B1L)

//
// MessageId: E_FPC_NO_PRIVATE_KEY_FOR_CERTIFICATE
//
// MessageText:
//
// The specified certificate does not have an associated private key.
//
#define E_FPC_NO_PRIVATE_KEY_FOR_CERTIFICATE ((HRESULT)0xC00403B2L)

//
// MessageId: E_FPC_INCORRECT_CERTIFICATE_PASSWORD
//
// MessageText:
//
// The specified certificate password is incorrect.
//
#define E_FPC_INCORRECT_CERTIFICATE_PASSWORD ((HRESULT)0xC00403B3L)

//
// MessageId: E_FPC_ENTERPRISE_NETWORK_ALREADY_INCLUDED
//
// MessageText:
//
// The selected enterprise network %2 is already included in the array network %1. An enterprise network cannot be included in more than one array network.
//
#define E_FPC_ENTERPRISE_NETWORK_ALREADY_INCLUDED ((HRESULT)0xC00403B4L)

//
// MessageId: E_FPC_ENTERPRISE_NETWORK_INCLUDED_IN_TWO_NETWORKS
//
// MessageText:
//
// The %3 enterprise network is currently included in both the %1 and %2 array networks. An enterprise network cannot be included in more than one array network.
//
#define E_FPC_ENTERPRISE_NETWORK_INCLUDED_IN_TWO_NETWORKS ((HRESULT)0xC00403B5L)

//
// MessageId: E_FPC_SE_MIGRATE_ONLY_SUPPORTED_FOR_ARRAY
//
// MessageText:
//
// The Forefront TMG configuration cannot be imported because it was exported from a computer running an earlier version of Forefront TMG Standard Edition and the array node was not selected during both exporting and importing. For upgrading, the configuration must be exported from the array node and imported to the array node.
//
#define E_FPC_SE_MIGRATE_ONLY_SUPPORTED_FOR_ARRAY ((HRESULT)0xC00403B6L)

//
// MessageId: E_FPC_SE_MIGRATE_ONLY_SUPPORTED_ONE_SERVER
//
// MessageText:
//
// The file being imported can only be imported into an array that has one server.
//
#define E_FPC_SE_MIGRATE_ONLY_SUPPORTED_ONE_SERVER ((HRESULT)0xC00403B7L)

//
// MessageId: E_FPC_SE_MIGRATE_ONLY_SUPPORTED_MERGE
//
// MessageText:
//
// The selected file cannot be used to restore the configuration. It can only be used for importing.
//
#define E_FPC_SE_MIGRATE_ONLY_SUPPORTED_MERGE ((HRESULT)0xC00403B8L)

//
// MessageId: E_FPC_NLB_NETWORK_TYPE_MUST_BE_ADAPTER
//
// MessageText:
//
// Network Load Balancing can be enabled on a network only if the connection to the network is configured to be through a network adapter.
//
#define E_FPC_NLB_NETWORK_TYPE_MUST_BE_ADAPTER ((HRESULT)0xC00403B9L)

//
// MessageId: E_FPC_CANNOT_REMOVE_LAST_SERVER_FROM_ARRAY
//
// MessageText:
//
// Removing a standalone server from its array is not allowed.
//
#define E_FPC_CANNOT_REMOVE_LAST_SERVER_FROM_ARRAY ((HRESULT)0xC00403BAL)

//
// MessageId: E_FPC_ENT_NETWORK_IN_ARRAY_NETWORK_SET_NOT_ALLOWED
//
// MessageText:
//
// Array network sets cannot include enterprise networks.
//
#define E_FPC_ENT_NETWORK_IN_ARRAY_NETWORK_SET_NOT_ALLOWED ((HRESULT)0xC00403BBL)

//
// MessageId: E_FPC_ENT_NETWORK_SET_IN_LISTENER_NOT_ALLOWED
//
// MessageText:
//
// A publishing rule cannot listen on an enterprise network set.
//
#define E_FPC_ENT_NETWORK_SET_IN_LISTENER_NOT_ALLOWED ((HRESULT)0xC00403BCL)

//
// MessageId: E_FPC_NO_NLB_CLUSTER_CONFIG_FOR_THE_NETWORK
//
// MessageText:
//
// The Network Load Balancing cluster properties can be configured only for networks whose connection type specifies a connection through a network adapter.
//
#define E_FPC_NO_NLB_CLUSTER_CONFIG_FOR_THE_NETWORK ((HRESULT)0xC00403BDL)

//
// MessageId: E_FPC_INVALID_NLB_CLUSTER_MASK
//
// MessageText:
//
// The Network Load Balancing cluster IP mask must not be 255.255.255.255.
//
#define E_FPC_INVALID_NLB_CLUSTER_MASK   ((HRESULT)0xC00403BEL)

//
// MessageId: E_FPC_PARRENT_ARRAY_NOT_CONTAINING_ARRAY
//
// MessageText:
//
// Application and Web filters can only be added to and removed from an array in which this server is located.
//
#define E_FPC_PARRENT_ARRAY_NOT_CONTAINING_ARRAY ((HRESULT)0xC00403BFL)

//
// MessageId: E_FPC_INVALID_CONFIGURATION
//
// MessageText:
//
// The storage configuration agent was unable to upload the configuration to the service.
//
#define E_FPC_INVALID_CONFIGURATION      ((HRESULT)0xC00403C0L)

//
// MessageId: E_FPC_STORAGE_SERVER_INACCESSIBLE
//
// MessageText:
//
// The storage configuration agent was unable to access the Configuration Storage server.
//
#define E_FPC_STORAGE_SERVER_INACCESSIBLE ((HRESULT)0xC00403C1L)

//
// MessageId: E_FPC_ITEM_IN_USE_NOT_IN_ARRAY_COLLECTION
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in a %3 of array %4.
//
#define E_FPC_ITEM_IN_USE_NOT_IN_ARRAY_COLLECTION ((HRESULT)0xC00403C2L)

//
// MessageId: E_FPC_ITEM_IN_USE_NOT_IN_POLICY_COLLECTION
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in a %3 of the enterprise policy %4.
//
#define E_FPC_ITEM_IN_USE_NOT_IN_POLICY_COLLECTION ((HRESULT)0xC00403C3L)

//
// MessageId: E_FPC_ITEM_IN_USE_IN_ARRAY
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in the %3 %4 of the %5 array.
//
#define E_FPC_ITEM_IN_USE_IN_ARRAY       ((HRESULT)0xC00403C4L)

//
// MessageId: E_FPC_ITEM_IN_USE_IN_POLICY
//
// MessageText:
//
// The %1 %2 cannot be deleted because it is used in the %3 %4 of the enterprise policy %5.
//
#define E_FPC_ITEM_IN_USE_IN_POLICY      ((HRESULT)0xC00403C5L)

//
// MessageId: E_FPC_VPN_S2S_NO_ASSIGNED_SERVER
//
// MessageText:
//
// The Forefront TMG specified as the connection owner is not configured for VPN site-to-site network %1.
//
#define E_FPC_VPN_S2S_NO_ASSIGNED_SERVER ((HRESULT)0xC00403C6L)

//
// MessageId: E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_STATIC_POOL
//
// MessageText:
//
// The VPN configuration static address pool for the server %1 already includes IP addresses in the range %2-%3. New IP ranges cannot overlap existing ranges in the current static address pool.
//
#define E_FPC_IP_RANGE_ENTRY_INTERSECT_WITH_STATIC_POOL ((HRESULT)0xC00403C7L)

//
// MessageId: E_FPC_NO_ENTERPRISE_NETWORK_IN_PREDEFINED_ARRAY_NETWORK
//
// MessageText:
//
// A predefine array network cannot include an enterprise network.
//
#define E_FPC_NO_ENTERPRISE_NETWORK_IN_PREDEFINED_ARRAY_NETWORK ((HRESULT)0xC00403C8L)

//
// MessageId: E_FPC_NO_PREDEFINED_ENTERPRISE_NETWORK_IN_ARRAY_NETWORK
//
// MessageText:
//
// An array network cannot include a predefined enterprise network.
//
#define E_FPC_NO_PREDEFINED_ENTERPRISE_NETWORK_IN_ARRAY_NETWORK ((HRESULT)0xC00403C9L)

//
// MessageId: E_FPC_DEPRECATED
//
// MessageText:
//
// The property or method %1 is deprecated and should not be used.
//
#define E_FPC_DEPRECATED                 ((HRESULT)0xC00403CAL)

//
// MessageId: E_FPC_DHCP_NOT_SUPPORTED_ON_MULTI_SERVER_ARRAYS
//
// MessageText:
//
// DHCP cannot be used to assign IP addresses to VPN clients or remote endpoint servers on multiple-server arrays.
//
#define E_FPC_DHCP_NOT_SUPPORTED_ON_MULTI_SERVER_ARRAYS ((HRESULT)0xC00403CBL)

//
// MessageId: E_FPC_NOT_SERVER_CERTIFICATE
//
// MessageText:
//
// The specified certificate is not a server certificate. 
//
#define E_FPC_NOT_SERVER_CERTIFICATE     ((HRESULT)0xC00403CCL)

//
// MessageId: E_FPC_EE_MIGRATE_ONLY_SUPPORTED_FOR_ROOT
//
// MessageText:
//
// The Forefront TMG configuration cannot be imported because it was exported from a computer running an earlier version of Forefront TMG Enterprise Edition and the root node was not selected during both exporting and importing. For upgrading, the configuration must be exported from the root node and imported to the root node.
//
#define E_FPC_EE_MIGRATE_ONLY_SUPPORTED_FOR_ROOT ((HRESULT)0xC00403CDL)

//
// MessageId: S_FPC_LOGGING_RESUMED
//
// MessageText:
//
// Logging has been resumed following a previous failure.
//
#define S_FPC_LOGGING_RESUMED            ((HRESULT)0x000403CEL)

//
// MessageId: E_FPC_DEST_NOT_IP_MASK
//
// MessageText:
//
// The IP mask specified for the object is invalid.
//
#define E_FPC_DEST_NOT_IP_MASK           ((HRESULT)0xC00403CFL)

//
// MessageId: S_FPC_TIME_SKEW
//
// MessageText:
//
// The time setting of at least one server in the array is not synchronized with the rest of the array. As a result the records of some servers may be delayed. Synchronizing the time settings for array members will resolve this problem.
//
#define S_FPC_TIME_SKEW                  ((HRESULT)0x000403D0L)

//
// MessageId: E_FPC_IMPORT_B2B_VALIDATION
//
// MessageText:
//
// The file you are importing is from an older build of Forefront TMG. Importing such files is only supported if the file was exported from the root node and can only be imported to the root node.
//
#define E_FPC_IMPORT_B2B_VALIDATION      ((HRESULT)0xC00403D1L)

//
// MessageId: E_FPC_INVALID_SPOOF_DETECTION_MODE
//
// MessageText:
//
// The spoof detection mode is not valid for this network.
//
#define E_FPC_INVALID_SPOOF_DETECTION_MODE ((HRESULT)0xC00403D2L)

//
// MessageId: E_FPC_CAN_NOT_CHANGE_SPOOF_DETECTION_MODE
//
// MessageText:
//
// The spoof detection mode cannot be modified for this network.
//
#define E_FPC_CAN_NOT_CHANGE_SPOOF_DETECTION_MODE ((HRESULT)0xC00403D3L)

//
// MessageId: E_FPC_CONSOLE_STORAGE_SERVER_INACCESSIBLE
//
// MessageText:
//
// Forefront TMG Management was unable to access the Configuration Storage server to which it is connected.
//
#define E_FPC_CONSOLE_STORAGE_SERVER_INACCESSIBLE ((HRESULT)0xC00403D4L)

//
// MessageId: E_FPC_ARRAY_STORAGE_SERVER_INACCESSIBLE
//
// MessageText:
//
// Forefront TMG Management was unable to access the Configuration Storage server to which the array members are connected.
//
#define E_FPC_ARRAY_STORAGE_SERVER_INACCESSIBLE ((HRESULT)0xC00403D5L)

//
// MessageId: E_FPC_REPLICATION_ERROR
//
// MessageText:
//
// A replication error occurred between the Configuration Storage server to which Forefront TMG Management is connected and the Configuration Storage server to which the array members are connected.
//
#define E_FPC_REPLICATION_ERROR          ((HRESULT)0xC00403D6L)

//
// MessageId: E_FPC_IP_IS_NOT_SPORTED_AS_CONFIGURATION_STORAGE_NAME
//
// MessageText:
//
// Using an IP address for specifying the configuration storage server is not supported. Use the fully qualified domain name (FQDN) instead.
//
#define E_FPC_IP_IS_NOT_SPORTED_AS_CONFIGURATION_STORAGE_NAME ((HRESULT)0xC00403D7L)

//
// MessageId: E_FPC_MACHINE_ACCOUNT_COULD_NOT_BE_RESOLVED
//
// MessageText:
//
// The Server service on the configuration storage server could not be accessed. This service is required for saving restored server data.
// Verify that the service is running. Alternatively, restore the configuration on the configuration storage server locally.
//
#define E_FPC_MACHINE_ACCOUNT_COULD_NOT_BE_RESOLVED ((HRESULT)0xC00403D8L)

//
// MessageId: E_FPC_INVALID_PARAMETER_FOR_SE
//
// MessageText:
//
// The value specified for the parameter %1 is not valid for Standard Edition.
//
#define E_FPC_INVALID_PARAMETER_FOR_SE   ((HRESULT)0xC00403D9L)

//
// MessageId: E_FPC_WEB_PUBLISHING_RULE_NO_SERVERFARM
//
// MessageText:
//
// No server farm is specified for the Web publishing rule %1.
//
#define E_FPC_WEB_PUBLISHING_RULE_NO_SERVERFARM ((HRESULT)0xC00403DAL)

//
// MessageId: E_FPC_SERVERFARM_NO_SERVERS
//
// MessageText:
//
// No published servers are specified for the server farm %1.
//
#define E_FPC_SERVERFARM_NO_SERVERS      ((HRESULT)0xC00403DBL)

//
// MessageId: E_FPC_XML_ISA2000_UPGRADE_NOT_SUPPORTED
//
// MessageText:
//
// The configuration could not be imported. Importing an ISA Server 2000 configuration into Forefront TMG is not supported.
//
#define E_FPC_XML_ISA2000_UPGRADE_NOT_SUPPORTED ((HRESULT)0xC00403DCL)

//
// MessageId: E_FPC_FBA_NOT_SUPPORTED_IN_FORWARD_PROXY
//
// MessageText:
//
// The property or method is not supported for the Web listener properties of a network.
//
#define E_FPC_FBA_NOT_SUPPORTED_IN_FORWARD_PROXY ((HRESULT)0xC00403DDL)

//
// MessageId: E_FPC_ONLY_ONE_CODE_PAGE_SUPPORTED
//
// MessageText:
//
// An attempt was made to specify more than one code page in a Web publishing rule.
//
#define E_FPC_ONLY_ONE_CODE_PAGE_SUPPORTED ((HRESULT)0xC00403DEL)

//
// MessageId: E_FPC_CODE_PAGE_NOT_NUMERIC
//
// MessageText:
//
// The string supplied to specify the code page does not represent a numeric value.
//
#define E_FPC_CODE_PAGE_NOT_NUMERIC      ((HRESULT)0xC00403DFL)

//
// MessageId: E_FPC_URL_WITHOUT_PROTOCOL
//
// MessageText:
//
// An attempt was made to specify a URL without a protocol in a link translation mapping.
//
#define E_FPC_URL_WITHOUT_PROTOCOL       ((HRESULT)0xC00403E0L)

//
// MessageId: E_FPC_URL_TOO_LONG
//
// MessageText:
//
// An attempt was made to specify a URL that is longer than 2057 bytes in a link translation mapping.
//
#define E_FPC_URL_TOO_LONG               ((HRESULT)0xC00403E1L)

//
// MessageId: E_FPC_EMPTY_PATH_MAPPINGS
//
// MessageText:
//
// No path mappings are defined in the path mappings collection for the Web publishing rule.
//
#define E_FPC_EMPTY_PATH_MAPPINGS        ((HRESULT)0xC00403E2L)

//
// MessageId: E_LINK_TRANSLATIONS_NOT_APPLIED_YET
//
// MessageText:
//
// The configuration stored on the Forefront TMG computer does not yet contain the link translation configuration for the specified rule.
//
#define E_LINK_TRANSLATIONS_NOT_APPLIED_YET ((HRESULT)0xC00403E3L)

//
// MessageId: E_ANY_PUBLIC_NAME_SELECTED
//
// MessageText:
//
// A link translation dictionary cannot be generated for a rule that applies to any public name.
//
#define E_ANY_PUBLIC_NAME_SELECTED       ((HRESULT)0xC00403E4L)

//
// MessageId: E_FPC_CODE_PAGE_NOT_SUPPORTED
//
// MessageText:
//
// Link translation does not support the specified code page.
//
#define E_FPC_CODE_PAGE_NOT_SUPPORTED    ((HRESULT)0xC00403E5L)

//
// MessageId: E_FPC_DEPRECATED_CONFIG_GROUP
//
// MessageText:
//
// The configuration group of system policy rules specified is no longer supported.
//
#define E_FPC_DEPRECATED_CONFIG_GROUP    ((HRESULT)0xC00403E6L)

//
// MessageId: E_DOMAIN_NAME_CONTAINS_PORT_NUMBER
//
// MessageText:
//
// A port number is appended to the domain name specified
//
#define E_DOMAIN_NAME_CONTAINS_PORT_NUMBER ((HRESULT)0xC00403E7L)

//
// MessageId: E_FPC_ADD_VENDOR_SYSTEM_POLICY_RULE_NOT_IN_VENDOR_MODE
//
// MessageText:
//
// An attempt was made to add a new vendor system policy rule when the the administration COM object hierarchy is not in vendor mode.
//
#define E_FPC_ADD_VENDOR_SYSTEM_POLICY_RULE_NOT_IN_VENDOR_MODE ((HRESULT)0xC00403E8L)

//
// MessageId: E_FPC_REMOVE_VENDOR_SYSTEM_POLICY_RULE_NOT_IN_VENDOR_MODE
//
// MessageText:
//
// An attempt was made to remove a vendor system policy rule when the administration COM object hierarchy is not in vendor mode.
//
#define E_FPC_REMOVE_VENDOR_SYSTEM_POLICY_RULE_NOT_IN_VENDOR_MODE ((HRESULT)0xC00403E9L)

//
// MessageId: E_FPC_INVALID_CERTIFICATE_TYPE
//
// MessageText:
//
// The type of the specified certificate is not valid.
//
#define E_FPC_INVALID_CERTIFICATE_TYPE   ((HRESULT)0xC00403EAL)

//
// MessageId: E_FPC_SERVICE_INACCESSIBLE
//
// MessageText:
//
// The Microsoft Forefront TMG Control service could not be accessed.
//
#define E_FPC_SERVICE_INACCESSIBLE       ((HRESULT)0xC00403ECL)

//
// MessageId: E_FPC_INCOMPATIBLE_AUTHENTICATION_AND_DELEGATION_SCHEMES
//
// MessageText:
//
// The authentication settings of the Web listener used in the rule %1 are not compatible with the type of credentials delegation configured for this rule.
//
#define E_FPC_INCOMPATIBLE_AUTHENTICATION_AND_DELEGATION_SCHEMES ((HRESULT)0xC00403EDL)

//
// MessageId: E_FPC_MAIL_LOG_NOT_SUPPORTED
//
// MessageText:
//
// SMTP Message Screener logging is no longer supported in this version of Forefront TMG.
//
#define E_FPC_MAIL_LOG_NOT_SUPPORTED     ((HRESULT)0xC00403EEL)

//
// MessageId: E_FPC_URL_NOT_TRANSLATABLE_TO_ACP
//
// MessageText:
//
// The URL for redirecting links to unpublished sites contains one or more non-ANSI characters.
//
#define E_FPC_URL_NOT_TRANSLATABLE_TO_ACP ((HRESULT)0xC00403EFL)

//
// MessageId: E_FPC_HTTPS_REDIRECT_REQUIRES_SSL
//
// MessageText:
//
// HTTP requests cannot be redirected as HTTPS requests if no SSL port is configured or if there is an SSL accelerator in front of the Forefront TMG computer.
//
#define E_FPC_HTTPS_REDIRECT_REQUIRES_SSL ((HRESULT)0xC00403F0L)

//
// MessageId: E_FPC_SSL_CLIENT_CERTIFICATE_RESTRICTION_ALLOWS_ANY_CERTIFICATE
//
// MessageText:
//
// An SSL client certificate restriction allows any certificate.
//
#define E_FPC_SSL_CLIENT_CERTIFICATE_RESTRICTION_ALLOWS_ANY_CERTIFICATE ((HRESULT)0xC00403F1L)

//
// MessageId: E_FPC_SSL_CLIENT_CERTIFICATE_RESTRICTION_ON_VALUE_OF_EHNANCED_KEY_USAGE
//
// MessageText:
//
// An SSL client certificate restriction requires the Enhanced Key Usage field to have a value containing a specified string.
//
#define E_FPC_SSL_CLIENT_CERTIFICATE_RESTRICTION_ON_VALUE_OF_EHNANCED_KEY_USAGE ((HRESULT)0xC00403F2L)

//
// MessageId: E_FPC_CLIENT_CERT_TRUST_LIST_NOT_SUPPORTED_IN_FORWARD_PROXY
//
// MessageText:
//
// An SSL client certificate trust list cannot be defined for the Web listener for outgoing requests from a network.
//
#define E_FPC_CLIENT_CERT_TRUST_LIST_NOT_SUPPORTED_IN_FORWARD_PROXY ((HRESULT)0xC00403F3L)

//
// MessageId: E_FPC_CERT_RESTRICTIONS_NOT_SUPPORTED_IN_FORWARD_PROXY
//
// MessageText:
//
// SSL client certificate restrictions cannot be defined for the Web listener for outgoing requests from a network.
//
#define E_FPC_CERT_RESTRICTIONS_NOT_SUPPORTED_IN_FORWARD_PROXY ((HRESULT)0xC00403F4L)

//
// MessageId: E_FPC_NLB_VIPS_MUST_BELONG_TO_SAME_SUBNET
//
// MessageText:
//
// One or more of the additional virtual IP addresses added to the Network Load Balancing cluster do not belong to the same subnet as the first virtual IP address.
//
#define E_FPC_NLB_VIPS_MUST_BELONG_TO_SAME_SUBNET ((HRESULT)0xC00403F5L)

//
// MessageId: E_FPC_VPN_REMOTE_SITE_DIPS_NOT_SUPPORTED
//
// MessageText:
//
// The set of dedicated IP address ranges for remote VPN servers cannot be retrieved for networks that are not linked by VPN connections with the L2TP or PPTP protocol.
//
#define E_FPC_VPN_REMOTE_SITE_DIPS_NOT_SUPPORTED ((HRESULT)0xC00403F6L)

//
// MessageId: E_FPC_INCOMPATIBLE_ARRAY_VERSION
//
// MessageText:
//
// The array could not be created on this configuration storage server because the stored configuration only allows adding arrays from newer versions of the product.
//
#define E_FPC_INCOMPATIBLE_ARRAY_VERSION ((HRESULT)0xC00403F7L)

//
// MessageId: E_FPC_CURRENT_MGMT_NOT_ALLOWED
//
// MessageText:
//
// The enterprise configuration is from a newer version of Forefront TMG than the installed version of Forefront TMG Management. You cannot manage this enterprise using this version of Forefront TMG Management. To manage the enterprise, you must use a newer version of Forefront TMG Management.
//
#define E_FPC_CURRENT_MGMT_NOT_ALLOWED   ((HRESULT)0xC00403F8L)

//
// MessageId: E_FPC_NO_ADAPTERS_INFORMATION_EXIST
//
// MessageText:
//
// Network adapter details for server %1 are currently unavailable. Verify that network adapters for this server are connected.
//
#define E_FPC_NO_ADAPTERS_INFORMATION_EXIST ((HRESULT)0x800403F9L)

//
// MessageId: E_FPC_PUBLIC_NAME_INVALID_FOR_SSO
//
// MessageText:
//
// The server public name %1 used in the rule %2 contains one or more illegal characters
//
#define E_FPC_PUBLIC_NAME_INVALID_FOR_SSO ((HRESULT)0xC00403FAL)

//
// MessageId: E_FPC_SERVICE_NOT_SUPPORTED_BY_USER_SET
//
// MessageText:
//
// A required service is not supported by one or more of the authentication schemes used by the user set.
//
#define E_FPC_SERVICE_NOT_SUPPORTED_BY_USER_SET ((HRESULT)0xC00403FBL)

//
// MessageId: E_FPC_PRIMARY_VIP_CHANGED
//
// MessageText:
//
// The primary virtual IP address (VIP) for the %1 network cannot be changed because additional VIPs are configured for this network.
//
#define E_FPC_PRIMARY_VIP_CHANGED        ((HRESULT)0xC00403FCL)

//
// MessageId: E_FPC_XML_B2B_UPGRADE_EARLIER_THAN_RC_BUILD_BLOCKED
//
// MessageText:
//
// The exported configuration file is from a beta installation of Forefront TMG. Importing a beta configuration file to this released version of Forefront TMG is not supported. To import a beta configuration, you must first upgrade the file to the Release Candidate (RC) build, and then import the RC configuration file.
//
#define E_FPC_XML_B2B_UPGRADE_EARLIER_THAN_RC_BUILD_BLOCKED ((HRESULT)0xC00403FEL)

//
// MessageId: E_FPC_VPN_MSCHAP_NOT_SUPPORTED
//
// MessageText:
//
// The Microsoft Challenge Handshake Authentication Protocol version 1 (MS-CHAP) is not supported on this version of Windows.
//
#define E_FPC_VPN_MSCHAP_NOT_SUPPORTED   ((HRESULT)0xC00403FFL)

//
// MessageId: E_FPC_VPN_SHIVA_PAP_NOT_SUPPORTED
//
// MessageText:
//
// The Shiva Password Authentication Protocol (PAP) is not supported on this version of Windows.
//
#define E_FPC_VPN_SHIVA_PAP_NOT_SUPPORTED ((HRESULT)0xC0040400L)

//
// MessageId: E_PROPERTY_VERSION_GREATER_THAN_OBJECT_VERSION
//
// MessageText:
//
// Cannot get/set new property/child in mixed enterprise.
//
#define E_PROPERTY_VERSION_GREATER_THAN_OBJECT_VERSION ((HRESULT)0xC0040401L)

//
// MessageId: E_FQD_INVALID_IP_ADDRESS_INPUT
//
// MessageText:
//
// An IP address must be either 0.0.0.0 or belong to the range from 1.0.0.0 to 223.255.255.255.
//
#define E_FQD_INVALID_IP_ADDRESS_INPUT   ((HRESULT)0xC0040402L)

//
// MessageId: E_FQD_INVALID_NUMRIC_INPUT
//
// MessageText:
//
// The input contains invalid characters.
//
#define E_FQD_INVALID_NUMRIC_INPUT       ((HRESULT)0xC0040403L)

//
// MessageId: E_FQD_INVALID_NUMRIC_INPUT_OVERFLOW
//
// MessageText:
//
// Value exceeds maximum limit.
//
#define E_FQD_INVALID_NUMRIC_INPUT_OVERFLOW ((HRESULT)0xC0040404L)

//
// MessageId: E_FQD_INVALID_INPUT_LENGTH
//
// MessageText:
//
// Input exceeds maximum length.
//
#define E_FQD_INVALID_INPUT_LENGTH       ((HRESULT)0xC0040405L)

//
// MessageId: E_ISP_REDUNDANCY_NOT_ENOUGH_LINKS_DEFINED
//
// MessageText:
//
// Not enough Internet server provider (ISP) links are defined for ISP redundancy.
//
#define E_ISP_REDUNDANCY_NOT_ENOUGH_LINKS_DEFINED ((HRESULT)0xC0040406L)

//
// MessageId: E_ISP_REDUNDANCY_TOO_MANY_LINKS_DEFINED
//
// MessageText:
//
// Too many Internet server provider (ISP) links are defined for ISP redundancy.
//
#define E_ISP_REDUNDANCY_TOO_MANY_LINKS_DEFINED ((HRESULT)0xC0040407L)

//
// MessageId: E_ISP_REDUNDANCY_WRONG_LOAD_BALANCING_FACTOR
//
// MessageText:
//
// The sum of the load balancing factors specified for the Internet server provider (ISP) links is not equal to 100.
//
#define E_ISP_REDUNDANCY_WRONG_LOAD_BALANCING_FACTOR ((HRESULT)0xC0040408L)

//
// MessageId: E_ISP_REDUNDANCY_PRIMARY_LINK_NOT_DEFINED
//
// MessageText:
//
// Internet service provider (ISP) failover is enabled, but a primary ISP link is not defined.
//
#define E_ISP_REDUNDANCY_PRIMARY_LINK_NOT_DEFINED ((HRESULT)0xC0040409L)

//
// MessageId: E_ISP_REDUNDANCY_SECONDARY_LINK_NOT_DEFINED
//
// MessageText:
//
// Internet service provider (ISP) failover is enabled, but a secondary ISP link is not defined.
//
#define E_ISP_REDUNDANCY_SECONDARY_LINK_NOT_DEFINED ((HRESULT)0xC004040AL)

//
// MessageId: E_ISP_REDUNDANCY_CONFIG_ALLOWED_ONLY_IN_EXTERNAL_NETWORK
//
// MessageText:
//
// Internet service provider (ISP) redundancy cannot be configured for the network selected.
//
#define E_ISP_REDUNDANCY_CONFIG_ALLOWED_ONLY_IN_EXTERNAL_NETWORK ((HRESULT)0xC004040BL)

//
// MessageId: E_FPC_SUMMARYDEF_MUST_HAVE_EXECUTIONSTATEMENT
//
// MessageText:
//
// The report summary definition object %1 must have a non-NULL ExecutionStatement property
//
#define E_FPC_SUMMARYDEF_MUST_HAVE_EXECUTIONSTATEMENT ((HRESULT)0xC004040CL)

//
// MessageId: E_ISP_REDUNDANCY_EXPLICIT_ROUTES_SHOULD_NOT_INTERSECT
//
// MessageText:
//
// The same IP address cannot be configured in explicit routes defined for different internet service providers (ISPs).
//
#define E_ISP_REDUNDANCY_EXPLICIT_ROUTES_SHOULD_NOT_INTERSECT ((HRESULT)0xC004040DL)

//
// MessageId: E_ISP_REDUNDANCY_GATEWAY_SUBNETS_SHOULD_NOT_INTERSECT
//
// MessageText:
//
// The same IP address cannot be included in gateway subnets defined for different internet service providers (ISPs).
//
#define E_ISP_REDUNDANCY_GATEWAY_SUBNETS_SHOULD_NOT_INTERSECT ((HRESULT)0xC004040EL)

//
// MessageId: E_HTTPS_INSPECTION_NO_CA_CERTIFICATE_SELECTED
//
// MessageText:
//
// No CA Certificate selected for HTTPS Forward Bridging.
//
#define E_HTTPS_INSPECTION_NO_CA_CERTIFICATE_SELECTED ((HRESULT)0xC004040FL)

//
// MessageId: E_FPC_ENTERPRISE_MANGEMENT_MODE_MISMATCH
//
// MessageText:
//
// The file cannot be imported because the enterprise management mode is %1 in the exported file and %2 in the stored configuration.
//
#define E_FPC_ENTERPRISE_MANGEMENT_MODE_MISMATCH ((HRESULT)0xC0040410L)

//
// MessageId: E_FPC_ARRAY_VERSION_MISMATCH
//
// MessageText:
//
// The file cannot be imported because the array %1 is of version %2 in the exported file and version %3 in the stored configuration.
//
#define E_FPC_ARRAY_VERSION_MISMATCH     ((HRESULT)0xC0040411L)

//
// MessageId: E_FPC_IP_ADDRESS_FAMILY_MISMATCH
//
// MessageText:
//
// Both IP addresses must have same IP address family.
//
#define E_FPC_IP_ADDRESS_FAMILY_MISMATCH ((HRESULT)0xC0040412L)

//
// MessageId: E_FPC_IPV6_NOT_SUPPORTED
//
// MessageText:
//
// IPv6 addresses are not supported.
//
#define E_FPC_IPV6_NOT_SUPPORTED         ((HRESULT)0xC0040413L)

//
// MessageId: E_FPC_ELEMENT_DOES_NOT_SUPPORT_IPV6
//
// MessageText:
//
// This element does not support IPv6 addresses.
//
#define E_FPC_ELEMENT_DOES_NOT_SUPPORT_IPV6 ((HRESULT)0xC0040414L)

//
// MessageId: E_FPC_NOT_LOCAL_ISA_SERVER_COMPUTER
//
// MessageText:
//
// The properties of the server object of a remote Forefront TMG computer cannot be changed from the local computer.
//
#define E_FPC_NOT_LOCAL_ISA_SERVER_COMPUTER ((HRESULT)0xC0040415L)

//
// MessageId: E_FPC_IP_ADDRESS_AND_SUBNET_COUNT_MISMATCH
//
// MessageText:
//
// The number of IP addresses configured on a network adapter does not match the number of subnet masks specified for them.
//
#define E_FPC_IP_ADDRESS_AND_SUBNET_COUNT_MISMATCH ((HRESULT)0xC0040416L)

//
// MessageId: E_FPC_AUTO_DNS_CONFIGURATION_REQUIRE_DHCP_SERVER
//
// MessageText:
//
// The automatic discovery of DNS servers can be selected for a network adapter only if it obtains an IP address automatically from a DHCP server.
//
#define E_FPC_AUTO_DNS_CONFIGURATION_REQUIRE_DHCP_SERVER ((HRESULT)0xC0040417L)

//
// MessageId: E_FPC_HTTPS_INSPECTION_CA_NOT_YET_VALID
//
// MessageText:
//
// The certification authority certificate that is to be used for signing cloned server certificates is not yet valid.
//
#define E_FPC_HTTPS_INSPECTION_CA_NOT_YET_VALID ((HRESULT)0xC0040418L)

//
// MessageId: E_FPC_HTTPS_INSPECTION_CA_EXPIRED
//
// MessageText:
//
// The certification authority certificate that is to be used for signing cloned server certificates has expired.
//
#define E_FPC_HTTPS_INSPECTION_CA_EXPIRED ((HRESULT)0xC0040419L)

//
// MessageId: E_FPC_WINS_NOT_IP
//
// MessageText:
//
// This network adapter WINS address is not defined using a valid IP address.
//
#define E_FPC_WINS_NOT_IP                ((HRESULT)0xC004041AL)

//
// MessageId: E_FPC_HTTPS_INSPECTION_CA_NOT_TRUSTED
//
// MessageText:
//
// The certification authority certificate that is to be used for signing cloned server certificates is not trusted by the local computer.
//
#define E_FPC_HTTPS_INSPECTION_CA_NOT_TRUSTED ((HRESULT)0xC004041BL)

//
// MessageId: E_FPC_GATEWAY_NOT_IP
//
// MessageText:
//
// This network adapter gateway is not defined using a valid IP address.
//
#define E_FPC_GATEWAY_NOT_IP             ((HRESULT)0xC004041CL)

//
// MessageId: E_FPC_DNS_NOT_IP
//
// MessageText:
//
// This network adapter DNS address is not defined using a valid IP address.
//
#define E_FPC_DNS_NOT_IP                 ((HRESULT)0xC004041DL)

//
// MessageId: E_FPC_ADAPTER_NAME_NOT_EXIST
//
// MessageText:
//
// The specified name does not match an existing network adapter name.
//
#define E_FPC_ADAPTER_NAME_NOT_EXIST     ((HRESULT)0xC004041EL)

//
// MessageId: E_FPC_ROUTE_SUBNET_DESTINATION_MISMATCH
//
// MessageText:
//
// The subnet of a route does not match the route's destination.
//
#define E_FPC_ROUTE_SUBNET_DESTINATION_MISMATCH ((HRESULT)0xC004041FL)

//
// MessageId: E_FPC_SQL_ERROR
//
// MessageText:
//
// An SQL error %1 has occurred during the operation. %2
//
#define E_FPC_SQL_ERROR                  ((HRESULT)0xC0040420L)

//
// MessageId: E_FPC_WEB_SITE_COULD_NOT_BE_STARTED
//
// MessageText:
//
// The Web site that is used by Web-UI is not running and attemp to start it has failed.
//
#define E_FPC_WEB_SITE_COULD_NOT_BE_STARTED ((HRESULT)0xC0040421L)

//
// MessageId: E_FPC_INVALID_DATE_FUTURE
//
// MessageText:
//
// The date specified is invalid because it occurs in the future.
//
#define E_FPC_INVALID_DATE_FUTURE        ((HRESULT)0xC0040422L)

//
// MessageId: E_FPC_INVALID_DATE_OUT_OF_RANGE
//
// MessageText:
//
// The date specified is invalid because it is not within the permitted range from %1 to %2.
//
#define E_FPC_INVALID_DATE_OUT_OF_RANGE  ((HRESULT)0xC0040423L)

//
// MessageId: E_FPC_LICENSE_EXPIRED
//
// MessageText:
//
// The license needed to perform an operation is expired.
//
#define E_FPC_LICENSE_EXPIRED            ((HRESULT)0xC0040424L)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_STANDALONE_MODE
//
// MessageText:
//
// Operation not supported in standalone mode.
//
#define E_FPC_NOT_SUPPORTED_IN_STANDALONE_MODE ((HRESULT)0xC0040425L)

//
// MessageId: E_FPC_INVALID_PARAMETER_FOR_STANDALONE
//
// MessageText:
//
// The value specified for the parameter %1 is not valid for standalone mode.
//
#define E_FPC_INVALID_PARAMETER_FOR_STANDALONE ((HRESULT)0xC0040426L)

//
// MessageId: E_FPC_ENT_TO_STANDALONE_IMPORT_NOT_SUPPORTED
//
// MessageText:
//
// An exported Forefront TMG Enterprise Edition configuration cannot be imported to a Forefront TMG stand-alone configuration.
//
#define E_FPC_ENT_TO_STANDALONE_IMPORT_NOT_SUPPORTED ((HRESULT)0xC0040427L)

//
// MessageId: E_FPC_GATEWAY_NOT_INCLUDED_IN_SUBNET
//
// MessageText:
//
// The Gateway address is not included within the subnet.
//
#define E_FPC_GATEWAY_NOT_INCLUDED_IN_SUBNET ((HRESULT)0xC0040428L)

//
// MessageId: E_FPC_UI_ABORT_SAVE_SILENTLY
//
// MessageText:
//
// The save operation is of UI is aborted without a pop up message.
//
#define E_FPC_UI_ABORT_SAVE_SILENTLY     ((HRESULT)0xC0040429L)

//
// MessageId: E_FPC_ADAPTER_IP_NOT_UNIQUE
//
// MessageText:
//
// An IP address that was specified for the network adapters %1 is already assigned to another network adapter.
//
#define E_FPC_ADAPTER_IP_NOT_UNIQUE      ((HRESULT)0xC004042AL)

//
// MessageId: E_FPC_MALWARE_DEFINITION_UPDATES_REQUIRE_FIREWALL_SERVICE
//
// MessageText:
//
// Malware definition updates could not be installed because the Microsoft Forefront TMG Firewall Service is not running.
//
#define E_FPC_MALWARE_DEFINITION_UPDATES_REQUIRE_FIREWALL_SERVICE ((HRESULT)0xC004042BL)

//
// MessageId: E_FPC_RADIUS_SERVER_NO_ROLE
//
// MessageText:
//
// A RADIUS server is configured neither for authentication nor for accounting.
//
#define E_FPC_RADIUS_SERVER_NO_ROLE      ((HRESULT)0xC004042CL)

//
// MessageId: E_FPC_RADIUS_SERVER_EQUAL_PORTS
//
// MessageText:
//
// A RADIUS server is configured with the same port for authentication and accounting.
//
#define E_FPC_RADIUS_SERVER_EQUAL_PORTS  ((HRESULT)0xC004042DL)

//
// MessageId: E_FPC_STANDALONE_IMPORT_OBJECT_MISMATCH
//
// MessageText:
//
// A configuration exported at the console root node can be imported to a stand-alone configuration during migration only at the array-level node. 
//
#define E_FPC_STANDALONE_IMPORT_OBJECT_MISMATCH ((HRESULT)0xC004042EL)

//
// MessageId: E_FPC_SERVER_IS_OPT_OUT
//
// MessageText:
//
// Definition updates could not be retrieved because the Forefront TMG computer is not configured to receive updates from Microsoft Update.
//
#define E_FPC_SERVER_IS_OPT_OUT          ((HRESULT)0xC004042FL)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_CENTRO
//
// MessageText:
//
// An operation that is not supported in Windows Essential Business Server was attempted.
//
#define E_FPC_NOT_SUPPORTED_IN_CENTRO    ((HRESULT)0xC0040430L)

//
// MessageId: E_FPC_SERVICES_FAILED_TO_START_AFTER_ARRAY_JOIN
//
// MessageText:
//
// Forefront TMG services failed to start after a array join or an array disjoin. Check alerts, fix the configuration, and attempt to restart the services.
//
#define E_FPC_SERVICES_FAILED_TO_START_AFTER_ARRAY_JOIN ((HRESULT)0xC0040431L)

//
// MessageId: E_FPC_REPORTJOB_FAILED_WITH_RS_ERR
//
// MessageText:
//
// The report %1 could not be generated. Report Server error information: %2.
//
#define E_FPC_REPORTJOB_FAILED_WITH_RS_ERR ((HRESULT)0xC0040432L)

//
// MessageId: E_FPC_REPORTJOB_FAILED_SEND_EMAIL
//
// MessageText:
//
// The e-mail signaling that the report %1 was generated could not be sent. Error information: %2.
//
#define E_FPC_REPORTJOB_FAILED_SEND_EMAIL ((HRESULT)0xC0040433L)

//
// MessageId: E_FPC_REPORTJOB_FAILED_BAD_CREDENTIALS
//
// MessageText:
//
// The report %1 with the specified credentials was not created. Error information: %2
//
#define E_FPC_REPORTJOB_FAILED_BAD_CREDENTIALS ((HRESULT)0xC0040434L)

//
// MessageId: E_FPC_REPORTJOB_FAILED_PUBLISHING
//
// MessageText:
//
// The report %1 in the path %2 could not be published. Verify that the folder exists and that the specified user has the required permissions on that folder. If the failure is the result of insufficient disk space, move old files to another media or delete them manually. Error information: %3
//
#define E_FPC_REPORTJOB_FAILED_PUBLISHING ((HRESULT)0xC0040435L)

//
// MessageId: E_FPC_LICENSE_KEY_INVALID
//
// MessageText:
//
// The license agreement number supplied is not a valid seven-digit license agreement number. If you do not have a valid number, you can leave the license agreement number empty.
//
#define E_FPC_LICENSE_KEY_INVALID        ((HRESULT)0xC0040436L)

//
// MessageId: E_FPC_EXTENDED_QUOTA_SMALLER_THAN_NORMAL_QUOTA
//
// MessageText:
//
// The extended per-client disk space limit must be greater than or equal to the ordinary per-client disk space limit.
//
#define E_FPC_EXTENDED_QUOTA_SMALLER_THAN_NORMAL_QUOTA ((HRESULT)0xC0040437L)

//
// MessageId: E_FPC_QUARANTINE_E_MAIL_ADDRESS_EMPTY
//
// MessageText:
//
// The e-mail address of the spam quarantine mailbox is invalid.
//
#define E_FPC_QUARANTINE_E_MAIL_ADDRESS_EMPTY ((HRESULT)0xC0040438L)

//
// MessageId: E_FPC_REJECT_SCL_GREATER_THAN_DELETE_SCL
//
// MessageText:
//
// The spam confidence level (SCL) set as the reject threshold is greater than the SCL set as the delete threshold.
//
#define E_FPC_REJECT_SCL_GREATER_THAN_DELETE_SCL ((HRESULT)0xC0040439L)

//
// MessageId: E_FPC_QUARANTINE_SCL_GREATER_THAN_DELETE_SCL
//
// MessageText:
//
// The spam confidence level (SCL) set as the quarantine threshold is greater than the SCL set as the delete threshold.
//
#define E_FPC_QUARANTINE_SCL_GREATER_THAN_DELETE_SCL ((HRESULT)0xC004043AL)

//
// MessageId: E_FPC_QUARANTINE_SCL_GREATER_THAN_REJECT_SCL
//
// MessageText:
//
// The spam confidence level (SCL) set as the quarantine threshold is greater than the SCL set as the reject threshold.
//
#define E_FPC_QUARANTINE_SCL_GREATER_THAN_REJECT_SCL ((HRESULT)0xC004043BL)

//
// MessageId: E_FPC_RANGE_START_GREATER_THAN_END
//
// MessageText:
//
// The start IP address is greater than end IP address.
//
#define E_FPC_RANGE_START_GREATER_THAN_END ((HRESULT)0xC004043CL)

//
// MessageId: E_FPC_INVAILD_E_MAIL_STRING
//
// MessageText:
//
// The string supplied is empty or does not contain a valid e-mail address.
//
#define E_FPC_INVAILD_E_MAIL_STRING      ((HRESULT)0xC004043DL)

//
// MessageId: E_FPC_INVAILD_SMTP_DOMAIN_STRING
//
// MessageText:
//
// The string supplied is empty or does not contain a valid SMTP domain name.
//
#define E_FPC_INVAILD_SMTP_DOMAIN_STRING ((HRESULT)0xC004043EL)

//
// MessageId: E_FPC_INVAILD_PHRASE
//
// MessageText:
//
// The string supplied for a phrase in an e-mail message is empty.
//
#define E_FPC_INVAILD_PHRASE             ((HRESULT)0xC004043FL)

//
// MessageId: E_FPC_INVAILD_SMTP_ADDRESS_SPACE_STRING
//
// MessageText:
//
// The string supplied is empty or does not contain a valid address space.
//
#define E_FPC_INVAILD_SMTP_ADDRESS_SPACE_STRING ((HRESULT)0xC0040440L)

//
// MessageId: E_FPC_NOT_SUPPORTED_IN_STANDALONE_SINGLE_SERVER
//
// MessageText:
//
// Operation not supported on single server in standalone mode.
//
#define E_FPC_NOT_SUPPORTED_IN_STANDALONE_SINGLE_SERVER ((HRESULT)0xC0040441L)

//
// MessageId: E_FPC_HTTPS_INSPECTION_CA_CANNOT_SIGN
//
// MessageText:
//
// The public key of the certification authority certificate that is to be used for signing cloned server certificates cannot be used for signing certificates.
//
#define E_FPC_HTTPS_INSPECTION_CA_CANNOT_SIGN ((HRESULT)0xC0040442L)

//
// MessageId: E_FPC_REPORTING_SERVER_NOT_ELECTED
//
// MessageText:
//
// The operation could not be completed because a report server is not defined for the array. To select a report server, on the Tasks pane of the Reporting tab, click Configure Reporting Settings.
//
#define E_FPC_REPORTING_SERVER_NOT_ELECTED ((HRESULT)0xC0040443L)

//
// MessageId: E_FPC_ZERO_HOST_ADDRESS_PORITION
//
// MessageText:
//
// The combination of IP address and subnet mask is invalid. All of the bits in the host address portion of the IP address are set to 0.
//
#define E_FPC_ZERO_HOST_ADDRESS_PORITION ((HRESULT)0xC0040444L)

//
// MessageId: E_FPC_FULL_HOST_ADDRESS_PORITION
//
// MessageText:
//
// The combination of IP address and subnet mask is invalid. All of the bits in the host address portion of the IP address are set to 1.
//
#define E_FPC_FULL_HOST_ADDRESS_PORITION ((HRESULT)0xC0040445L)

//
// MessageId: E_FPC_RESERVED_IP_NOT_ALLOWED
//
// MessageText:
//
// The specified IP address is reserved and cannot be used.
//
#define E_FPC_RESERVED_IP_NOT_ALLOWED    ((HRESULT)0xC0040446L)

//
// MessageId: E_FPC_MALWARE_INSPECTION_SETTINGS_MISSING_IN_ENTERPRISE_RULE
//
// MessageText:
//
// Malware inspection was enabled in an enterprise-level access rule, but no rule-specific malware inspection settings were specified.
//
#define E_FPC_MALWARE_INSPECTION_SETTINGS_MISSING_IN_ENTERPRISE_RULE ((HRESULT)0xC0040447L)

//
// MessageId: E_FPC_SMTP_MALWARE_NOTIFICATION_TEXT_EMPTY
//
// MessageText:
//
// The text for email message malware notification is invalid
//
#define E_FPC_SMTP_MALWARE_NOTIFICATION_TEXT_EMPTY ((HRESULT)0xC0040448L)

//
// MessageId: E_FPC_MISSING_GATEWAY_COMPUTER
//
// MessageText:
//
// The computer object of the Forefront Protection Manager gateway was not found.
//
#define E_FPC_MISSING_GATEWAY_COMPUTER   ((HRESULT)0xC0040449L)

//
// MessageId: E_FPC_MISSING_CORE_COMPUTER
//
// MessageText:
//
// The computer object of the Forefront Protection Manager core was not found.
//
#define E_FPC_MISSING_CORE_COMPUTER      ((HRESULT)0xC0040450L)

//
// MessageId: E_FPC_SERVER_UNREGISTERED_WITH_ESAS
//
// MessageText:
//
// The server is not registered with Forefront Protection Manager.
//
#define E_FPC_SERVER_UNREGISTERED_WITH_ESAS ((HRESULT)0xC0040451L)

//
// MessageId: E_FPC_SERVER_STILL_REGISTERED_WITH_ESAS
//
// MessageText:
//
// An attempt to unregister the server from Forefront Protection Manager failed.
//
#define E_FPC_SERVER_STILL_REGISTERED_WITH_ESAS ((HRESULT)0x80040452L)

//
// MessageId: E_FPC_UDAPTE_SERVICE_CHECK_ONLY_NOT_SUPPORTED
//
// MessageText:
//
// Checking for updates without installing them is not a valid automatic update action for the selected protection mechanism.
//
#define E_FPC_UDAPTE_SERVICE_CHECK_ONLY_NOT_SUPPORTED ((HRESULT)0xC0040453L)

//
// MessageId: E_FPC_INVALID_DEFAULT_CONTENT_DELIVERY_METHOD
//
// MessageText:
//
// The content delivery method specified cannot be set as the default content delivery method.
//
#define E_FPC_INVALID_DEFAULT_CONTENT_DELIVERY_METHOD ((HRESULT)0xC0040454L)

//
// MessageId: E_FPC_CANNOT_CHANGE_EXPIRATION_FOR_EVALUATION_LICENSE
//
// MessageText:
//
// The expiration date for the evaluation license cannot be changed because a valid license key has not been supplied.
//
#define E_FPC_CANNOT_CHANGE_EXPIRATION_FOR_EVALUATION_LICENSE ((HRESULT)0xC0040455L)

//
// MessageId: E_FPC_LICENSE_DISABLED
//
// MessageText:
//
// The license needed to perform an operation is disabled.
//
#define E_FPC_LICENSE_DISABLED           ((HRESULT)0x80040456L)

//
// MessageId: E_FPC_ADAPTER_DHCP_FAILURE
//
// MessageText:
//
// The specified network adapter (%1) is DHCP-enabled, but no IP address is assigned to it. This may be because there is no connectivity to the DHCP server or the DHCP server is not functional.
//
#define E_FPC_ADAPTER_DHCP_FAILURE       ((HRESULT)0xC0040457L)

//
// MessageId: E_FPC_TOO_MANY_IP_ADDRESSES
//
// MessageText:
//
// More than 255 IP addresses are configured for the specified network adapter.
//
#define E_FPC_TOO_MANY_IP_ADDRESSES      ((HRESULT)0xC0040458L)

//
// MessageId: E_FPC_TOO_MANY_SUBNETS
//
// MessageText:
//
// More than 255 subnet masks are configured for the specified network adapter.
//
#define E_FPC_TOO_MANY_SUBNETS           ((HRESULT)0xC0040459L)

//
// MessageId: E_FPC_TOO_MANY_GATEWAYS
//
// MessageText:
//
// More than five default gateways are configured for the specified network adapter.
//
#define E_FPC_TOO_MANY_GATEWAYS          ((HRESULT)0xC004045AL)

//
// MessageId: E_FPC_TOO_MANY_DNS_ADDRESSES
//
// MessageText:
//
// More than 255 DNS server addresses are configured for the specified network adapter.
//
#define E_FPC_TOO_MANY_DNS_ADDRESSES     ((HRESULT)0xC004045BL)

//
// MessageId: E_FPC_DUPLICATES_IN_IP_LIST
//
// MessageText:
//
// The list of IP addresses for the specified network adapter includes duplicates.
//
#define E_FPC_DUPLICATES_IN_IP_LIST      ((HRESULT)0xC004045CL)

//
// MessageId: E_FPC_DUPLICATES_IN_GATEWAY_LIST
//
// MessageText:
//
// The list of default gateways for the specified network adapter includes duplicates.
//
#define E_FPC_DUPLICATES_IN_GATEWAY_LIST ((HRESULT)0xC004045DL)

//
// MessageId: E_FPC_DUPLICATES_IN_DNS_LIST
//
// MessageText:
//
// The list of DNS addresses for the specified network adapter includes duplicates.
//
#define E_FPC_DUPLICATES_IN_DNS_LIST     ((HRESULT)0xC004045EL)

//
// MessageId: E_FPC_GATEWAY_ON_SUBNET_BOUNDARY
//
// MessageText:
//
// The default gateway for the specified network adapter is on its upper or lower subnet boundary.
//
#define E_FPC_GATEWAY_ON_SUBNET_BOUNDARY ((HRESULT)0xC004045FL)

//
// MessageId: E_FPC_GATEWAY_IS_ADAPTER_ITSELF
//
// MessageText:
//
// The default gateway for the specified network adapter is an IP address of the network adapter itself.
//
#define E_FPC_GATEWAY_IS_ADAPTER_ITSELF  ((HRESULT)0xC0040460L)

//
// MessageId: E_FPC_ESAS_ACCESS_POINT_UNRESOLVABLE
//
// MessageText:
//
// The name of Forefront Protection Manager Access Point Server could not be DNS resolved.
//
#define E_FPC_ESAS_ACCESS_POINT_UNRESOLVABLE ((HRESULT)0x80040461L)

//
// MessageId: E_FPC_FSYS_AGENT_PACKAGE_INSTALLATION_FAILED
//
// MessageText:
//
// The installation of FSysAgentPackage failed.
//
#define E_FPC_FSYS_AGENT_PACKAGE_INSTALLATION_FAILED ((HRESULT)0x80040462L)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_FAILED_TO_REGISTER
//
// MessageText:
//
// The installation of Forefront Protection Manager Report Adapter failed.
//
#define E_FPC_SAS_REPORT_ADAPTER_FAILED_TO_REGISTER ((HRESULT)0x80040463L)

//
// MessageId: E_FPC_NOT_SUPPORTED_FOR_NON_DYNAMIC_OBJECT
//
// MessageText:
//
// The property or method %1 is not supported when a non-dynamic object is used.
//
#define E_FPC_NOT_SUPPORTED_FOR_NON_DYNAMIC_OBJECT ((HRESULT)0xC0040464L)

//
// MessageId: E_FPC_MISSING_GATEWAY_COMPUTER_SET
//
// MessageText:
//
// The computer set object of the Forefront Protection Manager gateway was not found.
//
#define E_FPC_MISSING_GATEWAY_COMPUTER_SET ((HRESULT)0xC0040465L)

//
// MessageId: E_FPC_AUTO_OVERRIDE_UPDATES_NOT_SUPPORTED
//
// MessageText:
//
// Overriding installed updates is not a valid automatic update action.
//
#define E_FPC_AUTO_OVERRIDE_UPDATES_NOT_SUPPORTED ((HRESULT)0xC0040466L)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_WITH_CLIENT_CERTIFICATE
//
// MessageText:
//
// Web listener for SSTP must not be configured to require client certificate.
//
#define E_FPC_VPN_SSTP_LISTENER_WITH_CLIENT_CERTIFICATE ((HRESULT)0xC0040467L)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_MUST_AUTHENTICATE
//
// MessageText:
//
// Web listener for SSTP must not be configured to always require authentication.
//
#define E_FPC_VPN_SSTP_LISTENER_MUST_AUTHENTICATE ((HRESULT)0xC0040468L)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_WITH_INCOMPATIBLE_CERTIFICATE
//
// MessageText:
//
// The chosen SSL certificate is not applicable for SSTP access.
//
#define E_FPC_VPN_SSTP_LISTENER_WITH_INCOMPATIBLE_CERTIFICATE ((HRESULT)0xC0040469L)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_WRONG_SSL_PORT
//
// MessageText:
//
// SSL port number is not valid.
//
#define E_FPC_VPN_SSTP_LISTENER_WRONG_SSL_PORT ((HRESULT)0xC004046AL)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_NOT_COMPATIBLE
//
// MessageText:
//
// The web listener is not compatible for SSTP.
//
#define E_FPC_VPN_SSTP_LISTENER_NOT_COMPATIBLE ((HRESULT)0xC004046BL)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_NO_SSL
//
// MessageText:
//
// The SSTP web listener does not have SSL enabled.
//
#define E_FPC_VPN_SSTP_LISTENER_NO_SSL   ((HRESULT)0xC004046CL)

//
// MessageId: E_FPC_VPN_SSTP_LISTENER_MULTIPLE_CERTIFICATES
//
// MessageText:
//
// Web listener for SSTP must not contain multiple certificates.
//
#define E_FPC_VPN_SSTP_LISTENER_MULTIPLE_CERTIFICATES ((HRESULT)0xC004046DL)

//
// MessageId: E_FPC_VPN_SSTP_NO_LISTENER
//
// MessageText:
//
// No web listener was selected for SSTP.
//
#define E_FPC_VPN_SSTP_NO_LISTENER       ((HRESULT)0xC004046EL)

//
// MessageId: E_FPC_INVALID_NATPT_NETWORK_RELATIONSHIP
//
// MessageText:
//
// The network relationship defined in a network rule is not valid for NAT-PT traffic.
//
#define E_FPC_INVALID_NATPT_NETWORK_RELATIONSHIP ((HRESULT)0xC004046FL)

//
// MessageId: E_FPC_NATPT_NETWORK_RULE_WITH_HIDING_ADDRESSES
//
// MessageText:
//
// A network rule defined for NAT-PT traffic applies to hiding addresses.
//
#define E_FPC_NATPT_NETWORK_RULE_WITH_HIDING_ADDRESSES ((HRESULT)0xC0040470L)

//
// MessageId: E_FPC_INVALID_NATPT_PREFIX
//
// MessageText:
//
// The NAT-PT prefix defined in a network rule for NAT-PT traffic is not valid.
//
#define E_FPC_INVALID_NATPT_PREFIX       ((HRESULT)0xC0040471L)

//
// MessageId: E_FPC_TOO_MANY_NATPT_PREFIXES
//
// MessageText:
//
// More than one NAT-PT prefix is configured in a network rule for NAT-PT traffic.
//
#define E_FPC_TOO_MANY_NATPT_PREFIXES    ((HRESULT)0xC0040472L)

//
// MessageId: E_FPC_SE_CANNOT_JOIN_ARRAY
//
// MessageText:
//
// A Forefront TMG Standard Edition server cannot join a centrally managed array that is not empty.
//
#define E_FPC_SE_CANNOT_JOIN_ARRAY       ((HRESULT)0xC0040473L)

//
// MessageId: E_FPC_EE_CANNOT_JOIN_SE_ARRAY
//
// MessageText:
//
// A Forefront TMG Enterprise Edition server cannot join a centrally managed array that contains a Forefront TMG Standard Edition server.
//
#define E_FPC_EE_CANNOT_JOIN_SE_ARRAY    ((HRESULT)0xC0040474L)

//
// MessageId: E_FPC_REJECT_DOMAIN_SECURED_ENABLED_WHEN_TLS_DISABLED
//
// MessageText:
//
// Using mutual domain authentication requires Transport Layer Security to be enabled
//
#define E_FPC_REJECT_DOMAIN_SECURED_ENABLED_WHEN_TLS_DISABLED ((HRESULT)0xC0040475L)

//
// MessageId: E_FPC_REJECT_BASIC_AUTH_AFTER_TLS_WHEN_BASIC_DISABLED
//
// MessageText:
//
// Enabling basic authentication over TLS requires Basic Authentication and TLS to be enabled
//
#define E_FPC_REJECT_BASIC_AUTH_AFTER_TLS_WHEN_BASIC_DISABLED ((HRESULT)0xC0040476L)

//
// MessageId: E_FPC_TOO_MANY_WINS_ADDRESSES
//
// MessageText:
//
// More than 2 WINS server addresses are configured for the specified network adapter.
//
#define E_FPC_TOO_MANY_WINS_ADDRESSES    ((HRESULT)0xC0040477L)

//
// MessageId: E_FPC_DUPLICATES_IN_WINS_LIST
//
// MessageText:
//
// The list of WINS addresses for the specified network adapter includes duplicates.
//
#define E_FPC_DUPLICATES_IN_WINS_LIST    ((HRESULT)0xC0040478L)

//
// MessageId: E_FPC_GROUP_POLICY_RULES_VALIDATION_FAILED
//
// MessageText:
//
// Policy group %1 cannot have policy rules which are not in consecutive order.
//
#define E_FPC_GROUP_POLICY_RULES_VALIDATION_FAILED ((HRESULT)0xC0040479L)

//
// MessageId: E_FPC_AUTHENTICATION_REQUIRED_FOR_INTERNAL_SMTP_ROUTE
//
// MessageText:
//
// SMTP route for internal servers requires some form of authentication on the listener side.
//
#define E_FPC_AUTHENTICATION_REQUIRED_FOR_INTERNAL_SMTP_ROUTE ((HRESULT)0xC004047AL)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_FAILED_TO_READ_IPS_METADATA_VERSION
//
// MessageText:
//
// Forefront Protection Manager Report Adapter failed to read Intrusion Prevention System signature information version.
//
#define E_FPC_SAS_REPORT_ADAPTER_FAILED_TO_READ_IPS_METADATA_VERSION ((HRESULT)0x80040480L)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_IPS_METADATA_EMPTY
//
// MessageText:
//
// Forefront Protection Manager Report Adapter found no signature information for Intrusion Prevention System.
//
#define E_FPC_SAS_REPORT_ADAPTER_IPS_METADATA_EMPTY ((HRESULT)0x80040481L)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_DATA_SEND
//
// MessageText:
//
// Forefront Protection Manager Report Adapter has sent report data to Forefront Protection Manager.
//
#define E_FPC_SAS_REPORT_ADAPTER_DATA_SEND ((HRESULT)0x40040482L)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_DATA_SEND_FAILED
//
// MessageText:
//
// Forefront Protection Manager Report Adapter failed to send data to Forefront Protection Manager.
//
#define E_FPC_SAS_REPORT_ADAPTER_DATA_SEND_FAILED ((HRESULT)0xC0040483L)

//
// MessageId: E_FPC_SAS_REPORT_ADAPTER_DATA_INFO_PERSIST_FAILED
//
// MessageText:
//
// Forefront Protection Manager Report Adapter failed to send data to Forefront Protection Manager.
//
#define E_FPC_SAS_REPORT_ADAPTER_DATA_INFO_PERSIST_FAILED ((HRESULT)0xC0040484L)

//
// MessageId: E_FPC_BAD_URL_ESCAPING
//
// MessageText:
//
// The URL contains an illegal escape sequence and cannot be un-escaped.
//
#define E_FPC_BAD_URL_ESCAPING           ((HRESULT)0xC0040485L)

//
// MessageId: E_FPC_NOT_FULL_HTTPS_URL
//
// MessageText:
//
// The URL must start with https://.
//
#define E_FPC_NOT_FULL_HTTPS_URL         ((HRESULT)0xC0040486L)

//
// MessageId: E_FPC_BAD_SMTP_DOMAIN_NAME_FORMAT
//
// MessageText:
//
// The string is not a valid SMTP domain name.
//
#define E_FPC_BAD_SMTP_DOMAIN_NAME_FORMAT ((HRESULT)0xC0040487L)

//
// MessageId: E_FPC_REJECT_EXTERNALLY_SECURED_WHEN_NO_TLS_AUTH
//
// MessageText:
//
// Externally Secured authentication may only coexist with Transport Layer Security.
//
#define E_FPC_REJECT_EXTERNALLY_SECURED_WHEN_NO_TLS_AUTH ((HRESULT)0xC0040488L)

//
// MessageId: E_FPC_WG_CANNOT_JOIN_STIRLING_ARRAY
//
// MessageText:
//
// The server cannot join the array while the array is connected to Forefront Protection Manager.
//
#define E_FPC_WG_CANNOT_JOIN_STIRLING_ARRAY ((HRESULT)0xC0040489L)

//
// MessageId: E_FPC_NON_STIRLING_CANNOT_JOIN_STIRLING_ARRAY
//
// MessageText:
//
// The server cannot join the array because the array is integrated with Forefront Protection Manager and the server does not support this feature.
//
#define E_FPC_NON_STIRLING_CANNOT_JOIN_STIRLING_ARRAY ((HRESULT)0xC004048AL)

//
// MessageId: E_FPC_UPGRADE_NOT_SUPPORTED_FROM_ENT_TO_SA
//
// MessageText:
//
// The configuration could not be upgraded. Upgrading an ISA Server Enterprise configuration is only supported on a Forefront TMG Enterprise Management Server.
//
#define E_FPC_UPGRADE_NOT_SUPPORTED_FROM_ENT_TO_SA ((HRESULT)0xC004048BL)

//
// MessageId: E_FPC_UPGRADE_NOT_SUPPORTED_FROM_SE_TO_EMS
//
// MessageText:
//
// The configuration could not be upgraded.  Upgrading a standard edition configuration to a Forefront TMG Enterprise Management Server is not supported.  
//
#define E_FPC_UPGRADE_NOT_SUPPORTED_FROM_SE_TO_EMS ((HRESULT)0xC004048CL)

//
// MessageId: E_FPC_UPGRADE_NOT_SUPPORTED_FROM_THIS_VERSION
//
// MessageText:
//
// The upgrade could not be completed.  Upgrading the current configuration to this version of the product is not supported.
//
#define E_FPC_UPGRADE_NOT_SUPPORTED_FROM_THIS_VERSION ((HRESULT)0xC004048DL)

//
// MessageId: E_FPC_FAILED_TO_CONFIG_FSE_CONTROL
//
// MessageText:
//
// The attempt to configure control of e-mail policy for Microsoft Forefront Protection 2010 for Exchange Server between Forefront TMG and Forefront Protection Manager failed.
//
#define E_FPC_FAILED_TO_CONFIG_FSE_CONTROL ((HRESULT)0xC004048EL)

//
// MessageId: E_FPC_INTERNAL_SMTP_ROUTE_ADDRESSES_CONFLICT
//
// MessageText:
//
// Could not create SMTP route. The SMTP route you are attempting to create contains internal mail server and e-mail listener IP addresses that are identical to those of an existing SMTP route.
//
#define E_FPC_INTERNAL_SMTP_ROUTE_ADDRESSES_CONFLICT ((HRESULT)0xC004048FL)

//
// MessageId: E_FPC_EXTERNAL_SMTP_ROUTE_ADDRESSES_CONFLICT
//
// MessageText:
//
// Could not create SMTP route. The SMTP route you are attempting to create contains e-mail listener IP addresses that are identical to those of an existing SMTP route.
//
#define E_FPC_EXTERNAL_SMTP_ROUTE_ADDRESSES_CONFLICT ((HRESULT)0xC0040490L)

//
// MessageId: E_FPC_ANTISPAM_ENGINE_SELECTED_FOR_ANTIVIRUS_FILTERING
//
// MessageText:
//
// The antivirus engine subset you selected contains an invalid engine. The engine is used for spam filtering and not antivirus filtering.
//
#define E_FPC_ANTISPAM_ENGINE_SELECTED_FOR_ANTIVIRUS_FILTERING ((HRESULT)0xC0040491L)

//
// MessageId: E_FPC_OPERATION_NOT_SUPPORTED_ON_SA_SERVER_AND_ARRAY_MANAGER
//
// MessageText:
//
// You have attempted to disjoin this server from an array. This operation is only supported on array members and is not applicable for the array manager or for standalone servers.
//
#define E_FPC_OPERATION_NOT_SUPPORTED_ON_SA_SERVER_AND_ARRAY_MANAGER ((HRESULT)0xC0040492L)



#endif  // _FPCERRORCODES_H_

