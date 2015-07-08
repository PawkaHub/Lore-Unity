#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t6868;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6869;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t4878;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m34279_gshared (UnityEvent_1_t6868 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m34279(__this, method) (( void (*) (UnityEvent_1_t6868 *, const MethodInfo*))UnityEvent_1__ctor_m34279_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m34281_gshared (UnityEvent_1_t6868 * __this, UnityAction_1_t6869 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m34281(__this, ___call, method) (( void (*) (UnityEvent_1_t6868 *, UnityAction_1_t6869 *, const MethodInfo*))UnityEvent_1_AddListener_m34281_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m34283_gshared (UnityEvent_1_t6868 * __this, UnityAction_1_t6869 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m34283(__this, ___call, method) (( void (*) (UnityEvent_1_t6868 *, UnityAction_1_t6869 *, const MethodInfo*))UnityEvent_1_RemoveListener_m34283_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m34284_gshared (UnityEvent_1_t6868 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m34284(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6868 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m34284_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t4878 * UnityEvent_1_GetDelegate_m34285_gshared (UnityEvent_1_t6868 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m34285(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t4878 * (*) (UnityEvent_1_t6868 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m34285_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t4878 * UnityEvent_1_GetDelegate_m34287_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6869 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m34287(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t4878 * (*) (Object_t * /* static, unused */, UnityAction_1_t6869 *, const MethodInfo*))UnityEvent_1_GetDelegate_m34287_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m34288_gshared (UnityEvent_1_t6868 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m34288(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6868 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m34288_gshared)(__this, ___arg0, method)
