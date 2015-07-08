#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Comparison_1_t7232;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_84MethodDeclarations.h"
#define Comparison_1__ctor_m40053(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7232 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m39267_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(T,T)
#define Comparison_1_Invoke_m40054(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7232 *, KeyValuePair_2_t1694 , KeyValuePair_2_t1694 , const MethodInfo*))Comparison_1_Invoke_m39268_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m40055(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7232 *, KeyValuePair_2_t1694 , KeyValuePair_2_t1694 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m39269_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m40056(__this, ___result, method) (( int32_t (*) (Comparison_1_t7232 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m39270_gshared)(__this, ___result, method)
