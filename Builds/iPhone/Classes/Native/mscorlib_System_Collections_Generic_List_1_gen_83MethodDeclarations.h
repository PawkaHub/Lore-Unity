#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3063;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t10573;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9185;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10574;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t10575;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t9189;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t9193;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t10576;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t9196;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_137.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m66629_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1__ctor_m66629(__this, method) (( void (*) (List_1_t3063 *, const MethodInfo*))List_1__ctor_m66629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m66630_gshared (List_1_t3063 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m66630(__this, ___collection, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1__ctor_m66630_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10097_gshared (List_1_t3063 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10097(__this, ___capacity, method) (( void (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1__ctor_m10097_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m66631_gshared (List_1_t3063 * __this, KeyValuePair_2U5BU5D_t9185* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m66631(__this, ___data, ___size, method) (( void (*) (List_1_t3063 *, KeyValuePair_2U5BU5D_t9185*, int32_t, const MethodInfo*))List_1__ctor_m66631_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m66632_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m66632(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m66632_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66633_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66633(__this, method) (( Object_t* (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m66634_gshared (List_1_t3063 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m66634(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3063 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m66634_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m66635_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m66635(__this, method) (( Object_t * (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m66635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m66636_gshared (List_1_t3063 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m66636(__this, ___item, method) (( int32_t (*) (List_1_t3063 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m66636_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m66637_gshared (List_1_t3063 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m66637(__this, ___item, method) (( bool (*) (List_1_t3063 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m66637_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m66638_gshared (List_1_t3063 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m66638(__this, ___item, method) (( int32_t (*) (List_1_t3063 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m66638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m66639_gshared (List_1_t3063 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m66639(__this, ___index, ___item, method) (( void (*) (List_1_t3063 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m66639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m66640_gshared (List_1_t3063 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m66640(__this, ___item, method) (( void (*) (List_1_t3063 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m66640_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66641_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66641(__this, method) (( bool (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66641_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m66642_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m66642(__this, method) (( bool (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m66642_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m66643_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m66643(__this, method) (( Object_t * (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m66643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m66644_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m66644(__this, method) (( bool (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m66644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m66645_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m66645(__this, method) (( bool (*) (List_1_t3063 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m66645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m66646_gshared (List_1_t3063 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m66646(__this, ___index, method) (( Object_t * (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m66646_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m66647_gshared (List_1_t3063 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m66647(__this, ___index, ___value, method) (( void (*) (List_1_t3063 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m66647_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m66648_gshared (List_1_t3063 * __this, KeyValuePair_2_t3078  ___item, const MethodInfo* method);
#define List_1_Add_m66648(__this, ___item, method) (( void (*) (List_1_t3063 *, KeyValuePair_2_t3078 , const MethodInfo*))List_1_Add_m66648_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m66649_gshared (List_1_t3063 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m66649(__this, ___newCount, method) (( void (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m66649_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m66650_gshared (List_1_t3063 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m66650(__this, ___idx, ___count, method) (( void (*) (List_1_t3063 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m66650_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m66651_gshared (List_1_t3063 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m66651(__this, ___collection, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1_AddCollection_m66651_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m66652_gshared (List_1_t3063 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m66652(__this, ___enumerable, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m66652_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m66653_gshared (List_1_t3063 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m66653(__this, ___collection, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1_AddRange_m66653_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9189 * List_1_AsReadOnly_m66654_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m66654(__this, method) (( ReadOnlyCollection_1_t9189 * (*) (List_1_t3063 *, const MethodInfo*))List_1_AsReadOnly_m66654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m66655_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_Clear_m66655(__this, method) (( void (*) (List_1_t3063 *, const MethodInfo*))List_1_Clear_m66655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m66656_gshared (List_1_t3063 * __this, KeyValuePair_2_t3078  ___item, const MethodInfo* method);
#define List_1_Contains_m66656(__this, ___item, method) (( bool (*) (List_1_t3063 *, KeyValuePair_2_t3078 , const MethodInfo*))List_1_Contains_m66656_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m66657_gshared (List_1_t3063 * __this, KeyValuePair_2U5BU5D_t9185* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m66657(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3063 *, KeyValuePair_2U5BU5D_t9185*, int32_t, const MethodInfo*))List_1_CopyTo_m66657_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3078  List_1_Find_m66658_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_Find_m66658(__this, ___match, method) (( KeyValuePair_2_t3078  (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_Find_m66658_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m66659_gshared (Object_t * __this /* static, unused */, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m66659(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9193 *, const MethodInfo*))List_1_CheckMatch_m66659_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t3063 * List_1_FindAll_m66660_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_FindAll_m66660(__this, ___match, method) (( List_1_t3063 * (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_FindAll_m66660_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t3063 * List_1_FindAllStackBits_m66661_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m66661(__this, ___match, method) (( List_1_t3063 * (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_FindAllStackBits_m66661_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t3063 * List_1_FindAllList_m66662_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m66662(__this, ___match, method) (( List_1_t3063 * (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_FindAllList_m66662_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m66663_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m66663(__this, ___match, method) (( int32_t (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_FindIndex_m66663_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m66664_gshared (List_1_t3063 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m66664(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3063 *, int32_t, int32_t, Predicate_1_t9193 *, const MethodInfo*))List_1_GetIndex_m66664_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t9187  List_1_GetEnumerator_m66665_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m66665(__this, method) (( Enumerator_t9187  (*) (List_1_t3063 *, const MethodInfo*))List_1_GetEnumerator_m66665_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3063 * List_1_GetRange_m66666_gshared (List_1_t3063 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m66666(__this, ___index, ___count, method) (( List_1_t3063 * (*) (List_1_t3063 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m66666_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m66667_gshared (List_1_t3063 * __this, KeyValuePair_2_t3078  ___item, const MethodInfo* method);
#define List_1_IndexOf_m66667(__this, ___item, method) (( int32_t (*) (List_1_t3063 *, KeyValuePair_2_t3078 , const MethodInfo*))List_1_IndexOf_m66667_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m66668_gshared (List_1_t3063 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m66668(__this, ___start, ___delta, method) (( void (*) (List_1_t3063 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m66668_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m66669_gshared (List_1_t3063 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m66669(__this, ___index, method) (( void (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_CheckIndex_m66669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m66670_gshared (List_1_t3063 * __this, int32_t ___index, KeyValuePair_2_t3078  ___item, const MethodInfo* method);
#define List_1_Insert_m66670(__this, ___index, ___item, method) (( void (*) (List_1_t3063 *, int32_t, KeyValuePair_2_t3078 , const MethodInfo*))List_1_Insert_m66670_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m66671_gshared (List_1_t3063 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m66671(__this, ___collection, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m66671_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m66672_gshared (List_1_t3063 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m66672(__this, ___index, ___collection, method) (( void (*) (List_1_t3063 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m66672_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m66673_gshared (List_1_t3063 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m66673(__this, ___index, ___collection, method) (( void (*) (List_1_t3063 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m66673_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m66674_gshared (List_1_t3063 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m66674(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3063 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m66674_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m66675_gshared (List_1_t3063 * __this, KeyValuePair_2_t3078  ___item, const MethodInfo* method);
#define List_1_Remove_m66675(__this, ___item, method) (( bool (*) (List_1_t3063 *, KeyValuePair_2_t3078 , const MethodInfo*))List_1_Remove_m66675_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m66676_gshared (List_1_t3063 * __this, Predicate_1_t9193 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m66676(__this, ___match, method) (( int32_t (*) (List_1_t3063 *, Predicate_1_t9193 *, const MethodInfo*))List_1_RemoveAll_m66676_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m66677_gshared (List_1_t3063 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m66677(__this, ___index, method) (( void (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_RemoveAt_m66677_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m66678_gshared (List_1_t3063 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m66678(__this, ___index, ___count, method) (( void (*) (List_1_t3063 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m66678_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m66679_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_Reverse_m66679(__this, method) (( void (*) (List_1_t3063 *, const MethodInfo*))List_1_Reverse_m66679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m66680_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_Sort_m66680(__this, method) (( void (*) (List_1_t3063 *, const MethodInfo*))List_1_Sort_m66680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m66681_gshared (List_1_t3063 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m66681(__this, ___comparer, method) (( void (*) (List_1_t3063 *, Object_t*, const MethodInfo*))List_1_Sort_m66681_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m66682_gshared (List_1_t3063 * __this, Comparison_1_t9196 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m66682(__this, ___comparison, method) (( void (*) (List_1_t3063 *, Comparison_1_t9196 *, const MethodInfo*))List_1_Sort_m66682_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t9185* List_1_ToArray_m66683_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_ToArray_m66683(__this, method) (( KeyValuePair_2U5BU5D_t9185* (*) (List_1_t3063 *, const MethodInfo*))List_1_ToArray_m66683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m66684_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m66684(__this, method) (( void (*) (List_1_t3063 *, const MethodInfo*))List_1_TrimExcess_m66684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m66685_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m66685(__this, method) (( int32_t (*) (List_1_t3063 *, const MethodInfo*))List_1_get_Capacity_m66685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m66686_gshared (List_1_t3063 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m66686(__this, ___value, method) (( void (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_set_Capacity_m66686_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m66687_gshared (List_1_t3063 * __this, const MethodInfo* method);
#define List_1_get_Count_m66687(__this, method) (( int32_t (*) (List_1_t3063 *, const MethodInfo*))List_1_get_Count_m66687_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3078  List_1_get_Item_m66688_gshared (List_1_t3063 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m66688(__this, ___index, method) (( KeyValuePair_2_t3078  (*) (List_1_t3063 *, int32_t, const MethodInfo*))List_1_get_Item_m66688_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m66689_gshared (List_1_t3063 * __this, int32_t ___index, KeyValuePair_2_t3078  ___value, const MethodInfo* method);
#define List_1_set_Item_m66689(__this, ___index, ___value, method) (( void (*) (List_1_t3063 *, int32_t, KeyValuePair_2_t3078 , const MethodInfo*))List_1_set_Item_m66689_gshared)(__this, ___index, ___value, method)
