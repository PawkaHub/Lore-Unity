#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct Transform_1_t9409;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_127.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m66840_gshared (Transform_1_t9409 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m66840(__this, ___object, ___method, method) (( void (*) (Transform_1_t9409 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m66840_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t9398  Transform_1_Invoke_m66841_gshared (Transform_1_t9409 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m66841(__this, ___key, ___value, method) (( KeyValuePair_2_t9398  (*) (Transform_1_t9409 *, int64_t, int32_t, const MethodInfo*))Transform_1_Invoke_m66841_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m66842_gshared (Transform_1_t9409 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m66842(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9409 *, int64_t, int32_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m66842_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t9398  Transform_1_EndInvoke_m66843_gshared (Transform_1_t9409 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m66843(__this, ___result, method) (( KeyValuePair_2_t9398  (*) (Transform_1_t9409 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m66843_gshared)(__this, ___result, method)
