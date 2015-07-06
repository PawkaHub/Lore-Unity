#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.DoStmt
struct  DoStmt_t3508  : public Statement_t3504
{
	// Language.Lua.Chunk Language.Lua.DoStmt::Body
	Chunk_t3507 * ___Body_0;
};
