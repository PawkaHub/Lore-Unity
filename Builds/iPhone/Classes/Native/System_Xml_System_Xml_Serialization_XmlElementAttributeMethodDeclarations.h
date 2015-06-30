#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t2349;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t619;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
extern "C" void XmlElementAttribute__ctor_m10002 (XmlElementAttribute_t2349 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
extern "C" void XmlElementAttribute__ctor_m10003 (XmlElementAttribute_t2349 * __this, String_t* ___elementName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_DataType()
extern "C" String_t* XmlElementAttribute_get_DataType_m10004 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_ElementName()
extern "C" String_t* XmlElementAttribute_get_ElementName_m10005 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::get_Form()
extern "C" int32_t XmlElementAttribute_get_Form_m10006 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_Namespace()
extern "C" String_t* XmlElementAttribute_get_Namespace_m10007 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlElementAttribute::get_IsNullable()
extern "C" bool XmlElementAttribute_get_IsNullable_m10008 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.XmlElementAttribute::get_Type()
extern "C" Type_t * XmlElementAttribute_get_Type_m10009 (XmlElementAttribute_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
extern "C" void XmlElementAttribute_set_Type_m10010 (XmlElementAttribute_t2349 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlElementAttribute_AddKeyHash_m10011 (XmlElementAttribute_t2349 * __this, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
