#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Emphasis[]
struct EmphasisU5BU5D_t614;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t611;
// System.Text.RegularExpressions.Match
struct Match_t1076;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"

// System.Void PixelCrushers.DialogueSystem.FormattedText::.ctor(System.String,PixelCrushers.DialogueSystem.Emphasis[],System.Boolean,System.Int32,System.Boolean,System.Int32,System.Int32,System.Int32,System.String)
extern "C" void FormattedText__ctor_m2804 (FormattedText_t554 * __this, String_t* ___text, EmphasisU5BU5D_t614* ___emphases, bool ___italic, int32_t ___position, bool ___forceMenu, int32_t ___pic, int32_t ___picActor, int32_t ___picConversant, String_t* ___variableInputPrompt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::.cctor()
extern "C" void FormattedText__cctor_m4077 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::get_text()
extern "C" String_t* FormattedText_get_text_m2695 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_text(System.String)
extern "C" void FormattedText_set_text_m4078 (FormattedText_t554 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::get_emphases()
extern "C" EmphasisU5BU5D_t614* FormattedText_get_emphases_m2731 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_emphases(PixelCrushers.DialogueSystem.Emphasis[])
extern "C" void FormattedText_set_emphases_m4079 (FormattedText_t554 * __this, EmphasisU5BU5D_t614* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_italic()
extern "C" bool FormattedText_get_italic_m2852 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_italic(System.Boolean)
extern "C" void FormattedText_set_italic_m4080 (FormattedText_t554 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_position()
extern "C" int32_t FormattedText_get_position_m2746 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_position(System.Int32)
extern "C" void FormattedText_set_position_m4081 (FormattedText_t554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_forceMenu()
extern "C" bool FormattedText_get_forceMenu_m4082 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_forceMenu(System.Boolean)
extern "C" void FormattedText_set_forceMenu_m4083 (FormattedText_t554 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_pic()
extern "C" int32_t FormattedText_get_pic_m4084 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_pic(System.Int32)
extern "C" void FormattedText_set_pic_m4085 (FormattedText_t554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_picActor()
extern "C" int32_t FormattedText_get_picActor_m4086 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_picActor(System.Int32)
extern "C" void FormattedText_set_picActor_m4087 (FormattedText_t554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::get_picConversant()
extern "C" int32_t FormattedText_get_picConversant_m4088 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_picConversant(System.Int32)
extern "C" void FormattedText_set_picConversant_m4089 (FormattedText_t554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::get_variableInputPrompt()
extern "C" String_t* FormattedText_get_variableInputPrompt_m4090 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::set_variableInputPrompt(System.String)
extern "C" void FormattedText_set_variableInputPrompt_m4091 (FormattedText_t554 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::get_hasVariableInputPrompt()
extern "C" bool FormattedText_get_hasVariableInputPrompt_m4092 (FormattedText_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.FormattedText::Parse(System.String,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" FormattedText_t554 * FormattedText_Parse_m2710 (Object_t * __this /* static, unused */, String_t* ___rawText, EmphasisSettingU5BU5D_t611* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplacePipes(System.String&)
extern "C" void FormattedText_ReplacePipes_m4093 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplaceLuaTags(System.String&)
extern "C" void FormattedText_ReplaceLuaTags_m4094 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.FormattedText::ReplaceVarTags(System.String&)
extern "C" void FormattedText_ReplaceVarTags_m4095 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::ExtractVariableInputPrompt(System.String&)
extern "C" String_t* FormattedText_ExtractVariableInputPrompt_m4096 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.FormattedText::ExtractTag(System.String,System.String&)
extern "C" bool FormattedText_ExtractTag_m4097 (Object_t * __this /* static, unused */, String_t* ___tag, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::ExtractPositionTag(System.String&)
extern "C" int32_t FormattedText_ExtractPositionTag_m4098 (Object_t * __this /* static, unused */, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.FormattedText::ExtractPicTag(System.String,System.String&)
extern "C" int32_t FormattedText_ExtractPicTag_m4099 (Object_t * __this /* static, unused */, String_t* ___tagRegex, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::ExtractEmphasisTags(System.String&,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" EmphasisU5BU5D_t614* FormattedText_ExtractEmphasisTags_m4100 (Object_t * __this /* static, unused */, String_t** ___text, EmphasisSettingU5BU5D_t611* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::ReplaceEmphasisTagsWithRichText(System.String&,PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" EmphasisU5BU5D_t614* FormattedText_ReplaceEmphasisTagsWithRichText_m4101 (Object_t * __this /* static, unused */, String_t** ___text, EmphasisSettingU5BU5D_t611* ___emphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.FormattedText::GetFontStyle(PixelCrushers.DialogueSystem.Emphasis)
extern "C" int32_t FormattedText_GetFontStyle_m4102 (Object_t * __this /* static, unused */, Emphasis_t615  ___emphasis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::<ReplaceLuaTags>m__28(System.Text.RegularExpressions.Match)
extern "C" String_t* FormattedText_U3CReplaceLuaTagsU3Em__28_m4103 (Object_t * __this /* static, unused */, Match_t1076 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.FormattedText::<ReplaceVarTags>m__29(System.Text.RegularExpressions.Match)
extern "C" String_t* FormattedText_U3CReplaceVarTagsU3Em__29_m4104 (Object_t * __this /* static, unused */, Match_t1076 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
