#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"
// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t3287  : public Object_t
{
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateEnd
	DateTime_t1953  ___dateEnd_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateStart
	DateTime_t1953  ___dateStart_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::daylightDelta
	TimeSpan_t629  ___daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionEnd
	TransitionTime_t3288  ___daylightTransitionEnd_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionStart
	TransitionTime_t3288  ___daylightTransitionStart_4;
};
