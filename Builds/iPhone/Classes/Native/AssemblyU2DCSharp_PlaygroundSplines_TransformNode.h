#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlaygroundSplines.TransformNode
struct  TransformNode_t71  : public Object_t
{
	// System.Boolean PlaygroundSplines.TransformNode::enabled
	bool ___enabled_0;
	// UnityEngine.Transform PlaygroundSplines.TransformNode::transform
	Transform_t54 * ___transform_1;
	// System.Boolean PlaygroundSplines.TransformNode::isAvailable
	bool ___isAvailable_2;
	// UnityEngine.Vector3 PlaygroundSplines.TransformNode::position
	Vector3_t53  ___position_3;
	// UnityEngine.Vector3 PlaygroundSplines.TransformNode::inversePosition
	Vector3_t53  ___inversePosition_4;
	// UnityEngine.Vector3 PlaygroundSplines.TransformNode::previousPosition
	Vector3_t53  ___previousPosition_5;
};
