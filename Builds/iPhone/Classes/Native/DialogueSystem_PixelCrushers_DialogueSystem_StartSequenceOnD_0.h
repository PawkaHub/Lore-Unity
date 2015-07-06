#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[]
struct SequenceActionU5BU5D_t1315;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent
struct  StartSequenceOnDialogueEvent_t1316  : public ActOnDialogueEvent_t1280
{
	// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[] PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::onStart
	SequenceActionU5BU5D_t1315* ___onStart_5;
	// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[] PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::onEnd
	SequenceActionU5BU5D_t1315* ___onEnd_6;
};
