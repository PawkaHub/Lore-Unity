#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Xml.Serialization.XmlSerializerImplementation
struct XmlSerializerImplementation_t2389;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializer/SerializerData
struct  SerializerData_t2390  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::ReaderType
	Type_t * ___ReaderType_0;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::ReaderMethod
	MethodInfo_t * ___ReaderMethod_1;
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::WriterType
	Type_t * ___WriterType_2;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::WriterMethod
	MethodInfo_t * ___WriterMethod_3;
	// System.Xml.Serialization.XmlSerializerImplementation System.Xml.Serialization.XmlSerializer/SerializerData::Implementation
	XmlSerializerImplementation_t2389 * ___Implementation_4;
};
