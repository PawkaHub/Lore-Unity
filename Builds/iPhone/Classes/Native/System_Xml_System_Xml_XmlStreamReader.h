#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t4101;
// System.Xml.XmlException
struct XmlException_t4099;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t4102  : public NonBlockingStreamReader_t4103
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t4101 * ___input_12;
};
struct XmlStreamReader_t4102_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t4099 * ___invalidDataException_13;
};
