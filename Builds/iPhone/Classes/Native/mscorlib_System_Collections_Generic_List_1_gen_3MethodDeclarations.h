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
struct IEnumerable_1_t9903;
// PlaygroundSplines.TransformNode[]
struct TransformNodeU5BU5D_t649;
// System.Collections.Generic.IEnumerator`1<PlaygroundSplines.TransformNode>
struct IEnumerator_1_t9904;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PlaygroundSplines.TransformNode>
struct ICollection_1_t9905;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PlaygroundSplines.TransformNode>
struct ReadOnlyCollection_1_t6304;
// System.Predicate`1<PlaygroundSplines.TransformNode>
struct Predicate_1_t6305;
// System.Collections.Generic.IComparer`1<PlaygroundSplines.TransformNode>
struct IComparer_1_t9906;
// System.Comparison`1<PlaygroundSplines.TransformNode>
struct Comparison_1_t6307;
// System.Collections.Generic.List`1/Enumerator<PlaygroundSplines.TransformNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2660(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25592(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Int32)
#define List_1__ctor_m25593(__this, ___capacity, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(T[],System.Int32)
#define List_1__ctor_m25594(__this, ___data, ___size, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t649*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.cctor()
#define List_1__cctor_m25595(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25596(__this, method) (( Object_t* (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25597(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25598(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25599(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25600(__this, ___item, method) (( bool (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25601(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25602(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25603(__this, ___item, method) (( void (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25604(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25605(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25606(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25607(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25608(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25609(__this, ___index, method) (( Object_t * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25610(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Add(T)
#define List_1_Add_m25611(__this, ___item, method) (( void (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25612(__this, ___newCount, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25613(__this, ___idx, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25614(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25615(__this, ___enumerable, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25616(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AsReadOnly()
#define List_1_AsReadOnly_m25617(__this, method) (( ReadOnlyCollection_1_t6304 * (*) (List_1_t65 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Clear()
#define List_1_Clear_m25618(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Contains(T)
#define List_1_Contains_m25619(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25620(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t649*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Find(System.Predicate`1<T>)
#define List_1_Find_m25621(__this, ___match, method) (( TransformNode_t71 * (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25622(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6305 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m25623(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m25624(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m25625(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m25626(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25627(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t65 *, int32_t, int32_t, Predicate_1_t6305 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetEnumerator()
#define List_1_GetEnumerator_m25628(__this, method) (( Enumerator_t6306  (*) (List_1_t65 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m2678(__this, ___index, ___count, method) (( List_1_t65 * (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::IndexOf(T)
#define List_1_IndexOf_m25629(__this, ___item, method) (( int32_t (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25630(__this, ___start, ___delta, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25631(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Insert(System.Int32,T)
#define List_1_Insert_m25632(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25633(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m2669(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25634(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25635(__this, ___index, ___enumerable, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Remove(T)
#define List_1_Remove_m25636(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25637(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t6305 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25638(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m2672(__this, ___index, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Reverse()
#define List_1_Reverse_m2674(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort()
#define List_1_Sort_m25639(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25640(__this, ___comparer, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25641(__this, ___comparison, method) (( void (*) (List_1_t65 *, Comparison_1_t6307 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::ToArray()
#define List_1_ToArray_m2679(__this, method) (( TransformNodeU5BU5D_t649* (*) (List_1_t65 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::TrimExcess()
#define List_1_TrimExcess_m25642(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Capacity()
#define List_1_get_Capacity_m25643(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25644(__this, ___value, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Count()
#define List_1_get_Count_m25645(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Item(System.Int32)
#define List_1_get_Item_m25646(__this, ___index, method) (( TransformNode_t71 * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m25647(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
