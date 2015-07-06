#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte>
struct Predicate_1_t6345;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m29744_gshared (Predicate_1_t6345 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m29744(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6345 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m29744_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29745_gshared (Predicate_1_t6345 * __this, uint8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m29745(__this, ___obj, method) (( bool (*) (Predicate_1_t6345 *, uint8_t, const MethodInfo*))Predicate_1_Invoke_m29745_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m29746_gshared (Predicate_1_t6345 * __this, uint8_t ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m29746(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6345 *, uint8_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m29746_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m29747_gshared (Predicate_1_t6345 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m29747(__this, ___result, method) (( bool (*) (Predicate_1_t6345 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m29747_gshared)(__this, ___result, method)
