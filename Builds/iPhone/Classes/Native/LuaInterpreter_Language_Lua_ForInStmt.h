#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t2574;
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.ForInStmt
struct  ForInStmt_t2583  : public Statement_t2576
{
	// System.Collections.Generic.List`1<System.String> Language.Lua.ForInStmt::NameList
	List_1_t1 * ___NameList_0;
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.ForInStmt::ExprList
	List_1_t2574 * ___ExprList_1;
	// Language.Lua.Chunk Language.Lua.ForInStmt::Body
	Chunk_t2579 * ___Body_2;
};
