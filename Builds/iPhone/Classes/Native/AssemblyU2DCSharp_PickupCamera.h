#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PickupController
struct PickupController_t383;
// UnityEngine.Camera
struct Camera_t384;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PickupCamera
struct  PickupCamera_t385  : public MonoBehaviour_t357
{
	// UnityEngine.Transform PickupCamera::cameraTransform
	Transform_t54 * ___cameraTransform_2;
	// UnityEngine.Transform PickupCamera::_target
	Transform_t54 * ____target_3;
	// System.Single PickupCamera::distance
	float ___distance_4;
	// System.Single PickupCamera::height
	float ___height_5;
	// System.Single PickupCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single PickupCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single PickupCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single PickupCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single PickupCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single PickupCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single PickupCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 PickupCamera::headOffset
	Vector3_t53  ___headOffset_13;
	// UnityEngine.Vector3 PickupCamera::centerOffset
	Vector3_t53  ___centerOffset_14;
	// System.Single PickupCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single PickupCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean PickupCamera::snap
	bool ___snap_17;
	// PickupController PickupCamera::controller
	PickupController_t383 * ___controller_18;
	// System.Single PickupCamera::targetHeight
	float ___targetHeight_19;
	// UnityEngine.Camera PickupCamera::m_CameraTransformCamera
	Camera_t384 * ___m_CameraTransformCamera_20;
};
