#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t5602;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1592;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5601;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5599;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t3178;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t5605;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5609;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t6798;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m33479_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1__ctor_m33479(__this, method) (( void (*) (List_1_t5602 *, const MethodInfo*))List_1__ctor_m33479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m33480_gshared (List_1_t5602 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m33480(__this, ___collection, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1__ctor_m33480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m33481_gshared (List_1_t5602 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m33481(__this, ___capacity, method) (( void (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1__ctor_m33481_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m33482_gshared (List_1_t5602 * __this, KeyValuePair_2U5BU5D_t5601* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m33482(__this, ___data, ___size, method) (( void (*) (List_1_t5602 *, KeyValuePair_2U5BU5D_t5601*, int32_t, const MethodInfo*))List_1__ctor_m33482_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m33483_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m33483(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m33483_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33484_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33484(__this, method) (( Object_t* (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m33485_gshared (List_1_t5602 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m33485(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5602 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m33485_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m33486_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33486(__this, method) (( Object_t * (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m33486_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m33487_gshared (List_1_t5602 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m33487(__this, ___item, method) (( int32_t (*) (List_1_t5602 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m33487_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m33488_gshared (List_1_t5602 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m33488(__this, ___item, method) (( bool (*) (List_1_t5602 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m33488_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m33489_gshared (List_1_t5602 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m33489(__this, ___item, method) (( int32_t (*) (List_1_t5602 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m33489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m33490_gshared (List_1_t5602 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m33490(__this, ___index, ___item, method) (( void (*) (List_1_t5602 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m33490_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m33491_gshared (List_1_t5602 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m33491(__this, ___item, method) (( void (*) (List_1_t5602 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m33491_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33492_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33492(__this, method) (( bool (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m33493_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33493(__this, method) (( bool (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m33493_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m33494_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m33494(__this, method) (( Object_t * (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m33494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m33495_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m33495(__this, method) (( bool (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m33495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m33496_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m33496(__this, method) (( bool (*) (List_1_t5602 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m33496_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m33497_gshared (List_1_t5602 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m33497(__this, ___index, method) (( Object_t * (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m33497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m33498_gshared (List_1_t5602 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m33498(__this, ___index, ___value, method) (( void (*) (List_1_t5602 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m33498_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m33499_gshared (List_1_t5602 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define List_1_Add_m33499(__this, ___item, method) (( void (*) (List_1_t5602 *, KeyValuePair_2_t1591 , const MethodInfo*))List_1_Add_m33499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m33500_gshared (List_1_t5602 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m33500(__this, ___newCount, method) (( void (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m33500_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m33501_gshared (List_1_t5602 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m33501(__this, ___idx, ___count, method) (( void (*) (List_1_t5602 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m33501_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m33502_gshared (List_1_t5602 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m33502(__this, ___collection, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1_AddCollection_m33502_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m33503_gshared (List_1_t5602 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m33503(__this, ___enumerable, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m33503_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m33504_gshared (List_1_t5602 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m33504(__this, ___collection, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1_AddRange_m33504_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5605 * List_1_AsReadOnly_m33505_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m33505(__this, method) (( ReadOnlyCollection_1_t5605 * (*) (List_1_t5602 *, const MethodInfo*))List_1_AsReadOnly_m33505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m33506_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_Clear_m33506(__this, method) (( void (*) (List_1_t5602 *, const MethodInfo*))List_1_Clear_m33506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m33507_gshared (List_1_t5602 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define List_1_Contains_m33507(__this, ___item, method) (( bool (*) (List_1_t5602 *, KeyValuePair_2_t1591 , const MethodInfo*))List_1_Contains_m33507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m33508_gshared (List_1_t5602 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m33508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5602 *, KeyValuePair_2U5BU5D_t5601*, int32_t, const MethodInfo*))List_1_CopyTo_m33508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1591  List_1_Find_m33509_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_Find_m33509(__this, ___match, method) (( KeyValuePair_2_t1591  (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_Find_m33509_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m33510_gshared (Object_t * __this /* static, unused */, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m33510(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5609 *, const MethodInfo*))List_1_CheckMatch_m33510_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t5602 * List_1_FindAll_m33511_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_FindAll_m33511(__this, ___match, method) (( List_1_t5602 * (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_FindAll_m33511_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t5602 * List_1_FindAllStackBits_m33512_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m33512(__this, ___match, method) (( List_1_t5602 * (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_FindAllStackBits_m33512_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t5602 * List_1_FindAllList_m33513_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m33513(__this, ___match, method) (( List_1_t5602 * (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_FindAllList_m33513_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m33514_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m33514(__this, ___match, method) (( int32_t (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_FindIndex_m33514_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m33515_gshared (List_1_t5602 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m33515(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5602 *, int32_t, int32_t, Predicate_1_t5609 *, const MethodInfo*))List_1_GetIndex_m33515_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t5603  List_1_GetEnumerator_m33516_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m33516(__this, method) (( Enumerator_t5603  (*) (List_1_t5602 *, const MethodInfo*))List_1_GetEnumerator_m33516_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5602 * List_1_GetRange_m33517_gshared (List_1_t5602 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m33517(__this, ___index, ___count, method) (( List_1_t5602 * (*) (List_1_t5602 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m33517_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m33518_gshared (List_1_t5602 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define List_1_IndexOf_m33518(__this, ___item, method) (( int32_t (*) (List_1_t5602 *, KeyValuePair_2_t1591 , const MethodInfo*))List_1_IndexOf_m33518_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m33519_gshared (List_1_t5602 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m33519(__this, ___start, ___delta, method) (( void (*) (List_1_t5602 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m33519_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m33520_gshared (List_1_t5602 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m33520(__this, ___index, method) (( void (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_CheckIndex_m33520_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m33521_gshared (List_1_t5602 * __this, int32_t ___index, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define List_1_Insert_m33521(__this, ___index, ___item, method) (( void (*) (List_1_t5602 *, int32_t, KeyValuePair_2_t1591 , const MethodInfo*))List_1_Insert_m33521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m33522_gshared (List_1_t5602 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m33522(__this, ___collection, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m33522_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m33523_gshared (List_1_t5602 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m33523(__this, ___index, ___collection, method) (( void (*) (List_1_t5602 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m33523_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m33524_gshared (List_1_t5602 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m33524(__this, ___index, ___collection, method) (( void (*) (List_1_t5602 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m33524_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m33525_gshared (List_1_t5602 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m33525(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5602 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m33525_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m33526_gshared (List_1_t5602 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define List_1_Remove_m33526(__this, ___item, method) (( bool (*) (List_1_t5602 *, KeyValuePair_2_t1591 , const MethodInfo*))List_1_Remove_m33526_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m33527_gshared (List_1_t5602 * __this, Predicate_1_t5609 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m33527(__this, ___match, method) (( int32_t (*) (List_1_t5602 *, Predicate_1_t5609 *, const MethodInfo*))List_1_RemoveAll_m33527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m33528_gshared (List_1_t5602 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m33528(__this, ___index, method) (( void (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_RemoveAt_m33528_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m33529_gshared (List_1_t5602 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m33529(__this, ___index, ___count, method) (( void (*) (List_1_t5602 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m33529_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m33530_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_Reverse_m33530(__this, method) (( void (*) (List_1_t5602 *, const MethodInfo*))List_1_Reverse_m33530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m33531_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_Sort_m33531(__this, method) (( void (*) (List_1_t5602 *, const MethodInfo*))List_1_Sort_m33531_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m33532_gshared (List_1_t5602 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m33532(__this, ___comparer, method) (( void (*) (List_1_t5602 *, Object_t*, const MethodInfo*))List_1_Sort_m33532_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m33533_gshared (List_1_t5602 * __this, Comparison_1_t5612 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m33533(__this, ___comparison, method) (( void (*) (List_1_t5602 *, Comparison_1_t5612 *, const MethodInfo*))List_1_Sort_m33533_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t5601* List_1_ToArray_m33534_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_ToArray_m33534(__this, method) (( KeyValuePair_2U5BU5D_t5601* (*) (List_1_t5602 *, const MethodInfo*))List_1_ToArray_m33534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m33535_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m33535(__this, method) (( void (*) (List_1_t5602 *, const MethodInfo*))List_1_TrimExcess_m33535_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m33536_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m33536(__this, method) (( int32_t (*) (List_1_t5602 *, const MethodInfo*))List_1_get_Capacity_m33536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m33537_gshared (List_1_t5602 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m33537(__this, ___value, method) (( void (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_set_Capacity_m33537_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m33538_gshared (List_1_t5602 * __this, const MethodInfo* method);
#define List_1_get_Count_m33538(__this, method) (( int32_t (*) (List_1_t5602 *, const MethodInfo*))List_1_get_Count_m33538_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1591  List_1_get_Item_m33539_gshared (List_1_t5602 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m33539(__this, ___index, method) (( KeyValuePair_2_t1591  (*) (List_1_t5602 *, int32_t, const MethodInfo*))List_1_get_Item_m33539_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m33540_gshared (List_1_t5602 * __this, int32_t ___index, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define List_1_set_Item_m33540(__this, ___index, ___value, method) (( void (*) (List_1_t5602 *, int32_t, KeyValuePair_2_t1591 , const MethodInfo*))List_1_set_Item_m33540_gshared)(__this, ___index, ___value, method)
