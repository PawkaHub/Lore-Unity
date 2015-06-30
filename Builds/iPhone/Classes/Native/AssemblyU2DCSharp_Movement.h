#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t100;
// UnityEngine.Animator
struct Animator_t214;
// Photon.PunBehaviour
#include "AssemblyU2DCSharp_Photon_PunBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Movement
struct  Movement_t543  : public PunBehaviour_t351
{
	// System.Single Movement::_facingAngleAdjustment
	float ____facingAngleAdjustment_2;
	// System.Single Movement::_maxSpeed
	float ____maxSpeed_3;
	// UnityEngine.Rigidbody Movement::cachedRigidBody
	Rigidbody_t100 * ___cachedRigidBody_4;
	// UnityEngine.Animator Movement::cachedAnimator
	Animator_t214 * ___cachedAnimator_5;
	// UnityEngine.Vector3 Movement::touchPoint
	Vector3_t53  ___touchPoint_6;
	// UnityEngine.Vector3 Movement::heading
	Vector3_t53  ___heading_7;
	// System.Boolean Movement::dontMove
	bool ___dontMove_8;
	// System.Single Movement::lastSynchronizationTime
	float ___lastSynchronizationTime_9;
	// System.Single Movement::syncDelay
	float ___syncDelay_10;
	// System.Single Movement::syncTime
	float ___syncTime_11;
	// UnityEngine.Vector3 Movement::syncStartPosition
	Vector3_t53  ___syncStartPosition_12;
	// UnityEngine.Vector3 Movement::syncEndPosition
	Vector3_t53  ___syncEndPosition_13;
	// UnityEngine.Vector3 Movement::syncPosition
	Vector3_t53  ___syncPosition_14;
	// UnityEngine.Vector3 Movement::syncVelocity
	Vector3_t53  ___syncVelocity_15;
	// UnityEngine.Quaternion Movement::syncRotation
	Quaternion_t69  ___syncRotation_16;
	// System.Boolean Movement::syncRun
	bool ___syncRun_17;
};
