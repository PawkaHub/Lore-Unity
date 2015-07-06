#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
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

// System.Void ParticlePlayground.OnPlaygroundParticle::.ctor(System.Object,System.IntPtr)
extern "C" void OnPlaygroundParticle__ctor_m2398 (OnPlaygroundParticle_t83 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.OnPlaygroundParticle::Invoke(ParticlePlayground.PlaygroundEventParticle)
extern "C" void OnPlaygroundParticle_Invoke_m2399 (OnPlaygroundParticle_t83 * __this, PlaygroundEventParticle_t114 * ___particle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnPlaygroundParticle_t83(Il2CppObject* delegate, PlaygroundEventParticle_t114 * ___particle);
// System.IAsyncResult ParticlePlayground.OnPlaygroundParticle::BeginInvoke(ParticlePlayground.PlaygroundEventParticle,System.AsyncCallback,System.Object)
extern "C" Object_t * OnPlaygroundParticle_BeginInvoke_m2400 (OnPlaygroundParticle_t83 * __this, PlaygroundEventParticle_t114 * ___particle, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.OnPlaygroundParticle::EndInvoke(System.IAsyncResult)
extern "C" void OnPlaygroundParticle_EndInvoke_m2401 (OnPlaygroundParticle_t83 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
