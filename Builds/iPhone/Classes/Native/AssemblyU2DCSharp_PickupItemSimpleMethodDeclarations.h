#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItemSimple
struct PickupItemSimple_t517;
// UnityEngine.Collider
struct Collider_t194;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void PickupItemSimple::.ctor()
extern "C" void PickupItemSimple__ctor_m2223 (PickupItemSimple_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItemSimple_OnTriggerEnter_m2224 (PickupItemSimple_t517 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::Pickup()
extern "C" void PickupItemSimple_Pickup_m2225 (PickupItemSimple_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::PunPickupSimple(PhotonMessageInfo)
extern "C" void PickupItemSimple_PunPickupSimple_m2226 (PickupItemSimple_t517 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::RespawnAfter()
extern "C" void PickupItemSimple_RespawnAfter_m2227 (PickupItemSimple_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
