#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t3509;
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.WhileStmt
struct  WhileStmt_t3522  : public Statement_t3504
{
	// Language.Lua.Expr Language.Lua.WhileStmt::Condition
	Expr_t3509 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.WhileStmt::Body
	Chunk_t3507 * ___Body_1;
};
