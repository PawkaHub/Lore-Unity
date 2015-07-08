#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlTypeMapElementInfo
struct  XmlTypeMapElementInfo_t4021  : public Object_t
{
	// System.String System.Xml.Serialization.XmlTypeMapElementInfo::_elementName
	String_t* ____elementName_0;
	// System.String System.Xml.Serialization.XmlTypeMapElementInfo::_namespace
	String_t* ____namespace_1;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlTypeMapElementInfo::_form
	int32_t ____form_2;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlTypeMapElementInfo::_member
	XmlTypeMapMember_t4020 * ____member_3;
	// System.Object System.Xml.Serialization.XmlTypeMapElementInfo::_choiceValue
	Object_t * ____choiceValue_4;
	// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::_isNullable
	bool ____isNullable_5;
	// System.Int32 System.Xml.Serialization.XmlTypeMapElementInfo::_nestingLevel
	int32_t ____nestingLevel_6;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapElementInfo::_mappedType
	XmlTypeMapping_t4003 * ____mappedType_7;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapElementInfo::_type
	TypeData_t3954 * ____type_8;
	// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::_wrappedElement
	bool ____wrappedElement_9;
};
