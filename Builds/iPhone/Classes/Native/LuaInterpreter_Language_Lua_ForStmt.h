#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Expr
struct Expr_t3509;
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.ForStmt
struct  ForStmt_t3512  : public Statement_t3504
{
	// System.String Language.Lua.ForStmt::VarName
	String_t* ___VarName_0;
	// Language.Lua.Expr Language.Lua.ForStmt::Start
	Expr_t3509 * ___Start_1;
	// Language.Lua.Expr Language.Lua.ForStmt::End
	Expr_t3509 * ___End_2;
	// Language.Lua.Expr Language.Lua.ForStmt::Step
	Expr_t3509 * ___Step_3;
	// Language.Lua.Chunk Language.Lua.ForStmt::Body
	Chunk_t3507 * ___Body_4;
};
