#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.HashSet`1/Link<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>[]
struct LinkU5BU5D_t7094;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>[]
struct ReferenceU5BU5D_t7084;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct IEqualityComparer_1_t7085;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct  HashSet_1_t7092  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::links
	LinkU5BU5D_t7094* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::slots
	ReferenceU5BU5D_t7084* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::si
	SerializationInfo_t3296 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::generation
	int32_t ___generation_13;
};
