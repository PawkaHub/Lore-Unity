#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Language.Lua.LuaValue,System.Double>
struct Func_2_t2630;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Language.Lua.LuaValue,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Double>
#include "System_Core_System_Func_2_gen_50MethodDeclarations.h"
#define Func_2__ctor_m12184(__this, ___object, ___method, method) (( void (*) (Func_2_t2630 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40085_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Language.Lua.LuaValue,System.Double>::Invoke(T)
#define Func_2_Invoke_m40086(__this, ___arg1, method) (( double (*) (Func_2_t2630 *, LuaValue_t748 *, const MethodInfo*))Func_2_Invoke_m40087_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Language.Lua.LuaValue,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40088(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2630 *, LuaValue_t748 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40089_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Language.Lua.LuaValue,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40090(__this, ___result, method) (( double (*) (Func_2_t2630 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40091_gshared)(__this, ___result, method)
