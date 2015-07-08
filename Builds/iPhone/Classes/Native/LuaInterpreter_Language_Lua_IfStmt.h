#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t3747;
// Language.Lua.Chunk
struct Chunk_t3745;
// System.Collections.Generic.List`1<Language.Lua.ElseifBlock>
struct List_1_t3754;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.IfStmt
struct  IfStmt_t3755  : public Statement_t3742
{
	// Language.Lua.Expr Language.Lua.IfStmt::Condition
	Expr_t3747 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.IfStmt::ThenBlock
	Chunk_t3745 * ___ThenBlock_1;
	// System.Collections.Generic.List`1<Language.Lua.ElseifBlock> Language.Lua.IfStmt::ElseifBlocks
	List_1_t3754 * ___ElseifBlocks_2;
	// Language.Lua.Chunk Language.Lua.IfStmt::ElseBlock
	Chunk_t3745 * ___ElseBlock_3;
};
