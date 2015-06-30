#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t777;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct DialogEntry_t841;
// PixelCrushers.DialogueSystem.Field
struct Field_t822;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>
struct List_1_t818;

// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor()
extern "C" void DialogueEntry__ctor_m3803 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.ChatMapper.DialogEntry)
extern "C" void DialogueEntry__ctor_m3804 (DialogueEntry_t777 * __this, DialogEntry_t841 * ___chatMapperDialogEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::.ctor(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueEntry__ctor_m3805 (DialogueEntry_t777 * __this, DialogueEntry_t777 * ___sourceEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ActorID()
extern "C" int32_t DialogueEntry_get_ActorID_m3806 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ActorID(System.Int32)
extern "C" void DialogueEntry_set_ActorID_m3807 (DialogueEntry_t777 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueEntry::get_ConversantID()
extern "C" int32_t DialogueEntry_get_ConversantID_m3808 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ConversantID(System.Int32)
extern "C" void DialogueEntry_set_ConversantID_m3809 (DialogueEntry_t777 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Title()
extern "C" String_t* DialogueEntry_get_Title_m3810 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Title(System.String)
extern "C" void DialogueEntry_set_Title_m3811 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_MenuText()
extern "C" String_t* DialogueEntry_get_MenuText_m3812 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_MenuText(System.String)
extern "C" void DialogueEntry_set_MenuText_m3813 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentMenuTextField()
extern "C" Field_t822 * DialogueEntry_GetCurrentMenuTextField_m3814 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultMenuText()
extern "C" String_t* DialogueEntry_get_DefaultMenuText_m3815 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultMenuText(System.String)
extern "C" void DialogueEntry_set_DefaultMenuText_m3816 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedMenuText()
extern "C" String_t* DialogueEntry_get_LocalizedMenuText_m3817 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedMenuText(System.String)
extern "C" void DialogueEntry_set_LocalizedMenuText_m3818 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DialogueText()
extern "C" String_t* DialogueEntry_get_DialogueText_m3819 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DialogueText(System.String)
extern "C" void DialogueEntry_set_DialogueText_m3820 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentDialogueTextField()
extern "C" Field_t822 * DialogueEntry_GetCurrentDialogueTextField_m3821 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultDialogueText()
extern "C" String_t* DialogueEntry_get_DefaultDialogueText_m3822 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultDialogueText(System.String)
extern "C" void DialogueEntry_set_DefaultDialogueText_m3823 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedDialogueText()
extern "C" String_t* DialogueEntry_get_LocalizedDialogueText_m3824 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedDialogueText(System.String)
extern "C" void DialogueEntry_set_LocalizedDialogueText_m3825 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_SubtitleText()
extern "C" String_t* DialogueEntry_get_SubtitleText_m3826 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseButtonText()
extern "C" String_t* DialogueEntry_get_ResponseButtonText_m3827 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_Sequence()
extern "C" String_t* DialogueEntry_get_Sequence_m3828 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_Sequence(System.String)
extern "C" void DialogueEntry_set_Sequence_m3829 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentSequenceField()
extern "C" Field_t822 * DialogueEntry_GetCurrentSequenceField_m3830 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentSequenceField_m3831 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultSequence()
extern "C" String_t* DialogueEntry_get_DefaultSequence_m3832 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultSequence(System.String)
extern "C" void DialogueEntry_set_DefaultSequence_m3833 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedSequence()
extern "C" String_t* DialogueEntry_get_LocalizedSequence_m3834 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedSequence_m3835 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetSequenceField(System.String,System.String)
extern "C" void DialogueEntry_SetSequenceField_m3836 (DialogueEntry_t777 * __this, String_t* ___title, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueEntry::HasResponseMenuSequence()
extern "C" bool DialogueEntry_HasResponseMenuSequence_m3837 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_ResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_ResponseMenuSequence_m3838 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_ResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_ResponseMenuSequence_m3839 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.DialogueEntry::GetCurrentResponseMenuSequenceField()
extern "C" Field_t822 * DialogueEntry_GetCurrentResponseMenuSequenceField_m3840 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::SetCurrentResponseMenuSequenceField(System.String)
extern "C" void DialogueEntry_SetCurrentResponseMenuSequenceField_m3841 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_DefaultResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_DefaultResponseMenuSequence_m3842 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_DefaultResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_DefaultResponseMenuSequence_m3843 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LocalizedResponseMenuSequence()
extern "C" String_t* DialogueEntry_get_LocalizedResponseMenuSequence_m3844 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LocalizedResponseMenuSequence(System.String)
extern "C" void DialogueEntry_set_LocalizedResponseMenuSequence_m3845 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_VideoFile()
extern "C" String_t* DialogueEntry_get_VideoFile_m3846 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_VideoFile(System.String)
extern "C" void DialogueEntry_set_VideoFile_m3847 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AudioFiles()
extern "C" String_t* DialogueEntry_get_AudioFiles_m3848 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AudioFiles(System.String)
extern "C" void DialogueEntry_set_AudioFiles_m3849 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_AnimationFiles()
extern "C" String_t* DialogueEntry_get_AnimationFiles_m3850 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_AnimationFiles(System.String)
extern "C" void DialogueEntry_set_AnimationFiles_m3851 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueEntry::get_LipsyncFiles()
extern "C" String_t* DialogueEntry_get_LipsyncFiles_m3852 (DialogueEntry_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntry::set_LipsyncFiles(System.String)
extern "C" void DialogueEntry_set_LipsyncFiles_m3853 (DialogueEntry_t777 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link> PixelCrushers.DialogueSystem.DialogueEntry::CopyLinks(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>)
extern "C" List_1_t818 * DialogueEntry_CopyLinks_m3854 (DialogueEntry_t777 * __this, List_1_t818 * ___sourceLinks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
