#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GeometryUtility
struct GeometryUtility_t4698;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t77;
// UnityEngine.Camera
struct Camera_t384;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C" PlaneU5BU5D_t77* GeometryUtility_CalculateFrustumPlanes_m2725 (Object_t * __this /* static, unused */, Camera_t384 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
extern "C" PlaneU5BU5D_t77* GeometryUtility_CalculateFrustumPlanes_m16667 (Object_t * __this /* static, unused */, Matrix4x4_t68  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
extern "C" void GeometryUtility_Internal_ExtractPlanes_m16668 (Object_t * __this /* static, unused */, PlaneU5BU5D_t77* ___planes, Matrix4x4_t68  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
extern "C" void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m16669 (Object_t * __this /* static, unused */, PlaneU5BU5D_t77* ___planes, Matrix4x4_t68 * ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C" bool GeometryUtility_TestPlanesAABB_m2858 (Object_t * __this /* static, unused */, PlaneU5BU5D_t77* ___planes, Bounds_t56  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
extern "C" bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m16670 (Object_t * __this /* static, unused */, PlaneU5BU5D_t77* ___planes, Bounds_t56 * ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
