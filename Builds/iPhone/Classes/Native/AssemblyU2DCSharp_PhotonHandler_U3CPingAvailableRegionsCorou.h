#pragma once
#include <stdint.h>
// PhotonPingManager
struct PhotonPingManager_t442;
// Region
struct Region_t443;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13
struct  U3CPingAvailableRegionsCoroutineU3Ec__Iterator13_t444  : public Object_t
{
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::<pingManager>__0
	PhotonPingManager_t442 * ___U3CpingManagerU3E__0_0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::<$s_98>__1
	Enumerator_t445  ___U3CU24s_98U3E__1_1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::<region>__2
	Region_t443 * ___U3CregionU3E__2_2;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::<best>__3
	Region_t443 * ___U3CbestU3E__3_3;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::connectToBest
	bool ___connectToBest_4;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::$PC
	int32_t ___U24PC_5;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::$current
	Object_t * ___U24current_6;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator13::<$>connectToBest
	bool ___U3CU24U3EconnectToBest_7;
};
