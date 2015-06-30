#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6021;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t7023;
// System.UInt16[]
struct UInt16U5BU5D_t3632;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t7024;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t7025;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6024;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6029;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t7026;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6033;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_99.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m39820_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1__ctor_m39820(__this, method) (( void (*) (List_1_t6021 *, const MethodInfo*))List_1__ctor_m39820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39822_gshared (List_1_t6021 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39822(__this, ___collection, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1__ctor_m39822_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39824_gshared (List_1_t6021 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39824(__this, ___capacity, method) (( void (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1__ctor_m39824_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39826_gshared (List_1_t6021 * __this, UInt16U5BU5D_t3632* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39826(__this, ___data, ___size, method) (( void (*) (List_1_t6021 *, UInt16U5BU5D_t3632*, int32_t, const MethodInfo*))List_1__ctor_m39826_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m39828_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39828(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39828_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39830_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39830(__this, method) (( Object_t* (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39830_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39832_gshared (List_1_t6021 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39832(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6021 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39832_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39834_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39834(__this, method) (( Object_t * (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39836_gshared (List_1_t6021 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39836(__this, ___item, method) (( int32_t (*) (List_1_t6021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39836_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39838_gshared (List_1_t6021 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39838(__this, ___item, method) (( bool (*) (List_1_t6021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39838_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39840_gshared (List_1_t6021 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39840(__this, ___item, method) (( int32_t (*) (List_1_t6021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39840_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39842_gshared (List_1_t6021 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39842(__this, ___index, ___item, method) (( void (*) (List_1_t6021 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39842_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39844_gshared (List_1_t6021 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39844(__this, ___item, method) (( void (*) (List_1_t6021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39844_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39846_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39846(__this, method) (( bool (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39848_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39848(__this, method) (( bool (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39848_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39850_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39850(__this, method) (( Object_t * (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39852_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39852(__this, method) (( bool (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39852_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39854_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39854(__this, method) (( bool (*) (List_1_t6021 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39854_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39856_gshared (List_1_t6021 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39856(__this, ___index, method) (( Object_t * (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39856_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39858_gshared (List_1_t6021 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39858(__this, ___index, ___value, method) (( void (*) (List_1_t6021 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39858_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m39860_gshared (List_1_t6021 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m39860(__this, ___item, method) (( void (*) (List_1_t6021 *, uint16_t, const MethodInfo*))List_1_Add_m39860_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39862_gshared (List_1_t6021 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39862(__this, ___newCount, method) (( void (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39862_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39864_gshared (List_1_t6021 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39864(__this, ___idx, ___count, method) (( void (*) (List_1_t6021 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39864_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39866_gshared (List_1_t6021 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39866(__this, ___collection, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39866_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39868_gshared (List_1_t6021 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39868(__this, ___enumerable, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39868_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39870_gshared (List_1_t6021 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39870(__this, ___collection, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1_AddRange_m39870_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6024 * List_1_AsReadOnly_m39872_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39872(__this, method) (( ReadOnlyCollection_1_t6024 * (*) (List_1_t6021 *, const MethodInfo*))List_1_AsReadOnly_m39872_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m39874_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_Clear_m39874(__this, method) (( void (*) (List_1_t6021 *, const MethodInfo*))List_1_Clear_m39874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m39876_gshared (List_1_t6021 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m39876(__this, ___item, method) (( bool (*) (List_1_t6021 *, uint16_t, const MethodInfo*))List_1_Contains_m39876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39878_gshared (List_1_t6021 * __this, UInt16U5BU5D_t3632* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39878(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6021 *, UInt16U5BU5D_t3632*, int32_t, const MethodInfo*))List_1_CopyTo_m39878_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m39880_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_Find_m39880(__this, ___match, method) (( uint16_t (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_Find_m39880_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39882_gshared (Object_t * __this /* static, unused */, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39882(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6029 *, const MethodInfo*))List_1_CheckMatch_m39882_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t6021 * List_1_FindAll_m39884_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_FindAll_m39884(__this, ___match, method) (( List_1_t6021 * (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_FindAll_m39884_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t6021 * List_1_FindAllStackBits_m39886_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m39886(__this, ___match, method) (( List_1_t6021 * (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_FindAllStackBits_m39886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t6021 * List_1_FindAllList_m39888_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m39888(__this, ___match, method) (( List_1_t6021 * (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_FindAllList_m39888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m39890_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m39890(__this, ___match, method) (( int32_t (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_FindIndex_m39890_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39892_gshared (List_1_t6021 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39892(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6021 *, int32_t, int32_t, Predicate_1_t6029 *, const MethodInfo*))List_1_GetIndex_m39892_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6022  List_1_GetEnumerator_m39894_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39894(__this, method) (( Enumerator_t6022  (*) (List_1_t6021 *, const MethodInfo*))List_1_GetEnumerator_m39894_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6021 * List_1_GetRange_m39896_gshared (List_1_t6021 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39896(__this, ___index, ___count, method) (( List_1_t6021 * (*) (List_1_t6021 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39896_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39898_gshared (List_1_t6021 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39898(__this, ___item, method) (( int32_t (*) (List_1_t6021 *, uint16_t, const MethodInfo*))List_1_IndexOf_m39898_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39900_gshared (List_1_t6021 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39900(__this, ___start, ___delta, method) (( void (*) (List_1_t6021 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39900_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39902_gshared (List_1_t6021 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39902(__this, ___index, method) (( void (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39902_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39904_gshared (List_1_t6021 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m39904(__this, ___index, ___item, method) (( void (*) (List_1_t6021 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m39904_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39906_gshared (List_1_t6021 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39906(__this, ___collection, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39906_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39908_gshared (List_1_t6021 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39908(__this, ___index, ___collection, method) (( void (*) (List_1_t6021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39908_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39910_gshared (List_1_t6021 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39910(__this, ___index, ___collection, method) (( void (*) (List_1_t6021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39910_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39912_gshared (List_1_t6021 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39912(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39912_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m39914_gshared (List_1_t6021 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m39914(__this, ___item, method) (( bool (*) (List_1_t6021 *, uint16_t, const MethodInfo*))List_1_Remove_m39914_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39916_gshared (List_1_t6021 * __this, Predicate_1_t6029 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39916(__this, ___match, method) (( int32_t (*) (List_1_t6021 *, Predicate_1_t6029 *, const MethodInfo*))List_1_RemoveAll_m39916_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39918_gshared (List_1_t6021 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39918(__this, ___index, method) (( void (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39918_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39920_gshared (List_1_t6021 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39920(__this, ___index, ___count, method) (( void (*) (List_1_t6021 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39920_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m39922_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_Reverse_m39922(__this, method) (( void (*) (List_1_t6021 *, const MethodInfo*))List_1_Reverse_m39922_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m39924_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_Sort_m39924(__this, method) (( void (*) (List_1_t6021 *, const MethodInfo*))List_1_Sort_m39924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39926_gshared (List_1_t6021 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39926(__this, ___comparer, method) (( void (*) (List_1_t6021 *, Object_t*, const MethodInfo*))List_1_Sort_m39926_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39928_gshared (List_1_t6021 * __this, Comparison_1_t6033 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39928(__this, ___comparison, method) (( void (*) (List_1_t6021 *, Comparison_1_t6033 *, const MethodInfo*))List_1_Sort_m39928_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t3632* List_1_ToArray_m39929_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_ToArray_m39929(__this, method) (( UInt16U5BU5D_t3632* (*) (List_1_t6021 *, const MethodInfo*))List_1_ToArray_m39929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m39931_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39931(__this, method) (( void (*) (List_1_t6021 *, const MethodInfo*))List_1_TrimExcess_m39931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39933_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39933(__this, method) (( int32_t (*) (List_1_t6021 *, const MethodInfo*))List_1_get_Capacity_m39933_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39935_gshared (List_1_t6021 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39935(__this, ___value, method) (( void (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39935_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m39937_gshared (List_1_t6021 * __this, const MethodInfo* method);
#define List_1_get_Count_m39937(__this, method) (( int32_t (*) (List_1_t6021 *, const MethodInfo*))List_1_get_Count_m39937_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m39939_gshared (List_1_t6021 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39939(__this, ___index, method) (( uint16_t (*) (List_1_t6021 *, int32_t, const MethodInfo*))List_1_get_Item_m39939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39941_gshared (List_1_t6021 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39941(__this, ___index, ___value, method) (( void (*) (List_1_t6021 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m39941_gshared)(__this, ___index, ___value, method)
