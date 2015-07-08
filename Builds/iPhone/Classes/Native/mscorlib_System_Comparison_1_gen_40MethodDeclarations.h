#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Byte>
struct Comparison_1_t6677;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m31229_gshared (Comparison_1_t6677 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m31229(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6677 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m31229_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Byte>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m31230_gshared (Comparison_1_t6677 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m31230(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6677 *, uint8_t, uint8_t, const MethodInfo*))Comparison_1_Invoke_m31230_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Byte>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m31231_gshared (Comparison_1_t6677 * __this, uint8_t ___x, uint8_t ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m31231(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6677 *, uint8_t, uint8_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m31231_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m31232_gshared (Comparison_1_t6677 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m31232(__this, ___result, method) (( int32_t (*) (Comparison_1_t6677 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m31232_gshared)(__this, ___result, method)
