#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t3745;
// Language.Lua.Expr
struct Expr_t3747;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.RepeatStmt
struct  RepeatStmt_t3758  : public Statement_t3742
{
	// Language.Lua.Chunk Language.Lua.RepeatStmt::Body
	Chunk_t3745 * ___Body_0;
	// Language.Lua.Expr Language.Lua.RepeatStmt::Condition
	Expr_t3747 * ___Condition_1;
};
