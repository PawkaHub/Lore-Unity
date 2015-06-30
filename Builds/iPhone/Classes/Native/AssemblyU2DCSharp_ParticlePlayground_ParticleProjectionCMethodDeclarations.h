#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.ParticleProjectionC
struct ParticleProjectionC_t96;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ParticlePlayground.ParticleProjectionC::.ctor()
extern "C" void ParticleProjectionC__ctor_m433 (ParticleProjectionC_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleProjectionC::Initialize()
extern "C" void ParticleProjectionC_Initialize_m434 (ParticleProjectionC_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleProjectionC::Construct(UnityEngine.Texture2D,UnityEngine.Transform)
extern "C" void ParticleProjectionC_Construct_m435 (ParticleProjectionC_t96 * __this, Texture2D_t90 * ___image, Transform_t54 * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleProjectionC::UpdateSource()
extern "C" void ParticleProjectionC_UpdateSource_m436 (ParticleProjectionC_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleProjectionC::Update()
extern "C" void ParticleProjectionC_Update_m437 (ParticleProjectionC_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleProjectionC::Update(System.Int32)
extern "C" void ParticleProjectionC_Update_m438 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ParticlePlayground.ParticleProjectionC::GetColor(System.Int32)
extern "C" Color32_t89  ParticleProjectionC_GetColor_m439 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleProjectionC::GetPosition(System.Int32)
extern "C" Vector3_t53  ParticleProjectionC_GetPosition_m440 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleProjectionC::GetNormal(System.Int32)
extern "C" Vector3_t53  ParticleProjectionC_GetNormal_m441 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ParticlePlayground.ParticleProjectionC::GetParent(System.Int32)
extern "C" Transform_t54 * ParticleProjectionC_GetParent_m442 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ParticleProjectionC::HasProjection(System.Int32)
extern "C" bool ParticleProjectionC_HasProjection_m443 (ParticleProjectionC_t96 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ParticleProjectionC ParticlePlayground.ParticleProjectionC::Clone()
extern "C" ParticleProjectionC_t96 * ParticleProjectionC_Clone_m444 (ParticleProjectionC_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
