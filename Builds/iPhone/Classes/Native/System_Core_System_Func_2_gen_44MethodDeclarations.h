#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t1594;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34156_gshared (Func_2_t1594 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m34156(__this, ___object, ___method, method) (( void (*) (Func_2_t1594 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34156_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34158_gshared (Func_2_t1594 * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m34158(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1594 *, KeyValuePair_2_t1591 , const MethodInfo*))Func_2_Invoke_m34158_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m34160_gshared (Func_2_t1594 * __this, KeyValuePair_2_t1591  ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m34160(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1594 *, KeyValuePair_2_t1591 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34160_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34162_gshared (Func_2_t1594 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m34162(__this, ___result, method) (( Object_t * (*) (Func_2_t1594 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34162_gshared)(__this, ___result, method)
