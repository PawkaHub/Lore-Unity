#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.WhileStmt
struct  WhileStmt_t2594  : public Statement_t2576
{
	// Language.Lua.Expr Language.Lua.WhileStmt::Condition
	Expr_t2581 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.WhileStmt::Body
	Chunk_t2579 * ___Body_1;
};
