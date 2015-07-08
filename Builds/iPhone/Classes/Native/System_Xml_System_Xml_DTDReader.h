#pragma once
#include <stdint.h>
// System.Xml.XmlParserInput
struct XmlParserInput_t4065;
// System.Collections.Stack
struct Stack_t4066;
// System.Char[]
struct CharU5BU5D_t583;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.DTDReader
struct  DTDReader_t4067  : public Object_t
{
	// System.Xml.XmlParserInput System.Xml.DTDReader::currentInput
	XmlParserInput_t4065 * ___currentInput_0;
	// System.Collections.Stack System.Xml.DTDReader::parserInputStack
	Stack_t4066 * ___parserInputStack_1;
	// System.Char[] System.Xml.DTDReader::nameBuffer
	CharU5BU5D_t583* ___nameBuffer_2;
	// System.Int32 System.Xml.DTDReader::nameLength
	int32_t ___nameLength_3;
	// System.Int32 System.Xml.DTDReader::nameCapacity
	int32_t ___nameCapacity_4;
	// System.Text.StringBuilder System.Xml.DTDReader::valueBuffer
	StringBuilder_t696 * ___valueBuffer_5;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_6;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_7;
	// System.Int32 System.Xml.DTDReader::dtdIncludeSect
	int32_t ___dtdIncludeSect_8;
	// System.Boolean System.Xml.DTDReader::normalization
	bool ___normalization_9;
	// System.Boolean System.Xml.DTDReader::processingInternalSubset
	bool ___processingInternalSubset_10;
	// System.String System.Xml.DTDReader::cachedPublicId
	String_t* ___cachedPublicId_11;
	// System.String System.Xml.DTDReader::cachedSystemId
	String_t* ___cachedSystemId_12;
	// Mono.Xml.DTDObjectModel System.Xml.DTDReader::DTD
	DTDObjectModel_t4040 * ___DTD_13;
};
