#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.GameObject>[]
struct LinkU5BU5D_t6335;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t60;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t6337;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct  HashSet_1_t453  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::links
	LinkU5BU5D_t6335* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::slots
	GameObjectU5BU5D_t60* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::si
	SerializationInfo_t3058 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::generation
	int32_t ___generation_13;
};
