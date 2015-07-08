#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t7950;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Comparison`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m49283_gshared (Comparison_1_t7950 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m49283(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7950 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49283_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m49284_gshared (Comparison_1_t7950 * __this, ParseGeoPoint_t935  ___x, ParseGeoPoint_t935  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m49284(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7950 *, ParseGeoPoint_t935 , ParseGeoPoint_t935 , const MethodInfo*))Comparison_1_Invoke_m49284_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Parse.ParseGeoPoint>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m49285_gshared (Comparison_1_t7950 * __this, ParseGeoPoint_t935  ___x, ParseGeoPoint_t935  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m49285(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7950 *, ParseGeoPoint_t935 , ParseGeoPoint_t935 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49285_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m49286_gshared (Comparison_1_t7950 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m49286(__this, ___result, method) (( int32_t (*) (Comparison_1_t7950 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49286_gshared)(__this, ___result, method)
