#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2303;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2310;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m9882 (XmlSchemaType_t2303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t2301 * XmlSchemaType_get_QualifiedName_m9883 (XmlSchemaType_t2303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t2310 * XmlSchemaType_GetBuiltInSimpleType_m9884 (Object_t * __this /* static, unused */, XmlQualifiedName_t2301 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
