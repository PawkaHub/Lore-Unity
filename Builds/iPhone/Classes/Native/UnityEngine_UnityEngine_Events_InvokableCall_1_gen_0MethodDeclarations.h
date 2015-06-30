﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t5854;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t2146;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m37169_gshared (InvokableCall_1_t5854 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m37169(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5854 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m37169_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m37170_gshared (InvokableCall_1_t5854 * __this, UnityAction_1_t2146 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m37170(__this, ___callback, method) (( void (*) (InvokableCall_1_t5854 *, UnityAction_1_t2146 *, const MethodInfo*))InvokableCall_1__ctor_m37170_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m37171_gshared (InvokableCall_1_t5854 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m37171(__this, ___args, method) (( void (*) (InvokableCall_1_t5854 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m37171_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m37172_gshared (InvokableCall_1_t5854 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m37172(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5854 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m37172_gshared)(__this, ___targetObj, ___method, method)
