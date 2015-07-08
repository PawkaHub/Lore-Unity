#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Lua
struct Lua_t674;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.Lua::.ctor()
extern "C" void Lua__ctor_m5687 (Lua_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Lua::.cctor()
extern "C" void Lua__cctor_m5688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua::get_WasInvoked()
extern "C" bool Lua_get_WasInvoked_m5689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Lua::set_WasInvoked(System.Boolean)
extern "C" void Lua_set_WasInvoked_m5690 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable PixelCrushers.DialogueSystem.Lua::get_Environment()
extern "C" LuaTable_t1336 * Lua_get_Environment_m5691 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.Lua::Run(System.String,System.Boolean,System.Boolean)
extern "C" Result_t641  Lua_Run_m5692 (Object_t * __this /* static, unused */, String_t* ___luaCode, bool ___debug, bool ___allowExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.Lua::Run(System.String,System.Boolean)
extern "C" Result_t641  Lua_Run_m5693 (Object_t * __this /* static, unused */, String_t* ___luaCode, bool ___debug, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.Lua::Run(System.String)
extern "C" Result_t641  Lua_Run_m3764 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua::IsTrue(System.String,System.Boolean,System.Boolean)
extern "C" bool Lua_IsTrue_m5694 (Object_t * __this /* static, unused */, String_t* ___luaCondition, bool ___debug, bool ___allowExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua::IsTrue(System.String,System.Boolean)
extern "C" bool Lua_IsTrue_m5695 (Object_t * __this /* static, unused */, String_t* ___luaCondition, bool ___debug, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua::IsTrue(System.String)
extern "C" bool Lua_IsTrue_m5696 (Object_t * __this /* static, unused */, String_t* ___luaCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue PixelCrushers.DialogueSystem.Lua::RunRaw(System.String,System.Boolean,System.Boolean)
extern "C" LuaValue_t1334 * Lua_RunRaw_m5697 (Object_t * __this /* static, unused */, String_t* ___luaCode, bool ___debug, bool ___allowExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue PixelCrushers.DialogueSystem.Lua::RunRaw(System.String,System.Boolean)
extern "C" LuaValue_t1334 * Lua_RunRaw_m5698 (Object_t * __this /* static, unused */, String_t* ___luaCode, bool ___debug, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue PixelCrushers.DialogueSystem.Lua::RunRaw(System.String)
extern "C" LuaValue_t1334 * Lua_RunRaw_m5699 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Lua::RegisterFunction(System.String,System.Object,System.Reflection.MethodInfo)
extern "C" void Lua_RegisterFunction_m2924 (Object_t * __this /* static, unused */, String_t* ___functionName, Object_t * ___target, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Lua::UnregisterFunction(System.String)
extern "C" void Lua_UnregisterFunction_m3614 (Object_t * __this /* static, unused */, String_t* ___functionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
