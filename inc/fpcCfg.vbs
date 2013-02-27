<%


'*********************************************************************************
'
'   Copyright (c) Microsoft Corporation. All rights reserved.  
'   THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND. 
'   THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER. 
'   USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.
'
'*********************************************************************************

const fpcHTTP = 0
const fpcFTP = 1
const fpcSSL = 2

const fpcWebServerThruHTTP = 0
const fpcWebServerThruSSL = 1
const fpcWebServerThruBothHTTPAndSSL = 2
const fpcFTPServer = 3

const fpcSessionAffinity = 0
const fpcIPAffinity = 1

const fpcFbaHTML4 = 0
const fpcFbaCHTML = 1
const fpcFbaXHTML_MP = 2
const fpcFbaHTTPBASIC = 3

const fpcPrimaryRouteDirect = 0
const fpcPrimaryRouteUpstream = 1
const fpcPrimaryRouteAlternate = 2

const fpcBackupRouteNone = 0
const fpcBackupRouteDirect = 1
const fpcBackupRouteUpstream = 2

const fpcUiAuthBasic = 0
const fpcUiAuthIntegrated = 1

const fpcDelegationNonePassThrough = 0
const fpcDelegationNoneBlock = 1
const fpcDelegationSecurID = 2
const fpcDelegationBasic = 3
const fpcDelegationNTLM = 4
const fpcDelegationSPNEGO = 5
const fpcDelegationKerberosConstrained = 6

const fpcCredentialsDelegationDefault = 0
const fpcCredentialsDelegationOnceForConnection = 1
const fpcCredentialsDelegationForEachRequest = 2

const fpcPersistentCookiesDisabled = 0
const fpcPersistentCookiesEnabledForTrustedComputers = 1
const fpcPersistentCookiesEnabledForAllComputers = 2

const fpcPreventCachingOnPublicAndTrustedComputers = 0
const fpcPreventCachingOnPublicComputers = 1
const fpcPreventCachingOnNoClientComputers = 2

const fpcPrimaryConnection = 0
const fpcChaining = 1

const fpcClientBackupRouteDirectToInternet = 0
const fpcClientBackupRouteViaProxy = 1

const fpcActiveCachingEmphasisOnFewerNetworkAccesses = 1
const fpcActiveCachingNoEmphasis = 2
const fpcActiveCachingEmphasisOnFasterUserResponse = 3

const fpcAllowPacketsIpOptions = 0
const fpcDenyPacketsIpOptions = 1
const fpcDenyPacketsUnSelectedIpOptions = 2
const fpcDenyPacketsSelectedIpOptions = 3

const fpcPolicyRuleActionAllow = 0
const fpcPolicyRuleActionDeny = 1

const fpcPolicyRuleAccess = 0
const fpcPolicyRuleServerPublishing = 1
const fpcPolicyRuleWebPublishing = 2
const fpcPolicyRuleArrayPolicyPlaceHolder = &H100&

const fpcTimeInSeconds = 1
const fpcTimeInMinutes = 2
const fpcTimeInHours = 3
const fpcTimeInDays = 4
const fpcTimeInWeeks = 5

const fpcALL_WEEK = -1
const fpcSUN = 0
const fpcMON = 1
const fpcTUE = 2
const fpcWED = 3
const fpcTHU = 4
const fpcFRI = 5
const fpcSAT = 6

const fpcALL_DAY = -1
const fpcAM_12 = 0
const fpcAM_1 = 1
const fpcAM_2 = 2
const fpcAM_3 = 3
const fpcAM_4 = 4
const fpcAM_5 = 5
const fpcAM_6 = 6
const fpcAM_7 = 7
const fpcAM_8 = 8
const fpcAM_9 = 9
const fpcAM_10 = 10
const fpcAM_11 = 11
const fpcPM_12 = 12
const fpcPM_1 = 13
const fpcPM_2 = 14
const fpcPM_3 = 15
const fpcPM_4 = 16
const fpcPM_5 = 17
const fpcPM_6 = 18
const fpcPM_7 = 19
const fpcPM_8 = 20
const fpcPM_9 = 21
const fpcPM_10 = 22
const fpcPM_11 = 23

const fpcAlertActionLogEvent = 0
const fpcAlertActionCommand = 1
const fpcAlertActionSendMail = 2
const fpcAlertActionStopServices = 3
const fpcAlertActionStartServices = 4

const fpcAccountTypeUser = 0
const fpcAccountTypeGroup = 1
const fpcAccountTypeDomain = 2
const fpcAccountTypeAlias = 3
const fpcAccountTypeWellKnownGroup = 4
const fpcAccountTypeUnknown = 5

const fpcInclude = 0
const fpcExclude = 1

const fpcRawProtocol0 = 0
const fpcICMP = 1
const fpcIGMP = 2
const fpcGGP = 3
const fpcIP = 4
const fpcST = 5
const fpcTCP = 6
const fpcRawProtocol7 = 7
const fpcRawProtocol8 = 8
const fpcRawProtocol9 = 9
const fpcRawProtocol10 = 10
const fpcRawProtocol11 = 11
const fpcRawProtocol12 = 12
const fpcRawProtocol13 = 13
const fpcRawProtocol14 = 14
const fpcRawProtocol15 = 15
const fpcRawProtocol16 = 16
const fpcUDP = 17
const fpcRawProtocol18 = 18
const fpcRawProtocol19 = 19
const fpcRawProtocol20 = 20
const fpcRawProtocol21 = 21
const fpcRawProtocol22 = 22
const fpcRawProtocol23 = 23
const fpcRawProtocol24 = 24
const fpcRawProtocol25 = 25
const fpcRawProtocol26 = 26
const fpcRawProtocol27 = 27
const fpcRawProtocol28 = 28
const fpcRawProtocol29 = 29
const fpcRawProtocol30 = 30
const fpcRawProtocol31 = 31
const fpcRawProtocol32 = 32
const fpcRawProtocol33 = 33
const fpcRawProtocol34 = 34
const fpcRawProtocol35 = 35
const fpcRawProtocol36 = 36
const fpcRawProtocol37 = 37
const fpcRawProtocol38 = 38
const fpcRawProtocol39 = 39
const fpcRawProtocol40 = 40
const fpcRawProtocol41 = 41
const fpcRawProtocol42 = 42
const fpcRawProtocol43 = 43
const fpcRawProtocol44 = 44
const fpcRawProtocol45 = 45
const fpcRawProtocol46 = 46
const fpcRawProtocol47 = 47
const fpcRawProtocol48 = 48
const fpcRawProtocol49 = 49
const fpcRawProtocol50 = 50
const fpcRawProtocol51 = 51
const fpcRawProtocol52 = 52
const fpcRawProtocol53 = 53
const fpcRawProtocol54 = 54
const fpcRawProtocol55 = 55
const fpcRawProtocol56 = 56
const fpcRawProtocol57 = 57
const fpcICMPv6 = 58
const fpcRawProtocol59 = 59
const fpcRawProtocol60 = 60
const fpcRawProtocol61 = 61
const fpcRawProtocol62 = 62
const fpcRawProtocol63 = 63
const fpcRawProtocol64 = 64
const fpcRawProtocol65 = 65
const fpcRawProtocol66 = 66
const fpcRawProtocol67 = 67
const fpcRawProtocol68 = 68
const fpcRawProtocol69 = 69
const fpcRawProtocol70 = 70
const fpcRawProtocol71 = 71
const fpcRawProtocol72 = 72
const fpcRawProtocol73 = 73
const fpcRawProtocol74 = 74
const fpcRawProtocol75 = 75
const fpcRawProtocol76 = 76
const fpcRawProtocol77 = 77
const fpcRawProtocol78 = 78
const fpcRawProtocol79 = 79
const fpcRawProtocol80 = 80
const fpcRawProtocol81 = 81
const fpcRawProtocol82 = 82
const fpcRawProtocol83 = 83
const fpcRawProtocol84 = 84
const fpcRawProtocol85 = 85
const fpcRawProtocol86 = 86
const fpcRawProtocol87 = 87
const fpcRawProtocol88 = 88
const fpcRawProtocol89 = 89
const fpcRawProtocol90 = 90
const fpcRawProtocol91 = 91
const fpcRawProtocol92 = 92
const fpcRawProtocol93 = 93
const fpcRawProtocol94 = 94
const fpcRawProtocol95 = 95
const fpcRawProtocol96 = 96
const fpcRawProtocol97 = 97
const fpcRawProtocol98 = 98
const fpcRawProtocol99 = 99
const fpcRawProtocol100 = 100
const fpcRawProtocol101 = 101
const fpcRawProtocol102 = 102
const fpcRawProtocol103 = 103
const fpcRawProtocol104 = 104
const fpcRawProtocol105 = 105
const fpcRawProtocol106 = 106
const fpcRawProtocol107 = 107
const fpcRawProtocol108 = 108
const fpcRawProtocol109 = 109
const fpcRawProtocol110 = 110
const fpcRawProtocol111 = 111
const fpcRawProtocol112 = 112
const fpcRawProtocol113 = 113
const fpcRawProtocol114 = 114
const fpcRawProtocol115 = 115
const fpcRawProtocol116 = 116
const fpcRawProtocol117 = 117
const fpcRawProtocol118 = 118
const fpcRawProtocol119 = 119
const fpcRawProtocol120 = 120
const fpcRawProtocol121 = 121
const fpcRawProtocol122 = 122
const fpcRawProtocol123 = 123
const fpcRawProtocol124 = 124
const fpcRawProtocol125 = 125
const fpcRawProtocol126 = 126
const fpcRawProtocol127 = 127
const fpcRawProtocol128 = 128
const fpcRawProtocol129 = 129
const fpcRawProtocol130 = 130
const fpcRawProtocol131 = 131
const fpcRawProtocol132 = 132
const fpcRawProtocol133 = 133
const fpcRawProtocol134 = 134
const fpcRawProtocol135 = 135
const fpcRawProtocol136 = 136
const fpcRawProtocol137 = 137
const fpcRawProtocol138 = 138
const fpcRawProtocol139 = 139
const fpcRawProtocol140 = 140
const fpcRawProtocol141 = 141
const fpcRawProtocol142 = 142
const fpcRawProtocol143 = 143
const fpcRawProtocol144 = 144
const fpcRawProtocol145 = 145
const fpcRawProtocol146 = 146
const fpcRawProtocol147 = 147
const fpcRawProtocol148 = 148
const fpcRawProtocol149 = 149
const fpcRawProtocol150 = 150
const fpcRawProtocol151 = 151
const fpcRawProtocol152 = 152
const fpcRawProtocol153 = 153
const fpcRawProtocol154 = 154
const fpcRawProtocol155 = 155
const fpcRawProtocol156 = 156
const fpcRawProtocol157 = 157
const fpcRawProtocol158 = 158
const fpcRawProtocol159 = 159
const fpcRawProtocol160 = 160
const fpcRawProtocol161 = 161
const fpcRawProtocol162 = 162
const fpcRawProtocol163 = 163
const fpcRawProtocol164 = 164
const fpcRawProtocol165 = 165
const fpcRawProtocol166 = 166
const fpcRawProtocol167 = 167
const fpcRawProtocol168 = 168
const fpcRawProtocol169 = 169
const fpcRawProtocol170 = 170
const fpcRawProtocol171 = 171
const fpcRawProtocol172 = 172
const fpcRawProtocol173 = 173
const fpcRawProtocol174 = 174
const fpcRawProtocol175 = 175
const fpcRawProtocol176 = 176
const fpcRawProtocol177 = 177
const fpcRawProtocol178 = 178
const fpcRawProtocol179 = 179
const fpcRawProtocol180 = 180
const fpcRawProtocol181 = 181
const fpcRawProtocol182 = 182
const fpcRawProtocol183 = 183
const fpcRawProtocol184 = 184
const fpcRawProtocol185 = 185
const fpcRawProtocol186 = 186
const fpcRawProtocol187 = 187
const fpcRawProtocol188 = 188
const fpcRawProtocol189 = 189
const fpcRawProtocol190 = 190
const fpcRawProtocol191 = 191
const fpcRawProtocol192 = 192
const fpcRawProtocol193 = 193
const fpcRawProtocol194 = 194
const fpcRawProtocol195 = 195
const fpcRawProtocol196 = 196
const fpcRawProtocol197 = 197
const fpcRawProtocol198 = 198
const fpcRawProtocol199 = 199
const fpcRawProtocol200 = 200
const fpcRawProtocol201 = 201
const fpcRawProtocol202 = 202
const fpcRawProtocol203 = 203
const fpcRawProtocol204 = 204
const fpcRawProtocol205 = 205
const fpcRawProtocol206 = 206
const fpcRawProtocol207 = 207
const fpcRawProtocol208 = 208
const fpcRawProtocol209 = 209
const fpcRawProtocol210 = 210
const fpcRawProtocol211 = 211
const fpcRawProtocol212 = 212
const fpcRawProtocol213 = 213
const fpcRawProtocol214 = 214
const fpcRawProtocol215 = 215
const fpcRawProtocol216 = 216
const fpcRawProtocol217 = 217
const fpcRawProtocol218 = 218
const fpcRawProtocol219 = 219
const fpcRawProtocol220 = 220
const fpcRawProtocol221 = 221
const fpcRawProtocol222 = 222
const fpcRawProtocol223 = 223
const fpcRawProtocol224 = 224
const fpcRawProtocol225 = 225
const fpcRawProtocol226 = 226
const fpcRawProtocol227 = 227
const fpcRawProtocol228 = 228
const fpcRawProtocol229 = 229
const fpcRawProtocol230 = 230
const fpcRawProtocol231 = 231
const fpcRawProtocol232 = 232
const fpcRawProtocol233 = 233
const fpcRawProtocol234 = 234
const fpcRawProtocol235 = 235
const fpcRawProtocol236 = 236
const fpcRawProtocol237 = 237
const fpcRawProtocol238 = 238
const fpcRawProtocol239 = 239
const fpcRawProtocol240 = 240
const fpcRawProtocol241 = 241
const fpcRawProtocol242 = 242
const fpcRawProtocol243 = 243
const fpcRawProtocol244 = 244
const fpcRawProtocol245 = 245
const fpcRawProtocol246 = 246
const fpcRawProtocol247 = 247
const fpcRawProtocol248 = 248
const fpcRawProtocol249 = 249
const fpcRawProtocol250 = 250
const fpcRawProtocol251 = 251
const fpcRawProtocol252 = 252
const fpcRawProtocol253 = 253
const fpcRawProtocol254 = 254

const fpcInbound = 0
const fpcOutbound = 1

const fpcReceiveOnly = 0
const fpcSendOnly = 1
const fpcReceiveSend = 2
const fpcSendReceive = 3

const fpcProxyWebLog = &H00000001&
const fpcProxyFwLog = &H00000002&
const fpcProxyMailLog = &H00000004&

const fpcFullPath = 0
const fpcRelativePath = 1

const fpcNoService = &H00000000&
const fpcFwSrvSvc = &H00000001&
const fpcJobSchedSvc = &H00000002&
const fpcMSDESvc = &H00000004&
const fpcAllServices = &HFFFFFFFF&
Dim fpcIsaDatabaseLogSvc = fpcMSDESvc

const fpcAllIpTraffic = 0
const fpcSpecifiedProtocols = 1
const fpcAllExceptSpecifiedProtocols = 2

const fpcFile_EXT_Format = 0
const fpcFile_ISA_Format = 1
const fpcODBC = 2
const fpcMSDE = 3
const fpcSQLDirectConnection = 4
Dim fpcIsaDatabaseLog = fpcMSDE

const fpcWinAuth = 0
const fpcSQLAuth = 1

const fpcTypeStandardEdition = 0
const fpcTypeEnterpriseEdition = 1

const fpcIsaStandardEdition = &H10&
const fpcIsaEnterpriseEdition = &H20&

const fpcRunOnce = 0
const fpcRunDaily = 1
const fpcRunOnSpecifiedDaysOfWeek = 2
const fpcRunOnSpecifiedDayOfMonth = 3

const fpcAppliesToAllContent = 0
const fpcAppliesToSpecifiedContent = 1

const fpcServeFromCacheIfValidObjectExists = 0
const fpcServeFromCacheIfObjectExists = 1
const fpcServeFromCacheOnly = 2

const fpcCacheAlways = 0
const fpcCacheCacheableAndDynamic = 1
const fpcCacheCacheable = 2
const fpcNeverCache = 3

const fpcFilterDirectionForward = 0
const fpcFilterDirectionReverse = 1
const fpcFilterDirectionBoth = 2

const fpcServiceTypeUnknown = &H00000000&
const fpcServiceTypeWebProxyReverse = &H00000001&
const fpcServiceTypeWebProxyForward = &H00000002&
const fpcServiceTypeWebProxyBoth = &H00000003&

const fpcAuthenticationSchemeProvidesNothing = &H00000000&
const fpcAuthenticationSchemeProvidesNamespace = &H00000001&
const fpcAuthenticationSchemeProvidesMethod = &H00000002&
const fpcAuthenticationSchemeProvidesBoth = &H00000003&

const fpcNone = &H00000000&
const fpcSundayBit = &H00000001&
const fpcMondayBit = &H00000002&
const fpcTuesdayBit = &H00000004&
const fpcWednesdayBit = &H00000008&
const fpcThursdayBit = &H00000010&
const fpcFridayBit = &H00000020&
const fpcSaturdayBit = &H00000040&

const fpcFetchTtlIfNone = &H00000001&
const fpcFetchTtlOverride = &H00000002&
const fpcFetchSynchronous = &H00000004&
const fpcFetchNoArrayRouting = &H00000008&
const fpcFetchForceCache = &H00000010&
const fpcFetchDynamicCache = &H00000020&

const fpcSSLDontRequireSecureChannel = 0
const fpcSSLRequireSecureChannel = 1
const fpcSSLRequire128bitSecureChannel = 2
const fpcSSLRequireBoth = 3

const fpcNoComponents = &H00000000&
const fpcNATComponent = &H00000002&
const fpcWEBProxy = &H00000004&
const fpcHTTPTransparent = &H00000008&
const fpcGenericFwProtocols = &H00000010&
const fpcFirewallExtensions = &H00000020&
const fpcAllComponents = &HFFFFFFFF&

const fpcNameSystem_DNS = 0
const fpcNameSystem_WINS = 1
const fpcNameSystem_IP = 2

const fpcFilterPriority_Low = 0
const fpcFilterPriority_Medium = 1
const fpcFilterPriority_High = 2

const fpcBrowserDefaultScript = 0
const fpcBrowserCustomScript = 1

const fpcKB = 1
const fpcMB = 2
const fpcGB = 3

const fpcOnce = 0
const fpcRecurring = 1

const fpcStandardNetwork = 0
const fpcVPNClients = 1
const fpcLocalHost = 2
const fpcDefaultExternal = 3
const fpcInternalNetwork = 4
const fpcQuarantinedVPNClients = 5

const fpcRoute = 0
const fpcNat = 1

const fpcVpnQuarantineDisabled = 0
const fpcVpnQuarantineEnabled = 1
const fpcVpnQuarantineEnabledWithRadiusPolicy = 2

const fpcVpnL2TP = 0
const fpcVpnPPTP = 1
const fpcVpnSSTP = 2

const fpcVpnCertificate = 0
const fpcVpnPresharedKey = 1

const fpcVpnDES = 0
const fpcVpn3DES = 1
const fpcVpnAES128 = 2
const fpcVpnAES192 = 3
const fpcVpnAES256 = 4
const fpcVpnGCMAES128 = 5
const fpcVpnGCMAES192 = 6
const fpcVpnGCMAES256 = 7

const fpcVpnSHA1 = 0
const fpcVpnMD5 = 1
const fpcVpnSHA256 = 2

const fpcVpnDHGroup1 = 0
const fpcVpnDHGroup2 = 1
const fpcVpnDHGroup2048 = 2
const fpcVpnDHECPGroup256 = 3
const fpcVpnDHECPGroup384 = 4

const fpcAdapter = 0
const fpcVPNConnection = 1
const fpcDialupConnection = 2
const fpcVirtualConnection = 3
const fpcIPSecConnection = 4

const fpcSelectedNetworks = 0
const fpcAllExceptSelectedNetworks = 1

const fpcAllIPAddresses = 0
const fpcDefaultIPAddress = 1
const fpcSpecifiedIPAddress = 2

const fpcExportImportPasswords = &H00000001&
const fpcExportImportUserPermissions = &H00000002&
const fpcExportImportServerSpecific = &H00000004&
const fpcExportImportEnterpriseSpecific = &H00000008&

const fpcReportJobPeriodDay = 0
const fpcReportJobPeriodWeek = 1
const fpcReportJobPeriodMonth = 2
const fpcReportJobPeriodYear = 3
const fpcReportJobPeriodCustom = 4
const fpcReportJobPeriodImmediate = 5

const FpcReportParameterDataString = 0
const FpcReportParameterDataInt = 1
const FpcReportParameterDataCombo = 2

const fpcReportJobCategorySummaryBit = &H00000001&
const fpcReportJobCategoryWebUsageBit = &H00000002&
const fpcReportJobCategoryApplicationUsageBit = &H00000004&
const fpcReportJobCategoryTrafficAndUtilizationBit = &H00000008&
const fpcReportJobCategorySecurityBit = &H00000010&
const fpcReportJobCategoryMalwareInspectionBit = &H00000020&
const fpcReportJobCategoryUrlFilteringBit = &H00000040&
const fpcReportJobCategoryIpsBit = &H00000080&

const fpcSecurityAlerts = 0
const fpcCacheAlerts = 1
const fpcRoutingAlerts = 2
const fpcFwServiceAlerts = 3
const fpcOtherAlerts = 4
const fpcNLBAlerts = 5

const fpcAlertError = 0
const fpcAlertWarning = 1
const fpcAlertInformation = 2

const fpcReportFailed = 0
const fpcReportSucceeded = 1
const fpcReportRunning = 2
const fpcReportNotRun = 3

const fpcRequestsSortOrder = 0
const fpcUsersSortOrder = 1
const fpcBytesInSortOrder = 2
const fpcBytesOutSortOrder = 3
const fpcTotalBytesSortOrder = 4

Dim fpcTopSitesRequests = fpcRequestsSortOrder
Dim fpcTopSitesUsers = fpcUsersSortOrder
Dim fpcTopSitesBytesIn = fpcBytesInSortOrder
Dim fpcTopSitesBytesOut = fpcBytesOutSortOrder
Dim fpcTopSitesTotalBytes = fpcTotalBytesSortOrder

Dim fpcTopUsersRequests = fpcRequestsSortOrder
Dim fpcTopUsersBytesIn = fpcBytesInSortOrder
Dim fpcTopUsersBytesOut = fpcBytesOutSortOrder
Dim fpcTopUsersTotalBytes = fpcTotalBytesSortOrder

Dim fpcWebProtocolRequests = fpcRequestsSortOrder
Dim fpcWebProtocolUsers = fpcUsersSortOrder
Dim fpcWebProtocolBytesIn = fpcBytesInSortOrder
Dim fpcWebProtocolBytesOut = fpcBytesOutSortOrder
Dim fpcWebProtocolTotalBytes = fpcTotalBytesSortOrder

Dim fpcAppProtocolRequests = fpcRequestsSortOrder
Dim fpcAppProtocolUsers = fpcUsersSortOrder

Dim fpcCacheRequests = fpcRequestsSortOrder
Dim fpcCacheBytes = fpcTotalBytesSortOrder

Dim fpcTopAppsRequests = fpcRequestsSortOrder
Dim fpcTopAppsUsers = fpcUsersSortOrder

Dim fpcBrowsersRequests = fpcRequestsSortOrder
Dim fpcBrowsersUsers = fpcUsersSortOrder

Dim fpcOperatingSystemsRequests = fpcRequestsSortOrder
Dim fpcOperatingSystemsUsers = fpcUsersSortOrder

Dim fpcObjectTypesRequests = fpcRequestsSortOrder
Dim fpcObjectTypesUsers = fpcUsersSortOrder
Dim fpcObjectTypesBytesIn = fpcBytesInSortOrder

Dim fpcTopDestinationsRequests = fpcRequestsSortOrder
Dim fpcTopDestinationsUsers = fpcUsersSortOrder
Dim fpcTopDestinationsBytesIn = fpcBytesInSortOrder
Dim fpcTopDestinationsBytesOut = fpcBytesOutSortOrder
Dim fpcTopDestinationsTotalBytes = fpcTotalBytesSortOrder

Dim fpcUrlCategoriesRequests = fpcRequestsSortOrder
Dim fpcUrlCategoriesBytesIn = fpcBytesInSortOrder
Dim fpcUrlCategoriesBytesOut = fpcBytesOutSortOrder
Dim fpcUrlCategoriesTotalBytes = fpcTotalBytesSortOrder

Dim fpcIpsProtocolsRequests = fpcRequestsSortOrder
Dim fpcIpsProtocolsTotalBytes = fpcTotalBytesSortOrder

const fpcProtocolCategoriesAll = &H00000000&
const fpcProtocolCategoryUserDefined = &H00000001&
const fpcProtocolCategoryCommon = &H00000002&
const fpcProtocolCategoryInfrastructure = &H00000004&
const fpcProtocolCategoriesMail = &H00000008&
const fpcProtocolCategoriesMessaging = &H00000010&
const fpcProtocolCategoriesRemote = &H00000020&
const fpcProtocolCategoriesMedia = &H00000040&
const fpcProtocolCategoriesVpnIpsec = &H00000080&
const fpcProtocolCategoriesWeb = &H00000100&
const fpcProtocolCategoriesAuthentication = &H00000200&
const fpcProtocolCategoryIPv6Infrastructure = &H00000400&
const fpcAllProtocolCategories = &HFFFFFFFF&

const fpcNoFilter = 0

const fpcNoCondition = &H00000000&
const fpcEqual = &H00000001&
const fpcNotEqual = &H00000002&
const fpcGreaterOrEqual = &H00000004&
const fpcLessOrEqual = &H00000008&
const fpcOnOrAfter = &H00000010&
const fpcOnOrBefore = &H00000020&
const fpcContains = &H00000040&
const fpcLiveData = &H00000080&
const fpcLastHour = &H00000100&
const fpcLast24Hours = &H00000200&
const fpcLast7days = &H00000400&
const fpcLast30days = &H00000800&
const fpcNotContains = &H00001000&
const fpcOneOf = &H00002000&
const fpcNotOneOf = &H00004000&

const fpcNoValueType = 0
const fpcNumeric = 1
const fpcDate = 2
const fpcString = 3
const fpcIPAddress = 4
const fpcEnum = 5
const fpcMultipleStrings = 6
const fpcMultipleEnums = 7

const fpcNoFilterType = 0
const fpcSessionsFilter = 1
const fpcLogViewerFilter = 2

const fpcNoSessionType = 0
const fpcSecureNetSession = 1
const fpcFirewallClientSession = 2
const fpcProxySession = 3
const fpcVpnRemoteAccessSession = 4
const fpcVpnRemoteSiteSession = 5

const fpcSessionFound = 0
const fpcSessionAllFound = 1
const fpcSessionCreated = 2
const fpcSessionDisconnected = 3
const fpcSessionDisconnectedAll = 4
const fpcSessionNetworkChanged = 5
const fpcSessionConnectionRestored = 6
const fpcSessionFilteredOut = 7

const fpcSystemPolicyConfigGroup_Unknown = -1
const fpcSystemPolicyConfigGroup_AD = 0
const fpcSystemPolicyConfigGroup_Radius = 1
const fpcSystemPolicyConfigGroup_Passport = 2
const fpcSystemPolicyConfigGroup_RSASecureId = 3
const fpcSystemPolicyConfigGroup_DNS = 4
const fpcSystemPolicyConfigGroup_DHCP = 5
const fpcSystemPolicyConfigGroup_RemoteMgmt_FWCONTROL = 6
const fpcSystemPolicyConfigGroup_RemoteMgmt_TS = 7
const fpcSystemPolicyConfigGroup_RemoteMgmt_ICMP = 8
const fpcSystemPolicyConfigGroup_RemoteLogging = 9
const fpcSystemPolicyConfigGroup_RemoteLogging_SQL = 10
const fpcSystemPolicyConfigGroup_ICMP = 11
const fpcSystemPolicyConfigGroup_Prefetcher = 12
const fpcSystemPolicyConfigGroup_ManagementSites = 13
const fpcSystemPolicyConfigGroup_ClientSetup = 14
const fpcSystemPolicyConfigGroup_Perfmon = 15
const fpcSystemPolicyConfigGroup_Diag_WinNet = 16
const fpcSystemPolicyConfigGroup_Diag_Watson = 17
const fpcSystemPolicyConfigGroup_MOM = 18
const fpcSystemPolicyConfigGroup_Diag_Connectivity = 19
const fpcSystemPolicyConfigGroup_VPN = 20
const fpcSystemPolicyConfigGroup_NTP = 21
const fpcSystemPolicyConfigGroup_SMTP = 22
const fpcSystemPolicyConfigGroup_CRL = 23
const fpcSystemPolicyConfigGroup_ConfigServer = 24
const fpcSystemPolicyConfigGroup_ConfigLocalServer = 25
const fpcSystemPolicyConfigGroup_ReplicateGroup = 26
const fpcSystemPolicyConfigGroup_IntraArray = 27
const fpcSystemPolicyConfigGroup_RemoteMgmt_Http = 28
const fpcSystemPolicyConfigGroup_IPv6_Infrastructure = 29
const fpcSystemPolicyConfigGroup_MicrosoftUpdates = 30
const fpcSystemPolicyConfigGroup_SMTP_Protection = 31
const fpcSystemPolicyConfigGroup_Exchange_EdgeSync = 32
const fpcSystemPolicyConfigGroup_client_notification = 33
const fpcSystemPolicyConfigGroup_DirectAccess_IPv6_Infrastructure = 34
const fpcSystemPolicyConfigGroup_DirectAccess_Transition_Technologies = 35
const fpcSystemPolicyConfigGroup_DirectAccess_IPv6_From_Localhost = 36
const fpcSystemPolicyConfigGroup_Stirling_Connectivity = 37
const fpcSystemPolicyConfigGroup_Stirling_ComputerResponses = 38
const fpcSystemPolicyConfigGroup_MaxGroups = 39

const fpcHttpRequest = 0
const fpcPingRequest = 1
const fpcTcpConnect = 2

const fpcGroupFirst = 0
Dim fpcGroupActiveDirectory = fpcGroupFirst
const fpcGroupDHCP = 1
const fpcGroupDNS = 2
const fpcGroupPublishedServer = 3
const fpcGroupWeb = 4
const fpcGroupOther = 5
Dim fpcGroupLast = fpcGroupOther

const fpcConnNoError = 0
const fpcConnDNSUnreachable = 1
const fpcConnUnresolvedName = 2
const fpcConnAuthenticationRequired = 3
const fpcConnTimeout = 4
const fpcConnError = 5

const fpcActionNotLogged = 0
const fpcActionBind = 1
const fpcActionListen = 2
const fpcActionGHBN = 3
const fpcActionGHBA = 4
const fpcActionRedirectBind = 5
const fpcActionEstablish = 6
const fpcActionTerminate = 7
const fpcActionDenied = 8
const fpcActionAllowed = 9
const fpcActionFailed = 10
const fpcActionIntermediate = 11
const fpcActionSuccessfulConnection = 12
const fpcActionUnsuccessfulConnection = 13
const fpcActionDisconnection = 14
const fpcActionUserclearedQuarantine = 15
const fpcActionQuarantinetimeout = 16
const fpcActionUserQuarantined = 17

const fpcClientAuthenticatedNotLogged = 0
const fpcClientAuthenticatedYes = 1
const fpcClientAuthenticatedNo = 2

const fpcLogServiceUnknown = 0
const fpcLogServiceProxy = 1
const fpcLogServiceReverseProxy = 2
const fpcLogServiceExternalProxy = 3

const fpcSrcUnknown = 0
const fpcSrcCache = 1
const fpcSrcVerifiedCache = 2
const fpcSrcNotVerifiedCache = 3
const fpcSrcVerifyFailedInternet = 4
const fpcSrcInternet = 5
const fpcSrcMember = 6
const fpcSrcUpstream = 7
const fpcSrcNotModified = 8

const fpcBidirectionalNotLogged = 0
const fpcBidirectionalYes = 1
const fpcBidirectionalNo = 2

const fpcNLBAffinitySingle = 1

const fpcNLBOperationModeUnicast = 0
const fpcNLBOperationModeMulticast = 1
const fpcNLBOperationModeIGMP = 2

const fpcStatusUnknown = 0
const fpcStatusNoNLBConfiguration = 1
const fpcStatusNLBConfiguring = 2
const fpcStatusNLBRunning = 3
const fpcStatusNLBDrainstoppingDueToAdminRequest = 4
const fpcStatusNLBStoppedDueToAdminRequest = 5
const fpcStatusNLBStoppedDueToLocalProblem = 6
const fpcStatusNLBStoppedDueToVpn = 7
const fpcStatusNLBSuspended = 8

const fpcArrayScope = 0
const fpcEnterpriseScope = 1

const fpcDelegatedAdminSidValid = &H01&
const fpcDelegatedAdminNameValid = &H02&

const fpcConfigurationStorageServerConnectionLDAP = 0
const fpcConfigurationStorageServerConnectionLDAPS = 1

const fpcStatusNotSynced = 0
const fpcStatusUpdating = 1
const fpcStatusSynced = 2
const fpcStatusError = 3

const fpcResponsive = 0
const fpcNonResponsive = 1
const fpcValidating = 2

const fpcRsFwSrv = 0
const fpcRsFwCtrl = 1
const fpcRsFwSched = 2
const fpcRsIsaStg = 3
const fpcRsFwMngdCtrl = 4
const fpcRPCServicesMax = 5

const fpcCopySchedules = &H001&
const fpcCopyProtocols = &H002&
const fpcCopyUrlSets = &H004&
const fpcCopyDomainNameSets = &H008&
const fpcCopyContentTypeSets = &H010&
const fpcCopyUserSets = &H020&
const fpcCopyComputers = &H040&
const fpcCopyAddressRanges = &H080&
const fpcCopySubnets = &H100&
const fpcCopyComputerSets = &H200&
const fpcCopyNetworks = &H400&

const fpcSpoofDetectionDropAll = 0
const fpcSpoofDetectionStrict = 1
const fpcSpoofDetectionByRoutingTable = 2
const fpcSpoofDetectionDisabled = 3

const fpcNoValue = 0
const fpcOptOut = 1
const fpcOptIn = 2

const fpcNoFailure = 0
const fpcNoPrivateKey = 1
const fpcNotIntendedForSessionKeyExchange = 2
const fpcNoPrivateKeyHandle = 3

const fpcLocalMachinePersonalStore = 0
const fpcFirewallServicePersonalStore = 1
const fpcCurrentUserPersonalStore = 2
const fpcTrustedRootStore = 3
const fpcIntermediateCertificatesStore = 4

const fpcNoLogonTypeEnforcement = 0
const fpcEnforcePublicLogonType = 1

const fpcLinkTranslationNormal = 0
const fpcLinkTranslationOwa12Redirection = 1
const fpcLinkTranslationOffAfterPatternMatch = 2
const fpcLinkTranslationOnAfterPatternMatch = 3

const fpcNoOptionsOn = &H00000000&
const fpcEscapeColon = &H00000001&
const fpcAllowTranslationOfPartialLinks = &H00000002&

const fpcStatusNoFailure = &H000&
const fpcServiceStoreFailedToOpen = &H001&
const fpcUserStoreFailedToOpen = &H002&

const FpcRedirectHTTPAsHTTPSDisabled = 0
const FpcRedirectHTTPAsHTTPSIfAuthenticated = 1
const FpcRedirectHTTPAsHTTPSAlways = 2

const fpcCertificateRestrictionIssuer = 0
const fpcCertificateRestrictionSubject = 1
const fpcCertificateRestrictionEnhancedKeyUsage = 2
const fpcCertificateRestrictionExtendedProperties = 3

const fpcMatchAnyOID = 0
const fpcMatchSpecificOID = 1

const fpcMatchAnyValue = 0
const fpcMatchCaseInsensitiveCompare = 1
const fpcMatchCaseInsensitiveSubString = 2

const fpcISA2006 = 1
const fpcISA2008 = 2
const fpcCompatVersionNotApplicable = 3

const fpcCommonOperation = 0
const fpcAddArrayOperation = 1

const fpcGeneralWebServer = 0
const fpcExchangeServer = 1
const fpcSharePointServer = 2

const fpcRegularStorageConnection = 0
const fpcSSLStorageConnection = 1

const fpcUpdateActionCheckAndInstall = 0
const fpcUpdateActionCheckOnly = 1
const fpcUpdateActionDoNothing = 2
const fpcUpdateActionOverride = 3

const fpcScheduleTypeEvery15Minutes = 0
const fpcScheduleTypeOnceOnSelectedDay = 1

const fpcIspRedundancyDisabled = 0
const fpcIspRedundancyLoadBalancing = 1
const fpcIspRedundancyFailover = 2

const fpcDayOfWeekEveryDay = 0
const fpcDayOfWeekSunday = 1
const fpcDayOfWeekMonday = 2
const fpcDayOfWeekTuesday = 3
const fpcDayOfWeekWednesday = 4
const fpcDayOfWeekThursday = 5
const fpcDayOfWeekFriday = 6
const fpcDayOfWeekSaturday = 7

const fpcUpdatesStatusStarted = 0
const fpcUpdatesStatusSearching = 1
const fpcUpdatesStatusSearchCompleted = 2
const fpcUpdatesStatusDownloading = 3
const fpcUpdatesStatusDownloadCompleted = 4
const fpcUpdatesStatusInstalling = 5
const fpcUpdatesStatusInstallCompleted = 6
const fpcUpdatesStatusUpToDate = 7
const fpcUpdatesStatusUpdatesAvailable = 8
const fpcUpdatesStatusError = 9
const fpcUpdatesStatusCancelled = 10
const fpcUpdatesStatusNever = 11
const fpcUpdatesStatusUnavailable = 12
const fpcUpdatesStatusFeatureDisabled = 13
const fpcUpdatesStatusErrorLicenseExpired = 14

const fpcIspLinkAutomaticStatus = 0
const fpcIspLinkManualConnectedStatus = 1
const fpcIspLinkManualDisconnectedStatus = 2

const fpcLinkDown = 0
const fpcLinkLocal = 1
const fpcLinkInet = 2

const fpcPrimaryLink = 0
const fpcSecondaryLink = 1
const fpcNumberOfLinks = 2

const fpcLoadBalancingFactorMin = 0
const fpcLoadBalancingFactorMax = 100

const fpcIspLinkResumeMinimalTime = 300

const fpcKeySize512 = 9
const fpcKeySize1024 = 10
const fpcKeySize2048 = 11
const fpcKeySize4096 = 12
const fpcKeySizeMinSupported = 512
const fpcKeySizeMaxSupported = 4096

const fpcSelectedCategories = 0
const fpcAllExceptSelectedCategories = 1

const fpcGroupNone = 0
const fpcWebAccessGroup = 1
const fpcWebPublishingGroup = 2
const fpcServerPublishingGroup = 3
const fpcVoIPAccessGroup = 4
const fpcCustomGroup = 100

const fpcAdapterConnectionDefault = 0
const fpcAdapterConnectionDialup = 1

const fpcAdapterStateConnected = 1
const fpcAdapterStateDisabled = 2
const fpcAdapterStateDisconnected = 4

const fpcActivityStatisticsPeriodDaily = 0
const fpcActivityStatisticsPeriodMonthly = 1

const fpcMalwareInspectionActionNone = 0
const fpcMalwareInspectionActionAllowed = 1
const fpcMalwareInspectionActionCleaned = 2
const fpcMalwareInspectionActionBlocked = 3

const fpcMalwareInspectionActionReasonNone = 0
const fpcMalwareInspectionActionReasonNoneDetected = 1
const fpcMalwareInspectionActionReasonLowMediumThreatsAllowed = 2
const fpcMalwareInspectionActionReasonInfected = 3
const fpcMalwareInspectionActionReasonSuspiciousFile = 4
const fpcMalwareInspectionActionReasonEncryptedFile = 5
const fpcMalwareInspectionActionReasonMaxArchiveNestingExceeded = 6
const fpcMalwareInspectionActionReasonMaxSizeExceeded = 7
const fpcMalwareInspectionActionReasonMaxUnpackedSizeExceeded = 8
const fpcMalwareInspectionActionReasonUnknownEncoding = 9
const fpcMalwareInspectionActionReasonCorruptedFile = 10
const fpcMalwareInspectionActionReasonTimeOut = 11
const fpcMalwareInspectionActionReasonStorageLimitExceeded = 12
const fpcMalwareInspectionActionReasonUnsupportedFormat = 13
const fpcMalwareInspectionActionReasonStatusNotRequested = 14
const fpcMalwareInspectionActionReasonOther = 15
const fpcMalwareInspectionActionReasonDisabled = 16
const fpcMalwareInspectionActionReasonDisabledForPolicyRule = 17
const fpcMalwareInspectionActionReasonDisabledForChainingRule = 18
const fpcMalwareInspectionActionReasonExceptionList = 19
const fpcMalwareInspectionActionReasonProxyOriginatedResponse = 20
const fpcMalwareInspectionActionReasonServedByFilter = 21
const fpcMalwareInspectionActionReasonStreaming = 22
const fpcMalwareInspectionActionReasonResponseToConnect = 23
const fpcMalwareInspectionActionReasonRoutedByCarp = 24
const fpcMalwareInspectionActionReasonSourceExceptionList = 25
const fpcMalwareInspectionActionReasonDefinitionsFolderNotSpecified = 26
const fpcMalwareInspectionActionReasonRangeResponse = 27

const fpcMalwareInspectionThreatLevelNone = 0
const fpcMalwareInspectionThreatLevelLow = 1
const fpcMalwareInspectionThreatLevelMedium = 2
const fpcMalwareInspectionThreatLevelHigh = 3
const fpcMalwareInspectionThreatLevelSevere = 4

const fpcMalwareInspectionContentDeliveryUnchanged = 0
const fpcMalwareInspectionContentDeliveryStandardTrickling = 1
const fpcMalwareInspectionContentDeliveryFastTrickling = 2
const fpcMalwareInspectionContentDeliveryProgressNotification = 3

const fpcBestUserExperinceLowPerformance = 0
const fpcGoodUserExperienceModeratePerformance = 1
const fpcModerateUserExperienceGoodPerformance = 2
const fpcPoorUserExperienceBestPerformance = 3

const fpcTransportProtocolUndefined = 0
const fpcTransportProtocolHttp = 1

const fpcIpsScanResultUnknown = 0
const fpcIpsScanResultInspected = 1
const fpcIpsScanResultBlocked = 2
const fpcIpsScanResultDetected = 3

const fpcConfigurationStandalone = 0
const fpcConfigurationEnterprise = 1
const fpcDisconnected = 2

const fpcHttpsInspectionWithCertificateValidation = 0
const fpcHttpsInspectionCertificateValidationOnly = 1

const fpcSpyNetNoValue = 0
const fpcSpyNetDisabled = 1
const fpcSpyNetBasic = 2
const fpcSpyNetExtended = 3

const fpcNlmConnectivityDISCONNECTED = 0
const fpcNlmConnectivityIPV4_NOTRAFFIC = &H1&
const fpcNlmConnectivityIPV6_NOTRAFFIC = &H2&
const fpcNlmConnectivityIPV4_SUBNET = &H10&
const fpcNlmConnectivityIPV4_LOCALNETWORK = &H20&
const fpcNlmConnectivityIPV4_INTERNET = &H40&
const fpcNlmConnectivityIPV6_SUBNET = &H100&
const fpcNlmConnectivityIPV6_LOCALNETWORK = &H200&
const fpcNlmConnectivityIPV6_INTERNET = &H400&

const fpcMicrosoftUpdateSetting_OptIn = 0
const fpcMicrosoftUpdateSetting_OptOut = 1

const fpcSSLTerminationNone = 0
const fpcSSLTerminationWithCertificate = 1
const fpcSSLTerminationWithTLSTrail = 2

const fpcSSLClientCertificateIgnored = 0
const fpcSSLClientCertificateRequired = 1
const fpcSSLClientCertificateRequested = 2

const fpcSenderIdRejectMessage = 0
const fpcSenderIdDeleteMessage = 1
const fpcSenderIdStampMessage = 2

const fpcSenderFilterRejectMessage = 0
const fpcSenderFilterStampMessage = 1

const fpcSenderEMailAddress = 0
const fpcSenderDomainName = 1
const fpcSenderDomainWithSubdomainName = 2

const fpcInternalMailServers = 0
const fpcInternetMailServer = 1

const fpcForwardToSpecificAddress = 0
const fpcForwardUsingMxRecord = 1

const fpcDefaultAuthentication = 0
const fpcBasicAuthentication = 1
const fpcExchangeServerAuthentication = 2
const fpcExternallySecuredAuthentication = 3

const fpcDefaultMessage = 0
const fpcCustomMessage = 1

const fpcMailAntispamFilterListType_File = 0
const fpcMailAntispamFilterListType_MessageBody = 1

const fpcMailAntivirusEngine_None = &H00&
const fpcMailAntivirusEngine_Authentium = &H01&
const fpcMailAntivirusEngine_Kaspersky = &H02&
const fpcMailAntivirusEngine_Microsoft = &H04&
const fpcMailAntivirusEngine_Norman = &H08&
const fpcMailAntivirusEngine_VirusBuster = &H10&
Dim fpcMailAntivirusEngine_LastAntiVirus = fpcMailAntivirusEngine_VirusBuster
const fpcMailAntivirusEngine_WormList = &H20&
const fpcMailAntivirusEngine_CloudMark = &H40&
Dim fpcMailAntivirusEngine_Last = fpcMailAntivirusEngine_CloudMark
Dim fpcMailAntivirusEngine_First = fpcMailAntivirusEngine_Authentium
Dim fpcMailAntivirusEngine_Default = fpcMailAntivirusEngine_None

const fpcMailAntivirusEngineSelectionPolicy_All = 0
const fpcMailAntivirusEngineSelectionPolicy_Available = 1
const fpcMailAntivirusEngineSelectionPolicy_Dynamic = 2
const fpcMailAntivirusEngineSelectionPolicy_One = 3

const fpcMailAntivirusSenderInfo_MimeHeader = 0
const fpcMailAntivirusSenderInfo_MailFrom = 1

const fpcMailAntivirusAction_None = 0
const fpcMailAntivirusAction_Clean = 1
const fpcMailAntivirusAction_Delete = 2

const fpcMailAntivirusErrorAction_Ignore = 0
const fpcMailAntivirusErrorAction_SkipDetect = 1
const fpcMailAntivirusErrorAction_Delete = 2

const fpcMailIllegalMimeHeaderAction_Purge = 0
const fpcMailIllegalMimeHeaderAction_Ignore = 1

const fpcMailAntiSpamFilterAction_None = 0
const fpcMailAntiSpamFilterAction_Delete = 1
const fpcMailAntiSpamFilterAction_Purge = 2
const fpcMailAntiSpamFilterAction_Identify = 3

const fpcMailAntiSpamFileType_TEXT = &H00000001&
const fpcMailAntiSpamFileType_UNICODE = &H00000002&
const fpcMailAntiSpamFileType_EXE = &H00000003&
const fpcMailAntiSpamFileType_PIF = &H00000004&
const fpcMailAntiSpamFileType_EICAR = &H00000005&
const fpcMailAntiSpamFileType_DOC = &H00000006&
const fpcMailAntiSpamFileType_MSWORD12 = &H00000007&
const fpcMailAntiSpamFileType_MSEXCEL1 = &H00000008&
const fpcMailAntiSpamFileType_WRITE = &H00000009&
const fpcMailAntiSpamFileType_ZIP = &H0000000A&
const fpcMailAntiSpamFileType_LHA = &H0000000B&
const fpcMailAntiSpamFileType_MSCAB = &H0000000C&
const fpcMailAntiSpamFileType_ISCAB = &H0000000D&
const fpcMailAntiSpamFileType_DATAZ = &H0000000E&
const fpcMailAntiSpamFileType_GZIP = &H0000000F&
const fpcMailAntiSpamFileType_MSCOMPRESS = &H00000010&
const fpcMailAntiSpamFileType_ZOO = &H00000011&
const fpcMailAntiSpamFileType_ARJ = &H00000012&
const fpcMailAntiSpamFileType_ARC = &H00000013&
const fpcMailAntiSpamFileType_GIF = &H00000014&
const fpcMailAntiSpamFileType_JPEG = &H00000015&
const fpcMailAntiSpamFileType_BMP = &H00000016&
const fpcMailAntiSpamFileType_PCX = &H00000017&
const fpcMailAntiSpamFileType_PAL = &H00000018&
const fpcMailAntiSpamFileType_ICO = &H00000019&
const fpcMailAntiSpamFileType_WAV = &H0000001A&
const fpcMailAntiSpamFileType_AVI = &H0000001B&
const fpcMailAntiSpamFileType_RIF = &H0000001C&
const fpcMailAntiSpamFileType_QTMOVIE = &H0000001D&
const fpcMailAntiSpamFileType_MPEG1 = &H0000001E&
const fpcMailAntiSpamFileType_MSLIBRARY = &H0000001F&
const fpcMailAntiSpamFileType_OBJ = &H00000020&
const fpcMailAntiSpamFileType_SHORTCUT = &H00000021&
const fpcMailAntiSpamFileType_CLASS = &H00000022&
const fpcMailAntiSpamFileType_IMCMIME = &H00000023&
const fpcMailAntiSpamFileType_PDF = &H00000024&
const fpcMailAntiSpamFileType_UNINST = &H00000025&
const fpcMailAntiSpamFileType_TYPELIB = &H00000026&
const fpcMailAntiSpamFileType_HELP = &H00000027&
const fpcMailAntiSpamFileType_CHI = &H00000028&
const fpcMailAntiSpamFileType_JAR = &H00000029&
const fpcMailAntiSpamFileType_UNIXCOMPRESS = &H0000002A&
const fpcMailAntiSpamFileType_HYPERARC = &H0000002B&
const fpcMailAntiSpamFileType_PKLITE = &H0000002C&
const fpcMailAntiSpamFileType_TNEF = &H0000002D&
const fpcMailAntiSpamFileType_EPS = &H0000002E&
const fpcMailAntiSpamFileType_XARA = &H0000002F&
const fpcMailAntiSpamFileType_WMF = &H00000030&
const fpcMailAntiSpamFileType_WMFVISIO = &H00000031&
const fpcMailAntiSpamFileType_PNG = &H00000032&
const fpcMailAntiSpamFileType_TIFF = &H00000033&
const fpcMailAntiSpamFileType_AUTOCAD = &H00000034&
const fpcMailAntiSpamFileType_FONT1 = &H00000035&
const fpcMailAntiSpamFileType_TRUETYPE = &H00000036&
const fpcMailAntiSpamFileType_ANI = &H00000037&
const fpcMailAntiSpamFileType_MP3 = &H00000038&
const fpcMailAntiSpamFileType_NOTESDB = &H00000039&
const fpcMailAntiSpamFileType_MDB = &H0000003A&
const fpcMailAntiSpamFileType_SFXEXE = &H0000003B&
const fpcMailAntiSpamFileType_TAR = &H0000003C&
const fpcMailAntiSpamFileType_RAR = &H0000003D&
const fpcMailAntiSpamFileType_MACBIN = &H0000003E&
const fpcMailAntiSpamFileType_OPENXML = &H0000003F&

const fpcWAPLicenseType_Evaluation = 0
const fpcWAPLicenseType_Purchased = 1
const fpcWAPLicenseType_Disabled = 2
const fpcWAPLicenseType_NumberOf = 3

const fpcIPSLicenseType_Complementary = 0
const fpcIPSLicenseType_Disabled = 1
const fpcIPSLicenseType_NumberOf = 2

const fpcNoProtectionMechanism = &H00&
const fpcNetworkInspectionSystem = &H01&
const fpcMalwareInspection = &H02&
const fpcEmailAntivirus = &H04&
const fpcAllProtectionMechanisms = &HFF&

const fpcAutomaticPollingFrequency_15m = 0
const fpcAutomaticPollingFrequency_30m = 1
const fpcAutomaticPollingFrequency_45m = 2
const fpcAutomaticPollingFrequency_1h = 3
const fpcAutomaticPollingFrequency_2h = 4
const fpcAutomaticPollingFrequency_3h = 5
const fpcAutomaticPollingFrequency_4h = 6
const fpcAutomaticPollingFrequency_5h = 7
const fpcAutomaticPollingFrequency_6h = 8
const fpcAutomaticPollingFrequency_7h = 9
const fpcAutomaticPollingFrequency_8h = 10
const fpcAutomaticPollingFrequency_9h = 11
const fpcAutomaticPollingFrequency_10h = 12
const fpcAutomaticPollingFrequency_11h = 13
const fpcAutomaticPollingFrequency_12h = 14
const fpcAutomaticPollingFrequency_13h = 15
const fpcAutomaticPollingFrequency_14h = 16
const fpcAutomaticPollingFrequency_15h = 17
const fpcAutomaticPollingFrequency_16h = 18
const fpcAutomaticPollingFrequency_17h = 19
const fpcAutomaticPollingFrequency_18h = 20
const fpcAutomaticPollingFrequency_19h = 21
const fpcAutomaticPollingFrequency_20h = 22
const fpcAutomaticPollingFrequency_21h = 23
const fpcAutomaticPollingFrequency_22h = 24
const fpcAutomaticPollingFrequency_23h = 25
const fpcAutomaticPollingFrequency_24h = 26

const fpcNoSupportedUpdateAction = &H00&
const fpcSupportedUpdateActionCheckOnly = &H01&
const fpcSupportedUpdateActionInstall = &H02&
const fpcSupportedUpdateActionOverride = &H04&
const fpcAllSupportedUpdateActions = &H0F&

const fpcMicrosoftUpdateSourceDefault = 0
const fpcMicrosoftUpdateSourceDirect = 1
const fpcMicrosoftUpdateSourceFallbackToDirect = 2

const fpcApplicationNotTrusted = 0
const fpcApplicationIsTrusted = 1
const fpcApplicationTrustUnknown = 2

const fpcUrlCategorizationProviderUsed_Original = 0
const fpcUrlCategorizationProviderUsed_Overridden = 1

const fpcUrlCategorizationSourceUsed_OriginalUrl = 0
const fpcUrlCategorizationSourceUsed_Alias = 1
const fpcUrlCategorizationSourceUsed_PathOnly = 2
const fpcUrlCategorizationSourceUsed_IP = 3
const fpcUrlCategorizationSourceUsed_Invalid = 4

const fpcNisSignatureResponseBlockAndLog = 0
const fpcNisSignatureResponseLogOnly = 1

const fpcNisInitialSignatureConfigurationDefault = 0
const fpcNisInitialSignatureConfigurationLogOnly = 1
const fpcNisInitialSignatureConfigurationDisabled = 2

const fpcNisCategoryVulnerability = 0
const fpcNisCategoryExploit = 1
const fpcNisCategoryPolicy = 2
const fpcNisCategoryOther = 3

const fpcNisSeverityLevelLow = 0
const fpcNisSeverityLevelModerate = 1
const fpcNisSeverityLevelImportant = 2
const fpcNisSeverityLevelCritical = 3

const fpcNisRiskLevelLow = 0
const fpcNisRiskLevelModerate = 1
const fpcNisRiskLevelHigh = 2

const fpcNisFidelityLevelLow = 0
const fpcNisFidelityLevelMedium = 1
const fpcNisFidelityLevelHigh = 2
const fpcNisFidelityLevelPerfect = 3

const fpcNisBusinessImpactLevelLow = 0
const fpcNisBusinessImpactLevelModerate = 1
const fpcNisBusinessImpactLevelHigh = 2

const fpcFssUpdateStatusNever = 0
const fpcFssUpdateStatusSucceeded = 1
const fpcFssUpdateStatusFailed = 2
const fpcFssUpdateStatusUpToDate = 3

const fpcNisProtocolAnomaliesAllow = 0
const fpcNisProtocolAnomaliesBlock = 1

const fpcUrlCategorizationReasonNone = 0
const fpcUrlCategorizationFromOverrides = 1
const fpcUrlCategorizationFromCache = 2
const fpcUrlCategorizationFromWebService = 3
const fpcUrlCategorizationFailedUrlFilteringDisabled = 4
const fpcUrlCategorizationFailedUrlNotInDatabase = 5
const fpcUrlCategorizationFailedWebServiceConnectionError = 6
const fpcUrlCategorizationFailedWebServiceDown = 7
const fpcUrlCategorizationFailedLicenseExpired = 8

%>
