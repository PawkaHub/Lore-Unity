﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupCamera
struct PickupCamera_t385;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupCamera::.ctor()
extern "C" void PickupCamera__ctor_m1393 (PickupCamera_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::OnEnable()
extern "C" void PickupCamera_OnEnable_m1394 (PickupCamera_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::DebugDrawStuff()
extern "C" void PickupCamera_DebugDrawStuff_m1395 (PickupCamera_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupCamera::AngleDistance(System.Single,System.Single)
extern "C" float PickupCamera_AngleDistance_m1396 (PickupCamera_t385 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void PickupCamera_Apply_m1397 (PickupCamera_t385 * __this, Transform_t54 * ___dummyTarget, Vector3_t53  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::LateUpdate()
extern "C" void PickupCamera_LateUpdate_m1398 (PickupCamera_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void PickupCamera_Cut_m1399 (PickupCamera_t385 * __this, Transform_t54 * ___dummyTarget, Vector3_t53  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void PickupCamera_SetUpRotation_m1400 (PickupCamera_t385 * __this, Vector3_t53  ___centerPos, Vector3_t53  ___headPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupCamera::GetCenterOffset()
extern "C" Vector3_t53  PickupCamera_GetCenterOffset_m1401 (PickupCamera_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
