#pragma once
#include <stdint.h>
// System.Xml.XmlNameTable
struct XmlNameTable_t3699;
// System.Xml.XmlResolver
struct XmlResolver_t3700;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t3684;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t3701  : public Object_t
{
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t3699 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t3700 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t3697 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t3684 * ___settings_3;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t1733  ___CompilationId_4;
};
