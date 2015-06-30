#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Access
#include "LuaInterpreter_Language_Lua_Access.h"
// Language.Lua.KeyAccess
struct  KeyAccess_t2605  : public Access_t2595
{
	// Language.Lua.Expr Language.Lua.KeyAccess::Key
	Expr_t2581 * ___Key_0;
};
