﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct  MatchDirectConnectInfo_t4802  : public ResponseBase_t4791
{
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_2;
};
