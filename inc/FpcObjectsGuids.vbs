'****************************************************************************************

'Copyright (c) Microsoft Corporation.  All rights reserved.
'THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. 
'THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER.
'USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

'****************************************************************************************









' Predefined objects GUIDs



'

' Predefined schedules

'

const WEEKENDS_SCHEDULE_GUID = {47B968A2-AF84-11d2-9514-0008C7BCEFD3}
const WORK_HOURS_SCHEDULE_GUID = {47B968A1-AF84-11d2-9514-0008C7BCEFD3}

'

' Predefined content type sets

'

const APPLICATION_CONTENT_TYPE_SET_GUID = {53cb861f-f980-485f-be61-af8c8cfdf2bf}
const IMAGES_CONTENT_TYPE_SET_GUID = {2f203d1d-9ca0-414a-b036-fc9c585677ab}
const TEXT_CONTENT_TYPE_SET_GUID = {23b0dfe2-c9e1-4426-b74d-09cf1e34f0f5}
const AUDIO_CONTENT_TYPE_SET_GUID = {7db4ec57-588b-489c-bf85-e768a1d3a6b7}
const VIDEO_CONTENT_TYPE_SET_GUID = {7d3e566c-e96c-4cd4-b6aa-8181a8386c8e}
const VRML_CONTENT_TYPE_SET_GUID = {18d59ae5-5064-4b66-9f05-3cd3ea180788}
const DOCUMENTS_CONTENT_TYPE_SET_GUID = {62c11bdf-41a9-4cf5-aa1e-da859bce8387}
const HTML_CONTENT_TYPE_SET_GUID = {9fbc7d4d-f65d-4149-9c93-1c750492c377}
const COMPRESSED_FILES_CONTENT_TYPE_SET_GUID = {b6a4aac2-082b-4271-98b4-78bcdee08b48}
const APPLICATION_DATA_FILES_CONTENT_TYPE_SET_GUID = {b88f73a6-026b-4a9c-a9b9-928c507ea8c7}
const MACRO_DOCUMENTS_CONTENT_TYPE_SET_GUID = {a53da384-9ba9-4a22-b9ef-5c5cb111708a}

'

' Predefined computer sets

'

const ANYWHERE_COMPUTER_SET_GUID = {BE20F10A-A274-436A-A7AD-63A9FC5ED19D}

const IPSEC_REMOTE_GATEWAYS_COMPUTER_SET_GUID = {B9F20168-249A-44da-B47B-A74732B7F0E5}
const IPSEC_REMOTE_GATEWAYS_COMPUTER_SET_VPS_GUID = {421259C4-A27F-4408-A8F0-427505643BA6}
const REMOTE_MANAGEMENT_COMPUTER_SET_GUID = {BECD4ACD-70F7-484D-A161-EA24D887D04F}
const ADAM_SERVERS_COMPUTER_SET_GUID = {AE7E85D0-0815-4E26-B065-F6A72D231DBB}
const ENTERPRISE_MANAGEMENT_COMPUTES_COMPUTER_SET_GUID = {dddbd790-6043-4001-879a-fb7e89704e61}
const ARRAY_SERVERS_COMPUTER_SET_GUID = {a7aa2254-b5ee-45e3-b0b2-01b86d8d67a3}
const MANAGED_SERVERS_COMPUTER_SET_GUID = {233e9c83-de44-4401-924c-3a4a0d9b6b23}
const ESAS_RESTRICTED_ACCESS_COMPUTER_SET_GUID = {05938db9-a91d-4b92-9bb1-8e4f2d1d5ad4}
const SAS_CORE_SERVERS_COMPUTER_SET_GUID = {5B1E481B-8C3E-402e-A368-ED99B21A449E}
const SAS_ACCESS_POINT_SERVER_COMPUTER_SET_GUID = {5DB0BC54-A1F2-4164-93F7-C0CBBE76B958}
const ESAS_BLOCKED_ACCESS_COMPUTER_SET_GUID = {27dc514a-c8ff-46e3-8f2f-2bbb763a86db}

const ESAS_COMP_HEALTH_MONITORING_NETWORK_SET_GUID = {8f0a07ad-24eb-40f7-91fc-a0ee4e4cee27}
const ESAS_EXCEPTIONS_COMPUTER_SET_GUID = {5E6007A7-F294-4aa6-8EB6-76A02D1356A5}

const ESAS_GATEWAY_SERVER_COMPUTER_SET_GUID = {CA37623A-E14B-4df6-AD4A-6ACC00C82EA9}
const KERNEL_MODE_BLOCKED_COMPUTER_SET_GUID = {BDF66ACA-977F-4d2d-B995-F15B0C0C3C41}


'

' Predefined address ranges

'

const ANYWHERE_V6_ADDRESS_RANGE_GUID = {8565A7A1-6CBA-434d-9B60-C511192B8D02}

'

' Predefined URL sets

'

const WATSON_DOMAIN_SET_GUID = {2a276812-7806-4d8e-9a97-c0a6277b0329}
const MU_DOMAIN_NAME_SET_GUID = {b05e0012-5f7a-4869-9612-0ea18b26c924}
const MANAGEMENT_DOMAIN_SET_GUID = {2F3EEFF1-746F-438b-82C3-AC010C89F207}
const ADAM_DOMAIN_SET_GUID = {610e5003-9625-4e3c-97c0-8672200ce095}
const ALLADAMS_COMPUTER_SET_GUID = {60c9a3cc-c887-4e5f-ac45-5f666f199927}
const EMP_EXCEPTIONS_DOMAIN_SET_GUID = {b5e23e63-a8fb-4f28-90a7-98284a81285d}
const HTTPS_EXCEPTIONS_DOMAIN_SET_GUID = {f5239b3c-e77d-46c0-801f-f3332610351e}
const NIS_EXCEPTIONS_DOMAIN_SET_GUID = {423ef78e-5b44-492d-a614-a39f25a2fd69}
const URL_FILTERING_MRS_SITES_DOMAIN_SET_GUID = {eeb03019-95e0-41e7-9c02-9dbf0f06255b}
const ESAS_ALLOWED_URL_SET_GUID = {9a1887dc-dfd3-4b92-960a-3127ba536926}
const ESAS_GATEWAY_COMPUTER_GUID = {2ed16873-8ed7-458a-b192-b6fbd1d5b130}
const ESAS_CORE_COMPUTER_GUID = {8ac453ae-29d3-41df-939e-4303ffb3c4fa}

'

' Predefined user sets

'

const ALL_USERS_USER_SET_GUID = {DFFB7833-9365-4184-AABC-7CAFB018A7FA}

const ALL_AUTHENTICATED_USER_SET_GUID = {DE8CB0AA-FBE3-4105-9BB7-C2E17C34DDF4}

const SYSTEM_USER_SET_GUID = {e3be1649-ea5c-49c8-8aea-81091eb19349}

const ALL_ADMINISTRATORS_GUID = {89BCC186-053F-4866-BB83-763F7D511D87}


'

' GUIDs for predefined authentication schemes

'

const RADIUS_AUTHENTICATION_SCHEME_GUID = {0936344B-924A-4B7B-92FA-0F4783758D2E}

const RADIUS_WEBFILTER_GUID_SZ = {0C6083D6-C159-4E28-9620-CDFECA6EFFB0}
const RADIUS_WEBFILTER_GUID = {0C6083D6-C159-4E28-9620-CDFECA6EFFB0}
'

' Plug-in GUIDs

'

const SMTP_FILTER_GUID = {179A0A70-1EF5-11D3-B160-00A0C9E3F998}
const SOCKS_FILTER_GUID = {25765C04-C80B-494C-914E-286297DB8C8E}
const STREAMING_FILTER_GUID = {473ED0E1-6371-4ED2-9F95-A676B66659A2}
const FTP_FILTER_GUID = {680A928F-22B3-11D1-B026-0000F87750CB}
const ISS_DNS_FILTER_GUID = {9649A5E0-52A4-4E2A-831D-DE093CCB6B05}
const MS_DNS_FILTER_GUID = {49FE2B2F-3BB4-495C-87C8-3890C3C35756}
const POP_FILTER_GUID = {BAA26FC5-6CB6-4DE9-9683-9EAFC491D5B4}
const RPC_FILTER_GUID = {E331F638-AB86-4AA5-9B6A-2B0248C7B4FB}
const H323_FILTER_GUID = {FE440D49-AB26-11D2-A101-00C04FB6CFB6}
const PPTP_FILTER_GUID = {5126E0A1-678D-4855-9328-7ADA762F370C}
const NNTP_FILTER_GUID = {967FA3C8-EA8F-4EE1-B9FF-1BE50583B3E1}
const MMS_FILTER_GUID = {74104BD8-19C4-4F4C-96A9-C8A78F73CF8E}
const RTSP_FILTER_GUID = {c758f63f-e391-4ad2-aa31-d050d895ba7b}
const PNM_FILTER_GUID = {D3012DF1-F713-486A-8769-ABB0049BB633}
const GAPA_FILTER_GUID = {2CB555C3-F0D0-47EC-BD73-D2B17FC1CB9E}
const SIP_FILTER_GUID = {8A0EF6F1-86EE-4e6f-83BA-E028F22B2A0D}

const DNS_INTRUSION_ALERT_GUID = {48CF1E7F-CDFA-4cbe-8744-683D1DEFF70D}
const DNS_ZONE_TRANS_INTRUSION_ALERT_GUID = {83AF38F7-EE83-45a1-B583-8D87F2A85D35}
const FTP_FILTER_INIT_ALERT_GUID = {8285E030-3544-4eba-AB2C-CDFBE491B0D0}
const POP_INTRUSION_ALERT_GUID = {0784B892-8541-46e5-B672-A82C6B205C12}
const RPC_FILTER_BIND_ALERT_GUID = {5A3343C0-E6D1-49e1-828E-5873F34A39CE}
const SOCKS_CONFIG_FAIL_ALERT_GUID = {FE62E981-C32F-4009-9BD4-61FC8F493704}
const SMTP_FILTER_EVENT_ALERT_GUID = {D7EFAD59-619A-485f-991B-6BDBD6685818}
const SMTP_FILTER_TERMINATOR_ALERT_GUID = {50c58ed3-55c0-428d-98d2-6da88b656958}
const SMTP_FILTER_DATA_TERMINATOR_ALERT_GUID = {a7f4e7c0-d79b-4006-b231-cae549f9f90c}
const BAD_PORT_ALERT_GUID = {4732A338-37CB-48ee-8C46-A23D388A1247}
const NNTP_POLICY_VIOLATION_ALERT_GUID = {26083A62-644D-4944-854B-D48BD6B6590C}
const NNTP_PROTOCOL_VIOLATION_ALERT_GUID = {A7287C0D-4D40-4b39-A06B-3FB9967ECBCE}
const NNTP_EVENT_CONFIG_ERROR_ALERT_GUID = {57BF6F08-71AA-4cab-A8AA-D92C43DAE2D1}
const FTP_READ_COMMANDS_ALERT_GUID = {179E95E8-AAF6-4e0c-954D-382518778CF5}
const ACTIVE_FTP_NOT_ALLOWED_ALERT_GUID = {BC781258-8725-4f18-BA86-32B6DCEB2DBB}
const RPC_EVENT_SERVER_CONN_ALERT_GUID = {845586CB-3E3D-4375-8DCC-F54E47CFA877}
const LDAP_BAD_SCOPE_ALERT = {E100D165-B96A-4f3f-8A74-0274D64F49EA}

const SECURID_AUTHENTICATION_SCHEME_GUID_SZ = {2F45B71E-C007-42ae-A340-B4938511B42C}
const SECURID_AUTHENTICATION_SCHEME_GUID = {2F45B71E-C007-42ae-A340-B4938511B42C}
const RADIUS_AUTHENTICATION_SCHEME_GUID_SZ = {51268777-5021-44fb-8AB8-1C98F527C16A}
const PASSPORT_AUTHENTICATION_SCHEME_GUID_SZ = {B64E7CCD-2EEA-47d0-ADBB-77AFF6034A4A}
const LDAP_AUTHENTICATION_SCHEME_GUID_SZ = {C5E156C1-0871-4dda-AA3B-51DF4065226E}
const LDAP_AUTHENTICATION_SCHEME_GUID = {C5E156C1-0871-4dda-AA3B-51DF4065226E}
const COOKIE_AUTHENTICATION_SCHEME_GUID_SZ = {4C0562DC-2D02-4fe3-A870-D308D6DC74D9}
const FBA_RADIUS_AUTHENTICATION_SCHEME_GUID_SZ = {C4C45F83-C5CD-4402-8D06-EB7EF8EE796A}
const FBA_RADIUS_AUTHENTICATION_SCHEME_GUID = {C4C45F83-C5CD-4402-8D06-EB7EF8EE796A}
const FBA_RADIUS_OTP_AUTHENTICATION_SCHEME_GUID_SZ = {D3ECFD60-C3F5-4D69-B3B4-4E5AC239A015}
const FBA_RADIUS_OTP_AUTHENTICATION_SCHEME_GUID = {D3ECFD60-C3F5-4D69-B3B4-4E5AC239A015}
const FBA_LDAP_AUTHENTICATION_SCHEME_GUID_SZ = {16EFABED-2C45-4C43-B12B-F53316B3BDA0}
const FBA_LDAP_AUTHENTICATION_SCHEME_GUID = {16EFABED-2C45-4C43-B12B-F53316B3BDA0}
'

' Web filter GUIDs

'


' HTTP filter

const HTTP_FILTER_GUID_SZ = {f1076e51-bbaf-48ba-a2d7-b0875211e80d}
const HTTP_FILTER_GUID = {f1076e51-bbaf-48ba-a2d7-b0875211e80d}
const HTTP_FILTER_ENTERPRISE_VPS_GUID = {D4BAAF2A-5C81-4354-920F-1C9959BC1351}

' Cookie auth filter

const COOKIE_AUTH_FILTER_GUID_SZ = {28EF0C08-E82F-41bf-8CBD-88BDF66E654B}
const COOKIE_AUTH_FILTER_GUID = {28EF0C08-E82F-41bf-8CBD-88BDF66E654B}
const COOKIE_AUTHENTICATION_SCHEME_GUID = {4C0562DC-2D02-4fe3-A870-D308D6DC74D9}


'

' GUIDs for predefined networks

'

const INTERNAL_NETWORK_GUID = {4E32B556-0FAF-4A27-9111-085F679EDC9B}

const EXTERNAL_NETWORK_GUID = {F129EACF-778B-44FE-B339-5B752D7220A3}

'copy in msp\haifa\rws\SmtpProtection\FssSignatureOptions.cs

const LOCALHOST_NETWORK_GUID = {5ED77DCE-8110-4821-B445-008B7E6B7F6D}

const VPN_CLIENTS_NETWORK_GUID = {08e7b0e1-287a-4fbd-a33d-b13012e4bc4a}

const QUARANTINED_VPN_CLIENTS_NETWORK_GUID = {394b94a2-36d5-4811-9db8-f0754aef4f79}

const PERIMETER_NETWORK_GUID = {EE4FD759-3B5B-4E27-9A7B-CEFE7817D3D0}


'

' GUIDs for predefined network sets

'

const ALL_NETWORKS_NETWORK_SET_GUID = {18d0438b-5144-4362-b79e-742712513729}

const ALL_EXCEPTEXTERNAL_NETWORK_SET_GUID = {1651a6f8-7eac-41f3-9479-79f946ba9225}
const WEB_CLIENTS_NETWORK_SET_GUID = {DA831AD5-078B-4d12-AEEC-E7871B02A5AE}

'

' GUIDs for predefined network rules

'

const LOCALHOST2ALL_NETWORKRULE_GUID = {3D7F8D7E-23B3-42ba-83D0-2E6FC5420FFE}
const LOCALHOST2ALL_NETWORKRULE_SRC_NET_GUID = {98E31493-37BB-44F9-9745-5B11C0DA3F30}
const LOCALHOST2ALL_NETWORKRULE_DST_NETSET_GUID = {11C28BB6-2773-47B6-ABE3-AFF2EBBF09C8}
const INT2EXT_NETWORKRULE_GUID = {E40BC4C6-A4A2-4B4A-8359-EA567BF83283}
const INT2EXT_NETWORKRULE_SRC_NET_GUID = {C6F2C51B-3663-4229-AB2A-F146E87F2837}
const INT2EXT_NETWORKRULE_DST_NET_GUID = {E3DCD23F-7ED4-4377-8C68-3EE942C76097}
const VPN2INT_NETWORKRULE_GUID = {FB9F2F22-A52A-4d7b-88BD-5BB8B944E46D}
const VPN2INT_NETWORKRULE_SRC_NET_GUID = {A30AD5B7-3099-425c-A52B-56D588FEB50B}
const VPN2INT_NETWORKRULE_DST_NET_GUID = {2D387513-DB84-48b8-B1CB-83668D7A879D}
const VPN2EXT_NETWORKRULE_GUID = {ACAF030D-6034-4012-A606-414B58058617}
const VPN2EXT_NETWORKRULE_SRC_NET_GUID = {0DF10D3F-11CA-4d6e-89AD-781F44D47983}
const VPN2EXT_NETWORKRULE_DST_NET_GUID = {AB11E8A4-FED2-426d-877A-DC68E168EED8}
const QUARANTINED_VPN2INT_NETWORKRULE_GUID = {44A58315-7BA5-4f09-B45E-4EF67C95DD17}
const QUARANTINED_VPN2INT_NETWORKRULE_SRC_NET_GUID = {26C9D0E3-109E-47df-81B6-532A6E73B71F}
const QUARANTINED_VPN2EXT_NETWORKRULE_GUID = {EEB89592-0D09-4e39-8A27-B7977A2C48FB}
const QUARANTINED_VPN2EXT_NETWORKRULE_SRC_NET_GUID = {097D8CAD-8FE9-4188-9FA6-3BDC19D5D217}
const INT2DMZ_NETWORKRULE_GUID = {9E80103D-8A81-4EF9-A772-818F3C35AC14}
const DMZ2EXT_NETWORKRULE_GUID = {82CFF1ED-B7BD-4C4C-9670-11FC5D182A03}

'

' Network template GUIDs

'

const EDGE_FIREWALL_TEMPLATE_GUID = {e826736f-262a-47af-8871-980561676073}
const THREE_LEG_DMZ_TEMPLATE_GUID = {9be6f18a-57ad-4cea-b924-2cfedfef3799}
const FRONT_FIREWALL_TEMPLATE_GUID = {2EF25ED2-C029-4a5b-B274-590B9953F2F5}
const BACK_FIREWALL_TEMPLATE_GUID = {1C02D67F-7CF6-429c-9B46-B7805FCCED41}
const SNM_TEMPLATE_GUID = {2C02D67F-7CF6-429c-9B46-B7805FCCED42}

'

' Network template policies GUIDs

'

const NO_ACCESS_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389991}
const NS_ON_PERIMETER_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389992}
const NS_BY_ISP_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389993}
const RESTRICTED_WEB_ACCESS_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389994}
const RESTRICTED_WEB_ACCESS_NS_BY_ISP_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389995}
const FREE_WEB_ACCESS_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389996}
const RESTRICTED_WEB_ACCESS_NS_ON_PERIMETER_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389997}
const SNM_POLICY_GUID = {7EDA00D3-09D2-486a-9A08-05D20A389998}

'

' GUIDs for network template rule elements

'

const PERIMETER_ADDRESS_RANGE_GUID = {D0A91FA0-CF48-4D1F-8CC3-1AC0605E8EA8}
const FRONT_FIREWALL_COMPUTER_GUID = {D198E592-AAEA-46D8-AA99-0E5BFF2AB51B}
const BACK_FIREWALL_COMPUTER_GUID = {1EDE1873-89B8-41c1-9CA4-7E48E6E74E37}


'

' System policy GUIDs

'

const LDAP_LOCAL2AD_SYSTEMRULE_LDAP_PROTOCOL_GUID = {86d2f01a-e930-4238-96cb-2874397aa90f}
const LDAP_LOCAL2AD_SYSTEMRULE_LDAPS_PROTOCOL_GUID = {811c64d4-6871-45fe-9122-2dff6fd07fbf}
const LDAP_LOCAL2AD_SYSTEMRULE_LDAPGC_PROTOCOL_GUID = {a011a066-8c66-4188-b975-c0a803c9e007}
const LDAP_LOCAL2AD_SYSTEMRULE_LDAPSGC_PROTOCOL_GUID = {d9f84ef8-5919-479a-be90-c8361f96f2e0}
const LDAP_LOCAL2AD_SYSTEMRULE_SRC_NET_GUID = {23d0ab6f-15db-4c81-afa4-0b9e3ebdb954}
const LDAP_LOCAL2AD_SYSTEMRULE_DST_NET_GUID = {6d94ecc5-a29a-4d8b-8a4d-0079eaa6640f}
const LDAP_LOCAL2AD_SYSTEMRULE_USER_SET_GUID = {1e8101b8-965e-478e-b631-3d0a5c8183e7}

const KERBEROS_LOCAL2AD_SYSTEMRULE_KERBEROS_TCP_PROTOCOL_GUID = {9826a7b6-d27e-4382-bc80-e74355a22473}
const KERBEROS_LOCAL2AD_SYSTEMRULE_KERBEROS_UDP_PROTOCOL_GUID = {de6c6a4d-aaac-4618-b7e9-c01f440b5e24}
const KERBEROS_LOCAL2AD_SYSTEMRULE_SRC_NET_GUID = {63aa9070-6182-4bc4-a967-af72de70a672}
const KERBEROS_LOCAL2AD_SYSTEMRULE_DST_NET_GUID = {9f84922f-9f10-40d5-bb70-a94e71827964}
const KERBEROS_LOCAL2AD_SYSTEMRULE_USER_SET_GUID = {0141628e-a760-456a-a8ed-52b1fa19a3ac}

const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_RADIUS_PROTOCOL_GUID = {f2d694c6-3005-40bb-a3b3-7ffd9193ecf6}
const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_RADIUS_ACCOUNTING_PROTOCOL_GUID = {a5a66492-c5a6-4b60-aace-b86100436e9e}
const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_SRC_NET_GUID = {827b586e-ee80-4741-9487-0065c5be9ace}
const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_DST_NET_GUID = {a5724fbd-de31-42c5-9612-e749381c377c}
const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_USER_SET_GUID = {bcc56049-c632-484b-9c78-3cb7fc927aaf}

const SYSTEMPOLICY_CONFIGROUP_SMTP_PROTECTION_GUID = {91d35f32-2e31-4d9c-80e8-55c569bd75f8}
const SMTP_PROTECTION_LOCAL2INTERNET_SYSTEMRULE_GUID = {414f2ad7-c5e4-4a57-9ff3-9f9fa7b1493b}
const SMTP_PROTECTION_INTERNET2LOCAL_SYSTEMRULE_GUID = {7066fbb6-942e-40dc-bd74-13f430587187}
const SMTP_PROTECTION_EDGESYNC_SYSTEMRULE_GUID = {202C45CC-15AC-492b-972C-EB6177BA5A0B}

const SYSTEMPOLICY_CONFIGROUP_ESAS_GUID = {54c5bfec-8afe-4d34-9e56-d87486a89032}
const ESAS_BLOCK_COMPUTER_ACCESS_RULE_GUID = {ce441c54-2e46-44aa-8917-30504128ffe1}
const ESAS_RESTRICT_COMPUTER_ACCESS_RULE_GUID = {24a29495-6e74-4170-bf3e-2e21bbc4ae27}
const ESAS_GATEWAY_ACCESS_RULE_GUID = {bdb3f639-08a7-4df2-a22e-9086bf0daf26}
const ESAS_CORE_ACCESS_RULE_GUID = {9C5B9BF9-2B7B-4F0B-81A3-82126E7791A8}

const FWC_CLIENT_NOTIFICAITON_SYSTEMRULE_GUID = {ddc6c7d5-43d4-4245-a601-62da44424627}

const LDAP_LOCAL2AD_SYSTEMRULE_GUID = {65fc6b53-981f-4c68-8dbd-c559c7f170de}
const KERBEROS_LOCAL2AD_SYSTEMRULE_GUID = {51e9fca4-d552-41ae-a78b-20c9905049dd}
const RADIUS_LOCAL2INTERNAL_SYSTEMRULE_GUID = {81e3c0e3-2c2b-49a2-acbc-86db9727fcc5}
const TS_INTERNAL2LOCAL_SYSTEMRULE_GUID = {e0093bf3-fa16-4a3c-afe1-19d502ce9608}
const HTTP_MNGMT2LOCAL_SYSTEMRULE_GUID = {7C210644-81EA-49bf-A0E8-A91669A32F01}

const NETBIOS_LOCAL2INTERNAL_SYSTEMRULE_GUID = {60f76070-73b3-4b41-af7a-d611c0c5a24c}
const DHCP_LOCAL2ALL_SYSTEMRULE_GUID = {1fa6f11e-07df-4875-b396-9720296d1484}
const DHCP_ALL2LOCAL_SYSTEMRULE_GUID = {b734b288-1aea-4565-85a4-d48feb1d830a}
const ICMP_PING_INTERNAL2LOCAL_SYSTEMRULE_GUID = {02c367ed-b271-4062-bb78-52134e567404}
const ICMP_LOCAL2ALL_SYSTEMRULE_GUID = {43441a7c-2b0a-4ecf-96e5-2d1e5196badb}
const RPC_INTERNAL2LOCAL_SYSTEMRULE_GUID = {fbf6357a-346d-4290-99f6-70d73705fcdb}
const RPC_LOCAL2INTERNAL_SYSTEMRULE_GUID = {339a72f1-05ac-4665-aa8f-45138dc8d123}
const HTTP_LOCAL2ARRAY_SYSTEMRULE_GUID = {d60f7825-a7d6-4bc4-afe2-3e15e55d2035}
const HTTP_LOCAL2ALLNETWORKS_SYSTEMRULE_GUID = {d77e2f93-9510-456e-afa4-e2eb9082df3a}
const VPN_EXTERNAL2LOCAL_SYSTEMRULE_GUID = {A2A86F5A-943B-43be-A540-5A9D575C0257}

const VPN_ROUTER_TO_ROUTER_INCOMING_SYSTEMRULE_GUID = {131ED5D7-1ADD-4088-A6D3-A1161D0D3BE1}

const VPN_ROUTER_TO_ROUTER_OUTGOING_SYSTEMRULE_GUID = {5E3E2F88-BB3A-4682-9B44-19E80E13B1A2}
const VPN_SSTP_WEB_PUBLISHING_SYSTEMRULE_GUID = {FD8D0171-1E87-4D97-8034-748859D85F57}
const MS_CIFS_LOCAL2INTERNAL_SYSTEMRULE_GUID = {085a6488-4b69-486a-adbc-0860808c44d4}
const MS_CIFS_INTERNAL2LOCAL_SYSTEMRULE_GUID = {1bb83eb6-a59d-4f75-b1e7-4d6e6e5d4640}
const MS_SQL_LOCAL2INTERNAL_SYSTEMRULE_GUID = {96210741-c328-46c5-8b53-ca6d2452a3dd}
const MS_RREGISTRY_INTERNAL2LOCAL_SYSTEMRULE_GUID = {b6352cb9-88f0-484c-8308-cbaf587987ed}
const MS_RMANAGE_INTERNAL2LOCAL_SYSTEMRULE_GUID = {b2b4792d-12cd-45bc-b31a-791adc00cb69}
const MS_RMANAGE_LOCAL2INTERNAL_SYSTEMRULE_GUID = {7ddc7a6b-612f-4d9d-9a08-a52bfbdb81a7}
const NETBIOS_INTERNAL2LOCAL_SYSTEMRULE_GUID = {98f4c8f6-79fa-49d6-ae8a-001d0d581f1f}
const NETBIOS_LOCAL2ALL_SYSTEMRULE_GUID = {0761ff3d-de3b-42c3-a8de-5351f4857381}
const HTTP_LOCAL2WATSON_SYSTEMRULE_GUID = {4ff998cf-bdee-4886-9688-400ca798960a}
const HTTP_MANAGEMENT_SYSTEMRULE_GUID = {27E69CBA-4149-4151-AD94-FB73CB660704}
const SECURID_LOCAL2INTERNAL_SYSTEMRULE_GUID = {b60230a7-290e-417c-ba4a-5bd9d3e0cff0}
const MOM_LOCAL2INTERNAL_SYSTEMRULE_GUID = {36a09f20-f071-4b92-95c7-8a18d58710bb}
const SCOM_INSTALL_LOCAL2INTERNAL_SYSTEMRULE_GUID = {682073E0-5750-41ca-9CD5-7769E5A02542}
const HTTP_LOCAL2CONNECTIVITY_SYSTEMRULE_GUID = {E8454A98-DB1A-4be9-93DD-5198A01798EC}
const NTP_LOCAL2INTERNAL_SYSTEMRULE_GUID = {d6bf1528-0530-4116-bd2e-58c60c6b8f15}
const SMTP_LOCAL2INTERNAL_SYSTEMRULE_GUID = {382e9abe-2958-4129-8a1c-96909407bb5f}
const ADAM_LOCAL2CONFIGSERVER_SYSTEMRULE_GUID = {17f5d563-afa0-4509-a779-bdcfa519e49d}
const LOCALADAM_SERVER2ADAM_SYSTEMRULE_GUID = {5b4e11ae-bcf5-449e-bddc-dc33aacb0cea}
const LOCALADAM_REPLICATION_SYSTEMRULE_GUID = {86f60da8-df58-4e2b-9f9d-4bb01e59ed29}
const INTRA_ARRAY_SYSTEMRULE_GUID = {78B26D44-76EB-4940-A24D-B63D27E2C874}
const HTTP_LOCAL2MU_SYSTEMRULE_GUID = {6EBF4129-DF21-4a78-A31F-117926875EA9}
const DEFAULT_POLICY_RULE = {4cf0f1c2-b10b-11d2-9a1d-006094eb634c}

'

' Enterprise Policies GUIDs

'

const ARRAY_POLICY_ONLY_ENTERPRISE_POLICY_GUID = {aa53ce81-985c-4362-81cd-51a3e517742c}
const ARRAY_POLICY_PLACE_HOLDER_RULE_GUID = {3a87762c-b753-44cc-b047-4fae37643556}

'

' Update Services GUIDs

'

const IDS_UpdateService_WebAntivirus_GUID = {C15B227A-0C88-421a-9D05-8B71B6525472}
const IDS_UpdateService_IPS_GUID = {464716F5-0BAB-494a-A51A-30400DDF127F}
'copy in msp\haifa\rws\SmtpProtection\FssSignatureUpdate.cs

const IDS_UpdateService_EmailAntivirus_GUID = {49A2B477-7047-4a6b-8BB4-4F910C4B2E9D}

'

' Licenses GUIDs

'

const IDS_License_WebProtection_GUID = {DB9AC467-82C0-4BAC-9E35-7352B7D458E3}

'

' Update Services GUIDs

'

const IDS_IPS_ServiceUpdatesState_GUID = {8378D6E9-1C63-4dd5-9C75-76D934ECE161}
const IDS_WebAV_ServiceUpdatesState_GUID = {1ECEDC7D-152B-4c4e-9445-FA2B6C724A4F}
const IDS_EmailAV_ServiceUpdatesState_GUID = {02B79E74-7D23-4f66-BC00-32FEA4A702EF}
const IDS_UrlFilter_ServiceUpdatesState_GUID = {CBA5BBEA-9C06-4d2a-9F9A-E2471EC263E7}

'

' IPv6 system policy GUIDs

'

const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_GUID = {8e344017-8bc5-4079-ad4c-20c0a2b91341}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_LISTENER_DONE_PROTOCOL_GUID = {97d636c6-74eb-4d9a-85e2-7119418eb51a}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_LISTENER_QUERY_PROTOCOL_GUID = {17f8aef5-185f-4c66-bcc1-114bfa6256fc}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_LISTENER_REPORT_PROTOCOL_GUID = {9b87f203-2bc7-4c71-89de-22b56f1705a9}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_LISTENER_REPORT_V2_PROTOCOL_GUID = {f46e1fd1-11b2-448b-ae2a-9f4b95112e70}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_MULTICAST_ROUTER_ADV_PROTOCOL_GUID = {d0108a03-fac1-4379-ac27-c77d9d7759fa}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_MULTICAST_ROUTER_SOLICIT_PROTOCOL_GUID = {d7d96aff-ea4b-451c-9ae5-3d4664d29931}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_MULTICAST_ROUTER_TERMINATION_PROTOCOL_GUID = {de1df9ab-1d1c-4ac2-84a1-9777ba5c7f22}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_NEIGHBOR_ADV_PROTOCOL_GUID = {b1a247cd-488f-42a4-ba18-5f48a574e1f5}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_NEIGHBOR_SOLICIT_PROTOCOL_GUID = {b82a7967-23e9-43bb-ada4-1274d482c26e}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_ROUTER_ADV_PROTOCOL_GUID = {bee396ee-d719-429c-a972-cd800e543892}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_ROUTER_SOLICIT_PROTOCOL_GUID = {5e486d8f-011f-4866-abcb-6e9a35cc936d}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_ECHO_PROTOCOL_GUID = {e40c0252-4214-48e4-9eb7-c2c9c8c50b0e}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_SRC_NET_GUID = {904a34f2-dd30-443b-afb7-397a4f494473}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_DST_NET_GUID = {df815541-4354-4335-aa6d-cbf11365d8ad}
const IPV6_LOCAL2IPV6NETWORKS_SYSTEMRULE_USER_SET_GUID = {2225a8d3-e2c5-40ee-b5de-14795e12a74c}

const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_GUID = {f0a26aca-257e-48de-9152-717809c3bc6c}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_DONE_PROTOCOL_GUID = {4e665431-bcc5-47c5-b5b6-bd87b12c65fd}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_QUERY_PROTOCOL_GUID = {94ef16a1-461a-41ad-b8d1-99a6333947d9}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_REPORT_PROTOCOL_GUID = {aa02480a-3a9c-4a4f-bf8c-091297523e4b}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_REPORT_V2_PROTOCOL_GUID = {d746e3ff-9eff-418f-963e-6f6a09ba3434}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_ADV_PROTOCOL_GUID = {dc68b2d0-e839-48f5-8667-a532c077ad97}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_SOLICIT_PROTOCOL_GUID = {8e212282-1879-47c9-a387-2b94471a95ad}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_TERMINATION_PROTOCOL_GUID = {0dadcb2e-a22e-4acd-8f1c-1a442dcd744e}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_NEIGHBOR_ADV_PROTOCOL_GUID = {448b0f51-fca4-4435-b8bd-e36d11890c96}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_NEIGHBOR_SOLICIT_PROTOCOL_GUID = {e5c4fb7b-a43b-4eca-8c2f-39b6b355e931}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_ROUTER_ADV_PROTOCOL_GUID = {99b2982e-25b0-4399-98e7-94587d20b6e2}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_ROUTER_SOLICIT_PROTOCOL_GUID = {3e990931-a89a-4894-a611-530a9d4ac51b}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_ECHO_PROTOCOL_GUID = {57b5c24a-9da2-4f79-a016-097141ad3a3f}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_LLMNR_PROTOCOL_GUID = {259742fb-0cff-40f4-9ae5-e8855054e674}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_SRC_NET_GUID = {416820d6-7ae1-43ea-b0c9-3b93f7eb0e90}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_DST_NET_GUID = {2b9cd0de-b193-446a-9688-0eaf44a8ab57}
const IPV6_IPV6NETWORKS2LOCAL_SYSTEMRULE_USER_SET_GUID = {a36e320a-e18f-47a6-9a76-6c6922895f28}

'

' WebUI protocols guids

'

const ISA_SECURE_WEBUI_HTTPS_GUID = {35E36F73-B77C-4774-9EE8-B885725289AD}
const ISA_UNSECURE_WEBUI_HTTP_GUID = {5CD12018-6363-41bc-95DD-BBDDE5EA678E}
const ISA_UNSECURE_WEBUI_RDP_GUID = {B139A413-C707-4394-9986-D1386DD03633}

'

' Default restricted ports range

'

const DEFAULT_RESTRICTED_PORTS_RANGE_GUID = {91DCD424-A802-44a2-B425-A1BFDD39D4B8}

'

' Predefined policy groups

'

const POLICYGROUP_WEBACCESS_GUID = {5555a5a4-05ce-4f23-8e85-ab8980007e1a}
const POLICYGROUP_VOIP_ACCESS_GUID = {555406da-82f1-4911-967a-2e86b11f503c}

'

' Direct Access system policy guids

'

const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_GUID = {5CAFEA05-698C-40b5-B4BB-3F69AC27CF45}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_TEREDO_SERVER_PROTOCOL_GUID = {D77F6E30-ABA7-4b5f-922C-A9DC4619EDF0}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_IP_HTTPS_PROTOCOL_GUID = {57E64DA0-E410-486a-885B-AE4246E20F2C}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_IPV6_OVER_IPV4_TUNNEL_PROTOCOL_GUID = {45EA5CF7-64DB-4fed-897E-73CC7981C006}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_SRC_NET_GUID = {AE64EEDB-D8EC-450f-A5F8-FC5D3FAC17DA}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_DST_NET_GUID = {15E55670-55DB-4e90-A78C-DD6D7C2CDA91}
const DIRECTACCESS_TRANSITIONTECHNOLOGIES2LOCAL_SYSTEMRULE_USER_SET_GUID = {304BFD05-6C0A-41ec-A221-9F22772A00DF}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_TEREDO_SERVER_PROTOCOL_GUID = {5CA34A97-A55E-410A-A27A-08D76F0C54AB}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_GUID = {F67A524D-D3D7-44A7-9A23-C18812E67239}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_IPV6_OVER_IPV4_TUNNEL_PROTOCOL_GUID = {9C3A4D9E-26E2-41E2-994D-1D5EECF7AB80}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_SRC_NET_GUID = {345278FC-EA86-42B2-98A7-DCD47EADC7F1}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_DST_NET_GUID = {46E1B596-3339-4653-8EB4-0F65F1E80168}
const DIRECTACCESS_TRANSITIONTECHNOLOGIESFROMLOCAL_SYSTEMRULE_USER_SET_GUID = {405A89C1-6B81-49F2-B871-A3F447A9F2A3}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_GUID = {86176618-C17E-459c-B024-6BAD88FE95BA}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_DONE_PROTOCOL_GUID = {43F62DFD-D3F6-4b00-8C3F-9DA6B49AEEA9}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_QUERY_PROTOCOL_GUID = {63726F50-3BFB-4a94-90DA-241B4562C59C}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_REPORT_PROTOCOL_GUID = {80BF4CA7-7469-4bf7-8EA6-23208BF89FBC}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_LISTENER_REPORT_V2_PROTOCOL_GUID = {B6DB61F7-7491-40b9-B943-198944238C7E}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_ADV_PROTOCOL_GUID = {2C10F0AF-8CB7-47d7-A011-FE644C84BDBF}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_SOLICIT_PROTOCOL_GUID = {B404AB3F-7353-4677-A865-75BF9B48064E}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_MULTICAST_ROUTER_TERMINATION_PROTOCOL_GUID = {D9F4A5A1-E7AC-4206-AB85-9E2F1651B17F}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_NEIGHBOR_ADV_PROTOCOL_GUID = {C38968CC-E6CF-4620-A668-657566CAB408}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_NEIGHBOR_SOLICIT_PROTOCOL_GUID = {39C42361-AFCF-4dab-A9E0-46CCDCA456CB}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_ROUTER_ADV_PROTOCOL_GUID = {6C20D618-0EF9-4855-B8A9-B618524D16F2}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_ROUTER_SOLICIT_PROTOCOL_GUID = {1B0607A8-818F-4c8e-B551-CD868C4CB2C4}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_ECHO_PROTOCOL_GUID = {5B2AF7F1-BD66-45c0-9AC3-C57ACE40C9CA}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_LLMNR_PROTOCOL_GUID = {1B460A88-1599-4ba9-878D-DB1C82E4DC40}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_IKE_SERVER_PROTOCOL_GUID = {52EB6449-C75A-4450-9049-4359938DBDC0}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_IKE_CLIENT_PROTOCOL_GUID = {DD18CB0D-16CA-470d-90FB-1F9A5A269A00}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_DHCPV6_PROTOCOL_GUID = {09033378-FE9C-426f-A5AD-781CA8DD966B}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_SRC_NET_GUID = {3D207AAE-3063-44f7-BB26-27A229E64AF8}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_DST_NET_GUID = {F2D2B81B-5EA6-4398-A946-851EED415BB0}
const DIRECTACCESS_IPV6NETWORKS2LOCAL_SYSTEMRULE_USER_SET_GUID = {2CF457BF-3FEA-4b82-87A2-5735B72B1AF4}

const DIRECTACCESS_LOCAL2IPV6NETWORKS_SYSTEMRULE_GUID = {4D1502B8-4724-4a2d-919F-CFCB1BFB44E8}
const DIRECTACCESS_LOCAL2IPV6NETWORKS_SYSTEMRULE_ANY_PROTOCOL_GUID = {9DA9FC3A-AE77-4a44-8AFA-7B6397496800}
const DIRECTACCESS_LOCAL2IPV6NETWORKS_SYSTEMRULE_SRC_NET_GUID = {8A399E9E-5BFF-4532-81F0-DC3E910051CD}
const DIRECTACCESS_LOCAL2IPV6NETWORKS_SYSTEMRULE_DST_NET_GUID = {CA2BBA66-1F19-47df-85B2-F682C6912F42}
const DIRECTACCESS_LOCAL2IPV6NETWORKS_SYSTEMRULE_USER_SET_GUID = {EE487AB0-1FBE-4edb-8EF9-8CC43FC18FC1}

'

' External components GUIDs

'

const IDS_Stirling_ExternalComponent_GUID = {52BB7550-CDEE-4ef5-8649-D3B3CDCC3AAE}
