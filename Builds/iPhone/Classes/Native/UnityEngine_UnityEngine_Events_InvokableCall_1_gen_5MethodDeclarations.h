#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t9775;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t6753;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m72250(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t9775 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m32226_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m72251(__this, ___callback, method) (( void (*) (InvokableCall_1_t9775 *, UnityAction_1_t6753 *, const MethodInfo*))InvokableCall_1__ctor_m32227_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m72252(__this, ___args, method) (( void (*) (InvokableCall_1_t9775 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m32228_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m72253(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t9775 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m32229_gshared)(__this, ___targetObj, ___method, method)
