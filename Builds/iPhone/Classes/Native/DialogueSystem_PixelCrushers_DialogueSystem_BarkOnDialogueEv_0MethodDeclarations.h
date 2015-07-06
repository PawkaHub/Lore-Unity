#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkOnDialogueEvent
struct BarkOnDialogueEvent_t1283;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[]
struct BarkActionU5BU5D_t1282;
// PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction
struct BarkAction_t1281;

// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::.ctor()
extern "C" void BarkOnDialogueEvent__ctor_m6473 (BarkOnDialogueEvent_t1283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkOnDialogueEvent::get_sequencer()
extern "C" Sequencer_t618 * BarkOnDialogueEvent_get_sequencer_m6474 (BarkOnDialogueEvent_t1283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkOnDialogueEvent_set_sequencer_m6475 (BarkOnDialogueEvent_t1283 * __this, Sequencer_t618 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::Awake()
extern "C" void BarkOnDialogueEvent_Awake_m6476 (BarkOnDialogueEvent_t1283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryStartActions_m6477 (BarkOnDialogueEvent_t1283 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryEndActions_m6478 (BarkOnDialogueEvent_t1283 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction[],UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_TryActions_m6479 (BarkOnDialogueEvent_t1283 * __this, BarkActionU5BU5D_t1282* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.BarkOnDialogueEvent/BarkAction,UnityEngine.Transform)
extern "C" void BarkOnDialogueEvent_DoAction_m6480 (BarkOnDialogueEvent_t1283 * __this, BarkAction_t1281 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
