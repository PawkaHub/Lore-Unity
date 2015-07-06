#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t8082;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Comparison_1_gen_101MethodDeclarations.h"
#define Comparison_1__ctor_m53261(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8082 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m53154_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T,T)
#define Comparison_1_Invoke_m53262(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8082 *, KeyValuePair_2_t7963 , KeyValuePair_2_t7963 , const MethodInfo*))Comparison_1_Invoke_m53155_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m53263(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8082 *, KeyValuePair_2_t7963 , KeyValuePair_2_t7963 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m53156_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m53264(__this, ___result, method) (( int32_t (*) (Comparison_1_t8082 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m53157_gshared)(__this, ___result, method)
