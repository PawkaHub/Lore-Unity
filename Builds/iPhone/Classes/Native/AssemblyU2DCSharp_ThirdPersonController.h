#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t296;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CharacterState
#include "AssemblyU2DCSharp_CharacterState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// ThirdPersonController
struct  ThirdPersonController_t371  : public MonoBehaviour_t47
{
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation
	AnimationClip_t296 * ___idleAnimation_2;
	// UnityEngine.AnimationClip ThirdPersonController::walkAnimation
	AnimationClip_t296 * ___walkAnimation_3;
	// UnityEngine.AnimationClip ThirdPersonController::runAnimation
	AnimationClip_t296 * ___runAnimation_4;
	// UnityEngine.AnimationClip ThirdPersonController::jumpPoseAnimation
	AnimationClip_t296 * ___jumpPoseAnimation_5;
	// System.Single ThirdPersonController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_6;
	// System.Single ThirdPersonController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_7;
	// System.Single ThirdPersonController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_8;
	// System.Single ThirdPersonController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_9;
	// System.Single ThirdPersonController::landAnimationSpeed
	float ___landAnimationSpeed_10;
	// UnityEngine.Animation ThirdPersonController::_animation
	Animation_t298 * ____animation_11;
	// CharacterState ThirdPersonController::_characterState
	int32_t ____characterState_12;
	// System.Single ThirdPersonController::walkSpeed
	float ___walkSpeed_13;
	// System.Single ThirdPersonController::trotSpeed
	float ___trotSpeed_14;
	// System.Single ThirdPersonController::runSpeed
	float ___runSpeed_15;
	// System.Single ThirdPersonController::inAirControlAcceleration
	float ___inAirControlAcceleration_16;
	// System.Single ThirdPersonController::jumpHeight
	float ___jumpHeight_17;
	// System.Single ThirdPersonController::gravity
	float ___gravity_18;
	// System.Single ThirdPersonController::speedSmoothing
	float ___speedSmoothing_19;
	// System.Single ThirdPersonController::rotateSpeed
	float ___rotateSpeed_20;
	// System.Single ThirdPersonController::trotAfterSeconds
	float ___trotAfterSeconds_21;
	// System.Boolean ThirdPersonController::canJump
	bool ___canJump_22;
	// System.Single ThirdPersonController::jumpRepeatTime
	float ___jumpRepeatTime_23;
	// System.Single ThirdPersonController::jumpTimeout
	float ___jumpTimeout_24;
	// System.Single ThirdPersonController::groundedTimeout
	float ___groundedTimeout_25;
	// System.Single ThirdPersonController::lockCameraTimer
	float ___lockCameraTimer_26;
	// UnityEngine.Vector3 ThirdPersonController::moveDirection
	Vector3_t53  ___moveDirection_27;
	// System.Single ThirdPersonController::verticalSpeed
	float ___verticalSpeed_28;
	// System.Single ThirdPersonController::moveSpeed
	float ___moveSpeed_29;
	// UnityEngine.CollisionFlags ThirdPersonController::collisionFlags
	int32_t ___collisionFlags_30;
	// System.Boolean ThirdPersonController::jumping
	bool ___jumping_31;
	// System.Boolean ThirdPersonController::jumpingReachedApex
	bool ___jumpingReachedApex_32;
	// System.Boolean ThirdPersonController::movingBack
	bool ___movingBack_33;
	// System.Boolean ThirdPersonController::isMoving
	bool ___isMoving_34;
	// System.Single ThirdPersonController::walkTimeStart
	float ___walkTimeStart_35;
	// System.Single ThirdPersonController::lastJumpButtonTime
	float ___lastJumpButtonTime_36;
	// System.Single ThirdPersonController::lastJumpTime
	float ___lastJumpTime_37;
	// UnityEngine.Vector3 ThirdPersonController::inAirVelocity
	Vector3_t53  ___inAirVelocity_38;
	// System.Single ThirdPersonController::lastGroundedTime
	float ___lastGroundedTime_39;
	// System.Boolean ThirdPersonController::isControllable
	bool ___isControllable_40;
	// UnityEngine.Vector3 ThirdPersonController::lastPos
	Vector3_t53  ___lastPos_41;
	// UnityEngine.Vector3 ThirdPersonController::velocity
	Vector3_t53  ___velocity_42;
};
