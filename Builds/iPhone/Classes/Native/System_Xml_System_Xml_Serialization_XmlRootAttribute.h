#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlRootAttribute
struct  XmlRootAttribute_t1458  : public Attribute_t471
{
	// System.String System.Xml.Serialization.XmlRootAttribute::dataType
	String_t* ___dataType_0;
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_1;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_2;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_3;
};
