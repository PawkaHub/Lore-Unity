#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.AssetBundle>[]
struct LinkU5BU5D_t5333;
// UnityEngine.AssetBundle[]
struct AssetBundleU5BU5D_t5335;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AssetBundle>
struct IEqualityComparer_1_t5336;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>
struct  HashSet_1_t762  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::links
	LinkU5BU5D_t5333* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::slots
	AssetBundleU5BU5D_t5335* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::si
	SerializationInfo_t1322 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::generation
	int32_t ___generation_13;
};
