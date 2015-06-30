#pragma once
#include <stdint.h>
// System.Xml.XmlNameTable
struct XmlNameTable_t2314;
// System.Xml.XmlResolver
struct XmlResolver_t2315;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t2300;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t2316  : public Object_t
{
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t2314 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t2315 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t1188 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t2300 * ___settings_3;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t1562  ___CompilationId_4;
};
