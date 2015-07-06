#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<Parse.ParseObject>[]
struct LinkU5BU5D_t7053;
// Parse.ParseObject[]
struct ParseObjectU5BU5D_t1787;
// System.Collections.Generic.IEqualityComparer`1<Parse.ParseObject>
struct IEqualityComparer_1_t7055;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<Parse.ParseObject>
struct  HashSet_1_t1601  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::links
	LinkU5BU5D_t7053* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::slots
	ParseObjectU5BU5D_t1787* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<Parse.ParseObject>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<Parse.ParseObject>::si
	SerializationInfo_t3058 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::generation
	int32_t ___generation_13;
};
