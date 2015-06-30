#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityUIRoot
struct UnityUIRoot_t230;
// PixelCrushers.DialogueSystem.UnityUIDialogueControls
struct UnityUIDialogueControls_t225;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t231;
// PixelCrushers.DialogueSystem.UnityUIAlertControls
struct UnityUIAlertControls_t217;
// PixelCrushers.DialogueSystem.UnityUIQTEControls
struct UnityUIQTEControls_t232;
// PixelCrushers.DialogueSystem.AbstractDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue_0.h"
// PixelCrushers.DialogueSystem.UnityUIDialogueUI
struct  UnityUIDialogueUI_t223  : public AbstractDialogueUI_t233
{
	// PixelCrushers.DialogueSystem.UnityUIRoot PixelCrushers.DialogueSystem.UnityUIDialogueUI::unityUIRoot
	UnityUIRoot_t230 * ___unityUIRoot_4;
	// PixelCrushers.DialogueSystem.UnityUIDialogueControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::dialogue
	UnityUIDialogueControls_t225 * ___dialogue_5;
	// UnityEngine.UI.Graphic[] PixelCrushers.DialogueSystem.UnityUIDialogueUI::qteIndicators
	GraphicU5BU5D_t231* ___qteIndicators_6;
	// PixelCrushers.DialogueSystem.UnityUIAlertControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::alert
	UnityUIAlertControls_t217 * ___alert_7;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIDialogueUI::autoFocus
	bool ___autoFocus_8;
	// PixelCrushers.DialogueSystem.UnityUIQTEControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::qteControls
	UnityUIQTEControls_t232 * ___qteControls_9;
};
