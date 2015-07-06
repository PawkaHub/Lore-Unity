#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t640;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t3886;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3887;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlReader
struct  XmlReader_t3760  : public Object_t
{
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t640 * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t3886 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t3887 * ___settings_2;
};
