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
extern "C" void Condition__ctor_m2858 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsTrue(UnityEngine.Transform)
extern "C" bool Condition_IsTrue_m2654 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::LuaConditionsAreTrue()
extern "C" bool Condition_LuaConditionsAreTrue_m4611 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::QuestConditionsAreTrue()
extern "C" bool Condition_QuestConditionsAreTrue_m4612 (Condition_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsAcceptedTag(UnityEngine.Transform)
extern "C" bool Condition_IsAcceptedTag_m4613 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Condition::IsAcceptedGameObject(UnityEngine.Transform)
extern "C" bool Condition_IsAcceptedGameObject_m4614 (Condition_t203 * __this, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
