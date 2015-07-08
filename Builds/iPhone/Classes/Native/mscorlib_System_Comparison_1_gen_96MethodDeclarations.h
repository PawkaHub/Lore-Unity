#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Double>
struct Comparison_1_t7843;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m47941_gshared (Comparison_1_t7843 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m47941(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7843 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m47941_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Double>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m47942_gshared (Comparison_1_t7843 * __this, double ___x, double ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m47942(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7843 *, double, double, const MethodInfo*))Comparison_1_Invoke_m47942_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Double>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m47943_gshared (Comparison_1_t7843 * __this, double ___x, double ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m47943(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7843 *, double, double, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m47943_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m47944_gshared (Comparison_1_t7843 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m47944(__this, ___result, method) (( int32_t (*) (Comparison_1_t7843 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m47944_gshared)(__this, ___result, method)
