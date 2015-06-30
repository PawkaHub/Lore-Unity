#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct Transform_1_t4920;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23114_gshared (Transform_1_t4920 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23114(__this, ___object, ___method, method) (( void (*) (Transform_1_t4920 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23114_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3175  Transform_1_Invoke_m23115_gshared (Transform_1_t4920 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23115(__this, ___key, ___value, method) (( KeyValuePair_2_t3175  (*) (Transform_1_t4920 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m23115_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23116_gshared (Transform_1_t4920 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23116(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4920 *, uint8_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23116_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3175  Transform_1_EndInvoke_m23117_gshared (Transform_1_t4920 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23117(__this, ___result, method) (( KeyValuePair_2_t3175  (*) (Transform_1_t4920 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23117_gshared)(__this, ___result, method)
