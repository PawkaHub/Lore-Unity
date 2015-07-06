#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t5000;
// System.Collections.Stack
struct Stack_t3828;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t5001  : public SmallXmlParser_t5002
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t5000 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t5000 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t3828 * ___stack_15;
};
