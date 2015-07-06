#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.MeshParticles
struct MeshParticles_t191;
// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t566;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t565;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.Mesh
struct Mesh_t93;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void ParticlePlayground.MeshParticles::.ctor()
extern "C" void MeshParticles__ctor_m767 (MeshParticles_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.MeshParticles::CreateMeshParticles(UnityEngine.Mesh[],UnityEngine.Texture2D[],UnityEngine.Texture2D[],System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3[],UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * MeshParticles_CreateMeshParticles_m768 (Object_t * __this /* static, unused */, MeshU5BU5D_t566* ___meshes, Texture2DU5BU5D_t565* ___textures, Texture2DU5BU5D_t565* ___heightMap, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, float ___particleScale, Vector3U5BU5D_t92* ___offsets, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.MeshParticles::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void MeshParticles_Add_m769 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___meshParticles, Mesh_t93 * ___mesh, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.MeshParticles::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Mesh,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void MeshParticles_Add_m770 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___meshParticles, Mesh_t93 * ___mesh, Texture2D_t90 * ___texture, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
