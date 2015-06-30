#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUIQuestLogWindow
struct UnityUIQuestLogWindow_t266;
// System.Action
struct Action_t250;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo
struct QuestInfo_t269;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;

// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::.ctor()
extern "C" void UnityUIQuestLogWindow__ctor_m1009 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::Awake()
extern "C" void UnityUIQuestLogWindow_Awake_m1010 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::Start()
extern "C" void UnityUIQuestLogWindow_Start_m1011 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::Update()
extern "C" void UnityUIQuestLogWindow_Update_m1012 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OpenWindow(System.Action)
extern "C" void UnityUIQuestLogWindow_OpenWindow_m1013 (UnityUIQuestLogWindow_t266 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::CloseWindow(System.Action)
extern "C" void UnityUIQuestLogWindow_CloseWindow_m1014 (UnityUIQuestLogWindow_t266 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::CanTriggerAnimations()
extern "C" bool UnityUIQuestLogWindow_CanTriggerAnimations_m1015 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OpenAfterAnimation(System.Action)
extern "C" Object_t * UnityUIQuestLogWindow_OpenAfterAnimation_m1016 (UnityUIQuestLogWindow_t266 * __this, Action_t250 * ___openedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::CloseAfterAnimation(System.Action)
extern "C" Object_t * UnityUIQuestLogWindow_CloseAfterAnimation_m1017 (UnityUIQuestLogWindow_t266 * __this, Action_t250 * ___closedWindowHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OnQuestListUpdated()
extern "C" void UnityUIQuestLogWindow_OnQuestListUpdated_m1018 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::SetStateButtonListeners()
extern "C" void UnityUIQuestLogWindow_SetStateButtonListeners_m1019 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::SetStateToggleButtons()
extern "C" void UnityUIQuestLogWindow_SetStateToggleButtons_m1020 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::ClearQuestTable()
extern "C" void UnityUIQuestLogWindow_ClearQuestTable_m1021 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::AddQuestsToTable()
extern "C" void UnityUIQuestLogWindow_AddQuestsToTable_m1022 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::AddQuestToTable(PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo,System.Int32)
extern "C" void UnityUIQuestLogWindow_AddQuestToTable_m1023 (UnityUIQuestLogWindow_t266 * __this, QuestInfo_t269 * ___questInfo, int32_t ___questIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::NotifyContentChanged()
extern "C" void UnityUIQuestLogWindow_NotifyContentChanged_m1024 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::ClickQuestFoldout(System.String)
extern "C" void UnityUIQuestLogWindow_ClickQuestFoldout_m1025 (UnityUIQuestLogWindow_t266 * __this, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OnTrackButtonClicked(UnityEngine.GameObject)
extern "C" void UnityUIQuestLogWindow_OnTrackButtonClicked_m1026 (UnityUIQuestLogWindow_t266 * __this, GameObject_t49 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OnAbandonButtonClicked(UnityEngine.GameObject)
extern "C" void UnityUIQuestLogWindow_OnAbandonButtonClicked_m1027 (UnityUIQuestLogWindow_t266 * __this, GameObject_t49 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::ConfirmAbandonQuest(System.String,System.Action)
extern "C" void UnityUIQuestLogWindow_ConfirmAbandonQuest_m1028 (UnityUIQuestLogWindow_t266 * __this, String_t* ___title, Action_t250 * ___confirmAbandonQuestHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::OpenAbandonPopup(System.String)
extern "C" void UnityUIQuestLogWindow_OpenAbandonPopup_m1029 (UnityUIQuestLogWindow_t266 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::CloseAbandonPopup()
extern "C" void UnityUIQuestLogWindow_CloseAbandonPopup_m1030 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::ClickConfirmAbandonQuestButton()
extern "C" void UnityUIQuestLogWindow_ClickConfirmAbandonQuestButton_m1031 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::ClickCancelAbandonQuestButton()
extern "C" void UnityUIQuestLogWindow_ClickCancelAbandonQuestButton_m1032 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::<SetStateButtonListeners>m__12()
extern "C" void UnityUIQuestLogWindow_U3CSetStateButtonListenersU3Em__12_m1033 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::<SetStateButtonListeners>m__13()
extern "C" void UnityUIQuestLogWindow_U3CSetStateButtonListenersU3Em__13_m1034 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::<SetStateButtonListeners>m__14()
extern "C" void UnityUIQuestLogWindow_U3CSetStateButtonListenersU3Em__14_m1035 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestLogWindow::<SetStateButtonListeners>m__15()
extern "C" void UnityUIQuestLogWindow_U3CSetStateButtonListenersU3Em__15_m1036 (UnityUIQuestLogWindow_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
