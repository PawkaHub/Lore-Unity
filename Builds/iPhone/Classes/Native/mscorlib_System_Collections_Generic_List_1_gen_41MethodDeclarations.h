#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>
struct List_1_t818;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Link
struct Link_t806;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.Link>
struct IEnumerable_1_t6684;
// PixelCrushers.DialogueSystem.Link[]
struct LinkU5BU5D_t5365;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.Link>
struct IEnumerator_1_t6685;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Link>
struct ICollection_1_t6686;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.Link>
struct ReadOnlyCollection_1_t5367;
// System.Predicate`1<PixelCrushers.DialogueSystem.Link>
struct Predicate_1_t5368;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.Link>
struct IComparer_1_t1158;
// System.Comparison`1<PixelCrushers.DialogueSystem.Link>
struct Comparison_1_t5369;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.Link>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5284(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30012(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::.ctor(System.Int32)
#define List_1__ctor_m30013(__this, ___capacity, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::.ctor(T[],System.Int32)
#define List_1__ctor_m30014(__this, ___data, ___size, method) (( void (*) (List_1_t818 *, LinkU5BU5D_t5365*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::.cctor()
#define List_1__cctor_m30015(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30016(__this, method) (( Object_t* (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30017(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t818 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30018(__this, method) (( Object_t * (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30019(__this, ___item, method) (( int32_t (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30020(__this, ___item, method) (( bool (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30021(__this, ___item, method) (( int32_t (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30022(__this, ___index, ___item, method) (( void (*) (List_1_t818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30023(__this, ___item, method) (( void (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30024(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30025(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30026(__this, method) (( Object_t * (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30027(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30028(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30029(__this, ___index, method) (( Object_t * (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30030(__this, ___index, ___value, method) (( void (*) (List_1_t818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Add(T)
#define List_1_Add_m30031(__this, ___item, method) (( void (*) (List_1_t818 *, Link_t806 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30032(__this, ___newCount, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30033(__this, ___idx, ___count, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30034(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30035(__this, ___enumerable, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30036(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::AsReadOnly()
#define List_1_AsReadOnly_m30037(__this, method) (( ReadOnlyCollection_1_t5367 * (*) (List_1_t818 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Clear()
#define List_1_Clear_m30038(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Contains(T)
#define List_1_Contains_m30039(__this, ___item, method) (( bool (*) (List_1_t818 *, Link_t806 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30040(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t818 *, LinkU5BU5D_t5365*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Find(System.Predicate`1<T>)
#define List_1_Find_m30041(__this, ___match, method) (( Link_t806 * (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30042(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5368 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30043(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30044(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30045(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30046(__this, ___match, method) (( int32_t (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30047(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t818 *, int32_t, int32_t, Predicate_1_t5368 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::GetEnumerator()
#define List_1_GetEnumerator_m5340(__this, method) (( Enumerator_t1103  (*) (List_1_t818 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30048(__this, ___index, ___count, method) (( List_1_t818 * (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::IndexOf(T)
#define List_1_IndexOf_m30049(__this, ___item, method) (( int32_t (*) (List_1_t818 *, Link_t806 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30050(__this, ___start, ___delta, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30051(__this, ___index, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Insert(System.Int32,T)
#define List_1_Insert_m30052(__this, ___index, ___item, method) (( void (*) (List_1_t818 *, int32_t, Link_t806 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30053(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30054(__this, ___index, ___collection, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30055(__this, ___index, ___collection, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30056(__this, ___index, ___enumerable, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Remove(T)
#define List_1_Remove_m30057(__this, ___item, method) (( bool (*) (List_1_t818 *, Link_t806 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30058(__this, ___match, method) (( int32_t (*) (List_1_t818 *, Predicate_1_t5368 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30059(__this, ___index, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30060(__this, ___index, ___count, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Reverse()
#define List_1_Reverse_m30061(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Sort()
#define List_1_Sort_m30062(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m5376(__this, ___comparer, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30063(__this, ___comparison, method) (( void (*) (List_1_t818 *, Comparison_1_t5369 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::ToArray()
#define List_1_ToArray_m30064(__this, method) (( LinkU5BU5D_t5365* (*) (List_1_t818 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::TrimExcess()
#define List_1_TrimExcess_m30065(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::get_Capacity()
#define List_1_get_Capacity_m30066(__this, method) (( int32_t (*) (List_1_t818 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30067(__this, ___value, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::get_Count()
#define List_1_get_Count_m30068(__this, method) (( int32_t (*) (List_1_t818 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::get_Item(System.Int32)
#define List_1_get_Item_m30069(__this, ___index, method) (( Link_t806 * (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Link>::set_Item(System.Int32,T)
#define List_1_set_Item_m30070(__this, ___index, ___value, method) (( void (*) (List_1_t818 *, int32_t, Link_t806 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)
