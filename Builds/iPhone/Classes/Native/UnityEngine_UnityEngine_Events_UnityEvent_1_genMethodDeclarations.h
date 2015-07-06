#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t787;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t6444;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4640;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t634;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m4691(__this, method) (( void (*) (UnityEvent_1_t787 *, const MethodInfo*))UnityEvent_1__ctor_m31158_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m31159(__this, ___call, method) (( void (*) (UnityEvent_1_t787 *, UnityAction_1_t6444 *, const MethodInfo*))UnityEvent_1_AddListener_m31160_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m31161(__this, ___call, method) (( void (*) (UnityEvent_1_t787 *, UnityAction_1_t6444 *, const MethodInfo*))UnityEvent_1_RemoveListener_m31162_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m5172(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t787 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m31163_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m5173(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4640 * (*) (UnityEvent_1_t787 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m31164_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m31165(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4640 * (*) (Object_t * /* static, unused */, UnityAction_1_t6444 *, const MethodInfo*))UnityEvent_1_GetDelegate_m31166_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m4693(__this, ___arg0, method) (( void (*) (UnityEvent_1_t787 *, BaseEventData_t634 *, const MethodInfo*))UnityEvent_1_Invoke_m31167_gshared)(__this, ___arg0, method)
