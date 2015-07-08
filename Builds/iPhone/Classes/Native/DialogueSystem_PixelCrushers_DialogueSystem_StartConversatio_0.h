#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[]
struct ConversationActionU5BU5D_t1571;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
struct  StartConversationOnDialogueEvent_t1572  : public ActOnDialogueEvent_t1539
{
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onStart
	ConversationActionU5BU5D_t1571* ___onStart_5;
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onEnd
	ConversationActionU5BU5D_t1571* ___onEnd_6;
};
