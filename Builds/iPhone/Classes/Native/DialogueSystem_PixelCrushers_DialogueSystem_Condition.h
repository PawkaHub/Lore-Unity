#pragma once
#include <stdint.h>
// System.String[]
struct StringU5BU5D_t20;
// PixelCrushers.DialogueSystem.QuestCondition[]
struct QuestConditionU5BU5D_t953;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t60;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.Condition
struct  Condition_t203  : public Object_t
{
	// System.String[] PixelCrushers.DialogueSystem.Condition::luaConditions
	StringU5BU5D_t20* ___luaConditions_0;
	// PixelCrushers.DialogueSystem.QuestCondition[] PixelCrushers.DialogueSystem.Condition::questConditions
	QuestConditionU5BU5D_t953* ___questConditions_1;
	// System.String[] PixelCrushers.DialogueSystem.Condition::acceptedTags
	StringU5BU5D_t20* ___acceptedTags_2;
	// UnityEngine.GameObject[] PixelCrushers.DialogueSystem.Condition::acceptedGameObjects
	GameObjectU5BU5D_t60* ___acceptedGameObjects_3;
	// System.Int32 PixelCrushers.DialogueSystem.Condition::luaWizardIndex
	int32_t ___luaWizardIndex_4;
};
