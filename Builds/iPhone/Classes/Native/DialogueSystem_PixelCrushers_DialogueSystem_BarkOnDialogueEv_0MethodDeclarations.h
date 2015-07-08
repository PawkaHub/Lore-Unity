#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkOnDialogueEvent
struct BarkOnDialogueEvent_t1542;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[]
struct BarkActionU5BU5D_t1541;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction
struct BarkAction_t1540;

// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::.ctor()
extern "C" void BarkOnDialogueEvent__ctor_m6921 (BarkOnDialogueEvent_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkOnDialogueEvent::get_sequencer()
extern "C" Sequencer_t675 * BarkOnDialogueEvent_get_sequencer_m6922 (BarkOnDialogueEvent_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkOnDialogueEvent_set_sequencer_m6923 (BarkOnDialogueEvent_t1542 * __this, Sequencer_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::Awake()
extern "C" void BarkOnDialogueEvent_Awake_m6924 (BarkOnDialogueEvent_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryStartActions_m6925 (BarkOnDialogueEvent_t1542 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryEndActions_m6926 (BarkOnDialogueEvent_t1542 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[],UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryActions_m6927 (BarkOnDialogueEvent_t1542 * __this, BarkActionU5BU5D_t1541* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction,UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_DoAction_m6928 (BarkOnDialogueEvent_t1542 * __this, BarkAction_t1540 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
