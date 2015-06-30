#pragma once
#include <stdint.h>
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t105;
// UnityEngine.Transform[]
struct TransformU5BU5D_t95;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t106;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t108;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Mesh
struct Mesh_t93;
// ParticlePlayground.WorldObjectBaseC
#include "AssemblyU2DCSharp_ParticlePlayground_WorldObjectBaseC.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// ParticlePlayground.SkinnedWorldObject
struct  SkinnedWorldObject_t109  : public WorldObjectBaseC_t102
{
	// System.Int32 ParticlePlayground.SkinnedWorldObject::downResolution
	int32_t ___downResolution_11;
	// UnityEngine.SkinnedMeshRenderer ParticlePlayground.SkinnedWorldObject::renderer
	SkinnedMeshRenderer_t105 * ___renderer_12;
	// UnityEngine.Transform[] ParticlePlayground.SkinnedWorldObject::boneTransforms
	TransformU5BU5D_t95* ___boneTransforms_13;
	// UnityEngine.BoneWeight[] ParticlePlayground.SkinnedWorldObject::weights
	BoneWeightU5BU5D_t106* ___weights_14;
	// UnityEngine.Matrix4x4[] ParticlePlayground.SkinnedWorldObject::bindPoses
	Matrix4x4U5BU5D_t108* ___bindPoses_15;
	// UnityEngine.Matrix4x4[] ParticlePlayground.SkinnedWorldObject::boneMatrices
	Matrix4x4U5BU5D_t108* ___boneMatrices_16;
	// UnityEngine.Vector3[] ParticlePlayground.SkinnedWorldObject::vertices
	Vector3U5BU5D_t92* ___vertices_17;
	// UnityEngine.Vector3[] ParticlePlayground.SkinnedWorldObject::localVertices
	Vector3U5BU5D_t92* ___localVertices_18;
	// System.Boolean ParticlePlayground.SkinnedWorldObject::isDoneThread
	bool ___isDoneThread_19;
	// UnityEngine.Mesh ParticlePlayground.SkinnedWorldObject::bakedMesh
	Mesh_t93 * ___bakedMesh_20;
	// UnityEngine.Matrix4x4 ParticlePlayground.SkinnedWorldObject::vertexMatrix
	Matrix4x4_t68  ___vertexMatrix_21;
};
