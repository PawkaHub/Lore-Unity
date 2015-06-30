#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// ThirdPersonController
struct ThirdPersonController_t371;
// UnityEngine.Camera
struct Camera_t356;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThirdPersonCamera
struct  ThirdPersonCamera_t372  : public MonoBehaviour_t47
{
	// UnityEngine.Transform ThirdPersonCamera::cameraTransform
	Transform_t54 * ___cameraTransform_2;
	// UnityEngine.Transform ThirdPersonCamera::_target
	Transform_t54 * ____target_3;
	// System.Single ThirdPersonCamera::distance
	float ___distance_4;
	// System.Single ThirdPersonCamera::height
	float ___height_5;
	// System.Single ThirdPersonCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single ThirdPersonCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single ThirdPersonCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single ThirdPersonCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single ThirdPersonCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single ThirdPersonCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single ThirdPersonCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 ThirdPersonCamera::headOffset
	Vector3_t53  ___headOffset_13;
	// UnityEngine.Vector3 ThirdPersonCamera::centerOffset
	Vector3_t53  ___centerOffset_14;
	// System.Single ThirdPersonCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single ThirdPersonCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean ThirdPersonCamera::snap
	bool ___snap_17;
	// ThirdPersonController ThirdPersonCamera::controller
	ThirdPersonController_t371 * ___controller_18;
	// System.Single ThirdPersonCamera::targetHeight
	float ___targetHeight_19;
	// UnityEngine.Camera ThirdPersonCamera::m_CameraTransformCamera
	Camera_t356 * ___m_CameraTransformCamera_20;
};
