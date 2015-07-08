#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t319;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Ray__ctor_m17087 (Ray_t319 * __this, Vector3_t53  ___origin, Vector3_t53  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t53  Ray_get_origin_m2738 (Ray_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
extern "C" void Ray_set_origin_m2875 (Ray_t319 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t53  Ray_get_direction_m2740 (Ray_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
extern "C" void Ray_set_direction_m2876 (Ray_t319 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" Vector3_t53  Ray_GetPoint_m2878 (Ray_t319 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C" String_t* Ray_ToString_m17088 (Ray_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
