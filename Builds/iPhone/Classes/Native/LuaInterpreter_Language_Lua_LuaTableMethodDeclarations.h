#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaTable
struct LuaTable_t750;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue>
struct IEnumerable_1_t1083;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerable_1_t1084;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaFunction
struct LuaFunction_t2638;
// Language.Lua.LuaFunc
struct LuaFunc_t2624;
// System.Reflection.MethodInfo
struct MethodInfo_t;

// System.Void Language.Lua.LuaTable::.ctor()
extern "C" void LuaTable__ctor_m11994 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::.ctor(Language.Lua.LuaTable)
extern "C" void LuaTable__ctor_m11995 (LuaTable_t750 * __this, LuaTable_t750 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaTable::get_MetaTable()
extern "C" LuaTable_t750 * LuaTable_get_MetaTable_m11996 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaTable_set_MetaTable_m11997 (LuaTable_t750 * __this, LuaTable_t750 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaTable::get_Value()
extern "C" Object_t * LuaTable_get_Value_m11998 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::GetTypeCode()
extern "C" String_t* LuaTable_GetTypeCode_m11999 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Length()
extern "C" int32_t LuaTable_get_Length_m5244 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Count()
extern "C" int32_t LuaTable_get_Count_m5247 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::ToString()
extern "C" String_t* LuaTable_ToString_m12000 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_ListValues()
extern "C" Object_t* LuaTable_get_ListValues_m5245 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_Keys()
extern "C" Object_t* LuaTable_get_Keys_m5243 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>> Language.Lua.LuaTable::get_KeyValuePairs()
extern "C" Object_t* LuaTable_get_KeyValuePairs_m5248 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::ContainsKey(Language.Lua.LuaValue)
extern "C" bool LuaTable_ContainsKey_m12001 (LuaTable_t750 * __this, LuaValue_t748 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::AddValue(Language.Lua.LuaValue)
extern "C" void LuaTable_AddValue_m12002 (LuaTable_t750 * __this, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::InsertValue(System.Int32,Language.Lua.LuaValue)
extern "C" void LuaTable_InsertValue_m12003 (LuaTable_t750 * __this, int32_t ___index, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::Remove(Language.Lua.LuaValue)
extern "C" bool LuaTable_Remove_m12004 (LuaTable_t750 * __this, LuaValue_t748 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveAt(System.Int32)
extern "C" void LuaTable_RemoveAt_m12005 (LuaTable_t750 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort()
extern "C" void LuaTable_Sort_m12006 (LuaTable_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort(Language.Lua.LuaFunction)
extern "C" void LuaTable_Sort_m12007 (LuaTable_t750 * __this, LuaFunction_t2638 * ___compare, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.Int32)
extern "C" LuaValue_t748 * LuaTable_GetValue_m5250 (LuaTable_t750 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.String)
extern "C" LuaValue_t748 * LuaTable_GetValue_m5252 (LuaTable_t750 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetKey(System.String)
extern "C" LuaValue_t748 * LuaTable_GetKey_m5251 (LuaTable_t750 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetNameValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_SetNameValue_m5238 (LuaTable_t750 * __this, String_t* ___name, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(System.String)
extern "C" void LuaTable_RemoveKey_m12008 (LuaTable_t750 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void LuaTable_SetKeyValue_m12009 (LuaTable_t750 * __this, LuaValue_t748 * ___key, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(Language.Lua.LuaValue)
extern "C" void LuaTable_RemoveKey_m12010 (LuaTable_t750 * __this, LuaValue_t748 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t748 * LuaTable_GetValue_m12011 (LuaTable_t750 * __this, LuaValue_t748 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(System.String)
extern "C" LuaValue_t748 * LuaTable_GetValueFromMetaTable_m12012 (LuaTable_t750 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(Language.Lua.LuaValue)
extern "C" LuaValue_t748 * LuaTable_GetValueFromMetaTable_m12013 (LuaTable_t750 * __this, LuaValue_t748 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::Register(System.String,Language.Lua.LuaFunc)
extern "C" LuaFunction_t2638 * LuaTable_Register_m12014 (LuaTable_t750 * __this, String_t* ___name, LuaFunc_t2624 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::RegisterMethodFunction(System.String,System.Object,System.Reflection.MethodInfo)
extern "C" LuaFunction_t2638 * LuaTable_RegisterMethodFunction_m5237 (LuaTable_t750 * __this, String_t* ___name, Object_t * ___target, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::RawGetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t748 * LuaTable_RawGetValue_m12015 (LuaTable_t750 * __this, LuaValue_t748 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RawSetValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_RawSetValue_m12016 (LuaTable_t750 * __this, String_t* ___name, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::<Sort>m__6(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" int32_t LuaTable_U3CSortU3Em__6_m12017 (Object_t * __this /* static, unused */, LuaValue_t748 * ___a, LuaValue_t748 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
