#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.TimeZoneInfo/TimeType
struct  TimeType_t3222 
{
	// System.Int32 System.TimeZoneInfo/TimeType::Offset
	int32_t ___Offset_0;
	// System.Boolean System.TimeZoneInfo/TimeType::IsDst
	bool ___IsDst_1;
	// System.String System.TimeZoneInfo/TimeType::Name
	String_t* ___Name_2;
};
// Native definition for marshalling of: System.TimeZoneInfo/TimeType
struct TimeType_t3222_marshaled
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	char* ___Name_2;
};
