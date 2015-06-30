﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
struct Transform_1_t6178;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m42188_gshared (Transform_1_t6178 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m42188(__this, ___object, ___method, method) (( void (*) (Transform_1_t6178 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m42188_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m42189_gshared (Transform_1_t6178 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m42189(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t6178 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m42189_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m42190_gshared (Transform_1_t6178 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m42190(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6178 *, uint64_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m42190_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m42191_gshared (Transform_1_t6178 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m42191(__this, ___result, method) (( uint64_t (*) (Transform_1_t6178 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m42191_gshared)(__this, ___result, method)
