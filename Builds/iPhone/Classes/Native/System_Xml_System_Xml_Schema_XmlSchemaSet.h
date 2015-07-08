#pragma once
#include <stdint.h>
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.XmlResolver
struct XmlResolver_t3938;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t3922;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t3939  : public Object_t
{
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t3937 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t3938 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t3935 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t3922 * ___settings_3;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t1979  ___CompilationId_4;
};
