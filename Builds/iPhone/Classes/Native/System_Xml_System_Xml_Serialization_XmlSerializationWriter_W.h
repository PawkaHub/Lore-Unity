#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t3767;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
struct  WriteCallbackInfo_t3768  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::Type
	Type_t * ___Type_0;
	// System.String System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::TypeName
	String_t* ___TypeName_1;
	// System.String System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::TypeNs
	String_t* ___TypeNs_2;
	// System.Xml.Serialization.XmlSerializationWriteCallback System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::Callback
	XmlSerializationWriteCallback_t3767 * ___Callback_3;
};
