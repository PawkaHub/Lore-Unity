﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonCamera
struct ThirdPersonCamera_t372;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C" void ThirdPersonCamera__ctor_m1422 (ThirdPersonCamera_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::OnEnable()
extern "C" void ThirdPersonCamera_OnEnable_m1423 (ThirdPersonCamera_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C" void ThirdPersonCamera_DebugDrawStuff_m1424 (ThirdPersonCamera_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C" float ThirdPersonCamera_AngleDistance_m1425 (ThirdPersonCamera_t372 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void ThirdPersonCamera_Apply_m1426 (ThirdPersonCamera_t372 * __this, Transform_t54 * ___dummyTarget, Vector3_t53  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C" void ThirdPersonCamera_LateUpdate_m1427 (ThirdPersonCamera_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void ThirdPersonCamera_Cut_m1428 (ThirdPersonCamera_t372 * __this, Transform_t54 * ___dummyTarget, Vector3_t53  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void ThirdPersonCamera_SetUpRotation_m1429 (ThirdPersonCamera_t372 * __this, Vector3_t53  ___centerPos, Vector3_t53  ___headPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C" Vector3_t53  ThirdPersonCamera_GetCenterOffset_m1430 (ThirdPersonCamera_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;