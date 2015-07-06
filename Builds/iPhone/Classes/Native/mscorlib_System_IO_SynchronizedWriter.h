#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3558;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t5081  : public TextWriter_t3558
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t3558 * ___writer_3;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_4;
};
