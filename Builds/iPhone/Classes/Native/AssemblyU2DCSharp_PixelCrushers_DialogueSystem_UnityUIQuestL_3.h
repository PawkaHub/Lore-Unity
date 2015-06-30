#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Button
struct Button_t220;
// PixelCrushers.DialogueSystem.UnityUIQuestTemplate
struct UnityUIQuestTemplate_t271;
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t241;
// PixelCrushers.DialogueSystem.UnityUIQuestLogWindow/AnimationTransitions
struct AnimationTransitions_t265;
// System.Action
struct Action_t250;
// UnityEngine.Animator
struct Animator_t214;
// PixelCrushers.DialogueSystem.QuestLogWindow
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestLogWindow.h"
// PixelCrushers.DialogueSystem.UnityUIQuestLogWindow
struct  UnityUIQuestLogWindow_t266  : public QuestLogWindow_t198
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::mainPanel
	Graphic_t219 * ___mainPanel_14;
	// UnityEngine.UI.Button PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::activeQuestsButton
	Button_t220 * ___activeQuestsButton_15;
	// UnityEngine.UI.Button PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::completedQuestsButton
	Button_t220 * ___completedQuestsButton_16;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::questTable
	Graphic_t219 * ___questTable_17;
	// PixelCrushers.DialogueSystem.UnityUIQuestTemplate PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::questTemplate
	UnityUIQuestTemplate_t271 * ___questTemplate_18;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::abandonPopup
	Graphic_t219 * ___abandonPopup_19;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::abandonQuestTitle
	Text_t212 * ___abandonQuestTitle_20;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::autoFocus
	bool ___autoFocus_21;
	// UnityEngine.Events.UnityEvent PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::onContentChanged
	UnityEvent_t241 * ___onContentChanged_22;
	// PixelCrushers.DialogueSystem.UnityUIQuestLogWindow/AnimationTransitions PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::animationTransitions
	AnimationTransitions_t265 * ___animationTransitions_23;
	// System.Action PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::confirmAbandonQuestHandler
	Action_t250 * ___confirmAbandonQuestHandler_24;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::animator
	Animator_t214 * ___animator_25;
};
