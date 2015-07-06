#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.SerializationSource
#include "System_Xml_System_Xml_Serialization_SerializationSource.h"
// System.Xml.Serialization.XmlTypeSerializationSource
struct  XmlTypeSerializationSource_t3715  : public SerializationSource_t3714
{
	// System.String System.Xml.Serialization.XmlTypeSerializationSource::attributeOverridesHash
	String_t* ___attributeOverridesHash_3;
	// System.Type System.Xml.Serialization.XmlTypeSerializationSource::type
	Type_t * ___type_4;
	// System.String System.Xml.Serialization.XmlTypeSerializationSource::rootHash
	String_t* ___rootHash_5;
};
