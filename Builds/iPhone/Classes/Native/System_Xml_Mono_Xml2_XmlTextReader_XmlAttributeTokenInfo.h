#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t696;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo.h"
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct  XmlAttributeTokenInfo_t4133  : public XmlTokenInfo_t4132
{
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenStartIndex
	int32_t ___ValueTokenStartIndex_13;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenEndIndex
	int32_t ___ValueTokenEndIndex_14;
	// System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::valueCache
	String_t* ___valueCache_15;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::tmpBuilder
	StringBuilder_t696 * ___tmpBuilder_16;
};
