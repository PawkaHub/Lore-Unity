#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animator
struct Animator_t214;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t1260;
// System.String
struct String_t;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C" float Animator_GetFloat_m3339 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C" float Animator_GetFloat_m7776 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m3376 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloat_m3395 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C" void Animator_SetFloat_m7777 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m3336 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m3270 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" int32_t Animator_GetInteger_m3338 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" void Animator_SetInteger_m3565 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m2956 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2959 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" void Animator_set_applyRootMotion_m3559 (Animator_t214 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" int32_t Animator_get_layerCount_m3392 (Animator_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C" float Animator_GetLayerWeight_m3564 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" void Animator_SetLayerWeight_m3393 (Animator_t214 * __this, int32_t ___layerIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t627  Animator_GetCurrentAnimatorStateInfo_m2961 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
extern "C" void Animator_CrossFade_m7760 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" void Animator_CrossFade_m7844 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m17456 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m17457 (Animator_t214 * __this, int32_t ___stateNameHash, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
extern "C" void Animator_Play_m7759 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m17458 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m17459 (Animator_t214 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t1260 * Animator_get_runtimeAnimatorController_m5444 (Animator_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C" void Animator_set_runtimeAnimatorController_m7758 (Animator_t214 * __this, RuntimeAnimatorController_t1260 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m7775 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m17460 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" void Animator_SetFloatID_m17461 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" float Animator_GetFloatString_m17462 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" float Animator_GetFloatID_m17463 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m17464 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m17465 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m17466 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" int32_t Animator_GetIntegerString_m17467 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m17468 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m17469 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloatStringDamp_m17470 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
