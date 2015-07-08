#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI
struct UnityBarkUIOnGUI_t1639;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::.ctor()
extern "C" void UnityBarkUIOnGUI__ctor_m7436 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::get_IsPlaying()
extern "C" bool UnityBarkUIOnGUI_get_IsPlaying_m7437 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::get_BarkPosition()
extern "C" Vector3_t53  UnityBarkUIOnGUI_get_BarkPosition_m7438 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::set_BarkPosition(UnityEngine.Vector3)
extern "C" void UnityBarkUIOnGUI_set_BarkPosition_m7439 (UnityBarkUIOnGUI_t1639 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Awake()
extern "C" void UnityBarkUIOnGUI_Awake_m7440 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Start()
extern "C" void UnityBarkUIOnGUI_Start_m7441 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::ComputeOffsetToHead()
extern "C" void UnityBarkUIOnGUI_ComputeOffsetToHead_m7442 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,System.Boolean,UnityEngine.Transform)
extern "C" void UnityBarkUIOnGUI_Show_m7443 (UnityBarkUIOnGUI_t1639 * __this, Subtitle_t623 * ___subtitle, float ___duration, GUISkin_t197 * ___guiSkin, String_t* ___guiStyleName, int32_t ___textStyle, bool ___includeName, Transform_t54 * ___textPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color,System.Boolean,UnityEngine.Transform)
extern "C" void UnityBarkUIOnGUI_Show_m7444 (UnityBarkUIOnGUI_t1639 * __this, Subtitle_t623 * ___subtitle, float ___duration, GUISkin_t197 * ___guiSkin, String_t* ___guiStyleName, int32_t ___textStyle, Color_t121  ___textStyleColor, bool ___includeName, Transform_t54 * ___textPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::FadeOut(System.Single)
extern "C" Object_t * UnityBarkUIOnGUI_FadeOut_m7445 (UnityBarkUIOnGUI_t1639 * __this, float ___fadeDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::OnGUI()
extern "C" void UnityBarkUIOnGUI_OnGUI_m7446 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::UpdateBarkPosition()
extern "C" void UnityBarkUIOnGUI_UpdateBarkPosition_m7447 (UnityBarkUIOnGUI_t1639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
