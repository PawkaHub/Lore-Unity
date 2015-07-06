#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.DateTime>
struct Predicate_1_t7644;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Predicate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m48094_gshared (Predicate_1_t7644 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m48094(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7644 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m48094_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.DateTime>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m48095_gshared (Predicate_1_t7644 * __this, DateTime_t1705  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m48095(__this, ___obj, method) (( bool (*) (Predicate_1_t7644 *, DateTime_t1705 , const MethodInfo*))Predicate_1_Invoke_m48095_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m48096_gshared (Predicate_1_t7644 * __this, DateTime_t1705  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m48096(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7644 *, DateTime_t1705 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m48096_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m48097_gshared (Predicate_1_t7644 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m48097(__this, ___result, method) (( bool (*) (Predicate_1_t7644 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m48097_gshared)(__this, ___result, method)
