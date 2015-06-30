#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.RepeatStmt
struct  RepeatStmt_t2592  : public Statement_t2576
{
	// Language.Lua.Chunk Language.Lua.RepeatStmt::Body
	Chunk_t2579 * ___Body_0;
	// Language.Lua.Expr Language.Lua.RepeatStmt::Condition
	Expr_t2581 * ___Condition_1;
};
