#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3918;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t3924;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.Xml.Serialization.XmlTypeMapping
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping.h"
// System.Xml.Serialization.XmlSerializableMapping
struct  XmlSerializableMapping_t4032  : public XmlTypeMapping_t4003
{
	// System.Xml.Schema.XmlSchema System.Xml.Serialization.XmlSerializableMapping::_schema
	XmlSchema_t3918 * ____schema_15;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Serialization.XmlSerializableMapping::_schemaType
	XmlSchemaComplexType_t3924 * ____schemaType_16;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializableMapping::_schemaTypeName
	XmlQualifiedName_t3923 * ____schemaTypeName_17;
};
