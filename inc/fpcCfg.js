<%


/*****************************************************************************

   Copyright (c) Microsoft Corporation. All rights reserved.  
   THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. 
   THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER. 
   USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

 *****************************************************************************/

var fpcHTTP = 0;
var fpcFTP = 1;
var fpcSSL = 2;

var fpcWebServerThruHTTP = 0;
var fpcWebServerThruSSL = 1;
var fpcWebServerThruBothHTTPAndSSL = 2;
var fpcFTPServer = 3;

var fpcSessionAffinity = 0;
var fpcIPAffinity = 1;

var fpcFbaHTML4 = 0;
var fpcFbaCHTML = 1;
var fpcFbaXHTML_MP = 2;
var fpcFbaHTTPBASIC = 3;

var fpcPrimaryRouteDirect = 0;
var fpcPrimaryRouteUpstream = 1;
var fpcPrimaryRouteAlternate = 2;

var fpcBackupRouteNone = 0;
var fpcBackupRouteDirect = 1;
var fpcBackupRouteUpstream = 2;

var fpcUiAuthBasic = 0;
var fpcUiAuthIntegrated = 1;

var fpcDelegationNonePassThrough = 0;
var fpcDelegationNoneBlock = 1;
var fpcDelegationSecurID = 2;
var fpcDelegationBasic = 3;
var fpcDelegationNTLM = 4;
var fpcDelegationSPNEGO = 5;
var fpcDelegationKerberosConstrained = 6;

var fpcCredentialsDelegationDefault = 0;
var fpcCredentialsDelegationOnceForConnection = 1;
var fpcCredentialsDelegationForEachRequest = 2;

var fpcPersistentCookiesDisabled = 0;
var fpcPersistentCookiesEnabledForTrustedComputers = 1;
var fpcPersistentCookiesEnabledForAllComputers = 2;

var fpcPreventCachingOnPublicAndTrustedComputers = 0;
var fpcPreventCachingOnPublicComputers = 1;
var fpcPreventCachingOnNoClientComputers = 2;

var fpcPrimaryConnection = 0;
var fpcChaining = 1;

var fpcClientBackupRouteDirectToInternet = 0;
var fpcClientBackupRouteViaProxy = 1;

var fpcActiveCachingEmphasisOnFewerNetworkAccesses = 1;
var fpcActiveCachingNoEmphasis = 2;
var fpcActiveCachingEmphasisOnFasterUserResponse = 3;

var fpcAllowPacketsIpOptions = 0;
var fpcDenyPacketsIpOptions = 1;
var fpcDenyPacketsUnSelectedIpOptions = 2;
var fpcDenyPacketsSelectedIpOptions = 3;

var fpcPolicyRuleActionAllow = 0;
var fpcPolicyRuleActionDeny = 1;

var fpcPolicyRuleAccess = 0;
var fpcPolicyRuleServerPublishing = 1;
var fpcPolicyRuleWebPublishing = 2;
var fpcPolicyRuleArrayPolicyPlaceHolder = 0x100;

var fpcTimeInSeconds = 1;
var fpcTimeInMinutes = 2;
var fpcTimeInHours = 3;
var fpcTimeInDays = 4;
var fpcTimeInWeeks = 5;

var fpcALL_WEEK = -1;
var fpcSUN = 0;
var fpcMON = 1;
var fpcTUE = 2;
var fpcWED = 3;
var fpcTHU = 4;
var fpcFRI = 5;
var fpcSAT = 6;

var fpcALL_DAY = -1;
var fpcAM_12 = 0;
var fpcAM_1 = 1;
var fpcAM_2 = 2;
var fpcAM_3 = 3;
var fpcAM_4 = 4;
var fpcAM_5 = 5;
var fpcAM_6 = 6;
var fpcAM_7 = 7;
var fpcAM_8 = 8;
var fpcAM_9 = 9;
var fpcAM_10 = 10;
var fpcAM_11 = 11;
var fpcPM_12 = 12;
var fpcPM_1 = 13;
var fpcPM_2 = 14;
var fpcPM_3 = 15;
var fpcPM_4 = 16;
var fpcPM_5 = 17;
var fpcPM_6 = 18;
var fpcPM_7 = 19;
var fpcPM_8 = 20;
var fpcPM_9 = 21;
var fpcPM_10 = 22;
var fpcPM_11 = 23;

var fpcAlertActionLogEvent = 0;
var fpcAlertActionCommand = 1;
var fpcAlertActionSendMail = 2;
var fpcAlertActionStopServices = 3;
var fpcAlertActionStartServices = 4;

var fpcAccountTypeUser = 0;
var fpcAccountTypeGroup = 1;
var fpcAccountTypeDomain = 2;
var fpcAccountTypeAlias = 3;
var fpcAccountTypeWellKnownGroup = 4;
var fpcAccountTypeUnknown = 5;

var fpcInclude = 0;
var fpcExclude = 1;

var fpcRawProtocol0 = 0;
var fpcICMP = 1;
var fpcIGMP = 2;
var fpcGGP = 3;
var fpcIP = 4;
var fpcST = 5;
var fpcTCP = 6;
var fpcRawProtocol7 = 7;
var fpcRawProtocol8 = 8;
var fpcRawProtocol9 = 9;
var fpcRawProtocol10 = 10;
var fpcRawProtocol11 = 11;
var fpcRawProtocol12 = 12;
var fpcRawProtocol13 = 13;
var fpcRawProtocol14 = 14;
var fpcRawProtocol15 = 15;
var fpcRawProtocol16 = 16;
var fpcUDP = 17;
var fpcRawProtocol18 = 18;
var fpcRawProtocol19 = 19;
var fpcRawProtocol20 = 20;
var fpcRawProtocol21 = 21;
var fpcRawProtocol22 = 22;
var fpcRawProtocol23 = 23;
var fpcRawProtocol24 = 24;
var fpcRawProtocol25 = 25;
var fpcRawProtocol26 = 26;
var fpcRawProtocol27 = 27;
var fpcRawProtocol28 = 28;
var fpcRawProtocol29 = 29;
var fpcRawProtocol30 = 30;
var fpcRawProtocol31 = 31;
var fpcRawProtocol32 = 32;
var fpcRawProtocol33 = 33;
var fpcRawProtocol34 = 34;
var fpcRawProtocol35 = 35;
var fpcRawProtocol36 = 36;
var fpcRawProtocol37 = 37;
var fpcRawProtocol38 = 38;
var fpcRawProtocol39 = 39;
var fpcRawProtocol40 = 40;
var fpcRawProtocol41 = 41;
var fpcRawProtocol42 = 42;
var fpcRawProtocol43 = 43;
var fpcRawProtocol44 = 44;
var fpcRawProtocol45 = 45;
var fpcRawProtocol46 = 46;
var fpcRawProtocol47 = 47;
var fpcRawProtocol48 = 48;
var fpcRawProtocol49 = 49;
var fpcRawProtocol50 = 50;
var fpcRawProtocol51 = 51;
var fpcRawProtocol52 = 52;
var fpcRawProtocol53 = 53;
var fpcRawProtocol54 = 54;
var fpcRawProtocol55 = 55;
var fpcRawProtocol56 = 56;
var fpcRawProtocol57 = 57;
var fpcICMPv6 = 58;
var fpcRawProtocol59 = 59;
var fpcRawProtocol60 = 60;
var fpcRawProtocol61 = 61;
var fpcRawProtocol62 = 62;
var fpcRawProtocol63 = 63;
var fpcRawProtocol64 = 64;
var fpcRawProtocol65 = 65;
var fpcRawProtocol66 = 66;
var fpcRawProtocol67 = 67;
var fpcRawProtocol68 = 68;
var fpcRawProtocol69 = 69;
var fpcRawProtocol70 = 70;
var fpcRawProtocol71 = 71;
var fpcRawProtocol72 = 72;
var fpcRawProtocol73 = 73;
var fpcRawProtocol74 = 74;
var fpcRawProtocol75 = 75;
var fpcRawProtocol76 = 76;
var fpcRawProtocol77 = 77;
var fpcRawProtocol78 = 78;
var fpcRawProtocol79 = 79;
var fpcRawProtocol80 = 80;
var fpcRawProtocol81 = 81;
var fpcRawProtocol82 = 82;
var fpcRawProtocol83 = 83;
var fpcRawProtocol84 = 84;
var fpcRawProtocol85 = 85;
var fpcRawProtocol86 = 86;
var fpcRawProtocol87 = 87;
var fpcRawProtocol88 = 88;
var fpcRawProtocol89 = 89;
var fpcRawProtocol90 = 90;
var fpcRawProtocol91 = 91;
var fpcRawProtocol92 = 92;
var fpcRawProtocol93 = 93;
var fpcRawProtocol94 = 94;
var fpcRawProtocol95 = 95;
var fpcRawProtocol96 = 96;
var fpcRawProtocol97 = 97;
var fpcRawProtocol98 = 98;
var fpcRawProtocol99 = 99;
var fpcRawProtocol100 = 100;
var fpcRawProtocol101 = 101;
var fpcRawProtocol102 = 102;
var fpcRawProtocol103 = 103;
var fpcRawProtocol104 = 104;
var fpcRawProtocol105 = 105;
var fpcRawProtocol106 = 106;
var fpcRawProtocol107 = 107;
var fpcRawProtocol108 = 108;
var fpcRawProtocol109 = 109;
var fpcRawProtocol110 = 110;
var fpcRawProtocol111 = 111;
var fpcRawProtocol112 = 112;
var fpcRawProtocol113 = 113;
var fpcRawProtocol114 = 114;
var fpcRawProtocol115 = 115;
var fpcRawProtocol116 = 116;
var fpcRawProtocol117 = 117;
var fpcRawProtocol118 = 118;
var fpcRawProtocol119 = 119;
var fpcRawProtocol120 = 120;
var fpcRawProtocol121 = 121;
var fpcRawProtocol122 = 122;
var fpcRawProtocol123 = 123;
var fpcRawProtocol124 = 124;
var fpcRawProtocol125 = 125;
var fpcRawProtocol126 = 126;
var fpcRawProtocol127 = 127;
var fpcRawProtocol128 = 128;
var fpcRawProtocol129 = 129;
var fpcRawProtocol130 = 130;
var fpcRawProtocol131 = 131;
var fpcRawProtocol132 = 132;
var fpcRawProtocol133 = 133;
var fpcRawProtocol134 = 134;
var fpcRawProtocol135 = 135;
var fpcRawProtocol136 = 136;
var fpcRawProtocol137 = 137;
var fpcRawProtocol138 = 138;
var fpcRawProtocol139 = 139;
var fpcRawProtocol140 = 140;
var fpcRawProtocol141 = 141;
var fpcRawProtocol142 = 142;
var fpcRawProtocol143 = 143;
var fpcRawProtocol144 = 144;
var fpcRawProtocol145 = 145;
var fpcRawProtocol146 = 146;
var fpcRawProtocol147 = 147;
var fpcRawProtocol148 = 148;
var fpcRawProtocol149 = 149;
var fpcRawProtocol150 = 150;
var fpcRawProtocol151 = 151;
var fpcRawProtocol152 = 152;
var fpcRawProtocol153 = 153;
var fpcRawProtocol154 = 154;
var fpcRawProtocol155 = 155;
var fpcRawProtocol156 = 156;
var fpcRawProtocol157 = 157;
var fpcRawProtocol158 = 158;
var fpcRawProtocol159 = 159;
var fpcRawProtocol160 = 160;
var fpcRawProtocol161 = 161;
var fpcRawProtocol162 = 162;
var fpcRawProtocol163 = 163;
var fpcRawProtocol164 = 164;
var fpcRawProtocol165 = 165;
var fpcRawProtocol166 = 166;
var fpcRawProtocol167 = 167;
var fpcRawProtocol168 = 168;
var fpcRawProtocol169 = 169;
var fpcRawProtocol170 = 170;
var fpcRawProtocol171 = 171;
var fpcRawProtocol172 = 172;
var fpcRawProtocol173 = 173;
var fpcRawProtocol174 = 174;
var fpcRawProtocol175 = 175;
var fpcRawProtocol176 = 176;
var fpcRawProtocol177 = 177;
var fpcRawProtocol178 = 178;
var fpcRawProtocol179 = 179;
var fpcRawProtocol180 = 180;
var fpcRawProtocol181 = 181;
var fpcRawProtocol182 = 182;
var fpcRawProtocol183 = 183;
var fpcRawProtocol184 = 184;
var fpcRawProtocol185 = 185;
var fpcRawProtocol186 = 186;
var fpcRawProtocol187 = 187;
var fpcRawProtocol188 = 188;
var fpcRawProtocol189 = 189;
var fpcRawProtocol190 = 190;
var fpcRawProtocol191 = 191;
var fpcRawProtocol192 = 192;
var fpcRawProtocol193 = 193;
var fpcRawProtocol194 = 194;
var fpcRawProtocol195 = 195;
var fpcRawProtocol196 = 196;
var fpcRawProtocol197 = 197;
var fpcRawProtocol198 = 198;
var fpcRawProtocol199 = 199;
var fpcRawProtocol200 = 200;
var fpcRawProtocol201 = 201;
var fpcRawProtocol202 = 202;
var fpcRawProtocol203 = 203;
var fpcRawProtocol204 = 204;
var fpcRawProtocol205 = 205;
var fpcRawProtocol206 = 206;
var fpcRawProtocol207 = 207;
var fpcRawProtocol208 = 208;
var fpcRawProtocol209 = 209;
var fpcRawProtocol210 = 210;
var fpcRawProtocol211 = 211;
var fpcRawProtocol212 = 212;
var fpcRawProtocol213 = 213;
var fpcRawProtocol214 = 214;
var fpcRawProtocol215 = 215;
var fpcRawProtocol216 = 216;
var fpcRawProtocol217 = 217;
var fpcRawProtocol218 = 218;
var fpcRawProtocol219 = 219;
var fpcRawProtocol220 = 220;
var fpcRawProtocol221 = 221;
var fpcRawProtocol222 = 222;
var fpcRawProtocol223 = 223;
var fpcRawProtocol224 = 224;
var fpcRawProtocol225 = 225;
var fpcRawProtocol226 = 226;
var fpcRawProtocol227 = 227;
var fpcRawProtocol228 = 228;
var fpcRawProtocol229 = 229;
var fpcRawProtocol230 = 230;
var fpcRawProtocol231 = 231;
var fpcRawProtocol232 = 232;
var fpcRawProtocol233 = 233;
var fpcRawProtocol234 = 234;
var fpcRawProtocol235 = 235;
var fpcRawProtocol236 = 236;
var fpcRawProtocol237 = 237;
var fpcRawProtocol238 = 238;
var fpcRawProtocol239 = 239;
var fpcRawProtocol240 = 240;
var fpcRawProtocol241 = 241;
var fpcRawProtocol242 = 242;
var fpcRawProtocol243 = 243;
var fpcRawProtocol244 = 244;
var fpcRawProtocol245 = 245;
var fpcRawProtocol246 = 246;
var fpcRawProtocol247 = 247;
var fpcRawProtocol248 = 248;
var fpcRawProtocol249 = 249;
var fpcRawProtocol250 = 250;
var fpcRawProtocol251 = 251;
var fpcRawProtocol252 = 252;
var fpcRawProtocol253 = 253;
var fpcRawProtocol254 = 254;

var fpcInbound = 0;
var fpcOutbound = 1;

var fpcReceiveOnly = 0;
var fpcSendOnly = 1;
var fpcReceiveSend = 2;
var fpcSendReceive = 3;

var fpcProxyWebLog = 0x00000001;
var fpcProxyFwLog = 0x00000002;
var fpcProxyMailLog = 0x00000004;

var fpcFullPath = 0;
var fpcRelativePath = 1;

var fpcNoService = 0x00000000;
var fpcFwSrvSvc = 0x00000001;
var fpcJobSchedSvc = 0x00000002;
var fpcMSDESvc = 0x00000004;
var fpcAllServices = 0xFFFFFFFF;
var fpcIsaDatabaseLogSvc = fpcMSDESvc;

var fpcAllIpTraffic = 0;
var fpcSpecifiedProtocols = 1;
var fpcAllExceptSpecifiedProtocols = 2;

var fpcFile_EXT_Format = 0;
var fpcFile_ISA_Format = 1;
var fpcODBC = 2;
var fpcMSDE = 3;
var fpcSQLDirectConnection = 4;
var fpcIsaDatabaseLog = fpcMSDE;

var fpcWinAuth = 0;
var fpcSQLAuth = 1;

var fpcTypeStandardEdition = 0;
var fpcTypeEnterpriseEdition = 1;

var fpcIsaStandardEdition = 0x10;
var fpcIsaEnterpriseEdition = 0x20;

var fpcRunOnce = 0;
var fpcRunDaily = 1;
var fpcRunOnSpecifiedDaysOfWeek = 2;
var fpcRunOnSpecifiedDayOfMonth = 3;

var fpcAppliesToAllContent = 0;
var fpcAppliesToSpecifiedContent = 1;

var fpcServeFromCacheIfValidObjectExists = 0;
var fpcServeFromCacheIfObjectExists = 1;
var fpcServeFromCacheOnly = 2;

var fpcCacheAlways = 0;
var fpcCacheCacheableAndDynamic = 1;
var fpcCacheCacheable = 2;
var fpcNeverCache = 3;

var fpcFilterDirectionForward = 0;
var fpcFilterDirectionReverse = 1;
var fpcFilterDirectionBoth = 2;

var fpcServiceTypeUnknown = 0x00000000;
var fpcServiceTypeWebProxyReverse = 0x00000001;
var fpcServiceTypeWebProxyForward = 0x00000002;
var fpcServiceTypeWebProxyBoth = 0x00000003;

var fpcAuthenticationSchemeProvidesNothing = 0x00000000;
var fpcAuthenticationSchemeProvidesNamespace = 0x00000001;
var fpcAuthenticationSchemeProvidesMethod = 0x00000002;
var fpcAuthenticationSchemeProvidesBoth = 0x00000003;

var fpcNone = 0x00000000;
var fpcSundayBit = 0x00000001;
var fpcMondayBit = 0x00000002;
var fpcTuesdayBit = 0x00000004;
var fpcWednesdayBit = 0x00000008;
var fpcThursdayBit = 0x00000010;
var fpcFridayBit = 0x00000020;
var fpcSaturdayBit = 0x00000040;

var fpcFetchTtlIfNone = 0x00000001;
var fpcFetchTtlOverride = 0x00000002;
var fpcFetchSynchronous = 0x00000004;
var fpcFetchNoArrayRouting = 0x00000008;
var fpcFetchForceCache = 0x00000010;
var fpcFetchDynamicCache = 0x00000020;

var fpcSSLDontRequireSecureChannel = 0;
var fpcSSLRequireSecureChannel = 1;
var fpcSSLRequire128bitSecureChannel = 2;
var fpcSSLRequireBoth = 3;

var fpcNoComponents = 0x00000000;
var fpcNATComponent = 0x00000002;
var fpcWEBProxy = 0x00000004;
var fpcHTTPTransparent = 0x00000008;
var fpcGenericFwProtocols = 0x00000010;
var fpcFirewallExtensions = 0x00000020;
var fpcAllComponents = 0xFFFFFFFF;

var fpcNameSystem_DNS = 0;
var fpcNameSystem_WINS = 1;
var fpcNameSystem_IP = 2;

var fpcFilterPriority_Low = 0;
var fpcFilterPriority_Medium = 1;
var fpcFilterPriority_High = 2;

var fpcBrowserDefaultScript = 0;
var fpcBrowserCustomScript = 1;

var fpcKB = 1;
var fpcMB = 2;
var fpcGB = 3;

var fpcOnce = 0;
var fpcRecurring = 1;

var fpcStandardNetwork = 0;
var fpcVPNClients = 1;
var fpcLocalHost = 2;
var fpcDefaultExternal = 3;
var fpcInternalNetwork = 4;
var fpcQuarantinedVPNClients = 5;

var fpcRoute = 0;
var fpcNat = 1;

var fpcVpnQuarantineDisabled = 0;
var fpcVpnQuarantineEnabled = 1;
var fpcVpnQuarantineEnabledWithRadiusPolicy = 2;

var fpcVpnL2TP = 0;
var fpcVpnPPTP = 1;
var fpcVpnSSTP = 2;

var fpcVpnCertificate = 0;
var fpcVpnPresharedKey = 1;

var fpcVpnDES = 0;
var fpcVpn3DES = 1;
var fpcVpnAES128 = 2;
var fpcVpnAES192 = 3;
var fpcVpnAES256 = 4;
var fpcVpnGCMAES128 = 5;
var fpcVpnGCMAES192 = 6;
var fpcVpnGCMAES256 = 7;

var fpcVpnSHA1 = 0;
var fpcVpnMD5 = 1;
var fpcVpnSHA256 = 2;

var fpcVpnDHGroup1 = 0;
var fpcVpnDHGroup2 = 1;
var fpcVpnDHGroup2048 = 2;
var fpcVpnDHECPGroup256 = 3;
var fpcVpnDHECPGroup384 = 4;

var fpcAdapter = 0;
var fpcVPNConnection = 1;
var fpcDialupConnection = 2;
var fpcVirtualConnection = 3;
var fpcIPSecConnection = 4;

var fpcSelectedNetworks = 0;
var fpcAllExceptSelectedNetworks = 1;

var fpcAllIPAddresses = 0;
var fpcDefaultIPAddress = 1;
var fpcSpecifiedIPAddress = 2;

var fpcExportImportPasswords = 0x00000001;
var fpcExportImportUserPermissions = 0x00000002;
var fpcExportImportServerSpecific = 0x00000004;
var fpcExportImportEnterpriseSpecific = 0x00000008;

var fpcReportJobPeriodDay = 0;
var fpcReportJobPeriodWeek = 1;
var fpcReportJobPeriodMonth = 2;
var fpcReportJobPeriodYear = 3;
var fpcReportJobPeriodCustom = 4;
var fpcReportJobPeriodImmediate = 5;

var FpcReportParameterDataString = 0;
var FpcReportParameterDataInt = 1;
var FpcReportParameterDataCombo = 2;

var fpcReportJobCategorySummaryBit = 0x00000001;
var fpcReportJobCategoryWebUsageBit = 0x00000002;
var fpcReportJobCategoryApplicationUsageBit = 0x00000004;
var fpcReportJobCategoryTrafficAndUtilizationBit = 0x00000008;
var fpcReportJobCategorySecurityBit = 0x00000010;
var fpcReportJobCategoryMalwareInspectionBit = 0x00000020;
var fpcReportJobCategoryUrlFilteringBit = 0x00000040;
var fpcReportJobCategoryIpsBit = 0x00000080;

var fpcSecurityAlerts = 0;
var fpcCacheAlerts = 1;
var fpcRoutingAlerts = 2;
var fpcFwServiceAlerts = 3;
var fpcOtherAlerts = 4;
var fpcNLBAlerts = 5;

var fpcAlertError = 0;
var fpcAlertWarning = 1;
var fpcAlertInformation = 2;

var fpcReportFailed = 0;
var fpcReportSucceeded = 1;
var fpcReportRunning = 2;
var fpcReportNotRun = 3;

var fpcRequestsSortOrder = 0;
var fpcUsersSortOrder = 1;
var fpcBytesInSortOrder = 2;
var fpcBytesOutSortOrder = 3;
var fpcTotalBytesSortOrder = 4;

var fpcTopSitesRequests = fpcRequestsSortOrder;
var fpcTopSitesUsers = fpcUsersSortOrder;
var fpcTopSitesBytesIn = fpcBytesInSortOrder;
var fpcTopSitesBytesOut = fpcBytesOutSortOrder;
var fpcTopSitesTotalBytes = fpcTotalBytesSortOrder;

var fpcTopUsersRequests = fpcRequestsSortOrder;
var fpcTopUsersBytesIn = fpcBytesInSortOrder;
var fpcTopUsersBytesOut = fpcBytesOutSortOrder;
var fpcTopUsersTotalBytes = fpcTotalBytesSortOrder;

var fpcWebProtocolRequests = fpcRequestsSortOrder;
var fpcWebProtocolUsers = fpcUsersSortOrder;
var fpcWebProtocolBytesIn = fpcBytesInSortOrder;
var fpcWebProtocolBytesOut = fpcBytesOutSortOrder;
var fpcWebProtocolTotalBytes = fpcTotalBytesSortOrder;

var fpcAppProtocolRequests = fpcRequestsSortOrder;
var fpcAppProtocolUsers = fpcUsersSortOrder;

var fpcCacheRequests = fpcRequestsSortOrder;
var fpcCacheBytes = fpcTotalBytesSortOrder;

var fpcTopAppsRequests = fpcRequestsSortOrder;
var fpcTopAppsUsers = fpcUsersSortOrder;

var fpcBrowsersRequests = fpcRequestsSortOrder;
var fpcBrowsersUsers = fpcUsersSortOrder;

var fpcOperatingSystemsRequests = fpcRequestsSortOrder;
var fpcOperatingSystemsUsers = fpcUsersSortOrder;

var fpcObjectTypesRequests = fpcRequestsSortOrder;
var fpcObjectTypesUsers = fpcUsersSortOrder;
var fpcObjectTypesBytesIn = fpcBytesInSortOrder;

var fpcTopDestinationsRequests = fpcRequestsSortOrder;
var fpcTopDestinationsUsers = fpcUsersSortOrder;
var fpcTopDestinationsBytesIn = fpcBytesInSortOrder;
var fpcTopDestinationsBytesOut = fpcBytesOutSortOrder;
var fpcTopDestinationsTotalBytes = fpcTotalBytesSortOrder;

var fpcUrlCategoriesRequests = fpcRequestsSortOrder;
var fpcUrlCategoriesBytesIn = fpcBytesInSortOrder;
var fpcUrlCategoriesBytesOut = fpcBytesOutSortOrder;
var fpcUrlCategoriesTotalBytes = fpcTotalBytesSortOrder;

var fpcIpsProtocolsRequests = fpcRequestsSortOrder;
var fpcIpsProtocolsTotalBytes = fpcTotalBytesSortOrder;

var fpcProtocolCategoriesAll = 0x00000000;
var fpcProtocolCategoryUserDefined = 0x00000001;
var fpcProtocolCategoryCommon = 0x00000002;
var fpcProtocolCategoryInfrastructure = 0x00000004;
var fpcProtocolCategoriesMail = 0x00000008;
var fpcProtocolCategoriesMessaging = 0x00000010;
var fpcProtocolCategoriesRemote = 0x00000020;
var fpcProtocolCategoriesMedia = 0x00000040;
var fpcProtocolCategoriesVpnIpsec = 0x00000080;
var fpcProtocolCategoriesWeb = 0x00000100;
var fpcProtocolCategoriesAuthentication = 0x00000200;
var fpcProtocolCategoryIPv6Infrastructure = 0x00000400;
var fpcAllProtocolCategories = 0xFFFFFFFF;

var fpcNoFilter = 0;

var fpcNoCondition = 0x00000000;
var fpcEqual = 0x00000001;
var fpcNotEqual = 0x00000002;
var fpcGreaterOrEqual = 0x00000004;
var fpcLessOrEqual = 0x00000008;
var fpcOnOrAfter = 0x00000010;
var fpcOnOrBefore = 0x00000020;
var fpcContains = 0x00000040;
var fpcLiveData = 0x00000080;
var fpcLastHour = 0x00000100;
var fpcLast24Hours = 0x00000200;
var fpcLast7days = 0x00000400;
var fpcLast30days = 0x00000800;
var fpcNotContains = 0x00001000;
var fpcOneOf = 0x00002000;
var fpcNotOneOf = 0x00004000;

var fpcNoValueType = 0;
var fpcNumeric = 1;
var fpcDate = 2;
var fpcString = 3;
var fpcIPAddress = 4;
var fpcEnum = 5;
var fpcMultipleStrings = 6;
var fpcMultipleEnums = 7;

var fpcNoFilterType = 0;
var fpcSessionsFilter = 1;
var fpcLogViewerFilter = 2;

var fpcNoSessionType = 0;
var fpcSecureNetSession = 1;
var fpcFirewallClientSession = 2;
var fpcProxySession = 3;
var fpcVpnRemoteAccessSession = 4;
var fpcVpnRemoteSiteSession = 5;

var fpcSessionFound = 0;
var fpcSessionAllFound = 1;
var fpcSessionCreated = 2;
var fpcSessionDisconnected = 3;
var fpcSessionDisconnectedAll = 4;
var fpcSessionNetworkChanged = 5;
var fpcSessionConnectionRestored = 6;
var fpcSessionFilteredOut = 7;

var fpcSystemPolicyConfigGroup_Unknown = -1;
var fpcSystemPolicyConfigGroup_AD = 0;
var fpcSystemPolicyConfigGroup_Radius = 1;
var fpcSystemPolicyConfigGroup_Passport = 2;
var fpcSystemPolicyConfigGroup_RSASecureId = 3;
var fpcSystemPolicyConfigGroup_DNS = 4;
var fpcSystemPolicyConfigGroup_DHCP = 5;
var fpcSystemPolicyConfigGroup_RemoteMgmt_FWCONTROL = 6;
var fpcSystemPolicyConfigGroup_RemoteMgmt_TS = 7;
var fpcSystemPolicyConfigGroup_RemoteMgmt_ICMP = 8;
var fpcSystemPolicyConfigGroup_RemoteLogging = 9;
var fpcSystemPolicyConfigGroup_RemoteLogging_SQL = 10;
var fpcSystemPolicyConfigGroup_ICMP = 11;
var fpcSystemPolicyConfigGroup_Prefetcher = 12;
var fpcSystemPolicyConfigGroup_ManagementSites = 13;
var fpcSystemPolicyConfigGroup_ClientSetup = 14;
var fpcSystemPolicyConfigGroup_Perfmon = 15;
var fpcSystemPolicyConfigGroup_Diag_WinNet = 16;
var fpcSystemPolicyConfigGroup_Diag_Watson = 17;
var fpcSystemPolicyConfigGroup_MOM = 18;
var fpcSystemPolicyConfigGroup_Diag_Connectivity = 19;
var fpcSystemPolicyConfigGroup_VPN = 20;
var fpcSystemPolicyConfigGroup_NTP = 21;
var fpcSystemPolicyConfigGroup_SMTP = 22;
var fpcSystemPolicyConfigGroup_CRL = 23;
var fpcSystemPolicyConfigGroup_ConfigServer = 24;
var fpcSystemPolicyConfigGroup_ConfigLocalServer = 25;
var fpcSystemPolicyConfigGroup_ReplicateGroup = 26;
var fpcSystemPolicyConfigGroup_IntraArray = 27;
var fpcSystemPolicyConfigGroup_RemoteMgmt_Http = 28;
var fpcSystemPolicyConfigGroup_IPv6_Infrastructure = 29;
var fpcSystemPolicyConfigGroup_MicrosoftUpdates = 30;
var fpcSystemPolicyConfigGroup_SMTP_Protection = 31;
var fpcSystemPolicyConfigGroup_Exchange_EdgeSync = 32;
var fpcSystemPolicyConfigGroup_client_notification = 33;
var fpcSystemPolicyConfigGroup_DirectAccess_IPv6_Infrastructure = 34;
var fpcSystemPolicyConfigGroup_DirectAccess_Transition_Technologies = 35;
var fpcSystemPolicyConfigGroup_DirectAccess_IPv6_From_Localhost = 36;
var fpcSystemPolicyConfigGroup_Stirling_Connectivity = 37;
var fpcSystemPolicyConfigGroup_Stirling_ComputerResponses = 38;
var fpcSystemPolicyConfigGroup_MaxGroups = 39;

var fpcHttpRequest = 0;
var fpcPingRequest = 1;
var fpcTcpConnect = 2;

var fpcGroupFirst = 0;
var fpcGroupActiveDirectory = fpcGroupFirst;
var fpcGroupDHCP = 1;
var fpcGroupDNS = 2;
var fpcGroupPublishedServer = 3;
var fpcGroupWeb = 4;
var fpcGroupOther = 5;
var fpcGroupLast = fpcGroupOther;

var fpcConnNoError = 0;
var fpcConnDNSUnreachable = 1;
var fpcConnUnresolvedName = 2;
var fpcConnAuthenticationRequired = 3;
var fpcConnTimeout = 4;
var fpcConnError = 5;

var fpcActionNotLogged = 0;
var fpcActionBind = 1;
var fpcActionListen = 2;
var fpcActionGHBN = 3;
var fpcActionGHBA = 4;
var fpcActionRedirectBind = 5;
var fpcActionEstablish = 6;
var fpcActionTerminate = 7;
var fpcActionDenied = 8;
var fpcActionAllowed = 9;
var fpcActionFailed = 10;
var fpcActionIntermediate = 11;
var fpcActionSuccessfulConnection = 12;
var fpcActionUnsuccessfulConnection = 13;
var fpcActionDisconnection = 14;
var fpcActionUserclearedQuarantine = 15;
var fpcActionQuarantinetimeout = 16;
var fpcActionUserQuarantined = 17;

var fpcClientAuthenticatedNotLogged = 0;
var fpcClientAuthenticatedYes = 1;
var fpcClientAuthenticatedNo = 2;

var fpcLogServiceUnknown = 0;
var fpcLogServiceProxy = 1;
var fpcLogServiceReverseProxy = 2;
var fpcLogServiceExternalProxy = 3;

var fpcSrcUnknown = 0;
var fpcSrcCache = 1;
var fpcSrcVerifiedCache = 2;
var fpcSrcNotVerifiedCache = 3;
var fpcSrcVerifyFailedInternet = 4;
var fpcSrcInternet = 5;
var fpcSrcMember = 6;
var fpcSrcUpstream = 7;
var fpcSrcNotModified = 8;

var fpcBidirectionalNotLogged = 0;
var fpcBidirectionalYes = 1;
var fpcBidirectionalNo = 2;

var fpcNLBAffinitySingle = 1;

var fpcNLBOperationModeUnicast = 0;
var fpcNLBOperationModeMulticast = 1;
var fpcNLBOperationModeIGMP = 2;

var fpcStatusUnknown = 0;
var fpcStatusNoNLBConfiguration = 1;
var fpcStatusNLBConfiguring = 2;
var fpcStatusNLBRunning = 3;
var fpcStatusNLBDrainstoppingDueToAdminRequest = 4;
var fpcStatusNLBStoppedDueToAdminRequest = 5;
var fpcStatusNLBStoppedDueToLocalProblem = 6;
var fpcStatusNLBStoppedDueToVpn = 7;
var fpcStatusNLBSuspended = 8;

var fpcArrayScope = 0;
var fpcEnterpriseScope = 1;

var fpcDelegatedAdminSidValid = 0x01;
var fpcDelegatedAdminNameValid = 0x02;

var fpcConfigurationStorageServerConnectionLDAP = 0;
var fpcConfigurationStorageServerConnectionLDAPS = 1;

var fpcStatusNotSynced = 0;
var fpcStatusUpdating = 1;
var fpcStatusSynced = 2;
var fpcStatusError = 3;

var fpcResponsive = 0;
var fpcNonResponsive = 1;
var fpcValidating = 2;

var fpcRsFwSrv = 0;
var fpcRsFwCtrl = 1;
var fpcRsFwSched = 2;
var fpcRsIsaStg = 3;
var fpcRsFwMngdCtrl = 4;
var fpcRPCServicesMax = 5;

var fpcCopySchedules = 0x001;
var fpcCopyProtocols = 0x002;
var fpcCopyUrlSets = 0x004;
var fpcCopyDomainNameSets = 0x008;
var fpcCopyContentTypeSets = 0x010;
var fpcCopyUserSets = 0x020;
var fpcCopyComputers = 0x040;
var fpcCopyAddressRanges = 0x080;
var fpcCopySubnets = 0x100;
var fpcCopyComputerSets = 0x200;
var fpcCopyNetworks = 0x400;

var fpcSpoofDetectionDropAll = 0;
var fpcSpoofDetectionStrict = 1;
var fpcSpoofDetectionByRoutingTable = 2;
var fpcSpoofDetectionDisabled = 3;

var fpcNoValue = 0;
var fpcOptOut = 1;
var fpcOptIn = 2;

var fpcNoFailure = 0;
var fpcNoPrivateKey = 1;
var fpcNotIntendedForSessionKeyExchange = 2;
var fpcNoPrivateKeyHandle = 3;

var fpcLocalMachinePersonalStore = 0;
var fpcFirewallServicePersonalStore = 1;
var fpcCurrentUserPersonalStore = 2;
var fpcTrustedRootStore = 3;
var fpcIntermediateCertificatesStore = 4;

var fpcNoLogonTypeEnforcement = 0;
var fpcEnforcePublicLogonType = 1;

var fpcLinkTranslationNormal = 0;
var fpcLinkTranslationOwa12Redirection = 1;
var fpcLinkTranslationOffAfterPatternMatch = 2;
var fpcLinkTranslationOnAfterPatternMatch = 3;

var fpcNoOptionsOn = 0x00000000;
var fpcEscapeColon = 0x00000001;
var fpcAllowTranslationOfPartialLinks = 0x00000002;

var fpcStatusNoFailure = 0x000;
var fpcServiceStoreFailedToOpen = 0x001;
var fpcUserStoreFailedToOpen = 0x002;

var FpcRedirectHTTPAsHTTPSDisabled = 0;
var FpcRedirectHTTPAsHTTPSIfAuthenticated = 1;
var FpcRedirectHTTPAsHTTPSAlways = 2;

var fpcCertificateRestrictionIssuer = 0;
var fpcCertificateRestrictionSubject = 1;
var fpcCertificateRestrictionEnhancedKeyUsage = 2;
var fpcCertificateRestrictionExtendedProperties = 3;

var fpcMatchAnyOID = 0;
var fpcMatchSpecificOID = 1;

var fpcMatchAnyValue = 0;
var fpcMatchCaseInsensitiveCompare = 1;
var fpcMatchCaseInsensitiveSubString = 2;

var fpcISA2006 = 1;
var fpcISA2008 = 2;
var fpcCompatVersionNotApplicable = 3;

var fpcCommonOperation = 0;
var fpcAddArrayOperation = 1;

var fpcGeneralWebServer = 0;
var fpcExchangeServer = 1;
var fpcSharePointServer = 2;

var fpcRegularStorageConnection = 0;
var fpcSSLStorageConnection = 1;

var fpcUpdateActionCheckAndInstall = 0;
var fpcUpdateActionCheckOnly = 1;
var fpcUpdateActionDoNothing = 2;
var fpcUpdateActionOverride = 3;

var fpcScheduleTypeEvery15Minutes = 0;
var fpcScheduleTypeOnceOnSelectedDay = 1;

var fpcIspRedundancyDisabled = 0;
var fpcIspRedundancyLoadBalancing = 1;
var fpcIspRedundancyFailover = 2;

var fpcDayOfWeekEveryDay = 0;
var fpcDayOfWeekSunday = 1;
var fpcDayOfWeekMonday = 2;
var fpcDayOfWeekTuesday = 3;
var fpcDayOfWeekWednesday = 4;
var fpcDayOfWeekThursday = 5;
var fpcDayOfWeekFriday = 6;
var fpcDayOfWeekSaturday = 7;

var fpcUpdatesStatusStarted = 0;
var fpcUpdatesStatusSearching = 1;
var fpcUpdatesStatusSearchCompleted = 2;
var fpcUpdatesStatusDownloading = 3;
var fpcUpdatesStatusDownloadCompleted = 4;
var fpcUpdatesStatusInstalling = 5;
var fpcUpdatesStatusInstallCompleted = 6;
var fpcUpdatesStatusUpToDate = 7;
var fpcUpdatesStatusUpdatesAvailable = 8;
var fpcUpdatesStatusError = 9;
var fpcUpdatesStatusCancelled = 10;
var fpcUpdatesStatusNever = 11;
var fpcUpdatesStatusUnavailable = 12;
var fpcUpdatesStatusFeatureDisabled = 13;
var fpcUpdatesStatusErrorLicenseExpired = 14;

var fpcIspLinkAutomaticStatus = 0;
var fpcIspLinkManualConnectedStatus = 1;
var fpcIspLinkManualDisconnectedStatus = 2;

var fpcLinkDown = 0;
var fpcLinkLocal = 1;
var fpcLinkInet = 2;

var fpcPrimaryLink = 0;
var fpcSecondaryLink = 1;
var fpcNumberOfLinks = 2;

var fpcLoadBalancingFactorMin = 0;
var fpcLoadBalancingFactorMax = 100;

var fpcIspLinkResumeMinimalTime = 300;

var fpcKeySize512 = 9;
var fpcKeySize1024 = 10;
var fpcKeySize2048 = 11;
var fpcKeySize4096 = 12;
var fpcKeySizeMinSupported = 512;
var fpcKeySizeMaxSupported = 4096;

var fpcSelectedCategories = 0;
var fpcAllExceptSelectedCategories = 1;

var fpcGroupNone = 0;
var fpcWebAccessGroup = 1;
var fpcWebPublishingGroup = 2;
var fpcServerPublishingGroup = 3;
var fpcVoIPAccessGroup = 4;
var fpcCustomGroup = 100;

var fpcAdapterConnectionDefault = 0;
var fpcAdapterConnectionDialup = 1;

var fpcAdapterStateConnected = 1;
var fpcAdapterStateDisabled = 2;
var fpcAdapterStateDisconnected = 4;

var fpcActivityStatisticsPeriodDaily = 0;
var fpcActivityStatisticsPeriodMonthly = 1;

var fpcMalwareInspectionActionNone = 0;
var fpcMalwareInspectionActionAllowed = 1;
var fpcMalwareInspectionActionCleaned = 2;
var fpcMalwareInspectionActionBlocked = 3;

var fpcMalwareInspectionActionReasonNone = 0;
var fpcMalwareInspectionActionReasonNoneDetected = 1;
var fpcMalwareInspectionActionReasonLowMediumThreatsAllowed = 2;
var fpcMalwareInspectionActionReasonInfected = 3;
var fpcMalwareInspectionActionReasonSuspiciousFile = 4;
var fpcMalwareInspectionActionReasonEncryptedFile = 5;
var fpcMalwareInspectionActionReasonMaxArchiveNestingExceeded = 6;
var fpcMalwareInspectionActionReasonMaxSizeExceeded = 7;
var fpcMalwareInspectionActionReasonMaxUnpackedSizeExceeded = 8;
var fpcMalwareInspectionActionReasonUnknownEncoding = 9;
var fpcMalwareInspectionActionReasonCorruptedFile = 10;
var fpcMalwareInspectionActionReasonTimeOut = 11;
var fpcMalwareInspectionActionReasonStorageLimitExceeded = 12;
var fpcMalwareInspectionActionReasonUnsupportedFormat = 13;
var fpcMalwareInspectionActionReasonStatusNotRequested = 14;
var fpcMalwareInspectionActionReasonOther = 15;
var fpcMalwareInspectionActionReasonDisabled = 16;
var fpcMalwareInspectionActionReasonDisabledForPolicyRule = 17;
var fpcMalwareInspectionActionReasonDisabledForChainingRule = 18;
var fpcMalwareInspectionActionReasonExceptionList = 19;
var fpcMalwareInspectionActionReasonProxyOriginatedResponse = 20;
var fpcMalwareInspectionActionReasonServedByFilter = 21;
var fpcMalwareInspectionActionReasonStreaming = 22;
var fpcMalwareInspectionActionReasonResponseToConnect = 23;
var fpcMalwareInspectionActionReasonRoutedByCarp = 24;
var fpcMalwareInspectionActionReasonSourceExceptionList = 25;
var fpcMalwareInspectionActionReasonDefinitionsFolderNotSpecified = 26;
var fpcMalwareInspectionActionReasonRangeResponse = 27;

var fpcMalwareInspectionThreatLevelNone = 0;
var fpcMalwareInspectionThreatLevelLow = 1;
var fpcMalwareInspectionThreatLevelMedium = 2;
var fpcMalwareInspectionThreatLevelHigh = 3;
var fpcMalwareInspectionThreatLevelSevere = 4;

var fpcMalwareInspectionContentDeliveryUnchanged = 0;
var fpcMalwareInspectionContentDeliveryStandardTrickling = 1;
var fpcMalwareInspectionContentDeliveryFastTrickling = 2;
var fpcMalwareInspectionContentDeliveryProgressNotification = 3;

var fpcBestUserExperinceLowPerformance = 0;
var fpcGoodUserExperienceModeratePerformance = 1;
var fpcModerateUserExperienceGoodPerformance = 2;
var fpcPoorUserExperienceBestPerformance = 3;

var fpcTransportProtocolUndefined = 0;
var fpcTransportProtocolHttp = 1;

var fpcIpsScanResultUnknown = 0;
var fpcIpsScanResultInspected = 1;
var fpcIpsScanResultBlocked = 2;
var fpcIpsScanResultDetected = 3;

var fpcConfigurationStandalone = 0;
var fpcConfigurationEnterprise = 1;
var fpcDisconnected = 2;

var fpcHttpsInspectionWithCertificateValidation = 0;
var fpcHttpsInspectionCertificateValidationOnly = 1;

var fpcSpyNetNoValue = 0;
var fpcSpyNetDisabled = 1;
var fpcSpyNetBasic = 2;
var fpcSpyNetExtended = 3;

var fpcNlmConnectivityDISCONNECTED = 0;
var fpcNlmConnectivityIPV4_NOTRAFFIC = 0x1;
var fpcNlmConnectivityIPV6_NOTRAFFIC = 0x2;
var fpcNlmConnectivityIPV4_SUBNET = 0x10;
var fpcNlmConnectivityIPV4_LOCALNETWORK = 0x20;
var fpcNlmConnectivityIPV4_INTERNET = 0x40;
var fpcNlmConnectivityIPV6_SUBNET = 0x100;
var fpcNlmConnectivityIPV6_LOCALNETWORK = 0x200;
var fpcNlmConnectivityIPV6_INTERNET = 0x400;

var fpcMicrosoftUpdateSetting_OptIn = 0;
var fpcMicrosoftUpdateSetting_OptOut = 1;

var fpcSSLTerminationNone = 0;
var fpcSSLTerminationWithCertificate = 1;
var fpcSSLTerminationWithTLSTrail = 2;

var fpcSSLClientCertificateIgnored = 0;
var fpcSSLClientCertificateRequired = 1;
var fpcSSLClientCertificateRequested = 2;

var fpcSenderIdRejectMessage = 0;
var fpcSenderIdDeleteMessage = 1;
var fpcSenderIdStampMessage = 2;

var fpcSenderFilterRejectMessage = 0;
var fpcSenderFilterStampMessage = 1;

var fpcSenderEMailAddress = 0;
var fpcSenderDomainName = 1;
var fpcSenderDomainWithSubdomainName = 2;

var fpcInternalMailServers = 0;
var fpcInternetMailServer = 1;

var fpcForwardToSpecificAddress = 0;
var fpcForwardUsingMxRecord = 1;

var fpcDefaultAuthentication = 0;
var fpcBasicAuthentication = 1;
var fpcExchangeServerAuthentication = 2;
var fpcExternallySecuredAuthentication = 3;

var fpcDefaultMessage = 0;
var fpcCustomMessage = 1;

var fpcMailAntispamFilterListType_File = 0;
var fpcMailAntispamFilterListType_MessageBody = 1;

var fpcMailAntivirusEngine_None = 0x00;
var fpcMailAntivirusEngine_Authentium = 0x01;
var fpcMailAntivirusEngine_Kaspersky = 0x02;
var fpcMailAntivirusEngine_Microsoft = 0x04;
var fpcMailAntivirusEngine_Norman = 0x08;
var fpcMailAntivirusEngine_VirusBuster = 0x10;
var fpcMailAntivirusEngine_LastAntiVirus = fpcMailAntivirusEngine_VirusBuster;
var fpcMailAntivirusEngine_WormList = 0x20;
var fpcMailAntivirusEngine_CloudMark = 0x40;
var fpcMailAntivirusEngine_Last = fpcMailAntivirusEngine_CloudMark;
var fpcMailAntivirusEngine_First = fpcMailAntivirusEngine_Authentium;
var fpcMailAntivirusEngine_Default = fpcMailAntivirusEngine_None;

var fpcMailAntivirusEngineSelectionPolicy_All = 0;
var fpcMailAntivirusEngineSelectionPolicy_Available = 1;
var fpcMailAntivirusEngineSelectionPolicy_Dynamic = 2;
var fpcMailAntivirusEngineSelectionPolicy_One = 3;

var fpcMailAntivirusSenderInfo_MimeHeader = 0;
var fpcMailAntivirusSenderInfo_MailFrom = 1;

var fpcMailAntivirusAction_None = 0;
var fpcMailAntivirusAction_Clean = 1;
var fpcMailAntivirusAction_Delete = 2;

var fpcMailAntivirusErrorAction_Ignore = 0;
var fpcMailAntivirusErrorAction_SkipDetect = 1;
var fpcMailAntivirusErrorAction_Delete = 2;

var fpcMailIllegalMimeHeaderAction_Purge = 0;
var fpcMailIllegalMimeHeaderAction_Ignore = 1;

var fpcMailAntiSpamFilterAction_None = 0;
var fpcMailAntiSpamFilterAction_Delete = 1;
var fpcMailAntiSpamFilterAction_Purge = 2;
var fpcMailAntiSpamFilterAction_Identify = 3;

var fpcMailAntiSpamFileType_TEXT = 0x00000001;
var fpcMailAntiSpamFileType_UNICODE = 0x00000002;
var fpcMailAntiSpamFileType_EXE = 0x00000003;
var fpcMailAntiSpamFileType_PIF = 0x00000004;
var fpcMailAntiSpamFileType_EICAR = 0x00000005;
var fpcMailAntiSpamFileType_DOC = 0x00000006;
var fpcMailAntiSpamFileType_MSWORD12 = 0x00000007;
var fpcMailAntiSpamFileType_MSEXCEL1 = 0x00000008;
var fpcMailAntiSpamFileType_WRITE = 0x00000009;
var fpcMailAntiSpamFileType_ZIP = 0x0000000A;
var fpcMailAntiSpamFileType_LHA = 0x0000000B;
var fpcMailAntiSpamFileType_MSCAB = 0x0000000C;
var fpcMailAntiSpamFileType_ISCAB = 0x0000000D;
var fpcMailAntiSpamFileType_DATAZ = 0x0000000E;
var fpcMailAntiSpamFileType_GZIP = 0x0000000F;
var fpcMailAntiSpamFileType_MSCOMPRESS = 0x00000010;
var fpcMailAntiSpamFileType_ZOO = 0x00000011;
var fpcMailAntiSpamFileType_ARJ = 0x00000012;
var fpcMailAntiSpamFileType_ARC = 0x00000013;
var fpcMailAntiSpamFileType_GIF = 0x00000014;
var fpcMailAntiSpamFileType_JPEG = 0x00000015;
var fpcMailAntiSpamFileType_BMP = 0x00000016;
var fpcMailAntiSpamFileType_PCX = 0x00000017;
var fpcMailAntiSpamFileType_PAL = 0x00000018;
var fpcMailAntiSpamFileType_ICO = 0x00000019;
var fpcMailAntiSpamFileType_WAV = 0x0000001A;
var fpcMailAntiSpamFileType_AVI = 0x0000001B;
var fpcMailAntiSpamFileType_RIF = 0x0000001C;
var fpcMailAntiSpamFileType_QTMOVIE = 0x0000001D;
var fpcMailAntiSpamFileType_MPEG1 = 0x0000001E;
var fpcMailAntiSpamFileType_MSLIBRARY = 0x0000001F;
var fpcMailAntiSpamFileType_OBJ = 0x00000020;
var fpcMailAntiSpamFileType_SHORTCUT = 0x00000021;
var fpcMailAntiSpamFileType_CLASS = 0x00000022;
var fpcMailAntiSpamFileType_IMCMIME = 0x00000023;
var fpcMailAntiSpamFileType_PDF = 0x00000024;
var fpcMailAntiSpamFileType_UNINST = 0x00000025;
var fpcMailAntiSpamFileType_TYPELIB = 0x00000026;
var fpcMailAntiSpamFileType_HELP = 0x00000027;
var fpcMailAntiSpamFileType_CHI = 0x00000028;
var fpcMailAntiSpamFileType_JAR = 0x00000029;
var fpcMailAntiSpamFileType_UNIXCOMPRESS = 0x0000002A;
var fpcMailAntiSpamFileType_HYPERARC = 0x0000002B;
var fpcMailAntiSpamFileType_PKLITE = 0x0000002C;
var fpcMailAntiSpamFileType_TNEF = 0x0000002D;
var fpcMailAntiSpamFileType_EPS = 0x0000002E;
var fpcMailAntiSpamFileType_XARA = 0x0000002F;
var fpcMailAntiSpamFileType_WMF = 0x00000030;
var fpcMailAntiSpamFileType_WMFVISIO = 0x00000031;
var fpcMailAntiSpamFileType_PNG = 0x00000032;
var fpcMailAntiSpamFileType_TIFF = 0x00000033;
var fpcMailAntiSpamFileType_AUTOCAD = 0x00000034;
var fpcMailAntiSpamFileType_FONT1 = 0x00000035;
var fpcMailAntiSpamFileType_TRUETYPE = 0x00000036;
var fpcMailAntiSpamFileType_ANI = 0x00000037;
var fpcMailAntiSpamFileType_MP3 = 0x00000038;
var fpcMailAntiSpamFileType_NOTESDB = 0x00000039;
var fpcMailAntiSpamFileType_MDB = 0x0000003A;
var fpcMailAntiSpamFileType_SFXEXE = 0x0000003B;
var fpcMailAntiSpamFileType_TAR = 0x0000003C;
var fpcMailAntiSpamFileType_RAR = 0x0000003D;
var fpcMailAntiSpamFileType_MACBIN = 0x0000003E;
var fpcMailAntiSpamFileType_OPENXML = 0x0000003F;

var fpcWAPLicenseType_Evaluation = 0;
var fpcWAPLicenseType_Purchased = 1;
var fpcWAPLicenseType_Disabled = 2;
var fpcWAPLicenseType_NumberOf = 3;

var fpcIPSLicenseType_Complementary = 0;
var fpcIPSLicenseType_Disabled = 1;
var fpcIPSLicenseType_NumberOf = 2;

var fpcNoProtectionMechanism = 0x00;
var fpcNetworkInspectionSystem = 0x01;
var fpcMalwareInspection = 0x02;
var fpcEmailAntivirus = 0x04;
var fpcAllProtectionMechanisms = 0xFF;

var fpcAutomaticPollingFrequency_15m = 0;
var fpcAutomaticPollingFrequency_30m = 1;
var fpcAutomaticPollingFrequency_45m = 2;
var fpcAutomaticPollingFrequency_1h = 3;
var fpcAutomaticPollingFrequency_2h = 4;
var fpcAutomaticPollingFrequency_3h = 5;
var fpcAutomaticPollingFrequency_4h = 6;
var fpcAutomaticPollingFrequency_5h = 7;
var fpcAutomaticPollingFrequency_6h = 8;
var fpcAutomaticPollingFrequency_7h = 9;
var fpcAutomaticPollingFrequency_8h = 10;
var fpcAutomaticPollingFrequency_9h = 11;
var fpcAutomaticPollingFrequency_10h = 12;
var fpcAutomaticPollingFrequency_11h = 13;
var fpcAutomaticPollingFrequency_12h = 14;
var fpcAutomaticPollingFrequency_13h = 15;
var fpcAutomaticPollingFrequency_14h = 16;
var fpcAutomaticPollingFrequency_15h = 17;
var fpcAutomaticPollingFrequency_16h = 18;
var fpcAutomaticPollingFrequency_17h = 19;
var fpcAutomaticPollingFrequency_18h = 20;
var fpcAutomaticPollingFrequency_19h = 21;
var fpcAutomaticPollingFrequency_20h = 22;
var fpcAutomaticPollingFrequency_21h = 23;
var fpcAutomaticPollingFrequency_22h = 24;
var fpcAutomaticPollingFrequency_23h = 25;
var fpcAutomaticPollingFrequency_24h = 26;

var fpcNoSupportedUpdateAction = 0x00;
var fpcSupportedUpdateActionCheckOnly = 0x01;
var fpcSupportedUpdateActionInstall = 0x02;
var fpcSupportedUpdateActionOverride = 0x04;
var fpcAllSupportedUpdateActions = 0x0F;

var fpcMicrosoftUpdateSourceDefault = 0;
var fpcMicrosoftUpdateSourceDirect = 1;
var fpcMicrosoftUpdateSourceFallbackToDirect = 2;

var fpcApplicationNotTrusted = 0;
var fpcApplicationIsTrusted = 1;
var fpcApplicationTrustUnknown = 2;

var fpcUrlCategorizationProviderUsed_Original = 0;
var fpcUrlCategorizationProviderUsed_Overridden = 1;

var fpcUrlCategorizationSourceUsed_OriginalUrl = 0;
var fpcUrlCategorizationSourceUsed_Alias = 1;
var fpcUrlCategorizationSourceUsed_PathOnly = 2;
var fpcUrlCategorizationSourceUsed_IP = 3;
var fpcUrlCategorizationSourceUsed_Invalid = 4;

var fpcNisSignatureResponseBlockAndLog = 0;
var fpcNisSignatureResponseLogOnly = 1;

var fpcNisInitialSignatureConfigurationDefault = 0;
var fpcNisInitialSignatureConfigurationLogOnly = 1;
var fpcNisInitialSignatureConfigurationDisabled = 2;

var fpcNisCategoryVulnerability = 0;
var fpcNisCategoryExploit = 1;
var fpcNisCategoryPolicy = 2;
var fpcNisCategoryOther = 3;

var fpcNisSeverityLevelLow = 0;
var fpcNisSeverityLevelModerate = 1;
var fpcNisSeverityLevelImportant = 2;
var fpcNisSeverityLevelCritical = 3;

var fpcNisRiskLevelLow = 0;
var fpcNisRiskLevelModerate = 1;
var fpcNisRiskLevelHigh = 2;

var fpcNisFidelityLevelLow = 0;
var fpcNisFidelityLevelMedium = 1;
var fpcNisFidelityLevelHigh = 2;
var fpcNisFidelityLevelPerfect = 3;

var fpcNisBusinessImpactLevelLow = 0;
var fpcNisBusinessImpactLevelModerate = 1;
var fpcNisBusinessImpactLevelHigh = 2;

var fpcFssUpdateStatusNever = 0;
var fpcFssUpdateStatusSucceeded = 1;
var fpcFssUpdateStatusFailed = 2;
var fpcFssUpdateStatusUpToDate = 3;

var fpcNisProtocolAnomaliesAllow = 0;
var fpcNisProtocolAnomaliesBlock = 1;

var fpcUrlCategorizationReasonNone = 0;
var fpcUrlCategorizationFromOverrides = 1;
var fpcUrlCategorizationFromCache = 2;
var fpcUrlCategorizationFromWebService = 3;
var fpcUrlCategorizationFailedUrlFilteringDisabled = 4;
var fpcUrlCategorizationFailedUrlNotInDatabase = 5;
var fpcUrlCategorizationFailedWebServiceConnectionError = 6;
var fpcUrlCategorizationFailedWebServiceDown = 7;
var fpcUrlCategorizationFailedLicenseExpired = 8;

%>
