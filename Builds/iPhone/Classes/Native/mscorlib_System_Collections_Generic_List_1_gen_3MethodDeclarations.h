#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>
struct List_1_t65;
// System.Object
struct Object_t;
// PlaygroundSplines.TransformNode
struct TransformNode_t71;
// System.Collections.Generic.IEnumerable`1<PlaygroundSplines.TransformNode>
struct IEnumerable_1_t9621;
// PlaygroundSplines.TransformNode[]
struct TransformNodeU5BU5D_t591;
// System.Collections.Generic.IEnumerator`1<PlaygroundSplines.TransformNode>
struct IEnumerator_1_t9622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PlaygroundSplines.TransformNode>
struct ICollection_1_t9623;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PlaygroundSplines.TransformNode>
struct ReadOnlyCollection_1_t6066;
// System.Predicate`1<PlaygroundSplines.TransformNode>
struct Predicate_1_t6067;
// System.Collections.Generic.IComparer`1<PlaygroundSplines.TransformNode>
struct IComparer_1_t9624;
// System.Comparison`1<PlaygroundSplines.TransformNode>
struct Comparison_1_t6069;
// System.Collections.Generic.List`1/Enumerator<PlaygroundSplines.TransformNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2488(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25175(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Int32)
#define List_1__ctor_m25176(__this, ___capacity, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(T[],System.Int32)
#define List_1__ctor_m25177(__this, ___data, ___size, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t591*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.cctor()
#define List_1__cctor_m25178(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25179(__this, method) (( Object_t* (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25180(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25181(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25182(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25183(__this, ___item, method) (( bool (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25184(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25185(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25186(__this, ___item, method) (( void (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25187(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25188(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25189(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25190(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25191(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25192(__this, ___index, method) (( Object_t * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25193(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Add(T)
#define List_1_Add_m25194(__this, ___item, method) (( void (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25195(__this, ___newCount, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25196(__this, ___idx, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25197(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25198(__this, ___enumerable, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25199(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AsReadOnly()
#define List_1_AsReadOnly_m25200(__this, method) (( ReadOnlyCollection_1_t6066 * (*) (List_1_t65 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Clear()
#define List_1_Clear_m25201(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Contains(T)
#define List_1_Contains_m25202(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25203(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t591*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Find(System.Predicate`1<T>)
#define List_1_Find_m25204(__this, ___match, method) (( TransformNode_t71 * (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25205(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6067 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m25206(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m25207(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m25208(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m25209(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25210(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t65 *, int32_t, int32_t, Predicate_1_t6067 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetEnumerator()
#define List_1_GetEnumerator_m25211(__this, method) (( Enumerator_t6068  (*) (List_1_t65 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m2506(__this, ___index, ___count, method) (( List_1_t65 * (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::IndexOf(T)
#define List_1_IndexOf_m25212(__this, ___item, method) (( int32_t (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25213(__this, ___start, ___delta, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25214(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Insert(System.Int32,T)
#define List_1_Insert_m25215(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25216(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m2497(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25217(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25218(__this, ___index, ___enumerable, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Remove(T)
#define List_1_Remove_m25219(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25220(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t6067 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25221(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m2500(__this, ___index, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Reverse()
#define List_1_Reverse_m2502(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort()
#define List_1_Sort_m25222(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25223(__this, ___comparer, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25224(__this, ___comparison, method) (( void (*) (List_1_t65 *, Comparison_1_t6069 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::ToArray()
#define List_1_ToArray_m2507(__this, method) (( TransformNodeU5BU5D_t591* (*) (List_1_t65 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::TrimExcess()
#define List_1_TrimExcess_m25225(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Capacity()
#define List_1_get_Capacity_m25226(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25227(__this, ___value, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Count()
#define List_1_get_Count_m25228(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Item(System.Int32)
#define List_1_get_Item_m25229(__this, ___index, method) (( TransformNode_t71 * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m25230(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)
