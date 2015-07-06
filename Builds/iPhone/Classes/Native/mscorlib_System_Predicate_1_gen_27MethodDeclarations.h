#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>
struct Predicate_1_t6098;
// System.Object
struct Object_t;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m25814(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6098 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>::Invoke(T)
#define Predicate_1_Invoke_m25815(__this, ___obj, method) (( bool (*) (Predicate_1_t6098 *, PlaygroundEventParticle_t114 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m25816(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6098 *, PlaygroundEventParticle_t114 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m25817(__this, ___result, method) (( bool (*) (Predicate_1_t6098 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)
