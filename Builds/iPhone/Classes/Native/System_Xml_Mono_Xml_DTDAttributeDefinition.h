#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3869;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttributeDefinition
struct  DTDAttributeDefinition_t4057  : public DTDNode_t4047
{
	// System.String Mono.Xml.DTDAttributeDefinition::name
	String_t* ___name_5;
	// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::datatype
	XmlSchemaDatatype_t3869 * ___datatype_6;
	// System.String Mono.Xml.DTDAttributeDefinition::unresolvedDefault
	String_t* ___unresolvedDefault_7;
	// System.String Mono.Xml.DTDAttributeDefinition::resolvedDefaultValue
	String_t* ___resolvedDefaultValue_8;
};
