#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t6309;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t54;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m25783(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6309 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24416_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m25784(__this, ___obj, method) (( bool (*) (Predicate_1_t6309 *, Transform_t54 *, const MethodInfo*))Predicate_1_Invoke_m24417_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m25785(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6309 *, Transform_t54 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24418_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m25786(__this, ___result, method) (( bool (*) (Predicate_1_t6309 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24419_gshared)(__this, ___result, method)
