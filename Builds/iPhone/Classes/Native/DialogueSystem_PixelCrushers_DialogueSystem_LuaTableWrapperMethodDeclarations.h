#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t1076;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1395;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t998;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void PixelCrushers.DialogueSystem.LuaTableWrapper::.ctor(Language.Lua.LuaTable)
extern "C" void LuaTableWrapper__ctor_m5276 (LuaTableWrapper_t1076 * __this, LuaTable_t1077 * ___luaTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaTableWrapper::get_IsValid()
extern "C" bool LuaTableWrapper_get_IsValid_m5277 (LuaTableWrapper_t1076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.LuaTableWrapper::get_Count()
extern "C" int32_t LuaTableWrapper_get_Count_m5278 (LuaTableWrapper_t1076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> PixelCrushers.DialogueSystem.LuaTableWrapper::get_Keys()
extern "C" Object_t* LuaTableWrapper_get_Keys_m5279 (LuaTableWrapper_t1076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> PixelCrushers.DialogueSystem.LuaTableWrapper::get_Values()
extern "C" Object_t* LuaTableWrapper_get_Values_m5280 (LuaTableWrapper_t1076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PixelCrushers.DialogueSystem.LuaTableWrapper::get_Item(System.String)
extern "C" Object_t * LuaTableWrapper_get_Item_m5281 (LuaTableWrapper_t1076 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PixelCrushers.DialogueSystem.LuaTableWrapper::get_Item(System.Int32)
extern "C" Object_t * LuaTableWrapper_get_Item_m5282 (LuaTableWrapper_t1076 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
