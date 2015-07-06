#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt16>
struct Comparison_1_t7330;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m44008_gshared (Comparison_1_t7330 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m44008(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7330 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m44008_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt16>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m44009_gshared (Comparison_1_t7330 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m44009(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7330 *, uint16_t, uint16_t, const MethodInfo*))Comparison_1_Invoke_m44009_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m44010_gshared (Comparison_1_t7330 * __this, uint16_t ___x, uint16_t ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m44010(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7330 *, uint16_t, uint16_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m44010_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m44011_gshared (Comparison_1_t7330 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m44011(__this, ___result, method) (( int32_t (*) (Comparison_1_t7330 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m44011_gshared)(__this, ___result, method)
