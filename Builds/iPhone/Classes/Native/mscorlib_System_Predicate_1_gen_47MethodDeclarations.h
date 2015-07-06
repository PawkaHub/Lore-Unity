#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t6373;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m30240_gshared (Predicate_1_t6373 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m30240(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6373 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m30240_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m30241_gshared (Predicate_1_t6373 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m30241(__this, ___obj, method) (( bool (*) (Predicate_1_t6373 *, float, const MethodInfo*))Predicate_1_Invoke_m30241_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m30242_gshared (Predicate_1_t6373 * __this, float ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m30242(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6373 *, float, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m30242_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m30243_gshared (Predicate_1_t6373 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m30243(__this, ___result, method) (( bool (*) (Predicate_1_t6373 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m30243_gshared)(__this, ___result, method)
