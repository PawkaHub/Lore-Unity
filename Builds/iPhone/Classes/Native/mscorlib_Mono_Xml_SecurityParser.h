#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t3910;
// System.Collections.Stack
struct Stack_t2442;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t3911  : public SmallXmlParser_t3912
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t3910 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t3910 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2442 * ___stack_15;
};
