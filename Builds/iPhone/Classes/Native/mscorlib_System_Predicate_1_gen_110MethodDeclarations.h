#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t6338;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m44603_gshared (Predicate_1_t6338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44603(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6338 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44603_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m44604_gshared (Predicate_1_t6338 * __this, KeyValuePair_2_t3245  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m44604(__this, ___obj, method) (( bool (*) (Predicate_1_t6338 *, KeyValuePair_2_t3245 , const MethodInfo*))Predicate_1_Invoke_m44604_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m44605_gshared (Predicate_1_t6338 * __this, KeyValuePair_2_t3245  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m44605(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6338 *, KeyValuePair_2_t3245 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m44605_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m44606_gshared (Predicate_1_t6338 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m44606(__this, ___result, method) (( bool (*) (Predicate_1_t6338 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m44606_gshared)(__this, ___result, method)
