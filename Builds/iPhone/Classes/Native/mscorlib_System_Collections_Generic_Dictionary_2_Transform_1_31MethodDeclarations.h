#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Int32>
struct Transform_1_t6726;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31937_gshared (Transform_1_t6726 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m31937(__this, ___object, ___method, method) (( void (*) (Transform_1_t6726 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m31937_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m31938_gshared (Transform_1_t6726 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m31938(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t6726 *, int32_t, Color_t121 , const MethodInfo*))Transform_1_Invoke_m31938_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31939_gshared (Transform_1_t6726 * __this, int32_t ___key, Color_t121  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m31939(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6726 *, int32_t, Color_t121 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m31939_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m31940_gshared (Transform_1_t6726 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m31940(__this, ___result, method) (( int32_t (*) (Transform_1_t6726 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m31940_gshared)(__this, ___result, method)
