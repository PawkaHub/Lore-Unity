#pragma once
#include <stdint.h>
// Language.Lua.BaseExpr
struct BaseExpr_t2596;
// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t2616;
// Language.Lua.Term
#include "LuaInterpreter_Language_Lua_Term.h"
// Language.Lua.PrimaryExpr
struct  PrimaryExpr_t2617  : public Term_t2597
{
	// Language.Lua.BaseExpr Language.Lua.PrimaryExpr::Base
	BaseExpr_t2596 * ___Base_0;
	// System.Collections.Generic.List`1<Language.Lua.Access> Language.Lua.PrimaryExpr::Accesses
	List_1_t2616 * ___Accesses_1;
};
