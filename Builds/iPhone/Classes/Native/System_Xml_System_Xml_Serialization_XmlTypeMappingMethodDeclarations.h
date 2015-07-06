#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3765;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3685;

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
extern "C" void XmlTypeMapping__ctor_m11662 (XmlTypeMapping_t3765 * __this, String_t* ___elementName, String_t* ___ns, TypeData_t3716 * ___typeData, String_t* ___xmlType, String_t* ___xmlTypeNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
extern "C" String_t* XmlTypeMapping_get_TypeFullName_m11663 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
extern "C" TypeData_t3716 * XmlTypeMapping_get_TypeData_m11664 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
extern "C" String_t* XmlTypeMapping_get_XmlType_m11665 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
extern "C" void XmlTypeMapping_set_XmlType_m11666 (XmlTypeMapping_t3765 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
extern "C" String_t* XmlTypeMapping_get_XmlTypeNamespace_m11667 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
extern "C" void XmlTypeMapping_set_XmlTypeNamespace_m11668 (XmlTypeMapping_t3765 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
extern "C" ArrayList_t3697 * XmlTypeMapping_get_DerivedTypes_m11669 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
extern "C" bool XmlTypeMapping_get_MultiReferenceType_m11670 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
extern "C" XmlTypeMapping_t3765 * XmlTypeMapping_get_BaseMap_m11671 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlTypeMapping_set_BaseMap_m11672 (XmlTypeMapping_t3765 * __this, XmlTypeMapping_t3765 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
extern "C" void XmlTypeMapping_set_IncludeInSchema_m11673 (XmlTypeMapping_t3765 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
extern "C" bool XmlTypeMapping_get_IsNullable_m11674 (XmlTypeMapping_t3765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
extern "C" void XmlTypeMapping_set_IsNullable_m11675 (XmlTypeMapping_t3765 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealTypeMap(System.Type)
extern "C" XmlTypeMapping_t3765 * XmlTypeMapping_GetRealTypeMap_m11676 (XmlTypeMapping_t3765 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
extern "C" XmlTypeMapping_t3765 * XmlTypeMapping_GetRealElementMap_m11677 (XmlTypeMapping_t3765 * __this, String_t* ___name, String_t* ___ens, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
extern "C" void XmlTypeMapping_UpdateRoot_m11678 (XmlTypeMapping_t3765 * __this, XmlQualifiedName_t3685 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
