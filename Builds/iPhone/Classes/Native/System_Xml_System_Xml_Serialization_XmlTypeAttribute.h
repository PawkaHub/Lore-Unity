#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlTypeAttribute
struct  XmlTypeAttribute_t3970  : public Attribute_t335
{
	// System.Boolean System.Xml.Serialization.XmlTypeAttribute::includeInSchema
	bool ___includeInSchema_0;
	// System.String System.Xml.Serialization.XmlTypeAttribute::ns
	String_t* ___ns_1;
	// System.String System.Xml.Serialization.XmlTypeAttribute::typeName
	String_t* ___typeName_2;
};
