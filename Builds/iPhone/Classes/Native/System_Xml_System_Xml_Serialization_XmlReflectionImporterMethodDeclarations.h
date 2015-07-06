#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t3748;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3727;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3765;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1458;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t3733;
// System.Collections.ICollection
struct ICollection_t680;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3782;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t3749;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t3784;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t3786;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C" void XmlReflectionImporter__ctor_m11323 (XmlReflectionImporter_t3748 * __this, XmlAttributeOverrides_t3727 * ___attributeOverrides, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C" void XmlReflectionImporter__cctor_m11324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportTypeMapping_m11325 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportTypeMapping_m11326 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportTypeMapping_m11327 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportTypeMapping_m11328 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_CreateTypeMapping_m11329 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultXmlType, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportClassMapping_m11330 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportClassMapping_m11331 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlReflectionImporter_RegisterDerivedMap_m11332 (XmlReflectionImporter_t3748 * __this, XmlTypeMapping_t3765 * ___map, XmlTypeMapping_t3765 * ___derivedMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" String_t* XmlReflectionImporter_GetTypeNamespace_m11333 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportListMapping_m11334 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, XmlAttributes_t3733 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportListMapping_m11335 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, XmlAttributes_t3733 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportXmlNodeMapping_m11336 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportPrimitiveMapping_m11337 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportEnumMapping_m11338 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t3765 * XmlReflectionImporter_ImportXmlSerializableMapping_m11339 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C" void XmlReflectionImporter_ImportIncludedTypes_m11340 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C" Object_t * XmlReflectionImporter_GetReflectionMembers_m11341 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C" XmlTypeMapMember_t3782 * XmlReflectionImporter_CreateMapMember_m11342 (XmlReflectionImporter_t3748 * __this, Type_t * ___declaringType, XmlReflectionMember_t3749 * ___rmember, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t3784 * XmlReflectionImporter_ImportElementInfo_m11343 (XmlReflectionImporter_t3748 * __this, Type_t * ___cls, String_t* ___defaultName, String_t* ___defaultNamespace, Type_t * ___defaultType, XmlTypeMapMemberElement_t3786 * ___member, XmlAttributes_t3733 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t3784 * XmlReflectionImporter_ImportAnyElementInfo_m11344 (XmlReflectionImporter_t3748 * __this, String_t* ___defaultNamespace, XmlReflectionMember_t3749 * ___rmember, XmlTypeMapMemberElement_t3786 * ___member, XmlAttributes_t3733 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C" void XmlReflectionImporter_ImportTextElementInfo_m11345 (XmlReflectionImporter_t3748 * __this, XmlTypeMapElementInfoList_t3784 * ___list, Type_t * ___defaultType, XmlTypeMapMemberElement_t3786 * ___member, XmlAttributes_t3733 * ___atts, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C" bool XmlReflectionImporter_CanBeNull_m11346 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C" void XmlReflectionImporter_IncludeType_m11347 (XmlReflectionImporter_t3748 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C" Object_t * XmlReflectionImporter_GetDefaultValue_m11348 (XmlReflectionImporter_t3748 * __this, TypeData_t3716 * ___typeData, Object_t * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
