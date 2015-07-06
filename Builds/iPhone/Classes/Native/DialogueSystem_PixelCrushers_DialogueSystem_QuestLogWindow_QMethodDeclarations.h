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
struct FormattedText_t572;
// PixelCrushers.DialogueSystem.FormattedText[]
struct FormattedTextU5BU5D_t643;
// PixelCrushers.DialogueSystem.QuestState[]
struct QuestStateU5BU5D_t644;

// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::.ctor(System.String,PixelCrushers.DialogueSystem.FormattedText,PixelCrushers.DialogueSystem.FormattedText,PixelCrushers.DialogueSystem.FormattedText[],PixelCrushers.DialogueSystem.QuestState[],System.Boolean,System.Boolean,System.Boolean)
extern "C" void QuestInfo__ctor_m2892 (QuestInfo_t269 * __this, String_t* ___title, FormattedText_t572 * ___heading, FormattedText_t572 * ___description, FormattedTextU5BU5D_t643* ___entries, QuestStateU5BU5D_t644* ___entryStates, bool ___trackable, bool ___track, bool ___abandonable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Title()
extern "C" String_t* QuestInfo_get_Title_m2881 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Title(System.String)
extern "C" void QuestInfo_set_Title_m6342 (QuestInfo_t269 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Heading()
extern "C" FormattedText_t572 * QuestInfo_get_Heading_m2898 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Heading(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void QuestInfo_set_Heading_m6343 (QuestInfo_t269 * __this, FormattedText_t572 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Description()
extern "C" FormattedText_t572 * QuestInfo_get_Description_m2900 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Description(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void QuestInfo_set_Description_m6344 (QuestInfo_t269 * __this, FormattedText_t572 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FormattedText[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Entries()
extern "C" FormattedTextU5BU5D_t643* QuestInfo_get_Entries_m2902 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Entries(PixelCrushers.DialogueSystem.FormattedText[])
extern "C" void QuestInfo_set_Entries_m6345 (QuestInfo_t269 * __this, FormattedTextU5BU5D_t643* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState[] PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_EntryStates()
extern "C" QuestStateU5BU5D_t644* QuestInfo_get_EntryStates_m2901 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_EntryStates(PixelCrushers.DialogueSystem.QuestState[])
extern "C" void QuestInfo_set_EntryStates_m6346 (QuestInfo_t269 * __this, QuestStateU5BU5D_t644* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Trackable()
extern "C" bool QuestInfo_get_Trackable_m2903 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Trackable(System.Boolean)
extern "C" void QuestInfo_set_Trackable_m6347 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Track()
extern "C" bool QuestInfo_get_Track_m6348 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Track(System.Boolean)
extern "C" void QuestInfo_set_Track_m6349 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::get_Abandonable()
extern "C" bool QuestInfo_get_Abandonable_m2904 (QuestInfo_t269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLogWindow/QuestInfo::set_Abandonable(System.Boolean)
extern "C" void QuestInfo_set_Abandonable_m6350 (QuestInfo_t269 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
