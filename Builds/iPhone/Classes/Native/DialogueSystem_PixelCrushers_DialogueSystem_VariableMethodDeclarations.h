#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Variable
struct Variable_t1411;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.UserVariable
struct UserVariable_t1427;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"

// System.Void PixelCrushers.DialogueSystem.Variable::.ctor()
extern "C" void Variable__ctor_m6189 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::.ctor(PixelCrushers.DialogueSystem.Variable)
extern "C" void Variable__ctor_m6190 (Variable_t1411 * __this, Variable_t1411 * ___sourceVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::.ctor(PixelCrushers.DialogueSystem.ChatMapper.UserVariable)
extern "C" void Variable__ctor_m6191 (Variable_t1411 * __this, UserVariable_t1427 * ___chatMapperUserVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Variable::get_InitialValue()
extern "C" String_t* Variable_get_InitialValue_m6192 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialValue(System.String)
extern "C" void Variable_set_InitialValue_m6193 (Variable_t1411 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Variable::get_InitialFloatValue()
extern "C" float Variable_get_InitialFloatValue_m6194 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialFloatValue(System.Single)
extern "C" void Variable_set_InitialFloatValue_m6195 (Variable_t1411 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Variable::get_InitialBoolValue()
extern "C" bool Variable_get_InitialBoolValue_m6196 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_InitialBoolValue(System.Boolean)
extern "C" void Variable_set_InitialBoolValue_m6197 (Variable_t1411 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Variable::get_Type()
extern "C" int32_t Variable_get_Type_m6198 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::set_Type(PixelCrushers.DialogueSystem.FieldType)
extern "C" void Variable_set_Type_m6199 (Variable_t1411 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::Assign(PixelCrushers.DialogueSystem.ChatMapper.UserVariable)
extern "C" void Variable_Assign_m6200 (Variable_t1411 * __this, UserVariable_t1427 * ___chatMapperUserVariable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Variable::LookupInitialValueType()
extern "C" int32_t Variable_LookupInitialValueType_m6201 (Variable_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Variable::SetInitialValueType(PixelCrushers.DialogueSystem.FieldType)
extern "C" void Variable_SetInitialValueType_m6202 (Variable_t1411 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
