#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.DateTime>
struct Comparison_1_t7647;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m48105_gshared (Comparison_1_t7647 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m48105(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7647 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m48105_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m48106_gshared (Comparison_1_t7647 * __this, DateTime_t1705  ___x, DateTime_t1705  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m48106(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7647 *, DateTime_t1705 , DateTime_t1705 , const MethodInfo*))Comparison_1_Invoke_m48106_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m48107_gshared (Comparison_1_t7647 * __this, DateTime_t1705  ___x, DateTime_t1705  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m48107(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7647 *, DateTime_t1705 , DateTime_t1705 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m48107_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m48108_gshared (Comparison_1_t7647 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m48108(__this, ___result, method) (( int32_t (*) (Comparison_1_t7647 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m48108_gshared)(__this, ___result, method)
