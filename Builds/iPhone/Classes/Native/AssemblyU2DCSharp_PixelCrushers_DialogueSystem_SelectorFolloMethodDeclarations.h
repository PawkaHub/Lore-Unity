#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SelectorFollowTarget
struct SelectorFollowTarget_t320;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// PixelCrushers.DialogueSystem.Selector/Reticle
struct Reticle_t313;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"

// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::.ctor()
extern "C" void SelectorFollowTarget__ctor_m1226 (SelectorFollowTarget_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::Awake()
extern "C" void SelectorFollowTarget_Awake_m1227 (SelectorFollowTarget_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::OnEnable()
extern "C" void SelectorFollowTarget_OnEnable_m1228 (SelectorFollowTarget_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::OnDisable()
extern "C" void SelectorFollowTarget_OnDisable_m1229 (SelectorFollowTarget_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::OnGUI()
extern "C" void SelectorFollowTarget_OnGUI_m1230 (SelectorFollowTarget_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectorFollowTarget::DrawOnSelection(PixelCrushers.DialogueSystem.Usable,System.Single,PixelCrushers.DialogueSystem.Selector/Reticle,UnityEngine.GUIStyle,System.String,UnityEngine.Color,UnityEngine.Color,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color)
extern "C" void SelectorFollowTarget_DrawOnSelection_m1231 (SelectorFollowTarget_t320 * __this, Usable_t279 * ___usable, float ___distance, Reticle_t313 * ___reticle, GUIStyle_t303 * ___guiStyle, String_t* ___defaultUseMessage, Color_t121  ___inRangeColor, Color_t121  ___outOfRangeColor, int32_t ___textStyle, Color_t121  ___textStyleColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
