#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaConsole
struct LuaConsole_t1078;
// System.String
struct String_t;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.LuaConsole::.ctor()
extern "C" void LuaConsole__ctor_m5249 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::OnGUI()
extern "C" void LuaConsole_OnGUI_m5250 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::DrawConsole()
extern "C" void LuaConsole_DrawConsole_m5251 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.LuaConsole::DefineWindowRect()
extern "C" Rect_t201  LuaConsole_DefineWindowRect_m5252 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::DrawConsoleWindow(System.Int32)
extern "C" void LuaConsole_DrawConsoleWindow_m5253 (LuaConsole_t1078 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaConsole::IsKeyEvent(UnityEngine.KeyCode)
extern "C" bool LuaConsole_IsKeyEvent_m5254 (LuaConsole_t1078 * __this, int32_t ___keyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaConsole::IsConsoleKeyEvent()
extern "C" bool LuaConsole_IsConsoleKeyEvent_m5255 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::RunLuaCommand()
extern "C" void LuaConsole_RunLuaCommand_m5256 (LuaConsole_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LuaConsole::GetLuaResultString(PixelCrushers.DialogueSystem.Lua/Result)
extern "C" String_t* LuaConsole_GetLuaResultString_m5257 (LuaConsole_t1078 * __this, Result_t583  ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LuaConsole::FormatTableResult(PixelCrushers.DialogueSystem.Lua/Result)
extern "C" String_t* LuaConsole_FormatTableResult_m5258 (LuaConsole_t1078 * __this, Result_t583  ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::UseHistory(System.Int32)
extern "C" void LuaConsole_UseHistory_m5259 (LuaConsole_t1078 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
