#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct GUILabel_t1521;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t625;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::.ctor()
extern "C" void GUILabel__ctor_m7248 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUILabel::get_currentLength()
extern "C" int32_t GUILabel_get_currentLength_m7249 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::set_currentLength(System.Int32)
extern "C" void GUILabel_set_currentLength_m7250 (GUILabel_t1521 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Awake()
extern "C" void GUILabel_Awake_m7251 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::ResetClosureTags()
extern "C" void GUILabel_ResetClosureTags_m7252 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PushClosureTag(System.String)
extern "C" void GUILabel_PushClosureTag_m7253 (GUILabel_t1521 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PopClosureTag()
extern "C" void GUILabel_PopClosureTag_m7254 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void GUILabel_SetFormattedText_m7255 (GUILabel_t1521 * __this, FormattedText_t625 * ___formattedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSelf(UnityEngine.Vector2)
extern "C" void GUILabel_DrawSelf_m7256 (GUILabel_t1521 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstring()
extern "C" void GUILabel_DrawSubstring_m7257 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsLeftAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsLeftAligned_m7258 (GUILabel_t1521 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsCenterAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsCenterAligned_m7259 (GUILabel_t1521 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetLeftAlignedVersion(UnityEngine.TextAnchor)
extern "C" int32_t GUILabel_GetLeftAlignedVersion_m7260 (GUILabel_t1521 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringLeftAligned()
extern "C" void GUILabel_DrawSubstringLeftAligned_m7261 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringNotLeftAligned()
extern "C" void GUILabel_DrawSubstringNotLeftAligned_m7262 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetNextLine(System.String,System.Int32)
extern "C" String_t* GUILabel_GetNextLine_m7263 (GUILabel_t1521 * __this, String_t* ___text, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetRichTextClosedText(System.String)
extern "C" String_t* GUILabel_GetRichTextClosedText_m7264 (GUILabel_t1521 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawImage()
extern "C" void GUILabel_DrawImage_m7265 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Refresh()
extern "C" void GUILabel_Refresh_m7266 (GUILabel_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
