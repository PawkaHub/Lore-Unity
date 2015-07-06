#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt64>
struct Comparison_1_t7502;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m46179_gshared (Comparison_1_t7502 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m46179(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7502 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m46179_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt64>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m46180_gshared (Comparison_1_t7502 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m46180(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7502 *, uint64_t, uint64_t, const MethodInfo*))Comparison_1_Invoke_m46180_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m46181_gshared (Comparison_1_t7502 * __this, uint64_t ___x, uint64_t ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m46181(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7502 *, uint64_t, uint64_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m46181_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m46182_gshared (Comparison_1_t7502 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m46182(__this, ___result, method) (( int32_t (*) (Comparison_1_t7502 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m46182_gshared)(__this, ___result, method)
