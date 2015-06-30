#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t619;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t2500;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2501;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlReader
struct  XmlReader_t2374  : public Object_t
{
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t619 * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t2500 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2501 * ___settings_2;
};
