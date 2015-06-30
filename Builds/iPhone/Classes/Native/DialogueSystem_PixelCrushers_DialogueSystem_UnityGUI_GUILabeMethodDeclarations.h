#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct GUILabel_t938;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::.ctor()
extern "C" void GUILabel__ctor_m4954 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUILabel::get_currentLength()
extern "C" int32_t GUILabel_get_currentLength_m4955 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::set_currentLength(System.Int32)
extern "C" void GUILabel_set_currentLength_m4956 (GUILabel_t938 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Awake()
extern "C" void GUILabel_Awake_m4957 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::ResetClosureTags()
extern "C" void GUILabel_ResetClosureTags_m4958 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PushClosureTag(System.String)
extern "C" void GUILabel_PushClosureTag_m4959 (GUILabel_t938 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PopClosureTag()
extern "C" void GUILabel_PopClosureTag_m4960 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void GUILabel_SetFormattedText_m4961 (GUILabel_t938 * __this, FormattedText_t554 * ___formattedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSelf(UnityEngine.Vector2)
extern "C" void GUILabel_DrawSelf_m4962 (GUILabel_t938 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstring()
extern "C" void GUILabel_DrawSubstring_m4963 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsLeftAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsLeftAligned_m4964 (GUILabel_t938 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsCenterAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsCenterAligned_m4965 (GUILabel_t938 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetLeftAlignedVersion(UnityEngine.TextAnchor)
extern "C" int32_t GUILabel_GetLeftAlignedVersion_m4966 (GUILabel_t938 * __this, int32_t ___textAnchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringLeftAligned()
extern "C" void GUILabel_DrawSubstringLeftAligned_m4967 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringNotLeftAligned()
extern "C" void GUILabel_DrawSubstringNotLeftAligned_m4968 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetNextLine(System.String,System.Int32)
extern "C" String_t* GUILabel_GetNextLine_m4969 (GUILabel_t938 * __this, String_t* ___text, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetRichTextClosedText(System.String)
extern "C" String_t* GUILabel_GetRichTextClosedText_m4970 (GUILabel_t938 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawImage()
extern "C" void GUILabel_DrawImage_m4971 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Refresh()
extern "C" void GUILabel_Refresh_m4972 (GUILabel_t938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
