﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t189;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t186;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t2927;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t2928;
// UnityEngine.ParticleSystemSimulationSpace
#include "UnityEngine_UnityEngine_ParticleSystemSimulationSpace.h"

// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
extern "C" bool ParticleSystem_get_isStopped_m2593 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::get_isPaused()
extern "C" bool ParticleSystem_get_isPaused_m2592 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m2631 (ParticleSystem_t189 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem::get_simulationSpace()
extern "C" int32_t ParticleSystem_get_simulationSpace_m2571 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
extern "C" void ParticleSystem_set_simulationSpace_m2606 (ParticleSystem_t189 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C" void ParticleSystem_SetParticles_m2566 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C" int32_t ParticleSystem_GetParticles_m2564 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m13030 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m13031 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Clear()
extern "C" void ParticleSystem_Internal_Clear_m13032 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m2594 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m13033 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m2591 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m13034 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C" void ParticleSystem_Clear_m2570 (ParticleSystem_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" void ParticleSystem_Clear_m13035 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C" void ParticleSystem_Emit_m2563 (ParticleSystem_t189 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m13036 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___self, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t2927* ParticleSystem_GetParticleSystems_m13037 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m13038 (Object_t * __this /* static, unused */, Transform_t54 * ___transform, List_1_t2928 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;