#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t8477;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m58156_gshared (Comparison_1_t8477 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m58156(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8477 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m58156_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m58157_gshared (Comparison_1_t8477 * __this, KeyValuePair_2_t8023  ___x, KeyValuePair_2_t8023  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m58157(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8477 *, KeyValuePair_2_t8023 , KeyValuePair_2_t8023 , const MethodInfo*))Comparison_1_Invoke_m58157_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m58158_gshared (Comparison_1_t8477 * __this, KeyValuePair_2_t8023  ___x, KeyValuePair_2_t8023  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m58158(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8477 *, KeyValuePair_2_t8023 , KeyValuePair_2_t8023 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m58158_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m58159_gshared (Comparison_1_t8477 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m58159(__this, ___result, method) (( int32_t (*) (Comparison_1_t8477 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m58159_gshared)(__this, ___result, method)
