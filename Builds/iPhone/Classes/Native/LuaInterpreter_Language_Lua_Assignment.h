#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t3501;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3502;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.Assignment
struct  Assignment_t3503  : public Statement_t3504
{
	// System.Collections.Generic.List`1<Language.Lua.Var> Language.Lua.Assignment::VarList
	List_1_t3501 * ___VarList_0;
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Assignment::ExprList
	List_1_t3502 * ___ExprList_1;
};
