#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandState.h"
// System.Xml.XmlReaderBinarySupport
struct  XmlReaderBinarySupport_t4124  : public Object_t
{
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_t3998 * ___reader_0;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt_1;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache_3;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset_4;
};
