#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3301;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t10864;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9467;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10865;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t10866;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t9471;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t9475;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t10867;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t9478;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_140.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m67544_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1__ctor_m67544(__this, method) (( void (*) (List_1_t3301 *, const MethodInfo*))List_1__ctor_m67544_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m67545_gshared (List_1_t3301 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m67545(__this, ___collection, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1__ctor_m67545_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10516_gshared (List_1_t3301 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10516(__this, ___capacity, method) (( void (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1__ctor_m10516_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m67546_gshared (List_1_t3301 * __this, KeyValuePair_2U5BU5D_t9467* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m67546(__this, ___data, ___size, method) (( void (*) (List_1_t3301 *, KeyValuePair_2U5BU5D_t9467*, int32_t, const MethodInfo*))List_1__ctor_m67546_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m67547_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m67547(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m67547_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67548_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67548(__this, method) (( Object_t* (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67548_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m67549_gshared (List_1_t3301 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m67549(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3301 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m67549_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m67550_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67550(__this, method) (( Object_t * (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m67550_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m67551_gshared (List_1_t3301 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m67551(__this, ___item, method) (( int32_t (*) (List_1_t3301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m67551_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m67552_gshared (List_1_t3301 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m67552(__this, ___item, method) (( bool (*) (List_1_t3301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m67552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m67553_gshared (List_1_t3301 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m67553(__this, ___item, method) (( int32_t (*) (List_1_t3301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m67553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m67554_gshared (List_1_t3301 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m67554(__this, ___index, ___item, method) (( void (*) (List_1_t3301 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m67554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m67555_gshared (List_1_t3301 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m67555(__this, ___item, method) (( void (*) (List_1_t3301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m67555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67556_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67556(__this, method) (( bool (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m67557_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67557(__this, method) (( bool (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m67557_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m67558_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m67558(__this, method) (( Object_t * (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m67558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m67559_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m67559(__this, method) (( bool (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m67559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m67560_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m67560(__this, method) (( bool (*) (List_1_t3301 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m67560_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m67561_gshared (List_1_t3301 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m67561(__this, ___index, method) (( Object_t * (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m67561_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m67562_gshared (List_1_t3301 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m67562(__this, ___index, ___value, method) (( void (*) (List_1_t3301 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m67562_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m67563_gshared (List_1_t3301 * __this, KeyValuePair_2_t3316  ___item, const MethodInfo* method);
#define List_1_Add_m67563(__this, ___item, method) (( void (*) (List_1_t3301 *, KeyValuePair_2_t3316 , const MethodInfo*))List_1_Add_m67563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m67564_gshared (List_1_t3301 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m67564(__this, ___newCount, method) (( void (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m67564_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m67565_gshared (List_1_t3301 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m67565(__this, ___idx, ___count, method) (( void (*) (List_1_t3301 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m67565_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m67566_gshared (List_1_t3301 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m67566(__this, ___collection, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1_AddCollection_m67566_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m67567_gshared (List_1_t3301 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m67567(__this, ___enumerable, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m67567_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m67568_gshared (List_1_t3301 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m67568(__this, ___collection, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1_AddRange_m67568_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9471 * List_1_AsReadOnly_m67569_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m67569(__this, method) (( ReadOnlyCollection_1_t9471 * (*) (List_1_t3301 *, const MethodInfo*))List_1_AsReadOnly_m67569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m67570_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_Clear_m67570(__this, method) (( void (*) (List_1_t3301 *, const MethodInfo*))List_1_Clear_m67570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m67571_gshared (List_1_t3301 * __this, KeyValuePair_2_t3316  ___item, const MethodInfo* method);
#define List_1_Contains_m67571(__this, ___item, method) (( bool (*) (List_1_t3301 *, KeyValuePair_2_t3316 , const MethodInfo*))List_1_Contains_m67571_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m67572_gshared (List_1_t3301 * __this, KeyValuePair_2U5BU5D_t9467* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m67572(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3301 *, KeyValuePair_2U5BU5D_t9467*, int32_t, const MethodInfo*))List_1_CopyTo_m67572_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3316  List_1_Find_m67573_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_Find_m67573(__this, ___match, method) (( KeyValuePair_2_t3316  (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_Find_m67573_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m67574_gshared (Object_t * __this /* static, unused */, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m67574(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9475 *, const MethodInfo*))List_1_CheckMatch_m67574_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t3301 * List_1_FindAll_m67575_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_FindAll_m67575(__this, ___match, method) (( List_1_t3301 * (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_FindAll_m67575_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t3301 * List_1_FindAllStackBits_m67576_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m67576(__this, ___match, method) (( List_1_t3301 * (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_FindAllStackBits_m67576_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t3301 * List_1_FindAllList_m67577_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m67577(__this, ___match, method) (( List_1_t3301 * (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_FindAllList_m67577_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m67578_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m67578(__this, ___match, method) (( int32_t (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_FindIndex_m67578_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m67579_gshared (List_1_t3301 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m67579(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3301 *, int32_t, int32_t, Predicate_1_t9475 *, const MethodInfo*))List_1_GetIndex_m67579_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t9469  List_1_GetEnumerator_m67580_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m67580(__this, method) (( Enumerator_t9469  (*) (List_1_t3301 *, const MethodInfo*))List_1_GetEnumerator_m67580_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3301 * List_1_GetRange_m67581_gshared (List_1_t3301 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m67581(__this, ___index, ___count, method) (( List_1_t3301 * (*) (List_1_t3301 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m67581_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m67582_gshared (List_1_t3301 * __this, KeyValuePair_2_t3316  ___item, const MethodInfo* method);
#define List_1_IndexOf_m67582(__this, ___item, method) (( int32_t (*) (List_1_t3301 *, KeyValuePair_2_t3316 , const MethodInfo*))List_1_IndexOf_m67582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m67583_gshared (List_1_t3301 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m67583(__this, ___start, ___delta, method) (( void (*) (List_1_t3301 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m67583_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m67584_gshared (List_1_t3301 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m67584(__this, ___index, method) (( void (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_CheckIndex_m67584_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m67585_gshared (List_1_t3301 * __this, int32_t ___index, KeyValuePair_2_t3316  ___item, const MethodInfo* method);
#define List_1_Insert_m67585(__this, ___index, ___item, method) (( void (*) (List_1_t3301 *, int32_t, KeyValuePair_2_t3316 , const MethodInfo*))List_1_Insert_m67585_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m67586_gshared (List_1_t3301 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m67586(__this, ___collection, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m67586_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m67587_gshared (List_1_t3301 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m67587(__this, ___index, ___collection, method) (( void (*) (List_1_t3301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m67587_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m67588_gshared (List_1_t3301 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m67588(__this, ___index, ___collection, method) (( void (*) (List_1_t3301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m67588_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m67589_gshared (List_1_t3301 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m67589(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m67589_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m67590_gshared (List_1_t3301 * __this, KeyValuePair_2_t3316  ___item, const MethodInfo* method);
#define List_1_Remove_m67590(__this, ___item, method) (( bool (*) (List_1_t3301 *, KeyValuePair_2_t3316 , const MethodInfo*))List_1_Remove_m67590_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m67591_gshared (List_1_t3301 * __this, Predicate_1_t9475 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m67591(__this, ___match, method) (( int32_t (*) (List_1_t3301 *, Predicate_1_t9475 *, const MethodInfo*))List_1_RemoveAll_m67591_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m67592_gshared (List_1_t3301 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m67592(__this, ___index, method) (( void (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_RemoveAt_m67592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m67593_gshared (List_1_t3301 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m67593(__this, ___index, ___count, method) (( void (*) (List_1_t3301 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m67593_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m67594_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_Reverse_m67594(__this, method) (( void (*) (List_1_t3301 *, const MethodInfo*))List_1_Reverse_m67594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m67595_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_Sort_m67595(__this, method) (( void (*) (List_1_t3301 *, const MethodInfo*))List_1_Sort_m67595_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m67596_gshared (List_1_t3301 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m67596(__this, ___comparer, method) (( void (*) (List_1_t3301 *, Object_t*, const MethodInfo*))List_1_Sort_m67596_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m67597_gshared (List_1_t3301 * __this, Comparison_1_t9478 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m67597(__this, ___comparison, method) (( void (*) (List_1_t3301 *, Comparison_1_t9478 *, const MethodInfo*))List_1_Sort_m67597_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t9467* List_1_ToArray_m67598_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_ToArray_m67598(__this, method) (( KeyValuePair_2U5BU5D_t9467* (*) (List_1_t3301 *, const MethodInfo*))List_1_ToArray_m67598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m67599_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m67599(__this, method) (( void (*) (List_1_t3301 *, const MethodInfo*))List_1_TrimExcess_m67599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m67600_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m67600(__this, method) (( int32_t (*) (List_1_t3301 *, const MethodInfo*))List_1_get_Capacity_m67600_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m67601_gshared (List_1_t3301 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m67601(__this, ___value, method) (( void (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_set_Capacity_m67601_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m67602_gshared (List_1_t3301 * __this, const MethodInfo* method);
#define List_1_get_Count_m67602(__this, method) (( int32_t (*) (List_1_t3301 *, const MethodInfo*))List_1_get_Count_m67602_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3316  List_1_get_Item_m67603_gshared (List_1_t3301 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m67603(__this, ___index, method) (( KeyValuePair_2_t3316  (*) (List_1_t3301 *, int32_t, const MethodInfo*))List_1_get_Item_m67603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m67604_gshared (List_1_t3301 * __this, int32_t ___index, KeyValuePair_2_t3316  ___value, const MethodInfo* method);
#define List_1_set_Item_m67604(__this, ___index, ___value, method) (( void (*) (List_1_t3301 *, int32_t, KeyValuePair_2_t3316 , const MethodInfo*))List_1_set_Item_m67604_gshared)(__this, ___index, ___value, method)
