#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// CustomAuthenticationType
#include "AssemblyU2DCSharp_CustomAuthenticationType.h"
// AuthenticationValues
struct  AuthenticationValues_t445  : public Object_t
{
	// CustomAuthenticationType AuthenticationValues::AuthType
	uint8_t ___AuthType_0;
	// System.String AuthenticationValues::AuthGetParameters
	String_t* ___AuthGetParameters_1;
	// System.String AuthenticationValues::Token
	String_t* ___Token_2;
	// System.Object AuthenticationValues::<AuthPostData>k__BackingField
	Object_t * ___U3CAuthPostDataU3Ek__BackingField_3;
	// System.String AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};
