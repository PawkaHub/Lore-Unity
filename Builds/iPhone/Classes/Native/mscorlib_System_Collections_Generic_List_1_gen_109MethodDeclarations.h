#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4938;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1958;
// System.Type[]
struct TypeU5BU5D_t636;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t10045;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t10037;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t9753;
// System.Predicate`1<System.Type>
struct Predicate_1_t9754;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t11017;
// System.Comparison`1<System.Type>
struct Comparison_1_t9756;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_152.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m18054(__this, method) (( void (*) (List_1_t4938 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m72002(__this, ___collection, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m72003(__this, ___capacity, method) (( void (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(T[],System.Int32)
#define List_1__ctor_m72004(__this, ___data, ___size, method) (( void (*) (List_1_t4938 *, TypeU5BU5D_t636*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m72005(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72006(__this, method) (( Object_t* (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m72007(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4938 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m72008(__this, method) (( Object_t * (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m72009(__this, ___item, method) (( int32_t (*) (List_1_t4938 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m72010(__this, ___item, method) (( bool (*) (List_1_t4938 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m72011(__this, ___item, method) (( int32_t (*) (List_1_t4938 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m72012(__this, ___index, ___item, method) (( void (*) (List_1_t4938 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m72013(__this, ___item, method) (( void (*) (List_1_t4938 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m72014(__this, method) (( bool (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m72015(__this, method) (( bool (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m72016(__this, method) (( Object_t * (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m72017(__this, method) (( bool (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m72018(__this, method) (( bool (*) (List_1_t4938 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m72019(__this, ___index, method) (( Object_t * (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m72020(__this, ___index, ___value, method) (( void (*) (List_1_t4938 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m72021(__this, ___item, method) (( void (*) (List_1_t4938 *, Type_t *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m72022(__this, ___newCount, method) (( void (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m72023(__this, ___idx, ___count, method) (( void (*) (List_1_t4938 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m72024(__this, ___collection, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m72025(__this, ___enumerable, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m72026(__this, ___collection, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m72027(__this, method) (( ReadOnlyCollection_1_t9753 * (*) (List_1_t4938 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m72028(__this, method) (( void (*) (List_1_t4938 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m72029(__this, ___item, method) (( bool (*) (List_1_t4938 *, Type_t *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m72030(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4938 *, TypeU5BU5D_t636*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m72031(__this, ___match, method) (( Type_t * (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m72032(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9754 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m72033(__this, ___match, method) (( List_1_t4938 * (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m72034(__this, ___match, method) (( List_1_t4938 * (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m72035(__this, ___match, method) (( List_1_t4938 * (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m72036(__this, ___match, method) (( int32_t (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m72037(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4938 *, int32_t, int32_t, Predicate_1_t9754 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m72038(__this, method) (( Enumerator_t9755  (*) (List_1_t4938 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m72039(__this, ___index, ___count, method) (( List_1_t4938 * (*) (List_1_t4938 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m72040(__this, ___item, method) (( int32_t (*) (List_1_t4938 *, Type_t *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m72041(__this, ___start, ___delta, method) (( void (*) (List_1_t4938 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m72042(__this, ___index, method) (( void (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m72043(__this, ___index, ___item, method) (( void (*) (List_1_t4938 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m72044(__this, ___collection, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m72045(__this, ___index, ___collection, method) (( void (*) (List_1_t4938 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m72046(__this, ___index, ___collection, method) (( void (*) (List_1_t4938 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m72047(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4938 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m72048(__this, ___item, method) (( bool (*) (List_1_t4938 *, Type_t *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m72049(__this, ___match, method) (( int32_t (*) (List_1_t4938 *, Predicate_1_t9754 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m72050(__this, ___index, method) (( void (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m72051(__this, ___index, ___count, method) (( void (*) (List_1_t4938 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m72052(__this, method) (( void (*) (List_1_t4938 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m72053(__this, method) (( void (*) (List_1_t4938 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m72054(__this, ___comparer, method) (( void (*) (List_1_t4938 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m72055(__this, ___comparison, method) (( void (*) (List_1_t4938 *, Comparison_1_t9756 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m18055(__this, method) (( TypeU5BU5D_t636* (*) (List_1_t4938 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m72056(__this, method) (( void (*) (List_1_t4938 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m72057(__this, method) (( int32_t (*) (List_1_t4938 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m72058(__this, ___value, method) (( void (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m72059(__this, method) (( int32_t (*) (List_1_t4938 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m72060(__this, ___index, method) (( Type_t * (*) (List_1_t4938 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m72061(__this, ___index, ___value, method) (( void (*) (List_1_t4938 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
