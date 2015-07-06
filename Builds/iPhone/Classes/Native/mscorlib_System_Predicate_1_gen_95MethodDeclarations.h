#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Boolean>
struct Predicate_1_t7725;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Byte>
#include "mscorlib_System_Predicate_1_gen_46MethodDeclarations.h"
#define Predicate_1__ctor_m49105(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7725 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m29744_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
#define Predicate_1_Invoke_m49106(__this, ___obj, method) (( bool (*) (Predicate_1_t7725 *, bool, const MethodInfo*))Predicate_1_Invoke_m29745_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m49107(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7725 *, bool, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m29746_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m49108(__this, ___result, method) (( bool (*) (Predicate_1_t7725 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m29747_gshared)(__this, ___result, method)
