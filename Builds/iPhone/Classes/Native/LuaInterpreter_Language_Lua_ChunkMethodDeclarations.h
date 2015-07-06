#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.Chunk::.ctor()
extern "C" void Chunk__ctor_m10532 (Chunk_t3507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute()
extern "C" LuaValue_t1075 * Chunk_Execute_m10533 (Chunk_t3507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * Chunk_Execute_m10534 (Chunk_t3507 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(System.Boolean&)
extern "C" LuaValue_t1075 * Chunk_Execute_m10535 (Chunk_t3507 * __this, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
