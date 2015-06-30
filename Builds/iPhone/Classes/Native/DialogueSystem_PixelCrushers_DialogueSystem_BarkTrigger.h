#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.BarkStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkStarter.h"
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// PixelCrushers.DialogueSystem.BarkTrigger
struct  BarkTrigger_t1002  : public BarkStarter_t1000
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkTrigger::target
	Transform_t54 * ___target_18;
	// PixelCrushers.DialogueSystem.DialogueTriggerEvent PixelCrushers.DialogueSystem.BarkTrigger::trigger
	int32_t ___trigger_19;
};
