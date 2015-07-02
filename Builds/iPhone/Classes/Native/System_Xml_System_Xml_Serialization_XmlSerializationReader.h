﻿#pragma once
#include <stdint.h>
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlReader
struct XmlReader_t2374;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Collections.Hashtable
struct Hashtable_t1256;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t598;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Xml.Serialization.XmlSerializationGeneratedCode
#include "System_Xml_System_Xml_Serialization_XmlSerializationGenerate.h"
// System.Xml.Serialization.XmlSerializationReader
struct  XmlSerializationReader_t2375  : public XmlSerializationGeneratedCode_t2365
{
	// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::document
	XmlDocument_t2373 * ___document_0;
	// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::reader
	XmlReader_t2374 * ___reader_1;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::fixups
	ArrayList_t1188 * ___fixups_2;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::collFixups
	Hashtable_t1256 * ___collFixups_3;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::collItemFixups
	ArrayList_t1188 * ___collItemFixups_4;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::typesCallbacks
	Hashtable_t1256 * ___typesCallbacks_5;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::noIDTargets
	ArrayList_t1188 * ___noIDTargets_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::targets
	Hashtable_t1256 * ___targets_7;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::delayedListFixups
	Hashtable_t1256 * ___delayedListFixups_8;
	// System.Xml.Serialization.XmlSerializer System.Xml.Serialization.XmlSerializationReader::eventSource
	XmlSerializer_t598 * ___eventSource_9;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::delayedFixupId
	int32_t ___delayedFixupId_10;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::referencedObjects
	Hashtable_t1256 * ___referencedObjects_11;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::readCount
	int32_t ___readCount_12;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::whileIterationCount
	int32_t ___whileIterationCount_13;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3SchemaNS
	String_t* ___w3SchemaNS_14;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS
	String_t* ___w3InstanceNS_15;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS2000
	String_t* ___w3InstanceNS2000_16;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS1999
	String_t* ___w3InstanceNS1999_17;
	// System.String System.Xml.Serialization.XmlSerializationReader::soapNS
	String_t* ___soapNS_18;
	// System.String System.Xml.Serialization.XmlSerializationReader::wsdlNS
	String_t* ___wsdlNS_19;
	// System.String System.Xml.Serialization.XmlSerializationReader::nullX
	String_t* ___nullX_20;
	// System.String System.Xml.Serialization.XmlSerializationReader::nil
	String_t* ___nil_21;
	// System.String System.Xml.Serialization.XmlSerializationReader::typeX
	String_t* ___typeX_22;
	// System.String System.Xml.Serialization.XmlSerializationReader::arrayType
	String_t* ___arrayType_23;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::arrayQName
	XmlQualifiedName_t2301 * ___arrayQName_24;
};