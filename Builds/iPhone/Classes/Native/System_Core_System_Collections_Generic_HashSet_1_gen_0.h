#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<System.Int32>[]
struct LinkU5BU5D_t6300;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_t424  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Int32>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Int32>::links
	LinkU5BU5D_t6300* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<System.Int32>::slots
	Int32U5BU5D_t119* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Int32>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Int32>::si
	SerializationInfo_t3058 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::generation
	int32_t ___generation_13;
};
