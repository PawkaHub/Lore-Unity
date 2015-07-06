#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3741;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t3776;
// System.Collections.Hashtable
struct Hashtable_t1658;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t3777;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t3778;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t3779;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t3780;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializer
struct  XmlSerializer_t619  : public Object_t
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t3741 * ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t3776 * ___serializerData_6;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t3777 * ___onUnknownAttribute_8;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t3778 * ___onUnknownElement_9;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t3779 * ___onUnknownNode_10;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t3780 * ___onUnreferencedObject_11;
};
struct XmlSerializer_t619_StaticFields{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t1658 * ___serializerTypes_7;
};
