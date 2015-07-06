#pragma once
#include <stdint.h>
// System.String[]
struct StringU5BU5D_t20;
// PixelCrushers.DialogueSystem.InputTrigger
struct InputTrigger_t1241;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ResponseTimeoutAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_ResponseTimeoutA.h"
// PixelCrushers.DialogueSystem.EmTag
#include "DialogueSystem_PixelCrushers_DialogueSystem_EmTag.h"
// PixelCrushers.DialogueSystem.DisplaySettings/InputSettings
struct  InputSettings_t1242  : public Object_t
{
	// System.Boolean PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::alwaysForceResponseMenu
	bool ___alwaysForceResponseMenu_0;
	// System.Single PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::responseTimeout
	float ___responseTimeout_1;
	// PixelCrushers.DialogueSystem.ResponseTimeoutAction PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::responseTimeoutAction
	int32_t ___responseTimeoutAction_2;
	// PixelCrushers.DialogueSystem.EmTag PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::emTagForOldResponses
	int32_t ___emTagForOldResponses_3;
	// System.String[] PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::qteButtons
	StringU5BU5D_t20* ___qteButtons_4;
	// PixelCrushers.DialogueSystem.InputTrigger PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::cancel
	InputTrigger_t1241 * ___cancel_5;
	// PixelCrushers.DialogueSystem.InputTrigger PixelCrushers.DialogueSystem.DisplaySettings/InputSettings::cancelConversation
	InputTrigger_t1241 * ___cancelConversation_6;
};
