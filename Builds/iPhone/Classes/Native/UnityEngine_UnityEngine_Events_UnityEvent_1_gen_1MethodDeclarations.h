#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1123;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1233;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4878;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5302_gshared (UnityEvent_1_t1123 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5302(__this, method) (( void (*) (UnityEvent_1_t1123 *, const MethodInfo*))UnityEvent_1__ctor_m5302_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5304_gshared (UnityEvent_1_t1123 * __this, UnityAction_1_t1233 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5304(__this, ___call, method) (( void (*) (UnityEvent_1_t1123 *, UnityAction_1_t1233 *, const MethodInfo*))UnityEvent_1_AddListener_m5304_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m33056_gshared (UnityEvent_1_t1123 * __this, UnityAction_1_t1233 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m33056(__this, ___call, method) (( void (*) (UnityEvent_1_t1123 *, UnityAction_1_t1233 *, const MethodInfo*))UnityEvent_1_RemoveListener_m33056_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5634_gshared (UnityEvent_1_t1123 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5634(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1123 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5634_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t4878 * UnityEvent_1_GetDelegate_m5635_gshared (UnityEvent_1_t1123 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5635(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4878 * (*) (UnityEvent_1_t1123 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5635_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t4878 * UnityEvent_1_GetDelegate_m33057_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1233 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m33057(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4878 * (*) (Object_t * /* static, unused */, UnityAction_1_t1233 *, const MethodInfo*))UnityEvent_1_GetDelegate_m33057_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5303_gshared (UnityEvent_1_t1123 * __this, Color_t121  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5303(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1123 *, Color_t121 , const MethodInfo*))UnityEvent_1_Invoke_m5303_gshared)(__this, ___arg0, method)
