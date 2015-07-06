﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall
struct InvokableCall_t4641;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t646;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall__ctor_m17521 (InvokableCall_t4641 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern "C" void InvokableCall__ctor_m17522 (InvokableCall_t4641 * __this, UnityAction_t646 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m17523 (InvokableCall_t4641 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m17524 (InvokableCall_t4641 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
