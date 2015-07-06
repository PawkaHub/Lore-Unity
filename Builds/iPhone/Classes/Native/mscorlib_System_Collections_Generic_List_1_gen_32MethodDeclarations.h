#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Consolation.Console/Log>
struct List_1_t540;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Consolation.Console/Log>
struct IEnumerable_1_t9798;
// Consolation.Console/Log[]
struct LogU5BU5D_t6378;
// System.Collections.Generic.IEnumerator`1<Consolation.Console/Log>
struct IEnumerator_1_t9799;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Consolation.Console/Log>
struct ICollection_1_t9800;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Consolation.Console/Log>
struct ReadOnlyCollection_1_t6382;
// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t6386;
// System.Collections.Generic.IComparer`1<Consolation.Console/Log>
struct IComparer_1_t9801;
// System.Comparison`1<Consolation.Console/Log>
struct Comparison_1_t6389;
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"
// System.Collections.Generic.List`1/Enumerator<Consolation.Console/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor()
extern "C" void List_1__ctor_m3382_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1__ctor_m3382(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1__ctor_m3382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30256_gshared (List_1_t540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30256(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1__ctor_m30256_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30257_gshared (List_1_t540 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30257(__this, ___capacity, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1__ctor_m30257_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30258_gshared (List_1_t540 * __this, LogU5BU5D_t6378* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30258(__this, ___data, ___size, method) (( void (*) (List_1_t540 *, LogU5BU5D_t6378*, int32_t, const MethodInfo*))List_1__ctor_m30258_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.cctor()
extern "C" void List_1__cctor_m30259_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30259(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30259_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30260_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30260(__this, method) (( Object_t* (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30260_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30261_gshared (List_1_t540 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30261(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t540 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30261_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30262_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30262(__this, method) (( Object_t * (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30262_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30263_gshared (List_1_t540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30263(__this, ___item, method) (( int32_t (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30263_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30264_gshared (List_1_t540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30264(__this, ___item, method) (( bool (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30264_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30265_gshared (List_1_t540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30265(__this, ___item, method) (( int32_t (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30265_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30266_gshared (List_1_t540 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30266(__this, ___index, ___item, method) (( void (*) (List_1_t540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30266_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30267_gshared (List_1_t540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30267(__this, ___item, method) (( void (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30267_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30268_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30268(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30268_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30269_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30269(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30269_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30270_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30270(__this, method) (( Object_t * (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30271_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30271(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30272_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30272(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30272_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30273_gshared (List_1_t540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30273(__this, ___index, method) (( Object_t * (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30273_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30274_gshared (List_1_t540 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30274(__this, ___index, ___value, method) (( void (*) (List_1_t540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30274_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Add(T)
extern "C" void List_1_Add_m30275_gshared (List_1_t540 * __this, Log_t539  ___item, const MethodInfo* method);
#define List_1_Add_m30275(__this, ___item, method) (( void (*) (List_1_t540 *, Log_t539 , const MethodInfo*))List_1_Add_m30275_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30276_gshared (List_1_t540 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30276(__this, ___newCount, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30276_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30277_gshared (List_1_t540 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30277(__this, ___idx, ___count, method) (( void (*) (List_1_t540 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30277_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30278_gshared (List_1_t540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30278(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30278_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30279_gshared (List_1_t540 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30279(__this, ___enumerable, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30279_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30280_gshared (List_1_t540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30280(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddRange_m30280_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6382 * List_1_AsReadOnly_m30281_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30281(__this, method) (( ReadOnlyCollection_1_t6382 * (*) (List_1_t540 *, const MethodInfo*))List_1_AsReadOnly_m30281_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Clear()
extern "C" void List_1_Clear_m30282_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_Clear_m30282(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Clear_m30282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Contains(T)
extern "C" bool List_1_Contains_m30283_gshared (List_1_t540 * __this, Log_t539  ___item, const MethodInfo* method);
#define List_1_Contains_m30283(__this, ___item, method) (( bool (*) (List_1_t540 *, Log_t539 , const MethodInfo*))List_1_Contains_m30283_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30284_gshared (List_1_t540 * __this, LogU5BU5D_t6378* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30284(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t540 *, LogU5BU5D_t6378*, int32_t, const MethodInfo*))List_1_CopyTo_m30284_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::Find(System.Predicate`1<T>)
extern "C" Log_t539  List_1_Find_m30285_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_Find_m30285(__this, ___match, method) (( Log_t539  (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_Find_m30285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30286_gshared (Object_t * __this /* static, unused */, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30286(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6386 *, const MethodInfo*))List_1_CheckMatch_m30286_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t540 * List_1_FindAll_m30287_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_FindAll_m30287(__this, ___match, method) (( List_1_t540 * (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_FindAll_m30287_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t540 * List_1_FindAllStackBits_m30288_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m30288(__this, ___match, method) (( List_1_t540 * (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_FindAllStackBits_m30288_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t540 * List_1_FindAllList_m30289_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m30289(__this, ___match, method) (( List_1_t540 * (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_FindAllList_m30289_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m30290_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m30290(__this, ___match, method) (( int32_t (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_FindIndex_m30290_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30291_gshared (List_1_t540 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30291(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t540 *, int32_t, int32_t, Predicate_1_t6386 *, const MethodInfo*))List_1_GetIndex_m30291_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetEnumerator()
extern "C" Enumerator_t6380  List_1_GetEnumerator_m30292_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30292(__this, method) (( Enumerator_t6380  (*) (List_1_t540 *, const MethodInfo*))List_1_GetEnumerator_m30292_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t540 * List_1_GetRange_m30293_gshared (List_1_t540 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30293(__this, ___index, ___count, method) (( List_1_t540 * (*) (List_1_t540 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30293_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30294_gshared (List_1_t540 * __this, Log_t539  ___item, const MethodInfo* method);
#define List_1_IndexOf_m30294(__this, ___item, method) (( int32_t (*) (List_1_t540 *, Log_t539 , const MethodInfo*))List_1_IndexOf_m30294_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30295_gshared (List_1_t540 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30295(__this, ___start, ___delta, method) (( void (*) (List_1_t540 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30295_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30296_gshared (List_1_t540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30296(__this, ___index, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30297_gshared (List_1_t540 * __this, int32_t ___index, Log_t539  ___item, const MethodInfo* method);
#define List_1_Insert_m30297(__this, ___index, ___item, method) (( void (*) (List_1_t540 *, int32_t, Log_t539 , const MethodInfo*))List_1_Insert_m30297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30298_gshared (List_1_t540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30298(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30298_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30299_gshared (List_1_t540 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30299(__this, ___index, ___collection, method) (( void (*) (List_1_t540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30299_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30300_gshared (List_1_t540 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30300(__this, ___index, ___collection, method) (( void (*) (List_1_t540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30300_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30301_gshared (List_1_t540 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30301(__this, ___index, ___enumerable, method) (( void (*) (List_1_t540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30301_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Remove(T)
extern "C" bool List_1_Remove_m30302_gshared (List_1_t540 * __this, Log_t539  ___item, const MethodInfo* method);
#define List_1_Remove_m30302(__this, ___item, method) (( bool (*) (List_1_t540 *, Log_t539 , const MethodInfo*))List_1_Remove_m30302_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30303_gshared (List_1_t540 * __this, Predicate_1_t6386 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30303(__this, ___match, method) (( int32_t (*) (List_1_t540 *, Predicate_1_t6386 *, const MethodInfo*))List_1_RemoveAll_m30303_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30304_gshared (List_1_t540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30304(__this, ___index, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30304_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30305_gshared (List_1_t540 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30305(__this, ___index, ___count, method) (( void (*) (List_1_t540 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30305_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Reverse()
extern "C" void List_1_Reverse_m30306_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_Reverse_m30306(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Reverse_m30306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort()
extern "C" void List_1_Sort_m30307_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_Sort_m30307(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Sort_m30307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30308_gshared (List_1_t540 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30308(__this, ___comparer, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_Sort_m30308_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30309_gshared (List_1_t540 * __this, Comparison_1_t6389 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30309(__this, ___comparison, method) (( void (*) (List_1_t540 *, Comparison_1_t6389 *, const MethodInfo*))List_1_Sort_m30309_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Consolation.Console/Log>::ToArray()
extern "C" LogU5BU5D_t6378* List_1_ToArray_m30310_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_ToArray_m30310(__this, method) (( LogU5BU5D_t6378* (*) (List_1_t540 *, const MethodInfo*))List_1_ToArray_m30310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m30311_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30311(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_TrimExcess_m30311_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30312_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30312(__this, method) (( int32_t (*) (List_1_t540 *, const MethodInfo*))List_1_get_Capacity_m30312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30313_gshared (List_1_t540 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30313(__this, ___value, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30313_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m30314_gshared (List_1_t540 * __this, const MethodInfo* method);
#define List_1_get_Count_m30314(__this, method) (( int32_t (*) (List_1_t540 *, const MethodInfo*))List_1_get_Count_m30314_gshared)(__this, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::get_Item(System.Int32)
extern "C" Log_t539  List_1_get_Item_m30315_gshared (List_1_t540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30315(__this, ___index, method) (( Log_t539  (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_get_Item_m30315_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30316_gshared (List_1_t540 * __this, int32_t ___index, Log_t539  ___value, const MethodInfo* method);
#define List_1_set_Item_m30316(__this, ___index, ___value, method) (( void (*) (List_1_t540 *, int32_t, Log_t539 , const MethodInfo*))List_1_set_Item_m30316_gshared)(__this, ___index, ___value, method)
