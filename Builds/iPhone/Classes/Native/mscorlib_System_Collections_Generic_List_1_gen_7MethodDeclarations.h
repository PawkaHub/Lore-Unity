#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t82;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2057;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3295;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t6280;
// System.Predicate`1<System.Int32>
struct Predicate_1_t6282;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t6179;
// System.Comparison`1<System.Int32>
struct Comparison_1_t6286;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2698_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1__ctor_m2698(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1__ctor_m2698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25182_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25182(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1__ctor_m25182_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25184_gshared (List_1_t82 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25184(__this, ___capacity, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1__ctor_m25184_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m25186_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m25186(__this, ___data, ___size, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1__ctor_m25186_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m25188_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25188(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25188_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25190_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25190(__this, method) (( Object_t* (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25192_gshared (List_1_t82 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25192(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25194_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25194(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25196_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25196(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25196_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25198_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25198(__this, ___item, method) (( bool (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25198_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25200_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25200(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25200_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25202_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25202(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25202_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25204_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25204(__this, ___item, method) (( void (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25204_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25206_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25206(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25208_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25208(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25208_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25210_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25210(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25212_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25212(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25214_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25214(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25214_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25216_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25216(__this, ___index, method) (( Object_t * (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25218_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25218(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25218_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m25220_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m25220(__this, ___item, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Add_m25220_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25222_gshared (List_1_t82 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25222(__this, ___newCount, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25222_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m25224_gshared (List_1_t82 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m25224(__this, ___idx, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25224_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25226_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25226(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25228_gshared (List_1_t82 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25228(__this, ___enumerable, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25228_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25230_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25230(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddRange_m25230_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6280 * List_1_AsReadOnly_m25232_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25232(__this, method) (( ReadOnlyCollection_1_t6280 * (*) (List_1_t82 *, const MethodInfo*))List_1_AsReadOnly_m25232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m25234_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Clear_m25234(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Clear_m25234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m25236_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m25236(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Contains_m25236_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25238_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25238(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1_CopyTo_m25238_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m25240_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_Find_m25240(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_Find_m25240_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25242_gshared (Object_t * __this /* static, unused */, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25242(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6282 *, const MethodInfo*))List_1_CheckMatch_m25242_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAll_m25244_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_FindAll_m25244(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_FindAll_m25244_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllStackBits_m25246_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m25246(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_FindAllStackBits_m25246_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllList_m25248_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m25248(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_FindAllList_m25248_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m25250_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m25250(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_FindIndex_m25250_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25252_gshared (List_1_t82 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25252(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t82 *, int32_t, int32_t, Predicate_1_t6282 *, const MethodInfo*))List_1_GetIndex_m25252_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6278  List_1_GetEnumerator_m25254_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25254(__this, method) (( Enumerator_t6278  (*) (List_1_t82 *, const MethodInfo*))List_1_GetEnumerator_m25254_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t82 * List_1_GetRange_m25256_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m25256(__this, ___index, ___count, method) (( List_1_t82 * (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25256_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25258_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m25258(__this, ___item, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_IndexOf_m25258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25260_gshared (List_1_t82 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25260(__this, ___start, ___delta, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25260_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25262_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25262(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25262_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25264_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m25264(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m25264_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25266_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25266(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25266_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m25268_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m25268(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25268_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m25270_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m25270(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25270_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m25272_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m25272(__this, ___index, ___enumerable, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25272_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m25274_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m25274(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Remove_m25274_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25276_gshared (List_1_t82 * __this, Predicate_1_t6282 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25276(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6282 *, const MethodInfo*))List_1_RemoveAll_m25276_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25278_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25278(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25278_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m25280_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m25280(__this, ___index, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25280_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m25281_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Reverse_m25281(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Reverse_m25281_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m25283_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Sort_m25283(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Sort_m25283_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25285_gshared (List_1_t82 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25285(__this, ___comparer, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_Sort_m25285_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25287_gshared (List_1_t82 * __this, Comparison_1_t6286 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25287(__this, ___comparison, method) (( void (*) (List_1_t82 *, Comparison_1_t6286 *, const MethodInfo*))List_1_Sort_m25287_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t119* List_1_ToArray_m3458_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_ToArray_m3458(__this, method) (( Int32U5BU5D_t119* (*) (List_1_t82 *, const MethodInfo*))List_1_ToArray_m3458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m25290_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25290(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_TrimExcess_m25290_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25292_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25292(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Capacity_m25292_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25294_gshared (List_1_t82 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25294(__this, ___value, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25294_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m25296_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Count_m25296(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Count_m25296_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m25298_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25298(__this, ___index, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_get_Item_m25298_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25300_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m25300(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m25300_gshared)(__this, ___index, ___value, method)
