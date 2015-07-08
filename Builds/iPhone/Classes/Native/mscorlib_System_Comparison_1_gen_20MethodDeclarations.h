#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t6374;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m26832_gshared (Comparison_1_t6374 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m26832(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6374 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m26832_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26833_gshared (Comparison_1_t6374 * __this, Color32_t89  ___x, Color32_t89  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m26833(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6374 *, Color32_t89 , Color32_t89 , const MethodInfo*))Comparison_1_Invoke_m26833_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m26834_gshared (Comparison_1_t6374 * __this, Color32_t89  ___x, Color32_t89  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m26834(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6374 *, Color32_t89 , Color32_t89 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26834_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26835_gshared (Comparison_1_t6374 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m26835(__this, ___result, method) (( int32_t (*) (Comparison_1_t6374 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26835_gshared)(__this, ___result, method)
