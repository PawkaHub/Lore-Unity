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
// System.Xml.Serialization.XmlArrayItemAttribute
struct  XmlArrayItemAttribute_t1460  : public Attribute_t471
{
	// System.String System.Xml.Serialization.XmlArrayItemAttribute::dataType
	String_t* ___dataType_0;
	// System.String System.Xml.Serialization.XmlArrayItemAttribute::elementName
	String_t* ___elementName_1;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlArrayItemAttribute::form
	int32_t ___form_2;
	// System.String System.Xml.Serialization.XmlArrayItemAttribute::ns
	String_t* ___ns_3;
	// System.Boolean System.Xml.Serialization.XmlArrayItemAttribute::isNullable
	bool ___isNullable_4;
	// System.Int32 System.Xml.Serialization.XmlArrayItemAttribute::nestingLevel
	int32_t ___nestingLevel_5;
	// System.Type System.Xml.Serialization.XmlArrayItemAttribute::type
	Type_t * ___type_6;
};
