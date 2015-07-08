#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ClassMap
struct ClassMap_t4001;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t4029;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t4030;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t4031;
// System.Collections.ICollection
struct ICollection_t749;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t4026;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t4023;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4021;

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C" void ClassMap__ctor_m12099 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C" void ClassMap_AddMember_m12100 (ClassMap_t4001 * __this, XmlTypeMapMember_t4020 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C" void ClassMap_RegisterFlatList_m12101 (ClassMap_t4001 * __this, XmlTypeMapMemberExpandable_t4026 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C" XmlTypeMapMemberAttribute_t4023 * ClassMap_GetAttribute_m12102 (ClassMap_t4001 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C" XmlTypeMapElementInfo_t4021 * ClassMap_GetElement_m12103 (ClassMap_t4001 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C" XmlTypeMapElementInfo_t4021 * ClassMap_GetElement_m12104 (ClassMap_t4001 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C" String_t* ClassMap_BuildKey_m12105 (ClassMap_t4001 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C" XmlTypeMapMemberAnyElement_t4029 * ClassMap_get_DefaultAnyElementMember_m12106 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C" XmlTypeMapMemberAnyAttribute_t4030 * ClassMap_get_DefaultAnyAttributeMember_m12107 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C" XmlTypeMapMemberNamespaces_t4031 * ClassMap_get_NamespaceDeclarations_m12108 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
extern "C" Object_t * ClassMap_get_AttributeMembers_m12109 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C" Object_t * ClassMap_get_ElementMembers_m12110 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C" ArrayList_t3935 * ClassMap_get_AllMembers_m12111 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C" ArrayList_t3935 * ClassMap_get_FlatLists_m12112 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C" ArrayList_t3935 * ClassMap_get_ListMembers_m12113 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C" XmlTypeMapMember_t4020 * ClassMap_get_XmlTextCollector_m12114 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C" XmlTypeMapMember_t4020 * ClassMap_get_ReturnMember_m12115 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C" XmlQualifiedName_t3923 * ClassMap_get_SimpleContentBaseType_m12116 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C" void ClassMap_SetCanBeSimpleType_m12117 (ClassMap_t4001 * __this, bool ___can, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C" bool ClassMap_get_HasSimpleContent_m12118 (ClassMap_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
