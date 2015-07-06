#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[]
struct ConversationActionU5BU5D_t1312;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
struct  StartConversationOnDialogueEvent_t1313  : public ActOnDialogueEvent_t1280
{
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onStart
	ConversationActionU5BU5D_t1312* ___onStart_5;
	// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[] PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::onEnd
	ConversationActionU5BU5D_t1312* ___onEnd_6;
};
