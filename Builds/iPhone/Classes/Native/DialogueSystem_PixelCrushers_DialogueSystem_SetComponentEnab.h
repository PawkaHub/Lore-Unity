#pragma once
#include <stdint.h>
// UnityEngine.Component
struct Component_t490;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.Toggle
#include "DialogueSystem_PixelCrushers_DialogueSystem_Toggle.h"
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction
struct  SetComponentEnabledAction_t1559  : public Action_t1538
{
	// UnityEngine.Component PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction::target
	Component_t490 * ___target_1;
	// PixelCrushers.DialogueSystem.Toggle PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction::state
	int32_t ___state_2;
};
