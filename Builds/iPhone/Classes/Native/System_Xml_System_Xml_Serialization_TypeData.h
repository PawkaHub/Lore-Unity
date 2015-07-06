#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3698;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"
// System.Xml.Serialization.TypeData
struct  TypeData_t3716  : public Object_t
{
	// System.Type System.Xml.Serialization.TypeData::type
	Type_t * ___type_0;
	// System.String System.Xml.Serialization.TypeData::elementName
	String_t* ___elementName_1;
	// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::sType
	int32_t ___sType_2;
	// System.Type System.Xml.Serialization.TypeData::listItemType
	Type_t * ___listItemType_3;
	// System.String System.Xml.Serialization.TypeData::typeName
	String_t* ___typeName_4;
	// System.String System.Xml.Serialization.TypeData::fullTypeName
	String_t* ___fullTypeName_5;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::listItemTypeData
	TypeData_t3716 * ___listItemTypeData_6;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::mappedType
	TypeData_t3716 * ___mappedType_7;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Serialization.TypeData::facet
	XmlSchemaPatternFacet_t3698 * ___facet_8;
	// System.Boolean System.Xml.Serialization.TypeData::hasPublicConstructor
	bool ___hasPublicConstructor_9;
	// System.Boolean System.Xml.Serialization.TypeData::nullableOverride
	bool ___nullableOverride_10;
};
struct TypeData_t3716_StaticFields{
	// System.String[] System.Xml.Serialization.TypeData::keywords
	StringU5BU5D_t20* ___keywords_11;
};
