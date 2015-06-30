#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools
struct UnityGUITools_t1055;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.GUISkin
struct GUISkin_t197;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::DrawText(UnityEngine.Rect,System.String,UnityEngine.GUIStyle,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color)
extern "C" void UnityGUITools_DrawText_m2894 (Object_t * __this /* static, unused */, Rect_t201  ___rect, String_t* ___text, GUIStyle_t303 * ___guiStyle, int32_t ___textStyle, Color_t121  ___textStyleColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetValidGUISkin(UnityEngine.GUISkin)
extern "C" GUISkin_t197 * UnityGUITools_GetValidGUISkin_m2897 (Object_t * __this /* static, unused */, GUISkin_t197 * ___guiSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetDialogueManagerGUISkin()
extern "C" GUISkin_t197 * UnityGUITools_GetDialogueManagerGUISkin_m5111 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetGUIStyle(System.String,UnityEngine.GUIStyle)
extern "C" GUIStyle_t303 * UnityGUITools_GetGUIStyle_m2910 (Object_t * __this /* static, unused */, String_t* ___guiStyleName, GUIStyle_t303 * ___defaultGUIStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ColorWithAlpha(UnityEngine.Color,System.Single)
extern "C" Color_t121  UnityGUITools_ColorWithAlpha_m5112 (Object_t * __this /* static, unused */, Color_t121  ___color, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyBold(UnityEngine.FontStyle)
extern "C" int32_t UnityGUITools_ApplyBold_m5113 (Object_t * __this /* static, unused */, int32_t ___fontStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyItalic(UnityEngine.FontStyle)
extern "C" int32_t UnityGUITools_ApplyItalic_m5114 (Object_t * __this /* static, unused */, int32_t ___fontStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyFormatting(PixelCrushers.DialogueSystem.FormattedText,UnityEngine.GUIStyle)
extern "C" GUIStyle_t303 * UnityGUITools_ApplyFormatting_m5115 (Object_t * __this /* static, unused */, FormattedText_t554 * ___formattingToApply, GUIStyle_t303 * ___guiStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
