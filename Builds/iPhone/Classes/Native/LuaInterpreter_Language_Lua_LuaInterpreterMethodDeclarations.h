#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaInterpreter
struct LuaInterpreter_t1081;
// Language.Lua.LuaValue
struct LuaValue_t748;
// System.String
struct String_t;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.Chunk
struct Chunk_t2579;

// System.Void Language.Lua.LuaInterpreter::.ctor()
extern "C" void LuaInterpreter__ctor_m11730 (LuaInterpreter_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaInterpreter::.cctor()
extern "C" void LuaInterpreter__cctor_m11731 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::RunFile(System.String)
extern "C" LuaValue_t748 * LuaInterpreter_RunFile_m11732 (Object_t * __this /* static, unused */, String_t* ___luaFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::RunFile(System.String,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * LuaInterpreter_RunFile_m11733 (Object_t * __this /* static, unused */, String_t* ___luaFile, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::Interpreter(System.String)
extern "C" LuaValue_t748 * LuaInterpreter_Interpreter_m11734 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::Interpreter(System.String,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * LuaInterpreter_Interpreter_m5236 (Object_t * __this /* static, unused */, String_t* ___luaCode, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.LuaInterpreter::Parse(System.String)
extern "C" Chunk_t2579 * LuaInterpreter_Parse_m11735 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaInterpreter::CreateGlobalEnviroment()
extern "C" LuaTable_t750 * LuaInterpreter_CreateGlobalEnviroment_m5235 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
