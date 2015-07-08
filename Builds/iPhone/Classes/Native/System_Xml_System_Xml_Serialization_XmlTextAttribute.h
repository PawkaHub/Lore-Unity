#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlTextAttribute
struct  XmlTextAttribute_t3969  : public Attribute_t335
{
	// System.String System.Xml.Serialization.XmlTextAttribute::dataType
	String_t* ___dataType_0;
	// System.Type System.Xml.Serialization.XmlTextAttribute::type
	Type_t * ___type_1;
};
