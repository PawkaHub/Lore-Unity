#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t1422;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_44MethodDeclarations.h"
#define Func_2__ctor_m7388(__this, ___object, ___method, method) (( void (*) (Func_2_t1422 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34156_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::Invoke(T)
#define Func_2_Invoke_m34157(__this, ___arg1, method) (( String_t* (*) (Func_2_t1422 *, KeyValuePair_2_t1547 , const MethodInfo*))Func_2_Invoke_m34158_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34159(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1422 *, KeyValuePair_2_t1547 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34160_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34161(__this, ___result, method) (( String_t* (*) (Func_2_t1422 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34162_gshared)(__this, ___result, method)
