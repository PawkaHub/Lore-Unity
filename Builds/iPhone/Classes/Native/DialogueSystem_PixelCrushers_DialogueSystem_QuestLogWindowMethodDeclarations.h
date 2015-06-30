#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLogWindow
struct QuestLogWindow_t198;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[]
struct QuestInfoU5BU5D_t621;
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
extern "C" void QuestLogWindow__ctor_m2800 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::get_IsOpen()
extern "C" bool QuestLogWindow_get_IsOpen_m2645 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_IsOpen(System.Boolean)
extern "C" void QuestLogWindow_set_IsOpen_m4505 (QuestLogWindow_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[] PixelCrushers.DialogueSystem.QuestLogWindow::get_Quests()
extern "C" QuestInfoU5BU5D_t621* QuestLogWindow_get_Quests_m2802 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_Quests(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo[])
extern "C" void QuestLogWindow_set_Quests_m4506 (QuestLogWindow_t198 * __this, QuestInfoU5BU5D_t621* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::get_SelectedQuest()
extern "C" String_t* QuestLogWindow_get_SelectedQuest_m2820 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_SelectedQuest(System.String)
extern "C" void QuestLogWindow_set_SelectedQuest_m2819 (QuestLogWindow_t198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::get_NoQuestsMessage()
extern "C" String_t* QuestLogWindow_get_NoQuestsMessage_m2803 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::set_NoQuestsMessage(System.String)
extern "C" void QuestLogWindow_set_NoQuestsMessage_m4507 (QuestLogWindow_t198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::get_IsShowingActiveQuests()
extern "C" bool QuestLogWindow_get_IsShowingActiveQuests_m2810 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OpenWindow(System.Action)
extern "C" void QuestLogWindow_OpenWindow_m4508 (QuestLogWindow_t198 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::CloseWindow(System.Action)
extern "C" void QuestLogWindow_CloseWindow_m4509 (QuestLogWindow_t198 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnQuestListUpdated()
extern "C" void QuestLogWindow_OnQuestListUpdated_m4510 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ConfirmAbandonQuest(System.String,System.Action)
extern "C" void QuestLogWindow_ConfirmAbandonQuest_m4511 (QuestLogWindow_t198 * __this, String_t* ___title, Action_t250 * ___confirmedAbandonQuestHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Awake()
extern "C" void QuestLogWindow_Awake_m4512 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Open()
extern "C" void QuestLogWindow_Open_m2646 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnOpenedWindow()
extern "C" void QuestLogWindow_OnOpenedWindow_m4513 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::Close()
extern "C" void QuestLogWindow_Close_m4514 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnClosedWindow()
extern "C" void QuestLogWindow_OnClosedWindow_m4515 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::PauseGameplay()
extern "C" void QuestLogWindow_PauseGameplay_m4516 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ResumeGameplay()
extern "C" void QuestLogWindow_ResumeGameplay_m4517 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ShowQuests(PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLogWindow_ShowQuests_m4518 (QuestLogWindow_t198 * __this, int32_t ___questStateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::GetNoQuestsMessage(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLogWindow_GetNoQuestsMessage_m3364 (QuestLogWindow_t198 * __this, int32_t ___questStateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow::GetLocalizedText(System.String)
extern "C" String_t* QuestLogWindow_GetLocalizedText_m4519 (QuestLogWindow_t198 * __this, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::IsSelectedQuest(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo)
extern "C" bool QuestLogWindow_IsSelectedQuest_m2812 (QuestLogWindow_t198 * __this, QuestInfo_t269 * ___questInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickClose(System.Object)
extern "C" void QuestLogWindow_ClickClose_m4520 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowActiveQuests(System.Object)
extern "C" void QuestLogWindow_ClickShowActiveQuests_m4521 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowCompletedQuests(System.Object)
extern "C" void QuestLogWindow_ClickShowCompletedQuests_m4522 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickQuest(System.Object)
extern "C" void QuestLogWindow_ClickQuest_m2818 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickAbandonQuest(System.Object)
extern "C" void QuestLogWindow_ClickAbandonQuest_m2822 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::OnConfirmAbandonQuest()
extern "C" void QuestLogWindow_OnConfirmAbandonQuest_m4523 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickTrackQuest(System.Object)
extern "C" void QuestLogWindow_ClickTrackQuest_m2821 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow::IsString(System.Object)
extern "C" bool QuestLogWindow_IsString_m4524 (QuestLogWindow_t198 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowActiveQuestsButton()
extern "C" void QuestLogWindow_ClickShowActiveQuestsButton_m2823 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickShowCompletedQuestsButton()
extern "C" void QuestLogWindow_ClickShowCompletedQuestsButton_m2824 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickCloseButton()
extern "C" void QuestLogWindow_ClickCloseButton_m4525 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickAbandonQuestButton()
extern "C" void QuestLogWindow_ClickAbandonQuestButton_m2796 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow::ClickTrackQuestButton()
extern "C" void QuestLogWindow_ClickTrackQuestButton_m2795 (QuestLogWindow_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
