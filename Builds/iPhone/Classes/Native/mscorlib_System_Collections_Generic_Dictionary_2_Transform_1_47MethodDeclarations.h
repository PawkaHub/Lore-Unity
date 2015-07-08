#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>
struct Transform_1_t7022;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m37264_gshared (Transform_1_t7022 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m37264(__this, ___object, ___method, method) (( void (*) (Transform_1_t7022 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m37264_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::Invoke(TKey,TValue)
extern "C" float Transform_1_Invoke_m37265_gshared (Transform_1_t7022 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m37265(__this, ___key, ___value, method) (( float (*) (Transform_1_t7022 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m37265_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m37266_gshared (Transform_1_t7022 * __this, Object_t * ___key, float ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m37266(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7022 *, Object_t *, float, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m37266_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Transform_1_EndInvoke_m37267_gshared (Transform_1_t7022 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m37267(__this, ___result, method) (( float (*) (Transform_1_t7022 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m37267_gshared)(__this, ___result, method)
