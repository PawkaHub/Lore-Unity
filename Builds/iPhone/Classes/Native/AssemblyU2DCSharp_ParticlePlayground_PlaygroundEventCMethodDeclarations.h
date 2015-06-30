#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.PlaygroundEventC
struct PlaygroundEventC_t127;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;

// System.Void ParticlePlayground.PlaygroundEventC::.ctor()
extern "C" void PlaygroundEventC__ctor_m546 (PlaygroundEventC_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundEventC::add_particleEvent(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundEventC_add_particleEvent_m547 (PlaygroundEventC_t127 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundEventC::remove_particleEvent(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundEventC_remove_particleEvent_m548 (PlaygroundEventC_t127 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundEventC::Initialize()
extern "C" void PlaygroundEventC_Initialize_m549 (PlaygroundEventC_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundEventC::UpdateTime()
extern "C" bool PlaygroundEventC_UpdateTime_m550 (PlaygroundEventC_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundEventC::SetTimer(System.Single)
extern "C" void PlaygroundEventC_SetTimer_m551 (PlaygroundEventC_t127 * __this, float ___newTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundEventC::SendParticleEvent(ParticlePlayground.PlaygroundEventParticle)
extern "C" void PlaygroundEventC_SendParticleEvent_m552 (PlaygroundEventC_t127 * __this, PlaygroundEventParticle_t114 * ___eventParticle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventC ParticlePlayground.PlaygroundEventC::Clone()
extern "C" PlaygroundEventC_t127 * PlaygroundEventC_Clone_m553 (PlaygroundEventC_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
