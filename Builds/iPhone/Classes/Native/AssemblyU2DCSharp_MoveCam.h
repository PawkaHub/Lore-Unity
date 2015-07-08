#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MoveCam
struct  MoveCam_t375  : public MonoBehaviour_t47
{
	// UnityEngine.Vector3 MoveCam::originalPos
	Vector3_t53  ___originalPos_2;
	// UnityEngine.Vector3 MoveCam::randomPos
	Vector3_t53  ___randomPos_3;
	// UnityEngine.Transform MoveCam::camTransform
	Transform_t54 * ___camTransform_4;
	// UnityEngine.Transform MoveCam::lookAt
	Transform_t54 * ___lookAt_5;
};
