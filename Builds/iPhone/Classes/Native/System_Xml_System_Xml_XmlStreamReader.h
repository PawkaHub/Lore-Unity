#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t2476;
// System.Xml.XmlException
struct XmlException_t2474;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2477  : public NonBlockingStreamReader_t2478
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2476 * ___input_12;
};
struct XmlStreamReader_t2477_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t2474 * ___invalidDataException_13;
};
