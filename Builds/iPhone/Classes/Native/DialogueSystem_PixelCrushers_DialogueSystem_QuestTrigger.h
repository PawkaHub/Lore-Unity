#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// PixelCrushers.DialogueSystem.QuestTrigger/SendMessageAction[]
struct SendMessageActionU5BU5D_t1016;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.QuestTrigger
struct  QuestTrigger_t1014  : public DialogueEventStarter_t997
{
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.QuestTrigger::trigger
	int32_t ___trigger_3;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.QuestTrigger::condition
	Condition_t203 * ___condition_4;
	// System.String PixelCrushers.DialogueSystem.QuestTrigger::questName
	String_t* ___questName_5;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestTrigger::questState
	int32_t ___questState_6;
	// System.String PixelCrushers.DialogueSystem.QuestTrigger::luaCode
	String_t* ___luaCode_7;
	// System.String PixelCrushers.DialogueSystem.QuestTrigger::alertMessage
	String_t* ___alertMessage_8;
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.QuestTrigger::localizedTextTable
	LocalizedTextTable_t252 * ___localizedTextTable_9;
	// PixelCrushers.DialogueSystem.QuestTrigger/SendMessageAction[] PixelCrushers.DialogueSystem.QuestTrigger::sendMessages
	SendMessageActionU5BU5D_t1016* ___sendMessages_10;
	// System.Boolean PixelCrushers.DialogueSystem.QuestTrigger::useQuestNamePicker
	bool ___useQuestNamePicker_11;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.QuestTrigger::selectedDatabase
	DialogueDatabase_t202 * ___selectedDatabase_12;
	// System.Boolean PixelCrushers.DialogueSystem.QuestTrigger::tryingToStart
	bool ___tryingToStart_13;
};
