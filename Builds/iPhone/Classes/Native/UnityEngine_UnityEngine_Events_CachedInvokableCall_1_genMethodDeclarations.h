#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t4940;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18065_gshared (CachedInvokableCall_1_t4940 * __this, Object_t642 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18065(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4940 *, Object_t642 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m18065_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m72239_gshared (CachedInvokableCall_1_t4940 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m72239(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4940 *, ObjectU5BU5D_t21*, const MethodInfo*))CachedInvokableCall_1_Invoke_m72239_gshared)(__this, ___args, method)
