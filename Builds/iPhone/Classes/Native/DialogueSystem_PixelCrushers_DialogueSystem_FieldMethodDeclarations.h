#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Field
struct Field_t1406;
// PixelCrushers.DialogueSystem.ChatMapper.Field
struct Field_t1428;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1370;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>
struct List_1_t1418;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"

// System.Void PixelCrushers.DialogueSystem.Field::.ctor()
extern "C" void Field__ctor_m6148 (Field_t1406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Field)
extern "C" void Field__ctor_m6149 (Field_t1406 * __this, Field_t1428 * ___chatMapperField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(System.String,System.String,PixelCrushers.DialogueSystem.FieldType)
extern "C" void Field__ctor_m6150 (Field_t1406 * __this, String_t* ___title, String_t* ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.ctor(PixelCrushers.DialogueSystem.Field)
extern "C" void Field__ctor_m6151 (Field_t1406 * __this, Field_t1406 * ___sourceField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::.cctor()
extern "C" void Field__cctor_m6152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::Assign(PixelCrushers.DialogueSystem.ChatMapper.Field)
extern "C" void Field_Assign_m6153 (Field_t1406 * __this, Field_t1428 * ___chatMapperField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Field::StringToFieldType(System.String)
extern "C" int32_t Field_StringToFieldType_m6154 (Object_t * __this /* static, unused */, String_t* ___chatMapperType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field> PixelCrushers.DialogueSystem.Field::CreateListFromChatMapperFields(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.ChatMapper.Field>)
extern "C" List_1_t1370 * Field_CreateListFromChatMapperFields_m6155 (Object_t * __this /* static, unused */, List_1_t1418 * ___chatMapperFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field> PixelCrushers.DialogueSystem.Field::CopyFields(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>)
extern "C" List_1_t1370 * Field_CopyFields_m6156 (Object_t * __this /* static, unused */, List_1_t1370 * ___sourceFields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::FieldExists(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_FieldExists_m6157 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.Field::Lookup(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" Field_t1406 * Field_Lookup_m6158 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LookupValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" String_t* Field_LookupValue_m6159 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LookupLocalizedValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" String_t* Field_LookupLocalizedValue_m6160 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Field::LookupInt(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" int32_t Field_LookupInt_m6161 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Field::LookupFloat(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" float Field_LookupFloat_m6162 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::LookupBool(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_LookupBool_m6163 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.String,PixelCrushers.DialogueSystem.FieldType)
extern "C" void Field_SetValue_m6164 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, String_t* ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.String)
extern "C" void Field_SetValue_m6165 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Single)
extern "C" void Field_SetValue_m6166 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Int32)
extern "C" void Field_SetValue_m6167 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Field::SetValue(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String,System.Boolean)
extern "C" void Field_SetValue_m6168 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Field::IsFieldAssigned(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" bool Field_IsFieldAssigned_m6169 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Field PixelCrushers.DialogueSystem.Field::AssignedField(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" Field_t1406 * Field_AssignedField_m6170 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::FieldValue(PixelCrushers.DialogueSystem.Field)
extern "C" String_t* Field_FieldValue_m6171 (Object_t * __this /* static, unused */, Field_t1406 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Field::LocalizedTitle(System.String)
extern "C" String_t* Field_LocalizedTitle_m6172 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
