#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t296;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t297;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.NavigateOnMouseClick/MouseButtonType
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_NavigateOnMou.h"
// PixelCrushers.DialogueSystem.NavigateOnMouseClick
struct  NavigateOnMouseClick_t299  : public MonoBehaviour_t47
{
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.NavigateOnMouseClick::idle
	AnimationClip_t296 * ___idle_2;
	// UnityEngine.AnimationClip PixelCrushers.DialogueSystem.NavigateOnMouseClick::run
	AnimationClip_t296 * ___run_3;
	// PixelCrushers.DialogueSystem.NavigateOnMouseClick/MouseButtonType PixelCrushers.DialogueSystem.NavigateOnMouseClick::mouseButton
	int32_t ___mouseButton_4;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.NavigateOnMouseClick::myTransform
	Transform_t54 * ___myTransform_5;
	// UnityEngine.NavMeshAgent PixelCrushers.DialogueSystem.NavigateOnMouseClick::navMeshAgent
	NavMeshAgent_t297 * ___navMeshAgent_6;
	// UnityEngine.Animation PixelCrushers.DialogueSystem.NavigateOnMouseClick::anim
	Animation_t298 * ___anim_7;
};
