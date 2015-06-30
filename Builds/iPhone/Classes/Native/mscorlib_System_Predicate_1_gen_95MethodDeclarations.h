#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.UInt16>
struct Predicate_1_t6029;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m40025_gshared (Predicate_1_t6029 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m40025(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6029 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m40025_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.UInt16>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m40026_gshared (Predicate_1_t6029 * __this, uint16_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m40026(__this, ___obj, method) (( bool (*) (Predicate_1_t6029 *, uint16_t, const MethodInfo*))Predicate_1_Invoke_m40026_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m40027_gshared (Predicate_1_t6029 * __this, uint16_t ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m40027(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6029 *, uint16_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m40027_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m40028_gshared (Predicate_1_t6029 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m40028(__this, ___result, method) (( bool (*) (Predicate_1_t6029 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m40028_gshared)(__this, ___result, method)
