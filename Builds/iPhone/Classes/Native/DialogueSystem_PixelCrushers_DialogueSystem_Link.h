#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"
// PixelCrushers.DialogueSystem.Link
struct  Link_t1390  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.Link::originConversationID
	int32_t ___originConversationID_0;
	// System.Int32 PixelCrushers.DialogueSystem.Link::originDialogueID
	int32_t ___originDialogueID_1;
	// System.Int32 PixelCrushers.DialogueSystem.Link::destinationConversationID
	int32_t ___destinationConversationID_2;
	// System.Int32 PixelCrushers.DialogueSystem.Link::destinationDialogueID
	int32_t ___destinationDialogueID_3;
	// System.Boolean PixelCrushers.DialogueSystem.Link::isConnector
	bool ___isConnector_4;
	// PixelCrushers.DialogueSystem.ConditionPriority PixelCrushers.DialogueSystem.Link::priority
	int32_t ___priority_5;
};
