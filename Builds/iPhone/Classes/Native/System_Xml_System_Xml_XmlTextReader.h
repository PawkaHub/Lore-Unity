﻿#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t2516;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2507;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2517;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t2516  : public XmlReader_t2374
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t2516 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t2507 * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2517 * ___entityNameStack_7;
};