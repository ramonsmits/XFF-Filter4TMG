
/*++

    Copyright (c) Microsoft Corporation. All rights reserved.  
    THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. 
    THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER. 
    USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

// MMC Node types

#ifndef FPC_NODESGUIDS_H
#define FPC_NODESGUIDS_H


#define FPC_CCM_INSERTIONPOINTID (CCM_INSERTIONPOINTID_MASK_SHARED | CCM_INSERTIONPOINTID_MASK_ADD_PRIMARY | CCM_INSERTIONPOINTID_MASK_ADD_3RDPARTY + 1)



// Root Scope
static const GUID GUID_Root_Scope =
	{ 0x43E06AFC, 0x729B, 0x49AB, { 0x8B, 0xC2, 0x33, 0xA9, 0xE3, 0x5B, 0xB1, 0x2D } };
#define Root_Scope_GUID          "43E06AFC-729B-49AB-8BC2-33A9E35BB12D"
#define Root_Scope_GUIDW        L"43E06AFC-729B-49AB-8BC2-33A9E35BB12D"


// Enterprise Scope
static const GUID GUID_Enterprise_Scope =
	{ 0xA1BBE9DF, 0x1CFB, 0x47BE, { 0x92, 0x6D, 0xCD, 0x01, 0xAC, 0x2A, 0xAA, 0x38 } };
#define Enterprise_Scope_GUID          "A1BBE9DF-1CFB-47BE-926D-CD01AC2AAA38"
#define Enterprise_Scope_GUIDW        L"A1BBE9DF-1CFB-47BE-926D-CD01AC2AAA38"


// Arrays Scope
static const GUID GUID_Arrays_Scope =
	{ 0x69E98DAF, 0xCCD8, 0x4DA4, { 0x8F, 0xFD, 0x86, 0x4F, 0xD2, 0xA8, 0x96, 0xEA } };
#define Arrays_Scope_GUID          "69E98DAF-CCD8-4DA4-8FFD-864FD2A896EA"
#define Arrays_Scope_GUIDW        L"69E98DAF-CCD8-4DA4-8FFD-864FD2A896EA"


// Enterprise Networks Scope
static const GUID GUID_Enterprise_Networks_Scope =
	{ 0x906D1867, 0xDEFA, 0x4054, { 0x8D, 0x79, 0x61, 0x9D, 0xF5, 0x56, 0x03, 0x72 } };
#define Enterprise_Networks_Scope_GUID          "906D1867-DEFA-4054-8D79-619DF5560372"
#define Enterprise_Networks_Scope_GUIDW        L"906D1867-DEFA-4054-8D79-619DF5560372"


// Array Scope
static const GUID GUID_Array_Scope =
	{ 0x41223021, 0x4684, 0x4CF4, { 0xBD, 0x24, 0x4A, 0xD7, 0x1F, 0xFC, 0x44, 0x45 } };
#define Array_Scope_GUID          "41223021-4684-4CF4-BD24-4AD71FFC4445"
#define Array_Scope_GUIDW        L"41223021-4684-4CF4-BD24-4AD71FFC4445"


// Local Machine Scope class
static const GUID GUID_Local_Machine_Scope_class =
	{ 0x632D062C, 0xE3C1, 0x4857, { 0x84, 0x69, 0xEC, 0xC8, 0x9C, 0x6C, 0xAC, 0x8E } };
#define Local_Machine_Scope_class_GUID          "632D062C-E3C1-4857-8469-ECC89C6CAC8E"
#define Local_Machine_Scope_class_GUIDW        L"632D062C-E3C1-4857-8469-ECC89C6CAC8E"


// Local NICs collection class
static const GUID GUID_Local_NICs_collection_class =
	{ 0xD4C7C7A2, 0x0CE9, 0x443B, { 0x91, 0x23, 0x59, 0xE6, 0xD9, 0xB5, 0x06, 0x33 } };
#define Local_NICs_collection_class_GUID          "D4C7C7A2-0CE9-443B-9123-59E6D9B50633"
#define Local_NICs_collection_class_GUIDW        L"D4C7C7A2-0CE9-443B-9123-59E6D9B50633"


// Local NIC Node class
static const GUID GUID_Local_NIC_Node_class =
	{ 0xCE3C7529, 0xC7F0, 0x4423, { 0xBE, 0x59, 0xF9, 0x2B, 0xD0, 0xAE, 0xEC, 0xF7 } };
#define Local_NIC_Node_class_GUID          "CE3C7529-C7F0-4423-BE59-F92BD0AEECF7"
#define Local_NIC_Node_class_GUIDW        L"CE3C7529-C7F0-4423-BE59-F92BD0AEECF7"


// Base routes collection class
static const GUID GUID_Base_routes_collection_class =
	{ 0xD1624D6A, 0x6447, 0x45CF, { 0x81, 0x18, 0x0A, 0x85, 0x9A, 0x6F, 0xDF, 0xAB } };
#define Base_routes_collection_class_GUID          "D1624D6A-6447-45CF-8118-0A859A6FDFAB"
#define Base_routes_collection_class_GUIDW        L"D1624D6A-6447-45CF-8118-0A859A6FDFAB"


// Server routes collection class
static const GUID GUID_Server_routes_collection_class =
	{ 0x80D51094, 0xFC75, 0x4397, { 0x9A, 0xDA, 0x33, 0x28, 0xFB, 0x1D, 0xE6, 0xCC } };
#define Server_routes_collection_class_GUID          "80D51094-FC75-4397-9ADA-3328FB1DE6CC"
#define Server_routes_collection_class_GUIDW        L"80D51094-FC75-4397-9ADA-3328FB1DE6CC"


// A server route node class
static const GUID GUID_A_server_route_node_class =
	{ 0xA51F2BD5, 0x2100, 0x4128, { 0x89, 0x81, 0x26, 0xAA, 0x4C, 0x51, 0xD7, 0x32 } };
#define A_server_route_node_class_GUID          "A51F2BD5-2100-4128-8981-26AA4C51D732"
#define A_server_route_node_class_GUIDW        L"A51F2BD5-2100-4128-8981-26AA4C51D732"


// Array routes collection class
static const GUID GUID_Array_routes_collection_class =
	{ 0xD9E584E6, 0x7EF7, 0x4541, { 0xB3, 0x7B, 0x23, 0xAF, 0x95, 0x86, 0x2C, 0x3D } };
#define Array_routes_collection_class_GUID          "D9E584E6-7EF7-4541-B37B-23AF95862C3D"
#define Array_routes_collection_class_GUIDW        L"D9E584E6-7EF7-4541-B37B-23AF95862C3D"


// An array route node class
static const GUID GUID_An_array_route_node_class =
	{ 0x2BACD4FC, 0x0097, 0x4912, { 0x96, 0x2A, 0x97, 0x83, 0x15, 0x2D, 0xDD, 0x1B } };
#define An_array_route_node_class_GUID          "2BACD4FC-0097-4912-962A-9783152DDD1B"
#define An_array_route_node_class_GUIDW        L"2BACD4FC-0097-4912-962A-9783152DDD1B"


// Enterprise Policies Scope
static const GUID GUID_Enterprise_Policies_Scope =
	{ 0xCFBE7274, 0x55BC, 0x488C, { 0xB6, 0xA8, 0x3D, 0x92, 0xB2, 0x62, 0x73, 0x3F } };
#define Enterprise_Policies_Scope_GUID          "CFBE7274-55BC-488C-B6A8-3D92B262733F"
#define Enterprise_Policies_Scope_GUIDW        L"CFBE7274-55BC-488C-B6A8-3D92B262733F"


// Enterprise Policies Collection
static const GUID GUID_Enterprise_Policies_Collection =
	{ 0x305273F5, 0x1677, 0x47EA, { 0x82, 0x2D, 0xFE, 0x78, 0x25, 0x65, 0x75, 0xDC } };
#define Enterprise_Policies_Collection_GUID          "305273F5-1677-47EA-822D-FE78256575DC"
#define Enterprise_Policies_Collection_GUIDW        L"305273F5-1677-47EA-822D-FE78256575DC"


// Enterprise Policies Item
static const GUID GUID_Enterprise_Policies_Item =
	{ 0x29161CAE, 0x635F, 0x488E, { 0xA7, 0xEF, 0x91, 0x6C, 0xAC, 0x6E, 0x06, 0x8E } };
#define Enterprise_Policies_Item_GUID          "29161CAE-635F-488E-A7EF-916CAC6E068E"
#define Enterprise_Policies_Item_GUIDW        L"29161CAE-635F-488E-A7EF-916CAC6E068E"


// Enterprise Policy Scope
static const GUID GUID_Enterprise_Policy_Scope =
	{ 0xBFFBAAE7, 0x099C, 0x443E, { 0x96, 0xBE, 0x29, 0x8B, 0x09, 0xCC, 0x9E, 0x25 } };
#define Enterprise_Policy_Scope_GUID          "BFFBAAE7-099C-443E-96BE-298B09CC9E25"
#define Enterprise_Policy_Scope_GUIDW        L"BFFBAAE7-099C-443E-96BE-298B09CC9E25"


// Enterprise Policy Rules before array policy
static const GUID GUID_Enterprise_Policy_Rules_before_array_policy =
	{ 0x1EC6C41F, 0x8B56, 0x4219, { 0x9C, 0x00, 0x7E, 0xFB, 0x1A, 0xD0, 0x12, 0xDC } };
#define Enterprise_Policy_Rules_before_array_policy_GUID          "1EC6C41F-8B56-4219-9C00-7EFB1AD012DC"
#define Enterprise_Policy_Rules_before_array_policy_GUIDW        L"1EC6C41F-8B56-4219-9C00-7EFB1AD012DC"


// Enterprise Policy Rules after array policy
static const GUID GUID_Enterprise_Policy_Rules_after_array_policy =
	{ 0x6DFC8AF2, 0x2B52, 0x4F85, { 0x83, 0xC9, 0xA6, 0x5C, 0xA4, 0xB2, 0x81, 0xE2 } };
#define Enterprise_Policy_Rules_after_array_policy_GUID          "6DFC8AF2-2B52-4F85-83C9-A65CA4B281E2"
#define Enterprise_Policy_Rules_after_array_policy_GUIDW        L"6DFC8AF2-2B52-4F85-83C9-A65CA4B281E2"


// Enterprise Policy Rules placeholder for array rules
static const GUID GUID_Enterprise_Policy_Rules_placeholder_for_array_rules =
	{ 0x132A0521, 0x58E1, 0x4E00, { 0xA0, 0xAB, 0x71, 0x17, 0x63, 0xEB, 0x6D, 0x01 } };
#define Enterprise_Policy_Rules_placeholder_for_array_rules_GUID          "132A0521-58E1-4E00-A0AB-711763EB6D01"
#define Enterprise_Policy_Rules_placeholder_for_array_rules_GUIDW        L"132A0521-58E1-4E00-A0AB-711763EB6D01"


// Enterprise Policy Built in Rules
static const GUID GUID_Enterprise_Policy_Built_in_Rules =
	{ 0xE34DA3DD, 0xD10D, 0x4136, { 0xA1, 0xD9, 0xFC, 0x1A, 0xC6, 0x03, 0x87, 0x11 } };
#define Enterprise_Policy_Built_in_Rules_GUID          "E34DA3DD-D10D-4136-A1D9-FC1AC6038711"
#define Enterprise_Policy_Built_in_Rules_GUIDW        L"E34DA3DD-D10D-4136-A1D9-FC1AC6038711"


// Enterprise Policy Rule representing array rules placeholder
static const GUID GUID_Enterprise_Policy_Rule_representing_array_rules_placeholder =
	{ 0x422CB8F3, 0x0997, 0x4244, { 0xBC, 0xBB, 0x1F, 0xC3, 0xD1, 0x4A, 0xAC, 0x3E } };
#define Enterprise_Policy_Rule_representing_array_rules_placeholder_GUID          "422CB8F3-0997-4244-BCBB-1FC3D14AAC3E"
#define Enterprise_Policy_Rule_representing_array_rules_placeholder_GUIDW        L"422CB8F3-0997-4244-BCBB-1FC3D14AAC3E"


// Enterprise Policy Rule
static const GUID GUID_Enterprise_Policy_Rule =
	{ 0xE960FD40, 0x27F3, 0x44FF, { 0xB6, 0x18, 0x38, 0x6B, 0x43, 0x1A, 0x61, 0xED } };
#define Enterprise_Policy_Rule_GUID          "E960FD40-27F3-44FF-B618-386B431A61ED"
#define Enterprise_Policy_Rule_GUIDW        L"E960FD40-27F3-44FF-B618-386B431A61ED"


// Enterprise Policy Default Rule
static const GUID GUID_Enterprise_Policy_Default_Rule =
	{ 0x2E2CCE3C, 0xC4AE, 0x4923, { 0x86, 0x7D, 0xAD, 0x6A, 0xF8, 0x22, 0xED, 0xB2 } };
#define Enterprise_Policy_Default_Rule_GUID          "2E2CCE3C-C4AE-4923-867D-AD6AF822EDB2"
#define Enterprise_Policy_Default_Rule_GUIDW        L"2E2CCE3C-C4AE-4923-867D-AD6AF822EDB2"


// Firewall Policy Scope
static const GUID GUID_Firewall_Policy_Scope =
	{ 0xCAB89263, 0xC55E, 0x4492, { 0x95, 0x8B, 0xC2, 0x47, 0x23, 0x08, 0x33, 0x20 } };
#define Firewall_Policy_Scope_GUID          "CAB89263-C55E-4492-958B-C24723083320"
#define Firewall_Policy_Scope_GUIDW        L"CAB89263-C55E-4492-958B-C24723083320"


// Policy Rule Item
static const GUID GUID_Policy_Rule_Item =
	{ 0x9F1DBD83, 0x12D1, 0x408C, { 0xBD, 0x4C, 0x6A, 0x5E, 0xFE, 0x48, 0x66, 0xD1 } };
#define Policy_Rule_Item_GUID          "9F1DBD83-12D1-408C-BD4C-6A5EFE4866D1"
#define Policy_Rule_Item_GUIDW        L"9F1DBD83-12D1-408C-BD4C-6A5EFE4866D1"


// Policy Rules Collection Array
static const GUID GUID_Policy_Rules_Collection_Array =
	{ 0x904AF5AB, 0x43A5, 0x4D91, { 0x97, 0x3F, 0xEA, 0x36, 0xA8, 0x01, 0xC2, 0xC6 } };
#define Policy_Rules_Collection_Array_GUID          "904AF5AB-43A5-4D91-973F-EA36A801C2C6"
#define Policy_Rules_Collection_Array_GUIDW        L"904AF5AB-43A5-4D91-973F-EA36A801C2C6"


// Policy Rules Collection System
static const GUID GUID_Policy_Rules_Collection_System =
	{ 0x9ABAD875, 0xA653, 0x4DC1, { 0x99, 0x97, 0x87, 0x13, 0xA9, 0xDE, 0x01, 0xAD } };
#define Policy_Rules_Collection_System_GUID          "9ABAD875-A653-4DC1-9997-8713A9DE01AD"
#define Policy_Rules_Collection_System_GUIDW        L"9ABAD875-A653-4DC1-9997-8713A9DE01AD"


// VPN Scope
static const GUID GUID_VPN_Scope =
	{ 0xEB601D5F, 0x8909, 0x48DB, { 0x8F, 0xA8, 0xCC, 0xAD, 0x1B, 0xA8, 0x95, 0xDD } };
#define VPN_Scope_GUID          "EB601D5F-8909-48DB-8FA8-CCAD1BA895DD"
#define VPN_Scope_GUIDW        L"EB601D5F-8909-48DB-8FA8-CCAD1BA895DD"


// VPN Site to site networks collection
static const GUID GUID_VPN_Site_to_site_networks_collection =
	{ 0xBD325A51, 0xDB15, 0x4730, { 0xA4, 0x14, 0xE0, 0x48, 0x63, 0x50, 0xDC, 0xB8 } };
#define VPN_Site_to_site_networks_collection_GUID          "BD325A51-DB15-4730-A414-E0486350DCB8"
#define VPN_Site_to_site_networks_collection_GUIDW        L"BD325A51-DB15-4730-A414-E0486350DCB8"


// Configuration Scope
static const GUID GUID_Configuration_Scope =
	{ 0x7A461DD2, 0x311D, 0x43F9, { 0x86, 0x86, 0xE9, 0xCB, 0x4E, 0x23, 0x03, 0x09 } };
#define Configuration_Scope_GUID          "7A461DD2-311D-43F9-8686-E9CB4E230309"
#define Configuration_Scope_GUIDW        L"7A461DD2-311D-43F9-8686-E9CB4E230309"


// AddIns Scope
static const GUID GUID_AddIns_Scope =
	{ 0xDF766C48, 0xC4FF, 0x4AB5, { 0xAD, 0x91, 0x07, 0x7D, 0xDD, 0xEA, 0x44, 0xBA } };
#define AddIns_Scope_GUID          "DF766C48-C4FF-4AB5-AD91-077DDDEA44BA"
#define AddIns_Scope_GUIDW        L"DF766C48-C4FF-4AB5-AD91-077DDDEA44BA"


// Enterprise AddIns Scope
static const GUID GUID_Enterprise_AddIns_Scope =
	{ 0x9CBCBAB6, 0x08B3, 0x4010, { 0x8C, 0x86, 0xE6, 0x39, 0xF9, 0x4C, 0x19, 0x75 } };
#define Enterprise_AddIns_Scope_GUID          "9CBCBAB6-08B3-4010-8C86-E639F94C1975"
#define Enterprise_AddIns_Scope_GUIDW        L"9CBCBAB6-08B3-4010-8C86-E639F94C1975"


// Application Filter Item
static const GUID GUID_Application_Filter_Item =
	{ 0x4A5749E9, 0xFC71, 0x4BD9, { 0x9E, 0x44, 0xF7, 0xF7, 0x6D, 0x0B, 0xE1, 0xB8 } };
#define Application_Filter_Item_GUID          "4A5749E9-FC71-4BD9-9E44-F7F76D0BE1B8"
#define Application_Filter_Item_GUIDW        L"4A5749E9-FC71-4BD9-9E44-F7F76D0BE1B8"


// CEnterprise Application Filter Item
static const GUID GUID_CEnterprise_Application_Filter_Item =
	{ 0x5B555711, 0xE6C5, 0x4B93, { 0x98, 0x1F, 0x28, 0x35, 0x97, 0x9E, 0xC1, 0x10 } };
#define CEnterprise_Application_Filter_Item_GUID          "5B555711-E6C5-4B93-981F-2835979EC110"
#define CEnterprise_Application_Filter_Item_GUIDW        L"5B555711-E6C5-4B93-981F-2835979EC110"


// Web Filter Item
static const GUID GUID_Web_Filter_Item =
	{ 0x0828ADE3, 0x80DD, 0x49E1, { 0xA2, 0xB5, 0xEC, 0xCE, 0x11, 0x74, 0xB3, 0x49 } };
#define Web_Filter_Item_GUID          "0828ADE3-80DD-49E1-A2B5-ECCE1174B349"
#define Web_Filter_Item_GUIDW        L"0828ADE3-80DD-49E1-A2B5-ECCE1174B349"


// Enterprise Web Filter Item
static const GUID GUID_Enterprise_Web_Filter_Item =
	{ 0xBF412308, 0x9319, 0x4F19, { 0xAB, 0x45, 0x9B, 0x16, 0xF5, 0xA8, 0x33, 0x3F } };
#define Enterprise_Web_Filter_Item_GUID          "BF412308-9319-4F19-AB45-9B16F5A8333F"
#define Enterprise_Web_Filter_Item_GUIDW        L"BF412308-9319-4F19-AB45-9B16F5A8333F"


// Servers Scope
static const GUID GUID_Servers_Scope =
	{ 0x884551A0, 0x0D13, 0x4B07, { 0xB9, 0x88, 0x9C, 0x4E, 0x91, 0xC3, 0x0F, 0x3B } };
#define Servers_Scope_GUID          "884551A0-0D13-4B07-B988-9C4E91C30F3B"
#define Servers_Scope_GUIDW        L"884551A0-0D13-4B07-B988-9C4E91C30F3B"


// Server Item
static const GUID GUID_Server_Item =
	{ 0x3A9F32A5, 0x2BDF, 0x4C86, { 0xBC, 0xD3, 0xB7, 0x66, 0xED, 0x0B, 0x8E, 0xBE } };
#define Server_Item_GUID          "3A9F32A5-2BDF-4C86-BCD3-B766ED0B8EBE"
#define Server_Item_GUIDW        L"3A9F32A5-2BDF-4C86-BCD3-B766ED0B8EBE"


// Array Networks Collection
static const GUID GUID_Array_Networks_Collection =
	{ 0x5782ABCD, 0x18CD, 0x43DC, { 0xB4, 0x07, 0xF4, 0xE7, 0x39, 0xD1, 0xDA, 0xBA } };
#define Array_Networks_Collection_GUID          "5782ABCD-18CD-43DC-B407-F4E739D1DABA"
#define Array_Networks_Collection_GUIDW        L"5782ABCD-18CD-43DC-B407-F4E739D1DABA"


// Enterprise Networks Collection
static const GUID GUID_Enterprise_Networks_Collection =
	{ 0xE86F00A6, 0x7531, 0x44CB, { 0x9F, 0x64, 0xEE, 0x02, 0xC0, 0xBF, 0x39, 0x56 } };
#define Enterprise_Networks_Collection_GUID          "E86F00A6-7531-44CB-9F64-EE02C0BF3956"
#define Enterprise_Networks_Collection_GUIDW        L"E86F00A6-7531-44CB-9F64-EE02C0BF3956"


// Array Network Rules Collection
static const GUID GUID_Array_Network_Rules_Collection =
	{ 0x34EA699F, 0xBE78, 0x486A, { 0xAA, 0x86, 0x29, 0x11, 0xF8, 0x63, 0x0B, 0x0F } };
#define Array_Network_Rules_Collection_GUID          "34EA699F-BE78-486A-AA86-2911F8630B0F"
#define Array_Network_Rules_Collection_GUIDW        L"34EA699F-BE78-486A-AA86-2911F8630B0F"


// Enterprise Network Rules Collection
static const GUID GUID_Enterprise_Network_Rules_Collection =
	{ 0x7C15872F, 0xA738, 0x4671, { 0x86, 0x1A, 0x30, 0x78, 0x8C, 0x51, 0xA8, 0xB1 } };
#define Enterprise_Network_Rules_Collection_GUID          "7C15872F-A738-4671-861A-30788C51A8B1"
#define Enterprise_Network_Rules_Collection_GUIDW        L"7C15872F-A738-4671-861A-30788C51A8B1"


// Networks Scope
static const GUID GUID_Networks_Scope =
	{ 0x57E67A24, 0x4EBC, 0x4F39, { 0xB2, 0x95, 0xBB, 0x42, 0x7C, 0xDB, 0x37, 0x0B } };
#define Networks_Scope_GUID          "57E67A24-4EBC-4F39-B295-BB427CDB370B"
#define Networks_Scope_GUIDW        L"57E67A24-4EBC-4F39-B295-BB427CDB370B"


// Address Translation Rule Item
static const GUID GUID_Address_Translation_Rule_Item =
	{ 0x92C518D8, 0x776C, 0x4379, { 0xB7, 0x25, 0xDF, 0xC5, 0xC7, 0xC0, 0x67, 0xA3 } };
#define Address_Translation_Rule_Item_GUID          "92C518D8-776C-4379-B725-DFC5C7C067A3"
#define Address_Translation_Rule_Item_GUIDW        L"92C518D8-776C-4379-B725-DFC5C7C067A3"


// Enterprise Address Translation Rule Item
static const GUID GUID_Enterprise_Address_Translation_Rule_Item =
	{ 0xDF10C104, 0xC050, 0x4113, { 0xBD, 0xFA, 0x6A, 0x05, 0xC5, 0x6B, 0xD2, 0x75 } };
#define Enterprise_Address_Translation_Rule_Item_GUID          "DF10C104-C050-4113-BDFA-6A05C56BD275"
#define Enterprise_Address_Translation_Rule_Item_GUIDW        L"DF10C104-C050-4113-BDFA-6A05C56BD275"


// Web Routing Rule Item
static const GUID GUID_Web_Routing_Rule_Item =
	{ 0x7E735B2B, 0x2B2F, 0x484E, { 0xB1, 0x86, 0xF1, 0x3C, 0x8C, 0x60, 0xE8, 0xD6 } };
#define Web_Routing_Rule_Item_GUID          "7E735B2B-2B2F-484E-B186-F13C8C60E8D6"
#define Web_Routing_Rule_Item_GUIDW        L"7E735B2B-2B2F-484E-B186-F13C8C60E8D6"


// Compression Rule Item
static const GUID GUID_Compression_Rule_Item =
	{ 0x852B9298, 0x6D5E, 0x42EC, { 0xA5, 0x2D, 0x44, 0x72, 0x8D, 0xD9, 0xEE, 0xD7 } };
#define Compression_Rule_Item_GUID          "852B9298-6D5E-42EC-A52D-44728DD9EED7"
#define Compression_Rule_Item_GUIDW        L"852B9298-6D5E-42EC-A52D-44728DD9EED7"


// General Scope
static const GUID GUID_General_Scope =
	{ 0xB9FE792D, 0x76C3, 0x4AEA, { 0x84, 0x7F, 0xBA, 0x66, 0x1A, 0xC2, 0x8A, 0xD1 } };
#define General_Scope_GUID          "B9FE792D-76C3-4AEA-847F-BA661AC28AD1"
#define General_Scope_GUIDW        L"B9FE792D-76C3-4AEA-847F-BA661AC28AD1"


// Network Item
static const GUID GUID_Network_Item =
	{ 0x42AAB0B5, 0x19B7, 0x4229, { 0xAE, 0x54, 0x2B, 0x47, 0x9C, 0xE9, 0x85, 0xF2 } };
#define Network_Item_GUID          "42AAB0B5-19B7-4229-AE54-2B479CE985F2"
#define Network_Item_GUIDW        L"42AAB0B5-19B7-4229-AE54-2B479CE985F2"


// Enterprise Network Item
static const GUID GUID_Enterprise_Network_Item =
	{ 0xA656E5C7, 0x0B13, 0x462A, { 0xBA, 0x2C, 0x95, 0x96, 0xB1, 0x24, 0x7C, 0x56 } };
#define Enterprise_Network_Item_GUID          "A656E5C7-0B13-462A-BA2C-9596B1247C56"
#define Enterprise_Network_Item_GUIDW        L"A656E5C7-0B13-462A-BA2C-9596B1247C56"


// Network Set Item
static const GUID GUID_Network_Set_Item =
	{ 0x078CE6B5, 0xEEC0, 0x4DA7, { 0x80, 0xF5, 0x85, 0xDB, 0x0D, 0x5C, 0x40, 0x21 } };
#define Network_Set_Item_GUID          "078CE6B5-EEC0-4DA7-80F5-85DB0D5C4021"
#define Network_Set_Item_GUIDW        L"078CE6B5-EEC0-4DA7-80F5-85DB0D5C4021"


// Computer Item
static const GUID GUID_Computer_Item =
	{ 0x586B984B, 0xC983, 0x47D6, { 0xB7, 0x7A, 0x84, 0xCC, 0x58, 0xBC, 0x40, 0xD2 } };
#define Computer_Item_GUID          "586B984B-C983-47D6-B77A-84CC58BC40D2"
#define Computer_Item_GUIDW        L"586B984B-C983-47D6-B77A-84CC58BC40D2"


// Computer Set Item
static const GUID GUID_Computer_Set_Item =
	{ 0xAE2F45D2, 0xFA44, 0x46CD, { 0x85, 0xDF, 0x9B, 0x5E, 0x9B, 0xA1, 0xE8, 0xC7 } };
#define Computer_Set_Item_GUID          "AE2F45D2-FA44-46CD-85DF-9B5E9BA1E8C7"
#define Computer_Set_Item_GUIDW        L"AE2F45D2-FA44-46CD-85DF-9B5E9BA1E8C7"


// Address Range Item
static const GUID GUID_Address_Range_Item =
	{ 0xC4D2C0A8, 0x51BD, 0x4E32, { 0x9C, 0xC6, 0x18, 0xEC, 0xA6, 0xD3, 0xB6, 0x6F } };
#define Address_Range_Item_GUID          "C4D2C0A8-51BD-4E32-9CC6-18ECA6D3B66F"
#define Address_Range_Item_GUIDW        L"C4D2C0A8-51BD-4E32-9CC6-18ECA6D3B66F"


// Subnet Item
static const GUID GUID_Subnet_Item =
	{ 0x817559CA, 0x6DF6, 0x4C43, { 0xA7, 0xA4, 0x12, 0x16, 0x50, 0xF0, 0xA6, 0xA3 } };
#define Subnet_Item_GUID          "817559CA-6DF6-4C43-A7A4-121650F0A6A3"
#define Subnet_Item_GUIDW        L"817559CA-6DF6-4C43-A7A4-121650F0A6A3"


// URL Category Item
static const GUID GUID_URL_Category_Item =
	{ 0xE9702917, 0x7F5F, 0x4DAE, { 0xAC, 0x4A, 0x11, 0xFA, 0xB6, 0xBB, 0x0B, 0x00 } };
#define URL_Category_Item_GUID          "E9702917-7F5F-4DAE-AC4A-11FAB6BB0B00"
#define URL_Category_Item_GUIDW        L"E9702917-7F5F-4DAE-AC4A-11FAB6BB0B00"


// URL Category Set Item
static const GUID GUID_URL_Category_Set_Item =
	{ 0x7B9F893A, 0x6989, 0x45A3, { 0x89, 0xB5, 0xEA, 0xEC, 0x7E, 0x45, 0x1E, 0x52 } };
#define URL_Category_Set_Item_GUID          "7B9F893A-6989-45A3-89B5-EAEC7E451E52"
#define URL_Category_Set_Item_GUIDW        L"7B9F893A-6989-45A3-89B5-EAEC7E451E52"


// URL Set Item
static const GUID GUID_URL_Set_Item =
	{ 0xA2F94302, 0xCF4D, 0x4F3F, { 0xB2, 0xF6, 0x39, 0x70, 0xE5, 0xD7, 0x11, 0xFF } };
#define URL_Set_Item_GUID          "A2F94302-CF4D-4F3F-B2F6-3970E5D711FF"
#define URL_Set_Item_GUIDW        L"A2F94302-CF4D-4F3F-B2F6-3970E5D711FF"


// Domain Name Set Item
static const GUID GUID_Domain_Name_Set_Item =
	{ 0x7271654B, 0x5017, 0x4BC0, { 0xA5, 0x77, 0x18, 0x27, 0x67, 0xB6, 0x0E, 0x67 } };
#define Domain_Name_Set_Item_GUID          "7271654B-5017-4BC0-A577-182767B60E67"
#define Domain_Name_Set_Item_GUIDW        L"7271654B-5017-4BC0-A577-182767B60E67"


// Web Listener Item
static const GUID GUID_Web_Listener_Item =
	{ 0x12A7CCB5, 0x2FAA, 0x4BE7, { 0xB7, 0x56, 0x52, 0x62, 0x6F, 0xFB, 0x7A, 0xD7 } };
#define Web_Listener_Item_GUID          "12A7CCB5-2FAA-4BE7-B756-52626FFB7AD7"
#define Web_Listener_Item_GUIDW        L"12A7CCB5-2FAA-4BE7-B756-52626FFB7AD7"


// Server Farm Item
static const GUID GUID_Server_Farm_Item =
	{ 0x86797C7B, 0xCF38, 0x4D54, { 0xAA, 0xD8, 0xB3, 0x6B, 0x37, 0xB8, 0xF3, 0x9C } };
#define Server_Farm_Item_GUID          "86797C7B-CF38-4D54-AAD8-B36B37B8F39C"
#define Server_Farm_Item_GUIDW        L"86797C7B-CF38-4D54-AAD8-B36B37B8F39C"


// Schedule Item
static const GUID GUID_Schedule_Item =
	{ 0x258D4A4B, 0xF468, 0x446C, { 0xA9, 0x0A, 0x2A, 0x0F, 0x85, 0x4A, 0xE4, 0x24 } };
#define Schedule_Item_GUID          "258D4A4B-F468-446C-A90A-2A0F854AE424"
#define Schedule_Item_GUIDW        L"258D4A4B-F468-446C-A90A-2A0F854AE424"


// Protocol Item
static const GUID GUID_Protocol_Item =
	{ 0xC7B10495, 0x1501, 0x467F, { 0x93, 0x20, 0xBB, 0x73, 0x22, 0x85, 0x52, 0x59 } };
#define Protocol_Item_GUID          "C7B10495-1501-467F-9320-BB7322855259"
#define Protocol_Item_GUIDW        L"C7B10495-1501-467F-9320-BB7322855259"


// User Set Item
static const GUID GUID_User_Set_Item =
	{ 0xE0EB0239, 0xC4B7, 0x4500, { 0xA2, 0x73, 0xDC, 0xF7, 0xE7, 0x08, 0x09, 0x8D } };
#define User_Set_Item_GUID          "E0EB0239-C4B7-4500-A273-DCF7E708098D"
#define User_Set_Item_GUIDW        L"E0EB0239-C4B7-4500-A273-DCF7E708098D"


// Content Type Item
static const GUID GUID_Content_Type_Item =
	{ 0x69050B0D, 0x45F4, 0x4BE0, { 0xB9, 0x24, 0x89, 0x43, 0xB8, 0xC0, 0x0C, 0x6A } };
#define Content_Type_Item_GUID          "69050B0D-45F4-4BE0-B924-8943B8C00C6A"
#define Content_Type_Item_GUIDW        L"69050B0D-45F4-4BE0-B924-8943B8C00C6A"


// Cache Scope
static const GUID GUID_Cache_Scope =
	{ 0x16DCA601, 0xE902, 0x4655, { 0x8B, 0xCB, 0x44, 0x3B, 0x76, 0x69, 0x6C, 0x01 } };
#define Cache_Scope_GUID          "16DCA601-E902-4655-8BCB-443B76696C01"
#define Cache_Scope_GUIDW        L"16DCA601-E902-4655-8BCB-443B76696C01"


// Scheduled Content Download Item
static const GUID GUID_Scheduled_Content_Download_Item =
	{ 0x4C2B4D2C, 0xE563, 0x42DF, { 0xA1, 0xC2, 0xF8, 0xAC, 0xA9, 0x8A, 0x70, 0xC9 } };
#define Scheduled_Content_Download_Item_GUID          "4C2B4D2C-E563-42DF-A1C2-F8ACA98A70C9"
#define Scheduled_Content_Download_Item_GUIDW        L"4C2B4D2C-E563-42DF-A1C2-F8ACA98A70C9"


// Cache Drive Item
static const GUID GUID_Cache_Drive_Item =
	{ 0xA122ABEC, 0x4808, 0x41BF, { 0x80, 0x1E, 0x71, 0x0E, 0x22, 0x05, 0x47, 0x5F } };
#define Cache_Drive_Item_GUID          "A122ABEC-4808-41BF-801E-710E2205475F"
#define Cache_Drive_Item_GUIDW        L"A122ABEC-4808-41BF-801E-710E2205475F"


// Cache Rule Item
static const GUID GUID_Cache_Rule_Item =
	{ 0xBF5E43AA, 0xD056, 0x416B, { 0x98, 0xE0, 0xCF, 0x08, 0x8F, 0x3D, 0xBB, 0x2B } };
#define Cache_Rule_Item_GUID          "BF5E43AA-D056-416B-98E0-CF088F3DBB2B"
#define Cache_Rule_Item_GUIDW        L"BF5E43AA-D056-416B-98E0-CF088F3DBB2B"


// Monitoring Scope
static const GUID GUID_Monitoring_Scope =
	{ 0x1FC3773B, 0xC941, 0x450C, { 0xBA, 0x39, 0x22, 0x49, 0x04, 0xEF, 0xD0, 0x93 } };
#define Monitoring_Scope_GUID          "1FC3773B-C941-450C-BA39-224904EFD093"
#define Monitoring_Scope_GUIDW        L"1FC3773B-C941-450C-BA39-224904EFD093"


// Dashboard Alerts Collection
static const GUID GUID_Dashboard_Alerts_Collection =
	{ 0x69039453, 0xE693, 0x4058, { 0x82, 0x71, 0x1F, 0x12, 0x6C, 0x6E, 0x27, 0xA1 } };
#define Dashboard_Alerts_Collection_GUID          "69039453-E693-4058-8271-1F126C6E27A1"
#define Dashboard_Alerts_Collection_GUIDW        L"69039453-E693-4058-8271-1F126C6E27A1"


// Dashboard Signaled Alert Item
static const GUID GUID_Dashboard_Signaled_Alert_Item =
	{ 0xDBB8D29F, 0xC42F, 0x46EA, { 0xB8, 0x22, 0x7C, 0x0F, 0xD3, 0x8E, 0x3F, 0x52 } };
#define Dashboard_Signaled_Alert_Item_GUID          "DBB8D29F-C42F-46EA-B822-7C0FD38E3F52"
#define Dashboard_Signaled_Alert_Item_GUIDW        L"DBB8D29F-C42F-46EA-B822-7C0FD38E3F52"


// Dashboard Alert Item
static const GUID GUID_Dashboard_Alert_Item =
	{ 0x4E127E1E, 0x9475, 0x4EE5, { 0x8B, 0x37, 0x79, 0x2A, 0x05, 0x73, 0xD3, 0xAA } };
#define Dashboard_Alert_Item_GUID          "4E127E1E-9475-4EE5-8B37-792A0573D3AA"
#define Dashboard_Alert_Item_GUIDW        L"4E127E1E-9475-4EE5-8B37-792A0573D3AA"


// Dashboard Sessions Collection
static const GUID GUID_Dashboard_Sessions_Collection =
	{ 0x42D4AF87, 0xDC29, 0x478B, { 0x90, 0x38, 0x7C, 0xCE, 0x08, 0x35, 0xFB, 0x8B } };
#define Dashboard_Sessions_Collection_GUID          "42D4AF87-DC29-478B-9038-7CCE0835FB8B"
#define Dashboard_Sessions_Collection_GUIDW        L"42D4AF87-DC29-478B-9038-7CCE0835FB8B"


// Dashboard Session Item specific type
static const GUID GUID_Dashboard_Session_Item_specific_type =
	{ 0x1A567C24, 0x8038, 0x4641, { 0x97, 0x97, 0x68, 0x62, 0x98, 0xFF, 0xEA, 0xDE } };
#define Dashboard_Session_Item_specific_type_GUID          "1A567C24-8038-4641-9797-686298FFEADE"
#define Dashboard_Session_Item_specific_type_GUIDW        L"1A567C24-8038-4641-9797-686298FFEADE"


// Dashboard Session Item per server
static const GUID GUID_Dashboard_Session_Item_per_server =
	{ 0x7ACD4220, 0x8DAB, 0x4516, { 0x96, 0x3D, 0xD6, 0x15, 0x96, 0x79, 0x5B, 0xDD } };
#define Dashboard_Session_Item_per_server_GUID          "7ACD4220-8DAB-4516-963D-D61596795BDD"
#define Dashboard_Session_Item_per_server_GUIDW        L"7ACD4220-8DAB-4516-963D-D61596795BDD"


// Dashboard Services Collection
static const GUID GUID_Dashboard_Services_Collection =
	{ 0x5C4E04FA, 0x247A, 0x4668, { 0x99, 0x2A, 0x10, 0x06, 0x0D, 0x1F, 0x5B, 0xE7 } };
#define Dashboard_Services_Collection_GUID          "5C4E04FA-247A-4668-992A-10060D1F5BE7"
#define Dashboard_Services_Collection_GUIDW        L"5C4E04FA-247A-4668-992A-10060D1F5BE7"


// Dashboard Service Item
static const GUID GUID_Dashboard_Service_Item =
	{ 0xA0F0ADBF, 0x4A08, 0x4F68, { 0x82, 0xFD, 0xE2, 0xC6, 0xF3, 0xDB, 0x86, 0xD6 } };
#define Dashboard_Service_Item_GUID          "A0F0ADBF-4A08-4F68-82FD-E2C6F3DB86D6"
#define Dashboard_Service_Item_GUIDW        L"A0F0ADBF-4A08-4F68-82FD-E2C6F3DB86D6"


// Dashboard Perfmon Legend
static const GUID GUID_Dashboard_Perfmon_Legend =
	{ 0x844D2034, 0x5C43, 0x4BD3, { 0x98, 0x85, 0x5A, 0xCC, 0xCB, 0x87, 0xCB, 0x2D } };
#define Dashboard_Perfmon_Legend_GUID          "844D2034-5C43-4BD3-9885-5ACCCB87CB2D"
#define Dashboard_Perfmon_Legend_GUIDW        L"844D2034-5C43-4BD3-9885-5ACCCB87CB2D"


// Dashboard Perfmon Legend Item
static const GUID GUID_Dashboard_Perfmon_Legend_Item =
	{ 0x254076D6, 0xDFCE, 0x4C40, { 0xB1, 0x94, 0xBD, 0x20, 0x33, 0x82, 0x1C, 0x72 } };
#define Dashboard_Perfmon_Legend_Item_GUID          "254076D6-DFCE-4C40-B194-BD2033821C72"
#define Dashboard_Perfmon_Legend_Item_GUIDW        L"254076D6-DFCE-4C40-B194-BD2033821C72"


// Services Collection Tab
static const GUID GUID_Services_Collection_Tab =
	{ 0xA271438E, 0x34C6, 0x4EB6, { 0xAA, 0xF7, 0x4F, 0x8F, 0xD2, 0xC7, 0x4C, 0x95 } };
#define Services_Collection_Tab_GUID          "A271438E-34C6-4EB6-AAF7-4F8FD2C74C95"
#define Services_Collection_Tab_GUIDW        L"A271438E-34C6-4EB6-AAF7-4F8FD2C74C95"


// Service Item
static const GUID GUID_Service_Item =
	{ 0x1F4F4D72, 0xA437, 0x48ED, { 0x87, 0x52, 0xC4, 0x88, 0x76, 0x36, 0xA2, 0x2D } };
#define Service_Item_GUID          "1F4F4D72-A437-48ED-8752-C4887636A22D"
#define Service_Item_GUIDW        L"1F4F4D72-A437-48ED-8752-C4887636A22D"


// Services Collection
static const GUID GUID_Services_Collection =
	{ 0xFABA2836, 0xD5EC, 0x4BCC, { 0x85, 0x3F, 0x9A, 0xF5, 0x10, 0x2A, 0xAC, 0x24 } };
#define Services_Collection_GUID          "FABA2836-D5EC-4BCC-853F-9AF5102AAC24"
#define Services_Collection_GUIDW        L"FABA2836-D5EC-4BCC-853F-9AF5102AAC24"


// Services Group Caption
static const GUID GUID_Services_Group_Caption =
	{ 0x9039CE6F, 0xEE07, 0x412A, { 0x82, 0xEF, 0x32, 0xA7, 0x5F, 0xAA, 0xDD, 0x8C } };
#define Services_Group_Caption_GUID          "9039CE6F-EE07-412A-82EF-32A75FAADD8C"
#define Services_Group_Caption_GUIDW        L"9039CE6F-EE07-412A-82EF-32A75FAADD8C"


// Distribution Tab
static const GUID GUID_Distribution_Tab =
	{ 0x22FC5422, 0x67B6, 0x431B, { 0x86, 0xF6, 0xA4, 0xCA, 0xAD, 0xA8, 0xCB, 0x52 } };
#define Distribution_Tab_GUID          "22FC5422-67B6-431B-86F6-A4CAADA8CB52"
#define Distribution_Tab_GUIDW        L"22FC5422-67B6-431B-86F6-A4CAADA8CB52"


// Distribution status Item
static const GUID GUID_Distribution_status_Item =
	{ 0xC28C2823, 0x275B, 0x49F0, { 0xAD, 0x31, 0x39, 0xB7, 0x55, 0x5C, 0x58, 0x6B } };
#define Distribution_status_Item_GUID          "C28C2823-275B-49F0-AD31-39B7555C586B"
#define Distribution_status_Item_GUIDW        L"C28C2823-275B-49F0-AD31-39B7555C586B"


// Sessions Collection
static const GUID GUID_Sessions_Collection =
	{ 0x8427D867, 0x2452, 0x4B04, { 0xAF, 0xA2, 0xB9, 0x25, 0x08, 0x44, 0x85, 0x53 } };
#define Sessions_Collection_GUID          "8427D867-2452-4B04-AFA2-B92508448553"
#define Sessions_Collection_GUIDW        L"8427D867-2452-4B04-AFA2-B92508448553"


// Session Item
static const GUID GUID_Session_Item =
	{ 0xAE05C0A9, 0x5A8A, 0x4369, { 0x9E, 0x43, 0xFD, 0xBE, 0x82, 0xC7, 0x9A, 0x55 } };
#define Session_Item_GUID          "AE05C0A9-5A8A-4369-9E43-FDBE82C79A55"
#define Session_Item_GUIDW        L"AE05C0A9-5A8A-4369-9E43-FDBE82C79A55"


// Log Entry Item
static const GUID GUID_Log_Entry_Item =
	{ 0x4F74641C, 0x77C2, 0x40B1, { 0x94, 0xD2, 0x9A, 0xC8, 0x85, 0x1B, 0x59, 0x1E } };
#define Log_Entry_Item_GUID          "4F74641C-77C2-40B1-94D2-9AC8851B591E"
#define Log_Entry_Item_GUIDW        L"4F74641C-77C2-40B1-94D2-9AC8851B591E"


// Logging Collection
static const GUID GUID_Logging_Collection =
	{ 0xFBDEC32D, 0x461A, 0x4575, { 0x97, 0x84, 0x07, 0x6F, 0x3C, 0x68, 0xEF, 0xD9 } };
#define Logging_Collection_GUID          "FBDEC32D-461A-4575-9784-076F3C68EFD9"
#define Logging_Collection_GUIDW        L"FBDEC32D-461A-4575-9784-076F3C68EFD9"


// Track Changes Collection
static const GUID GUID_Track_Changes_Collection =
	{ 0x09B2FE5D, 0xC20E, 0x4B55, { 0xA0, 0x54, 0xE9, 0xEF, 0xE8, 0x4B, 0x73, 0x35 } };
#define Track_Changes_Collection_GUID          "09B2FE5D-C20E-4B55-A054-E9EFE84B7335"
#define Track_Changes_Collection_GUIDW        L"09B2FE5D-C20E-4B55-A054-E9EFE84B7335"


// Alerts Collection
static const GUID GUID_Alerts_Collection =
	{ 0xB918D0BC, 0xFD24, 0x4456, { 0x82, 0x4F, 0x2F, 0x37, 0x3D, 0xFB, 0xD9, 0x19 } };
#define Alerts_Collection_GUID          "B918D0BC-FD24-4456-824F-2F373DFBD919"
#define Alerts_Collection_GUIDW        L"B918D0BC-FD24-4456-824F-2F373DFBD919"


// Signaled Alert Item
static const GUID GUID_Signaled_Alert_Item =
	{ 0x7F3AD8C8, 0x41E3, 0x457F, { 0x87, 0xF6, 0xC6, 0xEC, 0x76, 0x3B, 0xEB, 0xF5 } };
#define Signaled_Alert_Item_GUID          "7F3AD8C8-41E3-457F-87F6-C6EC763BEBF5"
#define Signaled_Alert_Item_GUIDW        L"7F3AD8C8-41E3-457F-87F6-C6EC763BEBF5"


// Signaled Alert Instance Item
static const GUID GUID_Signaled_Alert_Instance_Item =
	{ 0x3626144A, 0x2A79, 0x4208, { 0xA3, 0x4A, 0x22, 0xB0, 0xD4, 0xF2, 0x4F, 0x61 } };
#define Signaled_Alert_Instance_Item_GUID          "3626144A-2A79-4208-A34A-22B0D4F24F61"
#define Signaled_Alert_Instance_Item_GUIDW        L"3626144A-2A79-4208-A34A-22B0D4F24F61"


// Ready Reports Collection
static const GUID GUID_Ready_Reports_Collection =
	{ 0x6B93E94B, 0x48B0, 0x4861, { 0x9D, 0x12, 0x1B, 0x37, 0x98, 0xAE, 0x58, 0x7D } };
#define Ready_Reports_Collection_GUID          "6B93E94B-48B0-4861-9D12-1B3798AE587D"
#define Ready_Reports_Collection_GUIDW        L"6B93E94B-48B0-4861-9D12-1B3798AE587D"


// Report Jobs Collection
static const GUID GUID_Report_Jobs_Collection =
	{ 0x59203C78, 0x251E, 0x45CA, { 0xB6, 0xFF, 0x98, 0x49, 0xC3, 0xEA, 0x17, 0x43 } };
#define Report_Jobs_Collection_GUID          "59203C78-251E-45CA-B6FF-9849C3EA1743"
#define Report_Jobs_Collection_GUIDW        L"59203C78-251E-45CA-B6FF-9849C3EA1743"


// Ready Report Tab Item
static const GUID GUID_Ready_Report_Tab_Item =
	{ 0x6203AFBC, 0x5A1B, 0x402C, { 0xBA, 0x04, 0xFF, 0xDF, 0x81, 0x43, 0xC3, 0xEE } };
#define Ready_Report_Tab_Item_GUID          "6203AFBC-5A1B-402C-BA04-FFDF8143C3EE"
#define Ready_Report_Tab_Item_GUIDW        L"6203AFBC-5A1B-402C-BA04-FFDF8143C3EE"


// Ready Report Tab Item From Report Job
static const GUID GUID_Ready_Report_Tab_Item_From_Report_Job =
	{ 0xE9E6DB37, 0x4C9E, 0x46B9, { 0xB3, 0xDF, 0x74, 0xF7, 0x10, 0x2E, 0x36, 0xEA } };
#define Ready_Report_Tab_Item_From_Report_Job_GUID          "E9E6DB37-4C9E-46B9-B3DF-74F7102E36EA"
#define Ready_Report_Tab_Item_From_Report_Job_GUIDW        L"E9E6DB37-4C9E-46B9-B3DF-74F7102E36EA"


// Ready Report Jobs Collection From Report Job
static const GUID GUID_Ready_Report_Jobs_Collection_From_Report_Job =
	{ 0xCD75B4DC, 0x4DCB, 0x430D, { 0x8E, 0xF9, 0x68, 0xE1, 0x44, 0xBD, 0x96, 0x23 } };
#define Ready_Report_Jobs_Collection_From_Report_Job_GUID          "CD75B4DC-4DCB-430D-8EF9-68E144BD9623"
#define Ready_Report_Jobs_Collection_From_Report_Job_GUIDW        L"CD75B4DC-4DCB-430D-8EF9-68E144BD9623"


// Ready Report Item
static const GUID GUID_Ready_Report_Item =
	{ 0x80D07990, 0x868E, 0x4712, { 0x99, 0xB5, 0xAC, 0x6D, 0x27, 0x0F, 0xE6, 0xD5 } };
#define Ready_Report_Item_GUID          "80D07990-868E-4712-99B5-AC6D270FE6D5"
#define Ready_Report_Item_GUIDW        L"80D07990-868E-4712-99B5-AC6D270FE6D5"


// Dashboard Ready Report Item
static const GUID GUID_Dashboard_Ready_Report_Item =
	{ 0xB4BBEB5D, 0xEB3A, 0x4424, { 0xA9, 0xC8, 0x71, 0x7A, 0x24, 0x0A, 0xAE, 0xFF } };
#define Dashboard_Ready_Report_Item_GUID          "B4BBEB5D-EB3A-4424-A9C8-717A240AAEFF"
#define Dashboard_Ready_Report_Item_GUIDW        L"B4BBEB5D-EB3A-4424-A9C8-717A240AAEFF"


// Dashboard Reports Collection
static const GUID GUID_Dashboard_Reports_Collection =
	{ 0x2B080CE8, 0x2F95, 0x4A9B, { 0x9A, 0x61, 0xEA, 0x0E, 0xD7, 0xEC, 0x43, 0xC8 } };
#define Dashboard_Reports_Collection_GUID          "2B080CE8-2F95-4A9B-9A61-EA0ED7EC43C8"
#define Dashboard_Reports_Collection_GUIDW        L"2B080CE8-2F95-4A9B-9A61-EA0ED7EC43C8"


// Connectivity Collection
static const GUID GUID_Connectivity_Collection =
	{ 0x005897FC, 0x4F23, 0x4EFA, { 0x80, 0x7B, 0xEE, 0x74, 0x5B, 0x9A, 0xE6, 0xDD } };
#define Connectivity_Collection_GUID          "005897FC-4F23-4EFA-807B-EE745B9AE6DD"
#define Connectivity_Collection_GUIDW        L"005897FC-4F23-4EFA-807B-EE745B9AE6DD"


// Server Farms Connectivity Collection
static const GUID GUID_Server_Farms_Connectivity_Collection =
	{ 0x005897FC, 0x4F23, 0x4EFA, { 0x80, 0x7B, 0xEE, 0x74, 0x5B, 0x9A, 0xE6, 0xDD } };
#define Server_Farms_Connectivity_Collection_GUID          "005897FC-4F23-4EFA-807B-EE745B9AE6DD"
#define Server_Farms_Connectivity_Collection_GUIDW        L"005897FC-4F23-4EFA-807B-EE745B9AE6DD"


// Connectivity Item
static const GUID GUID_Connectivity_Item =
	{ 0x3D2447C5, 0xC3E8, 0x4D9D, { 0x9F, 0x29, 0x1B, 0x2E, 0xA7, 0x90, 0x65, 0x86 } };
#define Connectivity_Item_GUID          "3D2447C5-C3E8-4D9D-9F29-1B2EA7906586"
#define Connectivity_Item_GUIDW        L"3D2447C5-C3E8-4D9D-9F29-1B2EA7906586"


// Connectivity Server Item
static const GUID GUID_Connectivity_Server_Item =
	{ 0x9A5065E5, 0x3F57, 0x4FD6, { 0x80, 0x05, 0x72, 0xF3, 0xBF, 0x94, 0xD5, 0x57 } };
#define Connectivity_Server_Item_GUID          "9A5065E5-3F57-4FD6-8005-72F3BF94D557"
#define Connectivity_Server_Item_GUIDW        L"9A5065E5-3F57-4FD6-8005-72F3BF94D557"


// Dashboard Connectivity Collection
static const GUID GUID_Dashboard_Connectivity_Collection =
	{ 0x8ECCDC5F, 0x878A, 0x466E, { 0xB2, 0x60, 0x8F, 0x3F, 0xB7, 0xC2, 0x3D, 0x86 } };
#define Dashboard_Connectivity_Collection_GUID          "8ECCDC5F-878A-466E-B260-8F3FB7C23D86"
#define Dashboard_Connectivity_Collection_GUIDW        L"8ECCDC5F-878A-466E-B260-8F3FB7C23D86"


// Dashboard Connectivity Item
static const GUID GUID_Dashboard_Connectivity_Item =
	{ 0x4709BA24, 0x94AC, 0x4634, { 0x8D, 0x3A, 0x26, 0xD7, 0x7B, 0x4C, 0x1A, 0xEE } };
#define Dashboard_Connectivity_Item_GUID          "4709BA24-94AC-4634-8D3A-26D77B4C1AEE"
#define Dashboard_Connectivity_Item_GUIDW        L"4709BA24-94AC-4634-8D3A-26D77B4C1AEE"


// Dashboard Network Status Collection
static const GUID GUID_Dashboard_Network_Status_Collection =
	{ 0x9ABAD00C, 0x12A1, 0x447A, { 0xAB, 0x2A, 0xFD, 0xA6, 0x5E, 0x42, 0xF7, 0x68 } };
#define Dashboard_Network_Status_Collection_GUID          "9ABAD00C-12A1-447A-AB2A-FDA65E42F768"
#define Dashboard_Network_Status_Collection_GUIDW        L"9ABAD00C-12A1-447A-AB2A-FDA65E42F768"


// Dashboard ISP Item
static const GUID GUID_Dashboard_ISP_Item =
	{ 0x19FD921E, 0xBBDB, 0x4D98, { 0x85, 0x06, 0xB1, 0x6C, 0x32, 0x7D, 0xF0, 0x83 } };
#define Dashboard_ISP_Item_GUID          "19FD921E-BBDB-4D98-8506-B16C327DF083"
#define Dashboard_ISP_Item_GUIDW        L"19FD921E-BBDB-4D98-8506-B16C327DF083"


// Dashboard Network Status Connectivity Item
static const GUID GUID_Dashboard_Network_Status_Connectivity_Item =
	{ 0x96B111F2, 0xABF2, 0x410D, { 0x92, 0x8A, 0x5D, 0x7E, 0x88, 0x2A, 0x7A, 0xA2 } };
#define Dashboard_Network_Status_Connectivity_Item_GUID          "96B111F2-ABF2-410D-928A-5D7E882A7AA2"
#define Dashboard_Network_Status_Connectivity_Item_GUIDW        L"96B111F2-ABF2-410D-928A-5D7E882A7AA2"


// Dashboard Protection Counters Collection
static const GUID GUID_Dashboard_Protection_Counters_Collection =
	{ 0xEF4E6279, 0xD5F2, 0x4C39, { 0x8D, 0xE6, 0x7E, 0x06, 0x8B, 0x3B, 0x2C, 0x57 } };
#define Dashboard_Protection_Counters_Collection_GUID          "EF4E6279-D5F2-4C39-8DE6-7E068B3B2C57"
#define Dashboard_Protection_Counters_Collection_GUIDW        L"EF4E6279-D5F2-4C39-8DE6-7E068B3B2C57"


// Dashboard Protection Counter Item
static const GUID GUID_Dashboard_Protection_Counter_Item =
	{ 0xE1CE8C62, 0x2E1B, 0x4B4F, { 0x81, 0xC5, 0x1E, 0xD4, 0xAF, 0xE0, 0x8C, 0x64 } };
#define Dashboard_Protection_Counter_Item_GUID          "E1CE8C62-2E1B-4B4F-81C5-1ED4AFE08C64"
#define Dashboard_Protection_Counter_Item_GUIDW        L"E1CE8C62-2E1B-4B4F-81C5-1ED4AFE08C64"


// IPS Scope
static const GUID GUID_IPS_Scope =
	{ 0xCCA9EDF5, 0x7C79, 0x4839, { 0xB7, 0x3E, 0xCB, 0x6A, 0xC6, 0x38, 0x2C, 0xCB } };
#define IPS_Scope_GUID          "CCA9EDF5-7C79-4839-B73E-CB6AC6382CCB"
#define IPS_Scope_GUIDW        L"CCA9EDF5-7C79-4839-B73E-CB6AC6382CCB"


// Network Inspection System (NIS) Tab
static const GUID GUID_Network_Inspection_System_NIS_Tab =
	{ 0x96FE989A, 0x428A, 0x4E57, { 0xA0, 0x2F, 0x8A, 0x8E, 0x56, 0x9C, 0xBC, 0xF5 } };
#define Network_Inspection_System_NIS_Tab_GUID          "96FE989A-428A-4E57-A02F-8A8E569CBCF5"
#define Network_Inspection_System_NIS_Tab_GUIDW        L"96FE989A-428A-4E57-A02F-8A8E569CBCF5"


// Stirling IPS Tab
static const GUID GUID_Stirling_IPS_Tab =
	{ 0x226D5ECF, 0xD0CF, 0x4016, { 0xA3, 0x93, 0x66, 0x05, 0xC5, 0x30, 0x2D, 0xC9 } };
#define Stirling_IPS_Tab_GUID          "226D5ECF-D0CF-4016-A393-6605C5302DC9"
#define Stirling_IPS_Tab_GUIDW        L"226D5ECF-D0CF-4016-A393-6605C5302DC9"


// Behavioral Intrusion Detection Tab
static const GUID GUID_Behavioral_Intrusion_Detection_Tab =
	{ 0xFC5D32DB, 0x99AC, 0x4603, { 0x8A, 0xAA, 0x2E, 0xEF, 0xD8, 0x6B, 0x7D, 0x9F } };
#define Behavioral_Intrusion_Detection_Tab_GUID          "FC5D32DB-99AC-4603-8AAA-2EEFD86B7D9F"
#define Behavioral_Intrusion_Detection_Tab_GUIDW        L"FC5D32DB-99AC-4603-8AAA-2EEFD86B7D9F"


// Network Inspection System (NIS) Signature Collection
static const GUID GUID_Network_Inspection_System_NIS_Signature_Collection =
	{ 0xC251FFAE, 0x11C9, 0x44FE, { 0x93, 0xC0, 0xA0, 0x5B, 0xE2, 0x8F, 0xDA, 0xF3 } };
#define Network_Inspection_System_NIS_Signature_Collection_GUID          "C251FFAE-11C9-44FE-93C0-A05BE28FDAF3"
#define Network_Inspection_System_NIS_Signature_Collection_GUIDW        L"C251FFAE-11C9-44FE-93C0-A05BE28FDAF3"


// Network Inspection System (NIS) Signature Item
static const GUID GUID_Network_Inspection_System_NIS_Signature_Item =
	{ 0x566883B2, 0x081D, 0x431B, { 0xB4, 0xFE, 0x2F, 0x59, 0x60, 0x09, 0xD7, 0xF4 } };
#define Network_Inspection_System_NIS_Signature_Item_GUID          "566883B2-081D-431B-B4FE-2F596009D7F4"
#define Network_Inspection_System_NIS_Signature_Item_GUIDW        L"566883B2-081D-431B-B4FE-2F596009D7F4"


// Update Center Scope
static const GUID GUID_Update_Center_Scope =
	{ 0xA1D27D3E, 0x0030, 0x4486, { 0xA6, 0xFE, 0x1A, 0xAE, 0x77, 0xC0, 0x1E, 0x3A } };
#define Update_Center_Scope_GUID          "A1D27D3E-0030-4486-A6FE-1AAE77C01E3A"
#define Update_Center_Scope_GUIDW        L"A1D27D3E-0030-4486-A6FE-1AAE77C01E3A"


// Signature Updates Tab
static const GUID GUID_Signature_Updates_Tab =
	{ 0x87D2ADB4, 0xEA69, 0x4F1C, { 0x9B, 0xF4, 0x32, 0xC6, 0xAB, 0x77, 0x79, 0x93 } };
#define Signature_Updates_Tab_GUID          "87D2ADB4-EA69-4F1C-9BF4-32C6AB777993"
#define Signature_Updates_Tab_GUIDW        L"87D2ADB4-EA69-4F1C-9BF4-32C6AB777993"


// Update Services Collection
static const GUID GUID_Update_Services_Collection =
	{ 0xD02DE631, 0x03FC, 0x4367, { 0xA7, 0x4A, 0xB6, 0xD6, 0x0C, 0xA1, 0x5E, 0x04 } };
#define Update_Services_Collection_GUID          "D02DE631-03FC-4367-A74A-B6D60CA15E04"
#define Update_Services_Collection_GUIDW        L"D02DE631-03FC-4367-A74A-B6D60CA15E04"


// Update Service Item
static const GUID GUID_Update_Service_Item =
	{ 0x12CADF61, 0xC7F7, 0x4F4C, { 0xAD, 0x83, 0xF4, 0xCD, 0x7A, 0xD9, 0x7B, 0xBE } };
#define Update_Service_Item_GUID          "12CADF61-C7F7-4F4C-AD83-F4CD7AD97BBE"
#define Update_Service_Item_GUIDW        L"12CADF61-C7F7-4F4C-AD83-F4CD7AD97BBE"


// Update Service Caption Item
static const GUID GUID_Update_Service_Caption_Item =
	{ 0xF07A9BEA, 0x8E94, 0x4DEE, { 0x9A, 0xC0, 0x04, 0x0E, 0x85, 0xEE, 0x1B, 0x4A } };
#define Update_Service_Caption_Item_GUID          "F07A9BEA-8E94-4DEE-9AC0-040E85EE1B4A"
#define Update_Service_Caption_Item_GUIDW        L"F07A9BEA-8E94-4DEE-9AC0-040E85EE1B4A"


// Dashboard Update Services Collection
static const GUID GUID_Dashboard_Update_Services_Collection =
	{ 0x320807D0, 0xE6FB, 0x4694, { 0x9C, 0x66, 0xA7, 0x86, 0xCE, 0xD9, 0x00, 0x8D } };
#define Dashboard_Update_Services_Collection_GUID          "320807D0-E6FB-4694-9C66-A786CED9008D"
#define Dashboard_Update_Services_Collection_GUIDW        L"320807D0-E6FB-4694-9C66-A786CED9008D"


// Dashboard Scope
static const GUID GUID_Dashboard_Scope =
	{ 0xF1BF89DE, 0x2B7A, 0x4BF4, { 0x99, 0x44, 0x05, 0x43, 0x4F, 0xC5, 0x85, 0x4F } };
#define Dashboard_Scope_GUID          "F1BF89DE-2B7A-4BF4-9944-05434FC5854F"
#define Dashboard_Scope_GUIDW        L"F1BF89DE-2B7A-4BF4-9944-05434FC5854F"


// Dashboard Update Service Item
static const GUID GUID_Dashboard_Update_Service_Item =
	{ 0x33A996FF, 0xB53F, 0x4A57, { 0xB4, 0x79, 0xCA, 0x5D, 0xA9, 0x2B, 0x20, 0xE8 } };
#define Dashboard_Update_Service_Item_GUID          "33A996FF-B53F-4A57-B479-CA5DA92B20E8"
#define Dashboard_Update_Service_Item_GUIDW        L"33A996FF-B53F-4A57-B479-CA5DA92B20E8"


// Email Protection Scope
static const GUID GUID_Email_Protection_Scope =
	{ 0xF18CA69A, 0x12FE, 0x4ED2, { 0x90, 0xC0, 0xF7, 0x33, 0x87, 0xFE, 0x5B, 0xAE } };
#define Email_Protection_Scope_GUID          "F18CA69A-12FE-4ED2-90C0-F73387FE5BAE"
#define Email_Protection_Scope_GUIDW        L"F18CA69A-12FE-4ED2-90C0-F73387FE5BAE"


// Logs and Reports Scope
static const GUID GUID_Logs_and_Reports_Scope =
	{ 0x7EDEC214, 0xB3C5, 0x49E7, { 0xB3, 0x20, 0xCE, 0x06, 0xD3, 0x27, 0xE0, 0x0D } };
#define Logs_and_Reports_Scope_GUID          "7EDEC214-B3C5-49E7-B320-CE06D327E00D"
#define Logs_and_Reports_Scope_GUIDW        L"7EDEC214-B3C5-49E7-B320-CE06D327E00D"


// Troubleshooting Scope
static const GUID GUID_Troubleshooting_Scope =
	{ 0x0B51477A, 0x0E40, 0x4415, { 0x83, 0x9F, 0xDB, 0xA3, 0xF0, 0x89, 0x53, 0xC2 } };
#define Troubleshooting_Scope_GUID          "0B51477A-0E40-4415-839F-DBA3F08953C2"
#define Troubleshooting_Scope_GUIDW        L"0B51477A-0E40-4415-839F-DBA3F08953C2"


// Web Access Scope
static const GUID GUID_Web_Access_Scope =
	{ 0x62BCAB3E, 0xED0E, 0x4BB2, { 0x9A, 0xC8, 0x5B, 0xF2, 0xB9, 0x5C, 0x33, 0x44 } };
#define Web_Access_Scope_GUID          "62BCAB3E-ED0E-4BB2-9AC8-5BF2B95C3344"
#define Web_Access_Scope_GUIDW        L"62BCAB3E-ED0E-4BB2-9AC8-5BF2B95C3344"


// Web Access Tab
static const GUID GUID_Web_Access_Tab =
	{ 0x725D23D0, 0x2A60, 0x4167, { 0x89, 0x92, 0x47, 0x37, 0x17, 0x2A, 0x08, 0xA8 } };
#define Web_Access_Tab_GUID          "725D23D0-2A60-4167-8992-4737172A08A8"
#define Web_Access_Tab_GUIDW        L"725D23D0-2A60-4167-8992-4737172A08A8"


// Web Access Rules Collection
static const GUID GUID_Web_Access_Rules_Collection =
	{ 0x6E792468, 0xEF88, 0x4A7F, { 0x94, 0xAF, 0xC8, 0xE2, 0xF4, 0x21, 0x56, 0xD5 } };
#define Web_Access_Rules_Collection_GUID          "6E792468-EF88-4A7F-94AF-C8E2F42156D5"
#define Web_Access_Rules_Collection_GUIDW        L"6E792468-EF88-4A7F-94AF-C8E2F42156D5"


// Web Access Rule Node
static const GUID GUID_Web_Access_Rule_Node =
	{ 0x9B2997A3, 0xD353, 0x4471, { 0xA0, 0x6B, 0x52, 0x14, 0xB1, 0x85, 0xE5, 0xDC } };
#define Web_Access_Rule_Node_GUID          "9B2997A3-D353-4471-A06B-5214B185E5DC"
#define Web_Access_Rule_Node_GUIDW        L"9B2997A3-D353-4471-A06B-5214B185E5DC"


// Troubleshooting Tab
static const GUID GUID_Troubleshooting_Tab =
	{ 0x813400F7, 0xDEC0, 0x4177, { 0x92, 0xDF, 0x72, 0x5E, 0x8E, 0xC2, 0xE8, 0x42 } };
#define Troubleshooting_Tab_GUID          "813400F7-DEC0-4177-92DF-725E8EC2E842"
#define Troubleshooting_Tab_GUIDW        L"813400F7-DEC0-4177-92DF-725E8EC2E842"


// SMTP Protection Server to Server Tab
static const GUID GUID_SMTP_Protection_Server_to_Server_Tab =
	{ 0xBFA83D93, 0x8249, 0x40F8, { 0x9D, 0x8A, 0x9E, 0x63, 0x4A, 0xD4, 0x6D, 0xDA } };
#define SMTP_Protection_Server_to_Server_Tab_GUID          "BFA83D93-8249-40F8-9D8A-9E634AD46DDA"
#define SMTP_Protection_Server_to_Server_Tab_GUIDW        L"BFA83D93-8249-40F8-9D8A-9E634AD46DDA"


// SMTP Protection Antispam Filtering Tab
static const GUID GUID_SMTP_Protection_Antispam_Filtering_Tab =
	{ 0x65248784, 0x0AE2, 0x4E21, { 0x93, 0xCE, 0x13, 0x98, 0x3C, 0xC9, 0x14, 0xC4 } };
#define SMTP_Protection_Antispam_Filtering_Tab_GUID          "65248784-0AE2-4E21-93CE-13983CC914C4"
#define SMTP_Protection_Antispam_Filtering_Tab_GUIDW        L"65248784-0AE2-4E21-93CE-13983CC914C4"


// SMTP Protection Content Filtering and Malware Protection Tab
static const GUID GUID_SMTP_Protection_Content_Filtering_and_Malware_Protection_Tab =
	{ 0xD98309CD, 0xC003, 0x4A83, { 0x88, 0x67, 0x40, 0x9E, 0x50, 0xD3, 0xAD, 0x4D } };
#define SMTP_Protection_Content_Filtering_and_Malware_Protection_Tab_GUID          "D98309CD-C003-4A83-8867-409E50D3AD4D"
#define SMTP_Protection_Content_Filtering_and_Malware_Protection_Tab_GUIDW        L"D98309CD-C003-4A83-8867-409E50D3AD4D"


// SMTP Protection General Tab
static const GUID GUID_SMTP_Protection_General_Tab =
	{ 0x3A1604CA, 0x8630, 0x4BD7, { 0xB0, 0xF0, 0xB1, 0x7E, 0x22, 0x4C, 0xA3, 0xFE } };
#define SMTP_Protection_General_Tab_GUID          "3A1604CA-8630-4BD7-B0F0-B17E224CA3FE"
#define SMTP_Protection_General_Tab_GUIDW        L"3A1604CA-8630-4BD7-B0F0-B17E224CA3FE"


// SMTP Routes Collection
static const GUID GUID_SMTP_Routes_Collection =
	{ 0xE66D33C7, 0xD012, 0x413E, { 0x9D, 0x01, 0x02, 0x87, 0xCC, 0xCE, 0x39, 0xAA } };
#define SMTP_Routes_Collection_GUID          "E66D33C7-D012-413E-9D01-0287CCCE39AA"
#define SMTP_Routes_Collection_GUIDW        L"E66D33C7-D012-413E-9D01-0287CCCE39AA"


// SMTP Routes Collection Item
static const GUID GUID_SMTP_Routes_Collection_Item =
	{ 0x7E15EF5F, 0xFCA2, 0x467D, { 0xB8, 0xFF, 0x5B, 0x73, 0xBE, 0xD5, 0x5D, 0x90 } };
#define SMTP_Routes_Collection_Item_GUID          "7E15EF5F-FCA2-467D-B8FF-5B73BED55D90"
#define SMTP_Routes_Collection_Item_GUIDW        L"7E15EF5F-FCA2-467D-B8FF-5B73BED55D90"


#endif
      
