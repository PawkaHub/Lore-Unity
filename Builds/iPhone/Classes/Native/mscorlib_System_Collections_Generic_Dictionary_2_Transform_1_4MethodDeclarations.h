﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>
struct Transform_1_t4919;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23106_gshared (Transform_1_t4919 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23106(__this, ___object, ___method, method) (( void (*) (Transform_1_t4919 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23106_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m23107_gshared (Transform_1_t4919 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23107(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t4919 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m23107_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23108_gshared (Transform_1_t4919 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23108(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4919 *, uint8_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23108_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m23109_gshared (Transform_1_t4919 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23109(__this, ___result, method) (( Object_t * (*) (Transform_1_t4919 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23109_gshared)(__this, ___result, method)