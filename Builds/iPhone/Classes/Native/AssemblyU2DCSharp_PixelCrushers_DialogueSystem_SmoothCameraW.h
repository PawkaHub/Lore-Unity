#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PixelCrushers.DialogueSystem.SmoothCameraWithBumper
struct  SmoothCameraWithBumper_t293  : public MonoBehaviour_t47
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SmoothCameraWithBumper::target
	Transform_t54 * ___target_2;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::distance
	float ___distance_3;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::height
	float ___height_4;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::damping
	float ___damping_5;
	// System.Boolean PixelCrushers.DialogueSystem.SmoothCameraWithBumper::smoothRotation
	bool ___smoothRotation_6;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::rotationDamping
	float ___rotationDamping_7;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SmoothCameraWithBumper::targetLookAtOffset
	Vector3_t53  ___targetLookAtOffset_8;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::bumperDistanceCheck
	float ___bumperDistanceCheck_9;
	// System.Single PixelCrushers.DialogueSystem.SmoothCameraWithBumper::bumperCameraHeight
	float ___bumperCameraHeight_10;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SmoothCameraWithBumper::bumperRayOffset
	Vector3_t53  ___bumperRayOffset_11;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SmoothCameraWithBumper::originalRotation
	Quaternion_t69  ___originalRotation_12;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SmoothCameraWithBumper::<adjustQuaternion>k__BackingField
	Quaternion_t69  ___U3CadjustQuaternionU3Ek__BackingField_13;
};
