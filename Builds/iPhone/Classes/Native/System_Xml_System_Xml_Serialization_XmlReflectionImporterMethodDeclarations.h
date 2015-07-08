#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t3986;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3965;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1715;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t3971;
// System.Collections.ICollection
struct ICollection_t749;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t3987;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t4022;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t4024;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C" void XmlReflectionImporter__ctor_m11742 (XmlReflectionImporter_t3986 * __this, XmlAttributeOverrides_t3965 * ___attributeOverrides, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C" void XmlReflectionImporter__cctor_m11743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportTypeMapping_m11744 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportTypeMapping_m11745 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportTypeMapping_m11746 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportTypeMapping_m11747 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_CreateTypeMapping_m11748 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultXmlType, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportClassMapping_m11749 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportClassMapping_m11750 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C" void XmlReflectionImporter_RegisterDerivedMap_m11751 (XmlReflectionImporter_t3986 * __this, XmlTypeMapping_t4003 * ___map, XmlTypeMapping_t4003 * ___derivedMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" String_t* XmlReflectionImporter_GetTypeNamespace_m11752 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportListMapping_m11753 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, XmlAttributes_t3971 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportListMapping_m11754 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, XmlAttributes_t3971 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportXmlNodeMapping_m11755 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportPrimitiveMapping_m11756 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportEnumMapping_m11757 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" XmlTypeMapping_t4003 * XmlReflectionImporter_ImportXmlSerializableMapping_m11758 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C" void XmlReflectionImporter_ImportIncludedTypes_m11759 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C" Object_t * XmlReflectionImporter_GetReflectionMembers_m11760 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C" XmlTypeMapMember_t4020 * XmlReflectionImporter_CreateMapMember_m11761 (XmlReflectionImporter_t3986 * __this, Type_t * ___declaringType, XmlReflectionMember_t3987 * ___rmember, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t4022 * XmlReflectionImporter_ImportElementInfo_m11762 (XmlReflectionImporter_t3986 * __this, Type_t * ___cls, String_t* ___defaultName, String_t* ___defaultNamespace, Type_t * ___defaultType, XmlTypeMapMemberElement_t4024 * ___member, XmlAttributes_t3971 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C" XmlTypeMapElementInfoList_t4022 * XmlReflectionImporter_ImportAnyElementInfo_m11763 (XmlReflectionImporter_t3986 * __this, String_t* ___defaultNamespace, XmlReflectionMember_t3987 * ___rmember, XmlTypeMapMemberElement_t4024 * ___member, XmlAttributes_t3971 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C" void XmlReflectionImporter_ImportTextElementInfo_m11764 (XmlReflectionImporter_t3986 * __this, XmlTypeMapElementInfoList_t4022 * ___list, Type_t * ___defaultType, XmlTypeMapMemberElement_t4024 * ___member, XmlAttributes_t3971 * ___atts, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C" bool XmlReflectionImporter_CanBeNull_m11765 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C" void XmlReflectionImporter_IncludeType_m11766 (XmlReflectionImporter_t3986 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C" Object_t * XmlReflectionImporter_GetDefaultValue_m11767 (XmlReflectionImporter_t3986 * __this, TypeData_t3954 * ___typeData, Object_t * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
