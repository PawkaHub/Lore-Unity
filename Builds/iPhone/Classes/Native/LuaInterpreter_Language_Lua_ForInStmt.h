#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3502;
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.ForInStmt
struct  ForInStmt_t3511  : public Statement_t3504
{
	// System.Collections.Generic.List`1<System.String> Language.Lua.ForInStmt::NameList
	List_1_t1 * ___NameList_0;
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.ForInStmt::ExprList
	List_1_t3502 * ___ExprList_1;
	// Language.Lua.Chunk Language.Lua.ForInStmt::Body
	Chunk_t3507 * ___Body_2;
};
