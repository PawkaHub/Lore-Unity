#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,UnityEngine.Color>
struct Transform_1_t6729;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31961_gshared (Transform_1_t6729 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m31961(__this, ___object, ___method, method) (( void (*) (Transform_1_t6729 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m31961_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,UnityEngine.Color>::Invoke(TKey,TValue)
extern "C" Color_t121  Transform_1_Invoke_m31962_gshared (Transform_1_t6729 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m31962(__this, ___key, ___value, method) (( Color_t121  (*) (Transform_1_t6729 *, int32_t, Color_t121 , const MethodInfo*))Transform_1_Invoke_m31962_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,UnityEngine.Color>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31963_gshared (Transform_1_t6729 * __this, int32_t ___key, Color_t121  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m31963(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6729 *, int32_t, Color_t121 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m31963_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" Color_t121  Transform_1_EndInvoke_m31964_gshared (Transform_1_t6729 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m31964(__this, ___result, method) (( Color_t121  (*) (Transform_1_t6729 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m31964_gshared)(__this, ___result, method)
