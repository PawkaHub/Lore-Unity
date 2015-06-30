#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2247;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.String
struct String_t;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C" void XmlSchemaDatatype__ctor_m9851 (XmlSchemaDatatype_t2247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C" void XmlSchemaDatatype__cctor_m9852 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType()
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaDatatype_t2247 * XmlSchemaDatatype_FromName_m9853 (Object_t * __this /* static, unused */, XmlQualifiedName_t2301 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C" XmlSchemaDatatype_t2247 * XmlSchemaDatatype_FromName_m9854 (Object_t * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
