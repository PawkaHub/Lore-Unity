#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t4702;
// UnityEngine.Object
struct Object_t584;
struct Object_t584_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m17647_gshared (CachedInvokableCall_1_t4702 * __this, Object_t584 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m17647(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4702 *, Object_t584 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m17647_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m71324_gshared (CachedInvokableCall_1_t4702 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m71324(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4702 *, ObjectU5BU5D_t21*, const MethodInfo*))CachedInvokableCall_1_Invoke_m71324_gshared)(__this, ___args, method)
