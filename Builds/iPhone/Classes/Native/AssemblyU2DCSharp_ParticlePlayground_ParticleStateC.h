#pragma once
#include <stdint.h>
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.Mesh
struct Mesh_t93;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// ParticlePlayground.ParticleStateC
struct  ParticleStateC_t94  : public Object_t
{
	// UnityEngine.Color32[] ParticlePlayground.ParticleStateC::color
	Color32U5BU5D_t91* ___color_0;
	// UnityEngine.Vector3[] ParticlePlayground.ParticleStateC::position
	Vector3U5BU5D_t92* ___position_1;
	// UnityEngine.Vector3[] ParticlePlayground.ParticleStateC::normals
	Vector3U5BU5D_t92* ___normals_2;
	// UnityEngine.Texture2D ParticlePlayground.ParticleStateC::stateTexture
	Texture2D_t90 * ___stateTexture_3;
	// UnityEngine.Texture2D ParticlePlayground.ParticleStateC::stateDepthmap
	Texture2D_t90 * ___stateDepthmap_4;
	// System.Single ParticlePlayground.ParticleStateC::stateDepthmapStrength
	float ___stateDepthmapStrength_5;
	// UnityEngine.Mesh ParticlePlayground.ParticleStateC::stateMesh
	Mesh_t93 * ___stateMesh_6;
	// System.String ParticlePlayground.ParticleStateC::stateName
	String_t* ___stateName_7;
	// System.Single ParticlePlayground.ParticleStateC::stateScale
	float ___stateScale_8;
	// UnityEngine.Vector3 ParticlePlayground.ParticleStateC::stateOffset
	Vector3_t53  ___stateOffset_9;
	// UnityEngine.Transform ParticlePlayground.ParticleStateC::stateTransform
	Transform_t54 * ___stateTransform_10;
	// UnityEngine.Matrix4x4 ParticlePlayground.ParticleStateC::stateTransformMx
	Matrix4x4_t68  ___stateTransformMx_11;
	// System.Boolean ParticlePlayground.ParticleStateC::initialized
	bool ___initialized_12;
	// System.Int32 ParticlePlayground.ParticleStateC::colorLength
	int32_t ___colorLength_13;
	// System.Int32 ParticlePlayground.ParticleStateC::positionLength
	int32_t ___positionLength_14;
	// System.Boolean ParticlePlayground.ParticleStateC::applyChromaKey
	bool ___applyChromaKey_15;
	// UnityEngine.Color32 ParticlePlayground.ParticleStateC::chromaKey
	Color32_t89  ___chromaKey_16;
	// System.Single ParticlePlayground.ParticleStateC::chromaKeySpread
	float ___chromaKeySpread_17;
	// System.Boolean ParticlePlayground.ParticleStateC::isInitializing
	bool ___isInitializing_18;
};
