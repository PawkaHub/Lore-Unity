#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlTypeMapMember
struct  XmlTypeMapMember_t2396  : public Object_t
{
	// System.String System.Xml.Serialization.XmlTypeMapMember::_name
	String_t* ____name_0;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_index
	int32_t ____index_1;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_globalIndex
	int32_t ____globalIndex_2;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMember::_typeData
	TypeData_t2331 * ____typeData_3;
	// System.Reflection.MemberInfo System.Xml.Serialization.XmlTypeMapMember::_member
	MemberInfo_t * ____member_4;
	// System.Reflection.MemberInfo System.Xml.Serialization.XmlTypeMapMember::_specifiedMember
	MemberInfo_t * ____specifiedMember_5;
	// System.Object System.Xml.Serialization.XmlTypeMapMember::_defaultValue
	Object_t * ____defaultValue_6;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_flags
	int32_t ____flags_7;
};
