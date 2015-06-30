﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3894;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Extension
struct  X509Extension_t3903  : public Object_t
{
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t3894 * ___extnValue_2;
};
