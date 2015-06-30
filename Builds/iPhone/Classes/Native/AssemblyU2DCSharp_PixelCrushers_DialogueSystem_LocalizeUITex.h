#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// UnityEngine.UI.Text
struct Text_t212;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.LocalizeUIText
struct  LocalizeUIText_t253  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.LocalizeUIText::localizedTextTable
	LocalizedTextTable_t252 * ___localizedTextTable_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.LocalizeUIText::text
	Text_t212 * ___text_3;
	// System.String PixelCrushers.DialogueSystem.LocalizeUIText::fieldName
	String_t* ___fieldName_4;
	// System.Boolean PixelCrushers.DialogueSystem.LocalizeUIText::started
	bool ___started_5;
};
