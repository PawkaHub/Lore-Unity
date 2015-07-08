#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t9767;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m72216_gshared (InvokableCall_2_t9767 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_2__ctor_m72216(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t9767 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2__ctor_m72216_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m72217_gshared (InvokableCall_2_t9767 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_2_Invoke_m72217(__this, ___args, method) (( void (*) (InvokableCall_2_t9767 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_2_Invoke_m72217_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m72218_gshared (InvokableCall_2_t9767 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_2_Find_m72218(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t9767 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2_Find_m72218_gshared)(__this, ___targetObj, ___method, method)
