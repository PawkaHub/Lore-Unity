#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t2008;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t2011;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t2008  : public Capture_t2009
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t2011 * ___captures_5;
};
struct Group_t2008_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2008 * ___Fail_3;
};
