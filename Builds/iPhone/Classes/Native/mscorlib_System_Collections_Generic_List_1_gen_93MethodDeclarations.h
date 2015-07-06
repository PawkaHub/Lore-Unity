#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Char>
struct List_1_t3598;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t3944;
// System.Char[]
struct CharU5BU5D_t665;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t3945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t10368;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Char>
struct ReadOnlyCollection_1_t9245;
// System.Predicate`1<System.Char>
struct Predicate_1_t9246;
// System.Collections.Generic.IComparer`1<System.Char>
struct IComparer_1_t10611;
// System.Comparison`1<System.Char>
struct Comparison_1_t9248;
// System.Collections.Generic.List`1/Enumerator<System.Char>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_142.h"

// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
// System.Collections.Generic.List`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_gen_120MethodDeclarations.h"
#define List_1__ctor_m10965(__this, method) (( void (*) (List_1_t3598 *, const MethodInfo*))List_1__ctor_m43850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67739(__this, ___collection, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1__ctor_m43851_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Int32)
#define List_1__ctor_m67740(__this, ___capacity, method) (( void (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1__ctor_m43852_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(T[],System.Int32)
#define List_1__ctor_m67741(__this, ___data, ___size, method) (( void (*) (List_1_t3598 *, CharU5BU5D_t665*, int32_t, const MethodInfo*))List_1__ctor_m43853_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.cctor()
#define List_1__cctor_m67742(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43854_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67743(__this, method) (( Object_t* (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67744(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3598 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43856_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Char>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67745(__this, method) (( Object_t * (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43857_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67746(__this, ___item, method) (( int32_t (*) (List_1_t3598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43858_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67747(__this, ___item, method) (( bool (*) (List_1_t3598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43859_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67748(__this, ___item, method) (( int32_t (*) (List_1_t3598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43860_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67749(__this, ___index, ___item, method) (( void (*) (List_1_t3598 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43861_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67750(__this, ___item, method) (( void (*) (List_1_t3598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43862_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67751(__this, method) (( bool (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67752(__this, method) (( bool (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43864_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67753(__this, method) (( Object_t * (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67754(__this, method) (( bool (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67755(__this, method) (( bool (*) (List_1_t3598 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43867_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67756(__this, ___index, method) (( Object_t * (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43868_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67757(__this, ___index, ___value, method) (( void (*) (List_1_t3598 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43869_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
#define List_1_Add_m67758(__this, ___item, method) (( void (*) (List_1_t3598 *, uint16_t, const MethodInfo*))List_1_Add_m43870_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67759(__this, ___newCount, method) (( void (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43871_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67760(__this, ___idx, ___count, method) (( void (*) (List_1_t3598 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43872_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67761(__this, ___collection, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43873_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67762(__this, ___enumerable, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43874_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67763(__this, ___collection, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1_AddRange_m43875_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Char>::AsReadOnly()
#define List_1_AsReadOnly_m67764(__this, method) (( ReadOnlyCollection_1_t9245 * (*) (List_1_t3598 *, const MethodInfo*))List_1_AsReadOnly_m43876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
#define List_1_Clear_m67765(__this, method) (( void (*) (List_1_t3598 *, const MethodInfo*))List_1_Clear_m43877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(T)
#define List_1_Contains_m67766(__this, ___item, method) (( bool (*) (List_1_t3598 *, uint16_t, const MethodInfo*))List_1_Contains_m43878_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67767(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3598 *, CharU5BU5D_t665*, int32_t, const MethodInfo*))List_1_CopyTo_m43879_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Char>::Find(System.Predicate`1<T>)
#define List_1_Find_m67768(__this, ___match, method) (( uint16_t (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_Find_m43880_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67769(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9246 *, const MethodInfo*))List_1_CheckMatch_m43881_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67770(__this, ___match, method) (( List_1_t3598 * (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_FindAll_m43882_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67771(__this, ___match, method) (( List_1_t3598 * (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_FindAllStackBits_m43883_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67772(__this, ___match, method) (( List_1_t3598 * (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_FindAllList_m43884_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67773(__this, ___match, method) (( int32_t (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_FindIndex_m43885_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67774(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3598 *, int32_t, int32_t, Predicate_1_t9246 *, const MethodInfo*))List_1_GetIndex_m43886_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Char>::GetEnumerator()
#define List_1_GetEnumerator_m67775(__this, method) (( Enumerator_t9247  (*) (List_1_t3598 *, const MethodInfo*))List_1_GetEnumerator_m43887_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Char>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67776(__this, ___index, ___count, method) (( List_1_t3598 * (*) (List_1_t3598 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m43888_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::IndexOf(T)
#define List_1_IndexOf_m67777(__this, ___item, method) (( int32_t (*) (List_1_t3598 *, uint16_t, const MethodInfo*))List_1_IndexOf_m43889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67778(__this, ___start, ___delta, method) (( void (*) (List_1_t3598 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m43890_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67779(__this, ___index, method) (( void (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_CheckIndex_m43891_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
#define List_1_Insert_m67780(__this, ___index, ___item, method) (( void (*) (List_1_t3598 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m43892_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67781(__this, ___collection, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m43893_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67782(__this, ___index, ___collection, method) (( void (*) (List_1_t3598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m43894_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67783(__this, ___index, ___collection, method) (( void (*) (List_1_t3598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m43895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67784(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m43896_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Remove(T)
#define List_1_Remove_m67785(__this, ___item, method) (( bool (*) (List_1_t3598 *, uint16_t, const MethodInfo*))List_1_Remove_m43897_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67786(__this, ___match, method) (( int32_t (*) (List_1_t3598 *, Predicate_1_t9246 *, const MethodInfo*))List_1_RemoveAll_m43898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67787(__this, ___index, method) (( void (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_RemoveAt_m43899_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67788(__this, ___index, ___count, method) (( void (*) (List_1_t3598 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m43900_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Reverse()
#define List_1_Reverse_m67789(__this, method) (( void (*) (List_1_t3598 *, const MethodInfo*))List_1_Reverse_m43901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort()
#define List_1_Sort_m67790(__this, method) (( void (*) (List_1_t3598 *, const MethodInfo*))List_1_Sort_m43902_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67791(__this, ___comparer, method) (( void (*) (List_1_t3598 *, Object_t*, const MethodInfo*))List_1_Sort_m43903_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67792(__this, ___comparison, method) (( void (*) (List_1_t3598 *, Comparison_1_t9248 *, const MethodInfo*))List_1_Sort_m43904_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
#define List_1_ToArray_m10966(__this, method) (( CharU5BU5D_t665* (*) (List_1_t3598 *, const MethodInfo*))List_1_ToArray_m43905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::TrimExcess()
#define List_1_TrimExcess_m67793(__this, method) (( void (*) (List_1_t3598 *, const MethodInfo*))List_1_TrimExcess_m43906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Capacity()
#define List_1_get_Capacity_m67794(__this, method) (( int32_t (*) (List_1_t3598 *, const MethodInfo*))List_1_get_Capacity_m43907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67795(__this, ___value, method) (( void (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_set_Capacity_m43908_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
#define List_1_get_Count_m67796(__this, method) (( int32_t (*) (List_1_t3598 *, const MethodInfo*))List_1_get_Count_m43909_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
#define List_1_get_Item_m67797(__this, ___index, method) (( uint16_t (*) (List_1_t3598 *, int32_t, const MethodInfo*))List_1_get_Item_m43910_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,T)
#define List_1_set_Item_m67798(__this, ___index, ___value, method) (( void (*) (List_1_t3598 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m43911_gshared)(__this, ___index, ___value, method)
