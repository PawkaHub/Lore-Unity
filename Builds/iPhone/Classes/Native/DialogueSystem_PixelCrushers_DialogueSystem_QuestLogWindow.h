#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[]
struct QuestInfoU5BU5D_t642;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestHeadingSource
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestLogWindow_Q_0.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.QuestLogWindow
struct  QuestLogWindow_t198  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.QuestLogWindow::localizedText
	LocalizedTextTable_t252 * ___localizedText_2;
	// PixelCrushers.DialogueSystem.QuestLogWindow/QuestHeadingSource PixelCrushers.DialogueSystem.QuestLogWindow::questHeadingSource
	int32_t ___questHeadingSource_3;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLogWindow::abandonQuestState
	int32_t ___abandonQuestState_4;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::pauseWhileOpen
	bool ___pauseWhileOpen_5;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::unlockCursorWhileOpen
	bool ___unlockCursorWhileOpen_6;
	// System.Single PixelCrushers.DialogueSystem.QuestLogWindow::previousTimeScale
	float ___previousTimeScale_7;
	// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLogWindow::currentQuestStateMask
	int32_t ___currentQuestStateMask_8;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::wasCursorActive
	bool ___wasCursorActive_9;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_10;
	// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[] PixelCrushers.DialogueSystem.QuestLogWindow::<Quests>k__BackingField
	QuestInfoU5BU5D_t642* ___U3CQuestsU3Ek__BackingField_11;
	// System.String PixelCrushers.DialogueSystem.QuestLogWindow::<SelectedQuest>k__BackingField
	String_t* ___U3CSelectedQuestU3Ek__BackingField_12;
	// System.String PixelCrushers.DialogueSystem.QuestLogWindow::<NoQuestsMessage>k__BackingField
	String_t* ___U3CNoQuestsMessageU3Ek__BackingField_13;
};
