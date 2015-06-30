#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3585;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Authorization
struct  Authorization_t3586  : public Object_t
{
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.String System.Net.Authorization::connectionGroupId
	String_t* ___connectionGroupId_2;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Object_t * ___module_3;
};
