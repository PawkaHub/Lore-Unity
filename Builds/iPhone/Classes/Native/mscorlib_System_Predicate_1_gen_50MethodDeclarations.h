#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte>
struct Predicate_1_t6673;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m31217_gshared (Predicate_1_t6673 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m31217(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6673 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m31217_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m31218_gshared (Predicate_1_t6673 * __this, uint8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m31218(__this, ___obj, method) (( bool (*) (Predicate_1_t6673 *, uint8_t, const MethodInfo*))Predicate_1_Invoke_m31218_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m31219_gshared (Predicate_1_t6673 * __this, uint8_t ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m31219(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6673 *, uint8_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m31219_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m31220_gshared (Predicate_1_t6673 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m31220(__this, ___result, method) (( bool (*) (Predicate_1_t6673 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m31220_gshared)(__this, ___result, method)
