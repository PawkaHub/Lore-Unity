﻿#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2355;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Xml.Serialization.XmlSerializationReader
#include "System_Xml_System_Xml_Serialization_XmlSerializationReader.h"
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct  XmlSerializationReaderInterpreter_t2376  : public XmlSerializationReader_t2375
{
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationReaderInterpreter::_typeMap
	XmlMapping_t2355 * ____typeMap_25;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationReaderInterpreter::_format
	int32_t ____format_26;
};
struct XmlSerializationReaderInterpreter_t2376_StaticFields{
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReaderInterpreter::AnyType
	XmlQualifiedName_t2301 * ___AnyType_27;
	// System.Object[] System.Xml.Serialization.XmlSerializationReaderInterpreter::empty_array
	ObjectU5BU5D_t21* ___empty_array_28;
};