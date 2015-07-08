#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>
struct List_1_t184;
// System.Object
struct Object_t;
// PlaygroundSplines.PlaygroundSpline
struct PlaygroundSpline_t67;
// System.Collections.Generic.IEnumerable`1<PlaygroundSplines.PlaygroundSpline>
struct IEnumerable_1_t9930;
// PlaygroundSplines.PlaygroundSpline[]
struct PlaygroundSplineU5BU5D_t6345;
// System.Collections.Generic.IEnumerator`1<PlaygroundSplines.PlaygroundSpline>
struct IEnumerator_1_t9931;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PlaygroundSplines.PlaygroundSpline>
struct ICollection_1_t9932;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PlaygroundSplines.PlaygroundSpline>
struct ReadOnlyCollection_1_t6347;
// System.Predicate`1<PlaygroundSplines.PlaygroundSpline>
struct Predicate_1_t6348;
// System.Collections.Generic.IComparer`1<PlaygroundSplines.PlaygroundSpline>
struct IComparer_1_t9933;
// System.Comparison`1<PlaygroundSplines.PlaygroundSpline>
struct Comparison_1_t6350;
// System.Collections.Generic.List`1/Enumerator<PlaygroundSplines.PlaygroundSpline>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2842(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26352(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(System.Int32)
#define List_1__ctor_m26353(__this, ___capacity, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(T[],System.Int32)
#define List_1__ctor_m26354(__this, ___data, ___size, method) (( void (*) (List_1_t184 *, PlaygroundSplineU5BU5D_t6345*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.cctor()
#define List_1__cctor_m26355(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26356(__this, method) (( Object_t* (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26357(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t184 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26358(__this, method) (( Object_t * (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26359(__this, ___item, method) (( int32_t (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26360(__this, ___item, method) (( bool (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26361(__this, ___item, method) (( int32_t (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26362(__this, ___index, ___item, method) (( void (*) (List_1_t184 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26363(__this, ___item, method) (( void (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26364(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26365(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26366(__this, method) (( Object_t * (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26367(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26368(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26369(__this, ___index, method) (( Object_t * (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26370(__this, ___index, ___value, method) (( void (*) (List_1_t184 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Add(T)
#define List_1_Add_m26371(__this, ___item, method) (( void (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26372(__this, ___newCount, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26373(__this, ___idx, ___count, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26374(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26375(__this, ___enumerable, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26376(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AsReadOnly()
#define List_1_AsReadOnly_m26377(__this, method) (( ReadOnlyCollection_1_t6347 * (*) (List_1_t184 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Clear()
#define List_1_Clear_m26378(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Contains(T)
#define List_1_Contains_m26379(__this, ___item, method) (( bool (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26380(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t184 *, PlaygroundSplineU5BU5D_t6345*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Find(System.Predicate`1<T>)
#define List_1_Find_m26381(__this, ___match, method) (( PlaygroundSpline_t67 * (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26382(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6348 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m26383(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m26384(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m26385(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26386(__this, ___match, method) (( int32_t (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26387(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t184 *, int32_t, int32_t, Predicate_1_t6348 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetEnumerator()
#define List_1_GetEnumerator_m26388(__this, method) (( Enumerator_t6349  (*) (List_1_t184 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26389(__this, ___index, ___count, method) (( List_1_t184 * (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::IndexOf(T)
#define List_1_IndexOf_m26390(__this, ___item, method) (( int32_t (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26391(__this, ___start, ___delta, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26392(__this, ___index, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Insert(System.Int32,T)
#define List_1_Insert_m26393(__this, ___index, ___item, method) (( void (*) (List_1_t184 *, int32_t, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26394(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26395(__this, ___index, ___collection, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26396(__this, ___index, ___collection, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26397(__this, ___index, ___enumerable, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Remove(T)
#define List_1_Remove_m26398(__this, ___item, method) (( bool (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26399(__this, ___match, method) (( int32_t (*) (List_1_t184 *, Predicate_1_t6348 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26400(__this, ___index, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26401(__this, ___index, ___count, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Reverse()
#define List_1_Reverse_m26402(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort()
#define List_1_Sort_m26403(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26404(__this, ___comparer, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26405(__this, ___comparison, method) (( void (*) (List_1_t184 *, Comparison_1_t6350 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::ToArray()
#define List_1_ToArray_m26406(__this, method) (( PlaygroundSplineU5BU5D_t6345* (*) (List_1_t184 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::TrimExcess()
#define List_1_TrimExcess_m26407(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Capacity()
#define List_1_get_Capacity_m26408(__this, method) (( int32_t (*) (List_1_t184 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26409(__this, ___value, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Count()
#define List_1_get_Count_m26410(__this, method) (( int32_t (*) (List_1_t184 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Item(System.Int32)
#define List_1_get_Item_m26411(__this, ___index, method) (( PlaygroundSpline_t67 * (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::set_Item(System.Int32,T)
#define List_1_set_Item_m26412(__this, ___index, ___value, method) (( void (*) (List_1_t184 *, int32_t, PlaygroundSpline_t67 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
