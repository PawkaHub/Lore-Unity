#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t6108;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t189;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m41164(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6108 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22656_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.ParticleSystem>::Invoke(T)
#define Predicate_1_Invoke_m41165(__this, ___obj, method) (( bool (*) (Predicate_1_t6108 *, ParticleSystem_t189 *, const MethodInfo*))Predicate_1_Invoke_m22657_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.ParticleSystem>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m41166(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6108 *, ParticleSystem_t189 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22658_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.ParticleSystem>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m41167(__this, ___result, method) (( bool (*) (Predicate_1_t6108 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22659_gshared)(__this, ___result, method)
