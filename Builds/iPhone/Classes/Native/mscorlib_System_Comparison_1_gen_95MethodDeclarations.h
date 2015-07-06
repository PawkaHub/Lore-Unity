#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t7668;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Comparison`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m48368_gshared (Comparison_1_t7668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m48368(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7668 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m48368_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m48369_gshared (Comparison_1_t7668 * __this, ParseGeoPoint_t1579  ___x, ParseGeoPoint_t1579  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m48369(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7668 *, ParseGeoPoint_t1579 , ParseGeoPoint_t1579 , const MethodInfo*))Comparison_1_Invoke_m48369_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Parse.ParseGeoPoint>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m48370_gshared (Comparison_1_t7668 * __this, ParseGeoPoint_t1579  ___x, ParseGeoPoint_t1579  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m48370(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7668 *, ParseGeoPoint_t1579 , ParseGeoPoint_t1579 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m48370_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m48371_gshared (Comparison_1_t7668 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m48371(__this, ___result, method) (( int32_t (*) (Comparison_1_t7668 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m48371_gshared)(__this, ___result, method)
