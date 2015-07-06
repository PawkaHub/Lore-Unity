#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaInterpreter
struct LuaInterpreter_t1404;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// System.String
struct String_t;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.Chunk
struct Chunk_t3507;

// System.Void Language.Lua.LuaInterpreter::.ctor()
extern "C" void LuaInterpreter__ctor_m10521 (LuaInterpreter_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaInterpreter::.cctor()
extern "C" void LuaInterpreter__cctor_m10522 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::RunFile(System.String)
extern "C" LuaValue_t1075 * LuaInterpreter_RunFile_m10523 (Object_t * __this /* static, unused */, String_t* ___luaFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::RunFile(System.String,Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * LuaInterpreter_RunFile_m10524 (Object_t * __this /* static, unused */, String_t* ___luaFile, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::Interpreter(System.String)
extern "C" LuaValue_t1075 * LuaInterpreter_Interpreter_m10525 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreter::Interpreter(System.String,Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * LuaInterpreter_Interpreter_m7091 (Object_t * __this /* static, unused */, String_t* ___luaCode, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.LuaInterpreter::Parse(System.String)
extern "C" Chunk_t3507 * LuaInterpreter_Parse_m10526 (Object_t * __this /* static, unused */, String_t* ___luaCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaInterpreter::CreateGlobalEnviroment()
extern "C" LuaTable_t1077 * LuaInterpreter_CreateGlobalEnviroment_m7090 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
