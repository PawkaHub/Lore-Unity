#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t8499;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m55931_gshared (Comparison_1_t8499 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m55931(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8499 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55931_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m55932_gshared (Comparison_1_t8499 * __this, KeyValuePair_2_t8265  ___x, KeyValuePair_2_t8265  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m55932(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8499 *, KeyValuePair_2_t8265 , KeyValuePair_2_t8265 , const MethodInfo*))Comparison_1_Invoke_m55932_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m55933_gshared (Comparison_1_t8499 * __this, KeyValuePair_2_t8265  ___x, KeyValuePair_2_t8265  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m55933(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8499 *, KeyValuePair_2_t8265 , KeyValuePair_2_t8265 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55933_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m55934_gshared (Comparison_1_t8499 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m55934(__this, ___result, method) (( int32_t (*) (Comparison_1_t8499 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55934_gshared)(__this, ___result, method)
