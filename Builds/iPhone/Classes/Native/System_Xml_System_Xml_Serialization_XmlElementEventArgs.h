#pragma once
#include <stdint.h>
// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.XmlElementEventArgs
struct  XmlElementEventArgs_t3975  : public EventArgs_t1461
{
	// System.Xml.XmlElement System.Xml.Serialization.XmlElementEventArgs::attr
	XmlElement_t3974 * ___attr_1;
	// System.Int32 System.Xml.Serialization.XmlElementEventArgs::lineNumber
	int32_t ___lineNumber_2;
	// System.Int32 System.Xml.Serialization.XmlElementEventArgs::linePosition
	int32_t ___linePosition_3;
	// System.Object System.Xml.Serialization.XmlElementEventArgs::obj
	Object_t * ___obj_4;
	// System.String System.Xml.Serialization.XmlElementEventArgs::expectedElements
	String_t* ___expectedElements_5;
};
