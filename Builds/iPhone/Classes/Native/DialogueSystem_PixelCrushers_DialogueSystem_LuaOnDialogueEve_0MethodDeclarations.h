#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaOnDialogueEvent
struct LuaOnDialogueEvent_t1546;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction[]
struct LuaActionU5BU5D_t1545;
// PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction
struct LuaAction_t1544;

// System.Void PixelCrushers.DialogueSystem.LuaOnDialogueEvent::.ctor()
extern "C" void LuaOnDialogueEvent__ctor_m6930 (LuaOnDialogueEvent_t1546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void LuaOnDialogueEvent_TryStartActions_m6931 (LuaOnDialogueEvent_t1546 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void LuaOnDialogueEvent_TryEndActions_m6932 (LuaOnDialogueEvent_t1546 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction[],UnityEngine.Transform)
extern "C" void LuaOnDialogueEvent_TryActions_m6933 (LuaOnDialogueEvent_t1546 * __this, LuaActionU5BU5D_t1545* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.LuaOnDialogueEvent/LuaAction,UnityEngine.Transform)
extern "C" void LuaOnDialogueEvent_DoAction_m6934 (LuaOnDialogueEvent_t1546 * __this, LuaAction_t1544 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
