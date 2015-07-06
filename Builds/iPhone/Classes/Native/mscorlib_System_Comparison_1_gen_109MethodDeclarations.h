#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t8347;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m56586_gshared (Comparison_1_t8347 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m56586(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8347 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m56586_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m56587_gshared (Comparison_1_t8347 * __this, KeyValuePair_2_t6314  ___x, KeyValuePair_2_t6314  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m56587(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8347 *, KeyValuePair_2_t6314 , KeyValuePair_2_t6314 , const MethodInfo*))Comparison_1_Invoke_m56587_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m56588_gshared (Comparison_1_t8347 * __this, KeyValuePair_2_t6314  ___x, KeyValuePair_2_t6314  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m56588(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8347 *, KeyValuePair_2_t6314 , KeyValuePair_2_t6314 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m56588_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m56589_gshared (Comparison_1_t8347 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m56589(__this, ___result, method) (( int32_t (*) (Comparison_1_t8347 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m56589_gshared)(__this, ___result, method)
