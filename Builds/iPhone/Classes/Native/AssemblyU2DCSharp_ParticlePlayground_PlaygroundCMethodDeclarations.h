#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.PlaygroundC
struct PlaygroundC_t75;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t547;
// UnityEngine.Mesh
struct Mesh_t93;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t548;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// ParticlePlayground.SkinnedWorldObject
struct SkinnedWorldObject_t109;
// ParticlePlayground.WorldObject
struct WorldObject_t104;
// ParticlePlayground.ParticleStateC
struct ParticleStateC_t94;
// UnityEngine.Transform
struct Transform_t54;
// ParticlePlayground.PlaygroundColliderC
struct PlaygroundColliderC_t123;
// ParticlePlayground.ManipulatorObjectC
struct ManipulatorObjectC_t115;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>
struct List_1_t549;
// PlaygroundSplines.PlaygroundSpline
struct PlaygroundSpline_t67;
// ParticlePlayground.ManipulatorPropertyC
struct ManipulatorPropertyC_t110;
// ParticlePlayground.PlaygroundEventC
struct PlaygroundEventC_t127;
// ParticlePlayground.ParticleProjectionC
struct ParticleProjectionC_t96;
// ParticlePlayground.PaintObjectC
struct PaintObjectC_t86;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Single[]
struct SingleU5BU5D_t168;
// System.Int32[]
struct Int32U5BU5D_t119;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Action
struct Action_t250;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ParticlePlayground.MANIPULATORTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORTYPEC.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// ParticlePlayground.PLAYGROUNDORIGINC
#include "AssemblyU2DCSharp_ParticlePlayground_PLAYGROUNDORIGINC.h"

// System.Void ParticlePlayground.PlaygroundC::.ctor()
extern "C" void PlaygroundC__ctor_m271 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::.cctor()
extern "C" void PlaygroundC__cctor_m272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::add_particleEventBirth(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_add_particleEventBirth_m273 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::remove_particleEventBirth(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_remove_particleEventBirth_m274 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::add_particleEventDeath(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_add_particleEventDeath_m275 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::remove_particleEventDeath(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_remove_particleEventDeath_m276 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::add_particleEventCollision(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_add_particleEventCollision_m277 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::remove_particleEventCollision(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_remove_particleEventCollision_m278 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::add_particleEventTime(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_add_particleEventTime_m279 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::remove_particleEventTime(ParticlePlayground.OnPlaygroundParticle)
extern "C" void PlaygroundC_remove_particleEventTime_m280 (Object_t * __this /* static, unused */, OnPlaygroundParticle_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SendParticleEventBirth(ParticlePlayground.PlaygroundEventParticle)
extern "C" void PlaygroundC_SendParticleEventBirth_m281 (Object_t * __this /* static, unused */, PlaygroundEventParticle_t114 * ___eventParticle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SendParticleEventDeath(ParticlePlayground.PlaygroundEventParticle)
extern "C" void PlaygroundC_SendParticleEventDeath_m282 (Object_t * __this /* static, unused */, PlaygroundEventParticle_t114 * ___eventParticle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SendParticleEventCollision(ParticlePlayground.PlaygroundEventParticle)
extern "C" void PlaygroundC_SendParticleEventCollision_m283 (Object_t * __this /* static, unused */, PlaygroundEventParticle_t114 * ___eventParticle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SendParticleEventTime(ParticlePlayground.PlaygroundEventParticle)
extern "C" void PlaygroundC_SendParticleEventTime_m284 (Object_t * __this /* static, unused */, PlaygroundEventParticle_t114 * ___eventParticle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle()
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m285 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::ParticleNew()
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_ParticleNew_m286 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Texture2D,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m287 (Object_t * __this /* static, unused */, Texture2D_t90 * ___image, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, Vector3_t53  ___offset, float ___particleSize, float ___scale, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Texture2D)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m288 (Object_t * __this /* static, unused */, Texture2D_t90 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Texture2D[],System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m289 (Object_t * __this /* static, unused */, Texture2DU5BU5D_t547* ___images, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, Vector3_t53  ___offset, float ___particleSize, float ___scale, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Texture2D[])
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m290 (Object_t * __this /* static, unused */, Texture2DU5BU5D_t547* ___images, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Mesh,UnityEngine.Texture2D,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3,UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m291 (Object_t * __this /* static, unused */, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, float ___particleScale, Vector3_t53  ___offset, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Mesh,UnityEngine.Texture2D)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m292 (Object_t * __this /* static, unused */, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Mesh[],UnityEngine.Texture2D[],System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3[],UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m293 (Object_t * __this /* static, unused */, MeshU5BU5D_t548* ___meshes, Texture2DU5BU5D_t547* ___textures, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, float ___particleScale, Vector3U5BU5D_t92* ___offsets, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::Particle(UnityEngine.Mesh[],UnityEngine.Texture2D[])
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_Particle_m294 (Object_t * __this /* static, unused */, MeshU5BU5D_t548* ___meshes, Texture2DU5BU5D_t547* ___textures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::Emit(ParticlePlayground.PlaygroundParticlesC)
extern "C" int32_t PlaygroundC_Emit_m295 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::Emit(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" int32_t PlaygroundC_Emit_m296 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___position, Vector3_t53  ___normal, Color_t121  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Emit(ParticlePlayground.PlaygroundParticlesC,System.Boolean)
extern "C" void PlaygroundC_Emit_m297 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, bool ___setEmission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::GetPosition(ParticlePlayground.SkinnedWorldObject,System.Boolean)
extern "C" void PlaygroundC_GetPosition_m298 (Object_t * __this /* static, unused */, SkinnedWorldObject_t109 * ___particleStateWorldObject, bool ___updateNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::GetPosition(UnityEngine.Vector3[],ParticlePlayground.WorldObject)
extern "C" void PlaygroundC_GetPosition_m299 (Object_t * __this /* static, unused */, Vector3U5BU5D_t92* ___vertices, WorldObject_t104 * ___particleStateWorldObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::GetNormals(UnityEngine.Vector3[],ParticlePlayground.WorldObject)
extern "C" void PlaygroundC_GetNormals_m300 (Object_t * __this /* static, unused */, Vector3U5BU5D_t92* ___normals, WorldObject_t104 * ___particleStateWorldObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetColor(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" void PlaygroundC_SetColor_m301 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetColor(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Color)
extern "C" void PlaygroundC_SetColor_m302 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Color_t121  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetAlpha(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundC_SetAlpha_m303 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetSize(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundC_SetSize_m304 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Translate(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3)
extern "C" void PlaygroundC_Translate_m305 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.ParticleStateC)
extern "C" void PlaygroundC_Add_m306 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, ParticleStateC_t94 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String)
extern "C" void PlaygroundC_Add_m307 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundC_Add_m308 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Vector3,System.String)
extern "C" void PlaygroundC_Add_m309 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, Texture2D_t90 * ___depthmap, float ___depthmapStrength, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundC_Add_m310 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, Texture2D_t90 * ___depthmap, float ___depthmapStrength, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,System.Single,UnityEngine.Vector3,System.String)
extern "C" void PlaygroundC_Add_m311 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Mesh_t93 * ___mesh, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundC_Add_m312 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Mesh_t93 * ___mesh, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String)
extern "C" void PlaygroundC_Add_m313 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundC_Add_m314 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundColliderC ParticlePlayground.PlaygroundC::AddCollider(ParticlePlayground.PlaygroundParticlesC)
extern "C" PlaygroundColliderC_t123 * PlaygroundC_AddCollider_m315 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundColliderC ParticlePlayground.PlaygroundC::AddCollider(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Transform)
extern "C" PlaygroundColliderC_t123 * PlaygroundC_AddCollider_m316 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Transform_t54 * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetParticleCount(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" void PlaygroundC_SetParticleCount_m317 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetLifetime(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundC_SetLifetime_m318 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetMaterial(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Material)
extern "C" void PlaygroundC_SetMaterial_m319 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Material_t48 * ___particleMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Destroy(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundC_Destroy_m320 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.WorldObject ParticlePlayground.PlaygroundC::WorldObject(UnityEngine.Transform)
extern "C" WorldObject_t104 * PlaygroundC_WorldObject_m321 (Object_t * __this /* static, unused */, Transform_t54 * ___meshTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.SkinnedWorldObject ParticlePlayground.PlaygroundC::SkinnedWorldObject(UnityEngine.Transform)
extern "C" SkinnedWorldObject_t109 * PlaygroundC_SkinnedWorldObject_m322 (Object_t * __this /* static, unused */, Transform_t54 * ___meshTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::ManipulatorObject(ParticlePlayground.MANIPULATORTYPEC,UnityEngine.LayerMask,UnityEngine.Transform,System.Single,System.Single)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_ManipulatorObject_m323 (Object_t * __this /* static, unused */, int32_t ___type, LayerMask_t87  ___affects, Transform_t54 * ___manipulatorTransform, float ___size, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::ManipulatorObject(UnityEngine.Transform)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_ManipulatorObject_m324 (Object_t * __this /* static, unused */, Transform_t54 * ___manipulatorTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::ManipulatorObject(ParticlePlayground.MANIPULATORTYPEC,UnityEngine.LayerMask,UnityEngine.Transform,System.Single,System.Single,ParticlePlayground.PlaygroundParticlesC)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_ManipulatorObject_m325 (Object_t * __this /* static, unused */, int32_t ___type, LayerMask_t87  ___affects, Transform_t54 * ___manipulatorTransform, float ___size, float ___strength, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::ManipulatorObject(UnityEngine.Transform,ParticlePlayground.PlaygroundParticlesC)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_ManipulatorObject_m326 (Object_t * __this /* static, unused */, Transform_t54 * ___manipulatorTransform, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::GetManipulator(System.Int32)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_GetManipulator_m327 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundC::GetManipulator(System.Int32,ParticlePlayground.PlaygroundParticlesC)
extern "C" ManipulatorObjectC_t115 * PlaygroundC_GetManipulator_m328 (Object_t * __this /* static, unused */, int32_t ___i, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle> ParticlePlayground.PlaygroundC::GetManipulatorParticles(System.Int32,ParticlePlayground.PlaygroundParticlesC)
extern "C" List_1_t549 * PlaygroundC_GetManipulatorParticles_m329 (Object_t * __this /* static, unused */, int32_t ___manipulator, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle> ParticlePlayground.PlaygroundC::GetManipulatorParticles(System.Int32)
extern "C" List_1_t549 * PlaygroundC_GetManipulatorParticles_m330 (Object_t * __this /* static, unused */, int32_t ___manipulator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ParticlePlayground.PlaygroundC::CreateTransform()
extern "C" Transform_t54 * PlaygroundC_CreateTransform_m331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ParticlePlayground.PlaygroundC::CreatePlaygroundTransform(ParticlePlayground.PlaygroundParticlesC)
extern "C" Transform_t54 * PlaygroundC_CreatePlaygroundTransform_m332 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlaygroundSplines.PlaygroundSpline ParticlePlayground.PlaygroundC::CreateSpline()
extern "C" PlaygroundSpline_t67 * PlaygroundC_CreateSpline_m333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlaygroundSplines.PlaygroundSpline ParticlePlayground.PlaygroundC::CreateSpline(ParticlePlayground.PlaygroundParticlesC)
extern "C" PlaygroundSpline_t67 * PlaygroundC_CreateSpline_m334 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlaygroundSplines.PlaygroundSpline ParticlePlayground.PlaygroundC::CreateSpline(ParticlePlayground.ManipulatorPropertyC)
extern "C" PlaygroundSpline_t67 * PlaygroundC_CreateSpline_m335 (Object_t * __this /* static, unused */, ManipulatorPropertyC_t110 * ___manipulatorProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventC ParticlePlayground.PlaygroundC::CreateEvent()
extern "C" PlaygroundEventC_t127 * PlaygroundC_CreateEvent_m336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventC ParticlePlayground.PlaygroundC::CreateEvent(ParticlePlayground.PlaygroundParticlesC)
extern "C" PlaygroundEventC_t127 * PlaygroundC_CreateEvent_m337 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundEventC ParticlePlayground.PlaygroundC::GetEvent(System.Int32,ParticlePlayground.PlaygroundParticlesC)
extern "C" PlaygroundEventC_t127 * PlaygroundC_GetEvent_m338 (Object_t * __this /* static, unused */, int32_t ___i, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::RemoveEvent(System.Int32,ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundC_RemoveEvent_m339 (Object_t * __this /* static, unused */, int32_t ___i, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::GetParticles(System.Int32)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_GetParticles_m340 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ParticleProjectionC ParticlePlayground.PlaygroundC::ParticleProjection(ParticlePlayground.PlaygroundParticlesC)
extern "C" ParticleProjectionC_t96 * PlaygroundC_ParticleProjection_m341 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PaintObjectC ParticlePlayground.PlaygroundC::PaintObject(ParticlePlayground.PlaygroundParticlesC)
extern "C" PaintObjectC_t86 * PlaygroundC_PaintObject_m342 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::Paint(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Color32)
extern "C" int32_t PlaygroundC_Paint_m343 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___position, Vector3_t53  ___normal, Transform_t54 * ___parent, Color32_t89  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Paint(ParticlePlayground.PaintObjectC,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Color32)
extern "C" void PlaygroundC_Paint_m344 (Object_t * __this /* static, unused */, PaintObjectC_t86 * ___paintObject, Vector3_t53  ___position, Vector3_t53  ___normal, Transform_t54 * ___parent, Color32_t89  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::Erase(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,System.Single)
extern "C" bool PlaygroundC_Erase_m345 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___position, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::Erase(ParticlePlayground.PaintObjectC,UnityEngine.Vector3,System.Single)
extern "C" bool PlaygroundC_Erase_m346 (Object_t * __this /* static, unused */, PaintObjectC_t86 * ___paintObject, Vector3_t53  ___position, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::Erase(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" bool PlaygroundC_Erase_m347 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::ClearPaint(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundC_ClearPaint_m348 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::GetPaintPositionLength(ParticlePlayground.PlaygroundParticlesC)
extern "C" int32_t PlaygroundC_GetPaintPositionLength_m349 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetInitialTargetPosition(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3)
extern "C" void PlaygroundC_SetInitialTargetPosition_m350 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Emission(ParticlePlayground.PlaygroundParticlesC,System.Boolean)
extern "C" void PlaygroundC_Emission_m351 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, bool ___emit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Emission(ParticlePlayground.PlaygroundParticlesC,System.Boolean,System.Boolean)
extern "C" void PlaygroundC_Emission_m352 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, bool ___emit, bool ___restEmission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Clear(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundC_Clear_m353 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::RefreshScatter(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundC_RefreshScatter_m354 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundC::InstantiatePreset(System.String)
extern "C" PlaygroundParticlesC_t126 * PlaygroundC_InstantiatePreset_m355 (Object_t * __this /* static, unused */, String_t* ___presetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::IsDoneThread()
extern "C" bool PlaygroundC_IsDoneThread_m356 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::IsDoneThreadTurbulence()
extern "C" bool PlaygroundC_IsDoneThreadTurbulence_m357 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::IsDoneThreadSkinnedMeshes()
extern "C" bool PlaygroundC_IsDoneThreadSkinnedMeshes_m358 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::IsFirstUnsafeAutomaticFrames()
extern "C" bool PlaygroundC_IsFirstUnsafeAutomaticFrames_m359 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::HasEnabledGlobalManipulators()
extern "C" bool PlaygroundC_HasEnabledGlobalManipulators_m360 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] ParticlePlayground.PlaygroundC::GetPixels(UnityEngine.Texture2D)
extern "C" Color32U5BU5D_t91* PlaygroundC_GetPixels_m361 (Object_t * __this /* static, unused */, Texture2D_t90 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundC::Offset(ParticlePlayground.PLAYGROUNDORIGINC,System.Int32,System.Int32,System.Single)
extern "C" Vector3_t53  PlaygroundC_Offset_m362 (Object_t * __this /* static, unused */, int32_t ___origin, int32_t ___imageWidth, int32_t ___imageHeight, float ___meshScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ParticlePlayground.PlaygroundC::RandomVector3(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3U5BU5D_t92* PlaygroundC_RandomVector3_m363 (Object_t * __this /* static, unused */, int32_t ___length, Vector3_t53  ___min, Vector3_t53  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ParticlePlayground.PlaygroundC::RandomFloat(System.Int32,System.Single,System.Single)
extern "C" SingleU5BU5D_t168* PlaygroundC_RandomFloat_m364 (Object_t * __this /* static, unused */, int32_t ___length, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::ShuffleArray(System.Single[])
extern "C" void PlaygroundC_ShuffleArray_m365 (Object_t * __this /* static, unused */, SingleU5BU5D_t168* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::ShuffleArray(System.Int32[])
extern "C" void PlaygroundC_ShuffleArray_m366 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::Largest(System.Int32[])
extern "C" int32_t PlaygroundC_Largest_m367 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___compare, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::CountZeroAlphasInTexture(UnityEngine.Texture2D)
extern "C" int32_t PlaygroundC_CountZeroAlphasInTexture_m368 (Object_t * __this /* static, unused */, Texture2D_t90 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ParticlePlayground.PlaygroundC::ResourceInstantiate(System.String)
extern "C" GameObject_t49 * PlaygroundC_ResourceInstantiate_m369 (Object_t * __this /* static, unused */, String_t* ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::TimeReset()
extern "C" void PlaygroundC_TimeReset_m370 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundC::InitializePlayground()
extern "C" Object_t * PlaygroundC_InitializePlayground_m371 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundC::IsReady()
extern "C" bool PlaygroundC_IsReady_m372 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::SetTime()
extern "C" void PlaygroundC_SetTime_m373 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::CheckEvents()
extern "C" void PlaygroundC_CheckEvents_m374 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::OnEnable()
extern "C" void PlaygroundC_OnEnable_m375 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::OnDisable()
extern "C" void PlaygroundC_OnDisable_m376 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Start()
extern "C" void PlaygroundC_Start_m377 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::LateUpdate()
extern "C" void PlaygroundC_LateUpdate_m378 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::Update()
extern "C" void PlaygroundC_Update_m379 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::ActiveThreads()
extern "C" int32_t PlaygroundC_ActiveThreads_m380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundC::ProcessorCount()
extern "C" int32_t PlaygroundC_ProcessorCount_m381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::ThreadAggregator()
extern "C" void PlaygroundC_ThreadAggregator_m382 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::RunAsync(System.Action)
extern "C" void PlaygroundC_RunAsync_m383 (Object_t * __this /* static, unused */, Action_t250 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::RunAction(System.Object)
extern "C" void PlaygroundC_RunAction_m384 (Object_t * __this /* static, unused */, Object_t * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::<ThreadAggregator>m__0()
extern "C" void PlaygroundC_U3CThreadAggregatorU3Em__0_m385 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::<ThreadAggregator>m__1()
extern "C" void PlaygroundC_U3CThreadAggregatorU3Em__1_m386 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::<ThreadAggregator>m__2()
extern "C" void PlaygroundC_U3CThreadAggregatorU3Em__2_m387 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundC::<ThreadAggregator>m__3()
extern "C" void PlaygroundC_U3CThreadAggregatorU3Em__3_m388 (PlaygroundC_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
