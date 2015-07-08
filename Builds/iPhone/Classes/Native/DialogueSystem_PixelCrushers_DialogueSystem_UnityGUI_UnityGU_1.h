#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot
struct GUIRoot_t1524;
// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
struct GUIScrollView_t1525;
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
struct GUIButton_t1522;
// PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow/AbandonControls
struct AbandonControls_t1523;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.QuestLogWindow
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestLogWindow.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow
struct  UnityGUIQuestLogWindow_t1526  : public QuestLogWindow_t198
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::guiRoot
	GUIRoot_t1524 * ___guiRoot_14;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::scrollView
	GUIScrollView_t1525 * ___scrollView_15;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIButton PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::activeButton
	GUIButton_t1522 * ___activeButton_16;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIButton PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::completedButton
	GUIButton_t1522 * ___completedButton_17;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow/AbandonControls PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::abandonQuestPopup
	AbandonControls_t1523 * ___abandonQuestPopup_18;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questHeadingGuiStyleName
	String_t* ___questHeadingGuiStyleName_19;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questHeadingOpenGuiStyleName
	String_t* ___questHeadingOpenGuiStyleName_20;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questBodyGuiStyleName
	String_t* ___questBodyGuiStyleName_21;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntryActiveGuiStyleName
	String_t* ___questEntryActiveGuiStyleName_22;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntrySuccessGuiStyleName
	String_t* ___questEntrySuccessGuiStyleName_23;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntryFailureGuiStyleName
	String_t* ___questEntryFailureGuiStyleName_24;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntryButtonStyleName
	String_t* ___questEntryButtonStyleName_25;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::noQuestsGuiStyleName
	String_t* ___noQuestsGuiStyleName_26;
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::padding
	int32_t ___padding_27;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questHeadingStyle
	GUIStyle_t303 * ___questHeadingStyle_28;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questHeadingOpenStyle
	GUIStyle_t303 * ___questHeadingOpenStyle_29;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questBodyStyle
	GUIStyle_t303 * ___questBodyStyle_30;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntryActiveStyle
	GUIStyle_t303 * ___questEntryActiveStyle_31;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntrySuccessStyle
	GUIStyle_t303 * ___questEntrySuccessStyle_32;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questEntryFailureStyle
	GUIStyle_t303 * ___questEntryFailureStyle_33;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::questButtonStyle
	GUIStyle_t303 * ___questButtonStyle_34;
	// System.Action PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::confirmAbandonQuestHandler
	Action_t250 * ___confirmAbandonQuestHandler_35;
};
