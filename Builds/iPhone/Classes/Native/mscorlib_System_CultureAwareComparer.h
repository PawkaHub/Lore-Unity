#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t4143;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t5656  : public StringComparer_t3832
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t4143 * ____compareInfo_5;
};
