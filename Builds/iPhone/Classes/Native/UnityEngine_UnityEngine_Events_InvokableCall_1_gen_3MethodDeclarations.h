#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t6870;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6869;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m34293_gshared (InvokableCall_1_t6870 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m34293(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6870 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m34293_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m34294_gshared (InvokableCall_1_t6870 * __this, UnityAction_1_t6869 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m34294(__this, ___callback, method) (( void (*) (InvokableCall_1_t6870 *, UnityAction_1_t6869 *, const MethodInfo*))InvokableCall_1__ctor_m34294_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m34295_gshared (InvokableCall_1_t6870 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m34295(__this, ___args, method) (( void (*) (InvokableCall_1_t6870 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m34295_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m34296_gshared (InvokableCall_1_t6870 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m34296(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6870 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m34296_gshared)(__this, ___targetObj, ___method, method)
