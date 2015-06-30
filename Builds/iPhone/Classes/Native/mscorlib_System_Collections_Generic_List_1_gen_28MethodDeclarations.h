#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6617;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6429;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t6425;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t5255;
// System.Predicate`1<System.Byte>
struct Predicate_1_t5257;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t6618;
// System.Comparison`1<System.Byte>
struct Comparison_1_t5261;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m3157_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1__ctor_m3157(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1__ctor_m3157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28124_gshared (List_1_t680 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28124(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1__ctor_m28124_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m28125_gshared (List_1_t680 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m28125(__this, ___capacity, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1__ctor_m28125_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28126_gshared (List_1_t680 * __this, ByteU5BU5D_t25* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28126(__this, ___data, ___size, method) (( void (*) (List_1_t680 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1__ctor_m28126_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m28127_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28127(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28127_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28128_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28128(__this, method) (( Object_t* (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28128_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28129_gshared (List_1_t680 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28129(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t680 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28129_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28130_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28130(__this, method) (( Object_t * (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28130_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28131_gshared (List_1_t680 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28131(__this, ___item, method) (( int32_t (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28131_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28132_gshared (List_1_t680 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28132(__this, ___item, method) (( bool (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28132_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28133_gshared (List_1_t680 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28133(__this, ___item, method) (( int32_t (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28133_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28134_gshared (List_1_t680 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28134(__this, ___index, ___item, method) (( void (*) (List_1_t680 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28134_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28135_gshared (List_1_t680 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28135(__this, ___item, method) (( void (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28135_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28136_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28136(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28136_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28137_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28137(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28137_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28138_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28138(__this, method) (( Object_t * (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28138_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28139_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28139(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28139_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28140_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28140(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28140_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28141_gshared (List_1_t680 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28141(__this, ___index, method) (( Object_t * (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28141_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28142_gshared (List_1_t680 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28142(__this, ___index, ___value, method) (( void (*) (List_1_t680 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28142_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m28143_gshared (List_1_t680 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m28143(__this, ___item, method) (( void (*) (List_1_t680 *, uint8_t, const MethodInfo*))List_1_Add_m28143_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28144_gshared (List_1_t680 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28144(__this, ___newCount, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28144_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28145_gshared (List_1_t680 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28145(__this, ___idx, ___count, method) (( void (*) (List_1_t680 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28145_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28146_gshared (List_1_t680 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28146(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28146_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28147_gshared (List_1_t680 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28147(__this, ___enumerable, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28147_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28148_gshared (List_1_t680 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28148(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddRange_m28148_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5255 * List_1_AsReadOnly_m28149_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28149(__this, method) (( ReadOnlyCollection_1_t5255 * (*) (List_1_t680 *, const MethodInfo*))List_1_AsReadOnly_m28149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m28150_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_Clear_m28150(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Clear_m28150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m28151_gshared (List_1_t680 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m28151(__this, ___item, method) (( bool (*) (List_1_t680 *, uint8_t, const MethodInfo*))List_1_Contains_m28151_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28152_gshared (List_1_t680 * __this, ByteU5BU5D_t25* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28152(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t680 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1_CopyTo_m28152_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m28153_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_Find_m28153(__this, ___match, method) (( uint8_t (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_Find_m28153_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28154_gshared (Object_t * __this /* static, unused */, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28154(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5257 *, const MethodInfo*))List_1_CheckMatch_m28154_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t680 * List_1_FindAll_m28155_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_FindAll_m28155(__this, ___match, method) (( List_1_t680 * (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_FindAll_m28155_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t680 * List_1_FindAllStackBits_m28156_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m28156(__this, ___match, method) (( List_1_t680 * (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_FindAllStackBits_m28156_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t680 * List_1_FindAllList_m28157_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m28157(__this, ___match, method) (( List_1_t680 * (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_FindAllList_m28157_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m28158_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m28158(__this, ___match, method) (( int32_t (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_FindIndex_m28158_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28159_gshared (List_1_t680 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28159(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t680 *, int32_t, int32_t, Predicate_1_t5257 *, const MethodInfo*))List_1_GetIndex_m28159_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t5253  List_1_GetEnumerator_m28160_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28160(__this, method) (( Enumerator_t5253  (*) (List_1_t680 *, const MethodInfo*))List_1_GetEnumerator_m28160_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t680 * List_1_GetRange_m28161_gshared (List_1_t680 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28161(__this, ___index, ___count, method) (( List_1_t680 * (*) (List_1_t680 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28161_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28162_gshared (List_1_t680 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m28162(__this, ___item, method) (( int32_t (*) (List_1_t680 *, uint8_t, const MethodInfo*))List_1_IndexOf_m28162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28163_gshared (List_1_t680 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28163(__this, ___start, ___delta, method) (( void (*) (List_1_t680 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28163_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28164_gshared (List_1_t680 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28164(__this, ___index, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28164_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28165_gshared (List_1_t680 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m28165(__this, ___index, ___item, method) (( void (*) (List_1_t680 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m28165_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28166_gshared (List_1_t680 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28166(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28167_gshared (List_1_t680 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28167(__this, ___index, ___collection, method) (( void (*) (List_1_t680 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28167_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28168_gshared (List_1_t680 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28168(__this, ___index, ___collection, method) (( void (*) (List_1_t680 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28168_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28169_gshared (List_1_t680 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28169(__this, ___index, ___enumerable, method) (( void (*) (List_1_t680 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28169_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m28170_gshared (List_1_t680 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m28170(__this, ___item, method) (( bool (*) (List_1_t680 *, uint8_t, const MethodInfo*))List_1_Remove_m28170_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28171_gshared (List_1_t680 * __this, Predicate_1_t5257 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28171(__this, ___match, method) (( int32_t (*) (List_1_t680 *, Predicate_1_t5257 *, const MethodInfo*))List_1_RemoveAll_m28171_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28172_gshared (List_1_t680 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28172(__this, ___index, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28173_gshared (List_1_t680 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28173(__this, ___index, ___count, method) (( void (*) (List_1_t680 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28173_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m28174_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_Reverse_m28174(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Reverse_m28174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m28175_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_Sort_m28175(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Sort_m28175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28176_gshared (List_1_t680 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28176(__this, ___comparer, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_Sort_m28176_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28177_gshared (List_1_t680 * __this, Comparison_1_t5261 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28177(__this, ___comparison, method) (( void (*) (List_1_t680 *, Comparison_1_t5261 *, const MethodInfo*))List_1_Sort_m28177_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t25* List_1_ToArray_m3158_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_ToArray_m3158(__this, method) (( ByteU5BU5D_t25* (*) (List_1_t680 *, const MethodInfo*))List_1_ToArray_m3158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m28178_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28178(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_TrimExcess_m28178_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28179_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28179(__this, method) (( int32_t (*) (List_1_t680 *, const MethodInfo*))List_1_get_Capacity_m28179_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28180_gshared (List_1_t680 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28180(__this, ___value, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28180_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m28181_gshared (List_1_t680 * __this, const MethodInfo* method);
#define List_1_get_Count_m28181(__this, method) (( int32_t (*) (List_1_t680 *, const MethodInfo*))List_1_get_Count_m28181_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m28182_gshared (List_1_t680 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28182(__this, ___index, method) (( uint8_t (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_get_Item_m28182_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28183_gshared (List_1_t680 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m28183(__this, ___index, ___value, method) (( void (*) (List_1_t680 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m28183_gshared)(__this, ___index, ___value, method)
