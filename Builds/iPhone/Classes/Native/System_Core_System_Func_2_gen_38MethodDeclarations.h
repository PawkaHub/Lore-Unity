#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t5595;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_39MethodDeclarations.h"
#define Func_2__ctor_m33464(__this, ___object, ___method, method) (( void (*) (Func_2_t5595 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m33465_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m33466(__this, ___arg1, method) (( KeyValuePair_2_t1547  (*) (Func_2_t5595 *, KeyValuePair_2_t1547 , const MethodInfo*))Func_2_Invoke_m33467_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33468(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5595 *, KeyValuePair_2_t1547 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m33469_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33470(__this, ___result, method) (( KeyValuePair_2_t1547  (*) (Func_2_t5595 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m33471_gshared)(__this, ___result, method)
