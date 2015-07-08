#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1138;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t219;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t10170;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t231;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t10171;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t1252;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t6826;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6827;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
struct IComparer_1_t10172;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t1139;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5350(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33559(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m33560(__this, ___capacity, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(T[],System.Int32)
#define List_1__ctor_m33561(__this, ___data, ___size, method) (( void (*) (List_1_t1138 *, GraphicU5BU5D_t231*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m33562(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33563(__this, method) (( Object_t* (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33564(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1138 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33565(__this, method) (( Object_t * (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33566(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33567(__this, ___item, method) (( bool (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33568(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33569(__this, ___index, ___item, method) (( void (*) (List_1_t1138 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33570(__this, ___item, method) (( void (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33571(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33572(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33573(__this, method) (( Object_t * (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33574(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33575(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33576(__this, ___index, method) (( Object_t * (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33577(__this, ___index, ___value, method) (( void (*) (List_1_t1138 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m33578(__this, ___item, method) (( void (*) (List_1_t1138 *, Graphic_t219 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33579(__this, ___newCount, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33580(__this, ___idx, ___count, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33581(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33582(__this, ___enumerable, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33583(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m33584(__this, method) (( ReadOnlyCollection_1_t6826 * (*) (List_1_t1138 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m33585(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m33586(__this, ___item, method) (( bool (*) (List_1_t1138 *, Graphic_t219 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33587(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1138 *, GraphicU5BU5D_t231*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m33588(__this, ___match, method) (( Graphic_t219 * (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33589(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6827 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m33590(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m33591(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m33592(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m33593(__this, ___match, method) (( int32_t (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33594(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1138 *, int32_t, int32_t, Predicate_1_t6827 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m33595(__this, method) (( Enumerator_t6828  (*) (List_1_t1138 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33596(__this, ___index, ___count, method) (( List_1_t1138 * (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m33597(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Graphic_t219 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33598(__this, ___start, ___delta, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33599(__this, ___index, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m33600(__this, ___index, ___item, method) (( void (*) (List_1_t1138 *, int32_t, Graphic_t219 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33601(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33602(__this, ___index, ___collection, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33603(__this, ___index, ___collection, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33604(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m33605(__this, ___item, method) (( bool (*) (List_1_t1138 *, Graphic_t219 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33606(__this, ___match, method) (( int32_t (*) (List_1_t1138 *, Predicate_1_t6827 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33607(__this, ___index, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33608(__this, ___index, ___count, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m33609(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m33610(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33611(__this, ___comparer, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m5357(__this, ___comparison, method) (( void (*) (List_1_t1138 *, Comparison_1_t1139 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m33612(__this, method) (( GraphicU5BU5D_t231* (*) (List_1_t1138 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m33613(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m33614(__this, method) (( int32_t (*) (List_1_t1138 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33615(__this, ___value, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m33616(__this, method) (( int32_t (*) (List_1_t1138 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m33617(__this, ___index, method) (( Graphic_t219 * (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m33618(__this, ___index, ___value, method) (( void (*) (List_1_t1138 *, int32_t, Graphic_t219 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
