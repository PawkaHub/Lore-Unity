#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Chunk
struct Chunk_t2579;
// System.Collections.Generic.List`1<Language.Lua.ElseifBlock>
struct List_1_t2588;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.IfStmt
struct  IfStmt_t2589  : public Statement_t2576
{
	// Language.Lua.Expr Language.Lua.IfStmt::Condition
	Expr_t2581 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.IfStmt::ThenBlock
	Chunk_t2579 * ___ThenBlock_1;
	// System.Collections.Generic.List`1<Language.Lua.ElseifBlock> Language.Lua.IfStmt::ElseifBlocks
	List_1_t2588 * ___ElseifBlocks_2;
	// Language.Lua.Chunk Language.Lua.IfStmt::ElseBlock
	Chunk_t2579 * ___ElseBlock_3;
};
