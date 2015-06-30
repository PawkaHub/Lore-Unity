#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
struct FlexibleListWrapper_2_t5620;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::IndexOf(TOut)
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m33747_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_IndexOf_m33747(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t5620 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m33747_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Insert(System.Int32,TOut)
extern "C" void FlexibleListWrapper_2_Insert_m33748_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_Insert_m33748(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t5620 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m33748_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m33749_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, const MethodInfo* method);
#define FlexibleListWrapper_2_RemoveAt_m33749(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t5620 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m33749_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_Item(System.Int32)
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m33750_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, const MethodInfo* method);
#define FlexibleListWrapper_2_get_Item_m33750(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t5620 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m33750_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::set_Item(System.Int32,TOut)
extern "C" void FlexibleListWrapper_2_set_Item_m33751_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define FlexibleListWrapper_2_set_Item_m33751(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t5620 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m33751_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Add(TOut)
extern "C" void FlexibleListWrapper_2_Add_m33752_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_Add_m33752(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t5620 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m33752_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m33753_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method);
#define FlexibleListWrapper_2_Clear_m33753(__this, method) (( void (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m33753_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Contains(TOut)
extern "C" bool FlexibleListWrapper_2_Contains_m33754_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_Contains_m33754(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t5620 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m33754_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m33755_gshared (FlexibleListWrapper_2_t5620 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleListWrapper_2_CopyTo_m33755(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t5620 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m33755_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m33756_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method);
#define FlexibleListWrapper_2_get_Count_m33756(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m33756_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m33757_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method);
#define FlexibleListWrapper_2_get_IsReadOnly_m33757(__this, method) (( bool (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m33757_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Remove(TOut)
extern "C" bool FlexibleListWrapper_2_Remove_m33758_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_Remove_m33758(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t5620 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m33758_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m33759_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method);
#define FlexibleListWrapper_2_GetEnumerator_m33759(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m33759_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m33760_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method);
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m33760(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m33760_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::<CopyTo>b__0(TIn)
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m33761_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m33761(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m33761_gshared)(__this /* static, unused */, ___item, method)
