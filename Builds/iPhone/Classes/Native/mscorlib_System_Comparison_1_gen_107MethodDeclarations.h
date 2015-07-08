#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t8441;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Comparison_1_gen_106MethodDeclarations.h"
#define Comparison_1__ctor_m55253(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8441 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55146_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Invoke(T,T)
#define Comparison_1_Invoke_m55254(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8441 *, KeyValuePair_2_t8256 , KeyValuePair_2_t8256 , const MethodInfo*))Comparison_1_Invoke_m55147_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m55255(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8441 *, KeyValuePair_2_t8256 , KeyValuePair_2_t8256 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55148_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m55256(__this, ___result, method) (( int32_t (*) (Comparison_1_t8441 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55149_gshared)(__this, ___result, method)
