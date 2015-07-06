#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction
struct  SendMessageAction_t1288  : public Action_t1279
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction::target
	Transform_t54 * ___target_1;
	// System.String PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction::methodName
	String_t* ___methodName_2;
	// System.String PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction::parameter
	String_t* ___parameter_3;
};
