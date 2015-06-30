#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t296;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.AudioClip
struct AudioClip_t261;
// UnityEngine.CharacterController
struct CharacterController_t321;
// PixelCrushers.DialogueSystem.SmoothCameraWithBumper
struct SmoothCameraWithBumper_t293;
// UnityEngine.AudioSource
struct AudioSource_t262;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PixelCrushers.DialogueSystem.SimpleController
struct  SimpleController_t322  : public MonoBehaviour_t47
{
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.SimpleController::idle
	AnimationClip_t296 * ___idle_2;
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.SimpleController::runForward
	AnimationClip_t296 * ___runForward_3;
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.SimpleController::runBack
	AnimationClip_t296 * ___runBack_4;
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.SimpleController::aim
	AnimationClip_t296 * ___aim_5;
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.SimpleController::fire
	AnimationClip_t296 * ___fire_6;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SimpleController::upperBodyMixingTransform
	Transform_t54 * ___upperBodyMixingTransform_7;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::runSpeed
	float ___runSpeed_8;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::mouseSensitivityX
	float ___mouseSensitivityX_9;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::mouseSensitivityY
	float ___mouseSensitivityY_10;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::mouseMinimumY
	float ___mouseMinimumY_11;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::mouseMaximumY
	float ___mouseMaximumY_12;
	// UnityEngine.LayerMask PixelCrushers.DialogueSystem.SimpleController::fireLayerMask
	LayerMask_t87  ___fireLayerMask_13;
	// UnityEngine.AudioClip PixelCrushers.DialogueSystem.SimpleController::fireSound
	AudioClip_t261 * ___fireSound_14;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::weaponDamage
	float ___weaponDamage_15;
	// UnityEngine.CharacterController PixelCrushers.DialogueSystem.SimpleController::controller
	CharacterController_t321 * ___controller_16;
	// PixelCrushers.DialogueSystem.SmoothCameraWithBumper PixelCrushers.DialogueSystem.SimpleController::smoothCamera
	SmoothCameraWithBumper_t293 * ___smoothCamera_17;
	// UnityEngine.AudioSource PixelCrushers.DialogueSystem.SimpleController::audioSource
	AudioSource_t262 * ___audioSource_18;
	// UnityEngine.Animation PixelCrushers.DialogueSystem.SimpleController::anim
	Animation_t298 * ___anim_19;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::centralSpeed
	float ___centralSpeed_20;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::centralVelocity
	float ___centralVelocity_21;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::lateralSpeed
	float ___lateralSpeed_22;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::lateralVelocity
	float ___lateralVelocity_23;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::cameraRotationY
	float ___cameraRotationY_24;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SimpleController::originalCameraRotation
	Quaternion_t69  ___originalCameraRotation_25;
	// System.Boolean PixelCrushers.DialogueSystem.SimpleController::firing
	bool ___firing_26;
	// System.Boolean PixelCrushers.DialogueSystem.SimpleController::fired
	bool ___fired_27;
	// System.Single PixelCrushers.DialogueSystem.SimpleController::endFiringTime
	float ___endFiringTime_28;
};
