#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t718;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t7173;
// System.Single[]
struct SingleU5BU5D_t168;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t7174;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9796;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t6368;
// System.Predicate`1<System.Single>
struct Predicate_1_t6373;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t9797;
// System.Comparison`1<System.Single>
struct Comparison_1_t6377;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_68.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m30096_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1__ctor_m30096(__this, method) (( void (*) (List_1_t718 *, const MethodInfo*))List_1__ctor_m30096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30097_gshared (List_1_t718 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30097(__this, ___collection, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1__ctor_m30097_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3357_gshared (List_1_t718 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3357(__this, ___capacity, method) (( void (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1__ctor_m3357_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30098_gshared (List_1_t718 * __this, SingleU5BU5D_t168* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30098(__this, ___data, ___size, method) (( void (*) (List_1_t718 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1__ctor_m30098_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m30099_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30099(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30099_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30100_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30100(__this, method) (( Object_t* (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30101_gshared (List_1_t718 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30101(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t718 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30101_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30102_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30102(__this, method) (( Object_t * (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30102_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30103_gshared (List_1_t718 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30103(__this, ___item, method) (( int32_t (*) (List_1_t718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30104_gshared (List_1_t718 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30104(__this, ___item, method) (( bool (*) (List_1_t718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30104_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30105_gshared (List_1_t718 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30105(__this, ___item, method) (( int32_t (*) (List_1_t718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30105_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30106_gshared (List_1_t718 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30106(__this, ___index, ___item, method) (( void (*) (List_1_t718 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30106_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30107_gshared (List_1_t718 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30107(__this, ___item, method) (( void (*) (List_1_t718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30108_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30108(__this, method) (( bool (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30109_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30109(__this, method) (( bool (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30109_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30110_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30110(__this, method) (( Object_t * (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30111_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30111(__this, method) (( bool (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30112_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30112(__this, method) (( bool (*) (List_1_t718 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30112_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30113_gshared (List_1_t718 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30113(__this, ___index, method) (( Object_t * (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30114_gshared (List_1_t718 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30114(__this, ___index, ___value, method) (( void (*) (List_1_t718 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30114_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m30115_gshared (List_1_t718 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m30115(__this, ___item, method) (( void (*) (List_1_t718 *, float, const MethodInfo*))List_1_Add_m30115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30116_gshared (List_1_t718 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30116(__this, ___newCount, method) (( void (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30116_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30117_gshared (List_1_t718 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30117(__this, ___idx, ___count, method) (( void (*) (List_1_t718 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30117_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30118_gshared (List_1_t718 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30118(__this, ___collection, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30118_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30119_gshared (List_1_t718 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30119(__this, ___enumerable, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30119_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30120_gshared (List_1_t718 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30120(__this, ___collection, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1_AddRange_m30120_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6368 * List_1_AsReadOnly_m30121_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30121(__this, method) (( ReadOnlyCollection_1_t6368 * (*) (List_1_t718 *, const MethodInfo*))List_1_AsReadOnly_m30121_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m30122_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_Clear_m30122(__this, method) (( void (*) (List_1_t718 *, const MethodInfo*))List_1_Clear_m30122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m30123_gshared (List_1_t718 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m30123(__this, ___item, method) (( bool (*) (List_1_t718 *, float, const MethodInfo*))List_1_Contains_m30123_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30124_gshared (List_1_t718 * __this, SingleU5BU5D_t168* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30124(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t718 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1_CopyTo_m30124_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m30125_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_Find_m30125(__this, ___match, method) (( float (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_Find_m30125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30126_gshared (Object_t * __this /* static, unused */, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30126(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6373 *, const MethodInfo*))List_1_CheckMatch_m30126_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t718 * List_1_FindAll_m30127_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_FindAll_m30127(__this, ___match, method) (( List_1_t718 * (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_FindAll_m30127_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t718 * List_1_FindAllStackBits_m30128_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m30128(__this, ___match, method) (( List_1_t718 * (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_FindAllStackBits_m30128_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t718 * List_1_FindAllList_m30129_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m30129(__this, ___match, method) (( List_1_t718 * (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_FindAllList_m30129_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m30130_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m30130(__this, ___match, method) (( int32_t (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_FindIndex_m30130_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30131_gshared (List_1_t718 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30131(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t718 *, int32_t, int32_t, Predicate_1_t6373 *, const MethodInfo*))List_1_GetIndex_m30131_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t6366  List_1_GetEnumerator_m30132_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30132(__this, method) (( Enumerator_t6366  (*) (List_1_t718 *, const MethodInfo*))List_1_GetEnumerator_m30132_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t718 * List_1_GetRange_m30133_gshared (List_1_t718 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30133(__this, ___index, ___count, method) (( List_1_t718 * (*) (List_1_t718 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30133_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30134_gshared (List_1_t718 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m30134(__this, ___item, method) (( int32_t (*) (List_1_t718 *, float, const MethodInfo*))List_1_IndexOf_m30134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30135_gshared (List_1_t718 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30135(__this, ___start, ___delta, method) (( void (*) (List_1_t718 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30135_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30136_gshared (List_1_t718 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30136(__this, ___index, method) (( void (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30136_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30137_gshared (List_1_t718 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m30137(__this, ___index, ___item, method) (( void (*) (List_1_t718 *, int32_t, float, const MethodInfo*))List_1_Insert_m30137_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30138_gshared (List_1_t718 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30138(__this, ___collection, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30139_gshared (List_1_t718 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30139(__this, ___index, ___collection, method) (( void (*) (List_1_t718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30139_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30140_gshared (List_1_t718 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30140(__this, ___index, ___collection, method) (( void (*) (List_1_t718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30140_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30141_gshared (List_1_t718 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30141(__this, ___index, ___enumerable, method) (( void (*) (List_1_t718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30141_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m30142_gshared (List_1_t718 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m30142(__this, ___item, method) (( bool (*) (List_1_t718 *, float, const MethodInfo*))List_1_Remove_m30142_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30143_gshared (List_1_t718 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30143(__this, ___match, method) (( int32_t (*) (List_1_t718 *, Predicate_1_t6373 *, const MethodInfo*))List_1_RemoveAll_m30143_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30144_gshared (List_1_t718 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30144(__this, ___index, method) (( void (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30144_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30145_gshared (List_1_t718 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30145(__this, ___index, ___count, method) (( void (*) (List_1_t718 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30145_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m30146_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_Reverse_m30146(__this, method) (( void (*) (List_1_t718 *, const MethodInfo*))List_1_Reverse_m30146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m30147_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_Sort_m30147(__this, method) (( void (*) (List_1_t718 *, const MethodInfo*))List_1_Sort_m30147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30148_gshared (List_1_t718 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30148(__this, ___comparer, method) (( void (*) (List_1_t718 *, Object_t*, const MethodInfo*))List_1_Sort_m30148_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30149_gshared (List_1_t718 * __this, Comparison_1_t6377 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30149(__this, ___comparison, method) (( void (*) (List_1_t718 *, Comparison_1_t6377 *, const MethodInfo*))List_1_Sort_m30149_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t168* List_1_ToArray_m3358_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_ToArray_m3358(__this, method) (( SingleU5BU5D_t168* (*) (List_1_t718 *, const MethodInfo*))List_1_ToArray_m3358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m30150_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30150(__this, method) (( void (*) (List_1_t718 *, const MethodInfo*))List_1_TrimExcess_m30150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30151_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30151(__this, method) (( int32_t (*) (List_1_t718 *, const MethodInfo*))List_1_get_Capacity_m30151_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30152_gshared (List_1_t718 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30152(__this, ___value, method) (( void (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30152_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m30153_gshared (List_1_t718 * __this, const MethodInfo* method);
#define List_1_get_Count_m30153(__this, method) (( int32_t (*) (List_1_t718 *, const MethodInfo*))List_1_get_Count_m30153_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m30154_gshared (List_1_t718 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30154(__this, ___index, method) (( float (*) (List_1_t718 *, int32_t, const MethodInfo*))List_1_get_Item_m30154_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30155_gshared (List_1_t718 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m30155(__this, ___index, ___value, method) (( void (*) (List_1_t718 *, int32_t, float, const MethodInfo*))List_1_set_Item_m30155_gshared)(__this, ___index, ___value, method)
