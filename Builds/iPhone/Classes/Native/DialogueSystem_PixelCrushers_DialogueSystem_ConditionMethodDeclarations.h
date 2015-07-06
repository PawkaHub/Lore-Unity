#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// UnityEngine.Transform
struct Transform_t54;

// System.Void PixelCrushers.DialogueSystem.Condition::.ctor()
extern "C" void Condition__ctor_m2945 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsTrue(UnityEngine.Transform)
extern "C" bool Condition_IsTrue_m2741 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::LuaConditionsAreTrue()
extern "C" bool Condition_LuaConditionsAreTrue_m6457 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::QuestConditionsAreTrue()
extern "C" bool Condition_QuestConditionsAreTrue_m6458 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsAcceptedTag(UnityEngine.Transform)
extern "C" bool Condition_IsAcceptedTag_m6459 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsAcceptedGameObject(UnityEngine.Transform)
extern "C" bool Condition_IsAcceptedGameObject_m6460 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
