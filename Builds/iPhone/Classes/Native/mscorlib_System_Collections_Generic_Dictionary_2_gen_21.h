#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5982;
// PixelCrushers.DialogueSystem.CharacterInfo[]
struct CharacterInfoU5BU5D_t6667;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>
struct Transform_1_t6668;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>
struct  Dictionary_2_t1183  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::linkSlots
	LinkU5BU5D_t5982* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::keySlots
	Int32U5BU5D_t119* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::valueSlots
	CharacterInfoU5BU5D_t6667* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::serialization_info
	SerializationInfo_t3058 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1183_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>::<>f__am$cacheB
	Transform_1_t6668 * ___U3CU3Ef__amU24cacheB_15;
};
