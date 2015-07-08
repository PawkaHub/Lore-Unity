#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// ServerSettings/HostingOption
#include "AssemblyU2DCSharp_ServerSettings_HostingOption.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// CloudRegionFlag
#include "AssemblyU2DCSharp_CloudRegionFlag.h"
// ServerSettings
struct  ServerSettings_t480  : public ScriptableObject_t501
{
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType_2;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol_3;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress_4;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort_5;
	// System.String ServerSettings::AppID
	String_t* ___AppID_6;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion_7;
	// CloudRegionFlag ServerSettings::EnabledRegions
	int32_t ___EnabledRegions_8;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t1 * ___RpcList_9;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard_10;
};
