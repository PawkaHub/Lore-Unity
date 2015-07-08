#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlEntity
struct  XmlEntity_t4097  : public XmlNode_t4081
{
	// System.String System.Xml.XmlEntity::name
	String_t* ___name_5;
	// System.String System.Xml.XmlEntity::NDATA
	String_t* ___NDATA_6;
	// System.String System.Xml.XmlEntity::publicId
	String_t* ___publicId_7;
	// System.String System.Xml.XmlEntity::systemId
	String_t* ___systemId_8;
	// System.String System.Xml.XmlEntity::baseUri
	String_t* ___baseUri_9;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntity::lastLinkedChild
	XmlLinkedNode_t4079 * ___lastLinkedChild_10;
	// System.Boolean System.Xml.XmlEntity::contentAlreadySet
	bool ___contentAlreadySet_11;
};
