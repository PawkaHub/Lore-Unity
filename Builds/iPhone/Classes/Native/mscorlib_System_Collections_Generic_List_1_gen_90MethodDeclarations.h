#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Char>
struct List_1_t2669;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t2558;
// System.Char[]
struct CharU5BU5D_t646;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t2559;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t7021;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Char>
struct ReadOnlyCollection_1_t6035;
// System.Predicate`1<System.Char>
struct Predicate_1_t6036;
// System.Collections.Generic.IComparer`1<System.Char>
struct IComparer_1_t7022;
// System.Comparison`1<System.Char>
struct Comparison_1_t6038;
// System.Collections.Generic.List`1/Enumerator<System.Char>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_100.h"

// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
// System.Collections.Generic.List`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_gen_115MethodDeclarations.h"
#define List_1__ctor_m12172(__this, method) (( void (*) (List_1_t2669 *, const MethodInfo*))List_1__ctor_m39820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39821(__this, ___collection, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1__ctor_m39822_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Int32)
#define List_1__ctor_m39823(__this, ___capacity, method) (( void (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1__ctor_m39824_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(T[],System.Int32)
#define List_1__ctor_m39825(__this, ___data, ___size, method) (( void (*) (List_1_t2669 *, CharU5BU5D_t646*, int32_t, const MethodInfo*))List_1__ctor_m39826_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.cctor()
#define List_1__cctor_m39827(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39828_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39829(__this, method) (( Object_t* (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39830_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39831(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2669 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39832_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Char>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39833(__this, method) (( Object_t * (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39835(__this, ___item, method) (( int32_t (*) (List_1_t2669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39836_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39837(__this, ___item, method) (( bool (*) (List_1_t2669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39838_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39839(__this, ___item, method) (( int32_t (*) (List_1_t2669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39840_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39841(__this, ___index, ___item, method) (( void (*) (List_1_t2669 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39842_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39843(__this, ___item, method) (( void (*) (List_1_t2669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39844_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39845(__this, method) (( bool (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39847(__this, method) (( bool (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39848_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39849(__this, method) (( Object_t * (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39851(__this, method) (( bool (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39852_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39853(__this, method) (( bool (*) (List_1_t2669 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39854_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39855(__this, ___index, method) (( Object_t * (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39856_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39857(__this, ___index, ___value, method) (( void (*) (List_1_t2669 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39858_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
#define List_1_Add_m39859(__this, ___item, method) (( void (*) (List_1_t2669 *, uint16_t, const MethodInfo*))List_1_Add_m39860_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39861(__this, ___newCount, method) (( void (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39862_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39863(__this, ___idx, ___count, method) (( void (*) (List_1_t2669 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39864_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39865(__this, ___collection, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39866_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39867(__this, ___enumerable, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39868_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39869(__this, ___collection, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1_AddRange_m39870_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Char>::AsReadOnly()
#define List_1_AsReadOnly_m39871(__this, method) (( ReadOnlyCollection_1_t6035 * (*) (List_1_t2669 *, const MethodInfo*))List_1_AsReadOnly_m39872_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
#define List_1_Clear_m39873(__this, method) (( void (*) (List_1_t2669 *, const MethodInfo*))List_1_Clear_m39874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(T)
#define List_1_Contains_m39875(__this, ___item, method) (( bool (*) (List_1_t2669 *, uint16_t, const MethodInfo*))List_1_Contains_m39876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39877(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2669 *, CharU5BU5D_t646*, int32_t, const MethodInfo*))List_1_CopyTo_m39878_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Char>::Find(System.Predicate`1<T>)
#define List_1_Find_m39879(__this, ___match, method) (( uint16_t (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_Find_m39880_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39881(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6036 *, const MethodInfo*))List_1_CheckMatch_m39882_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39883(__this, ___match, method) (( List_1_t2669 * (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_FindAll_m39884_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39885(__this, ___match, method) (( List_1_t2669 * (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_FindAllStackBits_m39886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39887(__this, ___match, method) (( List_1_t2669 * (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_FindAllList_m39888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39889(__this, ___match, method) (( int32_t (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_FindIndex_m39890_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2669 *, int32_t, int32_t, Predicate_1_t6036 *, const MethodInfo*))List_1_GetIndex_m39892_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Char>::GetEnumerator()
#define List_1_GetEnumerator_m39893(__this, method) (( Enumerator_t6037  (*) (List_1_t2669 *, const MethodInfo*))List_1_GetEnumerator_m39894_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39895(__this, ___index, ___count, method) (( List_1_t2669 * (*) (List_1_t2669 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39896_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::IndexOf(T)
#define List_1_IndexOf_m39897(__this, ___item, method) (( int32_t (*) (List_1_t2669 *, uint16_t, const MethodInfo*))List_1_IndexOf_m39898_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39899(__this, ___start, ___delta, method) (( void (*) (List_1_t2669 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39900_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39901(__this, ___index, method) (( void (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39902_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
#define List_1_Insert_m39903(__this, ___index, ___item, method) (( void (*) (List_1_t2669 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m39904_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39905(__this, ___collection, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39906_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39907(__this, ___index, ___collection, method) (( void (*) (List_1_t2669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39908_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39909(__this, ___index, ___collection, method) (( void (*) (List_1_t2669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39910_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39911(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39912_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Remove(T)
#define List_1_Remove_m39913(__this, ___item, method) (( bool (*) (List_1_t2669 *, uint16_t, const MethodInfo*))List_1_Remove_m39914_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39915(__this, ___match, method) (( int32_t (*) (List_1_t2669 *, Predicate_1_t6036 *, const MethodInfo*))List_1_RemoveAll_m39916_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39917(__this, ___index, method) (( void (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39918_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39919(__this, ___index, ___count, method) (( void (*) (List_1_t2669 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39920_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Reverse()
#define List_1_Reverse_m39921(__this, method) (( void (*) (List_1_t2669 *, const MethodInfo*))List_1_Reverse_m39922_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort()
#define List_1_Sort_m39923(__this, method) (( void (*) (List_1_t2669 *, const MethodInfo*))List_1_Sort_m39924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39925(__this, ___comparer, method) (( void (*) (List_1_t2669 *, Object_t*, const MethodInfo*))List_1_Sort_m39926_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39927(__this, ___comparison, method) (( void (*) (List_1_t2669 *, Comparison_1_t6038 *, const MethodInfo*))List_1_Sort_m39928_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
#define List_1_ToArray_m12173(__this, method) (( CharU5BU5D_t646* (*) (List_1_t2669 *, const MethodInfo*))List_1_ToArray_m39929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::TrimExcess()
#define List_1_TrimExcess_m39930(__this, method) (( void (*) (List_1_t2669 *, const MethodInfo*))List_1_TrimExcess_m39931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Capacity()
#define List_1_get_Capacity_m39932(__this, method) (( int32_t (*) (List_1_t2669 *, const MethodInfo*))List_1_get_Capacity_m39933_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39934(__this, ___value, method) (( void (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39935_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
#define List_1_get_Count_m39936(__this, method) (( int32_t (*) (List_1_t2669 *, const MethodInfo*))List_1_get_Count_m39937_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
#define List_1_get_Item_m39938(__this, ___index, method) (( uint16_t (*) (List_1_t2669 *, int32_t, const MethodInfo*))List_1_get_Item_m39939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,T)
#define List_1_set_Item_m39940(__this, ___index, ___value, method) (( void (*) (List_1_t2669 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m39941_gshared)(__this, ___index, ___value, method)
