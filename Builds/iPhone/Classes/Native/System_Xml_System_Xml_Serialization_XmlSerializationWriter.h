#pragma once
#include <stdint.h>
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t3769;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// System.Collections.Queue
struct Queue_t3771;
// System.Collections.Hashtable
struct Hashtable_t1658;
// System.Xml.Serialization.XmlSerializationGeneratedCode
#include "System_Xml_System_Xml_Serialization_XmlSerializationGenerate.h"
// System.Xml.Serialization.XmlSerializationWriter
struct  XmlSerializationWriter_t3772  : public XmlSerializationGeneratedCode_t3751
{
	// System.Runtime.Serialization.ObjectIDGenerator System.Xml.Serialization.XmlSerializationWriter::idGenerator
	ObjectIDGenerator_t3769 * ___idGenerator_0;
	// System.Int32 System.Xml.Serialization.XmlSerializationWriter::qnameCount
	int32_t ___qnameCount_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationWriter::topLevelElement
	bool ___topLevelElement_2;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationWriter::namespaces
	ArrayList_t3697 * ___namespaces_3;
	// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::writer
	XmlWriter_t3770 * ___writer_4;
	// System.Collections.Queue System.Xml.Serialization.XmlSerializationWriter::referencedElements
	Queue_t3771 * ___referencedElements_5;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::callbacks
	Hashtable_t1658 * ___callbacks_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::serializedObjects
	Hashtable_t1658 * ___serializedObjects_7;
};
