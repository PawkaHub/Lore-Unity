#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t6847;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1259;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m33946_gshared (InvokableCall_1_t6847 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m33946(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6847 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m33946_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m33947_gshared (InvokableCall_1_t6847 * __this, UnityAction_1_t1259 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m33947(__this, ___callback, method) (( void (*) (InvokableCall_1_t6847 *, UnityAction_1_t1259 *, const MethodInfo*))InvokableCall_1__ctor_m33947_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m33948_gshared (InvokableCall_1_t6847 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m33948(__this, ___args, method) (( void (*) (InvokableCall_1_t6847 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m33948_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m33949_gshared (InvokableCall_1_t6847 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m33949(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6847 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m33949_gshared)(__this, ___targetObj, ___method, method)
