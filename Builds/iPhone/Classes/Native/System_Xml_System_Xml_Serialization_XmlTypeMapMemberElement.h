#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t3784;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Xml.Serialization.XmlTypeMapMember
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMember.h"
// System.Xml.Serialization.XmlTypeMapMemberElement
struct  XmlTypeMapMemberElement_t3786  : public XmlTypeMapMember_t3782
{
	// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlTypeMapMemberElement::_elementInfo
	XmlTypeMapElementInfoList_t3784 * ____elementInfo_8;
	// System.String System.Xml.Serialization.XmlTypeMapMemberElement::_choiceMember
	String_t* ____choiceMember_9;
	// System.Boolean System.Xml.Serialization.XmlTypeMapMemberElement::_isTextCollector
	bool ____isTextCollector_10;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMemberElement::_choiceTypeData
	TypeData_t3716 * ____choiceTypeData_11;
};
