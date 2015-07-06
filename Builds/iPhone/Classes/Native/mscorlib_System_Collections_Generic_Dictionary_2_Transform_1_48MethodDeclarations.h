﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_t6681;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m35819_gshared (Transform_1_t6681 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m35819(__this, ___object, ___method, method) (( void (*) (Transform_1_t6681 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m35819_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t679  Transform_1_Invoke_m35820_gshared (Transform_1_t6681 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m35820(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t6681 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m35820_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m35821_gshared (Transform_1_t6681 * __this, Object_t * ___key, float ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m35821(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6681 *, Object_t *, float, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m35821_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t679  Transform_1_EndInvoke_m35822_gshared (Transform_1_t6681 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m35822(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t6681 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m35822_gshared)(__this, ___result, method)
