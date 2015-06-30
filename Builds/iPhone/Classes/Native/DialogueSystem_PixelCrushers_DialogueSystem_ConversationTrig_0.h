#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.ConversationStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStar.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.ConversationTrigger
struct  ConversationTrigger_t1008  : public ConversationStarter_t1001
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.ConversationTrigger::actor
	Transform_t54 * ___actor_11;
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.ConversationTrigger::trigger
	int32_t ___trigger_12;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationTrigger::stopConversationOnTriggerExit
	bool ___stopConversationOnTriggerExit_13;
	// System.Single PixelCrushers.DialogueSystem.ConversationTrigger::earliestTimeToAllowTriggerExit
	float ___earliestTimeToAllowTriggerExit_14;
};
