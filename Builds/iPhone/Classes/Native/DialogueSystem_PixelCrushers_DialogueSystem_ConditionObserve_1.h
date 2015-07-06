#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// PixelCrushers.DialogueSystem.ConditionObserver/SendMessageAction[]
struct SendMessageActionU5BU5D_t1331;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.ConditionObserver
struct  ConditionObserver_t1329  : public MonoBehaviour_t47
{
	// System.Single PixelCrushers.DialogueSystem.ConditionObserver::frequency
	float ___frequency_2;
	// System.Boolean PixelCrushers.DialogueSystem.ConditionObserver::once
	bool ___once_3;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.ConditionObserver::observeGameObject
	GameObject_t49 * ___observeGameObject_4;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.ConditionObserver::condition
	Condition_t203 * ___condition_5;
	// System.String PixelCrushers.DialogueSystem.ConditionObserver::questName
	String_t* ___questName_6;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.ConditionObserver::questState
	int32_t ___questState_7;
	// System.String PixelCrushers.DialogueSystem.ConditionObserver::luaCode
	String_t* ___luaCode_8;
	// System.String PixelCrushers.DialogueSystem.ConditionObserver::sequence
	String_t* ___sequence_9;
	// System.String PixelCrushers.DialogueSystem.ConditionObserver::alertMessage
	String_t* ___alertMessage_10;
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.ConditionObserver::localizedTextTable
	LocalizedTextTable_t252 * ___localizedTextTable_11;
	// PixelCrushers.DialogueSystem.ConditionObserver/SendMessageAction[] PixelCrushers.DialogueSystem.ConditionObserver::sendMessages
	SendMessageActionU5BU5D_t1331* ___sendMessages_12;
	// System.Boolean PixelCrushers.DialogueSystem.ConditionObserver::useQuestNamePicker
	bool ___useQuestNamePicker_13;
	// System.Boolean PixelCrushers.DialogueSystem.ConditionObserver::started
	bool ___started_14;
};
