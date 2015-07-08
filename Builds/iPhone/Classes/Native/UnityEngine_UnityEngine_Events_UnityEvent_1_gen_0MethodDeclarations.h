#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t1077;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t6787;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4878;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t637;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m5225(__this, method) (( void (*) (UnityEvent_1_t1077 *, const MethodInfo*))UnityEvent_1__ctor_m32216_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m32800(__this, ___call, method) (( void (*) (UnityEvent_1_t1077 *, UnityAction_1_t6787 *, const MethodInfo*))UnityEvent_1_AddListener_m32218_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m32801(__this, ___call, method) (( void (*) (UnityEvent_1_t1077 *, UnityAction_1_t6787 *, const MethodInfo*))UnityEvent_1_RemoveListener_m32220_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m5626(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1077 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m32221_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m5627(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4878 * (*) (UnityEvent_1_t1077 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m32222_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m32802(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4878 * (*) (Object_t * /* static, unused */, UnityAction_1_t6787 *, const MethodInfo*))UnityEvent_1_GetDelegate_m32224_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m5227(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1077 *, BaseEventData_t637 *, const MethodInfo*))UnityEvent_1_Invoke_m32225_gshared)(__this, ___arg0, method)
