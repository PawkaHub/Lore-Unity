#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t786;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t7455;
// System.Single[]
struct SingleU5BU5D_t168;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t7456;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t10093;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t6694;
// System.Predicate`1<System.Single>
struct Predicate_1_t6699;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t10094;
// System.Comparison`1<System.Single>
struct Comparison_1_t6703;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_72.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m31468_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1__ctor_m31468(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1__ctor_m31468_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31469_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31469(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1__ctor_m31469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3585_gshared (List_1_t786 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3585(__this, ___capacity, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31470_gshared (List_1_t786 * __this, SingleU5BU5D_t168* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31470(__this, ___data, ___size, method) (( void (*) (List_1_t786 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1__ctor_m31470_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m31471_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31471(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31471_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31472_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31472(__this, method) (( Object_t* (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31473_gshared (List_1_t786 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31473(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t786 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31473_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31474_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31474(__this, method) (( Object_t * (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31474_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31475_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31475(__this, ___item, method) (( int32_t (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31475_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31476_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31476(__this, ___item, method) (( bool (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31476_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31477_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31477(__this, ___item, method) (( int32_t (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31477_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31478_gshared (List_1_t786 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31478(__this, ___index, ___item, method) (( void (*) (List_1_t786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31478_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31479_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31479(__this, ___item, method) (( void (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31479_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31480_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31480(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31481_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31481(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31482_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31482(__this, method) (( Object_t * (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31483_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31483(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31484_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31484(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31484_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31485_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31485(__this, ___index, method) (( Object_t * (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31485_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31486_gshared (List_1_t786 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31486(__this, ___index, ___value, method) (( void (*) (List_1_t786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31486_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m31487_gshared (List_1_t786 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m31487(__this, ___item, method) (( void (*) (List_1_t786 *, float, const MethodInfo*))List_1_Add_m31487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31488_gshared (List_1_t786 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31488(__this, ___newCount, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31488_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31489_gshared (List_1_t786 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31489(__this, ___idx, ___count, method) (( void (*) (List_1_t786 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31489_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31490_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31490(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31490_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31491_gshared (List_1_t786 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31491(__this, ___enumerable, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31491_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31492_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31492(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddRange_m31492_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6694 * List_1_AsReadOnly_m31493_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31493(__this, method) (( ReadOnlyCollection_1_t6694 * (*) (List_1_t786 *, const MethodInfo*))List_1_AsReadOnly_m31493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m31494_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Clear_m31494(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Clear_m31494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m31495_gshared (List_1_t786 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m31495(__this, ___item, method) (( bool (*) (List_1_t786 *, float, const MethodInfo*))List_1_Contains_m31495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31496_gshared (List_1_t786 * __this, SingleU5BU5D_t168* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31496(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t786 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1_CopyTo_m31496_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m31497_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_Find_m31497(__this, ___match, method) (( float (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_Find_m31497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31498_gshared (Object_t * __this /* static, unused */, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31498(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6699 *, const MethodInfo*))List_1_CheckMatch_m31498_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t786 * List_1_FindAll_m31499_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_FindAll_m31499(__this, ___match, method) (( List_1_t786 * (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_FindAll_m31499_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t786 * List_1_FindAllStackBits_m31500_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m31500(__this, ___match, method) (( List_1_t786 * (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_FindAllStackBits_m31500_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t786 * List_1_FindAllList_m31501_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m31501(__this, ___match, method) (( List_1_t786 * (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_FindAllList_m31501_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m31502_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m31502(__this, ___match, method) (( int32_t (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_FindIndex_m31502_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31503_gshared (List_1_t786 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31503(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t786 *, int32_t, int32_t, Predicate_1_t6699 *, const MethodInfo*))List_1_GetIndex_m31503_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t6692  List_1_GetEnumerator_m31504_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31504(__this, method) (( Enumerator_t6692  (*) (List_1_t786 *, const MethodInfo*))List_1_GetEnumerator_m31504_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t786 * List_1_GetRange_m31505_gshared (List_1_t786 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31505(__this, ___index, ___count, method) (( List_1_t786 * (*) (List_1_t786 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31505_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31506_gshared (List_1_t786 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m31506(__this, ___item, method) (( int32_t (*) (List_1_t786 *, float, const MethodInfo*))List_1_IndexOf_m31506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31507_gshared (List_1_t786 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31507(__this, ___start, ___delta, method) (( void (*) (List_1_t786 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31507_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31508_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31508(__this, ___index, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31508_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31509_gshared (List_1_t786 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m31509(__this, ___index, ___item, method) (( void (*) (List_1_t786 *, int32_t, float, const MethodInfo*))List_1_Insert_m31509_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31510_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31510(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31510_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31511_gshared (List_1_t786 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31511(__this, ___index, ___collection, method) (( void (*) (List_1_t786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31511_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31512_gshared (List_1_t786 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31512(__this, ___index, ___collection, method) (( void (*) (List_1_t786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31512_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31513_gshared (List_1_t786 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31513(__this, ___index, ___enumerable, method) (( void (*) (List_1_t786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31513_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m31514_gshared (List_1_t786 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m31514(__this, ___item, method) (( bool (*) (List_1_t786 *, float, const MethodInfo*))List_1_Remove_m31514_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31515_gshared (List_1_t786 * __this, Predicate_1_t6699 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31515(__this, ___match, method) (( int32_t (*) (List_1_t786 *, Predicate_1_t6699 *, const MethodInfo*))List_1_RemoveAll_m31515_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31516_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31516(__this, ___index, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31517_gshared (List_1_t786 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31517(__this, ___index, ___count, method) (( void (*) (List_1_t786 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31517_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m31518_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Reverse_m31518(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Reverse_m31518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m31519_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Sort_m31519(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Sort_m31519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31520_gshared (List_1_t786 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31520(__this, ___comparer, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_Sort_m31520_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31521_gshared (List_1_t786 * __this, Comparison_1_t6703 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31521(__this, ___comparison, method) (( void (*) (List_1_t786 *, Comparison_1_t6703 *, const MethodInfo*))List_1_Sort_m31521_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t168* List_1_ToArray_m3586_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_ToArray_m3586(__this, method) (( SingleU5BU5D_t168* (*) (List_1_t786 *, const MethodInfo*))List_1_ToArray_m3586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m31522_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31522(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_TrimExcess_m31522_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31523_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31523(__this, method) (( int32_t (*) (List_1_t786 *, const MethodInfo*))List_1_get_Capacity_m31523_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31524_gshared (List_1_t786 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31524(__this, ___value, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31524_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m31525_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_get_Count_m31525(__this, method) (( int32_t (*) (List_1_t786 *, const MethodInfo*))List_1_get_Count_m31525_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m31526_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31526(__this, ___index, method) (( float (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_get_Item_m31526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31527_gshared (List_1_t786 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m31527(__this, ___index, ___value, method) (( void (*) (List_1_t786 *, int32_t, float, const MethodInfo*))List_1_set_Item_m31527_gshared)(__this, ___index, ___value, method)
