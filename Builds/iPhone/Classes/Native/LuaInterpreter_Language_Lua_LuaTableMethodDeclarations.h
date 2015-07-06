#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaTable
struct LuaTable_t1077;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue>
struct IEnumerable_1_t1406;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerable_1_t1407;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaFunction
struct LuaFunction_t3568;
// Language.Lua.LuaFunc
struct LuaFunc_t3552;
// System.Reflection.MethodInfo
struct MethodInfo_t;

// System.Void Language.Lua.LuaTable::.ctor()
extern "C" void LuaTable__ctor_m10785 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::.ctor(Language.Lua.LuaTable)
extern "C" void LuaTable__ctor_m10786 (LuaTable_t1077 * __this, LuaTable_t1077 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaTable::get_MetaTable()
extern "C" LuaTable_t1077 * LuaTable_get_MetaTable_m10787 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaTable_set_MetaTable_m10788 (LuaTable_t1077 * __this, LuaTable_t1077 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaTable::get_Value()
extern "C" Object_t * LuaTable_get_Value_m10789 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::GetTypeCode()
extern "C" String_t* LuaTable_GetTypeCode_m10790 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Length()
extern "C" int32_t LuaTable_get_Length_m7098 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::get_Count()
extern "C" int32_t LuaTable_get_Count_m7101 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaTable::ToString()
extern "C" String_t* LuaTable_ToString_m10791 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_ListValues()
extern "C" Object_t* LuaTable_get_ListValues_m7099 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Language.Lua.LuaValue> Language.Lua.LuaTable::get_Keys()
extern "C" Object_t* LuaTable_get_Keys_m7097 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>> Language.Lua.LuaTable::get_KeyValuePairs()
extern "C" Object_t* LuaTable_get_KeyValuePairs_m7102 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::ContainsKey(Language.Lua.LuaValue)
extern "C" bool LuaTable_ContainsKey_m10792 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::AddValue(Language.Lua.LuaValue)
extern "C" void LuaTable_AddValue_m10793 (LuaTable_t1077 * __this, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::InsertValue(System.Int32,Language.Lua.LuaValue)
extern "C" void LuaTable_InsertValue_m10794 (LuaTable_t1077 * __this, int32_t ___index, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaTable::Remove(Language.Lua.LuaValue)
extern "C" bool LuaTable_Remove_m10795 (LuaTable_t1077 * __this, LuaValue_t1075 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveAt(System.Int32)
extern "C" void LuaTable_RemoveAt_m10796 (LuaTable_t1077 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort()
extern "C" void LuaTable_Sort_m10797 (LuaTable_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::Sort(Language.Lua.LuaFunction)
extern "C" void LuaTable_Sort_m10798 (LuaTable_t1077 * __this, LuaFunction_t3568 * ___compare, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.Int32)
extern "C" LuaValue_t1075 * LuaTable_GetValue_m7104 (LuaTable_t1077 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(System.String)
extern "C" LuaValue_t1075 * LuaTable_GetValue_m7106 (LuaTable_t1077 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetKey(System.String)
extern "C" LuaValue_t1075 * LuaTable_GetKey_m7105 (LuaTable_t1077 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetNameValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_SetNameValue_m7093 (LuaTable_t1077 * __this, String_t* ___name, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(System.String)
extern "C" void LuaTable_RemoveKey_m10799 (LuaTable_t1077 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void LuaTable_SetKeyValue_m10800 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RemoveKey(Language.Lua.LuaValue)
extern "C" void LuaTable_RemoveKey_m10801 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t1075 * LuaTable_GetValue_m10802 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(System.String)
extern "C" LuaValue_t1075 * LuaTable_GetValueFromMetaTable_m10803 (LuaTable_t1077 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::GetValueFromMetaTable(Language.Lua.LuaValue)
extern "C" LuaValue_t1075 * LuaTable_GetValueFromMetaTable_m10804 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::Register(System.String,Language.Lua.LuaFunc)
extern "C" LuaFunction_t3568 * LuaTable_Register_m10805 (LuaTable_t1077 * __this, String_t* ___name, LuaFunc_t3552 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.LuaTable::RegisterMethodFunction(System.String,System.Object,System.Reflection.MethodInfo)
extern "C" LuaFunction_t3568 * LuaTable_RegisterMethodFunction_m7092 (LuaTable_t1077 * __this, String_t* ___name, Object_t * ___target, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaTable::RawGetValue(Language.Lua.LuaValue)
extern "C" LuaValue_t1075 * LuaTable_RawGetValue_m10806 (LuaTable_t1077 * __this, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaTable::RawSetValue(System.String,Language.Lua.LuaValue)
extern "C" void LuaTable_RawSetValue_m10807 (LuaTable_t1077 * __this, String_t* ___name, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaTable::<Sort>m__6(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" int32_t LuaTable_U3CSortU3Em__6_m10808 (Object_t * __this /* static, unused */, LuaValue_t1075 * ___a, LuaValue_t1075 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
