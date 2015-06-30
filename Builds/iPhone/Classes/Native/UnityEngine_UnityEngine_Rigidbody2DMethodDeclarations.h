#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t324;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m13079 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m13080 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t97  Rigidbody2D_get_velocity_m2947 (Rigidbody2D_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m2952 (Rigidbody2D_t324 * __this, Vector2_t97  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C" float Rigidbody2D_get_angularVelocity_m3231 (Rigidbody2D_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C" void Rigidbody2D_set_angularVelocity_m3228 (Rigidbody2D_t324 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C" void Rigidbody2D_set_isKinematic_m2960 (Rigidbody2D_t324 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m2950 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m13081 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForceAtPosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForceAtPosition_m2625 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, Vector2_t97  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, Vector2_t97 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
