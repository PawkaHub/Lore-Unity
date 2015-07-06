#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1111;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>
struct List_1_t1143;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.DialogueEntry
struct  DialogueEntry_t1102  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::id
	int32_t ___id_2;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field> PixelCrushers.DialogueSystem.DialogueEntry::fields
	List_1_t1111 * ___fields_3;
	// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::conversationID
	int32_t ___conversationID_4;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::isRoot
	bool ___isRoot_5;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::isGroup
	bool ___isGroup_6;
	// System.String PixelCrushers.DialogueSystem.DialogueEntry::nodeColor
	String_t* ___nodeColor_7;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::delaySimStatus
	bool ___delaySimStatus_8;
	// System.String PixelCrushers.DialogueSystem.DialogueEntry::falseConditionAction
	String_t* ___falseConditionAction_9;
	// PixelCrushers.DialogueSystem.ConditionPriority PixelCrushers.DialogueSystem.DialogueEntry::conditionPriority
	int32_t ___conditionPriority_10;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link> PixelCrushers.DialogueSystem.DialogueEntry::outgoingLinks
	List_1_t1143 * ___outgoingLinks_11;
	// System.String PixelCrushers.DialogueSystem.DialogueEntry::conditionsString
	String_t* ___conditionsString_12;
	// System.String PixelCrushers.DialogueSystem.DialogueEntry::userScript
	String_t* ___userScript_13;
	// UnityEngine.Rect PixelCrushers.DialogueSystem.DialogueEntry::canvasRect
	Rect_t201  ___canvasRect_14;
};
