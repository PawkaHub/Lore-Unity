#pragma once
#include <stdint.h>
// System.Xml.XmlAttribute
struct XmlAttribute_t2339;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.XmlAttributeEventArgs
struct  XmlAttributeEventArgs_t2340  : public EventArgs_t877
{
	// System.Xml.XmlAttribute System.Xml.Serialization.XmlAttributeEventArgs::attr
	XmlAttribute_t2339 * ___attr_1;
	// System.Int32 System.Xml.Serialization.XmlAttributeEventArgs::lineNumber
	int32_t ___lineNumber_2;
	// System.Int32 System.Xml.Serialization.XmlAttributeEventArgs::linePosition
	int32_t ___linePosition_3;
	// System.Object System.Xml.Serialization.XmlAttributeEventArgs::obj
	Object_t * ___obj_4;
	// System.String System.Xml.Serialization.XmlAttributeEventArgs::expectedAttributes
	String_t* ___expectedAttributes_5;
};
