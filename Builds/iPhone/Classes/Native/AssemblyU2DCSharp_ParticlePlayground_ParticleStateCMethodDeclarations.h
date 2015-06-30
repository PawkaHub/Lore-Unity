#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.ParticleStateC
struct ParticleStateC_t94;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Mesh
struct Mesh_t93;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void ParticlePlayground.ParticleStateC::.ctor()
extern "C" void ParticleStateC__ctor_m413 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ParticleStateC::IsInitializing()
extern "C" bool ParticleStateC_IsInitializing_m414 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::Initialize()
extern "C" void ParticleStateC_Initialize_m415 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::UpdateMatrix(System.Boolean)
extern "C" void ParticleStateC_UpdateMatrix_m416 (ParticleStateC_t94 * __this, bool ___isLocal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::ConstructParticles(UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void ParticleStateC_ConstructParticles_m417 (ParticleStateC_t94 * __this, Texture2D_t90 * ___image, float ___scale, Vector3_t53  ___offset, String_t* ___newStateName, Transform_t54 * ___newStateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::ConstructParticles(UnityEngine.Mesh,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void ParticleStateC_ConstructParticles_m418 (ParticleStateC_t94 * __this, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, float ___scale, Vector3_t53  ___offset, String_t* ___newStateName, Transform_t54 * ___newStateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::ConstructParticles(UnityEngine.Mesh,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void ParticleStateC_ConstructParticles_m419 (ParticleStateC_t94 * __this, Mesh_t93 * ___mesh, float ___scale, Vector3_t53  ___offset, String_t* ___newStateName, Transform_t54 * ___newStateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ParticlePlayground.ParticleStateC::GetColor(System.Int32)
extern "C" Color32_t89  ParticleStateC_GetColor_m420 (ParticleStateC_t94 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::GetPosition(System.Int32)
extern "C" Vector3_t53  ParticleStateC_GetPosition_m421 (ParticleStateC_t94 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::GetLocalPosition(System.Int32)
extern "C" Vector3_t53  ParticleStateC_GetLocalPosition_m422 (ParticleStateC_t94 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::GetNormal(System.Int32)
extern "C" Vector3_t53  ParticleStateC_GetNormal_m423 (ParticleStateC_t94 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::GetLocalNormal(System.Int32)
extern "C" Vector3_t53  ParticleStateC_GetLocalNormal_m424 (ParticleStateC_t94 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] ParticlePlayground.ParticleStateC::GetColors()
extern "C" Color32U5BU5D_t91* ParticleStateC_GetColors_m425 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ParticlePlayground.ParticleStateC::GetPositions()
extern "C" Vector3U5BU5D_t92* ParticleStateC_GetPositions_m426 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ParticlePlayground.ParticleStateC::GetNormals()
extern "C" Vector3U5BU5D_t92* ParticleStateC_GetNormals_m427 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::SetColor(System.Int32,UnityEngine.Color32)
extern "C" void ParticleStateC_SetColor_m428 (ParticleStateC_t94 * __this, int32_t ___index, Color32_t89  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C" void ParticleStateC_SetPosition_m429 (ParticleStateC_t94 * __this, int32_t ___index, Vector3_t53  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ParticleStateC::SetNormal(System.Int32,UnityEngine.Vector3)
extern "C" void ParticleStateC_SetNormal_m430 (ParticleStateC_t94 * __this, int32_t ___index, Vector3_t53  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::GetParentedPosition(System.Int32)
extern "C" Vector3_t53  ParticleStateC_GetParentedPosition_m431 (ParticleStateC_t94 * __this, int32_t ___thisPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ParticleStateC ParticlePlayground.ParticleStateC::Clone()
extern "C" ParticleStateC_t94 * ParticleStateC_Clone_m432 (ParticleStateC_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
