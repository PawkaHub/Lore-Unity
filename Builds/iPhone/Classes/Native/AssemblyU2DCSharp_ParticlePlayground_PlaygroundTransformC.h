#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// ParticlePlayground.PlaygroundTransformC
struct  PlaygroundTransformC_t112  : public Object_t
{
	// UnityEngine.Transform ParticlePlayground.PlaygroundTransformC::transform
	Transform_t54 * ___transform_0;
	// System.Int32 ParticlePlayground.PlaygroundTransformC::instanceID
	int32_t ___instanceID_1;
	// System.Boolean ParticlePlayground.PlaygroundTransformC::available
	bool ___available_2;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::position
	Vector3_t53  ___position_3;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::localPosition
	Vector3_t53  ___localPosition_4;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::previousPosition
	Vector3_t53  ___previousPosition_5;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::forward
	Vector3_t53  ___forward_6;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::up
	Vector3_t53  ___up_7;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::right
	Vector3_t53  ___right_8;
	// UnityEngine.Quaternion ParticlePlayground.PlaygroundTransformC::rotation
	Quaternion_t69  ___rotation_9;
	// UnityEngine.Quaternion ParticlePlayground.PlaygroundTransformC::inverseRotation
	Quaternion_t69  ___inverseRotation_10;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundTransformC::localScale
	Vector3_t53  ___localScale_11;
	// UnityEngine.Matrix4x4 ParticlePlayground.PlaygroundTransformC::transformMatrix
	Matrix4x4_t68  ___transformMatrix_12;
	// System.Boolean ParticlePlayground.PlaygroundTransformC::unfolded
	bool ___unfolded_13;
};
