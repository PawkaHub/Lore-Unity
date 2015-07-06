#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t832;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4640;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m4770_gshared (UnityEvent_1_t832 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4770(__this, method) (( void (*) (UnityEvent_1_t832 *, const MethodInfo*))UnityEvent_1__ctor_m4770_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m4772_gshared (UnityEvent_1_t832 * __this, UnityAction_1_t958 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m4772(__this, ___call, method) (( void (*) (UnityEvent_1_t832 *, UnityAction_1_t958 *, const MethodInfo*))UnityEvent_1_AddListener_m4772_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m31425_gshared (UnityEvent_1_t832 * __this, UnityAction_1_t958 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m31425(__this, ___call, method) (( void (*) (UnityEvent_1_t832 *, UnityAction_1_t958 *, const MethodInfo*))UnityEvent_1_RemoveListener_m31425_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5180_gshared (UnityEvent_1_t832 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5180(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t832 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5180_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m5181_gshared (UnityEvent_1_t832 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5181(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4640 * (*) (UnityEvent_1_t832 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5181_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m31426_gshared (Object_t * __this /* static, unused */, UnityAction_1_t958 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m31426(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4640 * (*) (Object_t * /* static, unused */, UnityAction_1_t958 *, const MethodInfo*))UnityEvent_1_GetDelegate_m31426_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m4771_gshared (UnityEvent_1_t832 * __this, Color_t121  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m4771(__this, ___arg0, method) (( void (*) (UnityEvent_1_t832 *, Color_t121 , const MethodInfo*))UnityEvent_1_Invoke_m4771_gshared)(__this, ___arg0, method)
