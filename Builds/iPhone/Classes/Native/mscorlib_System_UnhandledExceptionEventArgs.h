#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t5426  : public EventArgs_t1202
{
	// System.Object System.UnhandledExceptionEventArgs::exception
	Object_t * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;
};
