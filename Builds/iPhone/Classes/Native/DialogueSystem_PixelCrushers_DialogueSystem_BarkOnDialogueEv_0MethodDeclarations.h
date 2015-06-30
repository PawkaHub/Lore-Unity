#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkOnDialogueEvent
struct BarkOnDialogueEvent_t959;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[]
struct BarkActionU5BU5D_t958;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction
struct BarkAction_t957;

// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::.ctor()
extern "C" void BarkOnDialogueEvent__ctor_m4627 (BarkOnDialogueEvent_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkOnDialogueEvent::get_sequencer()
extern "C" Sequencer_t597 * BarkOnDialogueEvent_get_sequencer_m4628 (BarkOnDialogueEvent_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkOnDialogueEvent_set_sequencer_m4629 (BarkOnDialogueEvent_t959 * __this, Sequencer_t597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::Awake()
extern "C" void BarkOnDialogueEvent_Awake_m4630 (BarkOnDialogueEvent_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryStartActions_m4631 (BarkOnDialogueEvent_t959 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryEndActions_m4632 (BarkOnDialogueEvent_t959 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[],UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryActions_m4633 (BarkOnDialogueEvent_t959 * __this, BarkActionU5BU5D_t958* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction,UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_DoAction_m4634 (BarkOnDialogueEvent_t959 * __this, BarkAction_t957 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
