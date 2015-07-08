#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[]
struct SetQuestStateActionU5BU5D_t1566;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent
struct  SetQuestStateOnDialogueEvent_t1567  : public ActOnDialogueEvent_t1539
{
	// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[] PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::onStart
	SetQuestStateActionU5BU5D_t1566* ___onStart_5;
	// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[] PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::onEnd
	SetQuestStateActionU5BU5D_t1566* ___onEnd_6;
};
