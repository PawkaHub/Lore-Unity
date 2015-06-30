#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t5618;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_67MethodDeclarations.h"
#define Comparison_1__ctor_m33737(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5618 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m33631_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T,T)
#define Comparison_1_Invoke_m33738(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5618 *, KeyValuePair_2_t1547 , KeyValuePair_2_t1547 , const MethodInfo*))Comparison_1_Invoke_m33632_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m33739(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5618 *, KeyValuePair_2_t1547 , KeyValuePair_2_t1547 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m33633_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m33740(__this, ___result, method) (( int32_t (*) (Comparison_1_t5618 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m33634_gshared)(__this, ___result, method)
