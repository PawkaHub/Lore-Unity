#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[]
struct SetActiveActionU5BU5D_t1292;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent
struct  SetActiveOnDialogueEvent_t1293  : public ActOnDialogueEvent_t1280
{
	// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[] PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::onStart
	SetActiveActionU5BU5D_t1292* ___onStart_5;
	// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[] PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::onEnd
	SetActiveActionU5BU5D_t1292* ___onEnd_6;
};
