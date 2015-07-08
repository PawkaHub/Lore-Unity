#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItemSimple
struct PickupItemSimple_t544;
// UnityEngine.Collider
struct Collider_t194;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;

// System.Void PickupItemSimple::.ctor()
extern "C" void PickupItemSimple__ctor_m2269 (PickupItemSimple_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItemSimple_OnTriggerEnter_m2270 (PickupItemSimple_t544 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::Pickup()
extern "C" void PickupItemSimple_Pickup_m2271 (PickupItemSimple_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::PunPickupSimple(PhotonMessageInfo)
extern "C" void PickupItemSimple_PunPickupSimple_m2272 (PickupItemSimple_t544 * __this, PhotonMessageInfo_t463 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::RespawnAfter()
extern "C" void PickupItemSimple_RespawnAfter_m2273 (PickupItemSimple_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
