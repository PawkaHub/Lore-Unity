#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.TimeZoneInfo
struct TimeZoneInfo_t1854;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3052;
// System.Object
#include "mscorlib_System_Object.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeZoneInfo
struct  TimeZoneInfo_t1854  : public Object_t
{
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t1746  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t3052* ___adjustmentRules_8;
};
struct TimeZoneInfo_t1854_StaticFields{
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t1854 * ___local_4;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_7;
};
