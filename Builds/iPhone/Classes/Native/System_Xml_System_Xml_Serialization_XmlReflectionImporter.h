﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t2341;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t2327;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlReflectionImporter
struct  XmlReflectionImporter_t2362  : public Object_t
{
	// System.String System.Xml.Serialization.XmlReflectionImporter::initialDefaultNamespace
	String_t* ___initialDefaultNamespace_0;
	// System.Xml.Serialization.XmlAttributeOverrides System.Xml.Serialization.XmlReflectionImporter::attributeOverrides
	XmlAttributeOverrides_t2341 * ___attributeOverrides_1;
	// System.Collections.ArrayList System.Xml.Serialization.XmlReflectionImporter::includedTypes
	ArrayList_t1188 * ___includedTypes_2;
	// System.Xml.Serialization.ReflectionHelper System.Xml.Serialization.XmlReflectionImporter::helper
	ReflectionHelper_t2327 * ___helper_3;
	// System.Int32 System.Xml.Serialization.XmlReflectionImporter::arrayChoiceCount
	int32_t ___arrayChoiceCount_4;
	// System.Collections.ArrayList System.Xml.Serialization.XmlReflectionImporter::relatedMaps
	ArrayList_t1188 * ___relatedMaps_5;
	// System.Boolean System.Xml.Serialization.XmlReflectionImporter::allowPrivateTypes
	bool ___allowPrivateTypes_6;
};
struct XmlReflectionImporter_t2362_StaticFields{
	// System.String System.Xml.Serialization.XmlReflectionImporter::errSimple
	String_t* ___errSimple_7;
	// System.String System.Xml.Serialization.XmlReflectionImporter::errSimple2
	String_t* ___errSimple2_8;
};