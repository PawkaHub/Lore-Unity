#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t6258;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t5915;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m43191(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6258 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m36911_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m43192(__this, ___callback, method) (( void (*) (InvokableCall_1_t6258 *, UnityAction_1_t5915 *, const MethodInfo*))InvokableCall_1__ctor_m36912_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m43193(__this, ___args, method) (( void (*) (InvokableCall_1_t6258 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m36913_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m43194(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6258 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m36914_gshared)(__this, ___targetObj, ___method, method)
