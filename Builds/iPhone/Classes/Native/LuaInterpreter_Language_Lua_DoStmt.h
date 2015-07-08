#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t3745;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.DoStmt
struct  DoStmt_t3746  : public Statement_t3742
{
	// Language.Lua.Chunk Language.Lua.DoStmt::Body
	Chunk_t3745 * ___Body_0;
};
