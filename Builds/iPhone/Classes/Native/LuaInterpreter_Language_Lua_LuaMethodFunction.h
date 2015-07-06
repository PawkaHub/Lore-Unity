#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Language.Lua.LuaFunction
#include "LuaInterpreter_Language_Lua_LuaFunction.h"
// Language.Lua.LuaMethodFunction
struct  LuaMethodFunction_t3569  : public LuaFunction_t3568
{
	// System.Object Language.Lua.LuaMethodFunction::<Target>k__BackingField
	Object_t * ___U3CTargetU3Ek__BackingField_1;
	// System.Reflection.MethodInfo Language.Lua.LuaMethodFunction::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_2;
};
