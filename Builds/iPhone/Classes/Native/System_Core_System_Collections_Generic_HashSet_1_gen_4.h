#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t6507;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t2048  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Object>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Object>::links
	LinkU5BU5D_t6507* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<System.Object>::slots
	ObjectU5BU5D_t21* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Object>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Object>::si
	SerializationInfo_t3296 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::generation
	int32_t ___generation_13;
};
