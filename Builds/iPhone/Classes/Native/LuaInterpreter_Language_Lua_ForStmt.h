#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.ForStmt
struct  ForStmt_t2584  : public Statement_t2576
{
	// System.String Language.Lua.ForStmt::VarName
	String_t* ___VarName_0;
	// Language.Lua.Expr Language.Lua.ForStmt::Start
	Expr_t2581 * ___Start_1;
	// Language.Lua.Expr Language.Lua.ForStmt::End
	Expr_t2581 * ___End_2;
	// Language.Lua.Expr Language.Lua.ForStmt::Step
	Expr_t2581 * ___Step_3;
	// Language.Lua.Chunk Language.Lua.ForStmt::Body
	Chunk_t2579 * ___Body_4;
};
