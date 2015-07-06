#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1107;
// System.EventHandler
struct EventHandler_t1199;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t1194;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t746;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t626;
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
struct DialogueEntrySpokenDelegate_t1198;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t571;
// System.String
struct String_t;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t1201;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t628;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationView::.ctor()
extern "C" void ConversationView__ctor_m5992 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_add_FinishedSubtitleHandler_m5993 (ConversationView_t1107 * __this, EventHandler_t1199 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_remove_FinishedSubtitleHandler_m5994 (ConversationView_t1107 * __this, EventHandler_t1199 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_add_SelectedResponseHandler_m5995 (ConversationView_t1107 * __this, EventHandler_1_t1194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_remove_SelectedResponseHandler_m5996 (ConversationView_t1107 * __this, EventHandler_1_t1194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Initialize(PixelCrushers.DialogueSystem.IDialogueUI,PixelCrushers.DialogueSystem.Sequencer,PixelCrushers.DialogueSystem.DisplaySettings,PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate)
extern "C" void ConversationView_Initialize_m5997 (ConversationView_t1107 * __this, Object_t * ___ui, Sequencer_t618 * ___sequencer, DisplaySettings_t626 * ___displaySettings, DialogueEntrySpokenDelegate_t1198 * ___dialogueEntrySpokenHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Close()
extern "C" void ConversationView_Close_m5998 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Update()
extern "C" void ConversationView_Update_m5999 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::Cancelled()
extern "C" bool ConversationView_Cancelled_m6000 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsSubtitleCancelKeyDown()
extern "C" bool ConversationView_IsSubtitleCancelKeyDown_m6001 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsConversationCancelKeyDown()
extern "C" bool ConversationView_IsConversationCancelKeyDown_m6002 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartSubtitle(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" void ConversationView_StartSubtitle_m6003 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldWaitForContinueButton(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldWaitForContinueButton_m6004 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowContinueButton(System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldShowContinueButton_m6005 (ConversationView_t1107 * __this, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::ShowLastNPCSubtitle()
extern "C" void ConversationView_ShowLastNPCSubtitle_m6006 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastNPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastNPCSubtitle_m6007 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastPCSubtitle_m6008 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" bool ConversationView_ShouldShowSubtitle_m6009 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnConversationContinue()
extern "C" void ConversationView_OnConversationContinue_m6010 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelSubtitle()
extern "C" void ConversationView_OnCancelSubtitle_m6011 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::FinishSubtitle()
extern "C" void ConversationView_FinishSubtitle_m6012 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnFinishedSubtitle()
extern "C" void ConversationView_OnFinishedSubtitle_m6013 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_StartResponses_m6014 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, ResponseU5BU5D_t571* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::PlayResponseMenuSequence(System.String)
extern "C" void ConversationView_PlayResponseMenuSequence_m6015 (ConversationView_t1107 * __this, String_t* ___responseMenuSequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StopResponseMenuSequence()
extern "C" void ConversationView_StopResponseMenuSequence_m6016 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelResponseMenu()
extern "C" void ConversationView_OnCancelResponseMenu_m6017 (ConversationView_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_OnSelectedResponse_m6018 (ConversationView_t1107 * __this, Object_t * ___sender, SelectedResponseEventArgs_t1201 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SelectResponse(PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_SelectResponse_m6019 (ConversationView_t1107 * __this, SelectedResponseEventArgs_t1201 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::GetDefaultSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_GetDefaultSequence_m6020 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.ConversationView::GetDefaultSubtitleDuration(System.String)
extern "C" float ConversationView_GetDefaultSubtitleDuration_m6021 (ConversationView_t1107 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::PreprocessSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_PreprocessSequence_m6022 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyParticipantsOnConversationLine(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void ConversationView_NotifyParticipantsOnConversationLine_m6023 (ConversationView_t1107 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyOnResponseMenu(PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_NotifyOnResponseMenu_m6024 (ConversationView_t1107 * __this, ResponseU5BU5D_t571* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::CharacterInfoHasValidTransform(PixelCrushers.DialogueSystem.CharacterInfo)
extern "C" bool ConversationView_CharacterInfoHasValidTransform_m6025 (ConversationView_t1107 * __this, CharacterInfo_t628 * ___characterInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void ConversationView_SetPCPortrait_m6026 (ConversationView_t1107 * __this, Texture2D_t90 * ___pcTexture, String_t* ___pcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationView_SetActorPortraitTexture_m6027 (ConversationView_t1107 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
