#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_t3288 
{
	// System.DateTime System.TimeZoneInfo/TransitionTime::timeOfDay
	DateTime_t1953  ___timeOfDay_0;
	// System.Int32 System.TimeZoneInfo/TransitionTime::month
	int32_t ___month_1;
	// System.Int32 System.TimeZoneInfo/TransitionTime::day
	int32_t ___day_2;
	// System.Int32 System.TimeZoneInfo/TransitionTime::week
	int32_t ___week_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::isFixedDateRule
	bool ___isFixedDateRule_5;
};
