#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot
struct GUIRoot_t1524;
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls
struct UnityDialogueControls_t1642;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl[]
struct GUIControlU5BU5D_t1637;
// PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls
struct UnityAlertControls_t1643;
// PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot
struct UnityUIRoot_t1644;
// PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls
struct UnityQTEControls_t1645;
// PixelCrushers.DialogueSystem.AbstractDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue_0.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI
struct  UnityDialogueUI_t1621  : public AbstractDialogueUI_t233
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::guiRoot
	GUIRoot_t1524 * ___guiRoot_4;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::dialogue
	UnityDialogueControls_t1642 * ___dialogue_5;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl[] PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::qteIndicators
	GUIControlU5BU5D_t1637* ___qteIndicators_6;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::alert
	UnityAlertControls_t1643 * ___alert_7;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::unityUIRoot
	UnityUIRoot_t1644 * ___unityUIRoot_8;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::unityQTEControls
	UnityQTEControls_t1645 * ___unityQTEControls_9;
};
