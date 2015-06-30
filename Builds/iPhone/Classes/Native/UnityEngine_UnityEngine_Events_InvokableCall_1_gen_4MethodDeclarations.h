﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t6256;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t6257;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m43182_gshared (InvokableCall_1_t6256 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m43182(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6256 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m43182_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m43183_gshared (InvokableCall_1_t6256 * __this, UnityAction_1_t6257 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m43183(__this, ___callback, method) (( void (*) (InvokableCall_1_t6256 *, UnityAction_1_t6257 *, const MethodInfo*))InvokableCall_1__ctor_m43183_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m43184_gshared (InvokableCall_1_t6256 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m43184(__this, ___args, method) (( void (*) (InvokableCall_1_t6256 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m43184_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m43185_gshared (InvokableCall_1_t6256 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m43185(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6256 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m43185_gshared)(__this, ___targetObj, ___method, method)
