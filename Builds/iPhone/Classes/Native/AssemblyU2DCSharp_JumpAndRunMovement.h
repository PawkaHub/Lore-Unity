#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t214;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t324;
// PhotonView
struct PhotonView_t325;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JumpAndRunMovement
struct  JumpAndRunMovement_t326  : public MonoBehaviour_t47
{
	// System.Single JumpAndRunMovement::Speed
	float ___Speed_2;
	// System.Single JumpAndRunMovement::JumpForce
	float ___JumpForce_3;
	// UnityEngine.Animator JumpAndRunMovement::m_Animator
	Animator_t214 * ___m_Animator_4;
	// UnityEngine.Rigidbody2D JumpAndRunMovement::m_Body
	Rigidbody2D_t324 * ___m_Body_5;
	// PhotonView JumpAndRunMovement::m_PhotonView
	PhotonView_t325 * ___m_PhotonView_6;
	// System.Boolean JumpAndRunMovement::m_IsGrounded
	bool ___m_IsGrounded_7;
};
