#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<System.String>[]
struct LinkU5BU5D_t6505;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t1873  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.String>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.String>::links
	LinkU5BU5D_t6505* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<System.String>::slots
	StringU5BU5D_t20* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.String>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.String>::si
	SerializationInfo_t3296 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::generation
	int32_t ___generation_13;
};
