#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t840;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t683;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate
struct IsCancelKeyDownDelegate_t1456;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
struct DialogueEntrySpokenDelegate_t1457;
// System.EventHandler
struct EventHandler_t1458;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t1453;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.ConversationView
struct  ConversationView_t1366  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.ConversationView::ui
	Object_t * ___ui_2;
	// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.ConversationView::sequencer
	Sequencer_t675 * ___sequencer_3;
	// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.ConversationView::settings
	DisplaySettings_t683 * ___settings_4;
	// PixelCrushers.DialogueSystem.Subtitle PixelCrushers.DialogueSystem.ConversationView::lastNPCSubtitle
	Subtitle_t623 * ___lastNPCSubtitle_5;
	// PixelCrushers.DialogueSystem.Subtitle PixelCrushers.DialogueSystem.ConversationView::lastPCSubtitle
	Subtitle_t623 * ___lastPCSubtitle_6;
	// PixelCrushers.DialogueSystem.Subtitle PixelCrushers.DialogueSystem.ConversationView::lastSubtitle
	Subtitle_t623 * ___lastSubtitle_7;
	// PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate PixelCrushers.DialogueSystem.ConversationView::IsCancelKeyDown
	IsCancelKeyDownDelegate_t1456 * ___IsCancelKeyDown_8;
	// System.Action PixelCrushers.DialogueSystem.ConversationView::CancelledHandler
	Action_t250 * ___CancelledHandler_9;
	// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate PixelCrushers.DialogueSystem.ConversationView::dialogueEntrySpokenHandler
	DialogueEntrySpokenDelegate_t1457 * ___dialogueEntrySpokenHandler_10;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationView::waitForContinue
	bool ___waitForContinue_11;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationView::isPlayingResponseMenuSequence
	bool ___isPlayingResponseMenuSequence_12;
	// System.EventHandler PixelCrushers.DialogueSystem.ConversationView::FinishedSubtitleHandler
	EventHandler_t1458 * ___FinishedSubtitleHandler_13;
	// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs> PixelCrushers.DialogueSystem.ConversationView::SelectedResponseHandler
	EventHandler_1_t1453 * ___SelectedResponseHandler_14;
};
