/*++

   Copyright (c) Microsoft Corporation. All rights reserved.
   THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND.
   THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER.
   USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

/*
    wspfwerr.h

    Error code definitions for the Winsock Proxy plug-in API

*/


#ifndef _WSPFWERR_H_
#define _WSPFWERR_H_



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


//
// Define the severity codes
//


//
// MessageId: FWX_E_TERMINATING
//
// MessageText:
//
// The object is shutting down.
//
#define FWX_E_TERMINATING                ((HRESULT)0xC0040001L)

//
// MessageId: FWX_E_INVALID_ARG
//
// MessageText:
//
// The argument is invalid.
//
#define FWX_E_INVALID_ARG                ((HRESULT)0xC0040002L)

//
// MessageId: FWX_E_ALREADY_IN_BLOCKING_OP
//
// MessageText:
//
// The blocking operation is already started.
//
#define FWX_E_ALREADY_IN_BLOCKING_OP     ((HRESULT)0xC0040003L)

//
// MessageId: FWX_E_NOT_IN_BLOCKING_OP
//
// MessageText:
//
// There is no blocking operation to be ended.
//
#define FWX_E_NOT_IN_BLOCKING_OP         ((HRESULT)0xC0040004L)

//
// MessageId: FWX_E_FILTER_NOT_REGISTERED
//
// MessageText:
//
// The filter is not registered.
//
#define FWX_E_FILTER_NOT_REGISTERED      ((HRESULT)0xC0040005L)

// FWX_E_ALREADY_EXISTS =  HRESULT_FROM_WIN32(ERROR_ALREADY_EXISTS)
//
// MessageId: FWX_E_ALREADY_EXISTS
//
// MessageText:
//
// The object cannot be created because an object with the same name already exists.
//
#define FWX_E_ALREADY_EXISTS             ((HRESULT)0x800700B7L)

//
// MessageId: FWX_E_BUFFERFULL
//
// MessageText:
//
// Not all the data was appended to the buffer object because the buffer was full.
//
#define FWX_E_BUFFERFULL                 ((HRESULT)0xC0040007L)

//
// MessageId: FWX_E_ALREADY_EMULATED
//
// MessageText:
//
// The connection is already emulated by another filter.
//
#define FWX_E_ALREADY_EMULATED           ((HRESULT)0xC0040009L)

//
// MessageId: FWX_E_BAD_CONTEXT
//
// MessageText:
//
// The method was not called while handling any of the supported events.
//
#define FWX_E_BAD_CONTEXT                ((HRESULT)0xC004000AL)

//
// MessageId: FWX_E_NOT_SUPPORTED
//
// MessageText:
//
// Modifying this property is not allowed for this session.
//
#define FWX_E_NOT_SUPPORTED              ((HRESULT)0xC004000BL)

//
// MessageId: FWX_E_NOT_AUTHENTICATED
//
// MessageText:
//
// The action cannot be performed because the session is not authenticated.
//
#define FWX_E_NOT_AUTHENTICATED          ((HRESULT)0xC004000CL)

//
// MessageId: FWX_E_POLICY_RULES_DENIED
//
// MessageText:
//
// The policy rules do not allow the user request.
//
#define FWX_E_POLICY_RULES_DENIED        ((HRESULT)0xC004000DL)

//
// MessageId: FWX_E_MIME_NEEDED
//
// MessageText:
//
// The MIME type is required.
//
#define FWX_E_MIME_NEEDED                ((HRESULT)0xC004000EL)

//
// MessageId: FWX_E_MUST_USE_DS
//
// MessageText:
//
// (Reserved for future use.)
//
#define FWX_E_MUST_USE_DS                ((HRESULT)0xC004000FL)

//
// MessageId: FWX_E_NOT_EMULATED
//
// MessageText:
//
// The connection is not emulated.
//
#define FWX_E_NOT_EMULATED               ((HRESULT)0xC0040010L)

//
// MessageId: FWX_E_IS_BUSY
//
// MessageText:
//
// A connection was dropped because there are too many pending connection requests.
//
#define FWX_E_IS_BUSY                    ((HRESULT)0xC0040011L)

//
// MessageId: FWX_E_NETWORK_RULES_DENIED
//
// MessageText:
//
// The network rules do not allow the connection requested.
//
#define FWX_E_NETWORK_RULES_DENIED       ((HRESULT)0xC0040012L)

//
// MessageId: FWX_E_FRAGMENT_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because it contained an IP fragment that Forefront TMG is configured to block.
//
#define FWX_E_FRAGMENT_PACKET_DROPPED    ((HRESULT)0xC0040013L)

//
// MessageId: FWX_E_FWE_SPOOFING_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG determined that the source IP address is spoofed.
//
#define FWX_E_FWE_SPOOFING_PACKET_DROPPED ((HRESULT)0xC0040014L)

//
// MessageId: FWX_E_TCPIPDROP_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped by the TCP/IP stack.
//
#define FWX_E_TCPIPDROP_PACKET_DROPPED   ((HRESULT)0xC0040015L)

//
// MessageId: FWX_E_NO_BACKLOG_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because the rate of requests for incoming connections was too high.
//
#define FWX_E_NO_BACKLOG_PACKET_DROPPED  ((HRESULT)0xC0040016L)

//
// MessageId: FWX_E_TCP_NOT_SYN_PACKET_DROPPED
//
// MessageText:
//
// A non-SYN packet was dropped because it was sent by a source that does not have an established connection with the Forefront TMG computer.
//
#define FWX_E_TCP_NOT_SYN_PACKET_DROPPED ((HRESULT)0xC0040017L)

//
// MessageId: FWX_E_BAD_LENGTH_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because its IP length field does not fall within the allowed range or is inconsistent with the actual length.
//
#define FWX_E_BAD_LENGTH_PACKET_DROPPED  ((HRESULT)0xC0040018L)

//
// MessageId: FWX_E_PING_OF_DEATH_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG detected a ping-of-death attack.
//
#define FWX_E_PING_OF_DEATH_PACKET_DROPPED ((HRESULT)0xC0040019L)

//
// MessageId: FWX_E_OUT_OF_BAND_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG detected a Windows out-of-band (WinNuke) attack.
//
#define FWX_E_OUT_OF_BAND_PACKET_DROPPED ((HRESULT)0xC004001AL)

//
// MessageId: FWX_E_IP_HALF_SCAN_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG detected an IP half-scan attack.
//
#define FWX_E_IP_HALF_SCAN_PACKET_DROPPED ((HRESULT)0xC004001BL)

//
// MessageId: FWX_E_LAND_ATTACK_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG detected a land attack.
//
#define FWX_E_LAND_ATTACK_DROPPED        ((HRESULT)0xC004001CL)

//
// MessageId: FWX_E_UDP_BOMB_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG detected a UDP bomb attack.
//
#define FWX_E_UDP_BOMB_DROPPED           ((HRESULT)0xC004001DL)

//
// MessageId: FWX_E_FULLDENY_DROPPED
//
// MessageText:
//
// A packet was dropped because Forefront TMG is operating in lockdown mode.
//
#define FWX_E_FULLDENY_DROPPED           ((HRESULT)0xC004001EL)

//
// MessageId: FWX_E_IPOPTIONS_DROPPED
//
// MessageText:
//
// A packet was dropped because its header includes one or more IP options that Forefront TMG is configured to block.
//
#define FWX_E_IPOPTIONS_DROPPED          ((HRESULT)0xC004001FL)

//
// MessageId: FWX_E_UNCOMPLETED_CONNECTION_REQUEST
//
// MessageText:
//
// An attempt to log on to the VPN server was rejected during the authentication phase because the authentication data was not received in a timely manner.
// The client session was disconnected.
//
#define FWX_E_UNCOMPLETED_CONNECTION_REQUEST ((HRESULT)0xC0040020L)

//
// MessageId: FWX_E_CONNECTION_REQUEST_REJECTED
//
// MessageText:
//
// An attempt to log on to the VPN server was rejected during the authentication phase.
// The client session was disconnected.
//
#define FWX_E_CONNECTION_REQUEST_REJECTED ((HRESULT)0xC0040021L)

//
// MessageId: FWX_E_VALIDATE_QUARANTINE_FAILED
//
// MessageText:
//
// The VPN quarantine settings could not be validated.
// The client session was disconnected.
//
#define FWX_E_VALIDATE_QUARANTINE_FAILED ((HRESULT)0xC0040022L)

//
// MessageId: FWX_E_VPN_CONNECTIONS_LIMIT_EXCEEDED
//
// MessageText:
//
// The VPN client connection limit was exceeded.
// The client session was disconnected.
//
#define FWX_E_VPN_CONNECTIONS_LIMIT_EXCEEDED ((HRESULT)0xC0040023L)

//
// MessageId: FWX_E_OUT_OF_RESOURCES
//
// MessageText:
//
// A packet was dropped because there are insufficient resources.
//
#define FWX_E_OUT_OF_RESOURCES           ((HRESULT)0xC0040024L)

//
// MessageId: FWX_E_BROADCAST_PACKET_DROPPED
//
// MessageText:
//
// A broadcast packet was dropped by the Forefront TMG policy.
//
#define FWX_E_BROADCAST_PACKET_DROPPED   ((HRESULT)0xC0040025L)

//
// MessageId: FWX_E_UNKNOWN_ADAPTER_DROPPED
//
// MessageText:
//
// (Reserved for future use.)
//
#define FWX_E_UNKNOWN_ADAPTER_DROPPED    ((HRESULT)0xC0040026L)

//
// MessageId: FWX_E_ICMP_ERROR_PACKET_DROPPED
//
// MessageText:
//
// (Reserved for future use.)
//
#define FWX_E_ICMP_ERROR_PACKET_DROPPED  ((HRESULT)0xC0040027L)

//
// MessageId: FWX_E_INVALID_PROTCOL_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because its header specifies an invalid IP protocol (255) or address (0.0.0.0).
//
#define FWX_E_INVALID_PROTCOL_PACKET_DROPPED ((HRESULT)0xC0040028L)

//
// MessageId: FWX_E_PORT_ZERO_PACKET_DROPPED
//
// MessageText:
//
// A packet was dropped because its transport header specifies an invalid port (0).
//
#define FWX_E_PORT_ZERO_PACKET_DROPPED   ((HRESULT)0xC0040029L)

//
// MessageId: FWX_E_SYN_ATTACK_START
//
// MessageText:
//
// Forefront TMG detected a SYN attack.
//
#define FWX_E_SYN_ATTACK_START           ((HRESULT)0xC004002AL)

//
// MessageId: FWX_E_SYN_ATTACK_END
//
// MessageText:
//
// Forefront TMG is no longer experiencing a SYN attack.
//
#define FWX_E_SYN_ATTACK_END             ((HRESULT)0xC004002BL)

//
// MessageId: FWX_E_INVALID_DHCP_OFFER
//
// MessageText:
//
// An invalid DHCP offer was blocked.
//
#define FWX_E_INVALID_DHCP_OFFER         ((HRESULT)0xC004002CL)

//
// MessageId: FWX_E_UNREACHABLE_ADDRESS
//
// MessageText:
//
// A packet was dropped because its destination IP address is unreachable.
//
#define FWX_E_UNREACHABLE_ADDRESS        ((HRESULT)0xC004002DL)

//
// MessageId: FWX_E_ADDRESS_NOT_ALLOWED
//
// MessageText:
//
// An attempt to establish a connection by an application filter was rejected because the source address is not in a range that is allowed for the destination address.
//
#define FWX_E_ADDRESS_NOT_ALLOWED        ((HRESULT)0xC004002EL)

//
// MessageId: FWX_E_IPSEC_NO_ROUTE_DROPPED
//
// MessageText:
//
// A packet arriving through an IPsec tunnel was rejected because its source address is not expected for the tunnel.
//
#define FWX_E_IPSEC_NO_ROUTE_DROPPED     ((HRESULT)0xC004002FL)

//
// MessageId: FWX_E_OUTBOUND_PATH_THROUGH_DROPPED
//
// MessageText:
//
// A packet generated on the local host was rejected because its source IP address is assigned to one network adapter and its destination IP address is reachable through another network adapter.
//
#define FWX_E_OUTBOUND_PATH_THROUGH_DROPPED ((HRESULT)0xC0040030L)

//
// MessageId: FWX_E_BAD_TCP_CHECKSUM_DROPPED
//
// MessageText:
//
// A packet was dropped because verification of its TCP checksum failed.
//
#define FWX_E_BAD_TCP_CHECKSUM_DROPPED   ((HRESULT)0xC0040031L)

//
// MessageId: FWX_E_VPN_USER_MAPPING_FAILED
//
// MessageText:
//
// An attempt to map a VPN client to a Windows user failed.
// The client session was disconnected.
//
#define FWX_E_VPN_USER_MAPPING_FAILED    ((HRESULT)0xC0040032L)

//
// MessageId: FWX_E_RULE_QUOTA_EXCEEDED_DROPPED
//
// MessageText:
//
// A connection was rejected because the maximum number of connections that can be created for a rule during one second was exceeded.
//
#define FWX_E_RULE_QUOTA_EXCEEDED_DROPPED ((HRESULT)0xC0040033L)

//
// MessageId: FWX_E_SEQ_ACK_MISMATCH
//
// MessageText:
//
// A TCP packet was rejected because it has an invalid sequence number or an invalid acknowledgement number.
//
#define FWX_E_SEQ_ACK_MISMATCH           ((HRESULT)0xC0040034L)

//
// MessageId: FWX_E_THREAD_QUOTA_EXCEEDED
//
// MessageText:
//
// A blocking operation could not be performed because the thread limit for this operation was reached.
//
#define FWX_E_THREAD_QUOTA_EXCEEDED      ((HRESULT)0xC0040035L)

//
// MessageId: FWX_E_DNS_QUOTA_EXCEEDED
//
// MessageText:
//
// A DNS query could not be performed because the query limit was reached.
//
#define FWX_E_DNS_QUOTA_EXCEEDED         ((HRESULT)0xC0040036L)

//
// MessageId: FWX_E_TCP_RATE_QUOTA_EXCEEDED_DROPPED
//
// MessageText:
//
// A connection was rejected because the maximum connections rate for a single client host was exceeded.
//
#define FWX_E_TCP_RATE_QUOTA_EXCEEDED_DROPPED ((HRESULT)0xC0040037L)

//
// MessageId: FWX_E_TCP_NO_SERVER_REPLY
//
// MessageText:
//
// A connection was closed because no SYN/ACK reply was received from the server.
//
#define FWX_E_TCP_NO_SERVER_REPLY        ((HRESULT)0xC0040038L)

//
// MessageId: FWX_E_POLICY_CONNECTION_CLOSED
//
// MessageText:
//
// An existing connection was closed because it is no longer allowed by the policy.
//
#define FWX_E_POLICY_CONNECTION_CLOSED   ((HRESULT)0xC0040039L)

//
// MessageId: FWX_E_NAT_ADDRESS_NOT_AVAILABLE
//
// MessageText:
//
// A network rule specifies a NAT address, but no local IP address is available for NAT on the server.
//
#define FWX_E_NAT_ADDRESS_NOT_AVAILABLE  ((HRESULT)0xC004003AL)

//
// MessageId: FWX_E_IPS_BLOCKED
//
// MessageText:
//
// The connection was blocked by network inspection system (NIS).
//
#define FWX_E_IPS_BLOCKED                ((HRESULT)0xC004003BL)

//
// MessageId: FWX_E_IPS_DETECTED
//
// MessageText:
//
// The network inspection system (NIS) detected traffic that matches a vulnerability signature.
//
#define FWX_E_IPS_DETECTED               ((HRESULT)0xC004003CL)

//
// MessageId: FWX_E_CONNECTION_QUARANTINED
//
// MessageText:
//
// The connection was closed because the client was quarantined.
//
#define FWX_E_CONNECTION_QUARANTINED     ((HRESULT)0xC004003DL)

//
// MessageId: FWX_E_FW_IPSEC_DROPPED
//
// MessageText:
//
// A packet was dropped due to periodic inconsistency between the IPSec policy and the Forefront TMG snapshot of the IPSec policy.
//
#define FWX_E_FW_IPSEC_DROPPED           ((HRESULT)0xC004003EL)

//
// MessageId: FWX_E_TRANSITION_DROPPED
//
// MessageText:
//
// A packet was dropped while adjusting the Forefront TMG behavior to a new IPSec policy. 
//
#define FWX_E_TRANSITION_DROPPED         ((HRESULT)0xC004003FL)

//
// MessageId: FWX_E_BOTH_ADRESSES_BELONG_TO_SAME_NETWORK
//
// MessageText:
//
// Both input addresses belong to the same network.
//
#define FWX_E_BOTH_ADRESSES_BELONG_TO_SAME_NETWORK ((HRESULT)0xC0040040L)

//
// MessageId: FWX_E_UNSUPPORTED_IPV6_DROPPED
//
// MessageText:
//
// A packet was dropped because IPv6 protocol is not supported.
//
#define FWX_E_UNSUPPORTED_IPV6_DROPPED   ((HRESULT)0xC0040041L)

//
// MessageId: FWX_E_INVALID_ROUTER_ADV
//
// MessageText:
//
// An invalid IPv6 router advertisement.
//
#define FWX_E_INVALID_ROUTER_ADV         ((HRESULT)0xC0040042L)

//
// MessageId: FWX_E_IPV6_ROUTING_HEADER
//
// MessageText:
//
// IPv6 routing header presents.
//
#define FWX_E_IPV6_ROUTING_HEADER        ((HRESULT)0xC0040043L)

//
// MessageId: FWE_E_FAIL_TRANSACT_TO_TRANSITION_TO_IPSEC
//
// MessageText:
//
// The FW engine failed to apply the IPSec configuration.
//
#define FWE_E_FAIL_TRANSACT_TO_TRANSITION_TO_IPSEC ((HRESULT)0xC0040044L)

//
// MessageId: FWE_E_FAIL_TRANSACT_TO_IPSEC
//
// MessageText:
//
// The FW engine entered an invalid state.
//
#define FWE_E_FAIL_TRANSACT_TO_IPSEC     ((HRESULT)0xC0040045L)

//
// MessageId: FWX_E_UNSUPPORTED_NATPT_DROPPED
//
// MessageText:
//
// An unsupported NAT-PT packet was dropped.
//
#define FWX_E_UNSUPPORTED_NATPT_DROPPED  ((HRESULT)0xC0040046L)

//
// MessageId: FWX_E_NIS_LOAD_POLICY_FAILED
//
// MessageText:
//
// The FW engine failed to process the network inspection system (NIS) signature set.
//
#define FWX_E_NIS_LOAD_POLICY_FAILED     ((HRESULT)0xC0040047L)

//
// MessageId: FWX_E_TCPIP_DROP_FIREWALL_POLICY
//
// MessageText:
//
// A packet was dropped because a block action was returned from a filtering decision.
//
#define FWX_E_TCPIP_DROP_FIREWALL_POLICY ((HRESULT)0xC0040048L)

//
// MessageId: FWX_E_TCPIP_DROP_IPSEC
//
// MessageText:
//
// Identifier reserved for internal use by the network stack.
//
#define FWX_E_TCPIP_DROP_IPSEC           ((HRESULT)0xC0040049L)

//
// MessageId: FWX_E_TCPIP_DROP_INET_SOURCE_UNSPECIFIED
//
// MessageText:
//
// An outgoing packet was dropped because its source address is unspecified.
//
#define FWX_E_TCPIP_DROP_INET_SOURCE_UNSPECIFIED ((HRESULT)0xC004004AL)

//
// MessageId: FWX_E_TCPIP_DROP_INET_DESTINATION_MULTICAST
//
// MessageText:
//
// An outgoing packet was dropped because its destination address is an unspecified address, and the transport does not support multicast addresses.
//
#define FWX_E_TCPIP_DROP_INET_DESTINATION_MULTICAST ((HRESULT)0xC004004BL)

//
// MessageId: FWX_E_TCPIP_DROP_INET_HEADER_INVALID
//
// MessageText:
//
// A packet was dropped because its transport protocol header is not valid.
//
#define FWX_E_TCPIP_DROP_INET_HEADER_INVALID ((HRESULT)0xC004004CL)

//
// MessageId: FWX_E_TCPIP_DROP_INET_CHECKSUM_INVALID
//
// MessageText:
//
// A packet was dropped because the checksum in its transport protocol header is not valid.
//
#define FWX_E_TCPIP_DROP_INET_CHECKSUM_INVALID ((HRESULT)0xC004004DL)

//
// MessageId: FWX_E_TCPIP_DROP_INET_ENDPOINT_NOT_FOUND
//
// MessageText:
//
// A packet was dropped because the endpoint specified in its header could not be found.
//
#define FWX_E_TCPIP_DROP_INET_ENDPOINT_NOT_FOUND ((HRESULT)0xC004004EL)

//
// MessageId: FWX_E_TCPIP_DROP_IP_BAD_SOURCE_ADDRESS
//
// MessageText:
//
// An outgoing packet was dropped because the source address is a multicast address, a broadcast address, or an IPv6 address that contains an embedded IPv4 loopback or unspecified address.
//
#define FWX_E_TCPIP_DROP_IP_BAD_SOURCE_ADDRESS ((HRESULT)0xC004004FL)

//
// MessageId: FWX_E_TCPIP_DROP_IP_NOT_LOCALLY_DESTINED
//
// MessageText:
//
// An ingoing packet was dropped because its destination address does not exist on the system, and no appropriate forwarding interface exists.
//
#define FWX_E_TCPIP_DROP_IP_NOT_LOCALLY_DESTINED ((HRESULT)0xC0040050L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_PROTOCOL_UNREACHABLE
//
// MessageText:
//
// A packet was dropped because there is either no transport protocol handler for it or the transport protocol handler refused to process the packet.
//
#define FWX_E_TCPIP_DROP_IP_PROTOCOL_UNREACHABLE ((HRESULT)0xC0040051L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_PORT_UNREACHABLE
//
// MessageText:
//
// A packet was dropped because there is no application that is receiving packets on its destination port.
//
#define FWX_E_TCPIP_DROP_IP_PORT_UNREACHABLE ((HRESULT)0xC0040052L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_BAD_LENGTH
//
// MessageText:
//
// A packet was dropped because a length field specified within it is inconsistent with the packet’s length.
//
#define FWX_E_TCPIP_DROP_IP_BAD_LENGTH   ((HRESULT)0xC0040053L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_MALFORMED_HEADER
//
// MessageText:
//
// A packet was dropped because it contains a recognized extension header or option whose contents are not valid.
//
#define FWX_E_TCPIP_DROP_IP_MALFORMED_HEADER ((HRESULT)0xC0040054L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_NO_ROUTE
//
// MessageText:
//
// A packet was dropped because it cannot be forwarded to its destination address since the system's routing table does not contain a route to that destination.
//
#define FWX_E_TCPIP_DROP_IP_NO_ROUTE     ((HRESULT)0xC0040055L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_BEYOND_SCOPE
//
// MessageText:
//
// A packet was dropped because it cannot be forwarded since its incoming and outgoing network interfaces have different zone indexes for the packet's zone level.
//
#define FWX_E_TCPIP_DROP_IP_BEYOND_SCOPE ((HRESULT)0xC0040056L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_INSPECTION_DROP
//
// MessageText:
//
// Identifier reserved for internal use by the network stack.
//
#define FWX_E_TCPIP_DROP_IP_INSPECTION_DROP ((HRESULT)0xC0040057L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_TOO_MANY_DECAPSULATIONS
//
// MessageText:
//
// Identifier reserved for internal use by the network stack.
//
#define FWX_E_TCPIP_DROP_IP_TOO_MANY_DECAPSULATIONS ((HRESULT)0xC0040058L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_ADMINISTRATIVELY_PROHIBITED
//
// MessageText:
//
// A packet was dropped because it is administratively prohibited.
//
#define FWX_E_TCPIP_DROP_IP_ADMINISTRATIVELY_PROHIBITED ((HRESULT)0xC0040059L)

//
// MessageId: FWX_E_TCPIP_DROP_IP_HOP_LIMIT_EXCEEDED
//
// MessageText:
//
// A packet was dropped because its hop limit or time-to-live limit was exceeded.
//
#define FWX_E_TCPIP_DROP_IP_HOP_LIMIT_EXCEEDED ((HRESULT)0xC004005AL)

//
// MessageId: FWX_E_TCPIP_DROP_IP_ADDRESS_UNREACHABLE
//
// MessageText:
//
// A packet was dropped because it cannot be sent to the destination address either because the destination does not exist or packets are not allowed to be sent to that destination.
//
#define FWX_E_TCPIP_DROP_IP_ADDRESS_UNREACHABLE ((HRESULT)0xC004005BL)

//
// MessageId: FWX_E_TCPIP_DROP_IP_ARBITRATION_UNHANDLED
//
// MessageText:
//
// Identifier reserved for internal use by the network stack.
//
#define FWX_E_TCPIP_DROP_IP_ARBITRATION_UNHANDLED ((HRESULT)0xC004005CL)

//
// MessageId: FWX_E_TCPIP_DROP_IP_INSPECTION_ABSORB
//
// MessageText:
//
// Identifier reserved for internal use by the network stack.
//
#define FWX_E_TCPIP_DROP_IP_INSPECTION_ABSORB ((HRESULT)0xC004005DL)

//
// MessageId: FWX_E_BLOCKED_COMPUTER_ACCESS
//
// MessageText:
//
// Computer was blocked because it belongs to the Blocked Computers computer set.
//
#define FWX_E_BLOCKED_COMPUTER_ACCESS    ((HRESULT)0xC004005EL)

//
// MessageId: FWX_E_IP_NOT_GENERATED_BY_TCPIP
//
// MessageText:
//
// An IP packet was dropped because it was not generated by the TCP/IP stack. 
//
#define FWX_E_IP_NOT_GENERATED_BY_TCPIP  ((HRESULT)0xC004005FL)


#endif  // _WSPFWERR_H_

