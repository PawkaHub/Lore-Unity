#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int64[]
struct Int64U5BU5D_t4037;
// System.Collections.IComparer
struct IComparer_t4203;
// System.Array/Swapper
struct Swapper_t5156;
// System.Double[]
struct DoubleU5BU5D_t5118;
// System.Char[]
struct CharU5BU5D_t583;

// System.Void System.Array::.ctor()
extern "C" void Array__ctor_m19325 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Array_System_Collections_IList_get_Item_m19326 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_set_Item_m19327 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C" int32_t Array_System_Collections_IList_Add_m19328 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C" void Array_System_Collections_IList_Clear_m19329 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C" bool Array_System_Collections_IList_Contains_m19330 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Array_System_Collections_IList_IndexOf_m19331 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_Insert_m19332 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C" void Array_System_Collections_IList_Remove_m19333 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void Array_System_Collections_IList_RemoveAt_m19334 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C" int32_t Array_System_Collections_ICollection_get_Count_m19335 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C" int32_t Array_InternalArray__ICollection_get_Count_m19336 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C" bool Array_InternalArray__ICollection_get_IsReadOnly_m19337 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C" void Array_InternalArray__ICollection_Clear_m19338 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C" void Array_InternalArray__RemoveAt_m19339 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C" int32_t Array_get_Length_m13206 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C" int64_t Array_get_LongLength_m19340 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C" int32_t Array_get_Rank_m15266 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C" int32_t Array_GetRank_m19341 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" int32_t Array_GetLength_m19342 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C" int64_t Array_GetLongLength_m19343 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C" int32_t Array_GetLowerBound_m19344 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C" Object_t * Array_GetValue_m19345 (Array_t * __this, Int32U5BU5D_t119* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C" void Array_SetValue_m19346 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t119* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C" Object_t * Array_GetValueImpl_m19347 (Array_t * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C" void Array_SetValueImpl_m19348 (Array_t * __this, Object_t * ___value, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" bool Array_FastCopy_m19349 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstanceImpl_m19350 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t119* ___lengths, Int32U5BU5D_t119* ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C" bool Array_get_IsSynchronized_m19351 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C" Object_t * Array_get_SyncRoot_m19352 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C" bool Array_get_IsFixedSize_m19353 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C" bool Array_get_IsReadOnly_m19354 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" Object_t * Array_GetEnumerator_m19355 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C" int32_t Array_GetUpperBound_m19356 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C" Object_t * Array_GetValue_m13214 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m19357 (Array_t * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m19358 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C" Object_t * Array_GetValue_m19359 (Array_t * __this, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m19360 (Array_t * __this, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m19361 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C" void Array_SetValue_m19362 (Array_t * __this, Object_t * ___value, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C" void Array_SetValue_m19363 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C" void Array_SetValue_m19364 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" void Array_SetValue_m13210 (Array_t * __this, Object_t * ___value, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C" void Array_SetValue_m19365 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C" void Array_SetValue_m19366 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C" Array_t * Array_CreateInstance_m13207 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m19367 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m19368 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C" Array_t * Array_CreateInstance_m19369 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t119* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstance_m19370 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t119* ___lengths, Int32U5BU5D_t119* ___lowerBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C" Int32U5BU5D_t119* Array_GetIntArray_m19371 (Object_t * __this /* static, unused */, Int64U5BU5D_t4037* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C" Array_t * Array_CreateInstance_m19372 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int64U5BU5D_t4037* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C" Object_t * Array_GetValue_m19373 (Array_t * __this, Int64U5BU5D_t4037* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C" void Array_SetValue_m19374 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t4037* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C" int32_t Array_BinarySearch_m19375 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m19376 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C" int32_t Array_BinarySearch_m19377 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m19378 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_DoBinarySearch_m19379 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" void Array_Clear_m15320 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C" void Array_ClearInternal_m19380 (Object_t * __this /* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C" Object_t * Array_Clone_m19381 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" void Array_Copy_m13208 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_Copy_m13285 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" void Array_Copy_m19382 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C" void Array_Copy_m19383 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C" int32_t Array_IndexOf_m19384 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_IndexOf_m19385 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_m19386 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C" void Array_Initialize_m15306 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C" int32_t Array_LastIndexOf_m19387 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_LastIndexOf_m19388 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_m19389 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C" Swapper_t5156 * Array_get_swapper_m19390 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C" void Array_Reverse_m11407 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" void Array_Reverse_m16491 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C" void Array_Sort_m19391 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C" void Array_Sort_m19392 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m19393 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m19394 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m19395 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m19396 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m19397 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m19398 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C" void Array_int_swapper_m19399 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C" void Array_obj_swapper_m19400 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C" void Array_slow_swapper_m19401 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C" void Array_double_swapper_m19402 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C" int32_t Array_new_gap_m19403 (Object_t * __this /* static, unused */, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m19404 (Object_t * __this /* static, unused */, DoubleU5BU5D_t5118* ___array, int32_t ___start, int32_t ___size, Swapper_t5156 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m19405 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___start, int32_t ___size, Swapper_t5156 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m19406 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___array, int32_t ___start, int32_t ___size, Swapper_t5156 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_qsort_m19407 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_swap_m19408 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_compare_m19409 (Object_t * __this /* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" void Array_CopyTo_m19410 (Array_t * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C" void Array_CopyTo_m19411 (Array_t * __this, Array_t * ___array, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_ConstrainedCopy_m19412 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
