#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlAttributeAttribute
struct  XmlAttributeAttribute_t1716  : public Attribute_t335
{
	// System.String System.Xml.Serialization.XmlAttributeAttribute::attributeName
	String_t* ___attributeName_0;
	// System.String System.Xml.Serialization.XmlAttributeAttribute::dataType
	String_t* ___dataType_1;
	// System.Type System.Xml.Serialization.XmlAttributeAttribute::type
	Type_t * ___type_2;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlAttributeAttribute::form
	int32_t ___form_3;
	// System.String System.Xml.Serialization.XmlAttributeAttribute::ns
	String_t* ___ns_4;
};
