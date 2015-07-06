#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t98;
struct AnimationCurve_t98_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t600;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2596 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2595 (AnimationCurve_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m17005 (AnimationCurve_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m17006 (AnimationCurve_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m2588 (AnimationCurve_t98 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t600* AnimationCurve_get_keys_m2589 (AnimationCurve_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_set_keys_m2593 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_SetKeys_m17007 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t600* AnimationCurve_GetKeys_m17008 (AnimationCurve_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m17009 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t98_marshal(const AnimationCurve_t98& unmarshaled, AnimationCurve_t98_marshaled& marshaled);
void AnimationCurve_t98_marshal_back(const AnimationCurve_t98_marshaled& marshaled, AnimationCurve_t98& unmarshaled);
void AnimationCurve_t98_marshal_cleanup(AnimationCurve_t98_marshaled& marshaled);
