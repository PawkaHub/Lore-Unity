#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1366;
// System.EventHandler
struct EventHandler_t1458;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t1453;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t840;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t683;
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
struct DialogueEntrySpokenDelegate_t1457;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t624;
// System.String
struct String_t;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t1460;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t685;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationView::.ctor()
extern "C" void ConversationView__ctor_m6443 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_add_FinishedSubtitleHandler_m6444 (ConversationView_t1366 * __this, EventHandler_t1458 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_remove_FinishedSubtitleHandler_m6445 (ConversationView_t1366 * __this, EventHandler_t1458 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_add_SelectedResponseHandler_m6446 (ConversationView_t1366 * __this, EventHandler_1_t1453 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_remove_SelectedResponseHandler_m6447 (ConversationView_t1366 * __this, EventHandler_1_t1453 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Initialize(PixelCrushers.DialogueSystem.IDialogueUI,PixelCrushers.DialogueSystem.Sequencer,PixelCrushers.DialogueSystem.DisplaySettings,PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate)
extern "C" void ConversationView_Initialize_m6448 (ConversationView_t1366 * __this, Object_t * ___ui, Sequencer_t675 * ___sequencer, DisplaySettings_t683 * ___displaySettings, DialogueEntrySpokenDelegate_t1457 * ___dialogueEntrySpokenHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Close()
extern "C" void ConversationView_Close_m6449 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Update()
extern "C" void ConversationView_Update_m6450 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::Cancelled()
extern "C" bool ConversationView_Cancelled_m6451 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsSubtitleCancelKeyDown()
extern "C" bool ConversationView_IsSubtitleCancelKeyDown_m6452 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsConversationCancelKeyDown()
extern "C" bool ConversationView_IsConversationCancelKeyDown_m6453 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartSubtitle(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" void ConversationView_StartSubtitle_m6454 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldWaitForContinueButton(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldWaitForContinueButton_m6455 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowContinueButton(System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldShowContinueButton_m6456 (ConversationView_t1366 * __this, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::ShowLastNPCSubtitle()
extern "C" void ConversationView_ShowLastNPCSubtitle_m6457 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastNPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastNPCSubtitle_m6458 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastPCSubtitle_m6459 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" bool ConversationView_ShouldShowSubtitle_m6460 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnConversationContinue()
extern "C" void ConversationView_OnConversationContinue_m6461 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelSubtitle()
extern "C" void ConversationView_OnCancelSubtitle_m6462 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::FinishSubtitle()
extern "C" void ConversationView_FinishSubtitle_m6463 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnFinishedSubtitle()
extern "C" void ConversationView_OnFinishedSubtitle_m6464 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_StartResponses_m6465 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, ResponseU5BU5D_t624* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::PlayResponseMenuSequence(System.String)
extern "C" void ConversationView_PlayResponseMenuSequence_m6466 (ConversationView_t1366 * __this, String_t* ___responseMenuSequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StopResponseMenuSequence()
extern "C" void ConversationView_StopResponseMenuSequence_m6467 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelResponseMenu()
extern "C" void ConversationView_OnCancelResponseMenu_m6468 (ConversationView_t1366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_OnSelectedResponse_m6469 (ConversationView_t1366 * __this, Object_t * ___sender, SelectedResponseEventArgs_t1460 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SelectResponse(PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_SelectResponse_m6470 (ConversationView_t1366 * __this, SelectedResponseEventArgs_t1460 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::GetDefaultSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_GetDefaultSequence_m6471 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.ConversationView::GetDefaultSubtitleDuration(System.String)
extern "C" float ConversationView_GetDefaultSubtitleDuration_m6472 (ConversationView_t1366 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::PreprocessSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_PreprocessSequence_m6473 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyParticipantsOnConversationLine(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void ConversationView_NotifyParticipantsOnConversationLine_m6474 (ConversationView_t1366 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyOnResponseMenu(PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_NotifyOnResponseMenu_m6475 (ConversationView_t1366 * __this, ResponseU5BU5D_t624* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::CharacterInfoHasValidTransform(PixelCrushers.DialogueSystem.CharacterInfo)
extern "C" bool ConversationView_CharacterInfoHasValidTransform_m6476 (ConversationView_t1366 * __this, CharacterInfo_t685 * ___characterInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void ConversationView_SetPCPortrait_m6477 (ConversationView_t1366 * __this, Texture2D_t90 * ___pcTexture, String_t* ___pcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationView_SetActorPortraitTexture_m6478 (ConversationView_t1366 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
