#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[]
struct BarkActionU5BU5D_t958;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t774;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.BarkOrder
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOrder.h"
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent
struct  BarkOnDialogueEvent_t959  : public ActOnDialogueEvent_t956
{
	// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[] PixelCrushers.DialogueSystem.BarkOnDialogueEvent::onStart
	BarkActionU5BU5D_t958* ___onStart_5;
	// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[] PixelCrushers.DialogueSystem.BarkOnDialogueEvent::onEnd
	BarkActionU5BU5D_t958* ___onEnd_6;
	// PixelCrushers.DialogueSystem.BarkOrder PixelCrushers.DialogueSystem.BarkOnDialogueEvent::barkOrder
	int32_t ___barkOrder_7;
	// PixelCrushers.DialogueSystem.BarkHistory PixelCrushers.DialogueSystem.BarkOnDialogueEvent::barkHistory
	BarkHistory_t774 * ___barkHistory_8;
	// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkOnDialogueEvent::<sequencer>k__BackingField
	Sequencer_t597 * ___U3CsequencerU3Ek__BackingField_9;
};
