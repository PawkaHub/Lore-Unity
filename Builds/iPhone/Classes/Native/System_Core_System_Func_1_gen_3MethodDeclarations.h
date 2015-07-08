#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Parse.ParseObject>
struct Func_1_t1971;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t596;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
#define Func_1__ctor_m9171(__this, ___object, ___method, method) (( void (*) (Func_1_t1971 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m38388_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<Parse.ParseObject>::Invoke()
#define Func_1_Invoke_m39948(__this, method) (( ParseObject_t596 * (*) (Func_1_t1971 *, const MethodInfo*))Func_1_Invoke_m38390_gshared)(__this, method)
// System.IAsyncResult System.Func`1<Parse.ParseObject>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m39949(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1971 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m38392_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m39950(__this, ___result, method) (( ParseObject_t596 * (*) (Func_1_t1971 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m38394_gshared)(__this, ___result, method)
