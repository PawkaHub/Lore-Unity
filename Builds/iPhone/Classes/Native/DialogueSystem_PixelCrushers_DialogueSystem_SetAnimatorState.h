#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction
struct  SetAnimatorStateAction_t1556  : public Action_t1538
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction::target
	Transform_t54 * ___target_1;
	// System.String PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction::stateName
	String_t* ___stateName_2;
	// System.Single PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction::crossFadeDuration
	float ___crossFadeDuration_3;
};
