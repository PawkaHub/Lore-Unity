#pragma once
#include <stdint.h>
// Language.Lua.ParamList
struct ParamList_t2600;
// Language.Lua.Chunk
struct Chunk_t2579;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.FunctionBody
struct  FunctionBody_t2586  : public Object_t
{
	// Language.Lua.ParamList Language.Lua.FunctionBody::ParamList
	ParamList_t2600 * ___ParamList_0;
	// Language.Lua.Chunk Language.Lua.FunctionBody::Chunk
	Chunk_t2579 * ___Chunk_1;
};
