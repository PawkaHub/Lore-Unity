#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4021;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"

// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::.ctor(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData)
extern "C" void XmlTypeMapElementInfo__ctor_m11998 (XmlTypeMapElementInfo_t4021 * __this, XmlTypeMapMember_t4020 * ___member, TypeData_t3954 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapElementInfo::get_TypeData()
extern "C" TypeData_t3954 * XmlTypeMapElementInfo_get_TypeData_m11999 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapElementInfo::get_ChoiceValue()
extern "C" Object_t * XmlTypeMapElementInfo_get_ChoiceValue_m12000 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_ChoiceValue(System.Object)
extern "C" void XmlTypeMapElementInfo_set_ChoiceValue_m12001 (XmlTypeMapElementInfo_t4021 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapElementInfo::get_ElementName()
extern "C" String_t* XmlTypeMapElementInfo_get_ElementName_m12002 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_ElementName(System.String)
extern "C" void XmlTypeMapElementInfo_set_ElementName_m12003 (XmlTypeMapElementInfo_t4021 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapElementInfo::get_Namespace()
extern "C" String_t* XmlTypeMapElementInfo_get_Namespace_m12004 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_Namespace(System.String)
extern "C" void XmlTypeMapElementInfo_set_Namespace_m12005 (XmlTypeMapElementInfo_t4021 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapElementInfo::get_DataTypeNamespace()
extern "C" String_t* XmlTypeMapElementInfo_get_DataTypeNamespace_m12006 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapElementInfo::get_DataTypeName()
extern "C" String_t* XmlTypeMapElementInfo_get_DataTypeName_m12007 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlTypeMapElementInfo::get_Form()
extern "C" int32_t XmlTypeMapElementInfo_get_Form_m12008 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_Form(System.Xml.Schema.XmlSchemaForm)
extern "C" void XmlTypeMapElementInfo_set_Form_m12009 (XmlTypeMapElementInfo_t4021 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapElementInfo::get_MappedType()
extern "C" XmlTypeMapping_t4003 * XmlTypeMapElementInfo_get_MappedType_m12010 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_MappedType(System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlTypeMapElementInfo_set_MappedType_m12011 (XmlTypeMapElementInfo_t4021 * __this, XmlTypeMapping_t4003 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::get_IsNullable()
extern "C" bool XmlTypeMapElementInfo_get_IsNullable_m12012 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_IsNullable(System.Boolean)
extern "C" void XmlTypeMapElementInfo_set_IsNullable_m12013 (XmlTypeMapElementInfo_t4021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlTypeMapElementInfo::get_Member()
extern "C" XmlTypeMapMember_t4020 * XmlTypeMapElementInfo_get_Member_m12014 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_NestingLevel(System.Int32)
extern "C" void XmlTypeMapElementInfo_set_NestingLevel_m12015 (XmlTypeMapElementInfo_t4021 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::get_MultiReferenceType()
extern "C" bool XmlTypeMapElementInfo_get_MultiReferenceType_m12016 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::get_WrappedElement()
extern "C" bool XmlTypeMapElementInfo_get_WrappedElement_m12017 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_WrappedElement(System.Boolean)
extern "C" void XmlTypeMapElementInfo_set_WrappedElement_m12018 (XmlTypeMapElementInfo_t4021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::get_IsTextElement()
extern "C" bool XmlTypeMapElementInfo_get_IsTextElement_m12019 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_IsTextElement(System.Boolean)
extern "C" void XmlTypeMapElementInfo_set_IsTextElement_m12020 (XmlTypeMapElementInfo_t4021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::get_IsUnnamedAnyElement()
extern "C" bool XmlTypeMapElementInfo_get_IsUnnamedAnyElement_m12021 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapElementInfo::set_IsUnnamedAnyElement(System.Boolean)
extern "C" void XmlTypeMapElementInfo_set_IsUnnamedAnyElement_m12022 (XmlTypeMapElementInfo_t4021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::Equals(System.Object)
extern "C" bool XmlTypeMapElementInfo_Equals_m12023 (XmlTypeMapElementInfo_t4021 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapElementInfo::GetHashCode()
extern "C" int32_t XmlTypeMapElementInfo_GetHashCode_m12024 (XmlTypeMapElementInfo_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
