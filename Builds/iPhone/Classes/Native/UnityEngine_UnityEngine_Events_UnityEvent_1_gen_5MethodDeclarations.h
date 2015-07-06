#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t6442;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6198;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4640;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m31158_gshared (UnityEvent_1_t6442 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m31158(__this, method) (( void (*) (UnityEvent_1_t6442 *, const MethodInfo*))UnityEvent_1__ctor_m31158_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m31160_gshared (UnityEvent_1_t6442 * __this, UnityAction_1_t6198 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m31160(__this, ___call, method) (( void (*) (UnityEvent_1_t6442 *, UnityAction_1_t6198 *, const MethodInfo*))UnityEvent_1_AddListener_m31160_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m31162_gshared (UnityEvent_1_t6442 * __this, UnityAction_1_t6198 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m31162(__this, ___call, method) (( void (*) (UnityEvent_1_t6442 *, UnityAction_1_t6198 *, const MethodInfo*))UnityEvent_1_RemoveListener_m31162_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m31163_gshared (UnityEvent_1_t6442 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m31163(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6442 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m31163_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m31164_gshared (UnityEvent_1_t6442 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m31164(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4640 * (*) (UnityEvent_1_t6442 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m31164_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t4640 * UnityEvent_1_GetDelegate_m31166_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6198 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m31166(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4640 * (*) (Object_t * /* static, unused */, UnityAction_1_t6198 *, const MethodInfo*))UnityEvent_1_GetDelegate_m31166_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m31167_gshared (UnityEvent_1_t6442 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m31167(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6442 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m31167_gshared)(__this, ___arg0, method)
