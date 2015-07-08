#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t6217;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m24450_gshared (Comparison_1_t6217 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m24450(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6217 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m24450_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m24451_gshared (Comparison_1_t6217 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m24451(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6217 *, Object_t *, Object_t *, const MethodInfo*))Comparison_1_Invoke_m24451_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m24452_gshared (Comparison_1_t6217 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m24452(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6217 *, Object_t *, Object_t *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m24452_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m24453_gshared (Comparison_1_t6217 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m24453(__this, ___result, method) (( int32_t (*) (Comparison_1_t6217 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m24453_gshared)(__this, ___result, method)
