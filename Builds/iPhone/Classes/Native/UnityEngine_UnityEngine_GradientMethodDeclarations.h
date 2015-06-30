#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t117;
struct Gradient_t117_marshaled;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t581;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t582;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2552 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m12391 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m12392 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m12393 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
extern "C" Color_t121  Gradient_Evaluate_m2589 (Gradient_t117 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GradientColorKey[] UnityEngine.Gradient::get_colorKeys()
extern "C" GradientColorKeyU5BU5D_t581* Gradient_get_colorKeys_m2553 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GradientAlphaKey[] UnityEngine.Gradient::get_alphaKeys()
extern "C" GradientAlphaKeyU5BU5D_t582* Gradient_get_alphaKeys_m2554 (Gradient_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::SetKeys(UnityEngine.GradientColorKey[],UnityEngine.GradientAlphaKey[])
extern "C" void Gradient_SetKeys_m2555 (Gradient_t117 * __this, GradientColorKeyU5BU5D_t581* ___colorKeys, GradientAlphaKeyU5BU5D_t582* ___alphaKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t117_marshal(const Gradient_t117& unmarshaled, Gradient_t117_marshaled& marshaled);
void Gradient_t117_marshal_back(const Gradient_t117_marshaled& marshaled, Gradient_t117& unmarshaled);
void Gradient_t117_marshal_cleanup(Gradient_t117_marshaled& marshaled);
