#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t372;
// ThirdPersonController
struct ThirdPersonController_t371;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// ThirdPersonNetwork
struct  ThirdPersonNetwork_t374  : public MonoBehaviour_t329
{
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t372 * ___cameraScript_2;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t371 * ___controllerScript_3;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t53  ___correctPlayerPos_4;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t69  ___correctPlayerRot_5;
};
