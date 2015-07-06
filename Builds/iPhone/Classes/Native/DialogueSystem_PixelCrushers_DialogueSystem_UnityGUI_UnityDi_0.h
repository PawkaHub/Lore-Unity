#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t1261;
// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls
struct UnitySubtitleControls_t1388;
// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
struct UnityResponseMenuControls_t1389;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls
struct  UnityDialogueControls_t1383  : public AbstractDialogueUIControls_t229
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::panel
	GUIControl_t1261 * ___panel_0;
	// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::npcSubtitle
	UnitySubtitleControls_t1388 * ___npcSubtitle_1;
	// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::pcSubtitle
	UnitySubtitleControls_t1388 * ___pcSubtitle_2;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::responseMenu
	UnityResponseMenuControls_t1389 * ___responseMenu_3;
};
