#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeTranslator
struct TypeTranslator_t3956;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
extern "C" void TypeTranslator__cctor_m11636 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
extern "C" TypeData_t3954 * TypeTranslator_GetTypeData_m11637 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
extern "C" TypeData_t3954 * TypeTranslator_GetTypeData_m11638 (Object_t * __this /* static, unused */, Type_t * ___runtimeType, String_t* ___xmlDataType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
extern "C" TypeData_t3954 * TypeTranslator_GetPrimitiveTypeData_m11639 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
extern "C" TypeData_t3954 * TypeTranslator_GetPrimitiveTypeData_m11640 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::FindPrimitiveTypeData(System.String)
extern "C" TypeData_t3954 * TypeTranslator_FindPrimitiveTypeData_m11641 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
extern "C" String_t* TypeTranslator_GetArrayName_m11642 (Object_t * __this /* static, unused */, String_t* ___elemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
extern "C" void TypeTranslator_ParseArrayType_m11643 (Object_t * __this /* static, unused */, String_t* ___arrayType, String_t** ___type, String_t** ___ns, String_t** ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
