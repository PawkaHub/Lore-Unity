﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>
struct Transform_1_t4940;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23314_gshared (Transform_1_t4940 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23314(__this, ___object, ___method, method) (( void (*) (Transform_1_t4940 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23314_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4931  Transform_1_Invoke_m23315_gshared (Transform_1_t4940 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23315(__this, ___key, ___value, method) (( KeyValuePair_2_t4931  (*) (Transform_1_t4940 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m23315_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23316_gshared (Transform_1_t4940 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23316(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4940 *, uint8_t, int32_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23316_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4931  Transform_1_EndInvoke_m23317_gshared (Transform_1_t4940 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23317(__this, ___result, method) (( KeyValuePair_2_t4931  (*) (Transform_1_t4940 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23317_gshared)(__this, ___result, method)