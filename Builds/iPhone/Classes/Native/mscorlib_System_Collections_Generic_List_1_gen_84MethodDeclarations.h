#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t2725;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t337;
// System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t10840;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t9411;
// System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_t10841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ICollection_1_t10842;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ReadOnlyCollection_1_t9412;
// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t9413;
// System.Collections.Generic.IComparer`1<System.Action`1<System.Threading.Tasks.Task>>
struct IComparer_1_t10843;
// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t9415;
// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_139.h"

// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m9394(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m66854(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Int32)
#define List_1__ctor_m66855(__this, ___capacity, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(T[],System.Int32)
#define List_1__ctor_m66856(__this, ___data, ___size, method) (( void (*) (List_1_t2725 *, Action_1U5BU5D_t9411*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.cctor()
#define List_1__cctor_m66857(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66858(__this, method) (( Object_t* (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m66859(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2725 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m66860(__this, method) (( Object_t * (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m66861(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m66862(__this, ___item, method) (( bool (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m66863(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m66864(__this, ___index, ___item, method) (( void (*) (List_1_t2725 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m66865(__this, ___item, method) (( void (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66866(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m66867(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m66868(__this, method) (( Object_t * (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m66869(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m66870(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m66871(__this, ___index, method) (( Object_t * (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m66872(__this, ___index, ___value, method) (( void (*) (List_1_t2725 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Add(T)
#define List_1_Add_m66873(__this, ___item, method) (( void (*) (List_1_t2725 *, Action_1_t337 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m66874(__this, ___newCount, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m66875(__this, ___idx, ___count, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m66876(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m66877(__this, ___enumerable, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m66878(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AsReadOnly()
#define List_1_AsReadOnly_m66879(__this, method) (( ReadOnlyCollection_1_t9412 * (*) (List_1_t2725 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Clear()
#define List_1_Clear_m66880(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Contains(T)
#define List_1_Contains_m66881(__this, ___item, method) (( bool (*) (List_1_t2725 *, Action_1_t337 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m66882(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2725 *, Action_1U5BU5D_t9411*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Find(System.Predicate`1<T>)
#define List_1_Find_m66883(__this, ___match, method) (( Action_1_t337 * (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m66884(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9413 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m66885(__this, ___match, method) (( List_1_t2725 * (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m66886(__this, ___match, method) (( List_1_t2725 * (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m66887(__this, ___match, method) (( List_1_t2725 * (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m66888(__this, ___match, method) (( int32_t (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m66889(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2725 *, int32_t, int32_t, Predicate_1_t9413 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator()
#define List_1_GetEnumerator_m66890(__this, method) (( Enumerator_t9414  (*) (List_1_t2725 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m66891(__this, ___index, ___count, method) (( List_1_t2725 * (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::IndexOf(T)
#define List_1_IndexOf_m66892(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, Action_1_t337 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m66893(__this, ___start, ___delta, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m66894(__this, ___index, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Insert(System.Int32,T)
#define List_1_Insert_m66895(__this, ___index, ___item, method) (( void (*) (List_1_t2725 *, int32_t, Action_1_t337 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m66896(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m66897(__this, ___index, ___collection, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m66898(__this, ___index, ___collection, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m66899(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Remove(T)
#define List_1_Remove_m66900(__this, ___item, method) (( bool (*) (List_1_t2725 *, Action_1_t337 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m66901(__this, ___match, method) (( int32_t (*) (List_1_t2725 *, Predicate_1_t9413 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m66902(__this, ___index, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m66903(__this, ___index, ___count, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Reverse()
#define List_1_Reverse_m66904(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort()
#define List_1_Sort_m66905(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m66906(__this, ___comparer, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m66907(__this, ___comparison, method) (( void (*) (List_1_t2725 *, Comparison_1_t9415 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::ToArray()
#define List_1_ToArray_m66908(__this, method) (( Action_1U5BU5D_t9411* (*) (List_1_t2725 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::TrimExcess()
#define List_1_TrimExcess_m66909(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Capacity()
#define List_1_get_Capacity_m66910(__this, method) (( int32_t (*) (List_1_t2725 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m66911(__this, ___value, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Count()
#define List_1_get_Count_m66912(__this, method) (( int32_t (*) (List_1_t2725 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Item(System.Int32)
#define List_1_get_Item_m66913(__this, ___index, method) (( Action_1_t337 * (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Item(System.Int32,T)
#define List_1_set_Item_m66914(__this, ___index, ___value, method) (( void (*) (List_1_t2725 *, int32_t, Action_1_t337 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
