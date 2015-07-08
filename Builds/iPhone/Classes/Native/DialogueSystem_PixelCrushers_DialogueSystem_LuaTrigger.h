#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.LuaTrigger
struct  LuaTrigger_t1594  : public DialogueEventStarter_t1580
{
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.LuaTrigger::trigger
	int32_t ___trigger_3;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.LuaTrigger::condition
	Condition_t203 * ___condition_4;
	// System.String PixelCrushers.DialogueSystem.LuaTrigger::luaCode
	String_t* ___luaCode_5;
	// System.Boolean PixelCrushers.DialogueSystem.LuaTrigger::tryingToStart
	bool ___tryingToStart_6;
};
