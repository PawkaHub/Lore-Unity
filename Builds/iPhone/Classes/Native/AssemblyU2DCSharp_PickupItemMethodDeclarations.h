#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItem
struct PickupItem_t516;
// UnityEngine.Collider
struct Collider_t194;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupItem::.ctor()
extern "C" void PickupItem__ctor_m2211 (PickupItem_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C" void PickupItem__cctor_m2212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C" int32_t PickupItem_get_ViewID_m2213 (PickupItem_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItem_OnTriggerEnter_m2214 (PickupItem_t516 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PickupItem_OnPhotonSerializeView_m2215 (PickupItem_t516 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C" void PickupItem_Pickup_m2216 (PickupItem_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C" void PickupItem_Drop_m2217 (PickupItem_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C" void PickupItem_Drop_m2218 (PickupItem_t516 * __this, Vector3_t53  ___newPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C" void PickupItem_PunPickup_m2219 (PickupItem_t516 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C" void PickupItem_PickedUp_m2220 (PickupItem_t516 * __this, float ___timeUntilRespawn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C" void PickupItem_PunRespawn_m2221 (PickupItem_t516 * __this, Vector3_t53  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C" void PickupItem_PunRespawn_m2222 (PickupItem_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
