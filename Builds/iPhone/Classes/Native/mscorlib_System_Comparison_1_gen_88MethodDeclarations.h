#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int16>
struct Comparison_1_t7283;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m43421_gshared (Comparison_1_t7283 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m43421(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7283 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m43421_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int16>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m43422_gshared (Comparison_1_t7283 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m43422(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7283 *, int16_t, int16_t, const MethodInfo*))Comparison_1_Invoke_m43422_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m43423_gshared (Comparison_1_t7283 * __this, int16_t ___x, int16_t ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m43423(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7283 *, int16_t, int16_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m43423_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m43424_gshared (Comparison_1_t7283 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m43424(__this, ___result, method) (( int32_t (*) (Comparison_1_t7283 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m43424_gshared)(__this, ___result, method)
