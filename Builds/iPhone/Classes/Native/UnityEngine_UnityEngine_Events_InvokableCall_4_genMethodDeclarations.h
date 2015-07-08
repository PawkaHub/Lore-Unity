#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t9771;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m72230_gshared (InvokableCall_4_t9771 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m72230(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t9771 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m72230_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m72231_gshared (InvokableCall_4_t9771 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m72231(__this, ___args, method) (( void (*) (InvokableCall_4_t9771 *, ObjectU5BU5D_t21*, const MethodInfo*))InvokableCall_4_Invoke_m72231_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m72232_gshared (InvokableCall_4_t9771 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m72232(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t9771 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m72232_gshared)(__this, ___targetObj, ___method, method)
