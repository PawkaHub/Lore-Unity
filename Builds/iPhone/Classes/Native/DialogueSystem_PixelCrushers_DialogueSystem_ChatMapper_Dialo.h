#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t1159;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Link>
struct List_1_t1165;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct  DialogEntry_t1166  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::ID
	int32_t ___ID_0;
	// System.Boolean PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::IsRoot
	bool ___IsRoot_1;
	// System.Boolean PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::IsGroup
	bool ___IsGroup_2;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::NodeColor
	String_t* ___NodeColor_3;
	// System.Boolean PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::DelaySimStatus
	bool ___DelaySimStatus_4;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::FalseCondtionAction
	String_t* ___FalseCondtionAction_5;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::ConditionPriority
	String_t* ___ConditionPriority_6;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field> PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::Fields
	List_1_t1159 * ___Fields_7;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Link> PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::OutgoingLinks
	List_1_t1165 * ___OutgoingLinks_8;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::ConditionsString
	String_t* ___ConditionsString_9;
	// System.String PixelCrushers.DialogueSystem.ChatMapper.DialogEntry::UserScript
	String_t* ___UserScript_10;
};
