#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t296;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PickupCharacterState
#include "AssemblyU2DCSharp_PickupCharacterState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// PickupController
struct  PickupController_t355  : public MonoBehaviour_t47
{
	// UnityEngine.AnimationClip PickupController::idleAnimation
	AnimationClip_t296 * ___idleAnimation_2;
	// UnityEngine.AnimationClip PickupController::walkAnimation
	AnimationClip_t296 * ___walkAnimation_3;
	// UnityEngine.AnimationClip PickupController::runAnimation
	AnimationClip_t296 * ___runAnimation_4;
	// UnityEngine.AnimationClip PickupController::jumpPoseAnimation
	AnimationClip_t296 * ___jumpPoseAnimation_5;
	// System.Single PickupController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_6;
	// System.Single PickupController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_7;
	// System.Single PickupController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_8;
	// System.Single PickupController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_9;
	// System.Single PickupController::landAnimationSpeed
	float ___landAnimationSpeed_10;
	// UnityEngine.Animation PickupController::_animation
	Animation_t298 * ____animation_11;
	// PickupCharacterState PickupController::_characterState
	int32_t ____characterState_12;
	// System.Single PickupController::walkSpeed
	float ___walkSpeed_13;
	// System.Single PickupController::trotSpeed
	float ___trotSpeed_14;
	// System.Single PickupController::runSpeed
	float ___runSpeed_15;
	// System.Single PickupController::inAirControlAcceleration
	float ___inAirControlAcceleration_16;
	// System.Single PickupController::jumpHeight
	float ___jumpHeight_17;
	// System.Single PickupController::gravity
	float ___gravity_18;
	// System.Single PickupController::speedSmoothing
	float ___speedSmoothing_19;
	// System.Single PickupController::rotateSpeed
	float ___rotateSpeed_20;
	// System.Single PickupController::trotAfterSeconds
	float ___trotAfterSeconds_21;
	// System.Boolean PickupController::canJump
	bool ___canJump_22;
	// System.Single PickupController::jumpRepeatTime
	float ___jumpRepeatTime_23;
	// System.Single PickupController::jumpTimeout
	float ___jumpTimeout_24;
	// System.Single PickupController::groundedTimeout
	float ___groundedTimeout_25;
	// System.Single PickupController::lockCameraTimer
	float ___lockCameraTimer_26;
	// UnityEngine.Vector3 PickupController::moveDirection
	Vector3_t53  ___moveDirection_27;
	// System.Single PickupController::verticalSpeed
	float ___verticalSpeed_28;
	// System.Single PickupController::moveSpeed
	float ___moveSpeed_29;
	// UnityEngine.CollisionFlags PickupController::collisionFlags
	int32_t ___collisionFlags_30;
	// System.Boolean PickupController::jumping
	bool ___jumping_31;
	// System.Boolean PickupController::jumpingReachedApex
	bool ___jumpingReachedApex_32;
	// System.Boolean PickupController::movingBack
	bool ___movingBack_33;
	// System.Boolean PickupController::isMoving
	bool ___isMoving_34;
	// System.Single PickupController::walkTimeStart
	float ___walkTimeStart_35;
	// System.Single PickupController::lastJumpButtonTime
	float ___lastJumpButtonTime_36;
	// System.Single PickupController::lastJumpTime
	float ___lastJumpTime_37;
	// UnityEngine.Vector3 PickupController::inAirVelocity
	Vector3_t53  ___inAirVelocity_38;
	// System.Single PickupController::lastGroundedTime
	float ___lastGroundedTime_39;
	// UnityEngine.Vector3 PickupController::velocity
	Vector3_t53  ___velocity_40;
	// UnityEngine.Vector3 PickupController::lastPos
	Vector3_t53  ___lastPos_41;
	// UnityEngine.Vector3 PickupController::remotePosition
	Vector3_t53  ___remotePosition_42;
	// System.Boolean PickupController::isControllable
	bool ___isControllable_43;
	// System.Boolean PickupController::DoRotate
	bool ___DoRotate_44;
	// System.Single PickupController::RemoteSmoothing
	float ___RemoteSmoothing_45;
	// System.Boolean PickupController::AssignAsTagObject
	bool ___AssignAsTagObject_46;
};
