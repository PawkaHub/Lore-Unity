#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow
struct UnityGUIQuestLogWindow_t1267;
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
extern "C" void UnityGUIQuestLogWindow__ctor_m6373 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::Awake()
extern "C" void UnityGUIQuestLogWindow_Awake_m6374 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::Start()
extern "C" void UnityGUIQuestLogWindow_Start_m6375 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OpenWindow(System.Action)
extern "C" void UnityGUIQuestLogWindow_OpenWindow_m6376 (UnityGUIQuestLogWindow_t1267 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::CloseWindow(System.Action)
extern "C" void UnityGUIQuestLogWindow_CloseWindow_m6377 (UnityGUIQuestLogWindow_t1267 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ConfirmAbandonQuest(System.String,System.Action)
extern "C" void UnityGUIQuestLogWindow_ConfirmAbandonQuest_m6378 (UnityGUIQuestLogWindow_t1267 * __this, String_t* ___title, Action_t250 * ___confirmAbandonQuestHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OpenAbandonQuestPopup(System.String)
extern "C" void UnityGUIQuestLogWindow_OpenAbandonQuestPopup_m6379 (UnityGUIQuestLogWindow_t1267 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::CloseAbandonQuestPopup()
extern "C" void UnityGUIQuestLogWindow_CloseAbandonQuestPopup_m6380 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ClickConfirmAbandonQuest(System.Object)
extern "C" void UnityGUIQuestLogWindow_ClickConfirmAbandonQuest_m6381 (UnityGUIQuestLogWindow_t1267 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::ClickCancelAbandonQuest(System.Object)
extern "C" void UnityGUIQuestLogWindow_ClickCancelAbandonQuest_m6382 (UnityGUIQuestLogWindow_t1267 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnMeasureContent()
extern "C" void UnityGUIQuestLogWindow_OnMeasureContent_m6383 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnDrawContent()
extern "C" void UnityGUIQuestLogWindow_OnDrawContent_m6384 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::MeasureQuestContent()
extern "C" void UnityGUIQuestLogWindow_MeasureQuestContent_m6385 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::OnQuestListUpdated()
extern "C" void UnityGUIQuestLogWindow_OnQuestListUpdated_m6386 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::UseGUIStyle(UnityEngine.GUIStyle,System.String,UnityEngine.GUIStyle)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_UseGUIStyle_m6387 (UnityGUIQuestLogWindow_t1267 * __this, GUIStyle_t303 * ___guiStyle, String_t* ___guiStyleName, GUIStyle_t303 * ___defaultStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::GetQuestHeadingStyle(System.Boolean)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_GetQuestHeadingStyle_m6388 (UnityGUIQuestLogWindow_t1267 * __this, bool ___isSelectedQuest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::GetQuestEntryStyle(PixelCrushers.DialogueSystem.QuestState)
extern "C" GUIStyle_t303 * UnityGUIQuestLogWindow_GetQuestEntryStyle_m6389 (UnityGUIQuestLogWindow_t1267 * __this, int32_t ___entryState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestHeadingHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestHeadingHeight_m6390 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestDescriptionHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestDescriptionHeight_m6391 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestEntriesHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestEntriesHeight_m6392 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::QuestButtonsHeight(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" float UnityGUIQuestLogWindow_QuestButtonsHeight_m6393 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuests()
extern "C" void UnityGUIQuestLogWindow_DrawQuests_m6394 (UnityGUIQuestLogWindow_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestDescription(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestDescription_m6395 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestEntries(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestEntries_m6396 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityGUIQuestLogWindow::DrawQuestButtons(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Single)
extern "C" float UnityGUIQuestLogWindow_DrawQuestButtons_m6397 (UnityGUIQuestLogWindow_t1267 * __this, QuestInfo_t269 * ___questInfo, float ___contentY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
