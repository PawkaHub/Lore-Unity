﻿#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1360;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1366;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1355;
// System.Action
struct Action_t250;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ConversationController
struct  ConversationController_t1352  : public Object_t
{
	// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.ConversationController::model
	ConversationModel_t1360 * ___model_0;
	// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.ConversationController::view
	ConversationView_t1366 * ___view_1;
	// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationController::state
	ConversationState_t1355 * ___state_2;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationController::alwaysForceResponseMenu
	bool ___alwaysForceResponseMenu_3;
	// System.Action PixelCrushers.DialogueSystem.ConversationController::endConversationHandler
	Action_t250 * ___endConversationHandler_4;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationController::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_5;
};
