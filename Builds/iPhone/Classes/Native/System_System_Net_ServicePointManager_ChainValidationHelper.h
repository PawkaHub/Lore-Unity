#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key.h"
// System.Net.ServicePointManager/ChainValidationHelper
struct  ChainValidationHelper_t3638  : public Object_t
{
	// System.Object System.Net.ServicePointManager/ChainValidationHelper::sender
	Object_t * ___sender_0;
	// System.String System.Net.ServicePointManager/ChainValidationHelper::host
	String_t* ___host_1;
};
struct ChainValidationHelper_t3638_StaticFields{
	// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::is_macosx
	bool ___is_macosx_2;
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Net.ServicePointManager/ChainValidationHelper::s_flags
	int32_t ___s_flags_3;
};
