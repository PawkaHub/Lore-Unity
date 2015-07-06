#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri
struct Uri_t32;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Char[]
struct CharU5BU5D_t665;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.Cookie
struct  Cookie_t4025  : public Object_t
{
	// System.String System.Net.Cookie::comment
	String_t* ___comment_0;
	// System.Uri System.Net.Cookie::commentUri
	Uri_t32 * ___commentUri_1;
	// System.Boolean System.Net.Cookie::discard
	bool ___discard_2;
	// System.String System.Net.Cookie::domain
	String_t* ___domain_3;
	// System.DateTime System.Net.Cookie::expires
	DateTime_t1705  ___expires_4;
	// System.Boolean System.Net.Cookie::httpOnly
	bool ___httpOnly_5;
	// System.String System.Net.Cookie::name
	String_t* ___name_6;
	// System.String System.Net.Cookie::path
	String_t* ___path_7;
	// System.String System.Net.Cookie::port
	String_t* ___port_8;
	// System.Int32[] System.Net.Cookie::ports
	Int32U5BU5D_t119* ___ports_9;
	// System.Boolean System.Net.Cookie::secure
	bool ___secure_10;
	// System.DateTime System.Net.Cookie::timestamp
	DateTime_t1705  ___timestamp_11;
	// System.String System.Net.Cookie::val
	String_t* ___val_12;
	// System.Int32 System.Net.Cookie::version
	int32_t ___version_13;
	// System.Boolean System.Net.Cookie::exact_domain
	bool ___exact_domain_17;
};
struct Cookie_t4025_StaticFields{
	// System.Char[] System.Net.Cookie::reservedCharsName
	CharU5BU5D_t665* ___reservedCharsName_14;
	// System.Char[] System.Net.Cookie::portSeparators
	CharU5BU5D_t665* ___portSeparators_15;
	// System.String System.Net.Cookie::tspecials
	String_t* ___tspecials_16;
};
