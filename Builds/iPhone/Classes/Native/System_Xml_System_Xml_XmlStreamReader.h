#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3863;
// System.Xml.XmlException
struct XmlException_t3861;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3864  : public NonBlockingStreamReader_t3865
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3863 * ___input_12;
};
struct XmlStreamReader_t3864_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3861 * ___invalidDataException_13;
};
