#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Consolation.Console/Log>
struct List_1_t564;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Consolation.Console/Log>
struct IEnumerable_1_t10095;
// Consolation.Console/Log[]
struct LogU5BU5D_t6704;
// System.Collections.Generic.IEnumerator`1<Consolation.Console/Log>
struct IEnumerator_1_t10096;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Consolation.Console/Log>
struct ICollection_1_t10097;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Consolation.Console/Log>
struct ReadOnlyCollection_1_t6708;
// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t6712;
// System.Collections.Generic.IComparer`1<Consolation.Console/Log>
struct IComparer_1_t10098;
// System.Comparison`1<Consolation.Console/Log>
struct Comparison_1_t6715;
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"
// System.Collections.Generic.List`1/Enumerator<Consolation.Console/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor()
extern "C" void List_1__ctor_m3604_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1__ctor_m3604(__this, method) (( void (*) (List_1_t564 *, const MethodInfo*))List_1__ctor_m3604_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31628_gshared (List_1_t564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31628(__this, ___collection, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1__ctor_m31628_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Int32)
extern "C" void List_1__ctor_m31629_gshared (List_1_t564 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m31629(__this, ___capacity, method) (( void (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1__ctor_m31629_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31630_gshared (List_1_t564 * __this, LogU5BU5D_t6704* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31630(__this, ___data, ___size, method) (( void (*) (List_1_t564 *, LogU5BU5D_t6704*, int32_t, const MethodInfo*))List_1__ctor_m31630_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.cctor()
extern "C" void List_1__cctor_m31631_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31631(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31631_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31632_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31632(__this, method) (( Object_t* (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31633_gshared (List_1_t564 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31633(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t564 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31633_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31634_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31634(__this, method) (( Object_t * (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31634_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31635_gshared (List_1_t564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31635(__this, ___item, method) (( int32_t (*) (List_1_t564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31635_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31636_gshared (List_1_t564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31636(__this, ___item, method) (( bool (*) (List_1_t564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31636_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31637_gshared (List_1_t564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31637(__this, ___item, method) (( int32_t (*) (List_1_t564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31638_gshared (List_1_t564 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31638(__this, ___index, ___item, method) (( void (*) (List_1_t564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31638_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31639_gshared (List_1_t564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31639(__this, ___item, method) (( void (*) (List_1_t564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31639_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31640_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31640(__this, method) (( bool (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31641_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31641(__this, method) (( bool (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31641_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31642_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31642(__this, method) (( Object_t * (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31643_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31643(__this, method) (( bool (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31644_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31644(__this, method) (( bool (*) (List_1_t564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31644_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31645_gshared (List_1_t564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31645(__this, ___index, method) (( Object_t * (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31645_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31646_gshared (List_1_t564 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31646(__this, ___index, ___value, method) (( void (*) (List_1_t564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31646_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Add(T)
extern "C" void List_1_Add_m31647_gshared (List_1_t564 * __this, Log_t563  ___item, const MethodInfo* method);
#define List_1_Add_m31647(__this, ___item, method) (( void (*) (List_1_t564 *, Log_t563 , const MethodInfo*))List_1_Add_m31647_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31648_gshared (List_1_t564 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31648(__this, ___newCount, method) (( void (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31648_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31649_gshared (List_1_t564 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31649(__this, ___idx, ___count, method) (( void (*) (List_1_t564 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31649_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31650_gshared (List_1_t564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31650(__this, ___collection, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31650_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31651_gshared (List_1_t564 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31651(__this, ___enumerable, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31651_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31652_gshared (List_1_t564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31652(__this, ___collection, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1_AddRange_m31652_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6708 * List_1_AsReadOnly_m31653_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31653(__this, method) (( ReadOnlyCollection_1_t6708 * (*) (List_1_t564 *, const MethodInfo*))List_1_AsReadOnly_m31653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Clear()
extern "C" void List_1_Clear_m31654_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_Clear_m31654(__this, method) (( void (*) (List_1_t564 *, const MethodInfo*))List_1_Clear_m31654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Contains(T)
extern "C" bool List_1_Contains_m31655_gshared (List_1_t564 * __this, Log_t563  ___item, const MethodInfo* method);
#define List_1_Contains_m31655(__this, ___item, method) (( bool (*) (List_1_t564 *, Log_t563 , const MethodInfo*))List_1_Contains_m31655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31656_gshared (List_1_t564 * __this, LogU5BU5D_t6704* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t564 *, LogU5BU5D_t6704*, int32_t, const MethodInfo*))List_1_CopyTo_m31656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::Find(System.Predicate`1<T>)
extern "C" Log_t563  List_1_Find_m31657_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_Find_m31657(__this, ___match, method) (( Log_t563  (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_Find_m31657_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31658_gshared (Object_t * __this /* static, unused */, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31658(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6712 *, const MethodInfo*))List_1_CheckMatch_m31658_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t564 * List_1_FindAll_m31659_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_FindAll_m31659(__this, ___match, method) (( List_1_t564 * (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_FindAll_m31659_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t564 * List_1_FindAllStackBits_m31660_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m31660(__this, ___match, method) (( List_1_t564 * (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_FindAllStackBits_m31660_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t564 * List_1_FindAllList_m31661_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m31661(__this, ___match, method) (( List_1_t564 * (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_FindAllList_m31661_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m31662_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m31662(__this, ___match, method) (( int32_t (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_FindIndex_m31662_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31663_gshared (List_1_t564 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31663(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t564 *, int32_t, int32_t, Predicate_1_t6712 *, const MethodInfo*))List_1_GetIndex_m31663_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetEnumerator()
extern "C" Enumerator_t6706  List_1_GetEnumerator_m31664_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31664(__this, method) (( Enumerator_t6706  (*) (List_1_t564 *, const MethodInfo*))List_1_GetEnumerator_m31664_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t564 * List_1_GetRange_m31665_gshared (List_1_t564 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31665(__this, ___index, ___count, method) (( List_1_t564 * (*) (List_1_t564 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31665_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31666_gshared (List_1_t564 * __this, Log_t563  ___item, const MethodInfo* method);
#define List_1_IndexOf_m31666(__this, ___item, method) (( int32_t (*) (List_1_t564 *, Log_t563 , const MethodInfo*))List_1_IndexOf_m31666_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31667_gshared (List_1_t564 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31667(__this, ___start, ___delta, method) (( void (*) (List_1_t564 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31667_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31668_gshared (List_1_t564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31668(__this, ___index, method) (( void (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31668_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31669_gshared (List_1_t564 * __this, int32_t ___index, Log_t563  ___item, const MethodInfo* method);
#define List_1_Insert_m31669(__this, ___index, ___item, method) (( void (*) (List_1_t564 *, int32_t, Log_t563 , const MethodInfo*))List_1_Insert_m31669_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31670_gshared (List_1_t564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31670(__this, ___collection, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31670_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31671_gshared (List_1_t564 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31671(__this, ___index, ___collection, method) (( void (*) (List_1_t564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31671_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31672_gshared (List_1_t564 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31672(__this, ___index, ___collection, method) (( void (*) (List_1_t564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31672_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31673_gshared (List_1_t564 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31673(__this, ___index, ___enumerable, method) (( void (*) (List_1_t564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31673_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Remove(T)
extern "C" bool List_1_Remove_m31674_gshared (List_1_t564 * __this, Log_t563  ___item, const MethodInfo* method);
#define List_1_Remove_m31674(__this, ___item, method) (( bool (*) (List_1_t564 *, Log_t563 , const MethodInfo*))List_1_Remove_m31674_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31675_gshared (List_1_t564 * __this, Predicate_1_t6712 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31675(__this, ___match, method) (( int32_t (*) (List_1_t564 *, Predicate_1_t6712 *, const MethodInfo*))List_1_RemoveAll_m31675_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31676_gshared (List_1_t564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31676(__this, ___index, method) (( void (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31676_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31677_gshared (List_1_t564 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31677(__this, ___index, ___count, method) (( void (*) (List_1_t564 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31677_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Reverse()
extern "C" void List_1_Reverse_m31678_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_Reverse_m31678(__this, method) (( void (*) (List_1_t564 *, const MethodInfo*))List_1_Reverse_m31678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort()
extern "C" void List_1_Sort_m31679_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_Sort_m31679(__this, method) (( void (*) (List_1_t564 *, const MethodInfo*))List_1_Sort_m31679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31680_gshared (List_1_t564 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31680(__this, ___comparer, method) (( void (*) (List_1_t564 *, Object_t*, const MethodInfo*))List_1_Sort_m31680_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31681_gshared (List_1_t564 * __this, Comparison_1_t6715 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31681(__this, ___comparison, method) (( void (*) (List_1_t564 *, Comparison_1_t6715 *, const MethodInfo*))List_1_Sort_m31681_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Consolation.Console/Log>::ToArray()
extern "C" LogU5BU5D_t6704* List_1_ToArray_m31682_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_ToArray_m31682(__this, method) (( LogU5BU5D_t6704* (*) (List_1_t564 *, const MethodInfo*))List_1_ToArray_m31682_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m31683_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31683(__this, method) (( void (*) (List_1_t564 *, const MethodInfo*))List_1_TrimExcess_m31683_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31684_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31684(__this, method) (( int32_t (*) (List_1_t564 *, const MethodInfo*))List_1_get_Capacity_m31684_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31685_gshared (List_1_t564 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31685(__this, ___value, method) (( void (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31685_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m31686_gshared (List_1_t564 * __this, const MethodInfo* method);
#define List_1_get_Count_m31686(__this, method) (( int32_t (*) (List_1_t564 *, const MethodInfo*))List_1_get_Count_m31686_gshared)(__this, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::get_Item(System.Int32)
extern "C" Log_t563  List_1_get_Item_m31687_gshared (List_1_t564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31687(__this, ___index, method) (( Log_t563  (*) (List_1_t564 *, int32_t, const MethodInfo*))List_1_get_Item_m31687_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31688_gshared (List_1_t564 * __this, int32_t ___index, Log_t563  ___value, const MethodInfo* method);
#define List_1_set_Item_m31688(__this, ___index, ___value, method) (( void (*) (List_1_t564 *, int32_t, Log_t563 , const MethodInfo*))List_1_set_Item_m31688_gshared)(__this, ___index, ___value, method)
