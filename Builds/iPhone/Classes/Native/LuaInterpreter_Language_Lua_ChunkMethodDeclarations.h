#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.Chunk::.ctor()
extern "C" void Chunk__ctor_m11741 (Chunk_t2579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute()
extern "C" LuaValue_t748 * Chunk_Execute_m11742 (Chunk_t2579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * Chunk_Execute_m11743 (Chunk_t2579 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(System.Boolean&)
extern "C" LuaValue_t748 * Chunk_Execute_m11744 (Chunk_t2579 * __this, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
