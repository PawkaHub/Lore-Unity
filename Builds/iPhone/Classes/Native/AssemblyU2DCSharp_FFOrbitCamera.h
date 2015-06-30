#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// FFOrbitCamera
struct  FFOrbitCamera_t57  : public MonoBehaviour_t47
{
	// UnityEngine.Transform FFOrbitCamera::TargetLookAt
	Transform_t54 * ___TargetLookAt_2;
	// System.Single FFOrbitCamera::Distance
	float ___Distance_3;
	// System.Single FFOrbitCamera::DistanceMin
	float ___DistanceMin_4;
	// System.Single FFOrbitCamera::DistanceMax
	float ___DistanceMax_5;
	// System.Single FFOrbitCamera::startingDistance
	float ___startingDistance_6;
	// System.Single FFOrbitCamera::desiredDistance
	float ___desiredDistance_7;
	// System.Single FFOrbitCamera::mouseX
	float ___mouseX_8;
	// System.Single FFOrbitCamera::mouseY
	float ___mouseY_9;
	// System.Single FFOrbitCamera::X_MouseSensitivity
	float ___X_MouseSensitivity_10;
	// System.Single FFOrbitCamera::Y_MouseSensitivity
	float ___Y_MouseSensitivity_11;
	// System.Single FFOrbitCamera::MouseWheelSensitivity
	float ___MouseWheelSensitivity_12;
	// System.Single FFOrbitCamera::Y_MinLimit
	float ___Y_MinLimit_13;
	// System.Single FFOrbitCamera::Y_MaxLimit
	float ___Y_MaxLimit_14;
	// System.Single FFOrbitCamera::DistanceSmooth
	float ___DistanceSmooth_15;
	// System.Single FFOrbitCamera::velocityDistance
	float ___velocityDistance_16;
	// UnityEngine.Vector3 FFOrbitCamera::desiredPosition
	Vector3_t53  ___desiredPosition_17;
	// System.Single FFOrbitCamera::X_Smooth
	float ___X_Smooth_18;
	// System.Single FFOrbitCamera::Y_Smooth
	float ___Y_Smooth_19;
	// System.Single FFOrbitCamera::velX
	float ___velX_20;
	// System.Single FFOrbitCamera::velY
	float ___velY_21;
	// System.Single FFOrbitCamera::velZ
	float ___velZ_22;
	// UnityEngine.Vector3 FFOrbitCamera::position
	Vector3_t53  ___position_23;
};
