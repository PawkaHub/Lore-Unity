#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlArrayAttribute
struct  XmlArrayAttribute_t1144  : public Attribute_t471
{
	// System.String System.Xml.Serialization.XmlArrayAttribute::elementName
	String_t* ___elementName_0;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlArrayAttribute::form
	int32_t ___form_1;
	// System.Boolean System.Xml.Serialization.XmlArrayAttribute::isNullable
	bool ___isNullable_2;
	// System.String System.Xml.Serialization.XmlArrayAttribute::ns
	String_t* ___ns_3;
	// System.Int32 System.Xml.Serialization.XmlArrayAttribute::order
	int32_t ___order_4;
};
