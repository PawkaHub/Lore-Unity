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
struct IEnumerable_1_t729;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t838;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1773;
// System.Predicate`1<System.Object>
struct Predicate_1_t6210;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t7191;
// System.Comparison`1<System.Object>
struct Comparison_1_t6217;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m84_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1__ctor_m84(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m3480_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3480(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m24292_gshared (List_1_t2 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m24292(__this, ___capacity, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m24293_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m24293(__this, ___data, ___size, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m24294_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24294(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232(__this, method) (( Object_t* (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18215_gshared (List_1_t2 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18215(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18211(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18220_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18220(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18222_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18222(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18223_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18223(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18224_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18224(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18225_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18225(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18213(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18214(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18216(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18217(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18218_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18218(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18219_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18219(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m18228_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m18228(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24295_gshared (List_1_t2 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24295(__this, ___newCount, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m24296_gshared (List_1_t2 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m24296(__this, ___idx, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24297_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24297(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24298_gshared (List_1_t2 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24298(__this, ___enumerable, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m87_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m87(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1773 * List_1_AsReadOnly_m24299_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24299(__this, method) (( ReadOnlyCollection_1_t1773 * (*) (List_1_t2 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m18221_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Clear_m18221(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m18229_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m18229(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18230_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18230(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m24300_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_Find_m24300(__this, ___match, method) (( Object_t * (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24301_gshared (Object_t * __this /* static, unused */, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24301(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6210 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAll_m24302_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_FindAll_m24302(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllStackBits_m24303_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m24303(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllList_m24304_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m24304(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m24305_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m24305(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24306_gshared (List_1_t2 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24306(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2 *, int32_t, int32_t, Predicate_1_t6210 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6205  List_1_GetEnumerator_m24307_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24307(__this, method) (( Enumerator_t6205  (*) (List_1_t2 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2 * List_1_GetRange_m24308_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m24308(__this, ___index, ___count, method) (( List_1_t2 * (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18233_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m18233(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24309_gshared (List_1_t2 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24309(__this, ___start, ___delta, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24310_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24310(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18234_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m18234(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24311_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24311(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m24312_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m24312(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m24313_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m24313(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m24314_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m24314(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m18231_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m18231(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24315_gshared (List_1_t2 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24315(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t6210 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18226_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18226(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m24316_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m24316(__this, ___index, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m24317_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Reverse_m24317(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m24318_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Sort_m24318(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24319_gshared (List_1_t2 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24319(__this, ___comparer, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24320_gshared (List_1_t2 * __this, Comparison_1_t6217 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24320(__this, ___comparison, method) (( void (*) (List_1_t2 *, Comparison_1_t6217 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t21* List_1_ToArray_m3479_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_ToArray_m3479(__this, method) (( ObjectU5BU5D_t21* (*) (List_1_t2 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m24321_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24321(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24322_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24322(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24323_gshared (List_1_t2 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24323(__this, ___value, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m18212_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Count_m18212(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m18235_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18235(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18236_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m18236(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
