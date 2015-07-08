#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaTable
struct LuaTable_t1336;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue>
struct IEnumerable_1_t1665;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerable_1_t1666;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaFunction
struct LuaFunction_t3806;
// Language.Lua.LuaFunc
struct LuaFunc_t3790;
// System.Reflection.MethodInfo
struct MethodInfo_t;

// System.Void Language.Lua.LuaTable::.ctor()
extern "C" void LuaTable__ctor_m11204 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::.ctor(Language.Lua.LuaTable)
extern "C" void LuaTable__ctor_m11205 (LuaTable_t1336 * __this, LuaTable_t1336 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaTable::get_MetaTable()
extern "C" LuaTable_t1336 * LuaTable_get_MetaTable_m11206 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaTable_set_MetaTable_m11207 (LuaTable_t1336 * __this, LuaTable_t1336 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaTable::get_Value()
extern "C" Object_t * LuaTable_get_Value_m11208 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::GetTypeCode()
extern "C" String_t* LuaTable_GetTypeCode_m11209 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Length()
extern "C" int32_t LuaTable_get_Length_m7545 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Count()
extern "C" int32_t LuaTable_get_Count_m7548 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::ToString()
extern "C" String_t* LuaTable_ToString_m11210 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_ListValues()
extern "C" Object_t* LuaTable_get_ListValues_m7546 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_Keys()
extern "C" Object_t* LuaTable_get_Keys_m7544 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>> Language.Lua.LuaTable::get_KeyValuePairs()
extern "C" Object_t* LuaTable_get_KeyValuePairs_m7549 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::ContainsKey(Language.Lua.LuaValue)
extern "C" bool LuaTable_ContainsKey_m11211 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::AddValue(Language.Lua.LuaValue)
extern "C" void LuaTable_AddValue_m11212 (LuaTable_t1336 * __this, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::InsertValue(System.Int32,Language.Lua.LuaValue)
extern "C" void LuaTable_InsertValue_m11213 (LuaTable_t1336 * __this, int32_t ___index, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::Remove(Language.Lua.LuaValue)
extern "C" bool LuaTable_Remove_m11214 (LuaTable_t1336 * __this, LuaValue_t1334 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveAt(System.Int32)
extern "C" void LuaTable_RemoveAt_m11215 (LuaTable_t1336 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort()
extern "C" void LuaTable_Sort_m11216 (LuaTable_t1336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort(Language.Lua.LuaFunction)
extern "C" void LuaTable_Sort_m11217 (LuaTable_t1336 * __this, LuaFunction_t3806 * ___compare, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.Int32)
extern "C" LuaValue_t1334 * LuaTable_GetValue_m7551 (LuaTable_t1336 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.String)
extern "C" LuaValue_t1334 * LuaTable_GetValue_m7553 (LuaTable_t1336 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetKey(System.String)
extern "C" LuaValue_t1334 * LuaTable_GetKey_m7552 (LuaTable_t1336 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetNameValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_SetNameValue_m7540 (LuaTable_t1336 * __this, String_t* ___name, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(System.String)
extern "C" void LuaTable_RemoveKey_m11218 (LuaTable_t1336 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void LuaTable_SetKeyValue_m11219 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(Language.Lua.LuaValue)
extern "C" void LuaTable_RemoveKey_m11220 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t1334 * LuaTable_GetValue_m11221 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(System.String)
extern "C" LuaValue_t1334 * LuaTable_GetValueFromMetaTable_m11222 (LuaTable_t1336 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(Language.Lua.LuaValue)
extern "C" LuaValue_t1334 * LuaTable_GetValueFromMetaTable_m11223 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::Register(System.String,Language.Lua.LuaFunc)
extern "C" LuaFunction_t3806 * LuaTable_Register_m11224 (LuaTable_t1336 * __this, String_t* ___name, LuaFunc_t3790 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::RegisterMethodFunction(System.String,System.Object,System.Reflection.MethodInfo)
extern "C" LuaFunction_t3806 * LuaTable_RegisterMethodFunction_m7539 (LuaTable_t1336 * __this, String_t* ___name, Object_t * ___target, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::RawGetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t1334 * LuaTable_RawGetValue_m11225 (LuaTable_t1336 * __this, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RawSetValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_RawSetValue_m11226 (LuaTable_t1336 * __this, String_t* ___name, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::<Sort>m__6(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" int32_t LuaTable_U3CSortU3Em__6_m11227 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___a, LuaValue_t1334 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
