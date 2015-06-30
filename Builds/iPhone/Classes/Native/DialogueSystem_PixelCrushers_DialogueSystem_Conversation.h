#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t791;
// System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct Predicate_1_t792;
// PixelCrushers.DialogueSystem.Asset
#include "DialogueSystem_PixelCrushers_DialogueSystem_Asset.h"
// PixelCrushers.DialogueSystem.Conversation
struct  Conversation_t793  : public Asset_t785
{
	// System.String PixelCrushers.DialogueSystem.Conversation::nodeColor
	String_t* ___nodeColor_2;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry> PixelCrushers.DialogueSystem.Conversation::dialogueEntries
	List_1_t791 * ___dialogueEntries_3;
};
struct Conversation_t793_StaticFields{
	// System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry> PixelCrushers.DialogueSystem.Conversation::<>f__am$cache2
	Predicate_1_t792 * ___U3CU3Ef__amU24cache2_4;
};
