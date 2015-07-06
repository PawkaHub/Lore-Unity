#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1618;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1574;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_55MethodDeclarations.h"
#define Func_2__ctor_m8766(__this, ___object, ___method, method) (( void (*) (Func_2_t1618 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m32949_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m39850(__this, ___arg1, method) (( bool (*) (Func_2_t1618 *, ParseFile_t1574 *, const MethodInfo*))Func_2_Invoke_m32951_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39851(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1618 *, ParseFile_t1574 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m32953_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39852(__this, ___result, method) (( bool (*) (Func_2_t1618 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m32955_gshared)(__this, ___result, method)
