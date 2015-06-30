#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo
struct QuestInfo_t269;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// PixelCrushers.DialogueSystem.FormattedText[]
struct FormattedTextU5BU5D_t622;
// PixelCrushers.DialogueSystem.QuestState[]
struct QuestStateU5BU5D_t623;

// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::.ctor(System.String,PixelCrushers.DialogueSystem.FormattedText,PixelCrushers.DialogueSystem.FormattedText,PixelCrushers.DialogueSystem.FormattedText[],PixelCrushers.DialogueSystem.QuestState[],System.Boolean,System.Boolean,System.Boolean)
extern "C" void QuestInfo__ctor_m2805 (QuestInfo_t269 * __this, String_t* ___title, FormattedText_t554 * ___heading, FormattedText_t554 * ___description, FormattedTextU5BU5D_t622* ___entries, QuestStateU5BU5D_t623* ___entryStates, bool ___trackable, bool ___track, bool ___abandonable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Title()
extern "C" String_t* QuestInfo_get_Title_m2794 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Title(System.String)
extern "C" void QuestInfo_set_Title_m4496 (QuestInfo_t269 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Heading()
extern "C" FormattedText_t554 * QuestInfo_get_Heading_m2811 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Heading(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void QuestInfo_set_Heading_m4497 (QuestInfo_t269 * __this, FormattedText_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Description()
extern "C" FormattedText_t554 * QuestInfo_get_Description_m2813 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Description(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void QuestInfo_set_Description_m4498 (QuestInfo_t269 * __this, FormattedText_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Entries()
extern "C" FormattedTextU5BU5D_t622* QuestInfo_get_Entries_m2815 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Entries(PixelCrushers.DialogueSystem.FormattedText[])
extern "C" void QuestInfo_set_Entries_m4499 (QuestInfo_t269 * __this, FormattedTextU5BU5D_t622* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_EntryStates()
extern "C" QuestStateU5BU5D_t623* QuestInfo_get_EntryStates_m2814 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_EntryStates(PixelCrushers.DialogueSystem.QuestState[])
extern "C" void QuestInfo_set_EntryStates_m4500 (QuestInfo_t269 * __this, QuestStateU5BU5D_t623* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Trackable()
extern "C" bool QuestInfo_get_Trackable_m2816 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Trackable(System.Boolean)
extern "C" void QuestInfo_set_Trackable_m4501 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Track()
extern "C" bool QuestInfo_get_Track_m4502 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Track(System.Boolean)
extern "C" void QuestInfo_set_Track_m4503 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Abandonable()
extern "C" bool QuestInfo_get_Abandonable_m2817 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Abandonable(System.Boolean)
extern "C" void QuestInfo_set_Abandonable_m4504 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
