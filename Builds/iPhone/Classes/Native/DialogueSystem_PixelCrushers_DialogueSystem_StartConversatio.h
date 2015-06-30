#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction
struct  ConversationAction_t987  : public Action_t955
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction::speaker
	Transform_t54 * ___speaker_1;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction::listener
	Transform_t54 * ___listener_2;
	// System.String PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction::conversation
	String_t* ___conversation_3;
	// System.Boolean PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction::skipIfNoValidEntries
	bool ___skipIfNoValidEntries_4;
};
