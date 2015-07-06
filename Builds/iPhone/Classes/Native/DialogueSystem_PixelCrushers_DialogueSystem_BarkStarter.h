#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1099;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// PixelCrushers.DialogueSystem.IBarkUI
struct IBarkUI_t745;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// PixelCrushers.DialogueSystem.ConversationStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStar.h"
// PixelCrushers.DialogueSystem.BarkOrder
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOrder.h"
// PixelCrushers.DialogueSystem.BarkStarter
struct  BarkStarter_t1324  : public ConversationStarter_t1325
{
	// PixelCrushers.DialogueSystem.BarkOrder PixelCrushers.DialogueSystem.BarkStarter::barkOrder
	int32_t ___barkOrder_10;
	// System.Boolean PixelCrushers.DialogueSystem.BarkStarter::allowDuringConversations
	bool ___allowDuringConversations_11;
	// System.Boolean PixelCrushers.DialogueSystem.BarkStarter::cacheBarkLines
	bool ___cacheBarkLines_12;
	// PixelCrushers.DialogueSystem.BarkHistory PixelCrushers.DialogueSystem.BarkStarter::barkHistory
	BarkHistory_t1099 * ___barkHistory_13;
	// System.Boolean PixelCrushers.DialogueSystem.BarkStarter::tryingToBark
	bool ___tryingToBark_14;
	// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.BarkStarter::cachedState
	ConversationState_t1096 * ___cachedState_15;
	// PixelCrushers.DialogueSystem.IBarkUI PixelCrushers.DialogueSystem.BarkStarter::barkUI
	Object_t * ___barkUI_16;
	// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkStarter::<sequencer>k__BackingField
	Sequencer_t618 * ___U3CsequencerU3Ek__BackingField_17;
};
