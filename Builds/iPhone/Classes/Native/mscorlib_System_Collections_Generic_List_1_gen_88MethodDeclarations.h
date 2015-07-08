#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t3739;
// System.Object
struct Object_t;
// Language.Lua.Var
struct Var_t3827;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Var>
struct IEnumerable_1_t10872;
// Language.Lua.Var[]
struct VarU5BU5D_t9484;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Var>
struct IEnumerator_1_t10873;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Var>
struct ICollection_1_t10874;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Var>
struct ReadOnlyCollection_1_t9486;
// System.Predicate`1<Language.Lua.Var>
struct Predicate_1_t9487;
// System.Collections.Generic.IComparer`1<Language.Lua.Var>
struct IComparer_1_t10875;
// System.Comparison`1<Language.Lua.Var>
struct Comparison_1_t9489;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Var>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_142.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11347(__this, method) (( void (*) (List_1_t3739 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67814(__this, ___collection, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Int32)
#define List_1__ctor_m67815(__this, ___capacity, method) (( void (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(T[],System.Int32)
#define List_1__ctor_m67816(__this, ___data, ___size, method) (( void (*) (List_1_t3739 *, VarU5BU5D_t9484*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.cctor()
#define List_1__cctor_m67817(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67818(__this, method) (( Object_t* (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67819(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3739 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67820(__this, method) (( Object_t * (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67821(__this, ___item, method) (( int32_t (*) (List_1_t3739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67822(__this, ___item, method) (( bool (*) (List_1_t3739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67823(__this, ___item, method) (( int32_t (*) (List_1_t3739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67824(__this, ___index, ___item, method) (( void (*) (List_1_t3739 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67825(__this, ___item, method) (( void (*) (List_1_t3739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67826(__this, method) (( bool (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67827(__this, method) (( bool (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67828(__this, method) (( Object_t * (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67829(__this, method) (( bool (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67830(__this, method) (( bool (*) (List_1_t3739 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67831(__this, ___index, method) (( Object_t * (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67832(__this, ___index, ___value, method) (( void (*) (List_1_t3739 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Add(T)
#define List_1_Add_m67833(__this, ___item, method) (( void (*) (List_1_t3739 *, Var_t3827 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67834(__this, ___newCount, method) (( void (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67835(__this, ___idx, ___count, method) (( void (*) (List_1_t3739 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67836(__this, ___collection, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67837(__this, ___enumerable, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67838(__this, ___collection, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::AsReadOnly()
#define List_1_AsReadOnly_m67839(__this, method) (( ReadOnlyCollection_1_t9486 * (*) (List_1_t3739 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Clear()
#define List_1_Clear_m67840(__this, method) (( void (*) (List_1_t3739 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Contains(T)
#define List_1_Contains_m67841(__this, ___item, method) (( bool (*) (List_1_t3739 *, Var_t3827 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67842(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3739 *, VarU5BU5D_t9484*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::Find(System.Predicate`1<T>)
#define List_1_Find_m67843(__this, ___match, method) (( Var_t3827 * (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67844(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9487 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67845(__this, ___match, method) (( List_1_t3739 * (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67846(__this, ___match, method) (( List_1_t3739 * (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67847(__this, ___match, method) (( List_1_t3739 * (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67848(__this, ___match, method) (( int32_t (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67849(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3739 *, int32_t, int32_t, Predicate_1_t9487 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetEnumerator()
#define List_1_GetEnumerator_m67850(__this, method) (( Enumerator_t9488  (*) (List_1_t3739 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67851(__this, ___index, ___count, method) (( List_1_t3739 * (*) (List_1_t3739 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::IndexOf(T)
#define List_1_IndexOf_m67852(__this, ___item, method) (( int32_t (*) (List_1_t3739 *, Var_t3827 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67853(__this, ___start, ___delta, method) (( void (*) (List_1_t3739 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67854(__this, ___index, method) (( void (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Insert(System.Int32,T)
#define List_1_Insert_m67855(__this, ___index, ___item, method) (( void (*) (List_1_t3739 *, int32_t, Var_t3827 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67856(__this, ___collection, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67857(__this, ___index, ___collection, method) (( void (*) (List_1_t3739 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67858(__this, ___index, ___collection, method) (( void (*) (List_1_t3739 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67859(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3739 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Remove(T)
#define List_1_Remove_m67860(__this, ___item, method) (( bool (*) (List_1_t3739 *, Var_t3827 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67861(__this, ___match, method) (( int32_t (*) (List_1_t3739 *, Predicate_1_t9487 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67862(__this, ___index, method) (( void (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67863(__this, ___index, ___count, method) (( void (*) (List_1_t3739 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Reverse()
#define List_1_Reverse_m67864(__this, method) (( void (*) (List_1_t3739 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort()
#define List_1_Sort_m67865(__this, method) (( void (*) (List_1_t3739 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67866(__this, ___comparer, method) (( void (*) (List_1_t3739 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67867(__this, ___comparison, method) (( void (*) (List_1_t3739 *, Comparison_1_t9489 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Var>::ToArray()
#define List_1_ToArray_m67868(__this, method) (( VarU5BU5D_t9484* (*) (List_1_t3739 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::TrimExcess()
#define List_1_TrimExcess_m67869(__this, method) (( void (*) (List_1_t3739 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Capacity()
#define List_1_get_Capacity_m67870(__this, method) (( int32_t (*) (List_1_t3739 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67871(__this, ___value, method) (( void (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Count()
#define List_1_get_Count_m67872(__this, method) (( int32_t (*) (List_1_t3739 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::get_Item(System.Int32)
#define List_1_get_Item_m67873(__this, ___index, method) (( Var_t3827 * (*) (List_1_t3739 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Item(System.Int32,T)
#define List_1_set_Item_m67874(__this, ___index, ___value, method) (( void (*) (List_1_t3739 *, int32_t, Var_t3827 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
