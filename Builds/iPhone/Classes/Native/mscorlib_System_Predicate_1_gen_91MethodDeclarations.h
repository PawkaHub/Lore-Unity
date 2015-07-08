#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.UInt16>
struct Predicate_1_t7608;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m44911_gshared (Predicate_1_t7608 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44911(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7608 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44911_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.UInt16>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m44912_gshared (Predicate_1_t7608 * __this, uint16_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m44912(__this, ___obj, method) (( bool (*) (Predicate_1_t7608 *, uint16_t, const MethodInfo*))Predicate_1_Invoke_m44912_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m44913_gshared (Predicate_1_t7608 * __this, uint16_t ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m44913(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7608 *, uint16_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m44913_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m44914_gshared (Predicate_1_t7608 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m44914(__this, ___result, method) (( bool (*) (Predicate_1_t7608 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m44914_gshared)(__this, ___result, method)
