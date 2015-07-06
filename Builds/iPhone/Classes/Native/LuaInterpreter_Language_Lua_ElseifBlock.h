#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t3509;
// Language.Lua.Chunk
struct Chunk_t3507;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.ElseifBlock
struct  ElseifBlock_t3584  : public Object_t
{
	// Language.Lua.Expr Language.Lua.ElseifBlock::Condition
	Expr_t3509 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.ElseifBlock::ThenBlock
	Chunk_t3507 * ___ThenBlock_1;
};
