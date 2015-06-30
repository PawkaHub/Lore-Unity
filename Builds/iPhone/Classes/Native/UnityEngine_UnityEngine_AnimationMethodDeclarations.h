#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.AnimationClip
struct AnimationClip_t296;
// UnityEngine.AnimationState
struct AnimationState_t641;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C" AnimationClip_t296 * Animation_get_clip_m5497 (Animation_t298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t641 * Animation_get_Item_m2934 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" void Animation_CrossFade_m13136 (Animation_t298 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" void Animation_CrossFade_m2873 (Animation_t298 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" void Animation_AddClip_m2933 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" void Animation_AddClip_m13137 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, bool ___addLoopFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" void Animation_AddClip_m13138 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m13139 (Animation_t298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t641 * Animation_GetState_m13140 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t641 * Animation_GetStateAtIndex_m13141 (Animation_t298 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m13142 (Animation_t298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
