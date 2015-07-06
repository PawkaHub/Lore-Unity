#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.Serialization.XmlNodeEventArgs
struct  XmlNodeEventArgs_t3747  : public EventArgs_t1202
{
	// System.Int32 System.Xml.Serialization.XmlNodeEventArgs::linenumber
	int32_t ___linenumber_1;
	// System.Int32 System.Xml.Serialization.XmlNodeEventArgs::lineposition
	int32_t ___lineposition_2;
	// System.String System.Xml.Serialization.XmlNodeEventArgs::localname
	String_t* ___localname_3;
	// System.String System.Xml.Serialization.XmlNodeEventArgs::name
	String_t* ___name_4;
	// System.String System.Xml.Serialization.XmlNodeEventArgs::nsuri
	String_t* ___nsuri_5;
	// System.Xml.XmlNodeType System.Xml.Serialization.XmlNodeEventArgs::nodetype
	int32_t ___nodetype_6;
	// System.Object System.Xml.Serialization.XmlNodeEventArgs::source
	Object_t * ___source_7;
	// System.String System.Xml.Serialization.XmlNodeEventArgs::text
	String_t* ___text_8;
};
