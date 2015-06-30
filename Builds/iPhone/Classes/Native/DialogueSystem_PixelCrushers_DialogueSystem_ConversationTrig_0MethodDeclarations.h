#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationTrigger
struct ConversationTrigger_t1008;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Collider2D
struct Collider2D_t195;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::.ctor()
extern "C" void ConversationTrigger__ctor_m4814 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnBarkEnd(UnityEngine.Transform)
extern "C" void ConversationTrigger_OnBarkEnd_m4815 (ConversationTrigger_t1008 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnConversationEnd(UnityEngine.Transform)
extern "C" void ConversationTrigger_OnConversationEnd_m4816 (ConversationTrigger_t1008 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnSequenceEnd(UnityEngine.Transform)
extern "C" void ConversationTrigger_OnSequenceEnd_m4817 (ConversationTrigger_t1008 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse(UnityEngine.Transform)
extern "C" void ConversationTrigger_OnUse_m4818 (ConversationTrigger_t1008 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse(System.String)
extern "C" void ConversationTrigger_OnUse_m4819 (ConversationTrigger_t1008 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse()
extern "C" void ConversationTrigger_OnUse_m4820 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ConversationTrigger_OnTriggerEnter_m4821 (ConversationTrigger_t1008 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void ConversationTrigger_OnTriggerExit_m4822 (ConversationTrigger_t1008 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void ConversationTrigger_OnTriggerEnter2D_m4823 (ConversationTrigger_t1008 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void ConversationTrigger_OnTriggerExit2D_m4824 (ConversationTrigger_t1008 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::TryStartConversationOnTriggerEnter(UnityEngine.Transform)
extern "C" void ConversationTrigger_TryStartConversationOnTriggerEnter_m4825 (ConversationTrigger_t1008 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::CheckOnTriggerExit(UnityEngine.Transform)
extern "C" void ConversationTrigger_CheckOnTriggerExit_m4826 (ConversationTrigger_t1008 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::Start()
extern "C" void ConversationTrigger_Start_m4827 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnEnable()
extern "C" void ConversationTrigger_OnEnable_m4828 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnDisable()
extern "C" void ConversationTrigger_OnDisable_m4829 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnDestroy()
extern "C" void ConversationTrigger_OnDestroy_m4830 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ConversationTrigger::StartConversationAfterOneFrame()
extern "C" Object_t * ConversationTrigger_StartConversationAfterOneFrame_m4831 (ConversationTrigger_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
