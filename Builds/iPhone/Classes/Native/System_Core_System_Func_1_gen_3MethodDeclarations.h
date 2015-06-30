#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Parse.ParseObject>
struct Func_1_t1556;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1427;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7520(__this, ___object, ___method, method) (( void (*) (Func_1_t1556 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m32975_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<Parse.ParseObject>::Invoke()
#define Func_1_Invoke_m34333(__this, method) (( ParseObject_t1427 * (*) (Func_1_t1556 *, const MethodInfo*))Func_1_Invoke_m32977_gshared)(__this, method)
// System.IAsyncResult System.Func`1<Parse.ParseObject>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m34334(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1556 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m32979_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m34335(__this, ___result, method) (( ParseObject_t1427 * (*) (Func_1_t1556 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m32981_gshared)(__this, ___result, method)
