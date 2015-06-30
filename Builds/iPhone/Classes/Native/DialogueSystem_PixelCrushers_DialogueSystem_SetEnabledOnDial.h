#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t47;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.Toggle
#include "DialogueSystem_PixelCrushers_DialogueSystem_Toggle.h"
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
struct  SetEnabledAction_t979  : public Action_t955
{
	// UnityEngine.MonoBehaviour PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction::target
	MonoBehaviour_t47 * ___target_1;
	// PixelCrushers.DialogueSystem.Toggle PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction::state
	int32_t ___state_2;
};
