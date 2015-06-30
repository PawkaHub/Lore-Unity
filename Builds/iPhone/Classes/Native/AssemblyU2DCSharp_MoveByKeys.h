#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t100;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t324;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// MoveByKeys
struct  MoveByKeys_t506  : public MonoBehaviour_t329
{
	// System.Single MoveByKeys::Speed
	float ___Speed_2;
	// System.Single MoveByKeys::JumpForce
	float ___JumpForce_3;
	// System.Single MoveByKeys::JumpTimeout
	float ___JumpTimeout_4;
	// System.Boolean MoveByKeys::isSprite
	bool ___isSprite_5;
	// System.Single MoveByKeys::jumpingTime
	float ___jumpingTime_6;
	// UnityEngine.Rigidbody MoveByKeys::body
	Rigidbody_t100 * ___body_7;
	// UnityEngine.Rigidbody2D MoveByKeys::body2d
	Rigidbody2D_t324 * ___body2d_8;
};
