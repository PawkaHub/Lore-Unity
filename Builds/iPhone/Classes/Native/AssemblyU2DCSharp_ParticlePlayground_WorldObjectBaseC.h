#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Rigidbody
struct Rigidbody_t100;
// UnityEngine.MeshFilter
struct MeshFilter_t101;
// UnityEngine.Mesh
struct Mesh_t93;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// ParticlePlayground.WorldObjectBaseC
struct  WorldObjectBaseC_t102  : public Object_t
{
	// UnityEngine.GameObject ParticlePlayground.WorldObjectBaseC::gameObject
	GameObject_t49 * ___gameObject_0;
	// UnityEngine.Transform ParticlePlayground.WorldObjectBaseC::transform
	Transform_t54 * ___transform_1;
	// UnityEngine.Rigidbody ParticlePlayground.WorldObjectBaseC::rigidbody
	Rigidbody_t100 * ___rigidbody_2;
	// UnityEngine.MeshFilter ParticlePlayground.WorldObjectBaseC::meshFilter
	MeshFilter_t101 * ___meshFilter_3;
	// UnityEngine.Mesh ParticlePlayground.WorldObjectBaseC::mesh
	Mesh_t93 * ___mesh_4;
	// UnityEngine.Vector3[] ParticlePlayground.WorldObjectBaseC::vertexPositions
	Vector3U5BU5D_t92* ___vertexPositions_5;
	// UnityEngine.Vector3[] ParticlePlayground.WorldObjectBaseC::normals
	Vector3U5BU5D_t92* ___normals_6;
	// System.Boolean ParticlePlayground.WorldObjectBaseC::updateNormals
	bool ___updateNormals_7;
	// System.Int32 ParticlePlayground.WorldObjectBaseC::cachedId
	int32_t ___cachedId_8;
	// System.Boolean ParticlePlayground.WorldObjectBaseC::initialized
	bool ___initialized_9;
	// UnityEngine.Matrix4x4 ParticlePlayground.WorldObjectBaseC::transformMatrix
	Matrix4x4_t68  ___transformMatrix_10;
};
