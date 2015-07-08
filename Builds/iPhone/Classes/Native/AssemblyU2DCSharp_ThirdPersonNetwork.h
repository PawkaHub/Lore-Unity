#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t400;
// ThirdPersonController
struct ThirdPersonController_t399;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// ThirdPersonNetwork
struct  ThirdPersonNetwork_t402  : public MonoBehaviour_t357
{
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t400 * ___cameraScript_2;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t399 * ___controllerScript_3;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t53  ___correctPlayerPos_4;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t69  ___correctPlayerRot_5;
};
