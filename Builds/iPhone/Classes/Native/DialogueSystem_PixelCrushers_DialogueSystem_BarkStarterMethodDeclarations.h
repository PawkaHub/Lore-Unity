#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkStarter
struct BarkStarter_t1583;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.BarkStarter::.ctor()
extern "C" void BarkStarter__ctor_m7043 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkStarter::get_sequencer()
extern "C" Sequencer_t675 * BarkStarter_get_sequencer_m7044 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkStarter_set_sequencer_m7045 (BarkStarter_t1583 * __this, Sequencer_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.BarkStarter::get_BarkIndex()
extern "C" int32_t BarkStarter_get_BarkIndex_m7046 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_BarkIndex(System.Int32)
extern "C" void BarkStarter_set_BarkIndex_m7047 (BarkStarter_t1583 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::Awake()
extern "C" void BarkStarter_Awake_m7048 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform)
extern "C" void BarkStarter_TryBark_m7049 (BarkStarter_t1583 * __this, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_TryBark_m7050 (BarkStarter_t1583 * __this, Transform_t54 * ___target, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkStarter::GetBarker()
extern "C" Transform_t54 * BarkStarter_GetBarker_m7051 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.BarkStarter::GetBarkerName()
extern "C" String_t* BarkStarter_GetBarkerName_m7052 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_BarkCachedLine_m7053 (BarkStarter_t1583 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::PopulateCache(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_PopulateCache_m7054 (BarkStarter_t1583 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkNextCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_BarkNextCachedLine_m7055 (BarkStarter_t1583 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnRecordPersistentData()
extern "C" void BarkStarter_OnRecordPersistentData_m7056 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnApplyPersistentData()
extern "C" void BarkStarter_OnApplyPersistentData_m7057 (BarkStarter_t1583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
