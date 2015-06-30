#pragma once
#include <stdint.h>
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// System.Boolean[]
struct BooleanU5BU5D_t31;
// UnityEngine.Transform[]
struct TransformU5BU5D_t95;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.Transform
struct Transform_t54;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// ParticlePlayground.COLLISIONTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_COLLISIONTYPEC.h"
// ParticlePlayground.ParticleProjectionC
struct  ParticleProjectionC_t96  : public Object_t
{
	// UnityEngine.Color32[] ParticlePlayground.ParticleProjectionC::sourceColors
	Color32U5BU5D_t91* ___sourceColors_0;
	// UnityEngine.Vector3[] ParticlePlayground.ParticleProjectionC::sourcePositions
	Vector3U5BU5D_t92* ___sourcePositions_1;
	// UnityEngine.Vector3[] ParticlePlayground.ParticleProjectionC::targetPositions
	Vector3U5BU5D_t92* ___targetPositions_2;
	// UnityEngine.Vector3[] ParticlePlayground.ParticleProjectionC::targetNormals
	Vector3U5BU5D_t92* ___targetNormals_3;
	// System.Boolean[] ParticlePlayground.ParticleProjectionC::hasProjected
	BooleanU5BU5D_t31* ___hasProjected_4;
	// UnityEngine.Transform[] ParticlePlayground.ParticleProjectionC::targetParents
	TransformU5BU5D_t95* ___targetParents_5;
	// UnityEngine.Texture2D ParticlePlayground.ParticleProjectionC::projectionTexture
	Texture2D_t90 * ___projectionTexture_6;
	// UnityEngine.Vector2 ParticlePlayground.ParticleProjectionC::projectionOrigin
	Vector2_t97  ___projectionOrigin_7;
	// UnityEngine.Transform ParticlePlayground.ParticleProjectionC::projectionTransform
	Transform_t54 * ___projectionTransform_8;
	// UnityEngine.Matrix4x4 ParticlePlayground.ParticleProjectionC::projectionMatrix
	Matrix4x4_t68  ___projectionMatrix_9;
	// UnityEngine.Vector3 ParticlePlayground.ParticleProjectionC::projectionPosition
	Vector3_t53  ___projectionPosition_10;
	// UnityEngine.Vector3 ParticlePlayground.ParticleProjectionC::projectionDirection
	Vector3_t53  ___projectionDirection_11;
	// UnityEngine.Quaternion ParticlePlayground.ParticleProjectionC::projectionRotation
	Quaternion_t69  ___projectionRotation_12;
	// System.Single ParticlePlayground.ParticleProjectionC::projectionDistance
	float ___projectionDistance_13;
	// System.Single ParticlePlayground.ParticleProjectionC::projectionScale
	float ___projectionScale_14;
	// UnityEngine.LayerMask ParticlePlayground.ParticleProjectionC::projectionMask
	LayerMask_t87  ___projectionMask_15;
	// ParticlePlayground.COLLISIONTYPEC ParticlePlayground.ParticleProjectionC::collisionType
	int32_t ___collisionType_16;
	// System.Single ParticlePlayground.ParticleProjectionC::minDepth
	float ___minDepth_17;
	// System.Single ParticlePlayground.ParticleProjectionC::maxDepth
	float ___maxDepth_18;
	// System.Single ParticlePlayground.ParticleProjectionC::surfaceOffset
	float ___surfaceOffset_19;
	// System.Boolean ParticlePlayground.ParticleProjectionC::liveUpdate
	bool ___liveUpdate_20;
	// System.Boolean ParticlePlayground.ParticleProjectionC::hasRefreshed
	bool ___hasRefreshed_21;
	// System.Boolean ParticlePlayground.ParticleProjectionC::initialized
	bool ___initialized_22;
	// System.Int32 ParticlePlayground.ParticleProjectionC::colorLength
	int32_t ___colorLength_23;
	// System.Int32 ParticlePlayground.ParticleProjectionC::positionLength
	int32_t ___positionLength_24;
};
