#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.DialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEvent.h"
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
struct  ActOnDialogueEvent_t956  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.DialogueEvent PixelCrushers.DialogueSystem.ActOnDialogueEvent::trigger
	int32_t ___trigger_2;
	// System.Boolean PixelCrushers.DialogueSystem.ActOnDialogueEvent::once
	bool ___once_3;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.ActOnDialogueEvent::selectedDatabase
	DialogueDatabase_t202 * ___selectedDatabase_4;
};
