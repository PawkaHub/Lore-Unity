#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t32;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4261;
// System.Net.ICredentials
struct ICredentials_t4150;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t4279;
// System.Net.FileWebResponse
struct FileWebResponse_t4280;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3313;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.FileWebRequest
struct  FileWebRequest_t4276  : public WebRequest_t4184
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t32 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t4261 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t4280 * ___webResponse_16;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t3313 * ___requestEndEvent_17;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_18;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_19;
};
