#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
struct Transform_1_t6268;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28389_gshared (Transform_1_t6268 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m28389(__this, ___object, ___method, method) (( void (*) (Transform_1_t6268 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m28389_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m28390_gshared (Transform_1_t6268 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m28390(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t6268 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m28390_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28391_gshared (Transform_1_t6268 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m28391(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6268 *, int32_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m28391_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m28392_gshared (Transform_1_t6268 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m28392(__this, ___result, method) (( Object_t * (*) (Transform_1_t6268 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m28392_gshared)(__this, ___result, method)
