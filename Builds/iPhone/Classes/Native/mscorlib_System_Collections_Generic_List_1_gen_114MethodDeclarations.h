#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6854;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1798;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6853;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6851;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4910;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6857;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6861;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t10063;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6864;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m37829_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1__ctor_m37829(__this, method) (( void (*) (List_1_t6854 *, const MethodInfo*))List_1__ctor_m37829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37830_gshared (List_1_t6854 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37830(__this, ___collection, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1__ctor_m37830_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37831_gshared (List_1_t6854 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37831(__this, ___capacity, method) (( void (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1__ctor_m37831_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37832_gshared (List_1_t6854 * __this, KeyValuePair_2U5BU5D_t6853* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37832(__this, ___data, ___size, method) (( void (*) (List_1_t6854 *, KeyValuePair_2U5BU5D_t6853*, int32_t, const MethodInfo*))List_1__ctor_m37832_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m37833_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37833(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37833_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37834_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37834(__this, method) (( Object_t* (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37835_gshared (List_1_t6854 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37835(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6854 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37835_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37836_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37836(__this, method) (( Object_t * (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37837_gshared (List_1_t6854 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37837(__this, ___item, method) (( int32_t (*) (List_1_t6854 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37837_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37838_gshared (List_1_t6854 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37838(__this, ___item, method) (( bool (*) (List_1_t6854 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37838_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37839_gshared (List_1_t6854 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37839(__this, ___item, method) (( int32_t (*) (List_1_t6854 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37840_gshared (List_1_t6854 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37840(__this, ___index, ___item, method) (( void (*) (List_1_t6854 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37841_gshared (List_1_t6854 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37841(__this, ___item, method) (( void (*) (List_1_t6854 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37841_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37842_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37842(__this, method) (( bool (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37842_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37843_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37843(__this, method) (( bool (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37843_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37844_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37844(__this, method) (( Object_t * (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37844_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37845_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37845(__this, method) (( bool (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37845_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37846_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37846(__this, method) (( bool (*) (List_1_t6854 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37846_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37847_gshared (List_1_t6854 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37847(__this, ___index, method) (( Object_t * (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37848_gshared (List_1_t6854 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37848(__this, ___index, ___value, method) (( void (*) (List_1_t6854 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37848_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m37849_gshared (List_1_t6854 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define List_1_Add_m37849(__this, ___item, method) (( void (*) (List_1_t6854 *, KeyValuePair_2_t1797 , const MethodInfo*))List_1_Add_m37849_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37850_gshared (List_1_t6854 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37850(__this, ___newCount, method) (( void (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37850_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37851_gshared (List_1_t6854 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37851(__this, ___idx, ___count, method) (( void (*) (List_1_t6854 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37851_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37852_gshared (List_1_t6854 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37852(__this, ___collection, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37853_gshared (List_1_t6854 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37853(__this, ___enumerable, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37853_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37854_gshared (List_1_t6854 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37854(__this, ___collection, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1_AddRange_m37854_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6857 * List_1_AsReadOnly_m37855_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37855(__this, method) (( ReadOnlyCollection_1_t6857 * (*) (List_1_t6854 *, const MethodInfo*))List_1_AsReadOnly_m37855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m37856_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_Clear_m37856(__this, method) (( void (*) (List_1_t6854 *, const MethodInfo*))List_1_Clear_m37856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m37857_gshared (List_1_t6854 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define List_1_Contains_m37857(__this, ___item, method) (( bool (*) (List_1_t6854 *, KeyValuePair_2_t1797 , const MethodInfo*))List_1_Contains_m37857_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37858_gshared (List_1_t6854 * __this, KeyValuePair_2U5BU5D_t6853* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37858(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6854 *, KeyValuePair_2U5BU5D_t6853*, int32_t, const MethodInfo*))List_1_CopyTo_m37858_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1797  List_1_Find_m37859_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_Find_m37859(__this, ___match, method) (( KeyValuePair_2_t1797  (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_Find_m37859_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37860_gshared (Object_t * __this /* static, unused */, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37860(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6861 *, const MethodInfo*))List_1_CheckMatch_m37860_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t6854 * List_1_FindAll_m37861_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_FindAll_m37861(__this, ___match, method) (( List_1_t6854 * (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_FindAll_m37861_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t6854 * List_1_FindAllStackBits_m37862_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m37862(__this, ___match, method) (( List_1_t6854 * (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_FindAllStackBits_m37862_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t6854 * List_1_FindAllList_m37863_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m37863(__this, ___match, method) (( List_1_t6854 * (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_FindAllList_m37863_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m37864_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m37864(__this, ___match, method) (( int32_t (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_FindIndex_m37864_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37865_gshared (List_1_t6854 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37865(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6854 *, int32_t, int32_t, Predicate_1_t6861 *, const MethodInfo*))List_1_GetIndex_m37865_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6855  List_1_GetEnumerator_m37866_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37866(__this, method) (( Enumerator_t6855  (*) (List_1_t6854 *, const MethodInfo*))List_1_GetEnumerator_m37866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6854 * List_1_GetRange_m37867_gshared (List_1_t6854 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37867(__this, ___index, ___count, method) (( List_1_t6854 * (*) (List_1_t6854 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37867_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37868_gshared (List_1_t6854 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define List_1_IndexOf_m37868(__this, ___item, method) (( int32_t (*) (List_1_t6854 *, KeyValuePair_2_t1797 , const MethodInfo*))List_1_IndexOf_m37868_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37869_gshared (List_1_t6854 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37869(__this, ___start, ___delta, method) (( void (*) (List_1_t6854 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37869_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37870_gshared (List_1_t6854 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37870(__this, ___index, method) (( void (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37871_gshared (List_1_t6854 * __this, int32_t ___index, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define List_1_Insert_m37871(__this, ___index, ___item, method) (( void (*) (List_1_t6854 *, int32_t, KeyValuePair_2_t1797 , const MethodInfo*))List_1_Insert_m37871_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37872_gshared (List_1_t6854 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37872(__this, ___collection, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37872_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37873_gshared (List_1_t6854 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37873(__this, ___index, ___collection, method) (( void (*) (List_1_t6854 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37873_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37874_gshared (List_1_t6854 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37874(__this, ___index, ___collection, method) (( void (*) (List_1_t6854 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37874_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37875_gshared (List_1_t6854 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37875(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6854 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37875_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m37876_gshared (List_1_t6854 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define List_1_Remove_m37876(__this, ___item, method) (( bool (*) (List_1_t6854 *, KeyValuePair_2_t1797 , const MethodInfo*))List_1_Remove_m37876_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37877_gshared (List_1_t6854 * __this, Predicate_1_t6861 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37877(__this, ___match, method) (( int32_t (*) (List_1_t6854 *, Predicate_1_t6861 *, const MethodInfo*))List_1_RemoveAll_m37877_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37878_gshared (List_1_t6854 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37878(__this, ___index, method) (( void (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37878_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37879_gshared (List_1_t6854 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37879(__this, ___index, ___count, method) (( void (*) (List_1_t6854 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37879_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m37880_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_Reverse_m37880(__this, method) (( void (*) (List_1_t6854 *, const MethodInfo*))List_1_Reverse_m37880_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m37881_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_Sort_m37881(__this, method) (( void (*) (List_1_t6854 *, const MethodInfo*))List_1_Sort_m37881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37882_gshared (List_1_t6854 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37882(__this, ___comparer, method) (( void (*) (List_1_t6854 *, Object_t*, const MethodInfo*))List_1_Sort_m37882_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37883_gshared (List_1_t6854 * __this, Comparison_1_t6864 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37883(__this, ___comparison, method) (( void (*) (List_1_t6854 *, Comparison_1_t6864 *, const MethodInfo*))List_1_Sort_m37883_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6853* List_1_ToArray_m37884_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_ToArray_m37884(__this, method) (( KeyValuePair_2U5BU5D_t6853* (*) (List_1_t6854 *, const MethodInfo*))List_1_ToArray_m37884_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m37885_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37885(__this, method) (( void (*) (List_1_t6854 *, const MethodInfo*))List_1_TrimExcess_m37885_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37886_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37886(__this, method) (( int32_t (*) (List_1_t6854 *, const MethodInfo*))List_1_get_Capacity_m37886_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37887_gshared (List_1_t6854 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37887(__this, ___value, method) (( void (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37887_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m37888_gshared (List_1_t6854 * __this, const MethodInfo* method);
#define List_1_get_Count_m37888(__this, method) (( int32_t (*) (List_1_t6854 *, const MethodInfo*))List_1_get_Count_m37888_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1797  List_1_get_Item_m37889_gshared (List_1_t6854 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37889(__this, ___index, method) (( KeyValuePair_2_t1797  (*) (List_1_t6854 *, int32_t, const MethodInfo*))List_1_get_Item_m37889_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37890_gshared (List_1_t6854 * __this, int32_t ___index, KeyValuePair_2_t1797  ___value, const MethodInfo* method);
#define List_1_set_Item_m37890(__this, ___index, ___value, method) (( void (*) (List_1_t6854 *, int32_t, KeyValuePair_2_t1797 , const MethodInfo*))List_1_set_Item_m37890_gshared)(__this, ___index, ___value, method)
