#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow
struct UnityGUIQuestLogWindow_t1526;
// System.Action
struct Action_t250;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo
struct QuestInfo_t269;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::.ctor()
extern "C" void UnityGUIQuestLogWindow__ctor_m6821 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::Awake()
extern "C" void UnityGUIQuestLogWindow_Awake_m6822 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::Start()
extern "C" void UnityGUIQuestLogWindow_Start_m6823 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OpenWindow(System.Action)
extern "C" void UnityGUIQuestLogWindow_OpenWindow_m6824 (UnityGUIQuestLogWindow_t1526 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::CloseWindow(System.Action)
extern "C" void UnityGUIQuestLogWindow_CloseWindow_m6825 (UnityGUIQuestLogWindow_t1526 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ConfirmAbandonQuest(System.String,System.Action)
extern "C" void UnityGUIQuestLogWindow_ConfirmAbandonQuest_m6826 (UnityGUIQuestLogWindow_t1526 * __this, String_t* ___title, Action_t250 * ___confirmAbandonQuestHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OpenAbandonQuestPopup(System.String)
extern "C" void UnityGUIQuestLogWindow_OpenAbandonQuestPopup_m6827 (UnityGUIQuestLogWindow_t1526 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::CloseAbandonQuestPopup()
extern "C" void UnityGUIQuestLogWindow_CloseAbandonQuestPopup_m6828 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ClickConfirmAbandonQuest(System.Object)
extern "C" void UnityGUIQuestLogWindow_ClickConfirmAbandonQuest_m6829 (UnityGUIQuestLogWindow_t1526 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ClickCancelAbandonQuest(System.Object)
extern "C" void UnityGUIQuestLogWindow_ClickCancelAbandonQuest_m6830 (UnityGUIQuestLogWindow_t1526 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnMeasureContent()
extern "C" void UnityGUIQuestLogWindow_OnMeasureContent_m6831 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnDrawContent()
extern "C" void UnityGUIQuestLogWindow_OnDrawContent_m6832 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::MeasureQuestContent()
extern "C" void UnityGUIQuestLogWindow_MeasureQuestContent_m6833 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnQuestListUpdated()
extern "C" void UnityGUIQuestLogWindow_OnQuestListUpdated_m6834 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::UseGUIStyle(UnityEngine.GUIStyle,System.String,UnityEngine.GUIStyle)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_UseGUIStyle_m6835 (UnityGUIQuestLogWindow_t1526 * __this, GUIStyle_t303 * ___guiStyle, String_t* ___guiStyleName, GUIStyle_t303 * ___defaultStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::GetQuestHeadingStyle(System.Boolean)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_GetQuestHeadingStyle_m6836 (UnityGUIQuestLogWindow_t1526 * __this, bool ___isSelectedQuest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::GetQuestEntryStyle(PixelCrushers.DialogueSystem.QuestState)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_GetQuestEntryStyle_m6837 (UnityGUIQuestLogWindow_t1526 * __this, int32_t ___entryState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestHeadingHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestHeadingHeight_m6838 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestDescriptionHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestDescriptionHeight_m6839 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestEntriesHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestEntriesHeight_m6840 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestButtonsHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestButtonsHeight_m6841 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuests()
extern "C" void UnityGUIQuestLogWindow_DrawQuests_m6842 (UnityGUIQuestLogWindow_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestDescription(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestDescription_m6843 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestEntries(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestEntries_m6844 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestButtons(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestButtons_m6845 (UnityGUIQuestLogWindow_t1526 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
