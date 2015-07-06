﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t6822;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m37594_gshared (Transform_1_t6822 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m37594(__this, ___object, ___method, method) (( void (*) (Transform_1_t6822 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m37594_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t679  Transform_1_Invoke_m37595_gshared (Transform_1_t6822 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m37595(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t6822 *, int64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m37595_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m37596_gshared (Transform_1_t6822 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m37596(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6822 *, int64_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m37596_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t679  Transform_1_EndInvoke_m37597_gshared (Transform_1_t6822 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m37597(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t6822 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m37597_gshared)(__this, ___result, method)
