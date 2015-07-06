#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ClassMap
struct ClassMap_t3763;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t3791;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t3792;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t3793;
// System.Collections.ICollection
struct ICollection_t680;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3782;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3685;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t3788;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t3785;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3783;

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C" void ClassMap__ctor_m11680 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C" void ClassMap_AddMember_m11681 (ClassMap_t3763 * __this, XmlTypeMapMember_t3782 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C" void ClassMap_RegisterFlatList_m11682 (ClassMap_t3763 * __this, XmlTypeMapMemberExpandable_t3788 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C" XmlTypeMapMemberAttribute_t3785 * ClassMap_GetAttribute_m11683 (ClassMap_t3763 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C" XmlTypeMapElementInfo_t3783 * ClassMap_GetElement_m11684 (ClassMap_t3763 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C" XmlTypeMapElementInfo_t3783 * ClassMap_GetElement_m11685 (ClassMap_t3763 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C" String_t* ClassMap_BuildKey_m11686 (ClassMap_t3763 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C" XmlTypeMapMemberAnyElement_t3791 * ClassMap_get_DefaultAnyElementMember_m11687 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C" XmlTypeMapMemberAnyAttribute_t3792 * ClassMap_get_DefaultAnyAttributeMember_m11688 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C" XmlTypeMapMemberNamespaces_t3793 * ClassMap_get_NamespaceDeclarations_m11689 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
extern "C" Object_t * ClassMap_get_AttributeMembers_m11690 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C" Object_t * ClassMap_get_ElementMembers_m11691 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C" ArrayList_t3697 * ClassMap_get_AllMembers_m11692 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C" ArrayList_t3697 * ClassMap_get_FlatLists_m11693 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C" ArrayList_t3697 * ClassMap_get_ListMembers_m11694 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C" XmlTypeMapMember_t3782 * ClassMap_get_XmlTextCollector_m11695 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C" XmlTypeMapMember_t3782 * ClassMap_get_ReturnMember_m11696 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C" XmlQualifiedName_t3685 * ClassMap_get_SimpleContentBaseType_m11697 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C" void ClassMap_SetCanBeSimpleType_m11698 (ClassMap_t3763 * __this, bool ___can, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C" bool ClassMap_get_HasSimpleContent_m11699 (ClassMap_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
