#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t9773;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t9774;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m72241_gshared (InvokableCall_1_t9773 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m72241(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t9773 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m72241_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m72242_gshared (InvokableCall_1_t9773 * __this, UnityAction_1_t9774 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m72242(__this, ___callback, method) (( void (*) (InvokableCall_1_t9773 *, UnityAction_1_t9774 *, const MethodInfo*))InvokableCall_1__ctor_m72242_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m72243_gshared (InvokableCall_1_t9773 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m72243(__this, ___args, method) (( void (*) (InvokableCall_1_t9773 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_1_Invoke_m72243_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m72244_gshared (InvokableCall_1_t9773 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m72244(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t9773 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m72244_gshared)(__this, ___targetObj, ___method, method)
