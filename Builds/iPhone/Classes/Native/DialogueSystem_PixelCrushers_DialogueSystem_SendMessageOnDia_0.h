#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[]
struct SendMessageActionU5BU5D_t1289;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent
struct  SendMessageOnDialogueEvent_t1290  : public ActOnDialogueEvent_t1280
{
	// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[] PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::onStart
	SendMessageActionU5BU5D_t1289* ___onStart_5;
	// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[] PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::onEnd
	SendMessageActionU5BU5D_t1289* ___onEnd_6;
};
