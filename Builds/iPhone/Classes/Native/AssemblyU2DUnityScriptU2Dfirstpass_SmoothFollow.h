#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SmoothFollow
struct  SmoothFollow_t777  : public MonoBehaviour_t47
{
	// UnityEngine.Transform SmoothFollow::target
	Transform_t54 * ___target_2;
	// System.Single SmoothFollow::distance
	float ___distance_3;
	// System.Single SmoothFollow::height
	float ___height_4;
	// System.Single SmoothFollow::heightDamping
	float ___heightDamping_5;
	// System.Single SmoothFollow::rotationDamping
	float ___rotationDamping_6;
};
