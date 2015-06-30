#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t4976;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23793_gshared (Comparison_1_t4976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23793(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4976 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23793_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23794_gshared (Comparison_1_t4976 * __this, Vector3_t53  ___x, Vector3_t53  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23794(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4976 *, Vector3_t53 , Vector3_t53 , const MethodInfo*))Comparison_1_Invoke_m23794_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23795_gshared (Comparison_1_t4976 * __this, Vector3_t53  ___x, Vector3_t53  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23795(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4976 *, Vector3_t53 , Vector3_t53 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23795_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23796_gshared (Comparison_1_t4976 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23796(__this, ___result, method) (( int32_t (*) (Comparison_1_t4976 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23796_gshared)(__this, ___result, method)
