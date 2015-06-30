#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
struct Transform_1_t5793;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m36221_gshared (Transform_1_t5793 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m36221(__this, ___object, ___method, method) (( void (*) (Transform_1_t5793 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m36221_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m36222_gshared (Transform_1_t5793 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m36222(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t5793 *, int64_t, int32_t, const MethodInfo*))Transform_1_Invoke_m36222_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m36223_gshared (Transform_1_t5793 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m36223(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5793 *, int64_t, int32_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m36223_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m36224_gshared (Transform_1_t5793 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m36224(__this, ___result, method) (( int64_t (*) (Transform_1_t5793 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m36224_gshared)(__this, ___result, method)
