#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.XmlTypeMapMember::.ctor()
extern "C" void XmlTypeMapMember__ctor_m12026 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapMember::get_Name()
extern "C" String_t* XmlTypeMapMember_get_Name_m12027 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Name(System.String)
extern "C" void XmlTypeMapMember_set_Name_m12028 (XmlTypeMapMember_t4020 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::get_DefaultValue()
extern "C" Object_t * XmlTypeMapMember_get_DefaultValue_m12029 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_DefaultValue(System.Object)
extern "C" void XmlTypeMapMember_set_DefaultValue_m12030 (XmlTypeMapMember_t4020 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::IsReadOnly(System.Type)
extern "C" bool XmlTypeMapMember_IsReadOnly_m12031 (XmlTypeMapMember_t4020 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::GetValue(System.Object,System.String)
extern "C" Object_t * XmlTypeMapMember_GetValue_m12032 (Object_t * __this /* static, unused */, Object_t * ___ob, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::GetValue(System.Object)
extern "C" Object_t * XmlTypeMapMember_GetValue_m12033 (XmlTypeMapMember_t4020 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.Object)
extern "C" void XmlTypeMapMember_SetValue_m12034 (XmlTypeMapMember_t4020 * __this, Object_t * ___ob, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.String,System.Object)
extern "C" void XmlTypeMapMember_SetValue_m12035 (Object_t * __this /* static, unused */, Object_t * ___ob, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::InitMember(System.Type)
extern "C" void XmlTypeMapMember_InitMember_m12036 (XmlTypeMapMember_t4020 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMember::get_TypeData()
extern "C" TypeData_t3954 * XmlTypeMapMember_get_TypeData_m12037 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_TypeData(System.Xml.Serialization.TypeData)
extern "C" void XmlTypeMapMember_set_TypeData_m12038 (XmlTypeMapMember_t4020 * __this, TypeData_t3954 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_Index()
extern "C" int32_t XmlTypeMapMember_get_Index_m12039 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Index(System.Int32)
extern "C" void XmlTypeMapMember_set_Index_m12040 (XmlTypeMapMember_t4020 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_GlobalIndex()
extern "C" int32_t XmlTypeMapMember_get_GlobalIndex_m12041 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_GlobalIndex(System.Int32)
extern "C" void XmlTypeMapMember_set_GlobalIndex_m12042 (XmlTypeMapMember_t4020 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsOptionalValueType()
extern "C" bool XmlTypeMapMember_get_IsOptionalValueType_m12043 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsOptionalValueType(System.Boolean)
extern "C" void XmlTypeMapMember_set_IsOptionalValueType_m12044 (XmlTypeMapMember_t4020 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsReturnValue()
extern "C" bool XmlTypeMapMember_get_IsReturnValue_m12045 (XmlTypeMapMember_t4020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsReturnValue(System.Boolean)
extern "C" void XmlTypeMapMember_set_IsReturnValue_m12046 (XmlTypeMapMember_t4020 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::CheckOptionalValueType(System.Type)
extern "C" void XmlTypeMapMember_CheckOptionalValueType_m12047 (XmlTypeMapMember_t4020 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::GetValueSpecified(System.Object)
extern "C" bool XmlTypeMapMember_GetValueSpecified_m12048 (XmlTypeMapMember_t4020 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValueSpecified(System.Object,System.Boolean)
extern "C" void XmlTypeMapMember_SetValueSpecified_m12049 (XmlTypeMapMember_t4020 * __this, Object_t * ___ob, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
