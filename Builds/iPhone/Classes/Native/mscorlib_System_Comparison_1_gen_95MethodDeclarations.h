#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt64>
struct Comparison_1_t7784;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m47094_gshared (Comparison_1_t7784 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m47094(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7784 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m47094_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt64>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m47095_gshared (Comparison_1_t7784 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m47095(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7784 *, uint64_t, uint64_t, const MethodInfo*))Comparison_1_Invoke_m47095_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m47096_gshared (Comparison_1_t7784 * __this, uint64_t ___x, uint64_t ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m47096(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7784 *, uint64_t, uint64_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m47096_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m47097_gshared (Comparison_1_t7784 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m47097(__this, ___result, method) (( int32_t (*) (Comparison_1_t7784 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m47097_gshared)(__this, ___result, method)
