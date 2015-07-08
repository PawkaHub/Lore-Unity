#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int16>
struct Predicate_1_t7561;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m44324_gshared (Predicate_1_t7561 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44324(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7561 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44324_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int16>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m44325_gshared (Predicate_1_t7561 * __this, int16_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m44325(__this, ___obj, method) (( bool (*) (Predicate_1_t7561 *, int16_t, const MethodInfo*))Predicate_1_Invoke_m44325_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m44326_gshared (Predicate_1_t7561 * __this, int16_t ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m44326(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7561 *, int16_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m44326_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m44327_gshared (Predicate_1_t7561 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m44327(__this, ___result, method) (( bool (*) (Predicate_1_t7561 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m44327_gshared)(__this, ___result, method)
