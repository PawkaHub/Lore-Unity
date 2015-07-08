﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3936;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t1668;
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C" void TypeData__ctor_m11611 (TypeData_t3954 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C" void TypeData__ctor_m11612 (TypeData_t3954 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t3954 * ___mappedType, XmlSchemaPatternFacet_t3936 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C" void TypeData__cctor_m11613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_TypeName()
extern "C" String_t* TypeData_get_TypeName_m11614 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C" String_t* TypeData_get_XmlType_m11615 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C" Type_t * TypeData_get_Type_m11616 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_FullTypeName()
extern "C" String_t* TypeData_get_FullTypeName_m11617 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C" int32_t TypeData_get_SchemaType_m11618 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C" bool TypeData_get_IsListType_m11619 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsComplexType()
extern "C" bool TypeData_get_IsComplexType_m11620 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsValueType()
extern "C" bool TypeData_get_IsValueType_m11621 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsNullable()
extern "C" bool TypeData_get_IsNullable_m11622 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C" void TypeData_set_IsNullable_m11623 (TypeData_t3954 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C" TypeData_t3954 * TypeData_get_ListItemTypeData_m11624 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C" Type_t * TypeData_get_ListItemType_m11625 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsXsdType()
extern "C" bool TypeData_get_IsXsdType_m11626 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_HasPublicConstructor()
extern "C" bool TypeData_get_HasPublicConstructor_m11627 (TypeData_t3954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C" PropertyInfo_t * TypeData_GetIndexerProperty_m11628 (Object_t * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C" InvalidOperationException_t1668 * TypeData_CreateMissingAddMethodException_m11629 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C" Type_t * TypeData_GetGenericListItemType_m11630 (TypeData_t3954 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
