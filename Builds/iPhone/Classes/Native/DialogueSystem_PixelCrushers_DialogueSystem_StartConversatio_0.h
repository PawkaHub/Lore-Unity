#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[]
struct ConversationActionU5BU5D_t988;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
struct  StartConversationOnDialogueEvent_t989  : public ActOnDialogueEvent_t956
{
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onStart
	ConversationActionU5BU5D_t988* ___onStart_5;
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onEnd
	ConversationActionU5BU5D_t988* ___onEnd_6;
};
