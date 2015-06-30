#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t5842;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5110;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2905;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m36901_gshared (UnityEvent_1_t5842 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m36901(__this, method) (( void (*) (UnityEvent_1_t5842 *, const MethodInfo*))UnityEvent_1__ctor_m36901_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m36903_gshared (UnityEvent_1_t5842 * __this, UnityAction_1_t5110 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m36903(__this, ___call, method) (( void (*) (UnityEvent_1_t5842 *, UnityAction_1_t5110 *, const MethodInfo*))UnityEvent_1_AddListener_m36903_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m36905_gshared (UnityEvent_1_t5842 * __this, UnityAction_1_t5110 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m36905(__this, ___call, method) (( void (*) (UnityEvent_1_t5842 *, UnityAction_1_t5110 *, const MethodInfo*))UnityEvent_1_RemoveListener_m36905_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m36906_gshared (UnityEvent_1_t5842 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m36906(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5842 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m36906_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2905 * UnityEvent_1_GetDelegate_m36907_gshared (UnityEvent_1_t5842 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m36907(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2905 * (*) (UnityEvent_1_t5842 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m36907_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2905 * UnityEvent_1_GetDelegate_m36909_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5110 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m36909(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2905 * (*) (Object_t * /* static, unused */, UnityAction_1_t5110 *, const MethodInfo*))UnityEvent_1_GetDelegate_m36909_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m36910_gshared (UnityEvent_1_t5842 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m36910(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5842 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m36910_gshared)(__this, ___arg0, method)
