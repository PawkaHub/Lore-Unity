#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3232;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t7211;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t6330;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t7212;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t7213;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t6334;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t6338;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t7214;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t6341;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_110.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m44457_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1__ctor_m44457(__this, method) (( void (*) (List_1_t3232 *, const MethodInfo*))List_1__ctor_m44457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m44458_gshared (List_1_t3232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m44458(__this, ___collection, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1__ctor_m44458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14714_gshared (List_1_t3232 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14714(__this, ___capacity, method) (( void (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1__ctor_m14714_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m44459_gshared (List_1_t3232 * __this, KeyValuePair_2U5BU5D_t6330* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m44459(__this, ___data, ___size, method) (( void (*) (List_1_t3232 *, KeyValuePair_2U5BU5D_t6330*, int32_t, const MethodInfo*))List_1__ctor_m44459_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m44460_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m44460(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m44460_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44461_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44461(__this, method) (( Object_t* (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m44462_gshared (List_1_t3232 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m44462(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3232 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m44462_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m44463_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m44463(__this, method) (( Object_t * (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m44463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m44464_gshared (List_1_t3232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m44464(__this, ___item, method) (( int32_t (*) (List_1_t3232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m44464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m44465_gshared (List_1_t3232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m44465(__this, ___item, method) (( bool (*) (List_1_t3232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m44465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m44466_gshared (List_1_t3232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m44466(__this, ___item, method) (( int32_t (*) (List_1_t3232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m44466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m44467_gshared (List_1_t3232 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m44467(__this, ___index, ___item, method) (( void (*) (List_1_t3232 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m44467_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m44468_gshared (List_1_t3232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m44468(__this, ___item, method) (( void (*) (List_1_t3232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m44468_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44469_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44469(__this, method) (( bool (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44469_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m44470_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m44470(__this, method) (( bool (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m44470_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m44471_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m44471(__this, method) (( Object_t * (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m44471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m44472_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m44472(__this, method) (( bool (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m44472_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m44473_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m44473(__this, method) (( bool (*) (List_1_t3232 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m44473_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m44474_gshared (List_1_t3232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m44474(__this, ___index, method) (( Object_t * (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m44474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m44475_gshared (List_1_t3232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m44475(__this, ___index, ___value, method) (( void (*) (List_1_t3232 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m44475_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m44476_gshared (List_1_t3232 * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define List_1_Add_m44476(__this, ___item, method) (( void (*) (List_1_t3232 *, KeyValuePair_2_t3245 , const MethodInfo*))List_1_Add_m44476_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m44477_gshared (List_1_t3232 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m44477(__this, ___newCount, method) (( void (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m44477_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m44478_gshared (List_1_t3232 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m44478(__this, ___idx, ___count, method) (( void (*) (List_1_t3232 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m44478_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m44479_gshared (List_1_t3232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m44479(__this, ___collection, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1_AddCollection_m44479_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m44480_gshared (List_1_t3232 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m44480(__this, ___enumerable, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m44480_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m44481_gshared (List_1_t3232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m44481(__this, ___collection, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1_AddRange_m44481_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6334 * List_1_AsReadOnly_m44482_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m44482(__this, method) (( ReadOnlyCollection_1_t6334 * (*) (List_1_t3232 *, const MethodInfo*))List_1_AsReadOnly_m44482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m44483_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_Clear_m44483(__this, method) (( void (*) (List_1_t3232 *, const MethodInfo*))List_1_Clear_m44483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m44484_gshared (List_1_t3232 * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define List_1_Contains_m44484(__this, ___item, method) (( bool (*) (List_1_t3232 *, KeyValuePair_2_t3245 , const MethodInfo*))List_1_Contains_m44484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m44485_gshared (List_1_t3232 * __this, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m44485(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3232 *, KeyValuePair_2U5BU5D_t6330*, int32_t, const MethodInfo*))List_1_CopyTo_m44485_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3245  List_1_Find_m44486_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_Find_m44486(__this, ___match, method) (( KeyValuePair_2_t3245  (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_Find_m44486_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m44487_gshared (Object_t * __this /* static, unused */, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m44487(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6338 *, const MethodInfo*))List_1_CheckMatch_m44487_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t3232 * List_1_FindAll_m44488_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_FindAll_m44488(__this, ___match, method) (( List_1_t3232 * (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_FindAll_m44488_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t3232 * List_1_FindAllStackBits_m44489_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m44489(__this, ___match, method) (( List_1_t3232 * (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_FindAllStackBits_m44489_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t3232 * List_1_FindAllList_m44490_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m44490(__this, ___match, method) (( List_1_t3232 * (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_FindAllList_m44490_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m44491_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m44491(__this, ___match, method) (( int32_t (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_FindIndex_m44491_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m44492_gshared (List_1_t3232 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m44492(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3232 *, int32_t, int32_t, Predicate_1_t6338 *, const MethodInfo*))List_1_GetIndex_m44492_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t6332  List_1_GetEnumerator_m44493_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m44493(__this, method) (( Enumerator_t6332  (*) (List_1_t3232 *, const MethodInfo*))List_1_GetEnumerator_m44493_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3232 * List_1_GetRange_m44494_gshared (List_1_t3232 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m44494(__this, ___index, ___count, method) (( List_1_t3232 * (*) (List_1_t3232 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m44494_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m44495_gshared (List_1_t3232 * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define List_1_IndexOf_m44495(__this, ___item, method) (( int32_t (*) (List_1_t3232 *, KeyValuePair_2_t3245 , const MethodInfo*))List_1_IndexOf_m44495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m44496_gshared (List_1_t3232 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m44496(__this, ___start, ___delta, method) (( void (*) (List_1_t3232 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m44496_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m44497_gshared (List_1_t3232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m44497(__this, ___index, method) (( void (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_CheckIndex_m44497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m44498_gshared (List_1_t3232 * __this, int32_t ___index, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define List_1_Insert_m44498(__this, ___index, ___item, method) (( void (*) (List_1_t3232 *, int32_t, KeyValuePair_2_t3245 , const MethodInfo*))List_1_Insert_m44498_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m44499_gshared (List_1_t3232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m44499(__this, ___collection, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m44499_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m44500_gshared (List_1_t3232 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m44500(__this, ___index, ___collection, method) (( void (*) (List_1_t3232 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m44500_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m44501_gshared (List_1_t3232 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m44501(__this, ___index, ___collection, method) (( void (*) (List_1_t3232 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m44501_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m44502_gshared (List_1_t3232 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m44502(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3232 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m44502_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m44503_gshared (List_1_t3232 * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define List_1_Remove_m44503(__this, ___item, method) (( bool (*) (List_1_t3232 *, KeyValuePair_2_t3245 , const MethodInfo*))List_1_Remove_m44503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m44504_gshared (List_1_t3232 * __this, Predicate_1_t6338 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m44504(__this, ___match, method) (( int32_t (*) (List_1_t3232 *, Predicate_1_t6338 *, const MethodInfo*))List_1_RemoveAll_m44504_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m44505_gshared (List_1_t3232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m44505(__this, ___index, method) (( void (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_RemoveAt_m44505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m44506_gshared (List_1_t3232 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m44506(__this, ___index, ___count, method) (( void (*) (List_1_t3232 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m44506_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m44507_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_Reverse_m44507(__this, method) (( void (*) (List_1_t3232 *, const MethodInfo*))List_1_Reverse_m44507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m44508_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_Sort_m44508(__this, method) (( void (*) (List_1_t3232 *, const MethodInfo*))List_1_Sort_m44508_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m44509_gshared (List_1_t3232 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m44509(__this, ___comparer, method) (( void (*) (List_1_t3232 *, Object_t*, const MethodInfo*))List_1_Sort_m44509_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m44510_gshared (List_1_t3232 * __this, Comparison_1_t6341 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m44510(__this, ___comparison, method) (( void (*) (List_1_t3232 *, Comparison_1_t6341 *, const MethodInfo*))List_1_Sort_m44510_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6330* List_1_ToArray_m44511_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_ToArray_m44511(__this, method) (( KeyValuePair_2U5BU5D_t6330* (*) (List_1_t3232 *, const MethodInfo*))List_1_ToArray_m44511_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m44512_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m44512(__this, method) (( void (*) (List_1_t3232 *, const MethodInfo*))List_1_TrimExcess_m44512_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m44513_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m44513(__this, method) (( int32_t (*) (List_1_t3232 *, const MethodInfo*))List_1_get_Capacity_m44513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m44514_gshared (List_1_t3232 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m44514(__this, ___value, method) (( void (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_set_Capacity_m44514_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m44515_gshared (List_1_t3232 * __this, const MethodInfo* method);
#define List_1_get_Count_m44515(__this, method) (( int32_t (*) (List_1_t3232 *, const MethodInfo*))List_1_get_Count_m44515_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3245  List_1_get_Item_m44516_gshared (List_1_t3232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m44516(__this, ___index, method) (( KeyValuePair_2_t3245  (*) (List_1_t3232 *, int32_t, const MethodInfo*))List_1_get_Item_m44516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m44517_gshared (List_1_t3232 * __this, int32_t ___index, KeyValuePair_2_t3245  ___value, const MethodInfo* method);
#define List_1_set_Item_m44517(__this, ___index, ___value, method) (( void (*) (List_1_t3232 *, int32_t, KeyValuePair_2_t3245 , const MethodInfo*))List_1_set_Item_m44517_gshared)(__this, ___index, ___value, method)
