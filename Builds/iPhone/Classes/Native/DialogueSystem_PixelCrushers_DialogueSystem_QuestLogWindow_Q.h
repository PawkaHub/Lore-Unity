#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// PixelCrushers.DialogueSystem.FormattedText[]
struct FormattedTextU5BU5D_t622;
// PixelCrushers.DialogueSystem.QuestState[]
struct QuestStateU5BU5D_t623;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo
struct  QuestInfo_t269  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Heading>k__BackingField
	FormattedText_t554 * ___U3CHeadingU3Ek__BackingField_1;
	// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Description>k__BackingField
	FormattedText_t554 * ___U3CDescriptionU3Ek__BackingField_2;
	// PixelCrushers.DialogueSystem.FormattedText[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Entries>k__BackingField
	FormattedTextU5BU5D_t622* ___U3CEntriesU3Ek__BackingField_3;
	// PixelCrushers.DialogueSystem.QuestState[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<EntryStates>k__BackingField
	QuestStateU5BU5D_t623* ___U3CEntryStatesU3Ek__BackingField_4;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Trackable>k__BackingField
	bool ___U3CTrackableU3Ek__BackingField_5;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Track>k__BackingField
	bool ___U3CTrackU3Ek__BackingField_6;
	// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::<Abandonable>k__BackingField
	bool ___U3CAbandonableU3Ek__BackingField_7;
};
