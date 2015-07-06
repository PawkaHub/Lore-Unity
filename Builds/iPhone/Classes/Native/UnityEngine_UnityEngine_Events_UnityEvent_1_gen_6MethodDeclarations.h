#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t6536;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6537;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4640;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m32823_gshared (UnityEvent_1_t6536 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m32823(__this, method) (( void (*) (UnityEvent_1_t6536 *, const MethodInfo*))UnityEvent_1__ctor_m32823_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m32825_gshared (UnityEvent_1_t6536 * __this, UnityAction_1_t6537 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m32825(__this, ___call, method) (( void (*) (UnityEvent_1_t6536 *, UnityAction_1_t6537 *, const MethodInfo*))UnityEvent_1_AddListener_m32825_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m32827_gshared (UnityEvent_1_t6536 * __this, UnityAction_1_t6537 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m32827(__this, ___call, method) (( void (*) (UnityEvent_1_t6536 *, UnityAction_1_t6537 *, const MethodInfo*))UnityEvent_1_RemoveListener_m32827_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m32828_gshared (UnityEvent_1_t6536 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m32828(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6536 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m32828_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m32829_gshared (UnityEvent_1_t6536 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m32829(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4640 * (*) (UnityEvent_1_t6536 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m32829_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m32831_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6537 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m32831(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4640 * (*) (Object_t * /* static, unused */, UnityAction_1_t6537 *, const MethodInfo*))UnityEvent_1_GetDelegate_m32831_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m32832_gshared (UnityEvent_1_t6536 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m32832(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6536 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m32832_gshared)(__this, ___arg0, method)
