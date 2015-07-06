#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t598;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t9660;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t9661;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t9662;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t6129;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t6133;
// System.Collections.Generic.IComparer`1<UnityEngine.Color32>
struct IComparer_1_t9663;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t6136;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m2577_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1__ctor_m2577(__this, method) (( void (*) (List_1_t598 *, const MethodInfo*))List_1__ctor_m2577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26264_gshared (List_1_t598 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26264(__this, ___collection, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1__ctor_m26264_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26265_gshared (List_1_t598 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26265(__this, ___capacity, method) (( void (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1__ctor_m26265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26266_gshared (List_1_t598 * __this, Color32U5BU5D_t91* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26266(__this, ___data, ___size, method) (( void (*) (List_1_t598 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1__ctor_m26266_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m26267_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26267(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26268_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26268(__this, method) (( Object_t* (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26268_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26269_gshared (List_1_t598 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26269(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t598 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26269_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26270_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26270(__this, method) (( Object_t * (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26271_gshared (List_1_t598 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26271(__this, ___item, method) (( int32_t (*) (List_1_t598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26271_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26272_gshared (List_1_t598 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26272(__this, ___item, method) (( bool (*) (List_1_t598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26273_gshared (List_1_t598 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26273(__this, ___item, method) (( int32_t (*) (List_1_t598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26274_gshared (List_1_t598 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26274(__this, ___index, ___item, method) (( void (*) (List_1_t598 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26274_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26275_gshared (List_1_t598 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26275(__this, ___item, method) (( void (*) (List_1_t598 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26275_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26276_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26276(__this, method) (( bool (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26277_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26277(__this, method) (( bool (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26277_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26278_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26278(__this, method) (( Object_t * (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26279_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26279(__this, method) (( bool (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26280_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26280(__this, method) (( bool (*) (List_1_t598 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26280_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26281_gshared (List_1_t598 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26281(__this, ___index, method) (( Object_t * (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26281_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26282_gshared (List_1_t598 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26282(__this, ___index, ___value, method) (( void (*) (List_1_t598 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26282_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m26283_gshared (List_1_t598 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Add_m26283(__this, ___item, method) (( void (*) (List_1_t598 *, Color32_t89 , const MethodInfo*))List_1_Add_m26283_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26284_gshared (List_1_t598 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26284(__this, ___newCount, method) (( void (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26284_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26285_gshared (List_1_t598 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26285(__this, ___idx, ___count, method) (( void (*) (List_1_t598 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26285_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26286_gshared (List_1_t598 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26286(__this, ___collection, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26286_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26287_gshared (List_1_t598 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26287(__this, ___enumerable, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26287_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26288_gshared (List_1_t598 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26288(__this, ___collection, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1_AddRange_m26288_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6129 * List_1_AsReadOnly_m26289_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26289(__this, method) (( ReadOnlyCollection_1_t6129 * (*) (List_1_t598 *, const MethodInfo*))List_1_AsReadOnly_m26289_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m26290_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_Clear_m26290(__this, method) (( void (*) (List_1_t598 *, const MethodInfo*))List_1_Clear_m26290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m26291_gshared (List_1_t598 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Contains_m26291(__this, ___item, method) (( bool (*) (List_1_t598 *, Color32_t89 , const MethodInfo*))List_1_Contains_m26291_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26292_gshared (List_1_t598 * __this, Color32U5BU5D_t91* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26292(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t598 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1_CopyTo_m26292_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t89  List_1_Find_m26293_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_Find_m26293(__this, ___match, method) (( Color32_t89  (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_Find_m26293_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26294_gshared (Object_t * __this /* static, unused */, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26294(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6133 *, const MethodInfo*))List_1_CheckMatch_m26294_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t598 * List_1_FindAll_m26295_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_FindAll_m26295(__this, ___match, method) (( List_1_t598 * (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_FindAll_m26295_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t598 * List_1_FindAllStackBits_m26296_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m26296(__this, ___match, method) (( List_1_t598 * (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_FindAllStackBits_m26296_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t598 * List_1_FindAllList_m26297_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m26297(__this, ___match, method) (( List_1_t598 * (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_FindAllList_m26297_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m26298_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m26298(__this, ___match, method) (( int32_t (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_FindIndex_m26298_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26299_gshared (List_1_t598 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26299(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t598 *, int32_t, int32_t, Predicate_1_t6133 *, const MethodInfo*))List_1_GetIndex_m26299_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t6127  List_1_GetEnumerator_m26300_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26300(__this, method) (( Enumerator_t6127  (*) (List_1_t598 *, const MethodInfo*))List_1_GetEnumerator_m26300_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t598 * List_1_GetRange_m26301_gshared (List_1_t598 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26301(__this, ___index, ___count, method) (( List_1_t598 * (*) (List_1_t598 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26301_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26302_gshared (List_1_t598 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_IndexOf_m26302(__this, ___item, method) (( int32_t (*) (List_1_t598 *, Color32_t89 , const MethodInfo*))List_1_IndexOf_m26302_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26303_gshared (List_1_t598 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26303(__this, ___start, ___delta, method) (( void (*) (List_1_t598 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26303_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26304_gshared (List_1_t598 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26304(__this, ___index, method) (( void (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26304_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26305_gshared (List_1_t598 * __this, int32_t ___index, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Insert_m26305(__this, ___index, ___item, method) (( void (*) (List_1_t598 *, int32_t, Color32_t89 , const MethodInfo*))List_1_Insert_m26305_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26306_gshared (List_1_t598 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26306(__this, ___collection, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26306_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26307_gshared (List_1_t598 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26307(__this, ___index, ___collection, method) (( void (*) (List_1_t598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26307_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26308_gshared (List_1_t598 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26308(__this, ___index, ___collection, method) (( void (*) (List_1_t598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26308_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26309_gshared (List_1_t598 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26309(__this, ___index, ___enumerable, method) (( void (*) (List_1_t598 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26309_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m26310_gshared (List_1_t598 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Remove_m26310(__this, ___item, method) (( bool (*) (List_1_t598 *, Color32_t89 , const MethodInfo*))List_1_Remove_m26310_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26311_gshared (List_1_t598 * __this, Predicate_1_t6133 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26311(__this, ___match, method) (( int32_t (*) (List_1_t598 *, Predicate_1_t6133 *, const MethodInfo*))List_1_RemoveAll_m26311_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26312_gshared (List_1_t598 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26312(__this, ___index, method) (( void (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26312_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26313_gshared (List_1_t598 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26313(__this, ___index, ___count, method) (( void (*) (List_1_t598 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26313_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m26314_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_Reverse_m26314(__this, method) (( void (*) (List_1_t598 *, const MethodInfo*))List_1_Reverse_m26314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m26315_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_Sort_m26315(__this, method) (( void (*) (List_1_t598 *, const MethodInfo*))List_1_Sort_m26315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26316_gshared (List_1_t598 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26316(__this, ___comparer, method) (( void (*) (List_1_t598 *, Object_t*, const MethodInfo*))List_1_Sort_m26316_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26317_gshared (List_1_t598 * __this, Comparison_1_t6136 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26317(__this, ___comparison, method) (( void (*) (List_1_t598 *, Comparison_1_t6136 *, const MethodInfo*))List_1_Sort_m26317_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t91* List_1_ToArray_m2579_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_ToArray_m2579(__this, method) (( Color32U5BU5D_t91* (*) (List_1_t598 *, const MethodInfo*))List_1_ToArray_m2579_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26318_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26318(__this, method) (( void (*) (List_1_t598 *, const MethodInfo*))List_1_TrimExcess_m26318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26319_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26319(__this, method) (( int32_t (*) (List_1_t598 *, const MethodInfo*))List_1_get_Capacity_m26319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26320_gshared (List_1_t598 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26320(__this, ___value, method) (( void (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26320_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m26321_gshared (List_1_t598 * __this, const MethodInfo* method);
#define List_1_get_Count_m26321(__this, method) (( int32_t (*) (List_1_t598 *, const MethodInfo*))List_1_get_Count_m26321_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t89  List_1_get_Item_m26322_gshared (List_1_t598 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26322(__this, ___index, method) (( Color32_t89  (*) (List_1_t598 *, int32_t, const MethodInfo*))List_1_get_Item_m26322_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26323_gshared (List_1_t598 * __this, int32_t ___index, Color32_t89  ___value, const MethodInfo* method);
#define List_1_set_Item_m26323(__this, ___index, ___value, method) (( void (*) (List_1_t598 *, int32_t, Color32_t89 , const MethodInfo*))List_1_set_Item_m26323_gshared)(__this, ___index, ___value, method)
