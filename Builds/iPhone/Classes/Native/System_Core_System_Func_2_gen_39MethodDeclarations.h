#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t5598;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m33465_gshared (Func_2_t5598 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m33465(__this, ___object, ___method, method) (( void (*) (Func_2_t5598 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m33465_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t1591  Func_2_Invoke_m33467_gshared (Func_2_t5598 * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m33467(__this, ___arg1, method) (( KeyValuePair_2_t1591  (*) (Func_2_t5598 *, KeyValuePair_2_t1591 , const MethodInfo*))Func_2_Invoke_m33467_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m33469_gshared (Func_2_t5598 * __this, KeyValuePair_2_t1591  ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m33469(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5598 *, KeyValuePair_2_t1591 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m33469_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1591  Func_2_EndInvoke_m33471_gshared (Func_2_t5598 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m33471(__this, ___result, method) (( KeyValuePair_2_t1591  (*) (Func_2_t5598 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m33471_gshared)(__this, ___result, method)
