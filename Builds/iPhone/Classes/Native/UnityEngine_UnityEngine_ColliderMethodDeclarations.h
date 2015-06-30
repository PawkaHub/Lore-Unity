#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Rigidbody
struct Rigidbody_t100;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" bool Collider_get_enabled_m5517 (Collider_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m2914 (Collider_t194 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t100 * Collider_get_attachedRigidbody_m13069 (Collider_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m13070 (Collider_t194 * __this, Bounds_t56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t56  Collider_get_bounds_m3029 (Collider_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
