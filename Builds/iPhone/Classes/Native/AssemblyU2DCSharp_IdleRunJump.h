#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t214;
// PhotonView
struct PhotonView_t353;
// PhotonTransformView
struct PhotonTransformView_t391;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// IdleRunJump
struct  IdleRunJump_t411  : public MonoBehaviour_t47
{
	// UnityEngine.Animator IdleRunJump::animator
	Animator_t214 * ___animator_2;
	// System.Single IdleRunJump::DirectionDampTime
	float ___DirectionDampTime_3;
	// System.Boolean IdleRunJump::ApplyGravity
	bool ___ApplyGravity_4;
	// System.Single IdleRunJump::SynchronizedMaxSpeed
	float ___SynchronizedMaxSpeed_5;
	// System.Single IdleRunJump::TurnSpeedModifier
	float ___TurnSpeedModifier_6;
	// System.Single IdleRunJump::SynchronizedTurnSpeed
	float ___SynchronizedTurnSpeed_7;
	// System.Single IdleRunJump::SynchronizedSpeedAcceleration
	float ___SynchronizedSpeedAcceleration_8;
	// PhotonView IdleRunJump::m_PhotonView
	PhotonView_t353 * ___m_PhotonView_9;
	// PhotonTransformView IdleRunJump::m_TransformView
	PhotonTransformView_t391 * ___m_TransformView_10;
	// System.Single IdleRunJump::m_SpeedModifier
	float ___m_SpeedModifier_11;
};
