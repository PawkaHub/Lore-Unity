#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t2362;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t2341;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1141;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t2347;
// System.Collections.ICollection
struct ICollection_t661;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t2396;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t2363;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t2398;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t2400;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C" void XmlReflectionImporter__ctor_m10039 (XmlReflectionImporter_t2362 * __this, XmlAttributeOverrides_t2341 * ___attributeOverrides, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C" void XmlReflectionImporter__cctor_m10040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportTypeMapping_m10041 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportTypeMapping_m10042 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportTypeMapping_m10043 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportTypeMapping_m10044 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_CreateTypeMapping_m10045 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultXmlType, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportClassMapping_m10046 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportClassMapping_m10047 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlReflectionImporter_RegisterDerivedMap_m10048 (XmlReflectionImporter_t2362 * __this, XmlTypeMapping_t2379 * ___map, XmlTypeMapping_t2379 * ___derivedMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" String_t* XmlReflectionImporter_GetTypeNamespace_m10049 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportListMapping_m10050 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, XmlAttributes_t2347 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportListMapping_m10051 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, XmlAttributes_t2347 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportXmlNodeMapping_m10052 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportPrimitiveMapping_m10053 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportEnumMapping_m10054 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t2379 * XmlReflectionImporter_ImportXmlSerializableMapping_m10055 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C" void XmlReflectionImporter_ImportIncludedTypes_m10056 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C" Object_t * XmlReflectionImporter_GetReflectionMembers_m10057 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C" XmlTypeMapMember_t2396 * XmlReflectionImporter_CreateMapMember_m10058 (XmlReflectionImporter_t2362 * __this, Type_t * ___declaringType, XmlReflectionMember_t2363 * ___rmember, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t2398 * XmlReflectionImporter_ImportElementInfo_m10059 (XmlReflectionImporter_t2362 * __this, Type_t * ___cls, String_t* ___defaultName, String_t* ___defaultNamespace, Type_t * ___defaultType, XmlTypeMapMemberElement_t2400 * ___member, XmlAttributes_t2347 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t2398 * XmlReflectionImporter_ImportAnyElementInfo_m10060 (XmlReflectionImporter_t2362 * __this, String_t* ___defaultNamespace, XmlReflectionMember_t2363 * ___rmember, XmlTypeMapMemberElement_t2400 * ___member, XmlAttributes_t2347 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C" void XmlReflectionImporter_ImportTextElementInfo_m10061 (XmlReflectionImporter_t2362 * __this, XmlTypeMapElementInfoList_t2398 * ___list, Type_t * ___defaultType, XmlTypeMapMemberElement_t2400 * ___member, XmlAttributes_t2347 * ___atts, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C" bool XmlReflectionImporter_CanBeNull_m10062 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C" void XmlReflectionImporter_IncludeType_m10063 (XmlReflectionImporter_t2362 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C" Object_t * XmlReflectionImporter_GetDefaultValue_m10064 (XmlReflectionImporter_t2362 * __this, TypeData_t2331 * ___typeData, Object_t * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
