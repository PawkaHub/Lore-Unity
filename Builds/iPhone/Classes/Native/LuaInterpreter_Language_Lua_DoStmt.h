#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.DoStmt
struct  DoStmt_t2580  : public Statement_t2576
{
	// Language.Lua.Chunk Language.Lua.DoStmt::Body
	Chunk_t2579 * ___Body_0;
};
