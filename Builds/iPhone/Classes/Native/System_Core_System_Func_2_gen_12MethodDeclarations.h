#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>
struct Func_2_t1793;
// System.Object
struct Object_t;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>
struct U3CU3Ef__AnonymousType0_2_t1961;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1960;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m9007(__this, ___object, ___method, method) (( void (*) (Func_2_t1793 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::Invoke(T)
#define Func_2_Invoke_m39742(__this, ___arg1, method) (( U3CU3Ef__AnonymousType0_2_t1961 * (*) (Func_2_t1793 *, ConstructorInfo_t1960 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39743(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1793 *, ConstructorInfo_t1960 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39744(__this, ___result, method) (( U3CU3Ef__AnonymousType0_2_t1961 * (*) (Func_2_t1793 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
