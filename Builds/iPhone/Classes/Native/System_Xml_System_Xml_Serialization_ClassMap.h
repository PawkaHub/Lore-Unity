#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t1909;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Xml.Serialization.XmlTypeMapMemberAttribute[]
struct XmlTypeMapMemberAttributeU5BU5D_t4033;
// System.Xml.Serialization.XmlTypeMapElementInfo[]
struct XmlTypeMapElementInfoU5BU5D_t4034;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t4029;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t4030;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t4031;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Xml.Serialization.ObjectMap
#include "System_Xml_System_Xml_Serialization_ObjectMap.h"
// System.Xml.Serialization.ClassMap
struct  ClassMap_t4001  : public ObjectMap_t3978
{
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_elements
	Hashtable_t1909 * ____elements_0;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_elementMembers
	ArrayList_t3935 * ____elementMembers_1;
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_attributeMembers
	Hashtable_t1909 * ____attributeMembers_2;
	// System.Xml.Serialization.XmlTypeMapMemberAttribute[] System.Xml.Serialization.ClassMap::_attributeMembersArray
	XmlTypeMapMemberAttributeU5BU5D_t4033* ____attributeMembersArray_3;
	// System.Xml.Serialization.XmlTypeMapElementInfo[] System.Xml.Serialization.ClassMap::_elementsByIndex
	XmlTypeMapElementInfoU5BU5D_t4034* ____elementsByIndex_4;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_flatLists
	ArrayList_t3935 * ____flatLists_5;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_allMembers
	ArrayList_t3935 * ____allMembers_6;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_membersWithDefault
	ArrayList_t3935 * ____membersWithDefault_7;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_listMembers
	ArrayList_t3935 * ____listMembers_8;
	// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::_defaultAnyElement
	XmlTypeMapMemberAnyElement_t4029 * ____defaultAnyElement_9;
	// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::_defaultAnyAttribute
	XmlTypeMapMemberAnyAttribute_t4030 * ____defaultAnyAttribute_10;
	// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::_namespaceDeclarations
	XmlTypeMapMemberNamespaces_t4031 * ____namespaceDeclarations_11;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_xmlTextCollector
	XmlTypeMapMember_t4020 * ____xmlTextCollector_12;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_returnMember
	XmlTypeMapMember_t4020 * ____returnMember_13;
	// System.Boolean System.Xml.Serialization.ClassMap::_ignoreMemberNamespace
	bool ____ignoreMemberNamespace_14;
	// System.Boolean System.Xml.Serialization.ClassMap::_canBeSimpleType
	bool ____canBeSimpleType_15;
};
