#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t47;
// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t515;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// PickupItem
struct  PickupItem_t516  : public MonoBehaviour_t329
{
	// System.Single PickupItem::SecondsBeforeRespawn
	float ___SecondsBeforeRespawn_2;
	// System.Boolean PickupItem::PickupOnTrigger
	bool ___PickupOnTrigger_3;
	// System.Boolean PickupItem::PickupIsMine
	bool ___PickupIsMine_4;
	// UnityEngine.MonoBehaviour PickupItem::OnPickedUpCall
	MonoBehaviour_t47 * ___OnPickedUpCall_5;
	// System.Boolean PickupItem::SentPickup
	bool ___SentPickup_6;
	// System.Double PickupItem::TimeOfRespawn
	double ___TimeOfRespawn_7;
};
struct PickupItem_t516_StaticFields{
	// System.Collections.Generic.HashSet`1<PickupItem> PickupItem::DisabledPickupItems
	HashSet_1_t515 * ___DisabledPickupItems_8;
};
