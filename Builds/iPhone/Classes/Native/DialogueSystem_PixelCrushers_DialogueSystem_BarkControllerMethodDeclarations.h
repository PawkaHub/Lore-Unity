#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkController
struct BarkController_t1365;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1358;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.IBarkUI
struct IBarkUI_t839;

// System.Void PixelCrushers.DialogueSystem.BarkController::.cctor()
extern "C" void BarkController__cctor_m5937 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkController::get_LastSequencer()
extern "C" Sequencer_t675 * BarkController_get_LastSequencer_m5938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkController::set_LastSequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkController_set_LastSequencer_m5939 (Object_t * __this /* static, unused */, Sequencer_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.BarkController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory,PixelCrushers.DialogueSystem.DialogueDatabase,System.Boolean)
extern "C" Object_t * BarkController_Bark_m5940 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t1358 * ___barkHistory, DialogueDatabase_t202 * ___database, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.BarkController::Bark(PixelCrushers.DialogueSystem.Subtitle,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.IBarkUI)
extern "C" Object_t * BarkController_Bark_m5941 (Object_t * __this /* static, unused */, Subtitle_t623 * ___subtitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, Object_t * ___barkUI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.BarkController::Bark(PixelCrushers.DialogueSystem.Subtitle,System.Boolean)
extern "C" Object_t * BarkController_Bark_m5942 (Object_t * __this /* static, unused */, Subtitle_t623 * ___subtitle, bool ___skipSequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkController::InformParticipants(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void BarkController_InformParticipants_m5943 (Object_t * __this /* static, unused */, String_t* ___message, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
