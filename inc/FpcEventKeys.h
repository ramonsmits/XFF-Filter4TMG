/*++

Copyright (c) Microsoft Corporation. All rights reserved.
THIS CODE IS MADE AVAILABLE AS IS, WITHOUT WARRANTY OF ANY KIND.
THE ENTIRE RISK OF THE USE OR THE RESULTS FROM THE USE OF THIS CODE REMAINS WITH THE USER.
USE AND REDISTRIBUTION OF THIS CODE, WITH OR WITHOUT MODIFICATION, IS HEREBY PERMITTED.

--*/

#ifndef _EVENT_KEYS_H_
#define _EVENT_KEYS_H_

//
// IMPORTANT:
// Some events are sub-divided with additional keys.
// Note: additional key '0' must be reserved for the meaning 'any'
//

///////////////////////////////////////////////////////////////////////////////
//  Additional keys enumerators

//
// related events:
// PSZ_ALERT_COMPONENT_LOAD_FAILURE_GUID
//
typedef enum EvtComponentLoad {
    ECL_AnyComponent,
    ECL_SystemDll,
    ECL_ApplicationFilter,
    ECL_WebFilter
} EvtComponentLoad;

//
// related events:
// 1. PSZ_ALERT_SERVER_PUBLISHING_RULE_FAILURE
// 2. PSZ_ALERT_SERVER_PUBLISHING_RULE_RECOVERY
//
typedef enum EvtPublishRuleFail {
    EPR_Any,
    EPR_BadConfiguration,
    EPR_NotApplicable
} EvtPublishRuleFail;

#endif // _EVENT_KEYS_H_

