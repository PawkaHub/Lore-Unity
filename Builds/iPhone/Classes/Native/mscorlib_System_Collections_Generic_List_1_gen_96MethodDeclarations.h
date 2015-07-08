#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Char>
struct List_1_t3836;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t4182;
// System.Char[]
struct CharU5BU5D_t583;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t4183;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t10659;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Char>
struct ReadOnlyCollection_1_t9527;
// System.Predicate`1<System.Char>
struct Predicate_1_t9528;
// System.Collections.Generic.IComparer`1<System.Char>
struct IComparer_1_t10902;
// System.Comparison`1<System.Char>
struct Comparison_1_t9530;
// System.Collections.Generic.List`1/Enumerator<System.Char>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_145.h"

// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
// System.Collections.Generic.List`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_gen_123MethodDeclarations.h"
#define List_1__ctor_m11384(__this, method) (( void (*) (List_1_t3836 *, const MethodInfo*))List_1__ctor_m44765_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68654(__this, ___collection, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1__ctor_m44766_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Int32)
#define List_1__ctor_m68655(__this, ___capacity, method) (( void (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1__ctor_m44767_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(T[],System.Int32)
#define List_1__ctor_m68656(__this, ___data, ___size, method) (( void (*) (List_1_t3836 *, CharU5BU5D_t583*, int32_t, const MethodInfo*))List_1__ctor_m44768_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.cctor()
#define List_1__cctor_m68657(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m44769_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68658(__this, method) (( Object_t* (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44770_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68659(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3836 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m44771_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Char>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68660(__this, method) (( Object_t * (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m44772_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68661(__this, ___item, method) (( int32_t (*) (List_1_t3836 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m44773_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68662(__this, ___item, method) (( bool (*) (List_1_t3836 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m44774_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68663(__this, ___item, method) (( int32_t (*) (List_1_t3836 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m44775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68664(__this, ___index, ___item, method) (( void (*) (List_1_t3836 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m44776_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68665(__this, ___item, method) (( void (*) (List_1_t3836 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m44777_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68666(__this, method) (( bool (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68667(__this, method) (( bool (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m44779_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68668(__this, method) (( Object_t * (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m44780_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68669(__this, method) (( bool (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m44781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68670(__this, method) (( bool (*) (List_1_t3836 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m44782_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68671(__this, ___index, method) (( Object_t * (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m44783_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68672(__this, ___index, ___value, method) (( void (*) (List_1_t3836 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m44784_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
#define List_1_Add_m68673(__this, ___item, method) (( void (*) (List_1_t3836 *, uint16_t, const MethodInfo*))List_1_Add_m44785_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68674(__this, ___newCount, method) (( void (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m44786_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68675(__this, ___idx, ___count, method) (( void (*) (List_1_t3836 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m44787_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68676(__this, ___collection, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1_AddCollection_m44788_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68677(__this, ___enumerable, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m44789_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68678(__this, ___collection, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1_AddRange_m44790_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Char>::AsReadOnly()
#define List_1_AsReadOnly_m68679(__this, method) (( ReadOnlyCollection_1_t9527 * (*) (List_1_t3836 *, const MethodInfo*))List_1_AsReadOnly_m44791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
#define List_1_Clear_m68680(__this, method) (( void (*) (List_1_t3836 *, const MethodInfo*))List_1_Clear_m44792_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(T)
#define List_1_Contains_m68681(__this, ___item, method) (( bool (*) (List_1_t3836 *, uint16_t, const MethodInfo*))List_1_Contains_m44793_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68682(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3836 *, CharU5BU5D_t583*, int32_t, const MethodInfo*))List_1_CopyTo_m44794_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Char>::Find(System.Predicate`1<T>)
#define List_1_Find_m68683(__this, ___match, method) (( uint16_t (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_Find_m44795_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68684(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9528 *, const MethodInfo*))List_1_CheckMatch_m44796_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68685(__this, ___match, method) (( List_1_t3836 * (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_FindAll_m44797_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68686(__this, ___match, method) (( List_1_t3836 * (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_FindAllStackBits_m44798_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68687(__this, ___match, method) (( List_1_t3836 * (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_FindAllList_m44799_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68688(__this, ___match, method) (( int32_t (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_FindIndex_m44800_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68689(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3836 *, int32_t, int32_t, Predicate_1_t9528 *, const MethodInfo*))List_1_GetIndex_m44801_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Char>::GetEnumerator()
#define List_1_GetEnumerator_m68690(__this, method) (( Enumerator_t9529  (*) (List_1_t3836 *, const MethodInfo*))List_1_GetEnumerator_m44802_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68691(__this, ___index, ___count, method) (( List_1_t3836 * (*) (List_1_t3836 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m44803_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::IndexOf(T)
#define List_1_IndexOf_m68692(__this, ___item, method) (( int32_t (*) (List_1_t3836 *, uint16_t, const MethodInfo*))List_1_IndexOf_m44804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68693(__this, ___start, ___delta, method) (( void (*) (List_1_t3836 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m44805_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68694(__this, ___index, method) (( void (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_CheckIndex_m44806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
#define List_1_Insert_m68695(__this, ___index, ___item, method) (( void (*) (List_1_t3836 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m44807_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68696(__this, ___collection, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m44808_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68697(__this, ___index, ___collection, method) (( void (*) (List_1_t3836 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m44809_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68698(__this, ___index, ___collection, method) (( void (*) (List_1_t3836 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m44810_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68699(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3836 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m44811_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Remove(T)
#define List_1_Remove_m68700(__this, ___item, method) (( bool (*) (List_1_t3836 *, uint16_t, const MethodInfo*))List_1_Remove_m44812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68701(__this, ___match, method) (( int32_t (*) (List_1_t3836 *, Predicate_1_t9528 *, const MethodInfo*))List_1_RemoveAll_m44813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68702(__this, ___index, method) (( void (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_RemoveAt_m44814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68703(__this, ___index, ___count, method) (( void (*) (List_1_t3836 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m44815_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Reverse()
#define List_1_Reverse_m68704(__this, method) (( void (*) (List_1_t3836 *, const MethodInfo*))List_1_Reverse_m44816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort()
#define List_1_Sort_m68705(__this, method) (( void (*) (List_1_t3836 *, const MethodInfo*))List_1_Sort_m44817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68706(__this, ___comparer, method) (( void (*) (List_1_t3836 *, Object_t*, const MethodInfo*))List_1_Sort_m44818_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68707(__this, ___comparison, method) (( void (*) (List_1_t3836 *, Comparison_1_t9530 *, const MethodInfo*))List_1_Sort_m44819_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
#define List_1_ToArray_m11385(__this, method) (( CharU5BU5D_t583* (*) (List_1_t3836 *, const MethodInfo*))List_1_ToArray_m44820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::TrimExcess()
#define List_1_TrimExcess_m68708(__this, method) (( void (*) (List_1_t3836 *, const MethodInfo*))List_1_TrimExcess_m44821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Capacity()
#define List_1_get_Capacity_m68709(__this, method) (( int32_t (*) (List_1_t3836 *, const MethodInfo*))List_1_get_Capacity_m44822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68710(__this, ___value, method) (( void (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_set_Capacity_m44823_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
#define List_1_get_Count_m68711(__this, method) (( int32_t (*) (List_1_t3836 *, const MethodInfo*))List_1_get_Count_m44824_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
#define List_1_get_Item_m68712(__this, ___index, method) (( uint16_t (*) (List_1_t3836 *, int32_t, const MethodInfo*))List_1_get_Item_m44825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,T)
#define List_1_set_Item_m68713(__this, ___index, ___value, method) (( void (*) (List_1_t3836 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m44826_gshared)(__this, ___index, ___value, method)
