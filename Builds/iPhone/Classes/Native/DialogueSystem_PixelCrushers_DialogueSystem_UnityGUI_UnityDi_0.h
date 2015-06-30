#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls
struct UnitySubtitleControls_t1064;
// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
struct UnityResponseMenuControls_t1065;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls
struct  UnityDialogueControls_t1059  : public AbstractDialogueUIControls_t229
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::panel
	GUIControl_t937 * ___panel_0;
	// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::npcSubtitle
	UnitySubtitleControls_t1064 * ___npcSubtitle_1;
	// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::pcSubtitle
	UnitySubtitleControls_t1064 * ___pcSubtitle_2;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::responseMenu
	UnityResponseMenuControls_t1065 * ___responseMenu_3;
};
