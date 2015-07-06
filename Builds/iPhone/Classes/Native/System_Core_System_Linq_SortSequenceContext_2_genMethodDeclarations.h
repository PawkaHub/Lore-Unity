#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t6882;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1559;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6879;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6881;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m38180_gshared (SortSequenceContext_2_t6882 * __this, Func_2_t1559 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t6881 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m38180(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t6882 *, Func_2_t1559 *, Object_t*, int32_t, SortContext_1_t6881 *, const MethodInfo*))SortSequenceContext_2__ctor_m38180_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m38181_gshared (SortSequenceContext_2_t6882 * __this, ObjectU5BU5D_t21* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m38181(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t6882 *, ObjectU5BU5D_t21*, const MethodInfo*))SortSequenceContext_2_Initialize_m38181_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m38182_gshared (SortSequenceContext_2_t6882 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m38182(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t6882 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m38182_gshared)(__this, ___first_index, ___second_index, method)
