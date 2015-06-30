#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct Transform_1_t5694;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34658_gshared (Transform_1_t5694 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m34658(__this, ___object, ___method, method) (( void (*) (Transform_1_t5694 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m34658_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5683  Transform_1_Invoke_m34659_gshared (Transform_1_t5694 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m34659(__this, ___key, ___value, method) (( KeyValuePair_2_t5683  (*) (Transform_1_t5694 *, int64_t, uint8_t, const MethodInfo*))Transform_1_Invoke_m34659_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m34660_gshared (Transform_1_t5694 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m34660(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5694 *, int64_t, uint8_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m34660_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5683  Transform_1_EndInvoke_m34661_gshared (Transform_1_t5694 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m34661(__this, ___result, method) (( KeyValuePair_2_t5683  (*) (Transform_1_t5694 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m34661_gshared)(__this, ___result, method)
