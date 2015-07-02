﻿#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2355;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t2390;
// System.Collections.Hashtable
struct Hashtable_t1256;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t2391;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t2392;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t2393;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t2394;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializer
struct  XmlSerializer_t598  : public Object_t
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t2355 * ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t2390 * ___serializerData_6;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t2391 * ___onUnknownAttribute_8;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t2392 * ___onUnknownElement_9;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t2393 * ___onUnknownNode_10;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t2394 * ___onUnreferencedObject_11;
};
struct XmlSerializer_t598_StaticFields{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t1256 * ___serializerTypes_7;
};