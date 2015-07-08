#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.ManipulatorObjectC
struct ManipulatorObjectC_t115;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>
struct List_1_t620;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ParticlePlayground.ManipulatorObjectC::.ctor()
extern "C" void ManipulatorObjectC__ctor_m470 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::add_particleEventEnter(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_add_particleEventEnter_m471 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::remove_particleEventEnter(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_remove_particleEventEnter_m472 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::add_particleEventExit(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_add_particleEventExit_m473 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::remove_particleEventExit(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_remove_particleEventExit_m474 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::add_particleEventBirth(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_add_particleEventBirth_m475 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::remove_particleEventBirth(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_remove_particleEventBirth_m476 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::add_particleEventDeath(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_add_particleEventDeath_m477 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::remove_particleEventDeath(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_remove_particleEventDeath_m478 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::add_particleEventCollision(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_add_particleEventCollision_m479 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::remove_particleEventCollision(ParticlePlayground.OnPlaygroundParticle)
extern "C" void ManipulatorObjectC_remove_particleEventCollision_m480 (ManipulatorObjectC_t115 * __this, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::Contains(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ManipulatorObjectC_Contains_m481 (ManipulatorObjectC_t115 * __this, Vector3_t53  ___position, Vector3_t53  ___mPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SendParticleEventEnter()
extern "C" void ManipulatorObjectC_SendParticleEventEnter_m482 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SendParticleEventExit()
extern "C" void ManipulatorObjectC_SendParticleEventExit_m483 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SendParticleEventBirth()
extern "C" void ManipulatorObjectC_SendParticleEventBirth_m484 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SendParticleEventDeath()
extern "C" void ManipulatorObjectC_SendParticleEventDeath_m485 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SendParticleEventCollision()
extern "C" void ManipulatorObjectC_SendParticleEventCollision_m486 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventParticle ParticlePlayground.ManipulatorObjectC::GetParticle(System.Int32)
extern "C" PlaygroundEventParticle_t114 * ManipulatorObjectC_GetParticle_m487 (ManipulatorObjectC_t115 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventParticle ParticlePlayground.ManipulatorObjectC::GetParticle(System.Int32,System.Int32)
extern "C" PlaygroundEventParticle_t114 * ManipulatorObjectC_GetParticle_m488 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle> ParticlePlayground.ManipulatorObjectC::GetParticles()
extern "C" List_1_t620 * ManipulatorObjectC_GetParticles_m489 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::ContainsParticle(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_ContainsParticle_m490 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::IsSameId(System.Int32)
extern "C" bool ManipulatorObjectC_IsSameId_m491 (ManipulatorObjectC_t115 * __this, int32_t ___compareId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::AddParticle(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_AddParticle_m492 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::RemoveParticle(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_RemoveParticle_m493 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::KillAllParticles()
extern "C" void ManipulatorObjectC_KillAllParticles_m494 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::ContainsNonAffectedParticle(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_ContainsNonAffectedParticle_m495 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::AddNonAffectedParticle(System.Int32,System.Int32)
extern "C" void ManipulatorObjectC_AddNonAffectedParticle_m496 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::RemoveNonAffectedParticle(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_RemoveNonAffectedParticle_m497 (ManipulatorObjectC_t115 * __this, int32_t ___particleSystemId, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::LifetimeFilter(System.Single,System.Single)
extern "C" bool ManipulatorObjectC_LifetimeFilter_m498 (ManipulatorObjectC_t115 * __this, float ___life, float ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorObjectC::ParticleFilter(System.Int32,System.Int32)
extern "C" bool ManipulatorObjectC_ParticleFilter_m499 (ManipulatorObjectC_t115 * __this, int32_t ___p, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::Update()
extern "C" void ManipulatorObjectC_Update_m500 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorObjectC::SetLocalTargetsPosition(UnityEngine.Transform)
extern "C" void ManipulatorObjectC_SetLocalTargetsPosition_m501 (ManipulatorObjectC_t115 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.ManipulatorObjectC::Clone()
extern "C" ManipulatorObjectC_t115 * ManipulatorObjectC_Clone_m502 (ManipulatorObjectC_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
