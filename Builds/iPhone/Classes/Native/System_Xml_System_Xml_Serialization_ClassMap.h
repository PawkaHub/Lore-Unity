#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t1256;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Serialization.XmlTypeMapMemberAttribute[]
struct XmlTypeMapMemberAttributeU5BU5D_t2409;
// System.Xml.Serialization.XmlTypeMapElementInfo[]
struct XmlTypeMapElementInfoU5BU5D_t2410;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2405;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t2406;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t2407;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t2396;
// System.Xml.Serialization.ObjectMap
#include "System_Xml_System_Xml_Serialization_ObjectMap.h"
// System.Xml.Serialization.ClassMap
struct  ClassMap_t2377  : public ObjectMap_t2354
{
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_elements
	Hashtable_t1256 * ____elements_0;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_elementMembers
	ArrayList_t1188 * ____elementMembers_1;
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_attributeMembers
	Hashtable_t1256 * ____attributeMembers_2;
	// System.Xml.Serialization.XmlTypeMapMemberAttribute[] System.Xml.Serialization.ClassMap::_attributeMembersArray
	XmlTypeMapMemberAttributeU5BU5D_t2409* ____attributeMembersArray_3;
	// System.Xml.Serialization.XmlTypeMapElementInfo[] System.Xml.Serialization.ClassMap::_elementsByIndex
	XmlTypeMapElementInfoU5BU5D_t2410* ____elementsByIndex_4;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_flatLists
	ArrayList_t1188 * ____flatLists_5;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_allMembers
	ArrayList_t1188 * ____allMembers_6;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_membersWithDefault
	ArrayList_t1188 * ____membersWithDefault_7;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_listMembers
	ArrayList_t1188 * ____listMembers_8;
	// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::_defaultAnyElement
	XmlTypeMapMemberAnyElement_t2405 * ____defaultAnyElement_9;
	// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::_defaultAnyAttribute
	XmlTypeMapMemberAnyAttribute_t2406 * ____defaultAnyAttribute_10;
	// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::_namespaceDeclarations
	XmlTypeMapMemberNamespaces_t2407 * ____namespaceDeclarations_11;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_xmlTextCollector
	XmlTypeMapMember_t2396 * ____xmlTextCollector_12;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_returnMember
	XmlTypeMapMember_t2396 * ____returnMember_13;
	// System.Boolean System.Xml.Serialization.ClassMap::_ignoreMemberNamespace
	bool ____ignoreMemberNamespace_14;
	// System.Boolean System.Xml.Serialization.ClassMap::_canBeSimpleType
	bool ____canBeSimpleType_15;
};
