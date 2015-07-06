#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t724;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.LuaWatchItem
struct  LuaWatchItem_t582  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.LuaWatchItem::currentValue
	String_t* ___currentValue_0;
	// PixelCrushers.DialogueSystem.LuaChangedDelegate PixelCrushers.DialogueSystem.LuaWatchItem::LuaChanged
	LuaChangedDelegate_t724 * ___LuaChanged_1;
	// System.String PixelCrushers.DialogueSystem.LuaWatchItem::<LuaExpression>k__BackingField
	String_t* ___U3CLuaExpressionU3Ek__BackingField_2;
};
