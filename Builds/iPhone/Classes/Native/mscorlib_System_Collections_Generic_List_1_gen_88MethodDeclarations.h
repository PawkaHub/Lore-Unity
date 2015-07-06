#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t3544;
// System.Object
struct Object_t;
// Language.Lua.Access
struct Access_t3523;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Access>
struct IEnumerable_1_t10591;
// Language.Lua.Access[]
struct AccessU5BU5D_t9218;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Access>
struct IEnumerator_1_t10592;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Access>
struct ICollection_1_t10593;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Access>
struct ReadOnlyCollection_1_t9220;
// System.Predicate`1<Language.Lua.Access>
struct Predicate_1_t9221;
// System.Collections.Generic.IComparer`1<Language.Lua.Access>
struct IComparer_1_t10594;
// System.Comparison`1<Language.Lua.Access>
struct Comparison_1_t9222;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Access>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10955(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67215(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Int32)
#define List_1__ctor_m67216(__this, ___capacity, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(T[],System.Int32)
#define List_1__ctor_m67217(__this, ___data, ___size, method) (( void (*) (List_1_t3544 *, AccessU5BU5D_t9218*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.cctor()
#define List_1__cctor_m67218(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67219(__this, method) (( Object_t* (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67220(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3544 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67221(__this, method) (( Object_t * (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67222(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67223(__this, ___item, method) (( bool (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67224(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67225(__this, ___index, ___item, method) (( void (*) (List_1_t3544 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67226(__this, ___item, method) (( void (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67227(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67228(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67229(__this, method) (( Object_t * (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67230(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67231(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67232(__this, ___index, method) (( Object_t * (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67233(__this, ___index, ___value, method) (( void (*) (List_1_t3544 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Add(T)
#define List_1_Add_m67234(__this, ___item, method) (( void (*) (List_1_t3544 *, Access_t3523 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67235(__this, ___newCount, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67236(__this, ___idx, ___count, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67237(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67238(__this, ___enumerable, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67239(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::AsReadOnly()
#define List_1_AsReadOnly_m67240(__this, method) (( ReadOnlyCollection_1_t9220 * (*) (List_1_t3544 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Clear()
#define List_1_Clear_m67241(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Contains(T)
#define List_1_Contains_m67242(__this, ___item, method) (( bool (*) (List_1_t3544 *, Access_t3523 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67243(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3544 *, AccessU5BU5D_t9218*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::Find(System.Predicate`1<T>)
#define List_1_Find_m67244(__this, ___match, method) (( Access_t3523 * (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67245(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9221 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67246(__this, ___match, method) (( List_1_t3544 * (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67247(__this, ___match, method) (( List_1_t3544 * (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67248(__this, ___match, method) (( List_1_t3544 * (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67249(__this, ___match, method) (( int32_t (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67250(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3544 *, int32_t, int32_t, Predicate_1_t9221 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetEnumerator()
#define List_1_GetEnumerator_m10956(__this, method) (( Enumerator_t3596  (*) (List_1_t3544 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67251(__this, ___index, ___count, method) (( List_1_t3544 * (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::IndexOf(T)
#define List_1_IndexOf_m67252(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, Access_t3523 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67253(__this, ___start, ___delta, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67254(__this, ___index, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Insert(System.Int32,T)
#define List_1_Insert_m67255(__this, ___index, ___item, method) (( void (*) (List_1_t3544 *, int32_t, Access_t3523 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67256(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67257(__this, ___index, ___collection, method) (( void (*) (List_1_t3544 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67258(__this, ___index, ___collection, method) (( void (*) (List_1_t3544 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67259(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3544 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Remove(T)
#define List_1_Remove_m67260(__this, ___item, method) (( bool (*) (List_1_t3544 *, Access_t3523 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67261(__this, ___match, method) (( int32_t (*) (List_1_t3544 *, Predicate_1_t9221 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67262(__this, ___index, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67263(__this, ___index, ___count, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Reverse()
#define List_1_Reverse_m67264(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort()
#define List_1_Sort_m67265(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67266(__this, ___comparer, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67267(__this, ___comparison, method) (( void (*) (List_1_t3544 *, Comparison_1_t9222 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Access>::ToArray()
#define List_1_ToArray_m67268(__this, method) (( AccessU5BU5D_t9218* (*) (List_1_t3544 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::TrimExcess()
#define List_1_TrimExcess_m67269(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Capacity()
#define List_1_get_Capacity_m67270(__this, method) (( int32_t (*) (List_1_t3544 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67271(__this, ___value, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Count()
#define List_1_get_Count_m67272(__this, method) (( int32_t (*) (List_1_t3544 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::get_Item(System.Int32)
#define List_1_get_Item_m67273(__this, ___index, method) (( Access_t3523 * (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Item(System.Int32,T)
#define List_1_set_Item_m67274(__this, ___index, ___value, method) (( void (*) (List_1_t3544 *, int32_t, Access_t3523 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)
