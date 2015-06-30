#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Serialization.XmlMapping
#include "System_Xml_System_Xml_Serialization_XmlMapping.h"
// System.Xml.Serialization.XmlTypeMapping
struct  XmlTypeMapping_t2379  : public XmlMapping_t2355
{
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlType
	String_t* ___xmlType_7;
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlTypeNamespace
	String_t* ___xmlTypeNamespace_8;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::type
	TypeData_t2331 * ___type_9;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::baseMap
	XmlTypeMapping_t2379 * ___baseMap_10;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::multiReferenceType
	bool ___multiReferenceType_11;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::includeInSchema
	bool ___includeInSchema_12;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::isNullable
	bool ___isNullable_13;
	// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::_derivedTypes
	ArrayList_t1188 * ____derivedTypes_14;
};
