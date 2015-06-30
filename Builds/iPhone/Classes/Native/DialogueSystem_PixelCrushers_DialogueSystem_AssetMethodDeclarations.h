#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Asset
struct Asset_t785;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t834;
// PixelCrushers.DialogueSystem.Field
struct Field_t822;

// System.Void PixelCrushers.DialogueSystem.Asset::.ctor()
extern "C" void Asset__ctor_m3683 (Asset_t785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Asset::.ctor(PixelCrushers.DialogueSystem.Asset)
extern "C" void Asset__ctor_m3684 (Asset_t785 * __this, Asset_t785 * ___sourceAsset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Asset::.ctor(System.Int32,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>)
extern "C" void Asset__ctor_m3685 (Asset_t785 * __this, int32_t ___chatMapperID, List_1_t834 * ___chatMapperFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Asset::get_Name()
extern "C" String_t* Asset_get_Name_m3686 (Asset_t785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Asset::set_Name(System.String)
extern "C" void Asset_set_Name_m3687 (Asset_t785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Asset::get_LocalizedName()
extern "C" String_t* Asset_get_LocalizedName_m3688 (Asset_t785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Asset::Assign(System.Int32,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>)
extern "C" void Asset_Assign_m3689 (Asset_t785 * __this, int32_t ___chatMapperID, List_1_t834 * ___chatMapperFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Asset::FieldExists(System.String)
extern "C" bool Asset_FieldExists_m3690 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Asset::LookupValue(System.String)
extern "C" String_t* Asset_LookupValue_m3691 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Asset::LookupLocalizedValue(System.String)
extern "C" String_t* Asset_LookupLocalizedValue_m3692 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Asset::LookupInt(System.String)
extern "C" int32_t Asset_LookupInt_m3693 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Asset::LookupFloat(System.String)
extern "C" float Asset_LookupFloat_m3694 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Asset::LookupBool(System.String)
extern "C" bool Asset_LookupBool_m3695 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Asset::IsFieldAssigned(System.String)
extern "C" bool Asset_IsFieldAssigned_m3696 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.Asset::AssignedField(System.String)
extern "C" Field_t822 * Asset_AssignedField_m3697 (Asset_t785 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
