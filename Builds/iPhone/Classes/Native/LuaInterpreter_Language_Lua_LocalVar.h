﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3740;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.LocalVar
struct  LocalVar_t3757  : public Statement_t3742
{
	// System.Collections.Generic.List`1<System.String> Language.Lua.LocalVar::NameList
	List_1_t1 * ___NameList_0;
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.LocalVar::ExprList
	List_1_t3740 * ___ExprList_1;
};
