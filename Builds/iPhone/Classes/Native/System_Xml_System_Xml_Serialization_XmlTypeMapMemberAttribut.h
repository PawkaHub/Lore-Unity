#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3765;
// System.Xml.Serialization.XmlTypeMapMember
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMember.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct  XmlTypeMapMemberAttribute_t3785  : public XmlTypeMapMember_t3782
{
	// System.String System.Xml.Serialization.XmlTypeMapMemberAttribute::_attributeName
	String_t* ____attributeName_8;
	// System.String System.Xml.Serialization.XmlTypeMapMemberAttribute::_namespace
	String_t* ____namespace_9;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlTypeMapMemberAttribute::_form
	int32_t ____form_10;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapMemberAttribute::_mappedType
	XmlTypeMapping_t3765 * ____mappedType_11;
};
