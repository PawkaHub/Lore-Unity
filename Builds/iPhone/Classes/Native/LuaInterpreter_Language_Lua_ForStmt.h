#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Expr
struct Expr_t3747;
// Language.Lua.Chunk
struct Chunk_t3745;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.ForStmt
struct  ForStmt_t3750  : public Statement_t3742
{
	// System.String Language.Lua.ForStmt::VarName
	String_t* ___VarName_0;
	// Language.Lua.Expr Language.Lua.ForStmt::Start
	Expr_t3747 * ___Start_1;
	// Language.Lua.Expr Language.Lua.ForStmt::End
	Expr_t3747 * ___End_2;
	// Language.Lua.Expr Language.Lua.ForStmt::Step
	Expr_t3747 * ___Step_3;
	// Language.Lua.Chunk Language.Lua.ForStmt::Body
	Chunk_t3745 * ___Body_4;
};
