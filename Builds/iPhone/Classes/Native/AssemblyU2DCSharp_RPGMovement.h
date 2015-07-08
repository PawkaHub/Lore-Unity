#pragma once
#include <stdint.h>
// UnityEngine.CharacterController
struct CharacterController_t321;
// UnityEngine.Animator
struct Animator_t214;
// PhotonView
struct PhotonView_t353;
// PhotonTransformView
struct PhotonTransformView_t391;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// RPGMovement
struct  RPGMovement_t392  : public MonoBehaviour_t47
{
	// System.Single RPGMovement::ForwardSpeed
	float ___ForwardSpeed_2;
	// System.Single RPGMovement::BackwardSpeed
	float ___BackwardSpeed_3;
	// System.Single RPGMovement::StrafeSpeed
	float ___StrafeSpeed_4;
	// System.Single RPGMovement::RotateSpeed
	float ___RotateSpeed_5;
	// UnityEngine.CharacterController RPGMovement::m_CharacterController
	CharacterController_t321 * ___m_CharacterController_6;
	// UnityEngine.Vector3 RPGMovement::m_LastPosition
	Vector3_t53  ___m_LastPosition_7;
	// UnityEngine.Animator RPGMovement::m_Animator
	Animator_t214 * ___m_Animator_8;
	// PhotonView RPGMovement::m_PhotonView
	PhotonView_t353 * ___m_PhotonView_9;
	// PhotonTransformView RPGMovement::m_TransformView
	PhotonTransformView_t391 * ___m_TransformView_10;
	// System.Single RPGMovement::m_AnimatorSpeed
	float ___m_AnimatorSpeed_11;
	// UnityEngine.Vector3 RPGMovement::m_CurrentMovement
	Vector3_t53  ___m_CurrentMovement_12;
	// System.Single RPGMovement::m_CurrentTurnSpeed
	float ___m_CurrentTurnSpeed_13;
};
