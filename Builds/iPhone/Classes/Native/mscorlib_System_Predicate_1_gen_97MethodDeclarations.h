#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Predicate_1_t6052;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t2675;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m40320(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6052 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22656_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Invoke(T)
#define Predicate_1_Invoke_m40321(__this, ___obj, method) (( bool (*) (Predicate_1_t6052 *, Tuple_2_t2675 *, const MethodInfo*))Predicate_1_Invoke_m22657_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m40322(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6052 *, Tuple_2_t2675 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22658_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m40323(__this, ___result, method) (( bool (*) (Predicate_1_t6052 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22659_gshared)(__this, ___result, method)
