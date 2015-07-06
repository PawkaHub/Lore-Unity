#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[]
struct BarkActionU5BU5D_t1282;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1099;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.BarkOrder
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOrder.h"
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent
struct  BarkOnDialogueEvent_t1283  : public ActOnDialogueEvent_t1280
{
	// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[] PixelCrushers.DialogueSystem.BarkOnDialogueEvent::onStart
	BarkActionU5BU5D_t1282* ___onStart_5;
	// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[] PixelCrushers.DialogueSystem.BarkOnDialogueEvent::onEnd
	BarkActionU5BU5D_t1282* ___onEnd_6;
	// PixelCrushers.DialogueSystem.BarkOrder PixelCrushers.DialogueSystem.BarkOnDialogueEvent::barkOrder
	int32_t ___barkOrder_7;
	// PixelCrushers.DialogueSystem.BarkHistory PixelCrushers.DialogueSystem.BarkOnDialogueEvent::barkHistory
	BarkHistory_t1099 * ___barkHistory_8;
	// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkOnDialogueEvent::<sequencer>k__BackingField
	Sequencer_t618 * ___U3CsequencerU3Ek__BackingField_9;
};
