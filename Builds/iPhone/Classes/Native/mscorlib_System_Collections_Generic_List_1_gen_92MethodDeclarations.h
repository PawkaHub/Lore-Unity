#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Statement>
struct List_1_t3744;
// System.Object
struct Object_t;
// Language.Lua.Statement
struct Statement_t3742;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Statement>
struct IEnumerable_1_t10886;
// Language.Lua.Statement[]
struct StatementU5BU5D_t9505;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Statement>
struct IEnumerator_1_t10887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Statement>
struct ICollection_1_t10888;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Statement>
struct ReadOnlyCollection_1_t9507;
// System.Predicate`1<Language.Lua.Statement>
struct Predicate_1_t9508;
// System.Collections.Generic.IComparer`1<Language.Lua.Statement>
struct IComparer_1_t10889;
// System.Comparison`1<Language.Lua.Statement>
struct Comparison_1_t9509;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Statement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11351(__this, method) (( void (*) (List_1_t3744 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68233(__this, ___collection, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Int32)
#define List_1__ctor_m68234(__this, ___capacity, method) (( void (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(T[],System.Int32)
#define List_1__ctor_m68235(__this, ___data, ___size, method) (( void (*) (List_1_t3744 *, StatementU5BU5D_t9505*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.cctor()
#define List_1__cctor_m68236(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68237(__this, method) (( Object_t* (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68238(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3744 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68239(__this, method) (( Object_t * (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68240(__this, ___item, method) (( int32_t (*) (List_1_t3744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68241(__this, ___item, method) (( bool (*) (List_1_t3744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68242(__this, ___item, method) (( int32_t (*) (List_1_t3744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68243(__this, ___index, ___item, method) (( void (*) (List_1_t3744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68244(__this, ___item, method) (( void (*) (List_1_t3744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68245(__this, method) (( bool (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68246(__this, method) (( bool (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68247(__this, method) (( Object_t * (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68248(__this, method) (( bool (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68249(__this, method) (( bool (*) (List_1_t3744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68250(__this, ___index, method) (( Object_t * (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68251(__this, ___index, ___value, method) (( void (*) (List_1_t3744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Add(T)
#define List_1_Add_m68252(__this, ___item, method) (( void (*) (List_1_t3744 *, Statement_t3742 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68253(__this, ___newCount, method) (( void (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68254(__this, ___idx, ___count, method) (( void (*) (List_1_t3744 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68255(__this, ___collection, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68256(__this, ___enumerable, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68257(__this, ___collection, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::AsReadOnly()
#define List_1_AsReadOnly_m68258(__this, method) (( ReadOnlyCollection_1_t9507 * (*) (List_1_t3744 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Clear()
#define List_1_Clear_m68259(__this, method) (( void (*) (List_1_t3744 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Contains(T)
#define List_1_Contains_m68260(__this, ___item, method) (( bool (*) (List_1_t3744 *, Statement_t3742 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68261(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3744 *, StatementU5BU5D_t9505*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::Find(System.Predicate`1<T>)
#define List_1_Find_m68262(__this, ___match, method) (( Statement_t3742 * (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68263(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9508 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68264(__this, ___match, method) (( List_1_t3744 * (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68265(__this, ___match, method) (( List_1_t3744 * (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68266(__this, ___match, method) (( List_1_t3744 * (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68267(__this, ___match, method) (( int32_t (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68268(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3744 *, int32_t, int32_t, Predicate_1_t9508 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetEnumerator()
#define List_1_GetEnumerator_m11352(__this, method) (( Enumerator_t3830  (*) (List_1_t3744 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68269(__this, ___index, ___count, method) (( List_1_t3744 * (*) (List_1_t3744 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::IndexOf(T)
#define List_1_IndexOf_m68270(__this, ___item, method) (( int32_t (*) (List_1_t3744 *, Statement_t3742 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68271(__this, ___start, ___delta, method) (( void (*) (List_1_t3744 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68272(__this, ___index, method) (( void (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Insert(System.Int32,T)
#define List_1_Insert_m68273(__this, ___index, ___item, method) (( void (*) (List_1_t3744 *, int32_t, Statement_t3742 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68274(__this, ___collection, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68275(__this, ___index, ___collection, method) (( void (*) (List_1_t3744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68276(__this, ___index, ___collection, method) (( void (*) (List_1_t3744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68277(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Remove(T)
#define List_1_Remove_m68278(__this, ___item, method) (( bool (*) (List_1_t3744 *, Statement_t3742 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68279(__this, ___match, method) (( int32_t (*) (List_1_t3744 *, Predicate_1_t9508 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68280(__this, ___index, method) (( void (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68281(__this, ___index, ___count, method) (( void (*) (List_1_t3744 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Reverse()
#define List_1_Reverse_m68282(__this, method) (( void (*) (List_1_t3744 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort()
#define List_1_Sort_m68283(__this, method) (( void (*) (List_1_t3744 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68284(__this, ___comparer, method) (( void (*) (List_1_t3744 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68285(__this, ___comparison, method) (( void (*) (List_1_t3744 *, Comparison_1_t9509 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Statement>::ToArray()
#define List_1_ToArray_m68286(__this, method) (( StatementU5BU5D_t9505* (*) (List_1_t3744 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::TrimExcess()
#define List_1_TrimExcess_m68287(__this, method) (( void (*) (List_1_t3744 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Capacity()
#define List_1_get_Capacity_m68288(__this, method) (( int32_t (*) (List_1_t3744 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68289(__this, ___value, method) (( void (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Count()
#define List_1_get_Count_m68290(__this, method) (( int32_t (*) (List_1_t3744 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::get_Item(System.Int32)
#define List_1_get_Item_m68291(__this, ___index, method) (( Statement_t3742 * (*) (List_1_t3744 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Item(System.Int32,T)
#define List_1_set_Item_m68292(__this, ___index, ___value, method) (( void (*) (List_1_t3744 *, int32_t, Statement_t3742 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)
