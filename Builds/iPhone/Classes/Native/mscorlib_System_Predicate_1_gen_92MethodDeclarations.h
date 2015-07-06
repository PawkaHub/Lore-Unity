#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Double>
struct Predicate_1_t7557;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m47014_gshared (Predicate_1_t7557 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m47014(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7557 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m47014_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Double>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m47015_gshared (Predicate_1_t7557 * __this, double ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m47015(__this, ___obj, method) (( bool (*) (Predicate_1_t7557 *, double, const MethodInfo*))Predicate_1_Invoke_m47015_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m47016_gshared (Predicate_1_t7557 * __this, double ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m47016(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7557 *, double, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m47016_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m47017_gshared (Predicate_1_t7557 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m47017(__this, ___result, method) (( bool (*) (Predicate_1_t7557 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m47017_gshared)(__this, ___result, method)
