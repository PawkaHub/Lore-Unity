#pragma once
#include <stdint.h>
// RaiseEventOptions
struct RaiseEventOptions_t465;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.EventCaching
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_EventCaching.h"
// ExitGames.Client.Photon.ReceiverGroup
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_ReceiverGroup.h"
// RaiseEventOptions
struct  RaiseEventOptions_t465  : public Object_t
{
	// ExitGames.Client.Photon.EventCaching RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] RaiseEventOptions::TargetActors
	Int32U5BU5D_t119* ___TargetActors_3;
	// ExitGames.Client.Photon.ReceiverGroup RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// System.Boolean RaiseEventOptions::ForwardToWebhook
	bool ___ForwardToWebhook_6;
	// System.Int32 RaiseEventOptions::CacheSliceIndex
	int32_t ___CacheSliceIndex_7;
	// System.Boolean RaiseEventOptions::Encrypt
	bool ___Encrypt_8;
};
struct RaiseEventOptions_t465_StaticFields{
	// RaiseEventOptions RaiseEventOptions::Default
	RaiseEventOptions_t465 * ___Default_0;
};
