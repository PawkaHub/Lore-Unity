#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.FileLib
struct FileLib_t2628;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;
// System.String
struct String_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Language.Lua.Library.FileLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void FileLib_RegisterModule_m11851 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.FileLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void FileLib_RegisterFunctions_m11852 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::close(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_close_m11853 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::read(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_read_m11854 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::lines(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_lines_m11855 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::seek(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_seek_m11856 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.SeekOrigin Language.Lua.Library.FileLib::GetSeekOrigin(System.String)
extern "C" int32_t FileLib_GetSeekOrigin_m11857 (Object_t * __this /* static, unused */, String_t* ___whence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::write(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_write_m11858 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::flush(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * FileLib_flush_m11859 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
