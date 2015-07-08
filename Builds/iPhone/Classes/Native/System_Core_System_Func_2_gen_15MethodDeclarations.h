#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>
struct Func_2_t1795;
// System.Object
struct Object_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1960;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>
struct U3CU3Ef__AnonymousType1_2_t1956;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m9010(__this, ___object, ___method, method) (( void (*) (Func_2_t1795 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::Invoke(T)
#define Func_2_Invoke_m39766(__this, ___arg1, method) (( ConstructorInfo_t1960 * (*) (Func_2_t1795 *, U3CU3Ef__AnonymousType1_2_t1956 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39767(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1795 *, U3CU3Ef__AnonymousType1_2_t1956 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39768(__this, ___result, method) (( ConstructorInfo_t1960 * (*) (Func_2_t1795 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
