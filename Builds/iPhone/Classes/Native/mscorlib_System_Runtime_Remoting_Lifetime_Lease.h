#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Collections.Queue
struct Queue_t4009;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t5419;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t5420  : public MarshalByRefObject_t4325
{
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t1953  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t629  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t629  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t629  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t3935 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t4009 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t5419 * ____renewalDelegate_8;
};
