#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Variable
struct Variable_t827;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.UserVariable
struct UserVariable_t843;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"

// System.Void PixelCrushers.DialogueSystem.Variable::.ctor()
extern "C" void Variable__ctor_m3901 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::.ctor(PixelCrushers.DialogueSystem.Variable)
extern "C" void Variable__ctor_m3902 (Variable_t827 * __this, Variable_t827 * ___sourceVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::.ctor(PixelCrushers.DialogueSystem.ChatMapper.UserVariable)
extern "C" void Variable__ctor_m3903 (Variable_t827 * __this, UserVariable_t843 * ___chatMapperUserVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Variable::get_InitialValue()
extern "C" String_t* Variable_get_InitialValue_m3904 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialValue(System.String)
extern "C" void Variable_set_InitialValue_m3905 (Variable_t827 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Variable::get_InitialFloatValue()
extern "C" float Variable_get_InitialFloatValue_m3906 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialFloatValue(System.Single)
extern "C" void Variable_set_InitialFloatValue_m3907 (Variable_t827 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Variable::get_InitialBoolValue()
extern "C" bool Variable_get_InitialBoolValue_m3908 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialBoolValue(System.Boolean)
extern "C" void Variable_set_InitialBoolValue_m3909 (Variable_t827 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Variable::get_Type()
extern "C" int32_t Variable_get_Type_m3910 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_Type(PixelCrushers.DialogueSystem.FieldType)
extern "C" void Variable_set_Type_m3911 (Variable_t827 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::Assign(PixelCrushers.DialogueSystem.ChatMapper.UserVariable)
extern "C" void Variable_Assign_m3912 (Variable_t827 * __this, UserVariable_t843 * ___chatMapperUserVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Variable::LookupInitialValueType()
extern "C" int32_t Variable_LookupInitialValueType_m3913 (Variable_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::SetInitialValueType(PixelCrushers.DialogueSystem.FieldType)
extern "C" void Variable_SetInitialValueType_m3914 (Variable_t827 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
