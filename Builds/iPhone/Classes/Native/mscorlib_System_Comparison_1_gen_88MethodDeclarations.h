#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Language.Lua.Var>
struct Comparison_1_t5983;
// System.Object
struct Object_t;
// Language.Lua.Var
struct Var_t2659;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<Language.Lua.Var>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
#define Comparison_1__ctor_m39087(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5983 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22686_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Language.Lua.Var>::Invoke(T,T)
#define Comparison_1_Invoke_m39088(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5983 *, Var_t2659 *, Var_t2659 *, const MethodInfo*))Comparison_1_Invoke_m22687_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Language.Lua.Var>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m39089(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5983 *, Var_t2659 *, Var_t2659 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22688_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Language.Lua.Var>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m39090(__this, ___result, method) (( int32_t (*) (Comparison_1_t5983 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22689_gshared)(__this, ___result, method)
