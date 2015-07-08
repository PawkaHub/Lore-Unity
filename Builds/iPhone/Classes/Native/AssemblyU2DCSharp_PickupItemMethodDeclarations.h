#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItem
struct PickupItem_t543;
// UnityEngine.Collider
struct Collider_t194;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupItem::.ctor()
extern "C" void PickupItem__ctor_m2257 (PickupItem_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C" void PickupItem__cctor_m2258 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C" int32_t PickupItem_get_ViewID_m2259 (PickupItem_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItem_OnTriggerEnter_m2260 (PickupItem_t543 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PickupItem_OnPhotonSerializeView_m2261 (PickupItem_t543 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C" void PickupItem_Pickup_m2262 (PickupItem_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C" void PickupItem_Drop_m2263 (PickupItem_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C" void PickupItem_Drop_m2264 (PickupItem_t543 * __this, Vector3_t53  ___newPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C" void PickupItem_PunPickup_m2265 (PickupItem_t543 * __this, PhotonMessageInfo_t463 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C" void PickupItem_PickedUp_m2266 (PickupItem_t543 * __this, float ___timeUntilRespawn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C" void PickupItem_PunRespawn_m2267 (PickupItem_t543 * __this, Vector3_t53  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C" void PickupItem_PunRespawn_m2268 (PickupItem_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
