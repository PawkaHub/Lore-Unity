#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// RPGCamera
struct  RPGCamera_t361  : public MonoBehaviour_t47
{
	// UnityEngine.Transform RPGCamera::Target
	Transform_t54 * ___Target_2;
	// System.Single RPGCamera::MaximumDistance
	float ___MaximumDistance_3;
	// System.Single RPGCamera::MinimumDistance
	float ___MinimumDistance_4;
	// System.Single RPGCamera::ScrollModifier
	float ___ScrollModifier_5;
	// System.Single RPGCamera::TurnModifier
	float ___TurnModifier_6;
	// UnityEngine.Transform RPGCamera::m_CameraTransform
	Transform_t54 * ___m_CameraTransform_7;
	// UnityEngine.Vector3 RPGCamera::m_LookAtPoint
	Vector3_t53  ___m_LookAtPoint_8;
	// UnityEngine.Vector3 RPGCamera::m_LocalForwardVector
	Vector3_t53  ___m_LocalForwardVector_9;
	// System.Single RPGCamera::m_Distance
	float ___m_Distance_10;
};
