#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t878;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9863;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t875;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9862;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t996;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t6475;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6476;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9864;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t6478;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4883_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1__ctor_m4883(__this, method) (( void (*) (List_1_t878 *, const MethodInfo*))List_1__ctor_m4883_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31837_gshared (List_1_t878 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31837(__this, ___collection, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1__ctor_m31837_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17593_gshared (List_1_t878 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17593(__this, ___capacity, method) (( void (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1__ctor_m17593_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31838_gshared (List_1_t878 * __this, UIVertexU5BU5D_t875* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31838(__this, ___data, ___size, method) (( void (*) (List_1_t878 *, UIVertexU5BU5D_t875*, int32_t, const MethodInfo*))List_1__ctor_m31838_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m31839_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31839(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31839_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31840_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31840(__this, method) (( Object_t* (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31841_gshared (List_1_t878 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31841(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t878 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31841_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31842_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31842(__this, method) (( Object_t * (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31842_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31843_gshared (List_1_t878 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31843(__this, ___item, method) (( int32_t (*) (List_1_t878 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31843_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31844_gshared (List_1_t878 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31844(__this, ___item, method) (( bool (*) (List_1_t878 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31844_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31845_gshared (List_1_t878 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31845(__this, ___item, method) (( int32_t (*) (List_1_t878 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31845_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31846_gshared (List_1_t878 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31846(__this, ___index, ___item, method) (( void (*) (List_1_t878 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31846_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31847_gshared (List_1_t878 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31847(__this, ___item, method) (( void (*) (List_1_t878 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31847_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31848_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31848(__this, method) (( bool (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31848_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31849_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31849(__this, method) (( bool (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31849_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31850_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31850(__this, method) (( Object_t * (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31851_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31851(__this, method) (( bool (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31851_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31852_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31852(__this, method) (( bool (*) (List_1_t878 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31852_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31853_gshared (List_1_t878 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31853(__this, ___index, method) (( Object_t * (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31853_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31854_gshared (List_1_t878 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31854(__this, ___index, ___value, method) (( void (*) (List_1_t878 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31854_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m31855_gshared (List_1_t878 * __this, UIVertex_t876  ___item, const MethodInfo* method);
#define List_1_Add_m31855(__this, ___item, method) (( void (*) (List_1_t878 *, UIVertex_t876 , const MethodInfo*))List_1_Add_m31855_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31856_gshared (List_1_t878 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31856(__this, ___newCount, method) (( void (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31856_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31857_gshared (List_1_t878 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31857(__this, ___idx, ___count, method) (( void (*) (List_1_t878 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31857_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31858_gshared (List_1_t878 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31858(__this, ___collection, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31858_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31859_gshared (List_1_t878 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31859(__this, ___enumerable, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31859_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31860_gshared (List_1_t878 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31860(__this, ___collection, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1_AddRange_m31860_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6475 * List_1_AsReadOnly_m31861_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31861(__this, method) (( ReadOnlyCollection_1_t6475 * (*) (List_1_t878 *, const MethodInfo*))List_1_AsReadOnly_m31861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m31862_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_Clear_m31862(__this, method) (( void (*) (List_1_t878 *, const MethodInfo*))List_1_Clear_m31862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m31863_gshared (List_1_t878 * __this, UIVertex_t876  ___item, const MethodInfo* method);
#define List_1_Contains_m31863(__this, ___item, method) (( bool (*) (List_1_t878 *, UIVertex_t876 , const MethodInfo*))List_1_Contains_m31863_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31864_gshared (List_1_t878 * __this, UIVertexU5BU5D_t875* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31864(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t878 *, UIVertexU5BU5D_t875*, int32_t, const MethodInfo*))List_1_CopyTo_m31864_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t876  List_1_Find_m31865_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_Find_m31865(__this, ___match, method) (( UIVertex_t876  (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_Find_m31865_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31866_gshared (Object_t * __this /* static, unused */, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31866(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6476 *, const MethodInfo*))List_1_CheckMatch_m31866_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t878 * List_1_FindAll_m31867_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_FindAll_m31867(__this, ___match, method) (( List_1_t878 * (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_FindAll_m31867_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t878 * List_1_FindAllStackBits_m31868_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m31868(__this, ___match, method) (( List_1_t878 * (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_FindAllStackBits_m31868_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t878 * List_1_FindAllList_m31869_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m31869(__this, ___match, method) (( List_1_t878 * (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_FindAllList_m31869_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m31870_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m31870(__this, ___match, method) (( int32_t (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_FindIndex_m31870_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31871_gshared (List_1_t878 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31871(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t878 *, int32_t, int32_t, Predicate_1_t6476 *, const MethodInfo*))List_1_GetIndex_m31871_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t6477  List_1_GetEnumerator_m31872_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31872(__this, method) (( Enumerator_t6477  (*) (List_1_t878 *, const MethodInfo*))List_1_GetEnumerator_m31872_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t878 * List_1_GetRange_m31873_gshared (List_1_t878 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31873(__this, ___index, ___count, method) (( List_1_t878 * (*) (List_1_t878 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31873_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31874_gshared (List_1_t878 * __this, UIVertex_t876  ___item, const MethodInfo* method);
#define List_1_IndexOf_m31874(__this, ___item, method) (( int32_t (*) (List_1_t878 *, UIVertex_t876 , const MethodInfo*))List_1_IndexOf_m31874_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31875_gshared (List_1_t878 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31875(__this, ___start, ___delta, method) (( void (*) (List_1_t878 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31875_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31876_gshared (List_1_t878 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31876(__this, ___index, method) (( void (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31877_gshared (List_1_t878 * __this, int32_t ___index, UIVertex_t876  ___item, const MethodInfo* method);
#define List_1_Insert_m31877(__this, ___index, ___item, method) (( void (*) (List_1_t878 *, int32_t, UIVertex_t876 , const MethodInfo*))List_1_Insert_m31877_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31878_gshared (List_1_t878 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31878(__this, ___collection, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31878_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31879_gshared (List_1_t878 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31879(__this, ___index, ___collection, method) (( void (*) (List_1_t878 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31879_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31880_gshared (List_1_t878 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31880(__this, ___index, ___collection, method) (( void (*) (List_1_t878 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31880_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31881_gshared (List_1_t878 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31881(__this, ___index, ___enumerable, method) (( void (*) (List_1_t878 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31881_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m31882_gshared (List_1_t878 * __this, UIVertex_t876  ___item, const MethodInfo* method);
#define List_1_Remove_m31882(__this, ___item, method) (( bool (*) (List_1_t878 *, UIVertex_t876 , const MethodInfo*))List_1_Remove_m31882_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31883_gshared (List_1_t878 * __this, Predicate_1_t6476 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31883(__this, ___match, method) (( int32_t (*) (List_1_t878 *, Predicate_1_t6476 *, const MethodInfo*))List_1_RemoveAll_m31883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31884_gshared (List_1_t878 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31884(__this, ___index, method) (( void (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31885_gshared (List_1_t878 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31885(__this, ___index, ___count, method) (( void (*) (List_1_t878 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31885_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m31886_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_Reverse_m31886(__this, method) (( void (*) (List_1_t878 *, const MethodInfo*))List_1_Reverse_m31886_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m31887_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_Sort_m31887(__this, method) (( void (*) (List_1_t878 *, const MethodInfo*))List_1_Sort_m31887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31888_gshared (List_1_t878 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31888(__this, ___comparer, method) (( void (*) (List_1_t878 *, Object_t*, const MethodInfo*))List_1_Sort_m31888_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31889_gshared (List_1_t878 * __this, Comparison_1_t6478 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31889(__this, ___comparison, method) (( void (*) (List_1_t878 *, Comparison_1_t6478 *, const MethodInfo*))List_1_Sort_m31889_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t875* List_1_ToArray_m4923_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_ToArray_m4923(__this, method) (( UIVertexU5BU5D_t875* (*) (List_1_t878 *, const MethodInfo*))List_1_ToArray_m4923_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m31890_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31890(__this, method) (( void (*) (List_1_t878 *, const MethodInfo*))List_1_TrimExcess_m31890_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4816_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4816(__this, method) (( int32_t (*) (List_1_t878 *, const MethodInfo*))List_1_get_Capacity_m4816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4817_gshared (List_1_t878 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4817(__this, ___value, method) (( void (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4817_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m31891_gshared (List_1_t878 * __this, const MethodInfo* method);
#define List_1_get_Count_m31891(__this, method) (( int32_t (*) (List_1_t878 *, const MethodInfo*))List_1_get_Count_m31891_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t876  List_1_get_Item_m31892_gshared (List_1_t878 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31892(__this, ___index, method) (( UIVertex_t876  (*) (List_1_t878 *, int32_t, const MethodInfo*))List_1_get_Item_m31892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31893_gshared (List_1_t878 * __this, int32_t ___index, UIVertex_t876  ___value, const MethodInfo* method);
#define List_1_set_Item_m31893(__this, ___index, ___value, method) (( void (*) (List_1_t878 *, int32_t, UIVertex_t876 , const MethodInfo*))List_1_set_Item_m31893_gshared)(__this, ___index, ___value, method)
