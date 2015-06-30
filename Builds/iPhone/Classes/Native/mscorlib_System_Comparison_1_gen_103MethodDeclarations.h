#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t6125;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m41434_gshared (Comparison_1_t6125 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m41434(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6125 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m41434_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m41435_gshared (Comparison_1_t6125 * __this, UICharInfo_t2177  ___x, UICharInfo_t2177  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m41435(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6125 *, UICharInfo_t2177 , UICharInfo_t2177 , const MethodInfo*))Comparison_1_Invoke_m41435_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m41436_gshared (Comparison_1_t6125 * __this, UICharInfo_t2177  ___x, UICharInfo_t2177  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m41436(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6125 *, UICharInfo_t2177 , UICharInfo_t2177 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m41436_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m41437_gshared (Comparison_1_t6125 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m41437(__this, ___result, method) (( int32_t (*) (Comparison_1_t6125 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m41437_gshared)(__this, ___result, method)
