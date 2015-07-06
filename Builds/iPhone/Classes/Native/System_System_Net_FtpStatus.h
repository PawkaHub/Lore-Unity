#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"
// System.Net.FtpStatus
struct  FtpStatus_t4051  : public Object_t
{
	// System.Net.FtpStatusCode System.Net.FtpStatus::statusCode
	int32_t ___statusCode_0;
	// System.String System.Net.FtpStatus::statusDescription
	String_t* ___statusDescription_1;
};
