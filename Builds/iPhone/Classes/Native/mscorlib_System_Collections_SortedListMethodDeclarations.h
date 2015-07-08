#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t4474;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t749;
// System.Collections.IComparer
struct IComparer_t4203;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Array
struct Array_t;
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C" void SortedList__ctor_m20259 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C" void SortedList__ctor_m15362 (SortedList_t4474 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C" void SortedList__ctor_m20260 (SortedList_t4474 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C" void SortedList__cctor_m20261 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m20262 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C" int32_t SortedList_get_Count_m20263 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
extern "C" bool SortedList_get_IsSynchronized_m20264 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C" Object_t * SortedList_get_SyncRoot_m20265 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C" bool SortedList_get_IsFixedSize_m20266 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C" bool SortedList_get_IsReadOnly_m20267 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
extern "C" Object_t * SortedList_get_Keys_m20268 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C" Object_t * SortedList_get_Item_m20269 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C" void SortedList_set_Item_m20270 (SortedList_t4474 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C" int32_t SortedList_get_Capacity_m20271 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C" void SortedList_set_Capacity_m20272 (SortedList_t4474 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C" void SortedList_Add_m20273 (SortedList_t4474 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C" bool SortedList_Contains_m20274 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C" Object_t * SortedList_GetEnumerator_m20275 (SortedList_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C" void SortedList_Remove_m20276 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C" void SortedList_CopyTo_m20277 (SortedList_t4474 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C" void SortedList_RemoveAt_m20278 (SortedList_t4474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C" int32_t SortedList_IndexOfKey_m20279 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C" bool SortedList_ContainsKey_m20280 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C" Object_t * SortedList_GetByIndex_m20281 (SortedList_t4474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
extern "C" Object_t * SortedList_GetKey_m20282 (SortedList_t4474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C" void SortedList_EnsureCapacity_m20283 (SortedList_t4474 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void SortedList_PutImpl_m20284 (SortedList_t4474 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C" Object_t * SortedList_GetImpl_m20285 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C" void SortedList_InitTable_m20286 (SortedList_t4474 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
extern "C" void SortedList_CopyToArray_m20287 (SortedList_t4474 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C" int32_t SortedList_Find_m20288 (SortedList_t4474 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
