#pragma once
#include <stdint.h>
// System.Net.CookieCollection
struct CookieCollection_t3595;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.CookieContainer
struct  CookieContainer_t3596  : public Object_t
{
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity_0;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity_1;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize_2;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t3595 * ___cookies_3;
};
