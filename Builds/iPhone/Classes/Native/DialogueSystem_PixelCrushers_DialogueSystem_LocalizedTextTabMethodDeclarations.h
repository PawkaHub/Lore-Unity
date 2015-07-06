#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.LocalizedTextTable::.ctor()
extern "C" void LocalizedTextTable__ctor_m5227 (LocalizedTextTable_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LocalizedTextTable::get_Item(System.String)
extern "C" String_t* LocalizedTextTable_get_Item_m2859 (LocalizedTextTable_t252 * __this, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LocalizedTextTable::ContainsField(System.String)
extern "C" bool LocalizedTextTable_ContainsField_m2857 (LocalizedTextTable_t252 * __this, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LocalizedTextTable::GetText(System.String)
extern "C" String_t* LocalizedTextTable_GetText_m5228 (LocalizedTextTable_t252 * __this, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.LocalizedTextTable::GetLanguageIndex()
extern "C" int32_t LocalizedTextTable_GetLanguageIndex_m5229 (LocalizedTextTable_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
