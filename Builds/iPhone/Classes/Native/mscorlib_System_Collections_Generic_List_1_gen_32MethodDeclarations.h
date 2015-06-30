#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Consolation.Console/Log>
struct List_1_t537;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Consolation.Console/Log>
struct IEnumerable_1_t6634;
// Consolation.Console/Log[]
struct LogU5BU5D_t5290;
// System.Collections.Generic.IEnumerator`1<Consolation.Console/Log>
struct IEnumerator_1_t6635;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Consolation.Console/Log>
struct ICollection_1_t6636;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Consolation.Console/Log>
struct ReadOnlyCollection_1_t5294;
// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t5298;
// System.Collections.Generic.IComparer`1<Consolation.Console/Log>
struct IComparer_1_t6637;
// System.Comparison`1<Consolation.Console/Log>
struct Comparison_1_t5301;
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"
// System.Collections.Generic.List`1/Enumerator<Consolation.Console/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor()
extern "C" void List_1__ctor_m3291_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1__ctor_m3291(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1__ctor_m3291_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28759_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28759(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1__ctor_m28759_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(System.Int32)
extern "C" void List_1__ctor_m28760_gshared (List_1_t537 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m28760(__this, ___capacity, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1__ctor_m28760_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28761_gshared (List_1_t537 * __this, LogU5BU5D_t5290* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28761(__this, ___data, ___size, method) (( void (*) (List_1_t537 *, LogU5BU5D_t5290*, int32_t, const MethodInfo*))List_1__ctor_m28761_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::.cctor()
extern "C" void List_1__cctor_m28762_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28762(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28762_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28763_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28763(__this, method) (( Object_t* (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28763_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28764_gshared (List_1_t537 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28764(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t537 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28764_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28765_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28765(__this, method) (( Object_t * (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28765_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28766_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28766(__this, ___item, method) (( int32_t (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28766_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28767_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28767(__this, ___item, method) (( bool (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28767_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28768_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28768(__this, ___item, method) (( int32_t (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28768_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28769_gshared (List_1_t537 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28769(__this, ___index, ___item, method) (( void (*) (List_1_t537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28769_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28770_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28770(__this, ___item, method) (( void (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28770_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28771_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28771(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28772_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28772(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28772_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28773_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28773(__this, method) (( Object_t * (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28773_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28774_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28774(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28775_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28775(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28775_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28776_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28776(__this, ___index, method) (( Object_t * (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28776_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28777_gshared (List_1_t537 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28777(__this, ___index, ___value, method) (( void (*) (List_1_t537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28777_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Add(T)
extern "C" void List_1_Add_m28778_gshared (List_1_t537 * __this, Log_t536  ___item, const MethodInfo* method);
#define List_1_Add_m28778(__this, ___item, method) (( void (*) (List_1_t537 *, Log_t536 , const MethodInfo*))List_1_Add_m28778_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28779_gshared (List_1_t537 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28779(__this, ___newCount, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28779_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28780_gshared (List_1_t537 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28780(__this, ___idx, ___count, method) (( void (*) (List_1_t537 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28780_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28781_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28781(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28781_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28782_gshared (List_1_t537 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28782(__this, ___enumerable, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28782_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28783_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28783(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddRange_m28783_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5294 * List_1_AsReadOnly_m28784_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28784(__this, method) (( ReadOnlyCollection_1_t5294 * (*) (List_1_t537 *, const MethodInfo*))List_1_AsReadOnly_m28784_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Clear()
extern "C" void List_1_Clear_m28785_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Clear_m28785(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Clear_m28785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Contains(T)
extern "C" bool List_1_Contains_m28786_gshared (List_1_t537 * __this, Log_t536  ___item, const MethodInfo* method);
#define List_1_Contains_m28786(__this, ___item, method) (( bool (*) (List_1_t537 *, Log_t536 , const MethodInfo*))List_1_Contains_m28786_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28787_gshared (List_1_t537 * __this, LogU5BU5D_t5290* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28787(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t537 *, LogU5BU5D_t5290*, int32_t, const MethodInfo*))List_1_CopyTo_m28787_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::Find(System.Predicate`1<T>)
extern "C" Log_t536  List_1_Find_m28788_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_Find_m28788(__this, ___match, method) (( Log_t536  (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_Find_m28788_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28789_gshared (Object_t * __this /* static, unused */, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28789(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5298 *, const MethodInfo*))List_1_CheckMatch_m28789_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t537 * List_1_FindAll_m28790_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_FindAll_m28790(__this, ___match, method) (( List_1_t537 * (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_FindAll_m28790_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t537 * List_1_FindAllStackBits_m28791_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m28791(__this, ___match, method) (( List_1_t537 * (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_FindAllStackBits_m28791_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t537 * List_1_FindAllList_m28792_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m28792(__this, ___match, method) (( List_1_t537 * (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_FindAllList_m28792_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m28793_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m28793(__this, ___match, method) (( int32_t (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_FindIndex_m28793_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28794_gshared (List_1_t537 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28794(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t537 *, int32_t, int32_t, Predicate_1_t5298 *, const MethodInfo*))List_1_GetIndex_m28794_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetEnumerator()
extern "C" Enumerator_t5292  List_1_GetEnumerator_m28795_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28795(__this, method) (( Enumerator_t5292  (*) (List_1_t537 *, const MethodInfo*))List_1_GetEnumerator_m28795_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Consolation.Console/Log>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t537 * List_1_GetRange_m28796_gshared (List_1_t537 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28796(__this, ___index, ___count, method) (( List_1_t537 * (*) (List_1_t537 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28796_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28797_gshared (List_1_t537 * __this, Log_t536  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28797(__this, ___item, method) (( int32_t (*) (List_1_t537 *, Log_t536 , const MethodInfo*))List_1_IndexOf_m28797_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28798_gshared (List_1_t537 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28798(__this, ___start, ___delta, method) (( void (*) (List_1_t537 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28798_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28799_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28799(__this, ___index, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28800_gshared (List_1_t537 * __this, int32_t ___index, Log_t536  ___item, const MethodInfo* method);
#define List_1_Insert_m28800(__this, ___index, ___item, method) (( void (*) (List_1_t537 *, int32_t, Log_t536 , const MethodInfo*))List_1_Insert_m28800_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28801_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28801(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28801_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28802_gshared (List_1_t537 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28802(__this, ___index, ___collection, method) (( void (*) (List_1_t537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28802_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28803_gshared (List_1_t537 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28803(__this, ___index, ___collection, method) (( void (*) (List_1_t537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28803_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28804_gshared (List_1_t537 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28804(__this, ___index, ___enumerable, method) (( void (*) (List_1_t537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28804_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Consolation.Console/Log>::Remove(T)
extern "C" bool List_1_Remove_m28805_gshared (List_1_t537 * __this, Log_t536  ___item, const MethodInfo* method);
#define List_1_Remove_m28805(__this, ___item, method) (( bool (*) (List_1_t537 *, Log_t536 , const MethodInfo*))List_1_Remove_m28805_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28806_gshared (List_1_t537 * __this, Predicate_1_t5298 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28806(__this, ___match, method) (( int32_t (*) (List_1_t537 *, Predicate_1_t5298 *, const MethodInfo*))List_1_RemoveAll_m28806_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28807_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28807(__this, ___index, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28808_gshared (List_1_t537 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28808(__this, ___index, ___count, method) (( void (*) (List_1_t537 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28808_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Reverse()
extern "C" void List_1_Reverse_m28809_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Reverse_m28809(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Reverse_m28809_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort()
extern "C" void List_1_Sort_m28810_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Sort_m28810(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Sort_m28810_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28811_gshared (List_1_t537 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28811(__this, ___comparer, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_Sort_m28811_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28812_gshared (List_1_t537 * __this, Comparison_1_t5301 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28812(__this, ___comparison, method) (( void (*) (List_1_t537 *, Comparison_1_t5301 *, const MethodInfo*))List_1_Sort_m28812_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Consolation.Console/Log>::ToArray()
extern "C" LogU5BU5D_t5290* List_1_ToArray_m28813_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_ToArray_m28813(__this, method) (( LogU5BU5D_t5290* (*) (List_1_t537 *, const MethodInfo*))List_1_ToArray_m28813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m28814_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28814(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_TrimExcess_m28814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28815_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28815(__this, method) (( int32_t (*) (List_1_t537 *, const MethodInfo*))List_1_get_Capacity_m28815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28816_gshared (List_1_t537 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28816(__this, ___value, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28816_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m28817_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_get_Count_m28817(__this, method) (( int32_t (*) (List_1_t537 *, const MethodInfo*))List_1_get_Count_m28817_gshared)(__this, method)
// T System.Collections.Generic.List`1<Consolation.Console/Log>::get_Item(System.Int32)
extern "C" Log_t536  List_1_get_Item_m28818_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28818(__this, ___index, method) (( Log_t536  (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_get_Item_m28818_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28819_gshared (List_1_t537 * __this, int32_t ___index, Log_t536  ___value, const MethodInfo* method);
#define List_1_set_Item_m28819(__this, ___index, ___value, method) (( void (*) (List_1_t537 *, int32_t, Log_t536 , const MethodInfo*))List_1_set_Item_m28819_gshared)(__this, ___index, ___value, method)
