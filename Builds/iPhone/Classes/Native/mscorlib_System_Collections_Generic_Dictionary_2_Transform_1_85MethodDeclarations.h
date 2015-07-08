#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>
struct Transform_1_t8175;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m52292_gshared (Transform_1_t8175 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m52292(__this, ___object, ___method, method) (( void (*) (Transform_1_t8175 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m52292_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::Invoke(TKey,TValue)
extern "C" DateTime_t1953  Transform_1_Invoke_m52293_gshared (Transform_1_t8175 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m52293(__this, ___key, ___value, method) (( DateTime_t1953  (*) (Transform_1_t8175 *, Object_t *, DateTime_t1953 , const MethodInfo*))Transform_1_Invoke_m52293_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m52294_gshared (Transform_1_t8175 * __this, Object_t * ___key, DateTime_t1953  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m52294(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8175 *, Object_t *, DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m52294_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" DateTime_t1953  Transform_1_EndInvoke_m52295_gshared (Transform_1_t8175 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m52295(__this, ___result, method) (( DateTime_t1953  (*) (Transform_1_t8175 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m52295_gshared)(__this, ___result, method)
