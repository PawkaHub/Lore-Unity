#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t6870;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_80MethodDeclarations.h"
#define Comparison_1__ctor_m38089(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6870 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m37982_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T,T)
#define Comparison_1_Invoke_m38090(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6870 *, KeyValuePair_2_t1714 , KeyValuePair_2_t1714 , const MethodInfo*))Comparison_1_Invoke_m37983_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m38091(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6870 *, KeyValuePair_2_t1714 , KeyValuePair_2_t1714 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m37984_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m38092(__this, ___result, method) (( int32_t (*) (Comparison_1_t6870 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m37985_gshared)(__this, ___result, method)
