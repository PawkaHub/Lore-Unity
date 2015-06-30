#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationState
struct AnimationState_t641;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapMode.h"

// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C" void AnimationState_set_wrapMode_m3038 (AnimationState_t641 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" void AnimationState_set_time_m3039 (AnimationState_t641 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" void AnimationState_set_speed_m2941 (AnimationState_t641 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationState::get_length()
extern "C" float AnimationState_get_length_m5456 (AnimationState_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C" void AnimationState_set_layer_m2935 (AnimationState_t641 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
extern "C" void AnimationState_AddMixingTransform_m13143 (AnimationState_t641 * __this, Transform_t54 * ___mix, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform)
extern "C" void AnimationState_AddMixingTransform_m2936 (AnimationState_t641 * __this, Transform_t54 * ___mix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationState::get_name()
extern "C" String_t* AnimationState_get_name_m5509 (AnimationState_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
