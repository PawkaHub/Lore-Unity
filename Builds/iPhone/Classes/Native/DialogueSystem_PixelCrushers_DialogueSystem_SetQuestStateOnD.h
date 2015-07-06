#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction
struct  SetQuestStateAction_t1306  : public Action_t1279
{
	// System.String PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction::questName
	String_t* ___questName_1;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction::questState
	int32_t ___questState_2;
	// System.String PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction::alertMessage
	String_t* ___alertMessage_3;
};
