#pragma once
#include <stdint.h>
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.Expr
struct Expr_t3509;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.RepeatStmt
struct  RepeatStmt_t3520  : public Statement_t3504
{
	// Language.Lua.Chunk Language.Lua.RepeatStmt::Body
	Chunk_t3507 * ___Body_0;
	// Language.Lua.Expr Language.Lua.RepeatStmt::Condition
	Expr_t3509 * ___Condition_1;
};
