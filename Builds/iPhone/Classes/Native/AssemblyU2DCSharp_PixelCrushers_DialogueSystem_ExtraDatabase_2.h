#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.DialogueDatabase[]
struct DialogueDatabaseU5BU5D_t288;
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.ExtraDatabases
struct  ExtraDatabases_t289  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.ExtraDatabases::addTrigger
	int32_t ___addTrigger_2;
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.ExtraDatabases::removeTrigger
	int32_t ___removeTrigger_3;
	// PixelCrushers.DialogueSystem.DialogueDatabase[] PixelCrushers.DialogueSystem.ExtraDatabases::databases
	DialogueDatabaseU5BU5D_t288* ___databases_4;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.ExtraDatabases::condition
	Condition_t203 * ___condition_5;
	// System.Boolean PixelCrushers.DialogueSystem.ExtraDatabases::once
	bool ___once_6;
	// System.Boolean PixelCrushers.DialogueSystem.ExtraDatabases::trying
	bool ___trying_7;
};
