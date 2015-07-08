#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t3973;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
extern "C" void XmlElementAttribute__ctor_m11705 (XmlElementAttribute_t3973 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
extern "C" void XmlElementAttribute__ctor_m11706 (XmlElementAttribute_t3973 * __this, String_t* ___elementName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_DataType()
extern "C" String_t* XmlElementAttribute_get_DataType_m11707 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_ElementName()
extern "C" String_t* XmlElementAttribute_get_ElementName_m11708 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::get_Form()
extern "C" int32_t XmlElementAttribute_get_Form_m11709 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_Namespace()
extern "C" String_t* XmlElementAttribute_get_Namespace_m11710 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlElementAttribute::get_IsNullable()
extern "C" bool XmlElementAttribute_get_IsNullable_m11711 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.XmlElementAttribute::get_Type()
extern "C" Type_t * XmlElementAttribute_get_Type_m11712 (XmlElementAttribute_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
extern "C" void XmlElementAttribute_set_Type_m11713 (XmlElementAttribute_t3973 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlElementAttribute_AddKeyHash_m11714 (XmlElementAttribute_t3973 * __this, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
