#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[]
struct SendMessageActionU5BU5D_t1548;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent
struct  SendMessageOnDialogueEvent_t1549  : public ActOnDialogueEvent_t1539
{
	// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[] PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::onStart
	SendMessageActionU5BU5D_t1548* ___onStart_5;
	// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[] PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::onEnd
	SendMessageActionU5BU5D_t1548* ___onEnd_6;
};
