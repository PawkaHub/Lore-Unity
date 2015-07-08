#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t766;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t7401;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7402;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9880;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6671;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6673;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t10083;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6677;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m3471_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1__ctor_m3471(__this, method) (( void (*) (List_1_t766 *, const MethodInfo*))List_1__ctor_m3471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31084_gshared (List_1_t766 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31084(__this, ___collection, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1__ctor_m31084_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m31085_gshared (List_1_t766 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m31085(__this, ___capacity, method) (( void (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1__ctor_m31085_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31086_gshared (List_1_t766 * __this, ByteU5BU5D_t25* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31086(__this, ___data, ___size, method) (( void (*) (List_1_t766 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1__ctor_m31086_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m31087_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31087(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31087_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31088_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31088(__this, method) (( Object_t* (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31089_gshared (List_1_t766 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31089(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t766 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31089_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31090_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31090(__this, method) (( Object_t * (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31091_gshared (List_1_t766 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31091(__this, ___item, method) (( int32_t (*) (List_1_t766 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31091_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31092_gshared (List_1_t766 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31092(__this, ___item, method) (( bool (*) (List_1_t766 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31093_gshared (List_1_t766 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31093(__this, ___item, method) (( int32_t (*) (List_1_t766 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31093_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31094_gshared (List_1_t766 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31094(__this, ___index, ___item, method) (( void (*) (List_1_t766 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31094_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31095_gshared (List_1_t766 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31095(__this, ___item, method) (( void (*) (List_1_t766 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31095_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31096_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31096(__this, method) (( bool (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31096_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31097_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31097(__this, method) (( bool (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31098_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31098(__this, method) (( Object_t * (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31099_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31099(__this, method) (( bool (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31100_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31100(__this, method) (( bool (*) (List_1_t766 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31101_gshared (List_1_t766 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31101(__this, ___index, method) (( Object_t * (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31101_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31102_gshared (List_1_t766 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31102(__this, ___index, ___value, method) (( void (*) (List_1_t766 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31102_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m31103_gshared (List_1_t766 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m31103(__this, ___item, method) (( void (*) (List_1_t766 *, uint8_t, const MethodInfo*))List_1_Add_m31103_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31104_gshared (List_1_t766 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31104(__this, ___newCount, method) (( void (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31104_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31105_gshared (List_1_t766 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31105(__this, ___idx, ___count, method) (( void (*) (List_1_t766 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31105_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31106_gshared (List_1_t766 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31106(__this, ___collection, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31106_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31107_gshared (List_1_t766 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31107(__this, ___enumerable, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31107_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31108_gshared (List_1_t766 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31108(__this, ___collection, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1_AddRange_m31108_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6671 * List_1_AsReadOnly_m31109_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31109(__this, method) (( ReadOnlyCollection_1_t6671 * (*) (List_1_t766 *, const MethodInfo*))List_1_AsReadOnly_m31109_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m31110_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_Clear_m31110(__this, method) (( void (*) (List_1_t766 *, const MethodInfo*))List_1_Clear_m31110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m31111_gshared (List_1_t766 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m31111(__this, ___item, method) (( bool (*) (List_1_t766 *, uint8_t, const MethodInfo*))List_1_Contains_m31111_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31112_gshared (List_1_t766 * __this, ByteU5BU5D_t25* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31112(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t766 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))List_1_CopyTo_m31112_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m31113_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_Find_m31113(__this, ___match, method) (( uint8_t (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_Find_m31113_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31114_gshared (Object_t * __this /* static, unused */, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31114(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6673 *, const MethodInfo*))List_1_CheckMatch_m31114_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t766 * List_1_FindAll_m31115_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_FindAll_m31115(__this, ___match, method) (( List_1_t766 * (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_FindAll_m31115_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t766 * List_1_FindAllStackBits_m31116_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m31116(__this, ___match, method) (( List_1_t766 * (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_FindAllStackBits_m31116_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t766 * List_1_FindAllList_m31117_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m31117(__this, ___match, method) (( List_1_t766 * (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_FindAllList_m31117_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m31118_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m31118(__this, ___match, method) (( int32_t (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_FindIndex_m31118_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31119_gshared (List_1_t766 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t766 *, int32_t, int32_t, Predicate_1_t6673 *, const MethodInfo*))List_1_GetIndex_m31119_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6669  List_1_GetEnumerator_m31120_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31120(__this, method) (( Enumerator_t6669  (*) (List_1_t766 *, const MethodInfo*))List_1_GetEnumerator_m31120_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t766 * List_1_GetRange_m31121_gshared (List_1_t766 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31121(__this, ___index, ___count, method) (( List_1_t766 * (*) (List_1_t766 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31121_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31122_gshared (List_1_t766 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m31122(__this, ___item, method) (( int32_t (*) (List_1_t766 *, uint8_t, const MethodInfo*))List_1_IndexOf_m31122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31123_gshared (List_1_t766 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31123(__this, ___start, ___delta, method) (( void (*) (List_1_t766 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31123_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31124_gshared (List_1_t766 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31124(__this, ___index, method) (( void (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31125_gshared (List_1_t766 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m31125(__this, ___index, ___item, method) (( void (*) (List_1_t766 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m31125_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31126_gshared (List_1_t766 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31126(__this, ___collection, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31126_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31127_gshared (List_1_t766 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31127(__this, ___index, ___collection, method) (( void (*) (List_1_t766 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31127_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31128_gshared (List_1_t766 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31128(__this, ___index, ___collection, method) (( void (*) (List_1_t766 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31128_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31129_gshared (List_1_t766 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31129(__this, ___index, ___enumerable, method) (( void (*) (List_1_t766 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31129_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m31130_gshared (List_1_t766 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m31130(__this, ___item, method) (( bool (*) (List_1_t766 *, uint8_t, const MethodInfo*))List_1_Remove_m31130_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31131_gshared (List_1_t766 * __this, Predicate_1_t6673 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31131(__this, ___match, method) (( int32_t (*) (List_1_t766 *, Predicate_1_t6673 *, const MethodInfo*))List_1_RemoveAll_m31131_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31132_gshared (List_1_t766 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31132(__this, ___index, method) (( void (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31132_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31133_gshared (List_1_t766 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31133(__this, ___index, ___count, method) (( void (*) (List_1_t766 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31133_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m31134_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_Reverse_m31134(__this, method) (( void (*) (List_1_t766 *, const MethodInfo*))List_1_Reverse_m31134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m31135_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_Sort_m31135(__this, method) (( void (*) (List_1_t766 *, const MethodInfo*))List_1_Sort_m31135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31136_gshared (List_1_t766 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31136(__this, ___comparer, method) (( void (*) (List_1_t766 *, Object_t*, const MethodInfo*))List_1_Sort_m31136_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31137_gshared (List_1_t766 * __this, Comparison_1_t6677 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31137(__this, ___comparison, method) (( void (*) (List_1_t766 *, Comparison_1_t6677 *, const MethodInfo*))List_1_Sort_m31137_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t25* List_1_ToArray_m3472_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_ToArray_m3472(__this, method) (( ByteU5BU5D_t25* (*) (List_1_t766 *, const MethodInfo*))List_1_ToArray_m3472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m31138_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31138(__this, method) (( void (*) (List_1_t766 *, const MethodInfo*))List_1_TrimExcess_m31138_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31139_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31139(__this, method) (( int32_t (*) (List_1_t766 *, const MethodInfo*))List_1_get_Capacity_m31139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31140_gshared (List_1_t766 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31140(__this, ___value, method) (( void (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31140_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m31141_gshared (List_1_t766 * __this, const MethodInfo* method);
#define List_1_get_Count_m31141(__this, method) (( int32_t (*) (List_1_t766 *, const MethodInfo*))List_1_get_Count_m31141_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m31142_gshared (List_1_t766 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31142(__this, ___index, method) (( uint8_t (*) (List_1_t766 *, int32_t, const MethodInfo*))List_1_get_Item_m31142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31143_gshared (List_1_t766 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m31143(__this, ___index, ___value, method) (( void (*) (List_1_t766 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m31143_gshared)(__this, ___index, ___value, method)
