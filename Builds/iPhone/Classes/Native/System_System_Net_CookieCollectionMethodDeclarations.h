﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieCollection
struct CookieCollection_t4266;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t4441;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t4263;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void System.Net.CookieCollection::.ctor()
extern "C" void CookieCollection__ctor_m13907 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C" void CookieCollection__cctor_m13908 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C" Object_t* CookieCollection_get_List_m13909 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C" int32_t CookieCollection_get_Count_m13910 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C" bool CookieCollection_get_IsSynchronized_m13911 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C" Object_t * CookieCollection_get_SyncRoot_m13912 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C" void CookieCollection_CopyTo_m13913 (CookieCollection_t4266 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C" Object_t * CookieCollection_GetEnumerator_m13914 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C" void CookieCollection_Add_m13915 (CookieCollection_t4266 * __this, Cookie_t4263 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C" void CookieCollection_Sort_m13916 (CookieCollection_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C" int32_t CookieCollection_SearchCookie_m13917 (CookieCollection_t4266 * __this, Cookie_t4263 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C" Cookie_t4263 * CookieCollection_get_Item_m13918 (CookieCollection_t4266 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
