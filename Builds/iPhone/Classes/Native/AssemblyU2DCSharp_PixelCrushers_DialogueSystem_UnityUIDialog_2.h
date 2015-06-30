#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// PixelCrushers.DialogueSystem.UnityUISubtitleControls
struct UnityUISubtitleControls_t227;
// PixelCrushers.DialogueSystem.UnityUIResponseMenuControls
struct UnityUIResponseMenuControls_t228;
// PixelCrushers.DialogueSystem.UnityUIDialogueControls/AnimationTransitions
struct AnimationTransitions_t224;
// UnityEngine.Animator
struct Animator_t214;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue.h"
// PixelCrushers.DialogueSystem.UnityUIDialogueControls
struct  UnityUIDialogueControls_t225  : public AbstractDialogueUIControls_t229
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIDialogueControls::panel
	Graphic_t219 * ___panel_0;
	// PixelCrushers.DialogueSystem.UnityUISubtitleControls PixelCrushers.DialogueSystem.UnityUIDialogueControls::npcSubtitle
	UnityUISubtitleControls_t227 * ___npcSubtitle_1;
	// PixelCrushers.DialogueSystem.UnityUISubtitleControls PixelCrushers.DialogueSystem.UnityUIDialogueControls::pcSubtitle
	UnityUISubtitleControls_t227 * ___pcSubtitle_2;
	// PixelCrushers.DialogueSystem.UnityUIResponseMenuControls PixelCrushers.DialogueSystem.UnityUIDialogueControls::responseMenu
	UnityUIResponseMenuControls_t228 * ___responseMenu_3;
	// PixelCrushers.DialogueSystem.UnityUIDialogueControls/AnimationTransitions PixelCrushers.DialogueSystem.UnityUIDialogueControls::animationTransitions
	AnimationTransitions_t224 * ___animationTransitions_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIDialogueControls::isVisible
	bool ___isVisible_5;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UnityUIDialogueControls::animator
	Animator_t214 * ___animator_6;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIDialogueControls::lookedForAnimator
	bool ___lookedForAnimator_7;
};
