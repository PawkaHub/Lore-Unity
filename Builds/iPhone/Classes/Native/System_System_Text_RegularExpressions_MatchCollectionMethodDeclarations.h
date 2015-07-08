#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t4375;
// System.Text.RegularExpressions.Match
struct Match_t1658;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t749;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
extern "C" void MatchCollection__ctor_m14823 (MatchCollection_t4375 * __this, Match_t1658 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C" int32_t MatchCollection_get_Count_m14824 (MatchCollection_t4375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern "C" bool MatchCollection_get_IsSynchronized_m14825 (MatchCollection_t4375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern "C" Match_t1658 * MatchCollection_get_Item_m14826 (MatchCollection_t4375 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern "C" Object_t * MatchCollection_get_SyncRoot_m14827 (MatchCollection_t4375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern "C" void MatchCollection_CopyTo_m14828 (MatchCollection_t4375 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern "C" Object_t * MatchCollection_GetEnumerator_m14829 (MatchCollection_t4375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
extern "C" bool MatchCollection_TryToGet_m14830 (MatchCollection_t4375 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
extern "C" Object_t * MatchCollection_get_FullList_m14831 (MatchCollection_t4375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
