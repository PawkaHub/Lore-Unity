#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3752;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct  WriteCallbackInfo_t3753  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::Type
	Type_t * ___Type_0;
	// System.String System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::TypeName
	String_t* ___TypeName_1;
	// System.String System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::TypeNs
	String_t* ___TypeNs_2;
	// System.Xml.Serialization.XmlSerializationReadCallback System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::Callback
	XmlSerializationReadCallback_t3752 * ___Callback_3;
};
