#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t1514;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"
// PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem
struct  QuestWatchItem_t1515  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::title
	String_t* ___title_0;
	// System.Int32 PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::entryNumber
	int32_t ___entryNumber_1;
	// PixelCrushers.DialogueSystem.LuaWatchFrequency PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::frequency
	int32_t ___frequency_2;
	// System.String PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::luaExpression
	String_t* ___luaExpression_3;
	// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::questChangedHandler
	QuestChangedDelegate_t1514 * ___questChangedHandler_4;
};
