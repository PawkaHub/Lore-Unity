﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t9777;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m72254_gshared (CachedInvokableCall_1_t9777 * __this, Object_t642 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m72254(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t9777 *, Object_t642 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m72254_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m72256_gshared (CachedInvokableCall_1_t9777 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m72256(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t9777 *, ObjectU5BU5D_t21*, const MethodInfo*))CachedInvokableCall_1_Invoke_m72256_gshared)(__this, ___args, method)
