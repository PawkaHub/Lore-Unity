#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t1418;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.DialogEntry>
struct List_1_t1422;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ChatMapper.Conversation
struct  Conversation_t1423  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.ChatMapper.Conversation::ID
	int32_t ___ID_0;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.Conversation::NodeColor
	String_t* ___NodeColor_1;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.Conversation::LockedMode
	String_t* ___LockedMode_2;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field> PixelCrushers.DialogueSystem.ChatMapper.Conversation::Fields
	List_1_t1418 * ___Fields_3;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.DialogEntry> PixelCrushers.DialogueSystem.ChatMapper.Conversation::DialogEntries
	List_1_t1422 * ___DialogEntries_4;
};
