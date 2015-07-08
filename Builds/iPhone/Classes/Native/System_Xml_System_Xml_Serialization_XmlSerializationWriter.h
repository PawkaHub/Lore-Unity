#pragma once
#include <stdint.h>
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t4007;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Collections.Queue
struct Queue_t4009;
// System.Collections.Hashtable
struct Hashtable_t1909;
// System.Xml.Serialization.XmlSerializationGeneratedCode
#include "System_Xml_System_Xml_Serialization_XmlSerializationGenerate.h"
// System.Xml.Serialization.XmlSerializationWriter
struct  XmlSerializationWriter_t4010  : public XmlSerializationGeneratedCode_t3989
{
	// System.Runtime.Serialization.ObjectIDGenerator System.Xml.Serialization.XmlSerializationWriter::idGenerator
	ObjectIDGenerator_t4007 * ___idGenerator_0;
	// System.Int32 System.Xml.Serialization.XmlSerializationWriter::qnameCount
	int32_t ___qnameCount_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationWriter::topLevelElement
	bool ___topLevelElement_2;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationWriter::namespaces
	ArrayList_t3935 * ___namespaces_3;
	// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::writer
	XmlWriter_t4008 * ___writer_4;
	// System.Collections.Queue System.Xml.Serialization.XmlSerializationWriter::referencedElements
	Queue_t4009 * ___referencedElements_5;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::callbacks
	Hashtable_t1909 * ___callbacks_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::serializedObjects
	Hashtable_t1909 * ___serializedObjects_7;
};
