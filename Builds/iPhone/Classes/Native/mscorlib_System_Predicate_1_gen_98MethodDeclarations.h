#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Boolean>
struct Predicate_1_t8007;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Byte>
#include "mscorlib_System_Predicate_1_gen_50MethodDeclarations.h"
#define Predicate_1__ctor_m50020(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8007 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m31217_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
#define Predicate_1_Invoke_m50021(__this, ___obj, method) (( bool (*) (Predicate_1_t8007 *, bool, const MethodInfo*))Predicate_1_Invoke_m31218_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m50022(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8007 *, bool, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m31219_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m50023(__this, ___result, method) (( bool (*) (Predicate_1_t8007 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m31220_gshared)(__this, ___result, method)
