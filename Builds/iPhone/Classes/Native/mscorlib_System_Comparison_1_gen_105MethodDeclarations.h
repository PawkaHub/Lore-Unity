#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t8364;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Comparison_1_gen_104MethodDeclarations.h"
#define Comparison_1__ctor_m54176(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8364 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m54069_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T,T)
#define Comparison_1_Invoke_m54177(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8364 *, KeyValuePair_2_t8245 , KeyValuePair_2_t8245 , const MethodInfo*))Comparison_1_Invoke_m54070_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m54178(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8364 *, KeyValuePair_2_t8245 , KeyValuePair_2_t8245 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m54071_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m54179(__this, ___result, method) (( int32_t (*) (Comparison_1_t8364 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m54072_gshared)(__this, ___result, method)
