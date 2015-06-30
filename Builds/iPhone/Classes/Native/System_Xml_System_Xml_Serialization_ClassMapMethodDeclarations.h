#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ClassMap
struct ClassMap_t2377;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2405;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t2406;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t2407;
// System.Collections.ICollection
struct ICollection_t661;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t2396;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t2402;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t2399;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t2397;

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C" void ClassMap__ctor_m10396 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C" void ClassMap_AddMember_m10397 (ClassMap_t2377 * __this, XmlTypeMapMember_t2396 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C" void ClassMap_RegisterFlatList_m10398 (ClassMap_t2377 * __this, XmlTypeMapMemberExpandable_t2402 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C" XmlTypeMapMemberAttribute_t2399 * ClassMap_GetAttribute_m10399 (ClassMap_t2377 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C" XmlTypeMapElementInfo_t2397 * ClassMap_GetElement_m10400 (ClassMap_t2377 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C" XmlTypeMapElementInfo_t2397 * ClassMap_GetElement_m10401 (ClassMap_t2377 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C" String_t* ClassMap_BuildKey_m10402 (ClassMap_t2377 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C" XmlTypeMapMemberAnyElement_t2405 * ClassMap_get_DefaultAnyElementMember_m10403 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C" XmlTypeMapMemberAnyAttribute_t2406 * ClassMap_get_DefaultAnyAttributeMember_m10404 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C" XmlTypeMapMemberNamespaces_t2407 * ClassMap_get_NamespaceDeclarations_m10405 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
extern "C" Object_t * ClassMap_get_AttributeMembers_m10406 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C" Object_t * ClassMap_get_ElementMembers_m10407 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C" ArrayList_t1188 * ClassMap_get_AllMembers_m10408 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C" ArrayList_t1188 * ClassMap_get_FlatLists_m10409 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C" ArrayList_t1188 * ClassMap_get_ListMembers_m10410 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C" XmlTypeMapMember_t2396 * ClassMap_get_XmlTextCollector_m10411 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C" XmlTypeMapMember_t2396 * ClassMap_get_ReturnMember_m10412 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C" XmlQualifiedName_t2301 * ClassMap_get_SimpleContentBaseType_m10413 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C" void ClassMap_SetCanBeSimpleType_m10414 (ClassMap_t2377 * __this, bool ___can, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C" bool ClassMap_get_HasSimpleContent_m10415 (ClassMap_t2377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
