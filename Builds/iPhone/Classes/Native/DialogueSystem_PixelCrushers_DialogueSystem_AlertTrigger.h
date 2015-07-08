#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.AlertTrigger
struct  AlertTrigger_t1578  : public DialogueEventStarter_t1580
{
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.AlertTrigger::trigger
	int32_t ___trigger_3;
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.AlertTrigger::localizedTextTable
	LocalizedTextTable_t252 * ___localizedTextTable_4;
	// System.String PixelCrushers.DialogueSystem.AlertTrigger::message
	String_t* ___message_5;
	// System.Single PixelCrushers.DialogueSystem.AlertTrigger::duration
	float ___duration_6;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.AlertTrigger::condition
	Condition_t203 * ___condition_7;
	// System.Boolean PixelCrushers.DialogueSystem.AlertTrigger::tryingToStart
	bool ___tryingToStart_8;
};
