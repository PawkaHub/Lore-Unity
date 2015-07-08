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
// System.Xml.Serialization.XmlElementAttribute
struct  XmlElementAttribute_t3973  : public Attribute_t335
{
	// System.String System.Xml.Serialization.XmlElementAttribute::dataType
	String_t* ___dataType_0;
	// System.String System.Xml.Serialization.XmlElementAttribute::elementName
	String_t* ___elementName_1;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::form
	int32_t ___form_2;
	// System.String System.Xml.Serialization.XmlElementAttribute::ns
	String_t* ___ns_3;
	// System.Boolean System.Xml.Serialization.XmlElementAttribute::isNullable
	bool ___isNullable_4;
	// System.Type System.Xml.Serialization.XmlElementAttribute::type
	Type_t * ___type_5;
	// System.Int32 System.Xml.Serialization.XmlElementAttribute::order
	int32_t ___order_6;
};
