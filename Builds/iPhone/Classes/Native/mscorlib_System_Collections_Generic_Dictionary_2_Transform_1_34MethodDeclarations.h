#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>
struct Transform_1_t5316;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m29093_gshared (Transform_1_t5316 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m29093(__this, ___object, ___method, method) (( void (*) (Transform_1_t5316 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m29093_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5307  Transform_1_Invoke_m29094_gshared (Transform_1_t5316 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m29094(__this, ___key, ___value, method) (( KeyValuePair_2_t5307  (*) (Transform_1_t5316 *, int32_t, Color_t121 , const MethodInfo*))Transform_1_Invoke_m29094_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m29095_gshared (Transform_1_t5316 * __this, int32_t ___key, Color_t121  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m29095(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5316 *, int32_t, Color_t121 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m29095_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5307  Transform_1_EndInvoke_m29096_gshared (Transform_1_t5316 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m29096(__this, ___result, method) (( KeyValuePair_2_t5307  (*) (Transform_1_t5316 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m29096_gshared)(__this, ___result, method)
