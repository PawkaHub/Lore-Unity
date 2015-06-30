#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings
struct  LocalizationSettings_t617  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings::language
	String_t* ___language_0;
	// System.Boolean PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings::useSystemLanguage
	bool ___useSystemLanguage_1;
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings::localizedText
	LocalizedTextTable_t252 * ___localizedText_2;
};
