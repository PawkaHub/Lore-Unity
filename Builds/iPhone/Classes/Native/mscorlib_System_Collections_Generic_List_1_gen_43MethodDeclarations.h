#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t1246;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t212;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t10157;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t6807;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t10156;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t10158;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t6809;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t6810;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
struct IComparer_1_t10159;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t6812;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5316(__this, method) (( void (*) (List_1_t1246 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33299(__this, ___collection, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m33300(__this, ___capacity, method) (( void (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(T[],System.Int32)
#define List_1__ctor_m33301(__this, ___data, ___size, method) (( void (*) (List_1_t1246 *, TextU5BU5D_t6807*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m33302(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33303(__this, method) (( Object_t* (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33304(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1246 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33305(__this, method) (( Object_t * (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33306(__this, ___item, method) (( int32_t (*) (List_1_t1246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33307(__this, ___item, method) (( bool (*) (List_1_t1246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33308(__this, ___item, method) (( int32_t (*) (List_1_t1246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33309(__this, ___index, ___item, method) (( void (*) (List_1_t1246 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33310(__this, ___item, method) (( void (*) (List_1_t1246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33311(__this, method) (( bool (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33312(__this, method) (( bool (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33313(__this, method) (( Object_t * (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33314(__this, method) (( bool (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33315(__this, method) (( bool (*) (List_1_t1246 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33316(__this, ___index, method) (( Object_t * (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33317(__this, ___index, ___value, method) (( void (*) (List_1_t1246 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m33318(__this, ___item, method) (( void (*) (List_1_t1246 *, Text_t212 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33319(__this, ___newCount, method) (( void (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33320(__this, ___idx, ___count, method) (( void (*) (List_1_t1246 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33321(__this, ___collection, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33322(__this, ___enumerable, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33323(__this, ___collection, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m33324(__this, method) (( ReadOnlyCollection_1_t6809 * (*) (List_1_t1246 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m33325(__this, method) (( void (*) (List_1_t1246 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m33326(__this, ___item, method) (( bool (*) (List_1_t1246 *, Text_t212 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33327(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1246 *, TextU5BU5D_t6807*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m33328(__this, ___match, method) (( Text_t212 * (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33329(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6810 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m33330(__this, ___match, method) (( List_1_t1246 * (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m33331(__this, ___match, method) (( List_1_t1246 * (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m33332(__this, ___match, method) (( List_1_t1246 * (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m33333(__this, ___match, method) (( int32_t (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33334(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1246 *, int32_t, int32_t, Predicate_1_t6810 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m33335(__this, method) (( Enumerator_t6811  (*) (List_1_t1246 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33336(__this, ___index, ___count, method) (( List_1_t1246 * (*) (List_1_t1246 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m33337(__this, ___item, method) (( int32_t (*) (List_1_t1246 *, Text_t212 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33338(__this, ___start, ___delta, method) (( void (*) (List_1_t1246 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33339(__this, ___index, method) (( void (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m33340(__this, ___index, ___item, method) (( void (*) (List_1_t1246 *, int32_t, Text_t212 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33341(__this, ___collection, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33342(__this, ___index, ___collection, method) (( void (*) (List_1_t1246 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33343(__this, ___index, ___collection, method) (( void (*) (List_1_t1246 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33344(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1246 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m33345(__this, ___item, method) (( bool (*) (List_1_t1246 *, Text_t212 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33346(__this, ___match, method) (( int32_t (*) (List_1_t1246 *, Predicate_1_t6810 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33347(__this, ___index, method) (( void (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33348(__this, ___index, ___count, method) (( void (*) (List_1_t1246 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m33349(__this, method) (( void (*) (List_1_t1246 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m33350(__this, method) (( void (*) (List_1_t1246 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33351(__this, ___comparer, method) (( void (*) (List_1_t1246 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33352(__this, ___comparison, method) (( void (*) (List_1_t1246 *, Comparison_1_t6812 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m33353(__this, method) (( TextU5BU5D_t6807* (*) (List_1_t1246 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m33354(__this, method) (( void (*) (List_1_t1246 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m33355(__this, method) (( int32_t (*) (List_1_t1246 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33356(__this, ___value, method) (( void (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m33357(__this, method) (( int32_t (*) (List_1_t1246 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m33358(__this, ___index, method) (( Text_t212 * (*) (List_1_t1246 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m33359(__this, ___index, ___value, method) (( void (*) (List_1_t1246 *, int32_t, Text_t212 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
