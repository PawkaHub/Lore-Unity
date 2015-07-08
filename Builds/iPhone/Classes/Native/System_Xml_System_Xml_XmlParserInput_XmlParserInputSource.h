#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t3795;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlParserInput/XmlParserInputSource
struct  XmlParserInputSource_t4122  : public Object_t
{
	// System.String System.Xml.XmlParserInput/XmlParserInputSource::BaseURI
	String_t* ___BaseURI_0;
	// System.IO.TextReader System.Xml.XmlParserInput/XmlParserInputSource::reader
	TextReader_t3795 * ___reader_1;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlParserInput/XmlParserInputSource::isPE
	bool ___isPE_3;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::line
	int32_t ___line_4;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::column
	int32_t ___column_5;
};
