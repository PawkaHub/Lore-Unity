#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Chunk
struct Chunk_t3745;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.Chunk::.ctor()
extern "C" void Chunk__ctor_m10951 (Chunk_t3745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute()
extern "C" LuaValue_t1334 * Chunk_Execute_m10952 (Chunk_t3745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * Chunk_Execute_m10953 (Chunk_t3745 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Chunk::Execute(System.Boolean&)
extern "C" LuaValue_t1334 * Chunk_Execute_m10954 (Chunk_t3745 * __this, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
