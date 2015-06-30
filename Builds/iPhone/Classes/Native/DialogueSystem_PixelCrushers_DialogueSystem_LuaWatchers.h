#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LuaWatchList
struct LuaWatchList_t761;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.LuaWatchers
struct  LuaWatchers_t770  : public Object_t
{
	// PixelCrushers.DialogueSystem.LuaWatchList PixelCrushers.DialogueSystem.LuaWatchers::everyUpdateList
	LuaWatchList_t761 * ___everyUpdateList_0;
	// PixelCrushers.DialogueSystem.LuaWatchList PixelCrushers.DialogueSystem.LuaWatchers::everyDialogueEntryList
	LuaWatchList_t761 * ___everyDialogueEntryList_1;
	// PixelCrushers.DialogueSystem.LuaWatchList PixelCrushers.DialogueSystem.LuaWatchers::endOfConversationList
	LuaWatchList_t761 * ___endOfConversationList_2;
};
