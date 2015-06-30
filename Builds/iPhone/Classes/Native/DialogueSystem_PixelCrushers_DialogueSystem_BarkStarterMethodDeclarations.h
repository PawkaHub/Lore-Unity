#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkStarter
struct BarkStarter_t1000;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.BarkStarter::.ctor()
extern "C" void BarkStarter__ctor_m4749 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkStarter::get_sequencer()
extern "C" Sequencer_t597 * BarkStarter_get_sequencer_m4750 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkStarter_set_sequencer_m4751 (BarkStarter_t1000 * __this, Sequencer_t597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.BarkStarter::get_BarkIndex()
extern "C" int32_t BarkStarter_get_BarkIndex_m4752 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_BarkIndex(System.Int32)
extern "C" void BarkStarter_set_BarkIndex_m4753 (BarkStarter_t1000 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::Awake()
extern "C" void BarkStarter_Awake_m4754 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform)
extern "C" void BarkStarter_TryBark_m4755 (BarkStarter_t1000 * __this, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_TryBark_m4756 (BarkStarter_t1000 * __this, Transform_t54 * ___target, Transform_t54 * ___interactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkStarter::GetBarker()
extern "C" Transform_t54 * BarkStarter_GetBarker_m4757 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.BarkStarter::GetBarkerName()
extern "C" String_t* BarkStarter_GetBarkerName_m4758 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_BarkCachedLine_m4759 (BarkStarter_t1000 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::PopulateCache(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_PopulateCache_m4760 (BarkStarter_t1000 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkNextCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkStarter_BarkNextCachedLine_m4761 (BarkStarter_t1000 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnRecordPersistentData()
extern "C" void BarkStarter_OnRecordPersistentData_m4762 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnApplyPersistentData()
extern "C" void BarkStarter_OnApplyPersistentData_m4763 (BarkStarter_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
