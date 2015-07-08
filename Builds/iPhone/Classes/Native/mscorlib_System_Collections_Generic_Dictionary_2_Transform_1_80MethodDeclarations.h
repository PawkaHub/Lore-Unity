#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>
struct Transform_1_t8149;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m51941_gshared (Transform_1_t8149 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m51941(__this, ___object, ___method, method) (( void (*) (Transform_1_t8149 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m51941_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::Invoke(TKey,TValue)
extern "C" double Transform_1_Invoke_m51942_gshared (Transform_1_t8149 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m51942(__this, ___key, ___value, method) (( double (*) (Transform_1_t8149 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m51942_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m51943_gshared (Transform_1_t8149 * __this, Object_t * ___key, double ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m51943(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8149 *, Object_t *, double, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m51943_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Transform_1_EndInvoke_m51944_gshared (Transform_1_t8149 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m51944(__this, ___result, method) (( double (*) (Transform_1_t8149 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m51944_gshared)(__this, ___result, method)
