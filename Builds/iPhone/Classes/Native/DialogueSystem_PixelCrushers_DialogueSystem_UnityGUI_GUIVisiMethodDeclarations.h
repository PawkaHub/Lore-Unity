#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
struct GUIVisibleControl_t1023;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t261;

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::.ctor()
extern "C" void GUIVisibleControl__ctor_m4998 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_Alpha()
extern "C" float GUIVisibleControl_get_Alpha_m4999 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::set_Alpha(System.Single)
extern "C" void GUIVisibleControl_set_Alpha_m5000 (GUIVisibleControl_t1023 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_HasAlpha()
extern "C" bool GUIVisibleControl_get_HasAlpha_m5001 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_DefaultGUIStyle()
extern "C" GUIStyle_t303 * GUIVisibleControl_get_DefaultGUIStyle_m5002 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_GuiStyle()
extern "C" GUIStyle_t303 * GUIVisibleControl_get_GuiStyle_m5003 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::set_GuiStyle(UnityEngine.GUIStyle)
extern "C" void GUIVisibleControl_set_GuiStyle_m5004 (GUIVisibleControl_t1023 * __this, GUIStyle_t303 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::Awake()
extern "C" void GUIVisibleControl_Awake_m5005 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::Start()
extern "C" void GUIVisibleControl_Start_m5006 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::UseLocalizedText(PixelCrushers.DialogueSystem.LocalizedTextTable)
extern "C" void GUIVisibleControl_UseLocalizedText_m5007 (GUIVisibleControl_t1023 * __this, LocalizedTextTable_t252 * ___localizedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::ApplyAlphaToGUIColor()
extern "C" void GUIVisibleControl_ApplyAlphaToGUIColor_m5008 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::RestoreGUIColor()
extern "C" void GUIVisibleControl_RestoreGUIColor_m5009 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void GUIVisibleControl_SetFormattedText_m5010 (GUIVisibleControl_t1023 * __this, FormattedText_t554 * ___formattedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetUnformattedText(System.String)
extern "C" void GUIVisibleControl_SetUnformattedText_m5011 (GUIVisibleControl_t1023 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::UpdateLayoutSelf()
extern "C" void GUIVisibleControl_UpdateLayoutSelf_m5012 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetGUIStyle()
extern "C" void GUIVisibleControl_SetGUIStyle_m5013 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::ApplyFormatting()
extern "C" void GUIVisibleControl_ApplyFormatting_m5014 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::AutoSizeSelf()
extern "C" void GUIVisibleControl_AutoSizeSelf_m5015 (GUIVisibleControl_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::GetAutoSizeX(System.Single)
extern "C" float GUIVisibleControl_GetAutoSizeX_m5016 (GUIVisibleControl_t1023 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::GetAutoSizeY(System.Single)
extern "C" float GUIVisibleControl_GetAutoSizeY_m5017 (GUIVisibleControl_t1023 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::PlaySound(UnityEngine.AudioClip)
extern "C" void GUIVisibleControl_PlaySound_m5018 (GUIVisibleControl_t1023 * __this, AudioClip_t261 * ___audioClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
