#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
struct Transform_1_t9463;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_129.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m67525_gshared (Transform_1_t9463 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m67525(__this, ___object, ___method, method) (( void (*) (Transform_1_t9463 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m67525_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t9453  Transform_1_Invoke_m67526_gshared (Transform_1_t9463 * __this, int32_t ___key, TimeType_t3289  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m67526(__this, ___key, ___value, method) (( KeyValuePair_2_t9453  (*) (Transform_1_t9463 *, int32_t, TimeType_t3289 , const MethodInfo*))Transform_1_Invoke_m67526_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m67527_gshared (Transform_1_t9463 * __this, int32_t ___key, TimeType_t3289  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m67527(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9463 *, int32_t, TimeType_t3289 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m67527_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t9453  Transform_1_EndInvoke_m67528_gshared (Transform_1_t9463 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m67528(__this, ___result, method) (( KeyValuePair_2_t9453  (*) (Transform_1_t9463 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m67528_gshared)(__this, ___result, method)
