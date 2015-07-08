#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t4146  : public TextWriter_t3796
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t696 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
