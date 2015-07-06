#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t572;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Emphasis[]
struct EmphasisU5BU5D_t635;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t632;
// System.Text.RegularExpressions.Match
struct Match_t1399;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"

// System.Void PixelCrushers.DialogueSystem.FormattedText::.ctor(System.String,PixelCrushers.DialogueSystem.Emphasis[],System.Boolean,System.Int32,System.Boolean,System.Int32,System.Int32,System.Int32,System.String)
extern "C" void FormattedText__ctor_m2891 (FormattedText_t572 * __this, String_t* ___text, EmphasisU5BU5D_t635* ___emphases, bool ___italic, int32_t ___position, bool ___forceMenu, int32_t ___pic, int32_t ___picActor, int32_t ___picConversant, String_t* ___variableInputPrompt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::.cctor()
extern "C" void FormattedText__cctor_m5922 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::get_text()
extern "C" String_t* FormattedText_get_text_m2782 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_text(System.String)
extern "C" void FormattedText_set_text_m5923 (FormattedText_t572 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::get_emphases()
extern "C" EmphasisU5BU5D_t635* FormattedText_get_emphases_m2818 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_emphases(PixelCrushers.DialogueSystem.Emphasis[])
extern "C" void FormattedText_set_emphases_m5924 (FormattedText_t572 * __this, EmphasisU5BU5D_t635* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_italic()
extern "C" bool FormattedText_get_italic_m2939 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_italic(System.Boolean)
extern "C" void FormattedText_set_italic_m5925 (FormattedText_t572 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_position()
extern "C" int32_t FormattedText_get_position_m2833 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_position(System.Int32)
extern "C" void FormattedText_set_position_m5926 (FormattedText_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_forceMenu()
extern "C" bool FormattedText_get_forceMenu_m5927 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_forceMenu(System.Boolean)
extern "C" void FormattedText_set_forceMenu_m5928 (FormattedText_t572 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_pic()
extern "C" int32_t FormattedText_get_pic_m5929 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_pic(System.Int32)
extern "C" void FormattedText_set_pic_m5930 (FormattedText_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_picActor()
extern "C" int32_t FormattedText_get_picActor_m5931 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_picActor(System.Int32)
extern "C" void FormattedText_set_picActor_m5932 (FormattedText_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_picConversant()
extern "C" int32_t FormattedText_get_picConversant_m5933 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_picConversant(System.Int32)
extern "C" void FormattedText_set_picConversant_m5934 (FormattedText_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::get_variableInputPrompt()
extern "C" String_t* FormattedText_get_variableInputPrompt_m5935 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_variableInputPrompt(System.String)
extern "C" void FormattedText_set_variableInputPrompt_m5936 (FormattedText_t572 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_hasVariableInputPrompt()
extern "C" bool FormattedText_get_hasVariableInputPrompt_m5937 (FormattedText_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.FormattedText::Parse(System.String,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" FormattedText_t572 * FormattedText_Parse_m2797 (Object_t * __this /* static, unused */, String_t* ___rawText, EmphasisSettingU5BU5D_t632* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplacePipes(System.String&)
extern "C" void FormattedText_ReplacePipes_m5938 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplaceLuaTags(System.String&)
extern "C" void FormattedText_ReplaceLuaTags_m5939 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplaceVarTags(System.String&)
extern "C" void FormattedText_ReplaceVarTags_m5940 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::ExtractVariableInputPrompt(System.String&)
extern "C" String_t* FormattedText_ExtractVariableInputPrompt_m5941 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::ExtractTag(System.String,System.String&)
extern "C" bool FormattedText_ExtractTag_m5942 (Object_t * __this /* static, unused */, String_t* ___tag, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::ExtractPositionTag(System.String&)
extern "C" int32_t FormattedText_ExtractPositionTag_m5943 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::ExtractPicTag(System.String,System.String&)
extern "C" int32_t FormattedText_ExtractPicTag_m5944 (Object_t * __this /* static, unused */, String_t* ___tagRegex, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::ExtractEmphasisTags(System.String&,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" EmphasisU5BU5D_t635* FormattedText_ExtractEmphasisTags_m5945 (Object_t * __this /* static, unused */, String_t** ___text, EmphasisSettingU5BU5D_t632* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::ReplaceEmphasisTagsWithRichText(System.String&,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" EmphasisU5BU5D_t635* FormattedText_ReplaceEmphasisTagsWithRichText_m5946 (Object_t * __this /* static, unused */, String_t** ___text, EmphasisSettingU5BU5D_t632* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.FormattedText::GetFontStyle(PixelCrushers.DialogueSystem.Emphasis)
extern "C" int32_t FormattedText_GetFontStyle_m5947 (Object_t * __this /* static, unused */, Emphasis_t636  ___emphasis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::<ReplaceLuaTags>m__28(System.Text.RegularExpressions.Match)
extern "C" String_t* FormattedText_U3CReplaceLuaTagsU3Em__28_m5948 (Object_t * __this /* static, unused */, Match_t1399 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::<ReplaceVarTags>m__29(System.Text.RegularExpressions.Match)
extern "C" String_t* FormattedText_U3CReplaceVarTagsU3Em__29_m5949 (Object_t * __this /* static, unused */, Match_t1399 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
