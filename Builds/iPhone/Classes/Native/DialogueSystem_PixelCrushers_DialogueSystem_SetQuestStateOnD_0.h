#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[]
struct SetQuestStateActionU5BU5D_t983;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent
struct  SetQuestStateOnDialogueEvent_t984  : public ActOnDialogueEvent_t956
{
	// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[] PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::onStart
	SetQuestStateActionU5BU5D_t983* ___onStart_5;
	// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[] PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::onEnd
	SetQuestStateActionU5BU5D_t983* ___onEnd_6;
};
