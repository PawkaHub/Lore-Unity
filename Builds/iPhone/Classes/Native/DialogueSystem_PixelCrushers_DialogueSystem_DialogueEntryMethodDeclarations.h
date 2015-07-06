#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct DialogEntry_t1166;
// PixelCrushers.DialogueSystem.Field
struct Field_t1147;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>
struct List_1_t1143;

// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor()
extern "C" void DialogueEntry__ctor_m5639 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.ChatMapper.DialogEntry)
extern "C" void DialogueEntry__ctor_m5640 (DialogueEntry_t1102 * __this, DialogEntry_t1166 * ___chatMapperDialogEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueEntry__ctor_m5641 (DialogueEntry_t1102 * __this, DialogueEntry_t1102 * ___sourceEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ActorID()
extern "C" int32_t DialogueEntry_get_ActorID_m5642 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ActorID(System.Int32)
extern "C" void DialogueEntry_set_ActorID_m5643 (DialogueEntry_t1102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ConversantID()
extern "C" int32_t DialogueEntry_get_ConversantID_m5644 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ConversantID(System.Int32)
extern "C" void DialogueEntry_set_ConversantID_m5645 (DialogueEntry_t1102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Title()
extern "C" String_t* DialogueEntry_get_Title_m5646 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Title(System.String)
extern "C" void DialogueEntry_set_Title_m5647 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_MenuText()
extern "C" String_t* DialogueEntry_get_MenuText_m5648 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_MenuText(System.String)
extern "C" void DialogueEntry_set_MenuText_m5649 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentMenuTextField()
extern "C" Field_t1147 * DialogueEntry_GetCurrentMenuTextField_m5650 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultMenuText()
extern "C" String_t* DialogueEntry_get_DefaultMenuText_m5651 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultMenuText(System.String)
extern "C" void DialogueEntry_set_DefaultMenuText_m5652 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedMenuText()
extern "C" String_t* DialogueEntry_get_LocalizedMenuText_m5653 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedMenuText(System.String)
extern "C" void DialogueEntry_set_LocalizedMenuText_m5654 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DialogueText()
extern "C" String_t* DialogueEntry_get_DialogueText_m5655 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DialogueText(System.String)
extern "C" void DialogueEntry_set_DialogueText_m5656 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentDialogueTextField()
extern "C" Field_t1147 * DialogueEntry_GetCurrentDialogueTextField_m5657 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultDialogueText()
extern "C" String_t* DialogueEntry_get_DefaultDialogueText_m5658 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultDialogueText(System.String)
extern "C" void DialogueEntry_set_DefaultDialogueText_m5659 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedDialogueText()
extern "C" String_t* DialogueEntry_get_LocalizedDialogueText_m5660 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedDialogueText(System.String)
extern "C" void DialogueEntry_set_LocalizedDialogueText_m5661 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_SubtitleText()
extern "C" String_t* DialogueEntry_get_SubtitleText_m5662 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseButtonText()
extern "C" String_t* DialogueEntry_get_ResponseButtonText_m5663 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Sequence()
extern "C" String_t* DialogueEntry_get_Sequence_m5664 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Sequence(System.String)
extern "C" void DialogueEntry_set_Sequence_m5665 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentSequenceField()
extern "C" Field_t1147 * DialogueEntry_GetCurrentSequenceField_m5666 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentSequenceField_m5667 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultSequence()
extern "C" String_t* DialogueEntry_get_DefaultSequence_m5668 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultSequence(System.String)
extern "C" void DialogueEntry_set_DefaultSequence_m5669 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedSequence()
extern "C" String_t* DialogueEntry_get_LocalizedSequence_m5670 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedSequence_m5671 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetSequenceField(System.String,System.String)
extern "C" void DialogueEntry_SetSequenceField_m5672 (DialogueEntry_t1102 * __this, String_t* ___title, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::HasResponseMenuSequence()
extern "C" bool DialogueEntry_HasResponseMenuSequence_m5673 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_ResponseMenuSequence_m5674 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_ResponseMenuSequence_m5675 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentResponseMenuSequenceField()
extern "C" Field_t1147 * DialogueEntry_GetCurrentResponseMenuSequenceField_m5676 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentResponseMenuSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentResponseMenuSequenceField_m5677 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_DefaultResponseMenuSequence_m5678 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_DefaultResponseMenuSequence_m5679 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_LocalizedResponseMenuSequence_m5680 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedResponseMenuSequence_m5681 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_VideoFile()
extern "C" String_t* DialogueEntry_get_VideoFile_m5682 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_VideoFile(System.String)
extern "C" void DialogueEntry_set_VideoFile_m5683 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AudioFiles()
extern "C" String_t* DialogueEntry_get_AudioFiles_m5684 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AudioFiles(System.String)
extern "C" void DialogueEntry_set_AudioFiles_m5685 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AnimationFiles()
extern "C" String_t* DialogueEntry_get_AnimationFiles_m5686 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AnimationFiles(System.String)
extern "C" void DialogueEntry_set_AnimationFiles_m5687 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LipsyncFiles()
extern "C" String_t* DialogueEntry_get_LipsyncFiles_m5688 (DialogueEntry_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LipsyncFiles(System.String)
extern "C" void DialogueEntry_set_LipsyncFiles_m5689 (DialogueEntry_t1102 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link> PixelCrushers.DialogueSystem.DialogueEntry::CopyLinks(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>)
extern "C" List_1_t1143 * DialogueEntry_CopyLinks_m5690 (DialogueEntry_t1102 * __this, List_1_t1143 * ___sourceLinks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
