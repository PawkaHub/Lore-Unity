#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorPlayWait
struct SequencerCommandAnimatorPlayWait_t1478;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Animator
struct Animator_t214;
// System.String
struct String_t;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorPlayWait::.ctor()
extern "C" void SequencerCommandAnimatorPlayWait__ctor_m6611 (SequencerCommandAnimatorPlayWait_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorPlayWait::Start()
extern "C" void SequencerCommandAnimatorPlayWait_Start_m6612 (SequencerCommandAnimatorPlayWait_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorPlayWait::MonitorState(UnityEngine.Animator,System.String)
extern "C" Object_t * SequencerCommandAnimatorPlayWait_MonitorState_m6613 (SequencerCommandAnimatorPlayWait_t1478 * __this, Animator_t214 * ___animator, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorPlayWait::CheckIsInState(UnityEngine.Animator,System.String,UnityEngine.AnimatorStateInfo&)
extern "C" bool SequencerCommandAnimatorPlayWait_CheckIsInState_m6614 (SequencerCommandAnimatorPlayWait_t1478 * __this, Animator_t214 * ___animator, String_t* ___stateName, AnimatorStateInfo_t627 * ___animatorStateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
