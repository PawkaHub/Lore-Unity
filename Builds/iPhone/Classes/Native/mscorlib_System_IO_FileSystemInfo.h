﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileSystemInfo
struct  FileSystemInfo_t3967  : public MarshalByRefObject_t3647
{
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t3978  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;
};
