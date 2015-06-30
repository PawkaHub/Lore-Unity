#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t5198;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Reflection.MethodInfo>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
#define Comparison_1__ctor_m27261(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5198 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22686_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::Invoke(T,T)
#define Comparison_1_Invoke_m27262(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5198 *, MethodInfo_t *, MethodInfo_t *, const MethodInfo*))Comparison_1_Invoke_m22687_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.MethodInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m27263(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5198 *, MethodInfo_t *, MethodInfo_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22688_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m27264(__this, ___result, method) (( int32_t (*) (Comparison_1_t5198 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22689_gshared)(__this, ___result, method)
