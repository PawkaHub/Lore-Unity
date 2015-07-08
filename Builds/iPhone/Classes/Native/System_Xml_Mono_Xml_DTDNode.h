#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDNode
struct  DTDNode_t4047  : public Object_t
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::root
	DTDObjectModel_t4040 * ___root_0;
	// System.Boolean Mono.Xml.DTDNode::isInternalSubset
	bool ___isInternalSubset_1;
	// System.String Mono.Xml.DTDNode::baseURI
	String_t* ___baseURI_2;
	// System.Int32 Mono.Xml.DTDNode::lineNumber
	int32_t ___lineNumber_3;
	// System.Int32 Mono.Xml.DTDNode::linePosition
	int32_t ___linePosition_4;
};
