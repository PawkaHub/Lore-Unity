#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Consolation.Console/Log>
struct Comparison_1_t5301;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"

// System.Void System.Comparison`1<Consolation.Console/Log>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28915_gshared (Comparison_1_t5301 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m28915(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5301 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m28915_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Consolation.Console/Log>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28916_gshared (Comparison_1_t5301 * __this, Log_t536  ___x, Log_t536  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m28916(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5301 *, Log_t536 , Log_t536 , const MethodInfo*))Comparison_1_Invoke_m28916_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Consolation.Console/Log>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28917_gshared (Comparison_1_t5301 * __this, Log_t536  ___x, Log_t536  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m28917(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5301 *, Log_t536 , Log_t536 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m28917_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Consolation.Console/Log>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28918_gshared (Comparison_1_t5301 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m28918(__this, ___result, method) (( int32_t (*) (Comparison_1_t5301 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m28918_gshared)(__this, ___result, method)
