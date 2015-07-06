#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6837;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2556;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t10059;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6836;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t10060;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t10061;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6838;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6839;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t10062;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6841;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_90.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m37620(__this, method) (( void (*) (List_1_t6837 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m37621(__this, ___collection, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m37622(__this, ___capacity, method) (( void (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m37623(__this, ___data, ___size, method) (( void (*) (List_1_t6837 *, WeakReferenceU5BU5D_t6836*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m37624(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37625(__this, method) (( Object_t* (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m37626(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6837 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37627(__this, method) (( Object_t * (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m37628(__this, ___item, method) (( int32_t (*) (List_1_t6837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m37629(__this, ___item, method) (( bool (*) (List_1_t6837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m37630(__this, ___item, method) (( int32_t (*) (List_1_t6837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m37631(__this, ___index, ___item, method) (( void (*) (List_1_t6837 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m37632(__this, ___item, method) (( void (*) (List_1_t6837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37633(__this, method) (( bool (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37634(__this, method) (( bool (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m37635(__this, method) (( Object_t * (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m37636(__this, method) (( bool (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m37637(__this, method) (( bool (*) (List_1_t6837 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m37638(__this, ___index, method) (( Object_t * (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m37639(__this, ___index, ___value, method) (( void (*) (List_1_t6837 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m37640(__this, ___item, method) (( void (*) (List_1_t6837 *, WeakReference_t2556 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m37641(__this, ___newCount, method) (( void (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m37642(__this, ___idx, ___count, method) (( void (*) (List_1_t6837 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m37643(__this, ___collection, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m37644(__this, ___enumerable, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m37645(__this, ___collection, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m37646(__this, method) (( ReadOnlyCollection_1_t6838 * (*) (List_1_t6837 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m37647(__this, method) (( void (*) (List_1_t6837 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m37648(__this, ___item, method) (( bool (*) (List_1_t6837 *, WeakReference_t2556 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m37649(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6837 *, WeakReferenceU5BU5D_t6836*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m37650(__this, ___match, method) (( WeakReference_t2556 * (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m37651(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6839 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m37652(__this, ___match, method) (( List_1_t6837 * (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m37653(__this, ___match, method) (( List_1_t6837 * (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m37654(__this, ___match, method) (( List_1_t6837 * (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m37655(__this, ___match, method) (( int32_t (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m37656(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6837 *, int32_t, int32_t, Predicate_1_t6839 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m37657(__this, method) (( Enumerator_t6840  (*) (List_1_t6837 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m37658(__this, ___index, ___count, method) (( List_1_t6837 * (*) (List_1_t6837 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m37659(__this, ___item, method) (( int32_t (*) (List_1_t6837 *, WeakReference_t2556 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m37660(__this, ___start, ___delta, method) (( void (*) (List_1_t6837 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m37661(__this, ___index, method) (( void (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m37662(__this, ___index, ___item, method) (( void (*) (List_1_t6837 *, int32_t, WeakReference_t2556 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m37663(__this, ___collection, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m37664(__this, ___index, ___collection, method) (( void (*) (List_1_t6837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m37665(__this, ___index, ___collection, method) (( void (*) (List_1_t6837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m37666(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m37667(__this, ___item, method) (( bool (*) (List_1_t6837 *, WeakReference_t2556 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m37668(__this, ___match, method) (( int32_t (*) (List_1_t6837 *, Predicate_1_t6839 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m37669(__this, ___index, method) (( void (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m37670(__this, ___index, ___count, method) (( void (*) (List_1_t6837 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m37671(__this, method) (( void (*) (List_1_t6837 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m37672(__this, method) (( void (*) (List_1_t6837 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m37673(__this, ___comparer, method) (( void (*) (List_1_t6837 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m37674(__this, ___comparison, method) (( void (*) (List_1_t6837 *, Comparison_1_t6841 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m37675(__this, method) (( WeakReferenceU5BU5D_t6836* (*) (List_1_t6837 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m37676(__this, method) (( void (*) (List_1_t6837 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m37677(__this, method) (( int32_t (*) (List_1_t6837 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m37678(__this, ___value, method) (( void (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m37679(__this, method) (( int32_t (*) (List_1_t6837 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m37680(__this, ___index, method) (( WeakReference_t2556 * (*) (List_1_t6837 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m37681(__this, ___index, ___value, method) (( void (*) (List_1_t6837 *, int32_t, WeakReference_t2556 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)
