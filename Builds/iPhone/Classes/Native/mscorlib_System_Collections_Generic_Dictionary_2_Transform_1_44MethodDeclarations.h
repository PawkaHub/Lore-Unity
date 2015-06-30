#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Transform_1_t5458;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31827_gshared (Transform_1_t5458 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m31827(__this, ___object, ___method, method) (( void (*) (Transform_1_t5458 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m31827_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5449  Transform_1_Invoke_m31828_gshared (Transform_1_t5458 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m31828(__this, ___key, ___value, method) (( KeyValuePair_2_t5449  (*) (Transform_1_t5458 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m31828_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31829_gshared (Transform_1_t5458 * __this, Object_t * ___key, float ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m31829(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5458 *, Object_t *, float, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m31829_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5449  Transform_1_EndInvoke_m31830_gshared (Transform_1_t5458 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m31830(__this, ___result, method) (( KeyValuePair_2_t5449  (*) (Transform_1_t5458 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m31830_gshared)(__this, ___result, method)
