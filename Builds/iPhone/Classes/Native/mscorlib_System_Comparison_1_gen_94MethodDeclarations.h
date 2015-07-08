#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int64>
struct Comparison_1_t7737;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m46507_gshared (Comparison_1_t7737 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m46507(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7737 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m46507_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int64>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m46508_gshared (Comparison_1_t7737 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m46508(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7737 *, int64_t, int64_t, const MethodInfo*))Comparison_1_Invoke_m46508_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m46509_gshared (Comparison_1_t7737 * __this, int64_t ___x, int64_t ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m46509(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7737 *, int64_t, int64_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m46509_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m46510_gshared (Comparison_1_t7737 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m46510(__this, ___result, method) (( int32_t (*) (Comparison_1_t7737 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m46510_gshared)(__this, ___result, method)
