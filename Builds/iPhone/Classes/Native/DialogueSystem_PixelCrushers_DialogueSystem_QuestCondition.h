#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.QuestCondition
struct  QuestCondition_t954  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.QuestCondition::questName
	String_t* ___questName_0;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestCondition::questState
	int32_t ___questState_1;
};
