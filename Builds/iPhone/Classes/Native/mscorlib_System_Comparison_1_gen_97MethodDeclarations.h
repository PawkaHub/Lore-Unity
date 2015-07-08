#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.DateTime>
struct Comparison_1_t7929;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m49020_gshared (Comparison_1_t7929 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m49020(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7929 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49020_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m49021_gshared (Comparison_1_t7929 * __this, DateTime_t1953  ___x, DateTime_t1953  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m49021(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7929 *, DateTime_t1953 , DateTime_t1953 , const MethodInfo*))Comparison_1_Invoke_m49021_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m49022_gshared (Comparison_1_t7929 * __this, DateTime_t1953  ___x, DateTime_t1953  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m49022(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7929 *, DateTime_t1953 , DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49022_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m49023_gshared (Comparison_1_t7929 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m49023(__this, ___result, method) (( int32_t (*) (Comparison_1_t7929 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49023_gshared)(__this, ___result, method)
