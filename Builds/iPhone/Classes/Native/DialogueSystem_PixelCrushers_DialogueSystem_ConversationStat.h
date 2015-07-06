#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t571;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ConversationState
struct  ConversationState_t1096  : public Object_t
{
	// PixelCrushers.DialogueSystem.Subtitle PixelCrushers.DialogueSystem.ConversationState::subtitle
	Subtitle_t570 * ___subtitle_0;
	// PixelCrushers.DialogueSystem.Response[] PixelCrushers.DialogueSystem.ConversationState::npcResponses
	ResponseU5BU5D_t571* ___npcResponses_1;
	// PixelCrushers.DialogueSystem.Response[] PixelCrushers.DialogueSystem.ConversationState::pcResponses
	ResponseU5BU5D_t571* ___pcResponses_2;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationState::<IsGroup>k__BackingField
	bool ___U3CIsGroupU3Ek__BackingField_3;
};
