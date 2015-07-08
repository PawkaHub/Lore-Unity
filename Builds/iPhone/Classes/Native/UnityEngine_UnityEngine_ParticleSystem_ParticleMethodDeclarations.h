#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem/Particle
struct Particle_t187;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C" Vector3_t53  Particle_get_position_m2846 (Particle_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m2824 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
extern "C" Vector3_t53  Particle_get_velocity_m2870 (Particle_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2872 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C" void Particle_set_lifetime_m2723 (Particle_t187 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C" void Particle_set_startLifetime_m2847 (Particle_t187 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2818 (Particle_t187 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2828 (Particle_t187 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::get_color()
extern "C" Color32_t89  Particle_get_color_m2845 (Particle_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_color(UnityEngine.Color32)
extern "C" void Particle_set_color_m2827 (Particle_t187 * __this, Color32_t89  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
