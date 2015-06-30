#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t78;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m2876 (Plane_t78 * __this, Vector3_t53  ___inNormal, Vector3_t53  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
extern "C" void Plane__ctor_m2551 (Plane_t78 * __this, Vector3_t53  ___inNormal, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t53  Plane_get_normal_m2549 (Plane_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::set_normal(UnityEngine.Vector3)
extern "C" void Plane_set_normal_m12791 (Plane_t78 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2550 (Plane_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::set_distance(System.Single)
extern "C" void Plane_set_distance_m12792 (Plane_t78 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::SetNormalAndPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane_SetNormalAndPosition_m2548 (Plane_t78 * __this, Vector3_t53  ___inNormal, Vector3_t53  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::GetSide(UnityEngine.Vector3)
extern "C" bool Plane_GetSide_m2615 (Plane_t78 * __this, Vector3_t53  ___inPt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" bool Plane_Raycast_m2618 (Plane_t78 * __this, Ray_t319  ___ray, float* ___enter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
