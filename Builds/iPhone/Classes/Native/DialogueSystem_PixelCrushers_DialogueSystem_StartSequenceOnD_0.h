#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[]
struct SequenceActionU5BU5D_t991;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent
struct  StartSequenceOnDialogueEvent_t992  : public ActOnDialogueEvent_t956
{
	// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[] PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::onStart
	SequenceActionU5BU5D_t991* ___onStart_5;
	// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[] PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::onEnd
	SequenceActionU5BU5D_t991* ___onEnd_6;
};
