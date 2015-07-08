﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
extern "C" void XmlTypeMapping__ctor_m12081 (XmlTypeMapping_t4003 * __this, String_t* ___elementName, String_t* ___ns, TypeData_t3954 * ___typeData, String_t* ___xmlType, String_t* ___xmlTypeNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
extern "C" String_t* XmlTypeMapping_get_TypeFullName_m12082 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
extern "C" TypeData_t3954 * XmlTypeMapping_get_TypeData_m12083 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
extern "C" String_t* XmlTypeMapping_get_XmlType_m12084 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
extern "C" void XmlTypeMapping_set_XmlType_m12085 (XmlTypeMapping_t4003 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
extern "C" String_t* XmlTypeMapping_get_XmlTypeNamespace_m12086 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
extern "C" void XmlTypeMapping_set_XmlTypeNamespace_m12087 (XmlTypeMapping_t4003 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
extern "C" ArrayList_t3935 * XmlTypeMapping_get_DerivedTypes_m12088 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
extern "C" bool XmlTypeMapping_get_MultiReferenceType_m12089 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
extern "C" XmlTypeMapping_t4003 * XmlTypeMapping_get_BaseMap_m12090 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlTypeMapping_set_BaseMap_m12091 (XmlTypeMapping_t4003 * __this, XmlTypeMapping_t4003 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
extern "C" void XmlTypeMapping_set_IncludeInSchema_m12092 (XmlTypeMapping_t4003 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
extern "C" bool XmlTypeMapping_get_IsNullable_m12093 (XmlTypeMapping_t4003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
extern "C" void XmlTypeMapping_set_IsNullable_m12094 (XmlTypeMapping_t4003 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealTypeMap(System.Type)
extern "C" XmlTypeMapping_t4003 * XmlTypeMapping_GetRealTypeMap_m12095 (XmlTypeMapping_t4003 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
extern "C" XmlTypeMapping_t4003 * XmlTypeMapping_GetRealElementMap_m12096 (XmlTypeMapping_t4003 * __this, String_t* ___name, String_t* ___ens, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
extern "C" void XmlTypeMapping_UpdateRoot_m12097 (XmlTypeMapping_t4003 * __this, XmlQualifiedName_t3923 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
