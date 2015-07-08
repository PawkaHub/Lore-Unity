#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t4764;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t317;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m17355 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m17356 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m3121 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2757 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m3389 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2734 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m3179 (Object_t * __this /* static, unused */, Ray_t319  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m17357 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_INTERNAL_CALL_RaycastAll_m17358 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" bool Physics_Linecast_m7890 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, RaycastHit_t318 * ___hitInfo, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
