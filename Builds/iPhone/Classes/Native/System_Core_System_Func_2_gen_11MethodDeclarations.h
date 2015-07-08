#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.String,System.Object>
struct Func_2_t2025;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.String,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m8995(__this, ___object, ___method, method) (( void (*) (Func_2_t2025 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.String,System.Object>::Invoke(T)
#define Func_2_Invoke_m39723(__this, ___arg1, method) (( Object_t * (*) (Func_2_t2025 *, String_t*, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.String,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39724(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2025 *, String_t*, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.String,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39725(__this, ___result, method) (( Object_t * (*) (Func_2_t2025 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
