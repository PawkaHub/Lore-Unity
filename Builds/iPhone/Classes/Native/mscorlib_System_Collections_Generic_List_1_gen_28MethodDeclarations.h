#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t7119;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7120;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9598;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6343;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6345;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9784;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6349;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m3242_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1__ctor_m3242(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1__ctor_m3242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m29611_gshared (List_1_t697 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m29611(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1__ctor_m29611_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m29612_gshared (List_1_t697 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m29612(__this, ___capacity, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1__ctor_m29612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m29613_gshared (List_1_t697 * __this, ByteU5BU5D_t25* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m29613(__this, ___data, ___size, method) (( void (*) (List_1_t697 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1__ctor_m29613_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m29614_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m29614(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m29614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29615_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29615(__this, method) (( Object_t* (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29615_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29616_gshared (List_1_t697 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m29616(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m29616_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29617_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29617(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m29617_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m29618_gshared (List_1_t697 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m29618(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m29618_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m29619_gshared (List_1_t697 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m29619(__this, ___item, method) (( bool (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m29619_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29620_gshared (List_1_t697 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m29620(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m29620_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m29621_gshared (List_1_t697 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m29621(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m29621_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m29622_gshared (List_1_t697 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m29622(__this, ___item, method) (( void (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m29622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29623_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29623(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29623_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29624_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29624(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m29624_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29625_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m29625(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m29625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29626_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m29626(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m29626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29627_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m29627(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m29627_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29628_gshared (List_1_t697 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m29628(__this, ___index, method) (( Object_t * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m29628_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m29629_gshared (List_1_t697 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m29629(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m29629_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m29630_gshared (List_1_t697 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m29630(__this, ___item, method) (( void (*) (List_1_t697 *, uint8_t, const MethodInfo*))List_1_Add_m29630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29631_gshared (List_1_t697 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m29631(__this, ___newCount, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m29631_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m29632_gshared (List_1_t697 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m29632(__this, ___idx, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m29632_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29633_gshared (List_1_t697 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m29633(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddCollection_m29633_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m29634_gshared (List_1_t697 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m29634(__this, ___enumerable, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m29634_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m29635_gshared (List_1_t697 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m29635(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddRange_m29635_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6343 * List_1_AsReadOnly_m29636_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m29636(__this, method) (( ReadOnlyCollection_1_t6343 * (*) (List_1_t697 *, const MethodInfo*))List_1_AsReadOnly_m29636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m29637_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_Clear_m29637(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Clear_m29637_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m29638_gshared (List_1_t697 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m29638(__this, ___item, method) (( bool (*) (List_1_t697 *, uint8_t, const MethodInfo*))List_1_Contains_m29638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m29639_gshared (List_1_t697 * __this, ByteU5BU5D_t25* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m29639(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1_CopyTo_m29639_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m29640_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_Find_m29640(__this, ___match, method) (( uint8_t (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_Find_m29640_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m29641_gshared (Object_t * __this /* static, unused */, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m29641(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6345 *, const MethodInfo*))List_1_CheckMatch_m29641_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t697 * List_1_FindAll_m29642_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_FindAll_m29642(__this, ___match, method) (( List_1_t697 * (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_FindAll_m29642_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t697 * List_1_FindAllStackBits_m29643_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m29643(__this, ___match, method) (( List_1_t697 * (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_FindAllStackBits_m29643_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t697 * List_1_FindAllList_m29644_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m29644(__this, ___match, method) (( List_1_t697 * (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_FindAllList_m29644_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m29645_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m29645(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_FindIndex_m29645_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29646_gshared (List_1_t697 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m29646(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t697 *, int32_t, int32_t, Predicate_1_t6345 *, const MethodInfo*))List_1_GetIndex_m29646_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6341  List_1_GetEnumerator_m29647_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m29647(__this, method) (( Enumerator_t6341  (*) (List_1_t697 *, const MethodInfo*))List_1_GetEnumerator_m29647_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t697 * List_1_GetRange_m29648_gshared (List_1_t697 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m29648(__this, ___index, ___count, method) (( List_1_t697 * (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m29648_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29649_gshared (List_1_t697 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m29649(__this, ___item, method) (( int32_t (*) (List_1_t697 *, uint8_t, const MethodInfo*))List_1_IndexOf_m29649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29650_gshared (List_1_t697 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m29650(__this, ___start, ___delta, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m29650_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m29651_gshared (List_1_t697 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m29651(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_CheckIndex_m29651_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29652_gshared (List_1_t697 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m29652(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m29652_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m29653_gshared (List_1_t697 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m29653(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m29653_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m29654_gshared (List_1_t697 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m29654(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m29654_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m29655_gshared (List_1_t697 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m29655(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m29655_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m29656_gshared (List_1_t697 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m29656(__this, ___index, ___enumerable, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m29656_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m29657_gshared (List_1_t697 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m29657(__this, ___item, method) (( bool (*) (List_1_t697 *, uint8_t, const MethodInfo*))List_1_Remove_m29657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m29658_gshared (List_1_t697 * __this, Predicate_1_t6345 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m29658(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t6345 *, const MethodInfo*))List_1_RemoveAll_m29658_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m29659_gshared (List_1_t697 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m29659(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_RemoveAt_m29659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m29660_gshared (List_1_t697 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m29660(__this, ___index, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m29660_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m29661_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_Reverse_m29661(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Reverse_m29661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m29662_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_Sort_m29662(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Sort_m29662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m29663_gshared (List_1_t697 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m29663(__this, ___comparer, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_Sort_m29663_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m29664_gshared (List_1_t697 * __this, Comparison_1_t6349 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m29664(__this, ___comparison, method) (( void (*) (List_1_t697 *, Comparison_1_t6349 *, const MethodInfo*))List_1_Sort_m29664_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t25* List_1_ToArray_m3243_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_ToArray_m3243(__this, method) (( ByteU5BU5D_t25* (*) (List_1_t697 *, const MethodInfo*))List_1_ToArray_m3243_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m29665_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m29665(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_TrimExcess_m29665_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m29666_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m29666(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Capacity_m29666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m29667_gshared (List_1_t697 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m29667(__this, ___value, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_set_Capacity_m29667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m29668_gshared (List_1_t697 * __this, const MethodInfo* method);
#define List_1_get_Count_m29668(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Count_m29668_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m29669_gshared (List_1_t697 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m29669(__this, ___index, method) (( uint8_t (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_get_Item_m29669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29670_gshared (List_1_t697 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m29670(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m29670_gshared)(__this, ___index, ___value, method)
