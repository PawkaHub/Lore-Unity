#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
struct Transform_1_t9452;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m67521_gshared (Transform_1_t9452 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m67521(__this, ___object, ___method, method) (( void (*) (Transform_1_t9452 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m67521_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t748  Transform_1_Invoke_m67522_gshared (Transform_1_t9452 * __this, int32_t ___key, TimeType_t3289  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m67522(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t9452 *, int32_t, TimeType_t3289 , const MethodInfo*))Transform_1_Invoke_m67522_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m67523_gshared (Transform_1_t9452 * __this, int32_t ___key, TimeType_t3289  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m67523(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9452 *, int32_t, TimeType_t3289 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m67523_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t748  Transform_1_EndInvoke_m67524_gshared (Transform_1_t9452 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m67524(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t9452 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m67524_gshared)(__this, ___result, method)
