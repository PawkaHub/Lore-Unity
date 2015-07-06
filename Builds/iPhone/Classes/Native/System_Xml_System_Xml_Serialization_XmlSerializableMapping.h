#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3680;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t3686;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3685;
// System.Xml.Serialization.XmlTypeMapping
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping.h"
// System.Xml.Serialization.XmlSerializableMapping
struct  XmlSerializableMapping_t3794  : public XmlTypeMapping_t3765
{
	// System.Xml.Schema.XmlSchema System.Xml.Serialization.XmlSerializableMapping::_schema
	XmlSchema_t3680 * ____schema_15;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Serialization.XmlSerializableMapping::_schemaType
	XmlSchemaComplexType_t3686 * ____schemaType_16;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializableMapping::_schemaTypeName
	XmlQualifiedName_t3685 * ____schemaTypeName_17;
};
