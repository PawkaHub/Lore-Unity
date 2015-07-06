#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t7665;
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

// System.Void System.Predicate`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m48358_gshared (Predicate_1_t7665 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m48358(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7665 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m48358_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m48359_gshared (Predicate_1_t7665 * __this, ParseGeoPoint_t1579  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m48359(__this, ___obj, method) (( bool (*) (Predicate_1_t7665 *, ParseGeoPoint_t1579 , const MethodInfo*))Predicate_1_Invoke_m48359_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m48360_gshared (Predicate_1_t7665 * __this, ParseGeoPoint_t1579  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m48360(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7665 *, ParseGeoPoint_t1579 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m48360_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m48361_gshared (Predicate_1_t7665 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m48361(__this, ___result, method) (( bool (*) (Predicate_1_t7665 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m48361_gshared)(__this, ___result, method)
