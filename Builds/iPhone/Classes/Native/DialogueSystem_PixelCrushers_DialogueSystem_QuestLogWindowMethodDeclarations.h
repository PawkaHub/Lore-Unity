﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLogWindow
struct QuestLogWindow_t198;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[]
struct QuestInfoU5BU5D_t698;
// System.String
struct String_t;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo
struct QuestInfo_t269;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"

// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::.ctor()
extern "C" void QuestLogWindow__ctor_m3059 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::get_IsOpen()
extern "C" bool QuestLogWindow_get_IsOpen_m2904 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_IsOpen(System.Boolean)
extern "C" void QuestLogWindow_set_IsOpen_m6799 (QuestLogWindow_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[] PixelCrushers.DialogueSystem.QuestLogWindow::get_Quests()
extern "C" QuestInfoU5BU5D_t698* QuestLogWindow_get_Quests_m3061 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_Quests(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[])
extern "C" void QuestLogWindow_set_Quests_m6800 (QuestLogWindow_t198 * __this, QuestInfoU5BU5D_t698* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::get_SelectedQuest()
extern "C" String_t* QuestLogWindow_get_SelectedQuest_m3079 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_SelectedQuest(System.String)
extern "C" void QuestLogWindow_set_SelectedQuest_m3078 (QuestLogWindow_t198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::get_NoQuestsMessage()
extern "C" String_t* QuestLogWindow_get_NoQuestsMessage_m3062 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_NoQuestsMessage(System.String)
extern "C" void QuestLogWindow_set_NoQuestsMessage_m6801 (QuestLogWindow_t198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::get_IsShowingActiveQuests()
extern "C" bool QuestLogWindow_get_IsShowingActiveQuests_m3069 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OpenWindow(System.Action)
extern "C" void QuestLogWindow_OpenWindow_m6802 (QuestLogWindow_t198 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::CloseWindow(System.Action)
extern "C" void QuestLogWindow_CloseWindow_m6803 (QuestLogWindow_t198 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnQuestListUpdated()
extern "C" void QuestLogWindow_OnQuestListUpdated_m6804 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ConfirmAbandonQuest(System.String,System.Action)
extern "C" void QuestLogWindow_ConfirmAbandonQuest_m6805 (QuestLogWindow_t198 * __this, String_t* ___title, Action_t250 * ___confirmedAbandonQuestHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Awake()
extern "C" void QuestLogWindow_Awake_m6806 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Open()
extern "C" void QuestLogWindow_Open_m2905 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnOpenedWindow()
extern "C" void QuestLogWindow_OnOpenedWindow_m6807 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Close()
extern "C" void QuestLogWindow_Close_m6808 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnClosedWindow()
extern "C" void QuestLogWindow_OnClosedWindow_m6809 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::PauseGameplay()
extern "C" void QuestLogWindow_PauseGameplay_m6810 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ResumeGameplay()
extern "C" void QuestLogWindow_ResumeGameplay_m6811 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ShowQuests(PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLogWindow_ShowQuests_m6812 (QuestLogWindow_t198 * __this, int32_t ___questStateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::GetNoQuestsMessage(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLogWindow_GetNoQuestsMessage_m3908 (QuestLogWindow_t198 * __this, int32_t ___questStateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::GetLocalizedText(System.String)
extern "C" String_t* QuestLogWindow_GetLocalizedText_m6813 (QuestLogWindow_t198 * __this, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::IsSelectedQuest(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" bool QuestLogWindow_IsSelectedQuest_m3071 (QuestLogWindow_t198 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickClose(System.Object)
extern "C" void QuestLogWindow_ClickClose_m6814 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowActiveQuests(System.Object)
extern "C" void QuestLogWindow_ClickShowActiveQuests_m6815 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowCompletedQuests(System.Object)
extern "C" void QuestLogWindow_ClickShowCompletedQuests_m6816 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickQuest(System.Object)
extern "C" void QuestLogWindow_ClickQuest_m3077 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickAbandonQuest(System.Object)
extern "C" void QuestLogWindow_ClickAbandonQuest_m3081 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnConfirmAbandonQuest()
extern "C" void QuestLogWindow_OnConfirmAbandonQuest_m6817 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickTrackQuest(System.Object)
extern "C" void QuestLogWindow_ClickTrackQuest_m3080 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::IsString(System.Object)
extern "C" bool QuestLogWindow_IsString_m6818 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowActiveQuestsButton()
extern "C" void QuestLogWindow_ClickShowActiveQuestsButton_m3082 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowCompletedQuestsButton()
extern "C" void QuestLogWindow_ClickShowCompletedQuestsButton_m3083 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickCloseButton()
extern "C" void QuestLogWindow_ClickCloseButton_m6819 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickAbandonQuestButton()
extern "C" void QuestLogWindow_ClickAbandonQuestButton_m3055 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickTrackQuestButton()
extern "C" void QuestLogWindow_ClickTrackQuestButton_m3054 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
