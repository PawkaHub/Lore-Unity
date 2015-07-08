#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction[]
struct LuaActionU5BU5D_t1545;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0.h"
// PixelCrushers.DialogueSystem.LuaOnDialogueEvent
struct  LuaOnDialogueEvent_t1546  : public ActOnDialogueEvent_t1539
{
	// PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction[] PixelCrushers.DialogueSystem.LuaOnDialogueEvent::onStart
	LuaActionU5BU5D_t1545* ___onStart_5;
	// PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction[] PixelCrushers.DialogueSystem.LuaOnDialogueEvent::onEnd
	LuaActionU5BU5D_t1545* ___onEnd_6;
	// System.Boolean PixelCrushers.DialogueSystem.LuaOnDialogueEvent::debugLua
	bool ___debugLua_7;
};
