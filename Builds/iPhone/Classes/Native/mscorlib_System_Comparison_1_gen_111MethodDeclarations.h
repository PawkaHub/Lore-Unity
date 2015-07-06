#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t8412;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m57371_gshared (Comparison_1_t8412 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m57371(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8412 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m57371_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m57372_gshared (Comparison_1_t8412 * __this, KeyValuePair_2_t8012  ___x, KeyValuePair_2_t8012  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m57372(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8412 *, KeyValuePair_2_t8012 , KeyValuePair_2_t8012 , const MethodInfo*))Comparison_1_Invoke_m57372_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m57373_gshared (Comparison_1_t8412 * __this, KeyValuePair_2_t8012  ___x, KeyValuePair_2_t8012  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m57373(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8412 *, KeyValuePair_2_t8012 , KeyValuePair_2_t8012 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m57373_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m57374_gshared (Comparison_1_t8412 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m57374(__this, ___result, method) (( int32_t (*) (Comparison_1_t8412 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m57374_gshared)(__this, ___result, method)
