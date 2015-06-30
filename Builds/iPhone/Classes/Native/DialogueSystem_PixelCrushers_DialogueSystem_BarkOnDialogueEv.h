#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction
struct  BarkAction_t957  : public Action_t955
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction::speaker
	Transform_t54 * ___speaker_1;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction::listener
	Transform_t54 * ___listener_2;
	// System.String PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction::conversation
	String_t* ___conversation_3;
};
