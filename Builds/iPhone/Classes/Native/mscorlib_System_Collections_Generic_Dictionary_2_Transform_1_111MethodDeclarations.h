#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
struct Transform_1_t6326;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m44439_gshared (Transform_1_t6326 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m44439(__this, ___object, ___method, method) (( void (*) (Transform_1_t6326 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44439_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6316  Transform_1_Invoke_m44440_gshared (Transform_1_t6326 * __this, int32_t ___key, TimeType_t3222  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m44440(__this, ___key, ___value, method) (( KeyValuePair_2_t6316  (*) (Transform_1_t6326 *, int32_t, TimeType_t3222 , const MethodInfo*))Transform_1_Invoke_m44440_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m44441_gshared (Transform_1_t6326 * __this, int32_t ___key, TimeType_t3222  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m44441(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6326 *, int32_t, TimeType_t3222 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44441_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6316  Transform_1_EndInvoke_m44442_gshared (Transform_1_t6326 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m44442(__this, ___result, method) (( KeyValuePair_2_t6316  (*) (Transform_1_t6326 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44442_gshared)(__this, ___result, method)
