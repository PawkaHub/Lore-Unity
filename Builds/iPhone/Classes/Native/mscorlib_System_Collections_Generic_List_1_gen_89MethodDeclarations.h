#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3740;
// System.Object
struct Object_t;
// Language.Lua.Expr
struct Expr_t3747;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Expr>
struct IEnumerable_1_t10876;
// Language.Lua.Expr[]
struct ExprU5BU5D_t9490;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Expr>
struct IEnumerator_1_t10877;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Expr>
struct ICollection_1_t10878;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Expr>
struct ReadOnlyCollection_1_t9492;
// System.Predicate`1<Language.Lua.Expr>
struct Predicate_1_t9493;
// System.Collections.Generic.IComparer`1<Language.Lua.Expr>
struct IComparer_1_t10879;
// System.Comparison`1<Language.Lua.Expr>
struct Comparison_1_t9494;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Expr>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11348(__this, method) (( void (*) (List_1_t3740 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67920(__this, ___collection, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Int32)
#define List_1__ctor_m67921(__this, ___capacity, method) (( void (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(T[],System.Int32)
#define List_1__ctor_m67922(__this, ___data, ___size, method) (( void (*) (List_1_t3740 *, ExprU5BU5D_t9490*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.cctor()
#define List_1__cctor_m67923(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67924(__this, method) (( Object_t* (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67925(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3740 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67926(__this, method) (( Object_t * (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67927(__this, ___item, method) (( int32_t (*) (List_1_t3740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67928(__this, ___item, method) (( bool (*) (List_1_t3740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67929(__this, ___item, method) (( int32_t (*) (List_1_t3740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67930(__this, ___index, ___item, method) (( void (*) (List_1_t3740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67931(__this, ___item, method) (( void (*) (List_1_t3740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67932(__this, method) (( bool (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67933(__this, method) (( bool (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67934(__this, method) (( Object_t * (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67935(__this, method) (( bool (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67936(__this, method) (( bool (*) (List_1_t3740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67937(__this, ___index, method) (( Object_t * (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67938(__this, ___index, ___value, method) (( void (*) (List_1_t3740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Add(T)
#define List_1_Add_m67939(__this, ___item, method) (( void (*) (List_1_t3740 *, Expr_t3747 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67940(__this, ___newCount, method) (( void (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67941(__this, ___idx, ___count, method) (( void (*) (List_1_t3740 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67942(__this, ___collection, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67943(__this, ___enumerable, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67944(__this, ___collection, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::AsReadOnly()
#define List_1_AsReadOnly_m67945(__this, method) (( ReadOnlyCollection_1_t9492 * (*) (List_1_t3740 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Clear()
#define List_1_Clear_m67946(__this, method) (( void (*) (List_1_t3740 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Contains(T)
#define List_1_Contains_m67947(__this, ___item, method) (( bool (*) (List_1_t3740 *, Expr_t3747 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67948(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3740 *, ExprU5BU5D_t9490*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::Find(System.Predicate`1<T>)
#define List_1_Find_m67949(__this, ___match, method) (( Expr_t3747 * (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67950(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9493 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67951(__this, ___match, method) (( List_1_t3740 * (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67952(__this, ___match, method) (( List_1_t3740 * (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67953(__this, ___match, method) (( List_1_t3740 * (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67954(__this, ___match, method) (( int32_t (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67955(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3740 *, int32_t, int32_t, Predicate_1_t9493 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetEnumerator()
#define List_1_GetEnumerator_m11411(__this, method) (( Enumerator_t3839  (*) (List_1_t3740 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67956(__this, ___index, ___count, method) (( List_1_t3740 * (*) (List_1_t3740 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::IndexOf(T)
#define List_1_IndexOf_m67957(__this, ___item, method) (( int32_t (*) (List_1_t3740 *, Expr_t3747 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67958(__this, ___start, ___delta, method) (( void (*) (List_1_t3740 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67959(__this, ___index, method) (( void (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Insert(System.Int32,T)
#define List_1_Insert_m67960(__this, ___index, ___item, method) (( void (*) (List_1_t3740 *, int32_t, Expr_t3747 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67961(__this, ___collection, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67962(__this, ___index, ___collection, method) (( void (*) (List_1_t3740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67963(__this, ___index, ___collection, method) (( void (*) (List_1_t3740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67964(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Remove(T)
#define List_1_Remove_m67965(__this, ___item, method) (( bool (*) (List_1_t3740 *, Expr_t3747 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67966(__this, ___match, method) (( int32_t (*) (List_1_t3740 *, Predicate_1_t9493 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67967(__this, ___index, method) (( void (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67968(__this, ___index, ___count, method) (( void (*) (List_1_t3740 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Reverse()
#define List_1_Reverse_m67969(__this, method) (( void (*) (List_1_t3740 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort()
#define List_1_Sort_m67970(__this, method) (( void (*) (List_1_t3740 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67971(__this, ___comparer, method) (( void (*) (List_1_t3740 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67972(__this, ___comparison, method) (( void (*) (List_1_t3740 *, Comparison_1_t9494 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Expr>::ToArray()
#define List_1_ToArray_m67973(__this, method) (( ExprU5BU5D_t9490* (*) (List_1_t3740 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::TrimExcess()
#define List_1_TrimExcess_m67974(__this, method) (( void (*) (List_1_t3740 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Capacity()
#define List_1_get_Capacity_m67975(__this, method) (( int32_t (*) (List_1_t3740 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67976(__this, ___value, method) (( void (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Count()
#define List_1_get_Count_m67977(__this, method) (( int32_t (*) (List_1_t3740 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::get_Item(System.Int32)
#define List_1_get_Item_m67978(__this, ___index, method) (( Expr_t3747 * (*) (List_1_t3740 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Item(System.Int32,T)
#define List_1_set_Item_m67979(__this, ___index, ___value, method) (( void (*) (List_1_t3740 *, int32_t, Expr_t3747 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
