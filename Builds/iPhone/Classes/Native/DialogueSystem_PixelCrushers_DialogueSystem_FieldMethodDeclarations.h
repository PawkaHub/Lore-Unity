#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Field
struct Field_t822;
// PixelCrushers.DialogueSystem.ChatMapper.Field
struct Field_t844;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t786;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t834;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"

// System.Void PixelCrushers.DialogueSystem.Field::.ctor()
extern "C" void Field__ctor_m3860 (Field_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Field)
extern "C" void Field__ctor_m3861 (Field_t822 * __this, Field_t844 * ___chatMapperField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(System.String,System.String,PixelCrushers.DialogueSystem.FieldType)
extern "C" void Field__ctor_m3862 (Field_t822 * __this, String_t* ___title, String_t* ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(PixelCrushers.DialogueSystem.Field)
extern "C" void Field__ctor_m3863 (Field_t822 * __this, Field_t822 * ___sourceField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.cctor()
extern "C" void Field__cctor_m3864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::Assign(PixelCrushers.DialogueSystem.ChatMapper.Field)
extern "C" void Field_Assign_m3865 (Field_t822 * __this, Field_t844 * ___chatMapperField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Field::StringToFieldType(System.String)
extern "C" int32_t Field_StringToFieldType_m3866 (Object_t * __this /* static, unused */, String_t* ___chatMapperType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field> PixelCrushers.DialogueSystem.Field::CreateListFromChatMapperFields(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>)
extern "C" List_1_t786 * Field_CreateListFromChatMapperFields_m3867 (Object_t * __this /* static, unused */, List_1_t834 * ___chatMapperFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field> PixelCrushers.DialogueSystem.Field::CopyFields(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>)
extern "C" List_1_t786 * Field_CopyFields_m3868 (Object_t * __this /* static, unused */, List_1_t786 * ___sourceFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::FieldExists(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_FieldExists_m3869 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.Field::Lookup(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" Field_t822 * Field_Lookup_m3870 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LookupValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" String_t* Field_LookupValue_m3871 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LookupLocalizedValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" String_t* Field_LookupLocalizedValue_m3872 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Field::LookupInt(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" int32_t Field_LookupInt_m3873 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Field::LookupFloat(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" float Field_LookupFloat_m3874 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::LookupBool(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_LookupBool_m3875 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.String,PixelCrushers.DialogueSystem.FieldType)
extern "C" void Field_SetValue_m3876 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, String_t* ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.String)
extern "C" void Field_SetValue_m3877 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Single)
extern "C" void Field_SetValue_m3878 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Int32)
extern "C" void Field_SetValue_m3879 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Boolean)
extern "C" void Field_SetValue_m3880 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::IsFieldAssigned(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_IsFieldAssigned_m3881 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.Field::AssignedField(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" Field_t822 * Field_AssignedField_m3882 (Object_t * __this /* static, unused */, List_1_t786 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::FieldValue(PixelCrushers.DialogueSystem.Field)
extern "C" String_t* Field_FieldValue_m3883 (Object_t * __this /* static, unused */, Field_t822 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LocalizedTitle(System.String)
extern "C" String_t* Field_LocalizedTitle_m3884 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
