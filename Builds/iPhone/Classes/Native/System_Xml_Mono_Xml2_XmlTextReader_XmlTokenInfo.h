#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3893;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct  XmlTokenInfo_t3894  : public Object_t
{
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::valueCache
	String_t* ___valueCache_0;
	// Mono.Xml2.XmlTextReader Mono.Xml2.XmlTextReader/XmlTokenInfo::Reader
	XmlTextReader_t3893 * ___Reader_1;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Name
	String_t* ___Name_2;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::LocalName
	String_t* ___LocalName_3;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Prefix
	String_t* ___Prefix_4;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::NamespaceURI
	String_t* ___NamespaceURI_5;
	// System.Boolean Mono.Xml2.XmlTextReader/XmlTokenInfo::IsEmptyElement
	bool ___IsEmptyElement_6;
	// System.Char Mono.Xml2.XmlTextReader/XmlTokenInfo::QuoteChar
	uint16_t ___QuoteChar_7;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LineNumber
	int32_t ___LineNumber_8;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LinePosition
	int32_t ___LinePosition_9;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferStart
	int32_t ___ValueBufferStart_10;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferEnd
	int32_t ___ValueBufferEnd_11;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader/XmlTokenInfo::NodeType
	int32_t ___NodeType_12;
};
