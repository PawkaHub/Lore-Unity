#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct List_1_t3818;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t3841;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerable_1_t10906;
// Language.Lua.Tuple`2<System.Int32,System.String>[]
struct Tuple_2U5BU5D_t9538;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerator_1_t10907;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ICollection_1_t10908;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ReadOnlyCollection_1_t9540;
// System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Predicate_1_t9541;
// System.Collections.Generic.IComparer`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IComparer_1_t10909;
// System.Comparison`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Comparison_1_t9542;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11424(__this, method) (( void (*) (List_1_t3818 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68886(__this, ___collection, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Int32)
#define List_1__ctor_m68887(__this, ___capacity, method) (( void (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(T[],System.Int32)
#define List_1__ctor_m68888(__this, ___data, ___size, method) (( void (*) (List_1_t3818 *, Tuple_2U5BU5D_t9538*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.cctor()
#define List_1__cctor_m68889(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68890(__this, method) (( Object_t* (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68891(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3818 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68892(__this, method) (( Object_t * (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68893(__this, ___item, method) (( int32_t (*) (List_1_t3818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68894(__this, ___item, method) (( bool (*) (List_1_t3818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68895(__this, ___item, method) (( int32_t (*) (List_1_t3818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68896(__this, ___index, ___item, method) (( void (*) (List_1_t3818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68897(__this, ___item, method) (( void (*) (List_1_t3818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68898(__this, method) (( bool (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68899(__this, method) (( bool (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68900(__this, method) (( Object_t * (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68901(__this, method) (( bool (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68902(__this, method) (( bool (*) (List_1_t3818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68903(__this, ___index, method) (( Object_t * (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68904(__this, ___index, ___value, method) (( void (*) (List_1_t3818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Add(T)
#define List_1_Add_m68905(__this, ___item, method) (( void (*) (List_1_t3818 *, Tuple_2_t3841 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68906(__this, ___newCount, method) (( void (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68907(__this, ___idx, ___count, method) (( void (*) (List_1_t3818 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68908(__this, ___collection, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68909(__this, ___enumerable, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68910(__this, ___collection, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AsReadOnly()
#define List_1_AsReadOnly_m68911(__this, method) (( ReadOnlyCollection_1_t9540 * (*) (List_1_t3818 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Clear()
#define List_1_Clear_m68912(__this, method) (( void (*) (List_1_t3818 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Contains(T)
#define List_1_Contains_m68913(__this, ___item, method) (( bool (*) (List_1_t3818 *, Tuple_2_t3841 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68914(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3818 *, Tuple_2U5BU5D_t9538*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Find(System.Predicate`1<T>)
#define List_1_Find_m68915(__this, ___match, method) (( Tuple_2_t3841 * (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68916(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9541 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68917(__this, ___match, method) (( List_1_t3818 * (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68918(__this, ___match, method) (( List_1_t3818 * (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68919(__this, ___match, method) (( List_1_t3818 * (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68920(__this, ___match, method) (( int32_t (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68921(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3818 *, int32_t, int32_t, Predicate_1_t9541 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetEnumerator()
#define List_1_GetEnumerator_m11435(__this, method) (( Enumerator_t3843  (*) (List_1_t3818 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68922(__this, ___index, ___count, method) (( List_1_t3818 * (*) (List_1_t3818 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::IndexOf(T)
#define List_1_IndexOf_m68923(__this, ___item, method) (( int32_t (*) (List_1_t3818 *, Tuple_2_t3841 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68924(__this, ___start, ___delta, method) (( void (*) (List_1_t3818 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68925(__this, ___index, method) (( void (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Insert(System.Int32,T)
#define List_1_Insert_m68926(__this, ___index, ___item, method) (( void (*) (List_1_t3818 *, int32_t, Tuple_2_t3841 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68927(__this, ___collection, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68928(__this, ___index, ___collection, method) (( void (*) (List_1_t3818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68929(__this, ___index, ___collection, method) (( void (*) (List_1_t3818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68930(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Remove(T)
#define List_1_Remove_m68931(__this, ___item, method) (( bool (*) (List_1_t3818 *, Tuple_2_t3841 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68932(__this, ___match, method) (( int32_t (*) (List_1_t3818 *, Predicate_1_t9541 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68933(__this, ___index, method) (( void (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m11434(__this, ___index, ___count, method) (( void (*) (List_1_t3818 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Reverse()
#define List_1_Reverse_m68934(__this, method) (( void (*) (List_1_t3818 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort()
#define List_1_Sort_m68935(__this, method) (( void (*) (List_1_t3818 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68936(__this, ___comparer, method) (( void (*) (List_1_t3818 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68937(__this, ___comparison, method) (( void (*) (List_1_t3818 *, Comparison_1_t9542 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::ToArray()
#define List_1_ToArray_m68938(__this, method) (( Tuple_2U5BU5D_t9538* (*) (List_1_t3818 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::TrimExcess()
#define List_1_TrimExcess_m68939(__this, method) (( void (*) (List_1_t3818 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Capacity()
#define List_1_get_Capacity_m68940(__this, method) (( int32_t (*) (List_1_t3818 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68941(__this, ___value, method) (( void (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Count()
#define List_1_get_Count_m68942(__this, method) (( int32_t (*) (List_1_t3818 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Item(System.Int32)
#define List_1_get_Item_m68943(__this, ___index, method) (( Tuple_2_t3841 * (*) (List_1_t3818 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Item(System.Int32,T)
#define List_1_set_Item_m68944(__this, ___index, ___value, method) (( void (*) (List_1_t3818 *, int32_t, Tuple_2_t3841 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
