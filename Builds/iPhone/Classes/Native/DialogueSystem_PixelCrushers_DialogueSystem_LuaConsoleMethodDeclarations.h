#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaConsole
struct LuaConsole_t751;
// System.String
struct String_t;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.LuaConsole::.ctor()
extern "C" void LuaConsole__ctor_m3411 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::OnGUI()
extern "C" void LuaConsole_OnGUI_m3412 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::DrawConsole()
extern "C" void LuaConsole_DrawConsole_m3413 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.LuaConsole::DefineWindowRect()
extern "C" Rect_t201  LuaConsole_DefineWindowRect_m3414 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::DrawConsoleWindow(System.Int32)
extern "C" void LuaConsole_DrawConsoleWindow_m3415 (LuaConsole_t751 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaConsole::IsKeyEvent(UnityEngine.KeyCode)
extern "C" bool LuaConsole_IsKeyEvent_m3416 (LuaConsole_t751 * __this, int32_t ___keyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaConsole::IsConsoleKeyEvent()
extern "C" bool LuaConsole_IsConsoleKeyEvent_m3417 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::RunLuaCommand()
extern "C" void LuaConsole_RunLuaCommand_m3418 (LuaConsole_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LuaConsole::GetLuaResultString(PixelCrushers.DialogueSystem.Lua/Result)
extern "C" String_t* LuaConsole_GetLuaResultString_m3419 (LuaConsole_t751 * __this, Result_t627  ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LuaConsole::FormatTableResult(PixelCrushers.DialogueSystem.Lua/Result)
extern "C" String_t* LuaConsole_FormatTableResult_m3420 (LuaConsole_t751 * __this, Result_t627  ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaConsole::UseHistory(System.Int32)
extern "C" void LuaConsole_UseHistory_m3421 (LuaConsole_t751 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
