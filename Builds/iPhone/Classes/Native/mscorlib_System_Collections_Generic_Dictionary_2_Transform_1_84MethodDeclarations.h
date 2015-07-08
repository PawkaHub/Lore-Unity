#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Object>
struct Transform_1_t8172;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m52282_gshared (Transform_1_t8172 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m52282(__this, ___object, ___method, method) (( void (*) (Transform_1_t8172 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m52282_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m52283_gshared (Transform_1_t8172 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m52283(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t8172 *, Object_t *, DateTime_t1953 , const MethodInfo*))Transform_1_Invoke_m52283_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m52284_gshared (Transform_1_t8172 * __this, Object_t * ___key, DateTime_t1953  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m52284(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8172 *, Object_t *, DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m52284_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m52285_gshared (Transform_1_t8172 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m52285(__this, ___result, method) (( Object_t * (*) (Transform_1_t8172 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m52285_gshared)(__this, ___result, method)
