#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.Boolean>
struct Func_2_t1600;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1552;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_55MethodDeclarations.h"
#define Func_2__ctor_m8692(__this, ___object, ___method, method) (( void (*) (Func_2_t1600 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m32949_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m39844(__this, ___arg1, method) (( bool (*) (Func_2_t1600 *, ParseObject_t1552 *, const MethodInfo*))Func_2_Invoke_m32951_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39845(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1600 *, ParseObject_t1552 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m32953_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39846(__this, ___result, method) (( bool (*) (Func_2_t1600 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m32955_gshared)(__this, ___result, method)
