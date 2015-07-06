#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t8419;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Comparison_1_gen_111MethodDeclarations.h"
#define Comparison_1__ctor_m57478(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8419 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m57371_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T,T)
#define Comparison_1_Invoke_m57479(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8419 *, KeyValuePair_2_t8014 , KeyValuePair_2_t8014 , const MethodInfo*))Comparison_1_Invoke_m57372_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m57480(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8419 *, KeyValuePair_2_t8014 , KeyValuePair_2_t8014 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m57373_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m57481(__this, ___result, method) (( int32_t (*) (Comparison_1_t8419 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m57374_gshared)(__this, ___result, method)
