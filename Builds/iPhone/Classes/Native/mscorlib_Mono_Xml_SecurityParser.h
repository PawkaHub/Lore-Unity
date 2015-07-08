#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t5238;
// System.Collections.Stack
struct Stack_t4066;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t5239  : public SmallXmlParser_t5240
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t5238 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t5238 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t4066 * ___stack_15;
};
