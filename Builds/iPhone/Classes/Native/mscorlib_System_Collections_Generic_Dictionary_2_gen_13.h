#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// UnityEngine.Component[]
struct ComponentU5BU5D_t311;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2714;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t6679;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t6680;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct  Dictionary_2_t492  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::keySlots
	ComponentU5BU5D_t311* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::valueSlots
	MethodInfoU5BU5D_t2714* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t492_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::<>f__am$cacheB
	Transform_1_t6680 * ___U3CU3Ef__amU24cacheB_15;
};
