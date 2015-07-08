#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t1796;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t762;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m9013(__this, ___object, ___method, method) (( void (*) (Func_2_t1796 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::Invoke(T)
#define Func_2_Invoke_m39769(__this, ___arg1, method) (( Type_t * (*) (Func_2_t1796 *, ParameterInfo_t762 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39770(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1796 *, ParameterInfo_t762 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39771(__this, ___result, method) (( Type_t * (*) (Func_2_t1796 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
