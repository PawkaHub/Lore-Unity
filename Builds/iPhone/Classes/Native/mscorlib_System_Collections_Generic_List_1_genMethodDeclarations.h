#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1072;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3233;
// System.Predicate`1<System.Object>
struct Predicate_1_t4882;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5634;
// System.Comparison`1<System.Object>
struct Comparison_1_t4889;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_39.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m84_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1__ctor_m84(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m3166_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3166(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m22534_gshared (List_1_t2 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m22534(__this, ___capacity, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m22535_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m22535(__this, ___data, ___size, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m22536_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22536(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947(__this, method) (( Object_t* (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13930_gshared (List_1_t2 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13930(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13926(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13935_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13935(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13937_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13937(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13938_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13938(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13939_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13939(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13940_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13940(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13928(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13929(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13931(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13932(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13933_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13933(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13934_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13934(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m13943_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m13943(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22537_gshared (List_1_t2 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22537(__this, ___newCount, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m22538_gshared (List_1_t2 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m22538(__this, ___idx, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22539_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22539(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22540_gshared (List_1_t2 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22540(__this, ___enumerable, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m87_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m87(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3233 * List_1_AsReadOnly_m22541_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22541(__this, method) (( ReadOnlyCollection_1_t3233 * (*) (List_1_t2 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m13936_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Clear_m13936(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m13944_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m13944(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13945_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13945(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m22542_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_Find_m22542(__this, ___match, method) (( Object_t * (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22543_gshared (Object_t * __this /* static, unused */, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22543(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4882 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAll_m22544_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_FindAll_m22544(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllStackBits_m22545_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m22545(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllList_m22546_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m22546(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m22547_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m22547(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22548_gshared (List_1_t2 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22548(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2 *, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4877  List_1_GetEnumerator_m22549_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22549(__this, method) (( Enumerator_t4877  (*) (List_1_t2 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2 * List_1_GetRange_m22550_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m22550(__this, ___index, ___count, method) (( List_1_t2 * (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13948_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m13948(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22551_gshared (List_1_t2 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22551(__this, ___start, ___delta, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22552_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22552(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13949_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m13949(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22553_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22553(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m22554_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m22554(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m22555_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m22555(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m22556_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m22556(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m13946_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m13946(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22557_gshared (List_1_t2 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22557(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t4882 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13941_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13941(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m22558_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m22558(__this, ___index, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m22559_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Reverse_m22559(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m22560_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Sort_m22560(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m22561_gshared (List_1_t2 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m22561(__this, ___comparer, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22562_gshared (List_1_t2 * __this, Comparison_1_t4889 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22562(__this, ___comparison, method) (( void (*) (List_1_t2 *, Comparison_1_t4889 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t21* List_1_ToArray_m3165_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_ToArray_m3165(__this, method) (( ObjectU5BU5D_t21* (*) (List_1_t2 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m22563_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22563(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22564_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22564(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22565_gshared (List_1_t2 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22565(__this, ___value, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m13927_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Count_m13927(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m13950_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13950(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13951_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m13951(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)
