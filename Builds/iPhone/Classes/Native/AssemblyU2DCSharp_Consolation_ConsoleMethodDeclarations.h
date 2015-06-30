#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Consolation.Console
struct Console_t540;
// System.String
struct String_t;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void Consolation.Console::.ctor()
extern "C" void Console__ctor_m2283 (Console_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::.cctor()
extern "C" void Console__cctor_m2284 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::OnEnable()
extern "C" void Console_OnEnable_m2285 (Console_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::OnDisable()
extern "C" void Console_OnDisable_m2286 (Console_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::Update()
extern "C" void Console_Update_m2287 (Console_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::OnGUI()
extern "C" void Console_OnGUI_m2288 (Console_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::ConsoleWindow(System.Int32)
extern "C" void Console_ConsoleWindow_m2289 (Console_t540 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Consolation.Console::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" void Console_HandleLog_m2290 (Console_t540 * __this, String_t* ___message, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
