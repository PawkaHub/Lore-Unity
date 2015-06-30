#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t63;
// System.Collections.Generic.List`1<PlaygroundSplines.BezierControlPointMode>
struct List_1_t64;
// System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>
struct List_1_t65;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t66;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PlaygroundSplines.PlaygroundSpline
struct  PlaygroundSpline_t67  : public MonoBehaviour_t47
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PlaygroundSplines.PlaygroundSpline::points
	List_1_t63 * ___points_2;
	// System.Collections.Generic.List`1<PlaygroundSplines.BezierControlPointMode> PlaygroundSplines.PlaygroundSpline::modes
	List_1_t64 * ___modes_3;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::loop
	bool ___loop_4;
	// System.Collections.Generic.List`1<PlaygroundSplines.TransformNode> PlaygroundSplines.PlaygroundSpline::transformNodes
	List_1_t65 * ___transformNodes_5;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::reverse
	bool ___reverse_6;
	// System.Single PlaygroundSplines.PlaygroundSpline::timeOffset
	float ___timeOffset_7;
	// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::positionOffset
	Vector3_t53  ___positionOffset_8;
	// UnityEngine.Transform PlaygroundSplines.PlaygroundSpline::splineTransform
	Transform_t54 * ___splineTransform_9;
	// UnityEngine.Matrix4x4 PlaygroundSplines.PlaygroundSpline::splineTransformMx
	Matrix4x4_t68  ___splineTransformMx_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PlaygroundSplines.PlaygroundSpline::usedBy
	List_1_t66 * ___usedBy_11;
	// System.Single PlaygroundSplines.PlaygroundSpline::fixedVelocityOnNewNode
	float ___fixedVelocityOnNewNode_12;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::moveTransformsAsBeziers
	bool ___moveTransformsAsBeziers_13;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::exportWithNodeStructure
	bool ___exportWithNodeStructure_14;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::drawGizmo
	bool ___drawGizmo_16;
	// System.Single PlaygroundSplines.PlaygroundSpline::bezierWidth
	float ___bezierWidth_17;
	// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::previousPosition
	Vector3_t53  ___previousPosition_18;
	// UnityEngine.Quaternion PlaygroundSplines.PlaygroundSpline::previousRotation
	Quaternion_t69  ___previousRotation_19;
	// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::previousScale
	Vector3_t53  ___previousScale_20;
	// System.Boolean PlaygroundSplines.PlaygroundSpline::isReady
	bool ___isReady_21;
};
struct PlaygroundSpline_t67_StaticFields{
	// System.Boolean PlaygroundSplines.PlaygroundSpline::drawSplinePreviews
	bool ___drawSplinePreviews_15;
};
