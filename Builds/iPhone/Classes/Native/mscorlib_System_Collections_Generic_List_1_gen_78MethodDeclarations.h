#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct List_1_t1593;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1584;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerable_1_t1816;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct IDictionary_2U5BU5D_t7077;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t10110;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct ICollection_1_t10152;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct ReadOnlyCollection_1_t7079;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct Predicate_1_t7080;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IComparer_1_t10153;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct Comparison_1_t7082;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m40815(__this, method) (( void (*) (List_1_t1593 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m40816(__this, ___collection, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(System.Int32)
#define List_1__ctor_m40817(__this, ___capacity, method) (( void (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(T[],System.Int32)
#define List_1__ctor_m40818(__this, ___data, ___size, method) (( void (*) (List_1_t1593 *, IDictionary_2U5BU5D_t7077*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.cctor()
#define List_1__cctor_m40819(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40820(__this, method) (( Object_t* (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m40821(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1593 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40822(__this, method) (( Object_t * (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m40823(__this, ___item, method) (( int32_t (*) (List_1_t1593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m40824(__this, ___item, method) (( bool (*) (List_1_t1593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m40825(__this, ___item, method) (( int32_t (*) (List_1_t1593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m40826(__this, ___index, ___item, method) (( void (*) (List_1_t1593 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m40827(__this, ___item, method) (( void (*) (List_1_t1593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40828(__this, method) (( bool (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40829(__this, method) (( bool (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m40830(__this, method) (( Object_t * (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m40831(__this, method) (( bool (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m40832(__this, method) (( bool (*) (List_1_t1593 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m40833(__this, ___index, method) (( Object_t * (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m40834(__this, ___index, ___value, method) (( void (*) (List_1_t1593 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Add(T)
#define List_1_Add_m40835(__this, ___item, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m40836(__this, ___newCount, method) (( void (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m40837(__this, ___idx, ___count, method) (( void (*) (List_1_t1593 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m40838(__this, ___collection, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m40839(__this, ___enumerable, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m40840(__this, ___collection, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AsReadOnly()
#define List_1_AsReadOnly_m40841(__this, method) (( ReadOnlyCollection_1_t7079 * (*) (List_1_t1593 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Clear()
#define List_1_Clear_m40842(__this, method) (( void (*) (List_1_t1593 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Contains(T)
#define List_1_Contains_m40843(__this, ___item, method) (( bool (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m40844(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1593 *, IDictionary_2U5BU5D_t7077*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Find(System.Predicate`1<T>)
#define List_1_Find_m40845(__this, ___match, method) (( Object_t* (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m40846(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7080 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m40847(__this, ___match, method) (( List_1_t1593 * (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m40848(__this, ___match, method) (( List_1_t1593 * (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m40849(__this, ___match, method) (( List_1_t1593 * (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m40850(__this, ___match, method) (( int32_t (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m40851(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1593 *, int32_t, int32_t, Predicate_1_t7080 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetEnumerator()
#define List_1_GetEnumerator_m40852(__this, method) (( Enumerator_t7081  (*) (List_1_t1593 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m40853(__this, ___index, ___count, method) (( List_1_t1593 * (*) (List_1_t1593 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::IndexOf(T)
#define List_1_IndexOf_m40854(__this, ___item, method) (( int32_t (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m40855(__this, ___start, ___delta, method) (( void (*) (List_1_t1593 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m40856(__this, ___index, method) (( void (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Insert(System.Int32,T)
#define List_1_Insert_m40857(__this, ___index, ___item, method) (( void (*) (List_1_t1593 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m40858(__this, ___collection, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m40859(__this, ___index, ___collection, method) (( void (*) (List_1_t1593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m40860(__this, ___index, ___collection, method) (( void (*) (List_1_t1593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m40861(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Remove(T)
#define List_1_Remove_m40862(__this, ___item, method) (( bool (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m40863(__this, ___match, method) (( int32_t (*) (List_1_t1593 *, Predicate_1_t7080 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m40864(__this, ___index, method) (( void (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m40865(__this, ___index, ___count, method) (( void (*) (List_1_t1593 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Reverse()
#define List_1_Reverse_m40866(__this, method) (( void (*) (List_1_t1593 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort()
#define List_1_Sort_m40867(__this, method) (( void (*) (List_1_t1593 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m40868(__this, ___comparer, method) (( void (*) (List_1_t1593 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m40869(__this, ___comparison, method) (( void (*) (List_1_t1593 *, Comparison_1_t7082 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::ToArray()
#define List_1_ToArray_m40870(__this, method) (( IDictionary_2U5BU5D_t7077* (*) (List_1_t1593 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::TrimExcess()
#define List_1_TrimExcess_m40871(__this, method) (( void (*) (List_1_t1593 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Capacity()
#define List_1_get_Capacity_m40872(__this, method) (( int32_t (*) (List_1_t1593 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m40873(__this, ___value, method) (( void (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Count()
#define List_1_get_Count_m40874(__this, method) (( int32_t (*) (List_1_t1593 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Item(System.Int32)
#define List_1_get_Item_m40875(__this, ___index, method) (( Object_t* (*) (List_1_t1593 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::set_Item(System.Int32,T)
#define List_1_set_Item_m40876(__this, ___index, ___value, method) (( void (*) (List_1_t1593 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)
