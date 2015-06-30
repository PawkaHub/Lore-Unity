#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t834;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.DialogEntry>
struct List_1_t838;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ChatMapper.Conversation
struct  Conversation_t839  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.ChatMapper.Conversation::ID
	int32_t ___ID_0;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.Conversation::NodeColor
	String_t* ___NodeColor_1;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field> PixelCrushers.DialogueSystem.ChatMapper.Conversation::Fields
	List_1_t834 * ___Fields_2;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.DialogEntry> PixelCrushers.DialogueSystem.ChatMapper.Conversation::DialogEntries
	List_1_t838 * ___DialogEntries_3;
};
