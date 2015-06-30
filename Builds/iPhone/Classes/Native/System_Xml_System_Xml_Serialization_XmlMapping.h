#pragma once
#include <stdint.h>
// System.Xml.Serialization.ObjectMap
struct ObjectMap_t2354;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Serialization.SerializationSource
struct SerializationSource_t2329;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"
// System.Xml.Serialization.XmlMapping
struct  XmlMapping_t2355  : public Object_t
{
	// System.Xml.Serialization.ObjectMap System.Xml.Serialization.XmlMapping::map
	ObjectMap_t2354 * ___map_0;
	// System.Collections.ArrayList System.Xml.Serialization.XmlMapping::relatedMaps
	ArrayList_t1188 * ___relatedMaps_1;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlMapping::format
	int32_t ___format_2;
	// System.Xml.Serialization.SerializationSource System.Xml.Serialization.XmlMapping::source
	SerializationSource_t2329 * ___source_3;
	// System.String System.Xml.Serialization.XmlMapping::_elementName
	String_t* ____elementName_4;
	// System.String System.Xml.Serialization.XmlMapping::_namespace
	String_t* ____namespace_5;
	// System.String System.Xml.Serialization.XmlMapping::key
	String_t* ___key_6;
};
