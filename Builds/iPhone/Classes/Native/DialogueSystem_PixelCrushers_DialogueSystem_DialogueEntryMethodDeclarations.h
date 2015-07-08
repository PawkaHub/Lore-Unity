#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct DialogEntry_t1425;
// PixelCrushers.DialogueSystem.Field
struct Field_t1406;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>
struct List_1_t1402;

// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor()
extern "C" void DialogueEntry__ctor_m6091 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.ChatMapper.DialogEntry)
extern "C" void DialogueEntry__ctor_m6092 (DialogueEntry_t1361 * __this, DialogEntry_t1425 * ___chatMapperDialogEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueEntry__ctor_m6093 (DialogueEntry_t1361 * __this, DialogueEntry_t1361 * ___sourceEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ActorID()
extern "C" int32_t DialogueEntry_get_ActorID_m6094 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ActorID(System.Int32)
extern "C" void DialogueEntry_set_ActorID_m6095 (DialogueEntry_t1361 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ConversantID()
extern "C" int32_t DialogueEntry_get_ConversantID_m6096 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ConversantID(System.Int32)
extern "C" void DialogueEntry_set_ConversantID_m6097 (DialogueEntry_t1361 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Title()
extern "C" String_t* DialogueEntry_get_Title_m6098 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Title(System.String)
extern "C" void DialogueEntry_set_Title_m6099 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_MenuText()
extern "C" String_t* DialogueEntry_get_MenuText_m6100 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_MenuText(System.String)
extern "C" void DialogueEntry_set_MenuText_m6101 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentMenuTextField()
extern "C" Field_t1406 * DialogueEntry_GetCurrentMenuTextField_m6102 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultMenuText()
extern "C" String_t* DialogueEntry_get_DefaultMenuText_m6103 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultMenuText(System.String)
extern "C" void DialogueEntry_set_DefaultMenuText_m6104 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedMenuText()
extern "C" String_t* DialogueEntry_get_LocalizedMenuText_m6105 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedMenuText(System.String)
extern "C" void DialogueEntry_set_LocalizedMenuText_m6106 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DialogueText()
extern "C" String_t* DialogueEntry_get_DialogueText_m6107 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DialogueText(System.String)
extern "C" void DialogueEntry_set_DialogueText_m6108 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentDialogueTextField()
extern "C" Field_t1406 * DialogueEntry_GetCurrentDialogueTextField_m6109 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultDialogueText()
extern "C" String_t* DialogueEntry_get_DefaultDialogueText_m6110 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultDialogueText(System.String)
extern "C" void DialogueEntry_set_DefaultDialogueText_m6111 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedDialogueText()
extern "C" String_t* DialogueEntry_get_LocalizedDialogueText_m6112 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedDialogueText(System.String)
extern "C" void DialogueEntry_set_LocalizedDialogueText_m6113 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_SubtitleText()
extern "C" String_t* DialogueEntry_get_SubtitleText_m6114 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseButtonText()
extern "C" String_t* DialogueEntry_get_ResponseButtonText_m6115 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Sequence()
extern "C" String_t* DialogueEntry_get_Sequence_m6116 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Sequence(System.String)
extern "C" void DialogueEntry_set_Sequence_m6117 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentSequenceField()
extern "C" Field_t1406 * DialogueEntry_GetCurrentSequenceField_m6118 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentSequenceField_m6119 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultSequence()
extern "C" String_t* DialogueEntry_get_DefaultSequence_m6120 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultSequence(System.String)
extern "C" void DialogueEntry_set_DefaultSequence_m6121 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedSequence()
extern "C" String_t* DialogueEntry_get_LocalizedSequence_m6122 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedSequence_m6123 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetSequenceField(System.String,System.String)
extern "C" void DialogueEntry_SetSequenceField_m6124 (DialogueEntry_t1361 * __this, String_t* ___title, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::HasResponseMenuSequence()
extern "C" bool DialogueEntry_HasResponseMenuSequence_m6125 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_ResponseMenuSequence_m6126 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_ResponseMenuSequence_m6127 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentResponseMenuSequenceField()
extern "C" Field_t1406 * DialogueEntry_GetCurrentResponseMenuSequenceField_m6128 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentResponseMenuSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentResponseMenuSequenceField_m6129 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_DefaultResponseMenuSequence_m6130 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_DefaultResponseMenuSequence_m6131 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_LocalizedResponseMenuSequence_m6132 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedResponseMenuSequence_m6133 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_VideoFile()
extern "C" String_t* DialogueEntry_get_VideoFile_m6134 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_VideoFile(System.String)
extern "C" void DialogueEntry_set_VideoFile_m6135 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AudioFiles()
extern "C" String_t* DialogueEntry_get_AudioFiles_m6136 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AudioFiles(System.String)
extern "C" void DialogueEntry_set_AudioFiles_m6137 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AnimationFiles()
extern "C" String_t* DialogueEntry_get_AnimationFiles_m6138 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AnimationFiles(System.String)
extern "C" void DialogueEntry_set_AnimationFiles_m6139 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LipsyncFiles()
extern "C" String_t* DialogueEntry_get_LipsyncFiles_m6140 (DialogueEntry_t1361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LipsyncFiles(System.String)
extern "C" void DialogueEntry_set_LipsyncFiles_m6141 (DialogueEntry_t1361 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link> PixelCrushers.DialogueSystem.DialogueEntry::CopyLinks(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>)
extern "C" List_1_t1402 * DialogueEntry_CopyLinks_m6142 (DialogueEntry_t1361 * __this, List_1_t1402 * ___sourceLinks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
